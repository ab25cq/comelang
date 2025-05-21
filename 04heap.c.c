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

typedef int wchar_t;

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
extern _Bool gComeBareMetal;
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
int mbtowc(int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, int anonymous_var_nameX239);
unsigned long  int mbstowcs(int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
unsigned long  int wcstombs(char* anonymous_var_nameX243, const int* anonymous_var_nameX244, unsigned long  int anonymous_var_nameX245);
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
void* memccpy(void* anonymous_var_nameX432, const void* anonymous_var_nameX433, int anonymous_var_nameX434, unsigned long  int anonymous_var_nameX435);
char* strsep(char** anonymous_var_nameX436, const char* anonymous_var_nameX437);
unsigned long  int strlcat(char* anonymous_var_nameX438, const char* anonymous_var_nameX439, unsigned long  int anonymous_var_nameX440);
unsigned long  int strlcpy(char* anonymous_var_nameX441, const char* anonymous_var_nameX442, unsigned long  int anonymous_var_nameX443);
void explicit_bzero(void* anonymous_var_nameX444, unsigned long  int anonymous_var_nameX445);
int strverscmp(const char* anonymous_var_nameX446, const char* anonymous_var_nameX447);
char* strchrnul(const char* anonymous_var_nameX448, int anonymous_var_nameX449);
char* strcasestr(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
void* memmem(const void* anonymous_var_nameX452, unsigned long  int anonymous_var_nameX453, const void* anonymous_var_nameX454, unsigned long  int anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long  int anonymous_var_nameX461);
char* basename();
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
int* wcscpy(int* anonymous_var_nameX518, const int* anonymous_var_nameX519);
int* wcsncpy(int* anonymous_var_nameX520, const int* anonymous_var_nameX521, unsigned long  int anonymous_var_nameX522);
int* wcscat(int* anonymous_var_nameX523, const int* anonymous_var_nameX524);
int* wcsncat(int* anonymous_var_nameX525, const int* anonymous_var_nameX526, unsigned long  int anonymous_var_nameX527);
int wcscmp(const int* anonymous_var_nameX528, const int* anonymous_var_nameX529);
int wcsncmp(const int* anonymous_var_nameX530, const int* anonymous_var_nameX531, unsigned long  int anonymous_var_nameX532);
int wcscoll(const int* anonymous_var_nameX533, const int* anonymous_var_nameX534);
unsigned long  int wcsxfrm(int* anonymous_var_nameX535, const int* anonymous_var_nameX536, unsigned long  int anonymous_var_nameX537);
int* wcschr(const int* anonymous_var_nameX538, int anonymous_var_nameX539);
int* wcsrchr(const int* anonymous_var_nameX540, int anonymous_var_nameX541);
unsigned long  int wcscspn(const int* anonymous_var_nameX542, const int* anonymous_var_nameX543);
unsigned long  int wcsspn(const int* anonymous_var_nameX544, const int* anonymous_var_nameX545);
int* wcspbrk(const int* anonymous_var_nameX546, const int* anonymous_var_nameX547);
int* wcstok(int* anonymous_var_nameX548, const int* anonymous_var_nameX549, int** anonymous_var_nameX550);
unsigned long  int wcslen(const int* anonymous_var_nameX551);
int* wcsstr(const int* anonymous_var_nameX552, const int* anonymous_var_nameX553);
int* wcswcs(const int* anonymous_var_nameX554, const int* anonymous_var_nameX555);
int* wmemchr(const int* anonymous_var_nameX556, int anonymous_var_nameX557, unsigned long  int anonymous_var_nameX558);
int wmemcmp(const int* anonymous_var_nameX559, const int* anonymous_var_nameX560, unsigned long  int anonymous_var_nameX561);
int* wmemcpy(int* anonymous_var_nameX562, const int* anonymous_var_nameX563, unsigned long  int anonymous_var_nameX564);
int* wmemmove(int* anonymous_var_nameX565, const int* anonymous_var_nameX566, unsigned long  int anonymous_var_nameX567);
int* wmemset(int* anonymous_var_nameX568, int anonymous_var_nameX569, unsigned long  int anonymous_var_nameX570);
unsigned int btowc(int anonymous_var_nameX571);
int wctob(unsigned int anonymous_var_nameX572);
int mbsinit(const struct __mbstate_t* anonymous_var_nameX573);
unsigned long  int mbrtowc(int* anonymous_var_nameX574, const char* anonymous_var_nameX575, unsigned long  int anonymous_var_nameX576, struct __mbstate_t* anonymous_var_nameX577);
unsigned long  int wcrtomb(char* anonymous_var_nameX578, int anonymous_var_nameX579, struct __mbstate_t* anonymous_var_nameX580);
unsigned long  int mbrlen(const char* anonymous_var_nameX581, unsigned long  int anonymous_var_nameX582, struct __mbstate_t* anonymous_var_nameX583);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX584, const char** anonymous_var_nameX585, unsigned long  int anonymous_var_nameX586, struct __mbstate_t* anonymous_var_nameX587);
unsigned long  int wcsrtombs(char* anonymous_var_nameX588, const int** anonymous_var_nameX589, unsigned long  int anonymous_var_nameX590, struct __mbstate_t* anonymous_var_nameX591);
float wcstof(const int* anonymous_var_nameX592, int** anonymous_var_nameX593);
double wcstod(const int* anonymous_var_nameX594, int** anonymous_var_nameX595);
long  double wcstold(const int* anonymous_var_nameX596, int** anonymous_var_nameX597);
long wcstol(const int* anonymous_var_nameX598, int** anonymous_var_nameX599, int anonymous_var_nameX600);
unsigned long  int wcstoul(const int* anonymous_var_nameX601, int** anonymous_var_nameX602, int anonymous_var_nameX603);
long long wcstoll(const int* anonymous_var_nameX604, int** anonymous_var_nameX605, int anonymous_var_nameX606);
unsigned long  long wcstoull(const int* anonymous_var_nameX607, int** anonymous_var_nameX608, int anonymous_var_nameX609);
int fwide(struct _IO_FILE* anonymous_var_nameX610, int anonymous_var_nameX611);
int wprintf(const int* anonymous_var_nameX612, ...);
int fwprintf(struct _IO_FILE* anonymous_var_nameX613, const int* anonymous_var_nameX614, ...);
int swprintf(int* anonymous_var_nameX615, unsigned long  int anonymous_var_nameX616, const int* anonymous_var_nameX617, ...);
int vwprintf(const int* anonymous_var_nameX618, va_list anonymous_var_nameX619);
int vfwprintf(struct _IO_FILE* anonymous_var_nameX620, const int* anonymous_var_nameX621, va_list anonymous_var_nameX622);
int vswprintf(int* anonymous_var_nameX623, unsigned long  int anonymous_var_nameX624, const int* anonymous_var_nameX625, va_list anonymous_var_nameX626);
int wscanf(const int* anonymous_var_nameX627, ...);
int fwscanf(struct _IO_FILE* anonymous_var_nameX628, const int* anonymous_var_nameX629, ...);
int swscanf(const int* anonymous_var_nameX630, const int* anonymous_var_nameX631, ...);
int vwscanf(const int* anonymous_var_nameX632, va_list anonymous_var_nameX633);
int vfwscanf(struct _IO_FILE* anonymous_var_nameX634, const int* anonymous_var_nameX635, va_list anonymous_var_nameX636);
int vswscanf(const int* anonymous_var_nameX637, const int* anonymous_var_nameX638, va_list anonymous_var_nameX639);
unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX640);
unsigned int getwc(struct _IO_FILE* anonymous_var_nameX641);
unsigned int getwchar();
unsigned int fputwc(int anonymous_var_nameX642, struct _IO_FILE* anonymous_var_nameX643);
unsigned int putwc(int anonymous_var_nameX644, struct _IO_FILE* anonymous_var_nameX645);
unsigned int putwchar(int anonymous_var_nameX646);
int* fgetws(int* anonymous_var_nameX647, int anonymous_var_nameX648, struct _IO_FILE* anonymous_var_nameX649);
int fputws(const int* anonymous_var_nameX650, struct _IO_FILE* anonymous_var_nameX651);
unsigned int ungetwc(unsigned int anonymous_var_nameX652, struct _IO_FILE* anonymous_var_nameX653);
unsigned long  int wcsftime(int* anonymous_var_nameX654, unsigned long  int anonymous_var_nameX655, const int* anonymous_var_nameX656, const struct tm* anonymous_var_nameX657);
unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX658);
unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX659);
unsigned int getwchar_unlocked();
unsigned int fputwc_unlocked(int anonymous_var_nameX660, struct _IO_FILE* anonymous_var_nameX661);
unsigned int putwc_unlocked(int anonymous_var_nameX662, struct _IO_FILE* anonymous_var_nameX663);
unsigned int putwchar_unlocked(int anonymous_var_nameX664);
int* fgetws_unlocked(int* anonymous_var_nameX665, int anonymous_var_nameX666, struct _IO_FILE* anonymous_var_nameX667);
int fputws_unlocked(const int* anonymous_var_nameX668, struct _IO_FILE* anonymous_var_nameX669);
unsigned long  int wcsftime_l(int* anonymous_var_nameX670, unsigned long  int anonymous_var_nameX671, const int* anonymous_var_nameX672, const struct tm* anonymous_var_nameX673, struct __locale_struct* anonymous_var_nameX674);
struct _IO_FILE* open_wmemstream(int** anonymous_var_nameX675, unsigned long  int* anonymous_var_nameX676);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX677, const char** anonymous_var_nameX678, unsigned long  int anonymous_var_nameX679, unsigned long  int anonymous_var_nameX680, struct __mbstate_t* anonymous_var_nameX681);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX682, const int** anonymous_var_nameX683, unsigned long  int anonymous_var_nameX684, unsigned long  int anonymous_var_nameX685, struct __mbstate_t* anonymous_var_nameX686);
int* wcsdup(const int* anonymous_var_nameX687);
unsigned long  int wcsnlen(const int* anonymous_var_nameX688, unsigned long  int anonymous_var_nameX689);
int* wcpcpy(int* anonymous_var_nameX690, const int* anonymous_var_nameX691);
int* wcpncpy(int* anonymous_var_nameX692, const int* anonymous_var_nameX693, unsigned long  int anonymous_var_nameX694);
int wcscasecmp(const int* anonymous_var_nameX695, const int* anonymous_var_nameX696);
int wcscasecmp_l(const int* anonymous_var_nameX697, const int* anonymous_var_nameX698, struct __locale_struct* anonymous_var_nameX699);
int wcsncasecmp(const int* anonymous_var_nameX700, const int* anonymous_var_nameX701, unsigned long  int anonymous_var_nameX702);
int wcsncasecmp_l(const int* anonymous_var_nameX703, const int* anonymous_var_nameX704, unsigned long  int anonymous_var_nameX705, struct __locale_struct* anonymous_var_nameX706);
int wcscoll_l(const int* anonymous_var_nameX707, const int* anonymous_var_nameX708, struct __locale_struct* anonymous_var_nameX709);
unsigned long  int wcsxfrm_l(int* anonymous_var_nameX710, const int* anonymous_var_nameX711, unsigned long  int anonymous_var_nameX712, struct __locale_struct* anonymous_var_nameX713);
int wcwidth(int anonymous_var_nameX714);
int wcswidth(const int* anonymous_var_nameX715, unsigned long  int anonymous_var_nameX716);
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
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
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
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xiswascii(int c);
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
_Bool wchar_t_equals(int left, int right);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
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
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
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
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_objects_of_match_lv_tables(struct sInfo* info);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static struct sRightValueObject* list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self);
static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self);
static struct sRightValueObject* list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
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
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_push_back(struct list$1sRightValueObject$ph* self, struct sRightValueObject* item);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_delete(struct list$1sRightValueObject$ph* self, int head, int tail);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void free_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_0;
struct list$1sRightValueObject$ph* o2_saved_1;
struct sRightValueObject* it2_4;
char* __dec_obj1;
void* __right_value0 = (void*)0;
char* __dec_obj2;
void* __right_value1 = (void*)0;
char* __dec_obj3;
    if(    gComeGC||gComeC    ) {
        return;
    }
    if(    right_value->right_value_objects    ) {
        it_0=right_value->right_value_objects;
        for(        o2_saved_1=(struct list$1sRightValueObject$ph*)come_increment_ref_count((info->right_value_objects)),it2_4=list$1sRightValueObject$ph_begin((o2_saved_1))        ;        !list$1sRightValueObject$ph_end((o2_saved_1))        ;        it2_4=list$1sRightValueObject$ph_next((o2_saved_1))        ){
            if(            it_0->mID==it2_4->mID            ) {
                it2_4->mStored=(_Bool)1;
                break;
            }
        }
        come_call_finalizer(list$1sRightValueObject$ph$p_finalize, o2_saved_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    right_value->c_value_without_right_value_objects    ) {
        __dec_obj1=right_value->c_value,
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        gComeDebug        ) {
            __dec_obj2=right_value->c_value,
            right_value->c_value=(char*)come_increment_ref_count(append_stackframe(right_value->c_value,right_value->type,info));
            __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    __dec_obj3=right_value->c_value,
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
}

static struct sRightValueObject* list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self){
struct sRightValueObject* result_2;
struct sRightValueObject* __result_obj__1;
struct sRightValueObject* __result_obj__2;
struct sRightValueObject* result_3;
struct sRightValueObject* __result_obj__3;
result_2 = (void*)0;
result_3 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_2,0,sizeof(struct sRightValueObject*));
        __result_obj__1 = result_2;
        return __result_obj__1;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__2 = self->it->item;
        return __result_obj__2;
    }
    memset(&result_3,0,sizeof(struct sRightValueObject*));
    __result_obj__3 = result_3;
    return __result_obj__3;
}

static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self){
struct sRightValueObject* result_5;
struct sRightValueObject* __result_obj__4;
struct sRightValueObject* __result_obj__5;
struct sRightValueObject* result_6;
struct sRightValueObject* __result_obj__6;
result_5 = (void*)0;
result_6 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_5,0,sizeof(struct sRightValueObject*));
        __result_obj__4 = result_5;
        return __result_obj__4;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__5 = self->it->item;
        return __result_obj__5;
    }
    memset(&result_6,0,sizeof(struct sRightValueObject*));
    __result_obj__6 = result_6;
    return __result_obj__6;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_7;
struct list_item$1sRightValueObject$ph* prev_it_8;
    it_7=self->head;
    while(    it_7!=((void*)0)    ) {
        prev_it_8=it_7;
        it_7=it_7->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct list_item$1sType$ph* it_9;
struct list_item$1sType$ph* prev_it_10;
    it_9=self->head;
    while(    it_9!=((void*)0)    ) {
        prev_it_10=it_9;
        it_9=it_9->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_11;
struct list_item$1sNode$ph* prev_it_12;
    it_11=self->head;
    while(    it_11!=((void*)0)    ) {
        prev_it_12=it_11;
        it_11=it_11->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_13;
struct list_item$1char$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)    ) {
        prev_it_14=it_13;
        it_13=it_13->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value39 = (void*)0;
struct sType* result_15;
struct sType* __result_obj__23;
struct sType* __result_obj__24;
struct sClass* klass_39;
void* __right_value40 = (void*)0;
struct sType* result_type_40;
struct sType* __dec_obj27;
struct list$1sType$ph* o2_saved_43;
struct sType* it_46;
void* __right_value41 = (void*)0;
struct sType* new_param_type_49;
int generics_number_53;
void* __right_value45 = (void*)0;
struct list$1sNode$ph* array_num_54;
_Bool immutable__55;
int pointer_num_56;
_Bool heap_57;
_Bool exception__58;
_Bool guard__59;
_Bool deffer_right_value_60;
_Bool no_heap_61;
_Bool no_calling_destructor_62;
_Bool null_value_63;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct sType* __dec_obj31;
struct list$1sNode$ph* __dec_obj32;
int generics_number_70;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
struct sClass* klass2_71;
int generics_number2_72;
struct list$1sNode$ph* array_num_73;
_Bool immutable__74;
int pointer_num_75;
_Bool heap_76;
_Bool guard__77;
_Bool deffer_right_value_78;
_Bool no_heap_79;
_Bool no_calling_destructor_80;
_Bool null_value_81;
_Bool record__82;
_Bool multiple_types_83;
_Bool exception__84;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct sType* __dec_obj33;
struct list$1sNode$ph* __dec_obj34;
struct list$1sType$ph* o2_saved_85;
struct sType* it_86;
void* __right_value52 = (void*)0;
struct sType* type_87;
void* __right_value53 = (void*)0;
char* new_name_88;
struct sType* __result_obj__37;
    result_15=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type==((void*)0)    ) {
        __result_obj__23 = (struct sType*)come_increment_ref_count(result_15);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__23;
    }
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)==0    ) {
        __result_obj__24 = (struct sType*)come_increment_ref_count(result_15);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__24;
    }
    klass_39=type->mClass;
    if(    string_operator_equals(klass_39->mName,"lambda")    ) {
        result_type_40=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type->mResultType),(struct sType*)come_increment_ref_count(generics_type),info));
        __dec_obj27=result_15->mResultType,
        result_15->mResultType=(struct sType*)come_increment_ref_count(result_type_40);
        come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_reset(result_15->mParamTypes);
        for(        o2_saved_43=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_46=list$1sType$ph_begin((o2_saved_43))        ;        !list$1sType$ph_end((o2_saved_43))        ;        it_46=list$1sType$ph_next((o2_saved_43))        ){
            new_param_type_49=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_46),(struct sType*)come_increment_ref_count(generics_type),info));
            list$1sType$ph_push_back(result_15->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_49));
            come_call_finalizer(sType_finalize, new_param_type_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    klass_39->mMethodGenerics&&info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0    ) {
        generics_number_53=klass_39->mMethodGenericsNum;
        if(        generics_number_53>=list$1sType$ph_length(info->method_generics_types)        ) {
            ((struct tuple2$2int$bool$*)(__right_value45=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_53,list$1sType$ph_length(info->method_generics_types))));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value45, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        array_num_54=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        immutable__55=type->mImmutable;
        pointer_num_56=type->mPointerNum;
        heap_57=type->mHeap;
        exception__58=type->mException;
        guard__59=type->mGuardValue;
        deffer_right_value_60=type->mDefferRightValue;
        no_heap_61=type->mNoHeap;
        no_calling_destructor_62=type->mNoCallingDestructor;
        null_value_63=type->mNullValue;
        __dec_obj31=result_15,
        result_15=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value46=list$1sType$ph_operator_load_element(info->method_generics_types,generics_number_53)))));
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value46, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        heap_57        ) {
            result_15->mHeap=result_15->mHeap||heap_57;
        }
        if(        guard__59        ) {
            result_15->mGuardValue=guard__59;
        }
        if(        deffer_right_value_60        ) {
            result_15->mDefferRightValue=deffer_right_value_60||result_15->mDefferRightValue;
        }
        if(        no_heap_61        ) {
            result_15->mNoHeap=(_Bool)1;
            result_15->mHeap=(_Bool)0;
        }
        if(        exception__58        ) {
            result_15->mException=(_Bool)1;
        }
        if(        no_calling_destructor_62        ) {
            result_15->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__55        ) {
            result_15->mImmutable=immutable__55;
        }
        if(        list$1sNode$ph_length(array_num_54)>0        ) {
            __dec_obj32=result_15->mArrayNum,
            result_15->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_54);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        null_value_63        ) {
            result_15->mNullValue=null_value_63;
        }
        if(        pointer_num_56>0        ) {
            result_15->mPointerNum+=pointer_num_56;
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    klass_39->mGenerics    ) {
        generics_number_70=klass_39->mGenericsNum;
        if(        generics_number_70>=list$1sType$ph_length(generics_type->mGenericsTypes)        ) {
            ((struct tuple2$2int$bool$*)(__right_value48=err_msg(info,"invalid generics parametor number")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        klass2_71=((struct sType*)(__right_value49=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,generics_number_70)))->mClass;
        come_call_finalizer(sType_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        generics_number2_72=klass2_71->mGenericsNum;
        if(        generics_number_70!=generics_number2_72        ) {
            array_num_73=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
            immutable__74=type->mImmutable;
            pointer_num_75=type->mPointerNum;
            heap_76=type->mHeap;
            guard__77=type->mGuardValue;
            deffer_right_value_78=type->mDefferRightValue;
            no_heap_79=type->mNoHeap;
            no_calling_destructor_80=type->mNoCallingDestructor;
            null_value_81=type->mNullValue;
            record__82=type->mRecord;
            multiple_types_83=type->mMultipleTypes;
            exception__84=type->mException;
            __dec_obj33=result_15,
            result_15=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value50=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,generics_number_70)))));
            come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            heap_76            ) {
                result_15->mHeap=result_15->mHeap||heap_76;
            }
            if(            exception__84            ) {
                result_15->mException=exception__84;
            }
            if(            deffer_right_value_78            ) {
                result_15->mDefferRightValue=deffer_right_value_78||result_15->mDefferRightValue;
            }
            if(            guard__77            ) {
                result_15->mGuardValue=guard__77;
            }
            if(            record__82            ) {
                result_15->mRecord=record__82;
            }
            if(            no_heap_79            ) {
                result_15->mNoHeap=(_Bool)1;
                result_15->mHeap=(_Bool)0;
            }
            if(            multiple_types_83            ) {
                result_15->mMultipleTypes=(_Bool)1;
            }
            if(            no_calling_destructor_80            ) {
                result_15->mNoCallingDestructor=(_Bool)1;
            }
            if(            immutable__74            ) {
                result_15->mImmutable=immutable__74;
            }
            if(            list$1sNode$ph_length(array_num_73)>0            ) {
                __dec_obj34=result_15->mArrayNum,
                result_15->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_73);
                come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            if(            null_value_81            ) {
                result_15->mNullValue=null_value_81;
            }
            if(            pointer_num_75>0            ) {
                result_15->mPointerNum+=pointer_num_75;
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    else {
        list$1sType$ph_reset(result_15->mGenericsTypes);
        for(        o2_saved_85=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_86=list$1sType$ph_begin((o2_saved_85))        ;        !list$1sType$ph_end((o2_saved_85))        ;        it_86=list$1sType$ph_next((o2_saved_85))        ){
            type_87=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_86),(struct sType*)come_increment_ref_count(generics_type),info));
            list$1sType$ph_push_back(result_15->mGenericsTypes,(struct sType*)come_increment_ref_count(type_87));
            come_call_finalizer(sType_finalize, type_87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !output_generics_struct((struct sType*)come_increment_ref_count(result_15),(struct sType*)come_increment_ref_count(generics_type),info)        ) {
            new_name_88=(char*)come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name_88);
            exit(1);
            (new_name_88 = come_decrement_ref_count(new_name_88, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    __result_obj__37 = (struct sType*)come_increment_ref_count(result_15);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__7;
void* __right_value2 = (void*)0;
struct sType* result_16;
void* __right_value3 = (void*)0;
struct sType* __dec_obj4;
void* __right_value4 = (void*)0;
struct sType* __dec_obj5;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __dec_obj9;
void* __right_value13 = (void*)0;
struct sType* __dec_obj10;
void* __right_value15 = (void*)0;
struct sNode* __dec_obj11;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj12;
void* __right_value17 = (void*)0;
char* __dec_obj13;
void* __right_value18 = (void*)0;
char* __dec_obj14;
void* __right_value19 = (void*)0;
char* __dec_obj15;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __dec_obj19;
void* __right_value28 = (void*)0;
char* __dec_obj20;
void* __right_value29 = (void*)0;
struct list$1sType$ph* __dec_obj21;
void* __right_value37 = (void*)0;
struct list$1char$ph* __dec_obj25;
void* __right_value38 = (void*)0;
struct sType* __dec_obj26;
struct sType* __result_obj__22;
    if(    self==(void*)0    ) {
        __result_obj__7 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__7;
    }
    result_16=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_16->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj4=result_16->mOriginalLoadVarType,
        result_16->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj5=result_16->mChannelType,
        result_16->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj9=result_16->mGenericsTypes,
        result_16->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj10=result_16->mNoSolvedGenericsType,
        result_16->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj11=result_16->mSizeNum,
        result_16->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj12=result_16->mAlignas,
        result_16->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj13=result_16->mTupleName,
        result_16->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj14=result_16->mAttribute,
        result_16->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_16->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_16->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_16->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_16->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_16->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_16->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_16->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_16->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_16->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_16->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_16->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_16->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_16->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_16->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_16->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_16->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_16->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_16->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_16->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_16->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_16->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj15=result_16->mAsmName,
        result_16->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_16->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj19=result_16->mArrayNum,
        result_16->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_16->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj20=result_16->mOriginalTypeName,
        result_16->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj21=result_16->mParamTypes,
        result_16->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj25=result_16->mParamNames,
        result_16->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj26=result_16->mResultType,
        result_16->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_16->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__22 = (struct sType*)come_increment_ref_count(result_16);
    come_call_finalizer(sType_finalize, result_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__22;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__8;
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
struct list$1sType$ph* result_17;
struct list_item$1sType$ph* it_18;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_17=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1011, "struct list$1sType$ph*"))));
    it_18=self->head;
    while(    it_18!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_17,(struct sType*)come_increment_ref_count(sType_clone(it_18->item)));
        }
        else {
            list$1sType$ph_add(result_17,(struct sType*)come_increment_ref_count(sType_clone(it_18->item)));
        }
        it_18=it_18->next;
    }
    __result_obj__11 = (struct list$1sType$ph*)come_increment_ref_count(result_17);
    come_call_finalizer(list$1sType$ph$p_finalize, result_17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__9;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_19;
struct sType* __dec_obj6;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_20;
struct sType* __dec_obj7;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_21;
struct sType* __dec_obj8;
struct list$1sType$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_19=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1030, "struct list_item$1sType$ph*"))));
        litem_19->prev=((void*)0);
        litem_19->next=((void*)0);
        __dec_obj6=litem_19->item,
        litem_19->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_19;
        self->head=litem_19;
    }
    else if(    self->len==1    ) {
        litem_20=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1040, "struct list_item$1sType$ph*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj7=litem_20->item,
        litem_20->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1050, "struct list_item$1sType$ph*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj8=litem_21->item,
        litem_21->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
    __result_obj__10 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__10;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_22;
struct list_item$1sType$ph* prev_it_23;
    it_22=self->head;
    while(    it_22!=((void*)0)    ) {
        prev_it_23=it_22;
        it_22=it_22->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__12;
void* __right_value14 = (void*)0;
struct sNode* result_24;
struct sNode* __result_obj__13;
    if(    self==(void*)0    ) {
        __result_obj__12 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__12) ? __result_obj__12 = come_decrement_ref_count(__result_obj__12, ((struct sNode*)__result_obj__12)->finalize, ((struct sNode*)__result_obj__12)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__12;
    }
    result_24=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_24->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_24->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_24->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_24->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_24->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_24->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_24->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_24->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_24->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_24->no_mutex=self->no_mutex;
    }
    __result_obj__13 = (struct sNode*)come_increment_ref_count(result_24);
    ((result_24) ? result_24 = come_decrement_ref_count(result_24, ((struct sNode*)result_24)->finalize, ((struct sNode*)result_24)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__13) ? __result_obj__13 = come_decrement_ref_count(__result_obj__13, ((struct sNode*)__result_obj__13)->finalize, ((struct sNode*)__result_obj__13)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__14;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1sNode$ph* result_25;
struct list_item$1sNode$ph* it_26;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* __result_obj__17;
    if(    self==((void*)0)    ) {
        __result_obj__14 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__14;
    }
    result_25=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1011, "struct list$1sNode$ph*"))));
    it_26=self->head;
    while(    it_26!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_25,(struct sNode*)come_increment_ref_count(sNode_clone(it_26->item)));
        }
        else {
            list$1sNode$ph_add(result_25,(struct sNode*)come_increment_ref_count(sNode_clone(it_26->item)));
        }
        it_26=it_26->next;
    }
    __result_obj__17 = (struct list$1sNode$ph*)come_increment_ref_count(result_25);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__15;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_27;
struct sNode* __dec_obj16;
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_28;
struct sNode* __dec_obj17;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_29;
struct sNode* __dec_obj18;
struct list$1sNode$ph* __result_obj__16;
    if(    self->len==0    ) {
        litem_27=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1030, "struct list_item$1sNode$ph*"))));
        litem_27->prev=((void*)0);
        litem_27->next=((void*)0);
        __dec_obj16=litem_27->item,
        litem_27->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_27;
        self->head=litem_27;
    }
    else if(    self->len==1    ) {
        litem_28=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1040, "struct list_item$1sNode$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj17=litem_28->item,
        litem_28->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1050, "struct list_item$1sNode$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj18=litem_29->item,
        litem_29->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__16 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__16;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_30;
struct list_item$1sNode$ph* prev_it_31;
    it_30=self->head;
    while(    it_30!=((void*)0)    ) {
        prev_it_31=it_30;
        it_30=it_30->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__18;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1char$ph* result_32;
struct list_item$1char$ph* it_33;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1char$ph* __result_obj__21;
    if(    self==((void*)0)    ) {
        __result_obj__18 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__18;
    }
    result_32=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1011, "struct list$1char$ph*"))));
    it_33=self->head;
    while(    it_33!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_32,(char*)come_increment_ref_count((char*)come_memdup(it_33->item, "./comelang.h", 1016, "char*")));
        }
        else {
            list$1char$ph_add(result_32,(char*)come_increment_ref_count((char*)come_memdup(it_33->item, "./comelang.h", 1019, "char*")));
        }
        it_33=it_33->next;
    }
    __result_obj__21 = (struct list$1char$ph*)come_increment_ref_count(result_32);
    come_call_finalizer(list$1char$ph$p_finalize, result_32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__19;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_34;
char* __dec_obj22;
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_35;
char* __dec_obj23;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_36;
char* __dec_obj24;
struct list$1char$ph* __result_obj__20;
    if(    self->len==0    ) {
        litem_34=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1030, "struct list_item$1char$ph*"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        __dec_obj22=litem_34->item,
        litem_34->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1    ) {
        litem_35=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1040, "struct list_item$1char$ph*"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        __dec_obj23=litem_35->item,
        litem_35->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1050, "struct list_item$1char$ph*"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        __dec_obj24=litem_36->item,
        litem_36->item=(char*)come_increment_ref_count(item);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result_obj__20 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__20;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_37;
struct list_item$1char$ph* prev_it_38;
    it_37=self->head;
    while(    it_37!=((void*)0)    ) {
        prev_it_38=it_37;
        it_37=it_37->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_41;
struct list_item$1sType$ph* prev_it_42;
struct list$1sType$ph* __result_obj__25;
    it_41=self->head;
    while(    it_41!=((void*)0)    ) {
        prev_it_42=it_41;
        it_41=it_41->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__25 = self;
    return __result_obj__25;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_44;
struct sType* __result_obj__26;
struct sType* __result_obj__27;
struct sType* result_45;
struct sType* __result_obj__28;
result_44 = (void*)0;
result_45 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_44,0,sizeof(struct sType*));
        __result_obj__26 = result_44;
        return __result_obj__26;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__27 = self->it->item;
        return __result_obj__27;
    }
    memset(&result_45,0,sizeof(struct sType*));
    __result_obj__28 = result_45;
    return __result_obj__28;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_47;
struct sType* __result_obj__29;
struct sType* __result_obj__30;
struct sType* result_48;
struct sType* __result_obj__31;
result_47 = (void*)0;
result_48 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_47,0,sizeof(struct sType*));
        __result_obj__29 = result_47;
        return __result_obj__29;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_48,0,sizeof(struct sType*));
    __result_obj__31 = result_48;
    return __result_obj__31;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value42 = (void*)0;
struct list_item$1sType$ph* litem_50;
struct sType* __dec_obj28;
void* __right_value43 = (void*)0;
struct list_item$1sType$ph* litem_51;
struct sType* __dec_obj29;
void* __right_value44 = (void*)0;
struct list_item$1sType$ph* litem_52;
struct sType* __dec_obj30;
struct list$1sType$ph* __result_obj__32;
    if(    self->len==0    ) {
        litem_50=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value42=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1100, "struct list_item$1sType$ph*"))));
        litem_50->prev=((void*)0);
        litem_50->next=((void*)0);
        __dec_obj28=litem_50->item,
        litem_50->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_50;
        self->head=litem_50;
    }
    else if(    self->len==1    ) {
        litem_51=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value43=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1110, "struct list_item$1sType$ph*"))));
        litem_51->prev=self->head;
        litem_51->next=((void*)0);
        __dec_obj29=litem_51->item,
        litem_51->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_51;
        self->head->next=litem_51;
    }
    else {
        litem_52=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value44=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1120, "struct list_item$1sType$ph*"))));
        litem_52->prev=self->tail;
        litem_52->next=((void*)0);
        __dec_obj30=litem_52->item,
        litem_52->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_52;
        self->tail=litem_52;
    }
    self->len++;
    __result_obj__32 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__32;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_64;
int i_65;
struct sType* __result_obj__33;
struct sType* default_value_66;
struct sType* __result_obj__34;
default_value_66 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_64=self->head;
    i_65=0;
    while(    it_64!=((void*)0)    ) {
        if(        position==i_65        ) {
            __result_obj__33 = (struct sType*)come_increment_ref_count(it_64->item);
            come_call_finalizer(sType_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__33;
        }
        it_64=it_64->next;
        i_65++;
    }
    memset(&default_value_66,0,sizeof(struct sType*));
    __result_obj__34 = (struct sType*)come_increment_ref_count(default_value_66);
    come_call_finalizer(sType_finalize, default_value_66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__34;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_67;
int i_68;
struct sType* __result_obj__35;
struct sType* default_value_69;
struct sType* __result_obj__36;
default_value_69 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_67=self->head;
    i_68=0;
    while(    it_67!=((void*)0)    ) {
        if(        position==i_68        ) {
            __result_obj__35 = (struct sType*)come_increment_ref_count(it_67->item);
            come_call_finalizer(sType_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__35;
        }
        it_67=it_67->next;
        i_68++;
    }
    memset(&default_value_69,0,sizeof(struct sType*));
    __result_obj__36 = (struct sType*)come_increment_ref_count(default_value_69);
    come_call_finalizer(sType_finalize, default_value_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__36;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __right_value54 = (void*)0;
struct sType* result_89;
struct sClass* klass_90;
int generics_number_91;
void* __right_value55 = (void*)0;
struct list$1sNode$ph* array_num_92;
_Bool immutable__93;
int pointer_num_94;
_Bool heap_95;
_Bool guard__96;
_Bool deffer_right_value_97;
_Bool no_heap_98;
_Bool no_calling_destructor_99;
_Bool null_value_100;
_Bool exception__101;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct sType* __dec_obj35;
struct list$1sNode$ph* __dec_obj36;
int i_102;
struct list$1sType$ph* o2_saved_103;
struct sType* it_104;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1sType$ph* o2_saved_110;
struct sType* it_111;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct sType* __dec_obj38;
struct sType* __result_obj__40;
    result_89=(struct sType*)come_increment_ref_count(sType_clone(type));
    klass_90=type->mClass;
    if(    klass_90->mMethodGenerics&&info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0    ) {
        generics_number_91=klass_90->mMethodGenericsNum;
        if(        generics_number_91>=list$1sType$ph_length(info->method_generics_types)        ) {
            ((struct tuple2$2int$bool$*)(__right_value55=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_91,list$1sType$ph_length(info->method_generics_types))));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        array_num_92=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        immutable__93=type->mImmutable;
        pointer_num_94=type->mPointerNum;
        heap_95=type->mHeap;
        guard__96=type->mGuardValue;
        deffer_right_value_97=type->mDefferRightValue;
        no_heap_98=type->mNoHeap;
        no_calling_destructor_99=type->mNoCallingDestructor;
        null_value_100=type->mNullValue;
        exception__101=type->mException;
        __dec_obj35=result_89,
        result_89=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value56=list$1sType$ph_operator_load_element(info->method_generics_types,generics_number_91)))));
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        heap_95        ) {
            result_89->mHeap=heap_95||result_89->mHeap;
        }
        if(        deffer_right_value_97        ) {
            result_89->mDefferRightValue=deffer_right_value_97||result_89->mDefferRightValue;
        }
        if(        exception__101        ) {
            result_89->mException=exception__101;
        }
        if(        guard__96        ) {
            result_89->mGuardValue=guard__96||result_89->mGuardValue;
        }
        if(        no_heap_98        ) {
            result_89->mNoHeap=(_Bool)1;
            result_89->mHeap=(_Bool)0;
        }
        if(        no_calling_destructor_99        ) {
            result_89->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__93        ) {
            result_89->mImmutable=immutable__93;
        }
        if(        list$1sNode$ph_length(array_num_92)>0        ) {
            __dec_obj36=result_89->mArrayNum,
            result_89->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_92);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        null_value_100        ) {
            result_89->mNullValue=null_value_100;
        }
        if(        pointer_num_94>0        ) {
            result_89->mPointerNum+=pointer_num_94;
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    i_102=0;
    for(    o2_saved_103=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_104=list$1sType$ph_begin((o2_saved_103))    ;    !list$1sType$ph_end((o2_saved_103))    ;    it_104=list$1sType$ph_next((o2_saved_103))    ){
        list$1sType$ph_operator_store_element(result_89->mGenericsTypes,i_102,(struct sType*)come_increment_ref_count(solve_method_generics(it_104,info)));
        come_call_finalizer(sType_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        i_102++;
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    i_102=0;
    for(    o2_saved_110=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_111=list$1sType$ph_begin((o2_saved_110))    ;    !list$1sType$ph_end((o2_saved_110))    ;    it_111=list$1sType$ph_next((o2_saved_110))    ){
        list$1sType$ph_operator_store_element(result_89->mParamTypes,i_102,(struct sType*)come_increment_ref_count(solve_method_generics(it_111,info)));
        come_call_finalizer(sType_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        i_102++;
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    type->mResultType    ) {
        __dec_obj38=result_89->mResultType,
        result_89->mResultType=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType,info));
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__40 = (struct sType*)come_increment_ref_count(result_89);
    come_call_finalizer(sType_finalize, result_89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_105;
int i_106;
struct sType* default_value_107;
struct list$1sType$ph* __result_obj__38;
struct list_item$1sType$ph* it_108;
int i_109;
struct sType* __dec_obj37;
struct list$1sType$ph* __result_obj__39;
default_value_107 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_105=self->len;
        for(        i_106=0        ;        i_106<position-len_105        ;        i_106++        ){
            memset(&default_value_107,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_107));
            come_call_finalizer(sType_finalize, default_value_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__38 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__38;
    }
    it_108=self->head;
    i_109=0;
    while(    it_108!=((void*)0)    ) {
        if(        position==i_109        ) {
            __dec_obj37=it_108->item,
            it_108->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_108=it_108->next;
        i_109++;
    }
    __result_obj__39 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__39;
}

void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var){
void* __right_value63 = (void*)0;
struct sRightValueObject* new_value_112;
struct sType* __dec_obj39;
void* __right_value64 = (void*)0;
char* __dec_obj40;
char* __dec_obj41;
struct sType* __dec_obj42;
void* __right_value65 = (void*)0;
char* __dec_obj43;
void* __right_value69 = (void*)0;
char* buf_117;
void* __right_value70 = (void*)0;
char* __dec_obj47;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
char* __dec_obj48;
    if(    gComeGC||gComeC    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    info->no_output_come_code    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    new_value_112=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc_v2(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 289, "struct sRightValueObject*"));
    __dec_obj39=new_value_112->mType,
    new_value_112->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    new_value_112->mFreed=(_Bool)0;
    static int right_value_num_113=0;
    new_value_112->mID=right_value_num_113;
    __dec_obj40=new_value_112->mVarName,
    new_value_112->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",right_value_num_113++));
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj41=new_value_112->mFunName,
    new_value_112->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    new_value_112->mBlockLevel=info->block_level;
    new_value_112->mDecrementRefCount=decrement_ref_count;
    if(    obj_value    ) {
        __dec_obj42=new_value_112->mObjType,
        new_value_112->mObjType=(struct sType*)come_increment_ref_count(obj_type);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj43=new_value_112->mObjValue,
        new_value_112->mObjValue=(char*)come_increment_ref_count(__builtin_string(obj_value));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        new_value_112->mObjVar=obj_var;
        if(        !type->mHeap        ) {
            new_value_112->mNoFree=(_Bool)1;
        }
    }
    list$1sRightValueObject$ph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_112));
    if(    type->mPointerNum>0    ) {
        buf_117=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",right_value_num_113-1));
        add_come_code_at_function_head(info,buf_117);
        __dec_obj47=come_value->c_value_without_right_value_objects,
        come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(come_value->c_value, "04heap.c", 316, "char*"));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj48=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value71=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_112->mVarName,come_value->c_value));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_value->right_value_objects=new_value_112;
        (buf_117 = come_decrement_ref_count(buf_117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sRightValueObject_finalize, new_value_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_push_back(struct list$1sRightValueObject$ph* self, struct sRightValueObject* item){
void* __right_value66 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_114;
struct sRightValueObject* __dec_obj44;
void* __right_value67 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_115;
struct sRightValueObject* __dec_obj45;
void* __right_value68 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_116;
struct sRightValueObject* __dec_obj46;
struct list$1sRightValueObject$ph* __result_obj__41;
    if(    self->len==0    ) {
        litem_114=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value66=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "./comelang.h", 1100, "struct list_item$1sRightValueObject$ph*"))));
        litem_114->prev=((void*)0);
        litem_114->next=((void*)0);
        __dec_obj44=litem_114->item,
        litem_114->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer(sRightValueObject_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_114;
        self->head=litem_114;
    }
    else if(    self->len==1    ) {
        litem_115=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value67=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "./comelang.h", 1110, "struct list_item$1sRightValueObject$ph*"))));
        litem_115->prev=self->head;
        litem_115->next=((void*)0);
        __dec_obj45=litem_115->item,
        litem_115->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer(sRightValueObject_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_115;
        self->head->next=litem_115;
    }
    else {
        litem_116=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value68=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "./comelang.h", 1120, "struct list_item$1sRightValueObject$ph*"))));
        litem_116->prev=self->tail;
        litem_116->next=((void*)0);
        __dec_obj46=litem_116->item,
        litem_116->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer(sRightValueObject_finalize, __dec_obj46,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_116;
        self->tail=litem_116;
    }
    self->len++;
    __result_obj__41 = self;
    come_call_finalizer(sRightValueObject_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__41;
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_118;
struct list$1sRightValueObject$ph* o2_saved_119;
struct sRightValueObject* it_120;
    if(    gComeGC||gComeC    ) {
        return;
    }
    if(    info->no_output_come_code    ) {
        return;
    }
    i_118=0;
    for(    o2_saved_119=(struct list$1sRightValueObject$ph*)come_increment_ref_count((info->right_value_objects)),it_120=list$1sRightValueObject$ph_begin((o2_saved_119))    ;    !list$1sRightValueObject$ph_end((o2_saved_119))    ;    it_120=list$1sRightValueObject$ph_next((o2_saved_119))    ){
        if(        it_120->mID==right_value_num        ) {
            break;
        }
        i_118++;
    }
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, o2_saved_119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list$1sRightValueObject$ph_delete(info->right_value_objects,i_118,i_118+1);
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_delete(struct list$1sRightValueObject$ph* self, int head, int tail){
int tmp_121;
struct list$1sRightValueObject$ph* __result_obj__42;
struct list_item$1sRightValueObject$ph* it_124;
int i_125;
struct list_item$1sRightValueObject$ph* prev_it_126;
struct list_item$1sRightValueObject$ph* it_127;
int i_128;
struct list_item$1sRightValueObject$ph* prev_it_129;
struct list_item$1sRightValueObject$ph* it_130;
struct list_item$1sRightValueObject$ph* head_prev_it_131;
struct list_item$1sRightValueObject$ph* tail_it_132;
int i_133;
struct list_item$1sRightValueObject$ph* prev_it_134;
struct list$1sRightValueObject$ph* __result_obj__44;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_121=tail;
        tail=head;
        head=tmp_121;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__42 = self;
        return __result_obj__42;
    }
    if(    head==0&&tail==self->len    ) {
        list$1sRightValueObject$ph_reset(self);
    }
    else if(    head==0    ) {
        it_124=self->head;
        i_125=0;
        while(        it_124!=((void*)0)        ) {
            if(            i_125<tail            ) {
                prev_it_126=it_124;
                it_124=it_124->next;
                i_125++;
                come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_125==tail            ) {
                self->head=it_124;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_124=it_124->next;
                i_125++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_127=self->head;
        i_128=0;
        while(        it_127!=((void*)0)        ) {
            if(            i_128==head            ) {
                self->tail=it_127->prev;
                self->tail->next=((void*)0);
            }
            if(            i_128>=head            ) {
                prev_it_129=it_127;
                it_127=it_127->next;
                i_128++;
                come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_127=it_127->next;
                i_128++;
            }
        }
    }
    else {
        it_130=self->head;
        head_prev_it_131=((void*)0);
        tail_it_132=((void*)0);
        i_133=0;
        while(        it_130!=((void*)0)        ) {
            if(            i_133==head            ) {
                head_prev_it_131=it_130->prev;
            }
            if(            i_133==tail            ) {
                tail_it_132=it_130;
            }
            if(            i_133>=head&&i_133<tail            ) {
                prev_it_134=it_130;
                it_130=it_130->next;
                i_133++;
                come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_130=it_130->next;
                i_133++;
            }
        }
        if(        head_prev_it_131!=((void*)0)        ) {
            head_prev_it_131->next=tail_it_132;
        }
        if(        tail_it_132!=((void*)0)        ) {
            tail_it_132->prev=head_prev_it_131;
        }
    }
    __result_obj__44 = self;
    return __result_obj__44;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_122;
struct list_item$1sRightValueObject$ph* prev_it_123;
struct list$1sRightValueObject$ph* __result_obj__43;
    it_122=self->head;
    while(    it_122!=((void*)0)    ) {
        prev_it_123=it_122;
        it_122=it_122->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__43 = self;
    return __result_obj__43;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __right_value73 = (void*)0;
char* __result_obj__45;
void* __right_value74 = (void*)0;
char* __result_obj__46;
struct sClass* klass_135;
void* __right_value75 = (void*)0;
char* type_name_136;
void* __right_value76 = (void*)0;
char* __result_obj__47;
    if(    gComeGC||gComeC    ) {
        __result_obj__45 = (char*)come_increment_ref_count(((char*)(__right_value73=__builtin_string(obj))));
        (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__45 = come_decrement_ref_count(__result_obj__45, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__45;
    }
    if(    info->no_output_come_code    ) {
        __result_obj__46 = (char*)come_increment_ref_count(((char*)(__right_value74=__builtin_string(obj))));
        (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__46 = come_decrement_ref_count(__result_obj__46, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__46;
    }
    klass_135=type->mClass;
    type_name_136=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result_obj__47 = (char*)come_increment_ref_count(((char*)(__right_value76=xsprintf("(%s)come_increment_ref_count(%s)",type_name_136,obj))));
    (type_name_136 = come_decrement_ref_count(type_name_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__47 = come_decrement_ref_count(__result_obj__47, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__47;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free){
struct list$1CVALUE$ph* stack_saved_137;
struct list$1sRightValueObject$ph* right_value_objects_138;
struct sClass* klass_139;
void* __right_value77 = (void*)0;
char* name_141;
void* __right_value78 = (void*)0;
_Bool no_decrement_142;
void* __right_value79 = (void*)0;
char* c_value_143;
struct sClass* klass_144;
char* class_name_145;
char* fun_name_146;
void* __right_value80 = (void*)0;
struct sType* type2_147;
void* __right_value81 = (void*)0;
char* fun_name2_148;
struct sType* __dec_obj49;
struct sFun* finalizer_149;
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
char* none_generics_name_156;
void* __right_value84 = (void*)0;
char* generics_fun_name_157;
void* __right_value85 = (void*)0;
struct sGenericsFun* generics_fun_158;
void* __right_value86 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_165=0;
_Bool err_166=0;
void* __right_value87 = (void*)0;
int i_167;
void* __right_value88 = (void*)0;
char* new_fun_name_168;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
char* __dec_obj50;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_169=0;
char* new_fun_name_170=0;
char* __dec_obj51;
void* __right_value93 = (void*)0;
char* type_name_171;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* type_name_172;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
char* str_173;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
char* str_174;
struct list$1sRightValueObject$ph* __dec_obj52;
struct list$1CVALUE$ph* __dec_obj53;
memset(&i_167, 0, sizeof(int));
    if(    gComeGC||gComeC    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    info->no_output_come_code    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    stack_saved_137=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_138=info->right_value_objects;
    klass_139=type->mClass;
    static int dec_num_140=0;
    name_141=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_140));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value78=make_define_var(type,name_141,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value78 = come_decrement_ref_count(__right_value78, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    add_come_code(info,"%s=%s,\n",name_141,obj);
    obj=name_141;
    no_decrement_142=(_Bool)0;
    if(    type->mPointerNum>0    ) {
        c_value_143=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_144=type->mClass;
        class_name_145=klass_144->mName;
        fun_name_146="finalize";
        type2_147=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_147->mHeap=(_Bool)0;
        fun_name2_148=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_146,info,(_Bool)1));
        if(        type->mNoSolvedGenericsType        ) {
            __dec_obj49=type,
            type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
            come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        finalizer_149=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0        ) {
            finalizer_149=((struct sFun*)(__right_value82=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_148)));
            come_call_finalizer(sFun_finalize, __right_value82, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            finalizer_149==((void*)0)            ) {
                none_generics_name_156=(char*)come_increment_ref_count(get_none_generics_name(type2_147->mClass->mName));
                generics_fun_name_157=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_156,fun_name_146));
                generics_fun_158=((struct sGenericsFun*)(__right_value85=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_157)));
                come_call_finalizer(sGenericsFun_finalize, __right_value85, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                generics_fun_158                ) {
                    multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value86=create_generics_fun((char*)come_increment_ref_count(fun_name2_148),generics_fun_158,(struct sType*)come_increment_ref_count(type),info)));
                    name_165=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                    err_166=multiple_assign_var1->v2;
                    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_166                    ) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_149=((struct sFun*)(__right_value87=map$2char$phsFun$ph_operator_load_element(info->funcs,name_165)));
                    come_call_finalizer(sFun_finalize, __right_value87, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_165 = come_decrement_ref_count(name_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                (none_generics_name_156 = come_decrement_ref_count(none_generics_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (generics_fun_name_157 = come_decrement_ref_count(generics_fun_name_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            for(            i_167=128-1            ;            i_167>=1            ;            i_167--            ){
                new_fun_name_168=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_148,i_167));
                finalizer_149=((struct sFun*)(__right_value89=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_168)));
                come_call_finalizer(sFun_finalize, __right_value89, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                finalizer_149                ) {
                    __dec_obj50=fun_name2_148,
                    fun_name2_148=(char*)come_increment_ref_count(__builtin_string(new_fun_name_168));
                    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    (new_fun_name_168 = come_decrement_ref_count(new_fun_name_168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                (new_fun_name_168 = come_decrement_ref_count(new_fun_name_168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            finalizer_149==((void*)0)            ) {
                finalizer_149=((struct sFun*)(__right_value91=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_148)));
                come_call_finalizer(sFun_finalize, __right_value91, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        if(        finalizer_149==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNode$ph_length(type->mArrayNum)==0        ) {
            multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value92=create_finalizer_automatically((struct sType*)come_increment_ref_count(type),fun_name_146,info)));
            fun_169=multiple_assign_var2->v1;
            new_fun_name_170=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value92, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj51=fun_name2_148,
            fun_name2_148=(char*)come_increment_ref_count(new_fun_name_170);
            __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            finalizer_149=fun_169;
            (new_fun_name_170 = come_decrement_ref_count(new_fun_name_170, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        finalizer_149!=((void*)0)        ) {
            if(            klass_144->mProtocol&&type->mPointerNum==1            ) {
                type_name_171=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_143                ) {
                    add_come_last_code2(info,((char*)(__right_value105=xsprintf("come_call_finalizer(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, \%s/*alloca value*/, \%s/* no decrement }/, \%s/*no_free*/, (void*)0)",((char*)(__right_value94=string_to_string(fun_name2_148))),((char*)(__right_value95=string_to_string(c_value_143))),((char*)(__right_value96=string_to_string(c_value_143))),((char*)(__right_value97=string_to_string(type_name_171))),((char*)(__right_value98=string_to_string(c_value_143))),((char*)(__right_value99=string_to_string(c_value_143))),((char*)(__right_value100=string_to_string(type_name_171))),((char*)(__right_value101=string_to_string(c_value_143))),((char*)(__right_value102=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value103=int_to_string(((no_decrement_142)?(1):(0))))),((char*)(__right_value104=int_to_string(((no_free)?(1):(0)))))))));
                    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                (type_name_171 = come_decrement_ref_count(type_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                if(                c_value_143                ) {
                    add_come_last_code2(info,((char*)(__right_value111=xsprintf("come_call_finalizer(\%s, \%s,(void*)0, (void*)0, \%s/* alloca value */, \%s/* no decrement */, \%s/* no_free */, (void*)0)",((char*)(__right_value106=string_to_string(fun_name2_148))),((char*)(__right_value107=string_to_string(c_value_143))),((char*)(__right_value108=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value109=int_to_string(((no_decrement_142)?(1):(0))))),((char*)(__right_value110=int_to_string(((no_free)?(1):(0)))))))));
                    (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_144->mProtocol&&type->mPointerNum==1            ) {
                type_name_172=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                str_173=(char*)come_increment_ref_count(xsprintf("(\%s ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, 0 /* no_decrement */,\%s/* no_free */, (void*)0) :0)",((char*)(__right_value113=string_to_string(name_141))),((char*)(__right_value114=string_to_string(name_141))),((char*)(__right_value115=string_to_string(name_141))),((char*)(__right_value116=string_to_string(type_name_172))),((char*)(__right_value117=string_to_string(name_141))),((char*)(__right_value118=string_to_string(type_name_172))),((char*)(__right_value119=string_to_string(name_141))),((char*)(__right_value120=int_to_string(((no_free)?(1):(0)))))));
                (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                add_come_last_code2(info,str_173);
                (type_name_172 = come_decrement_ref_count(type_name_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (str_173 = come_decrement_ref_count(str_173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                str_174=(char*)come_increment_ref_count(xsprintf(((char*)(__right_value123=xsprintf("%%s = come_decrement_ref_count(%%s, (void*)0, (void*)0, 0/* no_decrement */,\%s/* no_free */, (void*)0)",((char*)(__right_value122=int_to_string(((no_free)?(1):(0)))))))),name_141,name_141));
                (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                add_come_last_code2(info,str_174);
                (str_174 = come_decrement_ref_count(str_174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (c_value_143 = come_decrement_ref_count(c_value_143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name2_148 = come_decrement_ref_count(fun_name2_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj52=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_138);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj53=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_137);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_141 = come_decrement_ref_count(name_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_150;
unsigned int hash_151;
unsigned int it_152;
struct sFun* __result_obj__48;
struct sFun* __result_obj__49;
struct sFun* __result_obj__50;
struct sFun* __result_obj__51;
default_value_150 = (void*)0;
    memset(&default_value_150,0,sizeof(struct sFun*));
    hash_151=string_get_hash_key(((char*)key))%self->size;
    it_152=hash_151;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_152]        ) {
            if(            string_equals(self->keys[it_152],key)            ) {
                __result_obj__48 = (struct sFun*)come_increment_ref_count(self->items[it_152]);
                come_call_finalizer(sFun_finalize, default_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__48;
            }
            it_152++;
            if(            it_152>=self->size            ) {
                it_152=0;
            }
            else if(            it_152==hash_151            ) {
                __result_obj__49 = (struct sFun*)come_increment_ref_count(default_value_150);
                come_call_finalizer(sFun_finalize, default_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__49;
            }
        }
        else {
            __result_obj__50 = (struct sFun*)come_increment_ref_count(default_value_150);
            come_call_finalizer(sFun_finalize, default_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__50;
        }
    }
    __result_obj__51 = (struct sFun*)come_increment_ref_count(default_value_150);
    come_call_finalizer(sFun_finalize, default_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
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

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_153;
unsigned int hash_154;
unsigned int it_155;
struct sFun* __result_obj__52;
struct sFun* __result_obj__53;
struct sFun* __result_obj__54;
struct sFun* __result_obj__55;
default_value_153 = (void*)0;
    memset(&default_value_153,0,sizeof(struct sFun*));
    hash_154=string_get_hash_key(((char*)key))%self->size;
    it_155=hash_154;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_155]        ) {
            if(            string_equals(self->keys[it_155],key)            ) {
                __result_obj__52 = (struct sFun*)come_increment_ref_count(self->items[it_155]);
                come_call_finalizer(sFun_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__52;
            }
            it_155++;
            if(            it_155>=self->size            ) {
                it_155=0;
            }
            else if(            it_155==hash_154            ) {
                __result_obj__53 = (struct sFun*)come_increment_ref_count(default_value_153);
                come_call_finalizer(sFun_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__53;
            }
        }
        else {
            __result_obj__54 = (struct sFun*)come_increment_ref_count(default_value_153);
            come_call_finalizer(sFun_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__54;
        }
    }
    __result_obj__55 = (struct sFun*)come_increment_ref_count(default_value_153);
    come_call_finalizer(sFun_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_159;
unsigned int hash_160;
unsigned int it_161;
struct sGenericsFun* __result_obj__56;
struct sGenericsFun* __result_obj__57;
struct sGenericsFun* __result_obj__58;
struct sGenericsFun* __result_obj__59;
default_value_159 = (void*)0;
    memset(&default_value_159,0,sizeof(struct sGenericsFun*));
    hash_160=string_get_hash_key(((char*)key))%self->size;
    it_161=hash_160;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_161]        ) {
            if(            string_equals(self->keys[it_161],key)            ) {
                __result_obj__56 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_161]);
                come_call_finalizer(sGenericsFun_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__56;
            }
            it_161++;
            if(            it_161>=self->size            ) {
                it_161=0;
            }
            else if(            it_161==hash_160            ) {
                __result_obj__57 = (struct sGenericsFun*)come_increment_ref_count(default_value_159);
                come_call_finalizer(sGenericsFun_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__57;
            }
        }
        else {
            __result_obj__58 = (struct sGenericsFun*)come_increment_ref_count(default_value_159);
            come_call_finalizer(sGenericsFun_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__58;
        }
    }
    __result_obj__59 = (struct sGenericsFun*)come_increment_ref_count(default_value_159);
    come_call_finalizer(sGenericsFun_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
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

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_162;
unsigned int hash_163;
unsigned int it_164;
struct sGenericsFun* __result_obj__60;
struct sGenericsFun* __result_obj__61;
struct sGenericsFun* __result_obj__62;
struct sGenericsFun* __result_obj__63;
default_value_162 = (void*)0;
    memset(&default_value_162,0,sizeof(struct sGenericsFun*));
    hash_163=string_get_hash_key(((char*)key))%self->size;
    it_164=hash_163;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_164]        ) {
            if(            string_equals(self->keys[it_164],key)            ) {
                __result_obj__60 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_164]);
                come_call_finalizer(sGenericsFun_finalize, default_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__60;
            }
            it_164++;
            if(            it_164>=self->size            ) {
                it_164=0;
            }
            else if(            it_164==hash_163            ) {
                __result_obj__61 = (struct sGenericsFun*)come_increment_ref_count(default_value_162);
                come_call_finalizer(sGenericsFun_finalize, default_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__61;
            }
        }
        else {
            __result_obj__62 = (struct sGenericsFun*)come_increment_ref_count(default_value_162);
            come_call_finalizer(sGenericsFun_finalize, default_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__62;
        }
    }
    __result_obj__63 = (struct sGenericsFun*)come_increment_ref_count(default_value_162);
    come_call_finalizer(sGenericsFun_finalize, default_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_175;
struct list_item$1sRightValueObject$ph* prev_it_176;
    it_175=self->head;
    while(    it_175!=((void*)0)    ) {
        prev_it_176=it_175;
        it_175=it_175->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_177;
struct list_item$1CVALUE$ph* prev_it_178;
    it_177=self->head;
    while(    it_177!=((void*)0)    ) {
        prev_it_178=it_177;
        it_177=it_177->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
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

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_179;
struct list_item$1CVALUE$ph* prev_it_180;
    it_179=self->head;
    while(    it_179!=((void*)0)    ) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value){
struct list$1CVALUE$ph* stack_saved_181;
struct list$1sRightValueObject$ph* right_value_objects_182;
struct sType* type_before_183;
struct sType* __dec_obj54;
void* __right_value125 = (void*)0;
char* c_value_184;
struct sClass* klass_185;
char* class_name_186;
char* fun_name_187;
void* __right_value126 = (void*)0;
struct sType* type2_188;
void* __right_value127 = (void*)0;
char* fun_name2_189;
struct sFun* finalizer_190;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
char* none_generics_name_191;
void* __right_value130 = (void*)0;
char* generics_fun_name_192;
void* __right_value131 = (void*)0;
struct sGenericsFun* generics_fun_193;
void* __right_value132 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var3 = (void*)0;
char* name_194=0;
_Bool err_195=0;
void* __right_value133 = (void*)0;
int i_196;
void* __right_value134 = (void*)0;
char* new_fun_name_197;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
char* __dec_obj55;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun_198=0;
char* new_fun_name_199=0;
char* __dec_obj56;
void* __right_value139 = (void*)0;
char* type_name_200;
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
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_201;
struct tuple2$2char$phsType$ph* it_204;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* name_207=0;
struct sType* field_type_208=0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
char* obj_209;
void* __right_value162 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_212;
struct tuple2$2char$phsType$ph* it_213;
struct tuple2$2char$phsType$ph* multiple_assign_var6 = (void*)0;
char* name_214=0;
struct sType* field_type_215=0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
char* obj_216;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* type_name_217;
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
struct list$1sRightValueObject$ph* __dec_obj57;
struct list$1CVALUE$ph* __dec_obj58;
memset(&i_196, 0, sizeof(int));
    if(    gComeGC||gComeC    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    info->no_output_come_code    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    type->mDefferRightValue    ) {
        on_drop_object((struct sType*)come_increment_ref_count(type),obj,info,comma);
    }
    stack_saved_181=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_182=info->right_value_objects;
    type_before_183=type;
    if(    info->comma_instead_of_semicolon    ) {
        comma=(_Bool)1;
    }
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj54=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    type->mPointerNum>0||type->mClass->mProtocol||list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        c_value_184=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_185=type->mClass;
        class_name_186=klass_185->mName;
        fun_name_187="finalize";
        type2_188=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_188->mHeap=(_Bool)0;
        fun_name2_189=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_187,info,(_Bool)1));
        finalizer_190=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0        ) {
            finalizer_190=((struct sFun*)(__right_value128=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_189)));
            come_call_finalizer(sFun_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            finalizer_190==((void*)0)            ) {
                none_generics_name_191=(char*)come_increment_ref_count(get_none_generics_name(type2_188->mClass->mName));
                generics_fun_name_192=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_191,fun_name_187));
                generics_fun_193=((struct sGenericsFun*)(__right_value131=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_192)));
                come_call_finalizer(sGenericsFun_finalize, __right_value131, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                generics_fun_193                ) {
                    multiple_assign_var3=((struct tuple2$2char$phbool$*)(__right_value132=create_generics_fun((char*)come_increment_ref_count(fun_name2_189),generics_fun_193,(struct sType*)come_increment_ref_count(type),info)));
                    name_194=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                    err_195=multiple_assign_var3->v2;
                    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value132, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_195                    ) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_190=((struct sFun*)(__right_value133=map$2char$phsFun$ph_operator_load_element(info->funcs,name_194)));
                    come_call_finalizer(sFun_finalize, __right_value133, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_194 = come_decrement_ref_count(name_194, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                (none_generics_name_191 = come_decrement_ref_count(none_generics_name_191, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (generics_fun_name_192 = come_decrement_ref_count(generics_fun_name_192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            for(            i_196=128-1            ;            i_196>=1            ;            i_196--            ){
                new_fun_name_197=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_189,i_196));
                finalizer_190=((struct sFun*)(__right_value135=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_197)));
                come_call_finalizer(sFun_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                finalizer_190                ) {
                    __dec_obj55=fun_name2_189,
                    fun_name2_189=(char*)come_increment_ref_count(__builtin_string(new_fun_name_197));
                    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    (new_fun_name_197 = come_decrement_ref_count(new_fun_name_197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                (new_fun_name_197 = come_decrement_ref_count(new_fun_name_197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            finalizer_190==((void*)0)            ) {
                finalizer_190=((struct sFun*)(__right_value137=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_189)));
                come_call_finalizer(sFun_finalize, __right_value137, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        if(        finalizer_190==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNode$ph_length(type->mArrayNum)==0        ) {
            multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value138=create_finalizer_automatically((struct sType*)come_increment_ref_count(type),fun_name_187,info)));
            fun_198=multiple_assign_var4->v1;
            new_fun_name_199=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value138, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj56=fun_name2_189,
            fun_name2_189=(char*)come_increment_ref_count(new_fun_name_199);
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            finalizer_190=fun_198;
            (new_fun_name_199 = come_decrement_ref_count(new_fun_name_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        finalizer_190!=((void*)0)        ) {
            if(            klass_185->mProtocol&&type->mPointerNum==1            ) {
                type_name_200=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_184                ) {
                    add_come_code(info,((char*)(__right_value152=xsprintf("come_call_finalizer(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, \%s /*alloca value */, \%s/* no_decrement */, \%s/* no_free */, (void*)0)\%s",((char*)(__right_value140=string_to_string(fun_name2_189))),((char*)(__right_value141=string_to_string(c_value_184))),((char*)(__right_value142=string_to_string(c_value_184))),((char*)(__right_value143=string_to_string(type_name_200))),((char*)(__right_value144=string_to_string(c_value_184))),((char*)(__right_value145=string_to_string(c_value_184))),((char*)(__right_value146=string_to_string(type_name_200))),((char*)(__right_value147=string_to_string(c_value_184))),((char*)(__right_value148=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value149=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value150=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value151=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                (type_name_200 = come_decrement_ref_count(type_name_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                if(                c_value_184                ) {
                    add_come_code(info,((char*)(__right_value159=xsprintf("come_call_finalizer(\%s, \%s, (void*)0, (void*)0, \%s/* alloca value */, \%s/* no_decrement */, \%s/* no_free */, (void*)0)\%s",((char*)(__right_value153=string_to_string(fun_name2_189))),((char*)(__right_value154=string_to_string(c_value_184))),((char*)(__right_value155=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value156=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value157=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value158=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_185->mStruct&&type->mPointerNum==0            ) {
                for(                o2_saved_201=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_185->mFields)),it_204=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_201))                ;                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_201))                ;                it_204=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_201))                ){
                    multiple_assign_var5=it_204;
                    name_207=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                    field_type_208=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
                    if(                    field_type_208->mHeap&&field_type_208->mPointerNum>0                    ) {
                        obj_209=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value160=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_184,name_207));
                        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        free_object((struct sType*)come_increment_ref_count(sType_clone(field_type_208)),obj_209,no_decrement,no_free,info,(_Bool)0,(_Bool)0);
                        (obj_209 = come_decrement_ref_count(obj_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    (name_207 = come_decrement_ref_count(name_207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type_208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else if(            klass_185->mStruct&&type->mPointerNum==1            ) {
                for(                o2_saved_212=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_185->mFields)),it_213=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_212))                ;                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_212))                ;                it_213=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_212))                ){
                    multiple_assign_var6=it_213;
                    name_214=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                    field_type_215=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                    if(                    field_type_215->mHeap&&field_type_215->mPointerNum>0                    ) {
                        obj_216=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value163=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_184,name_214));
                        (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        free_object((struct sType*)come_increment_ref_count(sType_clone(field_type_215)),obj_216,no_decrement,no_free,info,(_Bool)0,(_Bool)0);
                        (obj_216 = come_decrement_ref_count(obj_216, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    (name_214 = come_decrement_ref_count(name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            !type->mAllocaValue            ) {
                if(                klass_185->mProtocol&&type->mPointerNum==1                ) {
                    if(                    c_value_184                    ) {
                        type_name_217=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        add_come_code(info,((char*)(__right_value177=xsprintf("((\%s) ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, \%s/* no_decrement */, \%s/*no_free*/,(void*)0):(void*)0)\%s",((char*)(__right_value167=string_to_string(c_value_184))),((char*)(__right_value168=string_to_string(c_value_184))),((char*)(__right_value169=string_to_string(c_value_184))),((char*)(__right_value170=string_to_string(type_name_217))),((char*)(__right_value171=string_to_string(c_value_184))),((char*)(__right_value172=string_to_string(type_name_217))),((char*)(__right_value173=string_to_string(c_value_184))),((char*)(__right_value174=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value175=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value176=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (type_name_217 = come_decrement_ref_count(type_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                else {
                    if(                    c_value_184                    ) {
                        add_come_code(info,((char*)(__right_value183=xsprintf("(\%s = come_decrement_ref_count(\%s, (void*)0, (void*)0, \%s/* no_decrement*/, \%s/* no_free*/, (void*)0))\%s",((char*)(__right_value178=string_to_string(c_value_184))),((char*)(__right_value179=string_to_string(c_value_184))),((char*)(__right_value180=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value181=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value182=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
            }
        }
        (c_value_184 = come_decrement_ref_count(c_value_184, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name2_189 = come_decrement_ref_count(fun_name2_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj57=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_182);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj58=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_181);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_202;
struct tuple2$2char$phsType$ph* __result_obj__64;
struct tuple2$2char$phsType$ph* __result_obj__65;
struct tuple2$2char$phsType$ph* result_203;
struct tuple2$2char$phsType$ph* __result_obj__66;
result_202 = (void*)0;
result_203 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_202,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__64 = result_202;
        return __result_obj__64;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__65 = self->it->item;
        return __result_obj__65;
    }
    memset(&result_203,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__66 = result_203;
    return __result_obj__66;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_205;
struct tuple2$2char$phsType$ph* __result_obj__67;
struct tuple2$2char$phsType$ph* __result_obj__68;
struct tuple2$2char$phsType$ph* result_206;
struct tuple2$2char$phsType$ph* __result_obj__69;
result_205 = (void*)0;
result_206 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_205,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__67 = result_205;
        return __result_obj__67;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__68 = self->it->item;
        return __result_obj__68;
    }
    memset(&result_206,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__69 = result_206;
    return __result_obj__69;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_210;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_211;
    it_210=self->head;
    while(    it_210!=((void*)0)    ) {
        prev_it_211=it_210;
        it_210=it_210->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info){
_Bool in_clone_object_218;
void* __right_value184 = (void*)0;
struct sType* type2_219;
struct sType* __dec_obj59;
char* result_220;
struct sType* result_type_221;
struct list$1CVALUE$ph* stack_saved_222;
struct list$1sRightValueObject$ph* right_value_objects_223;
void* __right_value185 = (void*)0;
char* c_value_224;
struct sClass* klass_225;
char* class_name_226;
char* fun_name_227;
struct sFun* cloner_228;
char* fun_name2_229;
void* __right_value186 = (void*)0;
char* none_generics_name_230;
void* __right_value187 = (void*)0;
struct sType* obj_type_231;
void* __right_value188 = (void*)0;
char* __dec_obj60;
void* __right_value189 = (void*)0;
char* fun_name3_232;
void* __right_value190 = (void*)0;
struct sGenericsFun* generics_fun_233;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var7 = (void*)0;
char* name_236=0;
_Bool err_237=0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__75;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
char* __dec_obj63;
int i_238;
void* __right_value202 = (void*)0;
char* new_fun_name_239;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
char* __dec_obj64;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var8 = (void*)0;
struct sFun* fun_240=0;
char* new_fun_name_241=0;
char* __dec_obj65;
struct sType* __dec_obj66;
void* __right_value207 = (void*)0;
struct sType* __dec_obj67;
void* __right_value208 = (void*)0;
char* __dec_obj68;
void* __right_value209 = (void*)0;
char* __dec_obj69;
void* __right_value210 = (void*)0;
struct sType* __dec_obj70;
void* __right_value211 = (void*)0;
char* type_name_242;
void* __right_value212 = (void*)0;
char* __dec_obj71;
void* __right_value213 = (void*)0;
char* __dec_obj72;
struct list$1sRightValueObject$ph* __dec_obj73;
struct list$1CVALUE$ph* __dec_obj74;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__76;
fun_name2_229 = (void*)0;
memset(&i_238, 0, sizeof(int));
    in_clone_object_218=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_219=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj59=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_220=((void*)0);
    result_type_221=((void*)0);
    stack_saved_222=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_223=info->right_value_objects;
    c_value_224=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_225=type->mClass;
    class_name_226=klass_225->mName;
    fun_name_227="clone";
    cloner_228=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_230=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_231=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj60=fun_name2_229,
        fun_name2_229=(char*)come_increment_ref_count(create_method_name(obj_type_231,(_Bool)0,fun_name_227,info,(_Bool)1));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_232=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_230,fun_name_227));
        generics_fun_233=((struct sGenericsFun*)(__right_value190=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_232,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value190, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_233        ) {
            multiple_assign_var7=((struct tuple2$2char$phbool$*)(__right_value192=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_229)),generics_fun_233,(struct sType*)come_increment_ref_count(obj_type_231),info)));
            name_236=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            err_237=multiple_assign_var7->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value192, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_237            ) {
                __result_obj__75 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value198=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.c", 660, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "04heap.c", 660, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string(""))))));
                (name_236 = come_decrement_ref_count(name_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_230 = come_decrement_ref_count(none_generics_name_230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_232 = come_decrement_ref_count(fun_name3_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_220 = come_decrement_ref_count(result_220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (c_value_224 = come_decrement_ref_count(c_value_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (fun_name2_229 = come_decrement_ref_count(fun_name2_229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value198, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__75;
            }
            cloner_228=((struct sFun*)(__right_value199=map$2char$phsFun$ph_operator_load_element(info->funcs,name_236)));
            come_call_finalizer(sFun_finalize, __right_value199, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_236 = come_decrement_ref_count(name_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_228=((struct sFun*)(__right_value200=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_229)));
            come_call_finalizer(sFun_finalize, __right_value200, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_230 = come_decrement_ref_count(none_generics_name_230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_232 = come_decrement_ref_count(fun_name3_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj63=fun_name2_229,
        fun_name2_229=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_227,info,(_Bool)1));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_238=128-1        ;        i_238>=1        ;        i_238--        ){
            new_fun_name_239=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_229,i_238));
            cloner_228=((struct sFun*)(__right_value203=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_239)));
            come_call_finalizer(sFun_finalize, __right_value203, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_228            ) {
                __dec_obj64=fun_name2_229,
                fun_name2_229=(char*)come_increment_ref_count(__builtin_string(new_fun_name_239));
                __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_239 = come_decrement_ref_count(new_fun_name_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_239 = come_decrement_ref_count(new_fun_name_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_228==((void*)0)        ) {
            cloner_228=((struct sFun*)(__right_value205=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_229)));
            come_call_finalizer(sFun_finalize, __right_value205, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_228==((void*)0)&&!type->mClass->mNumber    ) {
        multiple_assign_var8=((struct tuple2$2sFun$pchar$ph*)(__right_value206=create_cloner_automatically((struct sType*)come_increment_ref_count(type),fun_name_227,info)));
        fun_240=multiple_assign_var8->v1;
        new_fun_name_241=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value206, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj65=fun_name2_229,
        fun_name2_229=(char*)come_increment_ref_count(new_fun_name_241);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_228=fun_240;
        (new_fun_name_241 = come_decrement_ref_count(new_fun_name_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    cloner_228!=((void*)0)    ) {
        __dec_obj66=result_type_221,
        result_type_221=(struct sType*)come_increment_ref_count(cloner_228->mResultType);
        come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj67=result_type_221,
        result_type_221=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_221),(struct sType*)come_increment_ref_count(type),info));
        come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj68=result_220,
        result_220=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_229,c_value_224));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        gComeDebug        ) {
            __dec_obj69=result_220,
            result_220=(char*)come_increment_ref_count(append_stackframe(result_220,result_type_221,info));
            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj70=result_type_221,
        result_type_221=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        type2_219->mHeap=(_Bool)1;
        type_name_242=(char*)come_increment_ref_count(make_type_name_string(type2_219,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj71=result_220,
        result_220=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_242,c_value_224,info->sname,info->sline,type_name_242));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        gComeDebug        ) {
            __dec_obj72=result_220,
            result_220=(char*)come_increment_ref_count(append_stackframe(result_220,result_type_221,info));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        (type_name_242 = come_decrement_ref_count(type_name_242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj73=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_223);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj74=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_222);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->in_clone_object=in_clone_object_218;
    __result_obj__76 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value215=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.c", 722, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type_221),(char*)come_increment_ref_count(result_220)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_220 = come_decrement_ref_count(result_220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (c_value_224 = come_decrement_ref_count(c_value_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name2_229 = come_decrement_ref_count(fun_name2_229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value215, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_234;
unsigned int it_235;
struct sGenericsFun* __result_obj__70;
struct sGenericsFun* __result_obj__71;
struct sGenericsFun* __result_obj__72;
struct sGenericsFun* __result_obj__73;
    hash_234=string_get_hash_key(((char*)key))%self->size;
    it_235=hash_234;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_235]        ) {
            if(            string_equals(self->keys[it_235],key)            ) {
                __result_obj__70 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_235]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__70;
            }
            it_235++;
            if(            it_235>=self->size            ) {
                it_235=0;
            }
            else if(            it_235==hash_234            ) {
                __result_obj__71 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__71;
            }
        }
        else {
            __result_obj__72 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__72;
        }
    }
    __result_obj__73 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj61;
char* __dec_obj62;
struct tuple2$2sType$phchar$ph* __result_obj__74;
    __dec_obj61=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj62=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__74 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma){
struct sType* __dec_obj75;
void* __right_value216 = (void*)0;
char* c_value_243;
char* fun_name_244;
void* __right_value217 = (void*)0;
struct sType* type2_245;
void* __right_value218 = (void*)0;
char* fun_name2_246;
struct sFun* dropper_247;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
char* none_generics_name_248;
void* __right_value221 = (void*)0;
char* generics_fun_name_249;
void* __right_value222 = (void*)0;
struct sGenericsFun* generics_fun_250;
void* __right_value223 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var9 = (void*)0;
char* name_251=0;
_Bool err_252=0;
void* __right_value224 = (void*)0;
int i_253;
void* __right_value225 = (void*)0;
char* new_fun_name_254;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
char* __dec_obj76;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
memset(&i_253, 0, sizeof(int));
    if(    gComeC    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    info->no_output_come_code    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj75=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    type->mClass->mStruct||list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        c_value_243=(char*)come_increment_ref_count(__builtin_string(obj));
        fun_name_244="on_drop";
        type2_245=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_245->mHeap=(_Bool)0;
        fun_name2_246=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_244,info,(_Bool)1));
        dropper_247=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0        ) {
            dropper_247=((struct sFun*)(__right_value219=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_246)));
            come_call_finalizer(sFun_finalize, __right_value219, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            dropper_247==((void*)0)            ) {
                none_generics_name_248=(char*)come_increment_ref_count(get_none_generics_name(type2_245->mClass->mName));
                generics_fun_name_249=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_248,fun_name_244));
                generics_fun_250=((struct sGenericsFun*)(__right_value222=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_249)));
                come_call_finalizer(sGenericsFun_finalize, __right_value222, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                generics_fun_250                ) {
                    multiple_assign_var9=((struct tuple2$2char$phbool$*)(__right_value223=create_generics_fun((char*)come_increment_ref_count(fun_name2_246),generics_fun_250,(struct sType*)come_increment_ref_count(type),info)));
                    name_251=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                    err_252=multiple_assign_var9->v2;
                    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value223, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_252                    ) {
                        printf("%s %d: can't create generics dropper\n",info->sname,info->sline);
                        exit(2);
                    }
                    dropper_247=((struct sFun*)(__right_value224=map$2char$phsFun$ph_operator_load_element(info->funcs,name_251)));
                    come_call_finalizer(sFun_finalize, __right_value224, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_251 = come_decrement_ref_count(name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                (none_generics_name_248 = come_decrement_ref_count(none_generics_name_248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (generics_fun_name_249 = come_decrement_ref_count(generics_fun_name_249, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            for(            i_253=128-1            ;            i_253>=1            ;            i_253--            ){
                new_fun_name_254=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_246,i_253));
                dropper_247=((struct sFun*)(__right_value226=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_254)));
                come_call_finalizer(sFun_finalize, __right_value226, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                dropper_247                ) {
                    __dec_obj76=fun_name2_246,
                    fun_name2_246=(char*)come_increment_ref_count(__builtin_string(new_fun_name_254));
                    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    (new_fun_name_254 = come_decrement_ref_count(new_fun_name_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                (new_fun_name_254 = come_decrement_ref_count(new_fun_name_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            dropper_247==((void*)0)            ) {
                dropper_247=((struct sFun*)(__right_value228=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_246)));
                come_call_finalizer(sFun_finalize, __right_value228, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        if(        dropper_247!=((void*)0)        ) {
            if(            c_value_243            ) {
                if(                comma                ) {
                    add_come_code(info,((char*)(__right_value231=xsprintf("\%s(\%s),",((char*)(__right_value229=string_to_string(fun_name2_246))),((char*)(__right_value230=string_to_string(c_value_243)))))));
                    (__right_value229 = come_decrement_ref_count(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value234=xsprintf("\%s(\%s);\n",((char*)(__right_value232=string_to_string(fun_name2_246))),((char*)(__right_value233=string_to_string(c_value_243)))))));
                    (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        (c_value_243 = come_decrement_ref_count(c_value_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name2_246 = come_decrement_ref_count(fun_name2_246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_255;
struct list$1sRightValueObject$ph* right_value_objects_256;
int n_257;
struct list$1sRightValueObject$ph* o2_saved_258;
struct sRightValueObject* it_259;
struct sVar* var__260;
char* __dec_obj77;
struct list$1sRightValueObject$ph* o2_saved_261;
struct sRightValueObject* it_262;
struct sType* type_263;
void* __right_value235 = (void*)0;
struct sType* type2_264;
void* __right_value236 = (void*)0;
struct sType* __dec_obj78;
void* __right_value237 = (void*)0;
    if(    gComeGC||gComeC    ) {
        return;
    }
    if(    info->comma_instead_of_semicolon    ) {
        comma=(_Bool)1;
    }
    free_right_value_255=(_Bool)0;
    right_value_objects_256=info->right_value_objects;
    n_257=0;
    for(    o2_saved_258=(right_value_objects_256),it_259=list$1sRightValueObject$ph_begin((o2_saved_258))    ;    !list$1sRightValueObject$ph_end((o2_saved_258))    ;    it_259=list$1sRightValueObject$ph_next((o2_saved_258))    ){
        if(        it_259&&!it_259->mFreed        ) {
            if(            string_operator_equals(it_259->mFunName,info->come_fun->mName)&&it_259->mBlockLevel==info->block_level&&!it_259->mStored            ) {
                if(                it_259->mObjType                ) {
                    on_drop_object((struct sType*)come_increment_ref_count(it_259->mObjType),it_259->mObjValue,info,comma);
                    var__260=it_259->mObjVar;
                    __dec_obj77=var__260->mCValueName,
                    var__260->mCValueName=((void*)0);
                    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
        }
        n_257++;
    }
    for(    o2_saved_261=(right_value_objects_256),it_262=list$1sRightValueObject$ph_begin((o2_saved_261))    ;    !list$1sRightValueObject$ph_end((o2_saved_261))    ;    it_262=list$1sRightValueObject$ph_next((o2_saved_261))    ){
        if(        it_262&&!it_262->mFreed        ) {
            if(            string_operator_equals(it_262->mFunName,info->come_fun->mName)&&it_262->mBlockLevel==info->block_level&&!it_262->mStored&&!it_262->mNoFree            ) {
                type_263=(struct sType*)come_increment_ref_count(it_262->mType);
                type2_264=(struct sType*)come_increment_ref_count(sType_clone(type_263));
                if(                info->generics_type                ) {
                    __dec_obj78=type_263,
                    type_263=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type2_264),(struct sType*)come_increment_ref_count(info->generics_type),info));
                    come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                free_object((struct sType*)come_increment_ref_count(sType_clone(type_263)),it_262->mVarName,!it_262->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0);
                it_262->mFreed=(_Bool)1;
                free_right_value_255=(_Bool)1;
                come_call_finalizer(sType_finalize, type_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        n_257++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
struct sVarTable* it_265;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sVar* var__266;
struct sVar* __result_obj__85;
struct sVar* __result_obj__86;
    it_265=table;
    while(    it_265    ) {
        var__266=((struct sVar*)(__right_value240=map$2char$phsVar$ph_operator_load_element(it_265->mVars,((char*)(__right_value239=__builtin_string(name))))));
        (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value239 = come_decrement_ref_count(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value240, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        var__266        ) {
            __result_obj__85 = var__266;
            return __result_obj__85;
        }
        it_265=it_265->mParent;
    }
    __result_obj__86 = ((void*)0);
    return __result_obj__86;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_267;
unsigned int hash_268;
unsigned int it_269;
struct sVar* __result_obj__77;
struct sVar* __result_obj__78;
struct sVar* __result_obj__79;
struct sVar* __result_obj__80;
default_value_267 = (void*)0;
    memset(&default_value_267,0,sizeof(struct sVar*));
    hash_268=string_get_hash_key(((char*)key))%self->size;
    it_269=hash_268;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_269]        ) {
            if(            string_equals(self->keys[it_269],key)            ) {
                __result_obj__77 = (struct sVar*)come_increment_ref_count(self->items[it_269]);
                come_call_finalizer(sVar_finalize, default_value_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__77;
            }
            it_269++;
            if(            it_269>=self->size            ) {
                it_269=0;
            }
            else if(            it_269==hash_268            ) {
                __result_obj__78 = (struct sVar*)come_increment_ref_count(default_value_267);
                come_call_finalizer(sVar_finalize, default_value_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__78;
            }
        }
        else {
            __result_obj__79 = (struct sVar*)come_increment_ref_count(default_value_267);
            come_call_finalizer(sVar_finalize, default_value_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__79;
        }
    }
    __result_obj__80 = (struct sVar*)come_increment_ref_count(default_value_267);
    come_call_finalizer(sVar_finalize, default_value_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
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

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_270;
unsigned int hash_271;
unsigned int it_272;
struct sVar* __result_obj__81;
struct sVar* __result_obj__82;
struct sVar* __result_obj__83;
struct sVar* __result_obj__84;
default_value_270 = (void*)0;
    memset(&default_value_270,0,sizeof(struct sVar*));
    hash_271=string_get_hash_key(((char*)key))%self->size;
    it_272=hash_271;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_272]        ) {
            if(            string_equals(self->keys[it_272],key)            ) {
                __result_obj__81 = (struct sVar*)come_increment_ref_count(self->items[it_272]);
                come_call_finalizer(sVar_finalize, default_value_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__81;
            }
            it_272++;
            if(            it_272>=self->size            ) {
                it_272=0;
            }
            else if(            it_272==hash_271            ) {
                __result_obj__82 = (struct sVar*)come_increment_ref_count(default_value_270);
                come_call_finalizer(sVar_finalize, default_value_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__82;
            }
        }
        else {
            __result_obj__83 = (struct sVar*)come_increment_ref_count(default_value_270);
            come_call_finalizer(sVar_finalize, default_value_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__83;
        }
    }
    __result_obj__84 = (struct sVar*)come_increment_ref_count(default_value_270);
    come_call_finalizer(sVar_finalize, default_value_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2char$phsVar$ph* o2_saved_273;
char* it_276;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sVar* p_279;
struct sType* type_280;
struct sClass* klass_281;
_Bool comma_282;
void* __right_value244 = (void*)0;
struct sType* type2_283;
void* __right_value245 = (void*)0;
struct sType* type2_284;
void* __right_value246 = (void*)0;
char* c_value_285;
void* __right_value247 = (void*)0;
struct sType* type2_286;
    if(    gComeGC||gComeC    ) {
        return;
    }
    for(    o2_saved_273=(struct map$2char$phsVar$ph*)come_increment_ref_count((table->mVars)),it_276=map$2char$phsVar$ph_begin((o2_saved_273))    ;    !map$2char$phsVar$ph_end((o2_saved_273))    ;    it_276=map$2char$phsVar$ph_next((o2_saved_273))    ){
        p_279=((struct sVar*)(__right_value243=map$2char$phsVar$ph_operator_load_element(table->mVars,((char*)(__right_value242=__builtin_string(it_276))))));
        (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value243, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type_280=p_279->mType;
        klass_281=type_280->mClass;
        comma_282=p_279->mComma;
        if(        type_280->mChannel        ) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p_279->mCValueName,p_279->mCValueName,comma_282);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p_279->mCValueName,p_279->mCValueName,comma_282);
        }
        else if(        ret_value!=((void*)0)&&p_279->mCValueName!=((void*)0)&&string_operator_equals(p_279->mCValueName,ret_value->mCValueName)&&type_280->mHeap        ) {
            type2_283=(struct sType*)come_increment_ref_count(sType_clone(type_280));
            free_object((struct sType*)come_increment_ref_count(type2_283),p_279->mCValueName,(_Bool)0,(_Bool)1,info,comma_282,(_Bool)1);
            come_call_finalizer(sType_finalize, type2_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        type_280->mHeap&&p_279->mCValueName        ) {
            type2_284=(struct sType*)come_increment_ref_count(sType_clone(type_280));
            free_object((struct sType*)come_increment_ref_count(type2_284),p_279->mCValueName,(_Bool)0,(_Bool)0,info,comma_282,(_Bool)0);
            come_call_finalizer(sType_finalize, type2_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        klass_281->mStruct&&p_279->mCValueName&&type_280->mAllocaValue&&!type_280->mNoCallingDestructor        ) {
            c_value_285=(char*)come_increment_ref_count(xsprintf("(&%s)",p_279->mCValueName));
            type2_286=(struct sType*)come_increment_ref_count(sType_clone(type_280));
            type2_286->mPointerNum++;
            free_object((struct sType*)come_increment_ref_count(type2_286),c_value_285,(_Bool)0,(_Bool)0,info,comma_282,(_Bool)0);
            (c_value_285 = come_decrement_ref_count(c_value_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type2_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_274;
char* __result_obj__87;
char* __result_obj__88;
char* result_275;
char* __result_obj__89;
result_274 = (void*)0;
result_275 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_274,0,sizeof(char*));
        __result_obj__87 = result_274;
        return __result_obj__87;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__88 = self->key_list->it->item;
        return __result_obj__88;
    }
    memset(&result_275,0,sizeof(char*));
    __result_obj__89 = result_275;
    return __result_obj__89;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_277;
char* __result_obj__90;
char* __result_obj__91;
char* result_278;
char* __result_obj__92;
result_277 = (void*)0;
result_278 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_277,0,sizeof(char*));
        __result_obj__90 = result_277;
        return __result_obj__90;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__91 = self->key_list->it->item;
        return __result_obj__91;
    }
    memset(&result_278,0,sizeof(char*));
    __result_obj__92 = result_278;
    return __result_obj__92;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_287;
int i_288;
    for(    i_287=0    ;    i_287<self->size    ;    i_287++    ){
        if(        self->item_existance[i_287]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_287], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_288=0    ;    i_288<self->size    ;    i_288++    ){
        if(        self->item_existance[i_288]        ) {
            if(            1            ) {
                (self->keys[i_288] = come_decrement_ref_count(self->keys[i_288], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_289;
    if(    gComeGC||gComeC    ) {
        return;
    }
    it_289=info->lv_table;
    if(    it_289==info->come_fun->mBlock->mVarTable    ) {
        free_objects(it_289,ret_value,info);
    }
    else {
        while(        it_289!=info->come_fun->mBlock->mVarTable        ) {
            free_objects(it_289,ret_value,info);
            it_289=it_289->mParent;
        }
        free_objects(it_289,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_290;
struct sVarTable* current_loop_vtable_291;
struct sVarTable* it_292;
    if(    gComeGC||gComeC    ) {
        return;
    }
    ret_value_290=((void*)0);
    current_loop_vtable_291=info->current_loop_vtable;
    if(    current_loop_vtable_291!=((void*)0)    ) {
        it_292=info->lv_table;
        while(        it_292!=current_loop_vtable_291        ) {
            free_objects(it_292,ret_value_290,info);
            it_292=it_292->mParent;
        }
        free_objects(it_292,ret_value_290,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __right_value248 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
char* __result_obj__93;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
char* __result_obj__94;
void* __right_value259 = (void*)0;
char* var_name_294;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
char* __result_obj__95;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
char* __result_obj__96;
void* __right_value276 = (void*)0;
char* __result_obj__97;
    if(    string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0    ) {
        if(        gComeDebug||type->mRecord        ) {
            if(            (_condtional_value_X1=(((struct sFun*)(__right_value248=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_push_stack_frame_v2"))))),            come_call_finalizer(sFun_finalize, __right_value248, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X1            ) {
                __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value253=xsprintf("(come_push_stackframe_v2(\"\%s\", \%s,\%s),\%s,come_pop_stackframe_v2())",((char*)(__right_value249=string_to_string(info->sname))),((char*)(__right_value250=int_to_string(info->sline))),((char*)(__right_value251=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value252=charp_to_string(c_value)))))));
                (__right_value249 = come_decrement_ref_count(__right_value249, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__93;
            }
            else {
                __result_obj__94 = (char*)come_increment_ref_count(((char*)(__right_value258=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value254=string_to_string(info->sname))),((char*)(__right_value255=int_to_string(info->sline))),((char*)(__right_value256=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value257=charp_to_string(c_value)))))));
                (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value255 = come_decrement_ref_count(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__94;
            }
        }
    }
    else if(    gComeDebug||type->mRecord    ) {
        static int n_293=0;
        ++n_293;
        var_name_294=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_293));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value260=make_define_var(type,var_name_294,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        (_condtional_value_X2=(((struct sFun*)(__right_value261=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_push_stack_frame_v2"))))),        come_call_finalizer(sFun_finalize, __right_value261, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X2        ) {
            __result_obj__95 = (char*)come_increment_ref_count(((char*)(__right_value268=xsprintf("(come_push_stackframe_v2(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe_v2(), \%s)",((char*)(__right_value262=string_to_string(info->sname))),((char*)(__right_value263=int_to_string(info->sline))),((char*)(__right_value264=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value265=string_to_string(var_name_294))),((char*)(__right_value266=charp_to_string(c_value))),((char*)(__right_value267=string_to_string(var_name_294)))))));
            (var_name_294 = come_decrement_ref_count(var_name_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value265 = come_decrement_ref_count(__right_value265, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__95 = come_decrement_ref_count(__result_obj__95, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__95;
        }
        else {
            __result_obj__96 = (char*)come_increment_ref_count(((char*)(__right_value275=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value269=string_to_string(info->sname))),((char*)(__right_value270=int_to_string(info->sline))),((char*)(__right_value271=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value272=string_to_string(var_name_294))),((char*)(__right_value273=charp_to_string(c_value))),((char*)(__right_value274=string_to_string(var_name_294)))))));
            (var_name_294 = come_decrement_ref_count(var_name_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__96;
        }
        (var_name_294 = come_decrement_ref_count(var_name_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__97 = (char*)come_increment_ref_count(((char*)(__right_value276=__builtin_string(c_value))));
    (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__97;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2char$phsVar$ph* o2_saved_295;
char* it_296;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sVar* p_297;
struct sType* type_298;
struct sClass* klass_299;
_Bool __result_obj__98;
_Bool __result_obj__99;
_Bool __result_obj__100;
_Bool __result_obj__101;
    if(    gComeGC||gComeC    ) {
        return (_Bool)1;
    }
    for(    o2_saved_295=(struct map$2char$phsVar$ph*)come_increment_ref_count((table->mVars)),it_296=map$2char$phsVar$ph_begin((o2_saved_295))    ;    !map$2char$phsVar$ph_end((o2_saved_295))    ;    it_296=map$2char$phsVar$ph_next((o2_saved_295))    ){
        p_297=((struct sVar*)(__right_value279=map$2char$phsVar$ph_operator_load_element(table->mVars,((char*)(__right_value278=__builtin_string(it_296))))));
        (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value279, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type_298=p_297->mType;
        klass_299=type_298->mClass;
        if(        type_298->mChannel        ) {
            __result_obj__98 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__98;
        }
        else if(        ret_value!=((void*)0)&&p_297->mCValueName!=((void*)0)&&string_operator_equals(p_297->mCValueName,ret_value->mCValueName)&&type_298->mHeap        ) {
            __result_obj__99 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__99;
        }
        else if(        type_298->mHeap&&p_297->mCValueName        ) {
            __result_obj__100 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__100;
        }
        else if(        klass_299->mStruct&&p_297->mCValueName&&type_298->mAllocaValue&&!type_298->mNoCallingDestructor        ) {
            __result_obj__101 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__101;
        }
    }
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_300;
    if(    gComeGC||gComeC    ) {
        return (_Bool)0;
    }
    it_300=info->lv_table;
    if(    it_300==info->come_fun->mBlock->mVarTable    ) {
        if(        existance_free_objects(it_300,ret_value,info)        ) {
            return (_Bool)1;
        }
    }
    else {
        while(        it_300!=info->come_fun->mBlock->mVarTable        ) {
            if(            existance_free_objects(it_300,ret_value,info)            ) {
                return (_Bool)1;
            }
            it_300=it_300->mParent;
        }
        if(        existance_free_objects(it_300,ret_value,info)        ) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObject$ph* right_value_objects_301;
struct list$1sRightValueObject$ph* o2_saved_302;
struct sRightValueObject* it_303;
    if(    gComeGC||gComeC    ) {
        return (_Bool)0;
    }
    right_value_objects_301=info->right_value_objects;
    for(    o2_saved_302=(right_value_objects_301),it_303=list$1sRightValueObject$ph_begin((o2_saved_302))    ;    !list$1sRightValueObject$ph_end((o2_saved_302))    ;    it_303=list$1sRightValueObject$ph_next((o2_saved_302))    ){
        if(        it_303&&!it_303->mFreed        ) {
            if(            string_operator_equals(it_303->mFunName,info->come_fun->mName)&&it_303->mBlockLevel==info->block_level            ) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

