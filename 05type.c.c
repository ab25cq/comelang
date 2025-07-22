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
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
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
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
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
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
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
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sClass* klass_0;
void* __right_value1 = (void*)0;
struct sType* type_15;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct sClass* generics_class_22;
void* __right_value5 = (void*)0;
_Bool generics_type_name_23;
void* __right_value6 = (void*)0;
_Bool mgenerics_type_name_29;
    klass_0=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,buf)));
    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    type_15=((struct sType*)(__right_value1=map$2char$phsType$ph_operator_load_element(info->types,buf)));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    generics_class_22=((struct sClass*)(__right_value4=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value3=__builtin_string(buf))))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value4, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    generics_type_name_23=list$1char$ph_contained(info->generics_type_names,((char*)(__right_value5=__builtin_string(buf))));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    mgenerics_type_name_29=list$1char$ph_contained(info->method_generics_type_names,((char*)(__right_value6=__builtin_string(buf))));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    if(    gComeC    ) {
        return (type_15&&type_15->mTypedef)||(klass_0&&klass_0->mNumber)||(klass_0&&klass_0->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_22||generics_type_name_23||mgenerics_type_name_29||klass_0||type_15||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"mutable"))||charp_operator_equals(buf,"_task")||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_1;
unsigned int hash_2;
unsigned int it_3;
struct sClass* __result_obj__1;
struct sClass* __result_obj__2;
struct sClass* __result_obj__3;
struct sClass* __result_obj__4;
default_value_1 = (void*)0;
    memset(&default_value_1,0,sizeof(struct sClass*));
    hash_2=string_get_hash_key(((char*)key))%self->size;
    it_3=hash_2;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_3]        ) {
            if(            string_equals(self->keys[it_3],key)            ) {
                __result_obj__1 = (struct sClass*)come_increment_ref_count(self->items[it_3]);
                come_call_finalizer(sClass_finalize, default_value_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__1;
            }
            it_3++;
            if(            it_3>=self->size            ) {
                it_3=0;
            }
            else if(            it_3==hash_2            ) {
                __result_obj__2 = (struct sClass*)come_increment_ref_count(default_value_1);
                come_call_finalizer(sClass_finalize, default_value_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__2;
            }
        }
        else {
            __result_obj__3 = (struct sClass*)come_increment_ref_count(default_value_1);
            come_call_finalizer(sClass_finalize, default_value_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__3;
        }
    }
    __result_obj__4 = (struct sClass*)come_increment_ref_count(default_value_1);
    come_call_finalizer(sClass_finalize, default_value_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__4;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_4;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_5;
    it_4=self->head;
    while(    it_4!=((void*)0)    ) {
        prev_it_5=it_4;
        it_4=it_4->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_12;
unsigned int hash_13;
unsigned int it_14;
struct sClass* __result_obj__5;
struct sClass* __result_obj__6;
struct sClass* __result_obj__7;
struct sClass* __result_obj__8;
default_value_12 = (void*)0;
    memset(&default_value_12,0,sizeof(struct sClass*));
    hash_13=string_get_hash_key(((char*)key))%self->size;
    it_14=hash_13;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_14]        ) {
            if(            string_equals(self->keys[it_14],key)            ) {
                __result_obj__5 = (struct sClass*)come_increment_ref_count(self->items[it_14]);
                come_call_finalizer(sClass_finalize, default_value_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__5;
            }
            it_14++;
            if(            it_14>=self->size            ) {
                it_14=0;
            }
            else if(            it_14==hash_13            ) {
                __result_obj__6 = (struct sClass*)come_increment_ref_count(default_value_12);
                come_call_finalizer(sClass_finalize, default_value_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__6;
            }
        }
        else {
            __result_obj__7 = (struct sClass*)come_increment_ref_count(default_value_12);
            come_call_finalizer(sClass_finalize, default_value_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__7;
        }
    }
    __result_obj__8 = (struct sClass*)come_increment_ref_count(default_value_12);
    come_call_finalizer(sClass_finalize, default_value_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__8;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_16;
unsigned int hash_17;
unsigned int it_18;
struct sType* __result_obj__9;
struct sType* __result_obj__10;
struct sType* __result_obj__11;
struct sType* __result_obj__12;
default_value_16 = (void*)0;
    memset(&default_value_16,0,sizeof(struct sType*));
    hash_17=string_get_hash_key(((char*)key))%self->size;
    it_18=hash_17;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_18]        ) {
            if(            string_equals(self->keys[it_18],key)            ) {
                __result_obj__9 = (struct sType*)come_increment_ref_count(self->items[it_18]);
                come_call_finalizer(sType_finalize, default_value_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__9;
            }
            it_18++;
            if(            it_18>=self->size            ) {
                it_18=0;
            }
            else if(            it_18==hash_17            ) {
                __result_obj__10 = (struct sType*)come_increment_ref_count(default_value_16);
                come_call_finalizer(sType_finalize, default_value_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__10;
            }
        }
        else {
            __result_obj__11 = (struct sType*)come_increment_ref_count(default_value_16);
            come_call_finalizer(sType_finalize, default_value_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__11;
        }
    }
    __result_obj__12 = (struct sType*)come_increment_ref_count(default_value_16);
    come_call_finalizer(sType_finalize, default_value_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__12;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_19;
unsigned int hash_20;
unsigned int it_21;
struct sType* __result_obj__13;
struct sType* __result_obj__14;
struct sType* __result_obj__15;
struct sType* __result_obj__16;
default_value_19 = (void*)0;
    memset(&default_value_19,0,sizeof(struct sType*));
    hash_20=string_get_hash_key(((char*)key))%self->size;
    it_21=hash_20;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_21]        ) {
            if(            string_equals(self->keys[it_21],key)            ) {
                __result_obj__13 = (struct sType*)come_increment_ref_count(self->items[it_21]);
                come_call_finalizer(sType_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__13;
            }
            it_21++;
            if(            it_21>=self->size            ) {
                it_21=0;
            }
            else if(            it_21==hash_20            ) {
                __result_obj__14 = (struct sType*)come_increment_ref_count(default_value_19);
                come_call_finalizer(sType_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__14;
            }
        }
        else {
            __result_obj__15 = (struct sType*)come_increment_ref_count(default_value_19);
            come_call_finalizer(sType_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__15;
        }
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(default_value_19);
    come_call_finalizer(sType_finalize, default_value_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item){
char* it_26;
    for(    it_26=list$1char$ph_begin(self)    ;    !list$1char$ph_end(self)    ;    it_26=list$1char$ph_next(self)    ){
        if(        string_equals(it_26,item)        ) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_24;
char* __result_obj__17;
char* __result_obj__18;
char* result_25;
char* __result_obj__19;
result_24 = (void*)0;
result_25 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_24,0,sizeof(char*));
        __result_obj__17 = result_24;
        return __result_obj__17;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__18 = self->it->item;
        return __result_obj__18;
    }
    memset(&result_25,0,sizeof(char*));
    __result_obj__19 = result_25;
    return __result_obj__19;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_27;
char* __result_obj__20;
char* __result_obj__21;
char* result_28;
char* __result_obj__22;
result_27 = (void*)0;
result_28 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_27,0,sizeof(char*));
        __result_obj__20 = result_27;
        return __result_obj__20;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__21 = self->it->item;
        return __result_obj__21;
    }
    memset(&result_28,0,sizeof(char*));
    __result_obj__22 = result_28;
    return __result_obj__22;
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct sType* type2_30;
struct sType* __dec_obj1;
void* __right_value44 = (void*)0;
struct sType* __dec_obj25;
struct list$1sType$ph* o2_saved_54;
struct sType* it_57;
_Bool __result_obj__45;
_Bool __result_obj__46;
_Bool __result_obj__47;
_Bool __result_obj__48;
type2_30 = (void*)0;
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj1=type2_30,
        type2_30=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj25=type2_30,
        type2_30=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    for(    o2_saved_54=(struct list$1sType$ph*)come_increment_ref_count((type2_30->mGenericsTypes)),it_57=list$1sType$ph_begin((o2_saved_54))    ;    !list$1sType$ph_end((o2_saved_54))    ;    it_57=list$1sType$ph_next((o2_saved_54))    ){
        if(        is_contained_generics_class(it_57,info)        ) {
            __result_obj__45 = (_Bool)1;
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type2_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__45;
        }
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    type2_30->mClass->mGenerics    ) {
        __result_obj__46 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__46;
    }
    if(    type2_30->mClass->mMethodGenerics    ) {
        __result_obj__47 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__47;
    }
    __result_obj__48 = (_Bool)0;
    come_call_finalizer(sType_finalize, type2_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__48;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__23;
void* __right_value7 = (void*)0;
struct sType* result_31;
void* __right_value8 = (void*)0;
struct sType* __dec_obj2;
void* __right_value9 = (void*)0;
struct sType* __dec_obj3;
void* __right_value17 = (void*)0;
struct list$1sType$ph* __dec_obj7;
void* __right_value18 = (void*)0;
struct sType* __dec_obj8;
void* __right_value20 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value21 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value22 = (void*)0;
char* __dec_obj11;
void* __right_value23 = (void*)0;
char* __dec_obj12;
void* __right_value24 = (void*)0;
char* __dec_obj13;
void* __right_value32 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
void* __right_value33 = (void*)0;
char* __dec_obj18;
void* __right_value34 = (void*)0;
struct list$1sType$ph* __dec_obj19;
void* __right_value42 = (void*)0;
struct list$1char$ph* __dec_obj23;
void* __right_value43 = (void*)0;
struct sType* __dec_obj24;
struct sType* __result_obj__38;
    if(    self==(void*)0    ) {
        __result_obj__23 = (void*)0;
        return __result_obj__23;
    }
    result_31=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_31->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj2=result_31->mOriginalLoadVarType,
        result_31->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj3=result_31->mChannelType,
        result_31->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj7=result_31->mGenericsTypes,
        result_31->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj8=result_31->mNoSolvedGenericsType,
        result_31->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj9=result_31->mSizeNum,
        result_31->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj10=result_31->mAlignas,
        result_31->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj11=result_31->mTupleName,
        result_31->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj12=result_31->mAttribute,
        result_31->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_31->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_31->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_31->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_31->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_31->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_31->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_31->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_31->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_31->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_31->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_31->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_31->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_31->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_31->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_31->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_31->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_31->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_31->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_31->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_31->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_31->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_31->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_31->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_31->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj13=result_31->mAsmName,
        result_31->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_31->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_31->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_31->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj17=result_31->mArrayNum,
        result_31->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_31->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_31->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_31->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_31->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_31->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj18=result_31->mOriginalTypeName,
        result_31->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_31->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_31->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_31->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_31->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj19=result_31->mParamTypes,
        result_31->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj23=result_31->mParamNames,
        result_31->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj24=result_31->mResultType,
        result_31->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_31->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_31->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__38 = result_31;
    come_call_finalizer(sType_finalize, result_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__38;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__24;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* result_32;
struct list_item$1sType$ph* it_33;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct list$1sType$ph* __result_obj__27;
    if(    self==((void*)0)    ) {
        __result_obj__24 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__24;
    }
    result_32=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1008, "struct list$1sType$ph*"))));
    it_33=self->head;
    while(    it_33!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_32,(struct sType*)come_increment_ref_count(sType_clone(it_33->item)));
        }
        else {
            list$1sType$ph_add(result_32,(struct sType*)come_increment_ref_count(sType_clone(it_33->item)));
        }
        it_33=it_33->next;
    }
    __result_obj__27 = (struct list$1sType$ph*)come_increment_ref_count(result_32);
    come_call_finalizer(list$1sType$ph$p_finalize, result_32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__27;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__25;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__25 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value12 = (void*)0;
struct list_item$1sType$ph* litem_34;
struct sType* __dec_obj4;
void* __right_value13 = (void*)0;
struct list_item$1sType$ph* litem_35;
struct sType* __dec_obj5;
void* __right_value14 = (void*)0;
struct list_item$1sType$ph* litem_36;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__26;
    if(    self->len==0    ) {
        litem_34=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value12=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        __dec_obj4=litem_34->item,
        litem_34->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1    ) {
        litem_35=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value13=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        __dec_obj5=litem_35->item,
        litem_35->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value14=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        __dec_obj6=litem_36->item,
        litem_36->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result_obj__26 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__26;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_37;
struct list_item$1sType$ph* prev_it_38;
    it_37=self->head;
    while(    it_37!=((void*)0)    ) {
        prev_it_38=it_37;
        it_37=it_37->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__28;
void* __right_value19 = (void*)0;
struct sNode* result_39;
struct sNode* __result_obj__29;
    if(    self==(void*)0    ) {
        __result_obj__28 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__28) ? __result_obj__28 = come_decrement_ref_count(__result_obj__28, ((struct sNode*)__result_obj__28)->finalize, ((struct sNode*)__result_obj__28)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__28;
    }
    result_39=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_39->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_39->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_39->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_39->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_39->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_39->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_39->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_39->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_39->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_39->no_mutex=self->no_mutex;
    }
    __result_obj__29 = (struct sNode*)come_increment_ref_count(result_39);
    ((result_39) ? result_39 = come_decrement_ref_count(result_39, ((struct sNode*)result_39)->finalize, ((struct sNode*)result_39)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__29) ? __result_obj__29 = come_decrement_ref_count(__result_obj__29, ((struct sNode*)__result_obj__29)->finalize, ((struct sNode*)__result_obj__29)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__29;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__30;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* result_40;
struct list_item$1sNode$ph* it_41;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1sNode$ph* __result_obj__33;
    if(    self==((void*)0)    ) {
        __result_obj__30 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__30;
    }
    result_40=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1008, "struct list$1sNode$ph*"))));
    it_41=self->head;
    while(    it_41!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_40,(struct sNode*)come_increment_ref_count(sNode_clone(it_41->item)));
        }
        else {
            list$1sNode$ph_add(result_40,(struct sNode*)come_increment_ref_count(sNode_clone(it_41->item)));
        }
        it_41=it_41->next;
    }
    __result_obj__33 = (struct list$1sNode$ph*)come_increment_ref_count(result_40);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__33;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__31;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__31 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__31;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value27 = (void*)0;
struct list_item$1sNode$ph* litem_42;
struct sNode* __dec_obj14;
void* __right_value28 = (void*)0;
struct list_item$1sNode$ph* litem_43;
struct sNode* __dec_obj15;
void* __right_value29 = (void*)0;
struct list_item$1sNode$ph* litem_44;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__32;
    if(    self->len==0    ) {
        litem_42=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value27=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem_42->prev=((void*)0);
        litem_42->next=((void*)0);
        __dec_obj14=litem_42->item,
        litem_42->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_42;
        self->head=litem_42;
    }
    else if(    self->len==1    ) {
        litem_43=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value28=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        __dec_obj15=litem_43->item,
        litem_43->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        litem_44=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value29=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        __dec_obj16=litem_44->item,
        litem_44->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
    __result_obj__32 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__32;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_45;
struct list_item$1sNode$ph* prev_it_46;
    it_45=self->head;
    while(    it_45!=((void*)0)    ) {
        prev_it_46=it_45;
        it_45=it_45->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__34;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1char$ph* result_47;
struct list_item$1char$ph* it_48;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1char$ph* __result_obj__37;
    if(    self==((void*)0)    ) {
        __result_obj__34 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__34;
    }
    result_47=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1008, "struct list$1char$ph*"))));
    it_48=self->head;
    while(    it_48!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_47,(char*)come_increment_ref_count((char*)come_memdup(it_48->item, "./comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result_47,(char*)come_increment_ref_count((char*)come_memdup(it_48->item, "./comelang.h", 1016, "char*")));
        }
        it_48=it_48->next;
    }
    __result_obj__37 = (struct list$1char$ph*)come_increment_ref_count(result_47);
    come_call_finalizer(list$1char$ph$p_finalize, result_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__35;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__35 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__35;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value37 = (void*)0;
struct list_item$1char$ph* litem_49;
char* __dec_obj20;
void* __right_value38 = (void*)0;
struct list_item$1char$ph* litem_50;
char* __dec_obj21;
void* __right_value39 = (void*)0;
struct list_item$1char$ph* litem_51;
char* __dec_obj22;
struct list$1char$ph* __result_obj__36;
    if(    self->len==0    ) {
        litem_49=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value37=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem_49->prev=((void*)0);
        litem_49->next=((void*)0);
        __dec_obj20=litem_49->item,
        litem_49->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_49;
        self->head=litem_49;
    }
    else if(    self->len==1    ) {
        litem_50=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value38=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_50->prev=self->head;
        litem_50->next=((void*)0);
        __dec_obj21=litem_50->item,
        litem_50->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_50;
        self->head->next=litem_50;
    }
    else {
        litem_51=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value39=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_51->prev=self->tail;
        litem_51->next=((void*)0);
        __dec_obj22=litem_51->item,
        litem_51->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_51;
        self->tail=litem_51;
    }
    self->len++;
    __result_obj__36 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__36;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_52;
struct list_item$1char$ph* prev_it_53;
    it_52=self->head;
    while(    it_52!=((void*)0)    ) {
        prev_it_53=it_52;
        it_52=it_52->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_55;
struct sType* __result_obj__39;
struct sType* __result_obj__40;
struct sType* result_56;
struct sType* __result_obj__41;
result_55 = (void*)0;
result_56 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_55,0,sizeof(struct sType*));
        __result_obj__39 = result_55;
        return __result_obj__39;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__40 = self->it->item;
        return __result_obj__40;
    }
    memset(&result_56,0,sizeof(struct sType*));
    __result_obj__41 = result_56;
    return __result_obj__41;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_58;
struct sType* __result_obj__42;
struct sType* __result_obj__43;
struct sType* result_59;
struct sType* __result_obj__44;
result_58 = (void*)0;
result_59 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_58,0,sizeof(struct sType*));
        __result_obj__42 = result_58;
        return __result_obj__42;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__43 = self->it->item;
        return __result_obj__43;
    }
    memset(&result_59,0,sizeof(struct sType*));
    __result_obj__44 = result_59;
    return __result_obj__44;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct list$1sType$ph* param_types_60;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct list$1char$ph* param_names_61;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1char$ph* param_default_parametors_62;
_Bool var_args_63;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sType* type__64;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
_Bool void_param_65;
char* p_66;
int sline_67;
void* __right_value55 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* param_type_68=0;
char* param_name_69=0;
_Bool err_70=0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__50;
void* __right_value58 = (void*)0;
struct sType* param_type2_71;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
char* p_78;
_Bool no_comma_79;
void* __right_value67 = (void*)0;
struct sNode* node_80;
char* p2_81;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__53;
    param_types_60=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 82, "struct list$1sType$ph*"))));
    param_names_61=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 83, "struct list$1char$ph*"))));
    param_default_parametors_62=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 84, "struct list$1char$ph*"))));
    var_args_63=(_Bool)0;
    if(    in_constructor_    ) {
        list$1char$ph_add(param_names_61,(char*)come_increment_ref_count(xsprintf("self")));
        type__64=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        type__64->mHeap=(_Bool)1;
        list$1sType$ph_add(param_types_60,(struct sType*)come_increment_ref_count(type__64));
        list$1char$ph_add(param_default_parametors_62,((void*)0));
        come_call_finalizer(sType_finalize, type__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    info->in_class    ) {
        list$1char$ph_add(param_names_61,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sType$ph_add(param_types_60,(struct sType*)come_increment_ref_count(sType_clone(info->class_type)));
        list$1char$ph_add(param_default_parametors_62,((void*)0));
    }
    expected_next_character(40,info);
    void_param_65=(_Bool)0;
    {
        p_66=info->p;
        sline_67=info->sline;
        if(        parsecmp("void",info)        ) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41            ) {
                void_param_65=(_Bool)1;
            }
        }
        info->p=p_66;
        info->sline=sline_67;
    }
    if(    void_param_65    ) {
        if(        parsecmp("void",info)        ) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(        (_Bool)1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value55=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_68=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_69=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_70=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_70            ) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result_obj__50 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value57=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 146, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(_Bool)0))));
                come_call_finalizer(sType_finalize, param_type_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (param_name_69 = come_decrement_ref_count(param_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value57, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__50;
            }
            param_type2_71=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_68),(struct sType*)come_increment_ref_count(info->generics_type),info));
            list$1sType$ph_push_back(param_types_60,(struct sType*)come_increment_ref_count(sType_clone(param_type2_71)));
            list$1char$ph_push_back(param_names_61,(char*)come_increment_ref_count((char*)come_memdup(param_name_69, "05type.c", 152, "char*")));
            if(            *info->p==61&&*(info->p+1)!=62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_78=info->p;
                no_comma_79=info->no_comma;
                info->no_comma=(_Bool)1;
                node_80=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_79;
                p2_81=info->p;
                char buf_82[p2_81-p_78+1];
                memset(&buf_82, 0, sizeof(char)                *(p2_81-p_78+1)                );
                memcpy(buf_82,p_78,p2_81-p_78);
                buf_82[p2_81-p_78]=0;
                list$1char$ph_push_back(param_default_parametors_62,(char*)come_increment_ref_count(__builtin_string(buf_82)));
                ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                list$1char$ph_push_back(param_default_parametors_62,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                parsecmp("...",info)                ) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_63=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer(sType_finalize, param_type_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (param_name_69 = come_decrement_ref_count(param_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, param_type2_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, param_type_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (param_name_69 = come_decrement_ref_count(param_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
            }
            come_call_finalizer(sType_finalize, param_type_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (param_name_69 = come_decrement_ref_count(param_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, param_type2_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    __result_obj__53 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value70=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 204, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count(param_types_60),(struct list$1char$ph*)come_increment_ref_count(param_names_61),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_62),var_args_63))));
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value70, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct list$1sType$ph* __dec_obj26;
struct list$1char$ph* __dec_obj27;
struct list$1char$ph* __dec_obj28;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__49;
    __dec_obj26=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj27=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj28=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->v4=v4;
    __result_obj__49 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value59 = (void*)0;
struct list_item$1sType$ph* litem_72;
struct sType* __dec_obj29;
void* __right_value60 = (void*)0;
struct list_item$1sType$ph* litem_73;
struct sType* __dec_obj30;
void* __right_value61 = (void*)0;
struct list_item$1sType$ph* litem_74;
struct sType* __dec_obj31;
struct list$1sType$ph* __result_obj__51;
    if(    self->len==0    ) {
        litem_72=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value59=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1097, "struct list_item$1sType$ph*"))));
        litem_72->prev=((void*)0);
        litem_72->next=((void*)0);
        __dec_obj29=litem_72->item,
        litem_72->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_72;
        self->head=litem_72;
    }
    else if(    self->len==1    ) {
        litem_73=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value60=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1107, "struct list_item$1sType$ph*"))));
        litem_73->prev=self->head;
        litem_73->next=((void*)0);
        __dec_obj30=litem_73->item,
        litem_73->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_73;
        self->head->next=litem_73;
    }
    else {
        litem_74=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value61=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1117, "struct list_item$1sType$ph*"))));
        litem_74->prev=self->tail;
        litem_74->next=((void*)0);
        __dec_obj31=litem_74->item,
        litem_74->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_74;
        self->tail=litem_74;
    }
    self->len++;
    __result_obj__51 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__51;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_75;
char* __dec_obj32;
void* __right_value64 = (void*)0;
struct list_item$1char$ph* litem_76;
char* __dec_obj33;
void* __right_value65 = (void*)0;
struct list_item$1char$ph* litem_77;
char* __dec_obj34;
struct list$1char$ph* __result_obj__52;
    if(    self->len==0    ) {
        litem_75=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_75->prev=((void*)0);
        litem_75->next=((void*)0);
        __dec_obj32=litem_75->item,
        litem_75->item=(char*)come_increment_ref_count(item);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_75;
        self->head=litem_75;
    }
    else if(    self->len==1    ) {
        litem_76=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value64=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_76->prev=self->head;
        litem_76->next=((void*)0);
        __dec_obj33=litem_76->item,
        litem_76->item=(char*)come_increment_ref_count(item);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_76;
        self->head->next=litem_76;
    }
    else {
        litem_77=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value65=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_77->prev=self->tail;
        litem_77->next=((void*)0);
        __dec_obj34=litem_77->item,
        litem_77->item=(char*)come_increment_ref_count(item);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_77;
        self->tail=litem_77;
    }
    self->len++;
    __result_obj__52 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__52;
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value71 = (void*)0;
struct sType* left_type2_83;
void* __right_value72 = (void*)0;
struct sType* right_type2_84;
struct sType* left_no_solved_generics_type_85;
struct sType* right_no_solved_generics_type_86;
struct sClass* left_class_87;
struct sClass* right_class_88;
_Bool parent_class_89;
void* __right_value73 = (void*)0;
_Bool __result_obj__54;
_Bool __result_obj__55;
struct sClass* klass_90;
_Bool flag__91;
void* __right_value74 = (void*)0;
_Bool __result_obj__56;
_Bool __result_obj__57;
_Bool __result_obj__58;
void* __right_value75 = (void*)0;
char* left_type3_92;
void* __right_value76 = (void*)0;
char* __dec_obj35;
void* __right_value77 = (void*)0;
struct sType* __dec_obj36;
void* __right_value78 = (void*)0;
struct sType* __dec_obj37;
_Bool __result_obj__59;
void* __right_value79 = (void*)0;
char* left_type3_93;
void* __right_value80 = (void*)0;
char* __dec_obj38;
void* __right_value81 = (void*)0;
struct sType* __dec_obj39;
void* __right_value82 = (void*)0;
struct sType* __dec_obj40;
_Bool __result_obj__60;
_Bool __result_obj__61;
_Bool __result_obj__62;
int i_94;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
_Bool __result_obj__67;
_Bool __result_obj__68;
void* __right_value85 = (void*)0;
char* left_type3_101;
void* __right_value86 = (void*)0;
char* __dec_obj41;
void* __right_value87 = (void*)0;
struct sType* __dec_obj42;
void* __right_value88 = (void*)0;
struct sType* __dec_obj43;
_Bool __result_obj__69;
void* __right_value89 = (void*)0;
char* left_type3_102;
void* __right_value90 = (void*)0;
char* __dec_obj44;
void* __right_value91 = (void*)0;
struct sType* __dec_obj45;
void* __right_value92 = (void*)0;
struct sType* __dec_obj46;
_Bool __result_obj__70;
void* __right_value93 = (void*)0;
char* __dec_obj47;
void* __right_value94 = (void*)0;
struct sType* __dec_obj48;
void* __right_value95 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__71;
void* __right_value96 = (void*)0;
char* left_type3_103;
void* __right_value97 = (void*)0;
char* __dec_obj50;
void* __right_value98 = (void*)0;
struct sType* __dec_obj51;
void* __right_value99 = (void*)0;
struct sType* __dec_obj52;
_Bool __result_obj__72;
void* __right_value100 = (void*)0;
char* left_type3_104;
void* __right_value101 = (void*)0;
char* __dec_obj53;
void* __right_value102 = (void*)0;
struct sType* __dec_obj54;
void* __right_value103 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__73;
_Bool __result_obj__74;
_Bool __result_obj__75;
_Bool __result_obj__76;
_Bool __result_obj__77;
_Bool __result_obj__78;
_Bool __result_obj__79;
_Bool __result_obj__80;
_Bool __result_obj__81;
_Bool __result_obj__82;
_Bool __result_obj__83;
_Bool __result_obj__84;
_Bool __result_obj__85;
_Bool __result_obj__86;
_Bool __result_obj__87;
_Bool __result_obj__88;
_Bool __result_obj__89;
_Bool __result_obj__90;
void* __right_value104 = (void*)0;
char* tmp_105;
void* __right_value105 = (void*)0;
char* __dec_obj56;
void* __right_value106 = (void*)0;
struct sType* __dec_obj57;
void* __right_value107 = (void*)0;
struct sType* __dec_obj58;
_Bool __result_obj__91;
_Bool __result_obj__92;
_Bool __result_obj__93;
_Bool __result_obj__94;
void* __right_value108 = (void*)0;
char* tmp_106;
void* __right_value109 = (void*)0;
char* __dec_obj59;
void* __right_value110 = (void*)0;
struct sType* __dec_obj60;
_Bool __result_obj__95;
_Bool __result_obj__96;
int i_107;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
_Bool __result_obj__97;
    left_type2_83=(struct sType*)come_increment_ref_count(sType_clone(left_type));
    right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type_85=((void*)0);
    if(    left_type2_83->mNoSolvedGenericsType    ) {
        left_no_solved_generics_type_85=left_type2_83->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_86=((void*)0);
    if(    right_type2_84->mNoSolvedGenericsType    ) {
        right_no_solved_generics_type_86=right_type2_84->mNoSolvedGenericsType;
    }
    left_class_87=left_type2_83->mClass;
    right_class_88=right_type2_84->mClass;
    parent_class_89=(_Bool)0;
    if(    string_operator_not_equals(left_class_87->mName,right_class_88->mName)    ) {
        while(        left_class_87&&right_class_88        ) {
            if(            string_operator_equals(left_class_87->mName,right_class_88->mName)            ) {
                parent_class_89=(_Bool)1;
            }
            if(            right_class_88->mParentClassName            ) {
                right_class_88=((struct sClass*)(__right_value73=map$2char$phsClass$ph_operator_load_element(info->classes,right_class_88->mParentClassName)));
                come_call_finalizer(sClass_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                right_class_88=((void*)0);
            }
        }
    }
    if(    pointer_massive    ) {
        if(        left_type2_83->mPointerNum>0&&right_type->mPointerNum==0        ) {
            if(            string_operator_equals(left_type2_83->mClass->mName,"lambda")            ) {
            }
            else if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__54 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__54;
            }
        }
        else if(        left_type2_83->mPointerNum==0&&right_type->mPointerNum>0        ) {
            if(            list$1sNode$ph_length(left_type2_83->mArrayNum)>0            ) {
            }
            else if(            string_operator_equals(left_type2_83->mClass->mName,"lambda")||string_operator_equals(right_type->mClass->mName,"void")            ) {
            }
            else if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__55 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__55;
            }
        }
        else if(        left_type2_83->mPointerNum>0&&right_type->mPointerNum>0        ) {
            klass_90=right_type->mClass;
            flag__91=(_Bool)0;
            while(            klass_90            ) {
                if(                string_operator_equals(klass_90->mName,left_type2_83->mClass->mName)                ) {
                    flag__91=(_Bool)1;
                }
                if(                klass_90->mParentClassName                ) {
                    klass_90=((struct sClass*)(__right_value74=map$2char$phsClass$ph_operator_load_element(info->classes,klass_90->mParentClassName)));
                    come_call_finalizer(sClass_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    klass_90=((void*)0);
                }
            }
            if(            string_operator_equals(left_type2_83->mClass->mName,"void")            ) {
            }
            else if(            string_operator_equals(left_type2_83->mClass->mName,"lambda")            ) {
            }
            else if(            left_type2_83->mException            ) {
            }
            else if(            left_no_solved_generics_type_85&&right_no_solved_generics_type_86&&(list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes)>0||list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes)>0)            ) {
            }
            else if(            strlen(left_type2_83->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_83->mClass->mName,"tuple",strlen("tuple"))==0&&(strlen(right_type->mClass->mName)>=strlen("tuple"))            ) {
            }
            else if(            string_operator_equals(right_type->mClass->mName,"void")            ) {
            }
            else if(            string_operator_not_equals(left_type2_83->mClass->mName,right_type->mClass->mName)&&!flag__91            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                    info->err_num++;
                    __result_obj__56 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__56;
                }
            }
        }
    }
    if(    left_no_solved_generics_type_85&&right_no_solved_generics_type_86    ) {
        if(        strlen(left_type2_83->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_83->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result_obj__57 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__57;
            }
        }
        else if(        right_type->mPointerNum==0&&left_type2_83->mPointerNum>0        ) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mNumber&&left_type2_83->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
                    info->err_num++;
                    __result_obj__58 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__58;
                }
            }
            else {
                left_type3_92=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj35=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_92,come_value->c_value));
                __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj36=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj37=right_type2_84,
                right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (left_type3_92 = come_decrement_ref_count(left_type3_92, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mFloat&&left_type2_83->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
                    info->err_num++;
                    __result_obj__59 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__59;
                }
            }
            else {
                left_type3_93=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj38=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_93,come_value->c_value));
                __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj39=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj40=right_type2_84,
                right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (left_type3_93 = come_decrement_ref_count(left_type3_93, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)&&left_type2_83->mPointerNum==right_type2_84->mPointerNum        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"void")&&left_type2_83->mPointerNum>0&&string_operator_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)&&(left_type2_83->mPointerNum!=right_type2_84->mPointerNum||left_type2_83->mHeap!=right_type2_84->mHeap)        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)&&(left_type2_83->mPointerNum!=right_type2_84->mPointerNum||left_type2_83->mHeap!=right_type2_84->mHeap)        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2_83->mClass->mName);
            printf("right type class_name %s\n",right_type2_84->mClass->mName);
            printf("left type pointernum %d\n",left_type2_83->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2_83->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
            info->err_num++;
            __result_obj__60 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__60;
        }
        else if(        list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes)>0        ) {
            if(            (string_operator_equals(left_no_solved_generics_type_85->mClass->mName,"void")&&left_no_solved_generics_type_85->mPointerNum>0&&right_no_solved_generics_type_86->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_86->mClass->mName,"void")&&right_no_solved_generics_type_86->mPointerNum>0&&left_no_solved_generics_type_85->mPointerNum>0)            ) {
            }
            else {
                if(                list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes)!=list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes)                ) {
                    if(                    print_err_msg                    ) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
                        info->err_num++;
                        __result_obj__61 = (_Bool)0;
                        come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__61;
                    }
                    __result_obj__62 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__62;
                }
                for(                i_94=0                ;                i_94<list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes)                ;                i_94++                ){
                    check_assign_type(msg,((struct sType*)(__right_value83=list$1sType$ph_operator_load_element(left_no_solved_generics_type_85->mGenericsTypes,i_94))),((struct sType*)(__right_value84=list$1sType$ph_operator_load_element(right_no_solved_generics_type_86->mGenericsTypes,i_94))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    come_call_finalizer(sType_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value84, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type_85,right_no_solved_generics_type_86,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
            }
        }
    }
    else if(    strlen(left_type2_83->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_83->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)    ) {
        if(        print_err_msg        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result_obj__67 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__67;
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mNumber&&left_type2_83->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
                info->err_num++;
                __result_obj__68 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__68;
            }
        }
        else {
            left_type3_101=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj41=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_101,come_value->c_value));
            __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj42=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj43=right_type2_84,
            right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (left_type3_101 = come_decrement_ref_count(left_type3_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mFloat&&left_type2_83->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_85->mGenericsTypes),left_no_solved_generics_type_85->mClass->mName,left_type2_83->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_86->mGenericsTypes),right_no_solved_generics_type_86->mClass->mName,right_type2_84->mClass->mName);
                info->err_num++;
                __result_obj__69 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__69;
            }
        }
        else {
            left_type3_102=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj44=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_102,come_value->c_value));
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj45=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj46=right_type2_84,
            right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (left_type3_102 = come_decrement_ref_count(left_type3_102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else if(    left_type2_83->mHeap&&!right_type2_84->mHeap&&left_type2_83->mPointerNum>0&&right_type2_84->mPointerNum>0&&string_operator_not_equals(right_type2_84->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2_83->mMultipleTypes&&!right_type->mMultipleTypes    ) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum,left_type2_83->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum,right_type2_84->mHeap);
        info->err_num++;
        __result_obj__70 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__70;
    }
    else if(    parent_class_89&&left_type2_83->mPointerNum==1&&right_type->mPointerNum==1    ) {
        __dec_obj47=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2_83->mClass->mName,come_value->c_value));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj48=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value->var=((void*)0);
        __dec_obj49=right_type2_84,
        right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mNumber&&left_type2_83->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__71 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__71;
            }
        }
        else {
            left_type3_103=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj50=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_103,come_value->c_value));
            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj51=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj52=right_type2_84,
            right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (left_type3_103 = come_decrement_ref_count(left_type3_103, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_83->mClass->mFloat&&left_type2_83->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__72 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__72;
            }
        }
        else {
            left_type3_104=(char*)come_increment_ref_count(make_type_name_string(left_type2_83,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj53=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_104,come_value->c_value));
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj54=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj55=right_type2_84,
            right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (left_type3_104 = come_decrement_ref_count(left_type3_104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else if(    string_operator_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)&&left_type2_83->mPointerNum>0&&right_type2_84->mPointerNum>0&&!right_type2_84->mAllocaValue    ) {
        if(        left_type2_83->mHeap&&!right_type2_84->mHeap        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is %s pointer num %d heap %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum,left_type2_83->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum,right_type2_84->mHeap);
            info->err_num++;
            __result_obj__73 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__73;
        }
    }
    else if(    check_no_pointer    ) {
        if(        left_type2_83->mPointerNum>0        ) {
            if(            right_type2_84->mPointerNum>0            ) {
                if(                string_operator_equals(left_type2_83->mClass->mName,"void")||string_operator_equals(right_type2_84->mClass->mName,"void")                ) {
                }
                else if(                string_operator_equals(left_type2_83->mClass->mName,"va_list")||string_operator_equals(right_type2_84->mClass->mName,"va_list")                ) {
                }
                else if(                string_operator_not_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)                ) {
                    if(                    print_err_msg                    ) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                        info->err_num++;
                        __result_obj__74 = (_Bool)0;
                        come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__74;
                    }
                    __result_obj__75 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__75;
                }
            }
            else if(            right_type->mPointerNum==0            ) {
            }
            else {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                    info->err_num++;
                    __result_obj__76 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__76;
                }
                __result_obj__77 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__77;
            }
        }
        else if(        left_type2_83->mPointerNum==0&&right_type2_84->mPointerNum>0        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__78 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__78;
            }
            __result_obj__79 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__79;
        }
        else if(        left_type2_83->mPointerNum>0&&right_type2_84->mPointerNum==0&&string_operator_equals(right_type2_84->mClass->mName,"lambda")&&string_operator_equals(left_type2_83->mClass->mName,"lambda")        ) {
        }
        else if(        string_operator_not_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__80 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__80;
            }
            __result_obj__81 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__81;
        }
    }
    else if(    string_operator_equals(left_type2_83->mClass->mName,"char")&&left_type2_83->mPointerNum==1    ) {
        if(        string_operator_equals(right_type2_84->mClass->mName,"char")&&right_type2_84->mPointerNum==1        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_84->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"va_list")||string_operator_equals(right_type2_84->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"lambda")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__82 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__82;
            }
            __result_obj__83 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__83;
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"void")&&right_type2_84->mPointerNum>0        ) {
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"void")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__84 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__84;
            }
            __result_obj__85 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__85;
        }
        else if(        string_operator_not_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)&&!(left_type2_83->mPointerNum>0&&right_type2_84->mPointerNum==0)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__86 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__86;
            }
            __result_obj__87 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__87;
        }
    }
    else if(    string_operator_equals(left_type2_83->mClass->mName,"void")&&left_type2_83->mPointerNum==1    ) {
        if(        string_operator_equals(right_type2_84->mClass->mName,"void")&&right_type2_84->mPointerNum==1        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_84->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"va_list")||string_operator_equals(right_type2_84->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"lambda")        ) {
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"void")&&right_type2_84->mPointerNum>0        ) {
        }
        else if(        string_operator_equals(right_type2_84->mClass->mName,"void")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__88 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__88;
            }
            __result_obj__89 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__89;
        }
        else if(        right_type2_84->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                    info->err_num++;
                    __result_obj__90 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__90;
                }
            }
            else {
                tmp_105=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj56=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_105, "05type.c", 686, "char*"));
                __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj57=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj58=right_type2_84,
                right_type2_84=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
                come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (tmp_105 = come_decrement_ref_count(tmp_105, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    else if(    left_type2_83->mPointerNum>0||(left_type2_83->mPointerNum==0&&left_type2_83->mClass->mStruct)    ) {
        if(        right_type2_84->mPointerNum>0||(right_type2_84->mPointerNum==0&&right_type2_84->mClass->mStruct)        ) {
            if(            string_operator_equals(left_type2_83->mClass->mName,"void")||string_operator_equals(right_type2_84->mClass->mName,"void")            ) {
            }
            else if(            string_operator_equals(left_type2_83->mClass->mName,"va_list")||string_operator_equals(right_type2_84->mClass->mName,"va_list")            ) {
            }
            else if(            string_operator_not_equals(left_type2_83->mClass->mName,right_type2_84->mClass->mName)            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                    info->err_num++;
                    __result_obj__91 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__91;
                }
                __result_obj__92 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__92;
            }
            else if(            int_operator_not_equals(left_type2_83->mPointerNum,right_type2_84->mPointerNum)            ) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
            }
            else if(            list$1sNode$ph_length(right_type2_84->mArrayNum)>0            ) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum,list$1sNode$ph_length(left_type2_83->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum,list$1sNode$ph_length(right_type2_84->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"void")||string_operator_equals(right_type2_84->mClass->mName,"void")        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"va_list")||string_operator_equals(right_type2_84->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_84->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_83->mClass->mName,"lambda")&&string_operator_equals(right_type2_84->mClass->mName,"lambda")        ) {
        }
        else if(        left_type2_83->mPointerNum>0&&right_type2_84->mPointerNum==0&&string_operator_equals(right_type2_84->mClass->mName,"lambda")&&string_operator_equals(left_type2_83->mClass->mName,"lambda")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__93 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__93;
            }
            __result_obj__94 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__94;
        }
        else if(        left_type2_83->mPointerNum>0&&!(string_operator_equals(right_type2_84->mClass->mName,"lambda")&&string_operator_equals(left_type2_83->mClass->mName,"lambda"))&&right_type2_84->mPointerNum==0        ) {
            tmp_106=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj59=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_106, "05type.c", 742, "char*"));
            __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj60=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_83));
            come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __result_obj__95 = (_Bool)1;
            (tmp_106 = come_decrement_ref_count(tmp_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__95;
            (tmp_106 = come_decrement_ref_count(tmp_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        list$1sType$ph_length(left_type2_83->mGenericsTypes)>0        ) {
            if(            list$1sType$ph_length(left_type2_83->mGenericsTypes)!=list$1sType$ph_length(right_type2_84->mGenericsTypes)            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_83->mClass->mName,left_type2_83->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_84->mClass->mName,right_type2_84->mPointerNum);
                info->err_num++;
                __result_obj__96 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__96;
            }
            for(            i_107=0            ;            i_107<list$1sType$ph_length(left_type2_83->mGenericsTypes)            ;            i_107++            ){
                check_assign_type(msg,((struct sType*)(__right_value111=list$1sType$ph_operator_load_element(left_type2_83->mGenericsTypes,i_107))),((struct sType*)(__right_value112=list$1sType$ph_operator_load_element(right_type2_84->mGenericsTypes,i_107))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                come_call_finalizer(sType_finalize, __right_value111, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __right_value112, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    __result_obj__97 = (_Bool)1;
    come_call_finalizer(sType_finalize, left_type2_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, right_type2_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__97;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_95;
int i_96;
struct sType* __result_obj__63;
struct sType* default_value_97;
struct sType* __result_obj__64;
default_value_97 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_95=self->head;
    i_96=0;
    while(    it_95!=((void*)0)    ) {
        if(        position==i_96        ) {
            __result_obj__63 = (struct sType*)come_increment_ref_count(it_95->item);
            come_call_finalizer(sType_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__63;
        }
        it_95=it_95->next;
        i_96++;
    }
    memset(&default_value_97,0,sizeof(struct sType*));
    __result_obj__64 = (struct sType*)come_increment_ref_count(default_value_97);
    come_call_finalizer(sType_finalize, default_value_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_98;
int i_99;
struct sType* __result_obj__65;
struct sType* default_value_100;
struct sType* __result_obj__66;
default_value_100 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_98=self->head;
    i_99=0;
    while(    it_98!=((void*)0)    ) {
        if(        position==i_99        ) {
            __result_obj__65 = (struct sType*)come_increment_ref_count(it_98->item);
            come_call_finalizer(sType_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__65;
        }
        it_98=it_98->next;
        i_99++;
    }
    memset(&default_value_100,0,sizeof(struct sType*));
    __result_obj__66 = (struct sType*)come_increment_ref_count(default_value_100);
    come_call_finalizer(sType_finalize, default_value_100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __right_value113 = (void*)0;
struct sType* result_type_108;
char* var_name_109;
char* p_110;
int sline_111;
void* __right_value114 = (void*)0;
char* word_112;
_Bool between_brace_113;
char* p_114;
int sline_115;
void* __right_value115 = (void*)0;
char* word_116;
void* __right_value116 = (void*)0;
char* __dec_obj61;
void* __right_value117 = (void*)0;
char* __dec_obj62;
_Bool no_comma_118;
void* __right_value118 = (void*)0;
struct sNode* node_119;
struct sNode* __dec_obj63;
char* p_120;
int sline_121;
void* __right_value119 = (void*)0;
char* word_122;
void* __right_value120 = (void*)0;
struct sNode* node_123;
void* __right_value124 = (void*)0;
char* attribute_127;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
char* __dec_obj67;
char* __dec_obj68;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__100;
    result_type_108=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(    !first    ) {
        result_type_108->mPointerNum=result_type_108->mTypedefOriginalPointerNum;
    }
    var_name_109=((void*)0);
    {
        p_110=info->p;
        sline_111=info->sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            word_112=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_112,"const")||string_operator_equals(word_112,"__restrict")||string_operator_equals(word_112,"restrict")||string_operator_equals(word_112,"__user")||string_operator_equals(word_112,"volatile")||string_operator_equals(word_112,"_Nonnull")||string_operator_equals(word_112,"_Nullable")||string_operator_equals(word_112,"_Null_unspecified")||string_operator_equals(word_112,"__user")||string_operator_equals(word_112,"_Addr")            ) {
            }
            else {
                info->p=p_110;
                info->sline=sline_111;
            }
            (word_112 = come_decrement_ref_count(word_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            info->p=p_110;
            info->sline=sline_111;
        }
    }
    between_brace_113=(_Bool)0;
    {
        p_114=info->p;
        sline_115=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_116=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_116,info)                ) {
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40                    ) {
                        between_brace_113=(_Bool)1;
                    }
                }
                (word_116 = come_decrement_ref_count(word_116, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=p_114;
        info->sline=sline_115;
    }
    parse_sharp_v5(info);
    while(    *info->p==42    ) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_108->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_113&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95    ) {
        __dec_obj61=var_name_109,
        var_name_109=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        static int num_anonymous_var_name_117=0;
        num_anonymous_var_name_117++;
        __dec_obj62=var_name_109,
        var_name_109=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_117));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    between_brace_113&&*info->p==41    ) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58    ) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_118=info->no_comma;
        info->no_comma=(_Bool)1;
        node_119=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_118;
        __dec_obj63=result_type_108->mSizeNum,
        result_type_108->mSizeNum=(struct sNode*)come_increment_ref_count(node_119);
        (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        ((node_119) ? node_119 = come_decrement_ref_count(node_119, ((struct sNode*)node_119)->finalize, ((struct sNode*)node_119)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    while(    *info->p==91    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_120=info->p;
            sline_121=info->sline;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_122=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_122,"const")||string_operator_equals(word_122,"__restrict")||string_operator_equals(word_122,"restrict")||string_operator_equals(word_122,"__user")||string_operator_equals(word_122,"volatile")||string_operator_equals(word_122,"_Nonnull")||string_operator_equals(word_122,"_Nullable")||string_operator_equals(word_122,"_Null_unspecified")||string_operator_equals(word_122,"__user")||string_operator_equals(word_122,"_Addr")                ) {
                }
                else {
                    info->p=p_120;
                    info->sline=sline_121;
                }
                (word_122 = come_decrement_ref_count(word_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                info->p=p_120;
                info->sline=sline_121;
            }
        }
        if(        *info->p==93        ) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_108->mArrayPointerType=(_Bool)1;
            result_type_108->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_123=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(result_type_108->mArrayNum,(struct sNode*)come_increment_ref_count(node_123));
        parse_sharp_v5(info);
        result_type_108->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        ((node_123) ? node_123 = come_decrement_ref_count(node_123, ((struct sNode*)node_123)->finalize, ((struct sNode*)node_123)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    attribute_127=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_127,"")    ) {
        if(        result_type_108->mAttribute        ) {
            __dec_obj67=result_type_108->mAttribute,
            result_type_108->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value126=string_operator_add(result_type_108->mAttribute," "))),attribute_127));
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            __dec_obj68=result_type_108->mAttribute,
            result_type_108->mAttribute=(char*)come_increment_ref_count(attribute_127);
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    ((struct tuple2$2char$phchar$ph*)(__right_value128=parse_attribute(info,(_Bool)0)));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__100 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value130=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "05type.c", 924, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type_108),(char*)come_increment_ref_count(var_name_109)))));
    come_call_finalizer(sType_finalize, base_type_name, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_109 = come_decrement_ref_count(var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (attribute_127 = come_decrement_ref_count(attribute_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value130, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value121 = (void*)0;
struct list_item$1sNode$ph* litem_124;
struct sNode* __dec_obj64;
void* __right_value122 = (void*)0;
struct list_item$1sNode$ph* litem_125;
struct sNode* __dec_obj65;
void* __right_value123 = (void*)0;
struct list_item$1sNode$ph* litem_126;
struct sNode* __dec_obj66;
struct list$1sNode$ph* __result_obj__98;
    if(    self->len==0    ) {
        litem_124=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value121=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1097, "struct list_item$1sNode$ph*"))));
        litem_124->prev=((void*)0);
        litem_124->next=((void*)0);
        __dec_obj64=litem_124->item,
        litem_124->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_124;
        self->head=litem_124;
    }
    else if(    self->len==1    ) {
        litem_125=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value122=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1107, "struct list_item$1sNode$ph*"))));
        litem_125->prev=self->head;
        litem_125->next=((void*)0);
        __dec_obj65=litem_125->item,
        litem_125->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_125;
        self->head->next=litem_125;
    }
    else {
        litem_126=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value123=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1117, "struct list_item$1sNode$ph*"))));
        litem_126->prev=self->tail;
        litem_126->next=((void*)0);
        __dec_obj66=litem_126->item,
        litem_126->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_126;
        self->tail=litem_126;
    }
    self->len++;
    __result_obj__98 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__98;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj69;
char* __dec_obj70;
struct tuple2$2sType$phchar$ph* __result_obj__99;
    __dec_obj69=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj70=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__99 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_128;
int sline_129;
void* __right_value131 = (void*)0;
char* word_130;
int nest_131;
    p_128=info->p;
    sline_129=info->sline;
    if(    xisalpha(*info->p)||*info->p==95    ) {
        word_130=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_130,"__attribute")||string_operator_equals(word_130,"__attribute__"))&&*info->p==40        ) {
            nest_131=0;
            while(            1            ) {
                if(                *info->p==40                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_131++;
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_131--;
                    if(                    nest_131==0                    ) {
                        break;
                    }
                }
                else if(                *info->p==0                ) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_130,"const")||string_operator_equals(word_130,"__restrict")||string_operator_equals(word_130,"restrict")||string_operator_equals(word_130,"__user")||string_operator_equals(word_130,"volatile")||string_operator_equals(word_130,"_Nonnull")||string_operator_equals(word_130,"_Nullable")||string_operator_equals(word_130,"__nonnull")||string_operator_equals(word_130,"_Null_unspecified")||string_operator_equals(word_130,"__user")||string_operator_equals(word_130,"_Addr")||string_operator_equals(word_130,"__noreturn")||string_operator_equals(word_130,"_noreturn")||string_operator_equals(word_130,"_Noreturn")        ) {
        }
        else {
            info->p=p_128;
            info->sline=sline_129;
        }
        (word_130 = come_decrement_ref_count(word_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        info->p=p_128;
        info->sline=sline_129;
    }
}

struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
_Bool no_output_err_132;
void* __right_value132 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* type_133=0;
char* name_134=0;
_Bool err_135=0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__102;
    no_output_err_132=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value132=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_133=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_134=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_135=multiple_assign_var2->v3;
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value132, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_132;
    __result_obj__102 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value134=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 981, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_133),(char*)come_increment_ref_count(name_134),err_135))));
    come_call_finalizer(sType_finalize, type_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_134 = come_decrement_ref_count(name_134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value134, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3){
struct sType* __dec_obj71;
char* __dec_obj72;
struct tuple3$3sType$phchar$phbool$* __result_obj__101;
    __dec_obj71=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj72=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v3=v3;
    __result_obj__101 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
char* head_136;
int head_sline_137;
void* __right_value135 = (void*)0;
char* type_name_138;
_Bool record__139;
_Bool exception__140;
_Bool constant_141;
_Bool static__142;
_Bool volatile__143;
_Bool register__144;
_Bool unsigned__145;
_Bool long__146;
_Bool long_long_147;
_Bool short__148;
_Bool restrict__149;
_Bool struct__150;
_Bool union__151;
_Bool enum__152;
_Bool no_heap_153;
_Bool extern__154;
_Bool inline__155;
_Bool uniq__156;
_Bool tuple__157;
_Bool immutable__158;
_Bool task__159;
struct sNode* alignas__160;
_Bool anonymous_type_161;
_Bool anonymous_name_162;
_Bool atomic__163;
_Bool object_interface_164;
void* __right_value136 = (void*)0;
char* __dec_obj73;
void* __right_value137 = (void*)0;
char* __dec_obj74;
void* __right_value138 = (void*)0;
char* __dec_obj75;
int brace_num_165;
void* __right_value139 = (void*)0;
char* __dec_obj76;
int brace_num_166;
void* __right_value140 = (void*)0;
char* __dec_obj77;
void* __right_value141 = (void*)0;
char* __dec_obj78;
void* __right_value142 = (void*)0;
char* __dec_obj79;
void* __right_value143 = (void*)0;
char* __dec_obj80;
void* __right_value144 = (void*)0;
char* __dec_obj81;
void* __right_value145 = (void*)0;
struct sNode* exp_167;
struct sNode* __dec_obj82;
void* __right_value146 = (void*)0;
char* __dec_obj83;
void* __right_value147 = (void*)0;
char* __dec_obj84;
void* __right_value148 = (void*)0;
char* __dec_obj85;
void* __right_value149 = (void*)0;
char* __dec_obj86;
void* __right_value150 = (void*)0;
char* __dec_obj87;
void* __right_value151 = (void*)0;
char* __dec_obj88;
void* __right_value152 = (void*)0;
char* __dec_obj89;
void* __right_value153 = (void*)0;
char* __dec_obj90;
void* __right_value154 = (void*)0;
char* __dec_obj91;
void* __right_value155 = (void*)0;
char* __dec_obj92;
void* __right_value156 = (void*)0;
char* __dec_obj93;
char* p_168;
int sline_169;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
char* __dec_obj94;
void* __right_value159 = (void*)0;
char* __dec_obj95;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
char* __dec_obj96;
char* p_170;
int sline_171;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__103;
char* p_172;
int sline_173;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__104;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct sNode* node_174;
_Bool Value_175;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__105;
char* p_176;
int sline_177;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
char* __dec_obj97;
void* __right_value176 = (void*)0;
char* __dec_obj98;
void* __right_value177 = (void*)0;
char* __dec_obj99;
char* p_178;
int sline_179;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__106;
void* __right_value181 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* type_180=0;
char* name_181=0;
_Bool err_182=0;
char* p_183;
int sline_184;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__107;
void* __right_value186 = (void*)0;
char* __dec_obj100;
void* __right_value187 = (void*)0;
char* __dec_obj101;
void* __right_value188 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type_185=0;
char* name_186=0;
_Bool err_187=0;
char* p_188;
int sline_189;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__108;
char* p_190;
int sline_191;
void* __right_value192 = (void*)0;
char* __dec_obj102;
void* __right_value193 = (void*)0;
char* __dec_obj103;
void* __right_value194 = (void*)0;
char* __dec_obj104;
void* __right_value195 = (void*)0;
char* __dec_obj105;
void* __right_value196 = (void*)0;
char* __dec_obj106;
void* __right_value197 = (void*)0;
char* __dec_obj107;
void* __right_value198 = (void*)0;
char* __dec_obj108;
char* p_192;
int sline_193;
void* __right_value199 = (void*)0;
char* __dec_obj109;
char* p_194;
int sline_195;
void* __right_value200 = (void*)0;
char* __dec_obj110;
void* __right_value201 = (void*)0;
char* __dec_obj111;
void* __right_value202 = (void*)0;
char* __dec_obj112;
char* p_196;
int sline_197;
void* __right_value203 = (void*)0;
char* __dec_obj113;
void* __right_value204 = (void*)0;
char* __dec_obj114;
void* __right_value205 = (void*)0;
char* __dec_obj115;
void* __right_value206 = (void*)0;
char* __dec_obj116;
void* __right_value207 = (void*)0;
char* __dec_obj117;
void* __right_value208 = (void*)0;
char* __dec_obj118;
void* __right_value209 = (void*)0;
char* __dec_obj119;
void* __right_value210 = (void*)0;
char* __dec_obj120;
void* __right_value211 = (void*)0;
char* __dec_obj121;
void* __right_value212 = (void*)0;
char* __dec_obj122;
void* __right_value213 = (void*)0;
char* __dec_obj123;
char* p_198;
int sline_199;
void* __right_value214 = (void*)0;
char* __dec_obj124;
void* __right_value215 = (void*)0;
char* __dec_obj125;
void* __right_value216 = (void*)0;
char* attribute_200;
int pointer_num_201;
_Bool heap_202;
_Bool refference_203;
_Bool no_refference_204;
_Bool channel_205;
_Bool any_class_206;
_Bool vtable_207;
_Bool deffer__208;
char* tuple_name_209;
void* __right_value217 = (void*)0;
char* __dec_obj126;
_Bool lambda_flag_210;
char* pX_211;
int slineX_212;
void* __right_value218 = (void*)0;
struct sType* type_213;
char* var_name_214;
_Bool function_pointer_flag_215;
char* p_216;
int sline_217;
void* __right_value219 = (void*)0;
char* word_218;
_Bool var_name_between_brace_219;
char* p_220;
int sline_221;
void* __right_value220 = (void*)0;
char* word_222;
void* __right_value221 = (void*)0;
char* __dec_obj127;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct sNode* node_224;
_Bool Value_225;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__109;
int pointer_num_226;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct sType* __dec_obj128;
void* __right_value230 = (void*)0;
char* __dec_obj129;
void* __right_value231 = (void*)0;
struct sNode* node_227;
_Bool Value_228;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__110;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sType* __dec_obj130;
void* __right_value237 = (void*)0;
char* __dec_obj131;
void* __right_value238 = (void*)0;
struct sNode* node_229;
_Bool Value_230;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__111;
int pointer_num_231;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sType* __dec_obj132;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__112;
void* __right_value247 = (void*)0;
char* attribute_232;
char* __dec_obj133;
void* __right_value248 = (void*)0;
char* __dec_obj134;
void* __right_value249 = (void*)0;
char* __dec_obj135;
void* __right_value250 = (void*)0;
char* __dec_obj136;
void* __right_value251 = (void*)0;
char* __dec_obj137;
_Bool no_comma_235;
void* __right_value252 = (void*)0;
struct sNode* node_236;
struct sNode* __dec_obj138;
void* __right_value253 = (void*)0;
char* attribute2_237;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
char* __dec_obj139;
char* __dec_obj140;
struct sType* result_type_238;
void* __right_value257 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sType* __dec_obj141;
void* __right_value260 = (void*)0;
int i_239;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sType* __dec_obj142;
int i_246;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sType* __dec_obj143;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sType* __dec_obj144;
struct sNode* __dec_obj145;
void* __right_value274 = (void*)0;
char* __dec_obj146;
void* __right_value275 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var5 = (void*)0;
struct list$1sType$ph* param_types_247=0;
struct list$1char$ph* param_names_248=0;
struct list$1char$ph* param_default_parametors_249=0;
_Bool var_args_250=0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sType* __dec_obj147;
struct sType* __dec_obj148;
struct list$1sType$ph* __dec_obj149;
struct list$1char$ph* __dec_obj150;
int function_pointer_num_251;
struct sType* result_type_252;
void* __right_value279 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct sType* __dec_obj151;
void* __right_value282 = (void*)0;
int i_253;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sType* __dec_obj152;
int i_254;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* __dec_obj153;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* __dec_obj154;
struct sNode* __dec_obj155;
void* __right_value296 = (void*)0;
char* __dec_obj156;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__117;
void* __right_value299 = (void*)0;
char* __dec_obj157;
_Bool function_pointer_array_256;
int function_pointer_array_num_257;
int n_258;
void* __right_value300 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var6 = (void*)0;
struct list$1sType$ph* param_types_259=0;
struct list$1char$ph* param_names_260=0;
struct list$1char$ph* param_default_parametors_261=0;
_Bool var_args_262=0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sType* __dec_obj158;
void* __right_value304 = (void*)0;
struct sType* __dec_obj159;
struct list$1sType$ph* __dec_obj160;
struct list$1char$ph* __dec_obj161;
void* __right_value305 = (void*)0;
struct sNode* exp_263;
_Bool Value_264;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__118;
void* __right_value309 = (void*)0;
struct CVALUE* come_value_265;
void* __right_value310 = (void*)0;
struct sType* __dec_obj162;
void* __right_value311 = (void*)0;
char* attribute_266;
char* __dec_obj163;
void* __right_value312 = (void*)0;
char* __dec_obj164;
void* __right_value313 = (void*)0;
char* __dec_obj165;
void* __right_value314 = (void*)0;
char* __dec_obj166;
void* __right_value315 = (void*)0;
char* __dec_obj167;
_Bool no_comma_269;
void* __right_value316 = (void*)0;
struct sNode* node_270;
struct sNode* __dec_obj168;
void* __right_value317 = (void*)0;
char* attribute2_271;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
char* __dec_obj169;
char* __dec_obj170;
void* __right_value321 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sType* __dec_obj171;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __dec_obj172;
struct sNode* __dec_obj173;
char* __dec_obj174;
int i_272;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
_Bool _condtional_value_X8;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* __dec_obj175;
struct sNode* __dec_obj176;
char* __dec_obj177;
int i_273;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
_Bool _condtional_value_X9;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sType* __dec_obj178;
struct sNode* __dec_obj179;
char* __dec_obj180;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__119;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* __dec_obj181;
void* __right_value344 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* generics_type_274=0;
char* var_name_275=0;
_Bool err_276=0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__120;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__121;
void* __right_value350 = (void*)0;
struct sType* __dec_obj182;
void* __right_value351 = (void*)0;
char* new_name_277;
struct sNode* __dec_obj183;
char* __dec_obj184;
char* __dec_obj185;
void* __right_value352 = (void*)0;
struct sClass* klass_278;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sClass* klass_316;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sType* __dec_obj186;
struct sNode* __dec_obj187;
char* __dec_obj188;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1sType$ph* types_317;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type2_318=0;
char* name_319=0;
_Bool err_320=0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__137;
void* __right_value376 = (void*)0;
int num_tuples_321;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* __dec_obj189;
struct list$1sType$ph* o2_saved_322;
struct sType* it_323;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sType* __dec_obj190;
void* __right_value382 = (void*)0;
char* new_name_324;
char* __dec_obj191;
void* __right_value383 = (void*)0;
char* attribute_325;
char* __dec_obj192;
void* __right_value384 = (void*)0;
char* __dec_obj193;
void* __right_value385 = (void*)0;
char* __dec_obj194;
void* __right_value386 = (void*)0;
char* __dec_obj195;
void* __right_value387 = (void*)0;
char* __dec_obj196;
_Bool no_comma_328;
void* __right_value388 = (void*)0;
struct sNode* node_329;
struct sNode* __dec_obj197;
void* __right_value389 = (void*)0;
char* attribute2_330;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* __dec_obj198;
char* __dec_obj199;
void* __right_value393 = (void*)0;
struct sNode* node_331;
void* __right_value394 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var9 = (void*)0;
char* asm_name_332=0;
char* attribute2_333=0;
char* __dec_obj200;
char* __dec_obj201;
void* __right_value395 = (void*)0;
struct sType* type_before_334;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sType* __dec_obj202;
void* __right_value399 = (void*)0;
struct sNode* __list_values1___335[1];
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct list$1sNode$ph* __dec_obj203;
struct sType* __dec_obj204;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sType* type2_337;
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
struct sType* type3_343;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* type4_344;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__141;
char* __dec_obj206;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__142;
type_213 = (void*)0;
var_name_214 = (void*)0;
result_type_238 = (void*)0;
result_type_252 = (void*)0;
    head_136=info->p;
    head_sline_137=info->sline;
    info->define_struct=(_Bool)0;
    type_name_138=(char*)come_increment_ref_count(parse_word(info));
    record__139=(_Bool)0;
    exception__140=(_Bool)0;
    constant_141=(_Bool)0;
    static__142=(_Bool)0;
    volatile__143=(_Bool)0;
    register__144=(_Bool)0;
    unsigned__145=(_Bool)0;
    long__146=(_Bool)0;
    long_long_147=(_Bool)0;
    short__148=(_Bool)0;
    restrict__149=(_Bool)0;
    struct__150=(_Bool)0;
    union__151=(_Bool)0;
    enum__152=(_Bool)0;
    no_heap_153=(_Bool)0;
    extern__154=(_Bool)0;
    inline__155=(_Bool)0;
    uniq__156=(_Bool)0;
    tuple__157=(_Bool)0;
    immutable__158=(_Bool)0;
    task__159=(_Bool)0;
    alignas__160=((void*)0);
    anonymous_type_161=(_Bool)0;
    anonymous_name_162=(_Bool)0;
    atomic__163=(_Bool)0;
    object_interface_164=(_Bool)0;
    while(    (_Bool)1    ) {
        if(        string_operator_equals(type_name_138,"object")&&*info->p==58        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_164=(_Bool)1;
            __dec_obj73=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_Atomic")        ) {
            if(            *info->p==40            ) {
                expected_next_character(40,info);
            }
            __dec_obj74=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            atomic__163=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_138,"__extension__")        ) {
            __dec_obj75=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"__attribute__")        ) {
            if(            *info->p==40            ) {
                brace_num_165=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_165++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_165--;
                        if(                        brace_num_165==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj76=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"__declspec")        ) {
            if(            *info->p==40            ) {
                brace_num_166=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_166++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_166--;
                        if(                        brace_num_166==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj77=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_Noreturn")        ) {
            __dec_obj78=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"__noreturn")        ) {
            __dec_obj79=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_Nullable")        ) {
            __dec_obj80=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_noreturn")        ) {
            __dec_obj81=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_Alignas")        ) {
            expected_next_character(40,info);
            exp_167=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj82=alignas__160,
            alignas__160=(struct sNode*)come_increment_ref_count(exp_167);
            (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            expected_next_character(41,info);
            __dec_obj83=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            ((exp_167) ? exp_167 = come_decrement_ref_count(exp_167, ((struct sNode*)exp_167)->finalize, ((struct sNode*)exp_167)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        string_operator_equals(type_name_138,"const")        ) {
            constant_141=(_Bool)1;
            __dec_obj84=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"immutable")        ) {
            immutable__158=(_Bool)1;
            __dec_obj85=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_task")        ) {
            task__159=(_Bool)1;
            __dec_obj86=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"static")        ) {
            static__142=(_Bool)1;
            __dec_obj87=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"uniq")        ) {
            uniq__156=(_Bool)1;
            __dec_obj88=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"record")        ) {
            record__139=(_Bool)1;
            __dec_obj89=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"exception")        ) {
            exception__140=(_Bool)1;
            __dec_obj90=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"extern")        ) {
            extern__154=(_Bool)1;
            __dec_obj91=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"inline")||string_operator_equals(type_name_138,"__inline")||string_operator_equals(type_name_138,"__inline__")||string_operator_equals(type_name_138,"__always_inline")||string_operator_equals(type_name_138,"__forceinline")        ) {
            inline__155=(_Bool)1;
            __dec_obj92=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"volatile")        ) {
            volatile__143=(_Bool)1;
            __dec_obj93=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"struct")        ) {
            struct__150=(_Bool)1;
            if(            *info->p==123            ) {
                p_168=info->p;
                sline_169=info->sline;
                ((char*)(__right_value157=skip_block(info,(_Bool)0)));
                (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                *info->p==59                ) {
                    anonymous_name_162=(_Bool)1;
                    anonymous_type_161=(_Bool)1;
                    __dec_obj94=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_168;
                    info->sline=sline_169;
                    break;
                }
                else {
                    anonymous_type_161=(_Bool)1;
                    __dec_obj95=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_168;
                    info->sline=sline_169;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62            ) {
                (void)((char*)(__right_value160=parse_struct_attribute(info)));
                (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                __dec_obj96=type_name_138,
                type_name_138=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60                ) {
                    p_170=info->p;
                    sline_171=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1                    ) {
                        if(                        *info->p==62                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123                            ) {
                            }
                            else {
                                info->p=p_170;
                                info->sline=sline_171;
                            }
                            break;
                        }
                        else if(                        *info->p==0                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value162=err_msg(info,"invalid struct definition")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value162, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            __result_obj__103 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value164=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1224, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value164, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                            return __result_obj__103;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123                ) {
                    p_172=info->p;
                    sline_173=info->sline;
                    ((char*)(__right_value165=skip_block(info,(_Bool)0)));
                    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (void)((char*)(__right_value166=parse_struct_attribute(info)));
                    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    if(                    *info->p==59                    ) {
                        info->p=head_136;
                        info->sline=head_sline_137;
                        info->define_struct=(_Bool)1;
                        __result_obj__104 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value168=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1244, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                        (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value168, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                        return __result_obj__104;
                    }
                    else {
                        info->p=p_172;
                        info->sline=sline_173;
                        node_174=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_138),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_175=node_compile(node_174,info);
                        if(                        !Value_175                        ) {
                            __result_obj__105 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value172=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1256, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            ((node_174) ? node_174 = come_decrement_ref_count(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                            (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value172, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                            return __result_obj__105;
                        }
                        else {
                        }
                        ((node_174) ? node_174 = come_decrement_ref_count(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        break;
                        ((node_174) ? node_174 = come_decrement_ref_count(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_138,"union")        ) {
            union__151=(_Bool)1;
            if(            *info->p==123            ) {
                p_176=info->p;
                sline_177=info->sline;
                ((char*)(__right_value173=skip_block(info,(_Bool)0)));
                (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0                ) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value174=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value174, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                *info->p==59                ) {
                    info->p=head_136;
                    info->sline=head_sline_137;
                    info->define_struct=(_Bool)0;
                    anonymous_type_161=(_Bool)1;
                    __dec_obj97=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_176;
                    info->sline=sline_177;
                    break;
                }
                else {
                    anonymous_type_161=(_Bool)1;
                    __dec_obj98=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_176;
                    info->sline=sline_177;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj99=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_178=info->p;
                sline_179=info->sline;
                ((char*)(__right_value178=skip_block(info,(_Bool)0)));
                (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                *info->p==59                ) {
                    info->p=head_136;
                    info->sline=head_sline_137;
                    info->define_struct=(_Bool)1;
                    __result_obj__106 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value180=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1313, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value180, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__106;
                }
                else {
                    anonymous_type_161=(_Bool)1;
                    info->p=p_178;
                    info->sline=sline_179;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_138,"enum")        ) {
            enum__152=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value181=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_180=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_181=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_182=multiple_assign_var3->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value181, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_181 = come_decrement_ref_count(name_181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_183=info->p;
                sline_184=info->sline;
                ((char*)(__right_value182=skip_block(info,(_Bool)0)));
                (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0                ) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value183=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value183, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                *info->p==59                ) {
                    info->p=head_136;
                    info->sline=head_sline_137;
                    info->define_struct=(_Bool)1;
                    __result_obj__107 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value185=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1351, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value185, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__107;
                }
                else {
                    anonymous_type_161=(_Bool)1;
                    __dec_obj100=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_183;
                    info->sline=sline_184;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj101=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value188=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_185=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_186=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_187=multiple_assign_var4->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value188, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_186 = come_decrement_ref_count(name_186, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_188=info->p;
                sline_189=info->sline;
                ((char*)(__right_value189=skip_block(info,(_Bool)0)));
                (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                *info->p==59                ) {
                    info->p=head_136;
                    info->sline=head_sline_137;
                    info->define_struct=(_Bool)1;
                    __result_obj__108 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value191=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1387, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value191, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__108;
                }
                else {
                    anonymous_type_161=(_Bool)1;
                    info->p=p_188;
                    info->sline=sline_189;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_138,"long")        ) {
            {
                p_190=info->p;
                sline_191=info->sline;
                if(                !(xisalpha(*info->p)||*info->p==95)                ) {
                    info->p=p_190;
                    info->sline=sline_191;
                    __dec_obj102=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    break;
                }
                else {
                    __dec_obj103=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    if(                    string_operator_equals(type_name_138,"unsigned")                    ) {
                        __dec_obj104=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        string_operator_equals(type_name_138,"int")                        ) {
                            long__146=(_Bool)1;
                            unsigned__145=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_138,"signed")                    ) {
                        __dec_obj105=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        string_operator_equals(type_name_138,"int")                        ) {
                            long__146=(_Bool)1;
                            unsigned__145=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_138,"long")                    ) {
                        p_190=info->p;
                        sline_191=info->sline;
                        if(                        xisalpha(*info->p)||*info->p==95                        ) {
                            long_long_147=(_Bool)1;
                            __dec_obj106=type_name_138,
                            type_name_138=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        else {
                            long__146=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_138,"int")                        ) {
                            long_long_147=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_138,info)                        ) {
                            __dec_obj107=type_name_138,
                            type_name_138=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            long_long_147=(_Bool)1;
                            info->p=p_190;
                            info->sline=sline_191;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_138,info)                    ) {
                        if(                        long__146                        ) {
                            long_long_147=(_Bool)1;
                            long__146=(_Bool)0;
                        }
                        else {
                            long__146=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_190;
                        info->sline=sline_191;
                        __dec_obj108=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_138,"unsigned")        ) {
            unsigned__145=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                p_192=info->p;
                sline_193=info->sline;
                __dec_obj109=type_name_138,
                type_name_138=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                if(                string_operator_equals(type_name_138,"short")                ) {
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        p_194=info->p;
                        sline_195=info->sline;
                        __dec_obj110=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        is_type_name(type_name_138,info)                        ) {
                            short__148=(_Bool)1;
                        }
                        else {
                            short__148=(_Bool)1;
                            __dec_obj111=type_name_138,
                            type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            info->p=p_194;
                            info->sline=sline_195;
                        }
                    }
                    else {
                        short__148=(_Bool)1;
                        __dec_obj112=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_138,"long")                ) {
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        p_196=info->p;
                        sline_197=info->sline;
                        __dec_obj113=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        is_type_name(type_name_138,info)                        ) {
                            long__146=(_Bool)1;
                        }
                        else {
                            long__146=(_Bool)1;
                            __dec_obj114=type_name_138,
                            type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            info->p=p_196;
                            info->sline=sline_197;
                        }
                    }
                    else {
                        long__146=(_Bool)1;
                        __dec_obj115=type_name_138,
                        type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_138,info)                ) {
                    __dec_obj116=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_192;
                    info->sline=sline_193;
                    break;
                }
            }
            else {
                __dec_obj117=type_name_138,
                type_name_138=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_138,"signed")||string_operator_equals(type_name_138,"__signed__")        ) {
            unsigned__145=(_Bool)0;
            __dec_obj118=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"register")        ) {
            register__144=(_Bool)1;
            __dec_obj119=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"restrict")        ) {
            restrict__149=(_Bool)1;
            __dec_obj120=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"_Addr")        ) {
            __dec_obj121=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"__restrict")        ) {
            restrict__149=(_Bool)1;
            __dec_obj122=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_138,"tup")        ) {
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj123=type_name_138,
            type_name_138=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__157=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_138,"short")        ) {
            short__148=(_Bool)0;
            if(            *info->p==58            ) {
                break;
            }
            else if(            xisalnum(*info->p)            ) {
                p_198=info->p;
                sline_199=info->sline;
                __dec_obj124=type_name_138,
                type_name_138=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                if(                string_operator_equals(type_name_138,"int")                ) {
                    short__148=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_138,"short")                ) {
                    short__148=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_138,info)                ) {
                    info->p=p_198;
                    info->sline=sline_199;
                }
                else {
                    __dec_obj125=type_name_138,
                    type_name_138=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_198;
                    info->sline=sline_199;
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
    attribute_200=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_201=0;
    heap_202=(_Bool)0;
    refference_203=(_Bool)0;
    no_refference_204=(_Bool)0;
    channel_205=(_Bool)0;
    any_class_206=(_Bool)0;
    vtable_207=(_Bool)0;
    deffer__208=(_Bool)0;
    while(    1    ) {
        if(        *info->p==42        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_201++;
        }
        else if(        *info->p==126        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            deffer__208=(_Bool)1;
        }
        else if(        *info->p==37        ) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_202=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64        ) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_205=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_209=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__157    ) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj126=tuple_name_209,
        tuple_name_209=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    atomic__163&&*info->p==41    ) {
        expected_next_character(41,info);
    }
    lambda_flag_210=(_Bool)0;
    {
        pX_211=info->p;
        slineX_212=info->sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            (void)((char*)(__right_value218=parse_word(info)));
            (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            *info->p==40&&info->in_typedef            ) {
                lambda_flag_210=(_Bool)1;
            }
        }
        info->p=pX_211;
        info->sline=slineX_212;
    }
    function_pointer_flag_215=(_Bool)0;
    {
        p_216=info->p;
        sline_217=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94            ) {
                function_pointer_flag_215=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95            ) {
                word_218=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40                    ) {
                        function_pointer_flag_215=(_Bool)1;
                    }
                }
                (word_218 = come_decrement_ref_count(word_218, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=p_216;
        info->sline=sline_217;
    }
    var_name_between_brace_219=(_Bool)0;
    {
        p_220=info->p;
        sline_221=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_222=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_222,info)                ) {
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40                    ) {
                        var_name_between_brace_219=(_Bool)1;
                    }
                }
                (word_222 = come_decrement_ref_count(word_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=p_220;
        info->sline=sline_221;
    }
    if(    anonymous_type_161&&*info->p==123    ) {
        static int anonymous_num_223=0;
        if(        struct__150        ) {
            if(            string_operator_equals(type_name_138,"")            ) {
                __dec_obj127=type_name_138,
                type_name_138=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_223));
                __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            node_224=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_138),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_225=node_compile(node_224,info);
            if(            !Value_225            ) {
                ((struct tuple2$2int$bool$*)(__right_value224=err_msg(info,"parse_struct is failed")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value224, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__109 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value226=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1794, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_224) ? node_224 = come_decrement_ref_count(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value226, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__109;
            }
            else {
            }
            pointer_num_226=0;
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_226++;
            }
            __dec_obj128=type_213,
            type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1807, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            type_213->mPointerNum=pointer_num_226;
            ((node_224) ? node_224 = come_decrement_ref_count(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        enum__152        ) {
            if(            string_operator_equals(type_name_138,"")            ) {
                __dec_obj129=type_name_138,
                type_name_138=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_223));
                __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            node_227=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_138),info));
            if(            !info->no_output_err            ) {
                Value_228=node_compile(node_227,info);
                if(                !Value_228                ) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result_obj__110 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value233=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1821, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    ((node_227) ? node_227 = come_decrement_ref_count(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value233, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__110;
                }
                else {
                }
            }
            __dec_obj130=type_213,
            type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1825, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            ((node_227) ? node_227 = come_decrement_ref_count(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        union__151        ) {
            if(            string_operator_equals(type_name_138,"")            ) {
                __dec_obj131=type_name_138,
                type_name_138=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_223));
                __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            node_229=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_138),info));
            Value_230=node_compile(node_229,info);
            if(            !Value_230            ) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result_obj__111 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value240=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1837, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_229) ? node_229 = come_decrement_ref_count(node_229, ((struct sNode*)node_229)->finalize, ((struct sNode*)node_229)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value240, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__111;
            }
            else {
            }
            pointer_num_231=0;
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_231++;
            }
            __dec_obj132=type_213,
            type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1851, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj132,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            type_213->mPointerNum=pointer_num_231;
            ((node_229) ? node_229 = come_decrement_ref_count(node_229, ((struct sNode*)node_229)->finalize, ((struct sNode*)node_229)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value244=err_msg(info,"unexpected { character")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value244, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__112 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value246=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1857, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value246, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__112;
        }
        attribute_232=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_232,"")        ) {
            __dec_obj133=type_213->mAttribute,
            type_213->mAttribute=(char*)come_increment_ref_count(attribute_232);
            __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace_219&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __dec_obj134=var_name_214,
                var_name_214=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            anonymous_name_162            ) {
                static int num_anonymous_var_name_233=0;
                num_anonymous_var_name_233++;
                __dec_obj135=var_name_214,
                var_name_214=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_233));
                __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj136=var_name_214,
                var_name_214=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                static int num_anonymous_var_name_234=0;
                num_anonymous_var_name_234++;
                __dec_obj137=var_name_214,
                var_name_214=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_234));
                __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            var_name_between_brace_219&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_235=info->no_comma;
                info->no_comma=(_Bool)1;
                node_236=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_235;
                __dec_obj138=type_213->mSizeNum,
                type_213->mSizeNum=(struct sNode*)come_increment_ref_count(node_236);
                (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                ((node_236) ? node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            attribute2_237=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_232,"")&&string_operator_not_equals(attribute2_237,"")            ) {
                __dec_obj139=type_213->mAttribute,
                type_213->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value255=string_operator_add(attribute_232," "))),attribute2_237));
                __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value255 = come_decrement_ref_count(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_237,"")            ) {
                __dec_obj140=type_213->mAttribute,
                type_213->mAttribute=(char*)come_increment_ref_count(attribute2_237);
                __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            (attribute2_237 = come_decrement_ref_count(attribute2_237, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (attribute_232 = come_decrement_ref_count(attribute_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    lambda_flag_210    ) {
        if(        (_condtional_value_X1=(((struct sType*)(__right_value257=map$2char$phsType$ph_operator_load_element(info->types,type_name_138))))),        come_call_finalizer(sType_finalize, __right_value257, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X1        ) {
            __dec_obj141=result_type_238,
            result_type_238=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value258=map$2char$phsType$ph_operator_load_element(info->types,type_name_138)))));
            come_call_finalizer(sType_finalize, __dec_obj141,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __right_value258, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            result_type_238->mClass=((struct sClass*)(__right_value260=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_238->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value260, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_138)        ) {
            for(            i_239=0            ;            i_239<list$1char$ph_length(info->generics_type_names)            ;            i_239++            ){
                if(                (_condtional_value_X2=(string_operator_equals(((char*)(__right_value262=list$1char$ph_operator_load_element(info->generics_type_names,i_239))),type_name_138))),                (__right_value261 = come_decrement_ref_count(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X2                ) {
                    __dec_obj142=result_type_238,
                    result_type_238=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1925, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_239)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj142,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_138)        ) {
            for(            i_246=0            ;            i_246<list$1char$ph_length(info->method_generics_type_names)            ;            i_246++            ){
                if(                (_condtional_value_X3=(string_operator_equals(((char*)(__right_value267=list$1char$ph_operator_load_element(info->method_generics_type_names,i_246))),type_name_138))),                (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X3                ) {
                    __dec_obj143=result_type_238,
                    result_type_238=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1932, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_246)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
        }
        else {
            __dec_obj144=result_type_238,
            result_type_238=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1937, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        result_type_238->mAtomic=result_type_238->mAtomic||atomic__163;
        result_type_238->mConstant=result_type_238->mConstant||constant_141;
        result_type_238->mImmutable=result_type_238->mImmutable||immutable__158;
        result_type_238->mTask=result_type_238->mTask||task__159;
        __dec_obj145=result_type_238->mAlignas,
        result_type_238->mAlignas=(struct sNode*)come_increment_ref_count(alignas__160);
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        result_type_238->mRegister=register__144;
        result_type_238->mUnsigned=result_type_238->mUnsigned||unsigned__145;
        result_type_238->mVolatile=volatile__143;
        result_type_238->mRecord=result_type_238->mRecord||record__139;
        result_type_238->mUniq=result_type_238->mUniq||uniq__156;
        result_type_238->mStatic=(result_type_238->mStatic||static__142)&&!result_type_238->mUniq;
        result_type_238->mException=result_type_238->mException||exception__140;
        result_type_238->mExtern=result_type_238->mExtern||extern__154;
        result_type_238->mInline=result_type_238->mInline||inline__155;
        result_type_238->mRestrict=result_type_238->mRestrict||restrict__149;
        result_type_238->mLongLong=result_type_238->mLongLong||long_long_147;
        result_type_238->mLong=result_type_238->mLong||long__146;
        result_type_238->mShort=result_type_238->mShort||short__148;
        result_type_238->mPointerNum=pointer_num_201;
        result_type_238->mHeap=result_type_238->mHeap||heap_202;
        result_type_238->mChannel=result_type_238->mChannel||channel_205;
        result_type_238->mDefferRightValue=result_type_238->mDefferRightValue||deffer__208;
        __dec_obj146=var_name_214,
        var_name_214=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value275=parse_params(info,(_Bool)0)));
        param_types_247=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_248=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_249=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_250=multiple_assign_var5->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value275, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj147=type_213,
        type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1967, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj147,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj148=type_213->mResultType,
        type_213->mResultType=(struct sType*)come_increment_ref_count(result_type_238);
        come_call_finalizer(sType_finalize, __dec_obj148,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj149=type_213->mParamTypes,
        type_213->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_247);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj149,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj150=type_213->mParamNames,
        type_213->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_248);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj150,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        type_213->mVarArgs=var_args_250;
        type_213->mExtern=extern__154;
        come_call_finalizer(sType_finalize, result_type_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    function_pointer_flag_215    ) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_251=0;
        while(        *info->p==42||*info->p==94        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_251++;
        }
        skip_pointer_attribute(info);
        if(        (_condtional_value_X4=(((struct sType*)(__right_value279=map$2char$phsType$ph_operator_load_element(info->types,type_name_138))))),        come_call_finalizer(sType_finalize, __right_value279, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X4        ) {
            __dec_obj151=result_type_252,
            result_type_252=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value280=map$2char$phsType$ph_operator_load_element(info->types,type_name_138)))));
            come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __right_value280, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            result_type_252->mClass=((struct sClass*)(__right_value282=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_252->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value282, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_138)        ) {
            for(            i_253=0            ;            i_253<list$1char$ph_length(info->generics_type_names)            ;            i_253++            ){
                if(                (_condtional_value_X5=(string_operator_equals(((char*)(__right_value284=list$1char$ph_operator_load_element(info->generics_type_names,i_253))),type_name_138))),                (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X5                ) {
                    __dec_obj152=result_type_252,
                    result_type_252=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2000, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_253)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_138)        ) {
            for(            i_254=0            ;            i_254<list$1char$ph_length(info->method_generics_type_names)            ;            i_254++            ){
                if(                (_condtional_value_X6=(string_operator_equals(((char*)(__right_value289=list$1char$ph_operator_load_element(info->method_generics_type_names,i_254))),type_name_138))),                (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X6                ) {
                    __dec_obj153=result_type_252,
                    result_type_252=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2007, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_254)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
        }
        else {
            __dec_obj154=result_type_252,
            result_type_252=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2012, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj154,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        result_type_252->mConstant=result_type_252->mConstant||constant_141;
        result_type_252->mImmutable=result_type_252->mImmutable||immutable__158;
        result_type_252->mTask=result_type_252->mTask||task__159;
        result_type_252->mAtomic=result_type_252->mAtomic||atomic__163;
        __dec_obj155=result_type_252->mAlignas,
        result_type_252->mAlignas=(struct sNode*)come_increment_ref_count(alignas__160);
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        result_type_252->mRegister=register__144;
        result_type_252->mUnsigned=result_type_252->mUnsigned||unsigned__145;
        result_type_252->mVolatile=volatile__143;
        result_type_252->mUniq=result_type_252->mUniq||uniq__156;
        result_type_252->mStatic=(result_type_252->mStatic||static__142)&&!result_type_252->mUniq;
        result_type_252->mRecord=result_type_252->mRecord||record__139;
        result_type_252->mException=result_type_252->mException||exception__140;
        result_type_252->mExtern=result_type_252->mExtern||extern__154;
        result_type_252->mInline=result_type_252->mInline||inline__155;
        result_type_252->mRestrict=result_type_252->mRestrict||restrict__149;
        result_type_252->mLongLong=result_type_252->mLongLong||long_long_147;
        result_type_252->mLong=result_type_252->mLong||long__146;
        result_type_252->mShort=result_type_252->mShort||short__148;
        result_type_252->mPointerNum+=pointer_num_201;
        result_type_252->mHeap=result_type_252->mHeap||heap_202;
        result_type_252->mChannel=result_type_252->mChannel||channel_205;
        result_type_252->mDefferRightValue=result_type_252->mDefferRightValue||deffer__208;
        if(        xisalnum(*info->p)||*info->p==95        ) {
            __dec_obj156=var_name_214,
            var_name_214=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                __result_obj__117 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value298=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2041, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(result_type_252),(char*)come_increment_ref_count(var_name_214),(_Bool)0))));
                come_call_finalizer(sType_finalize, result_type_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value298, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__117;
            }
        }
        else {
            static int num_anonymous_var_name_255=0;
            num_anonymous_var_name_255++;
            __dec_obj157=var_name_214,
            var_name_214=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_255));
            __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        function_pointer_array_256=(_Bool)0;
        function_pointer_array_num_257=0;
        if(        *info->p==91        ) {
            info->p++;
            skip_spaces_and_lf(info);
            n_258=0;
            while(            xisdigit(*info->p)            ) {
                n_258=n_258*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_257=n_258;
            if(            *info->p==93            ) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_256=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value300=parse_params(info,(_Bool)0)));
        param_types_259=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_260=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_261=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_262=multiple_assign_var6->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value300, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj158=type_213,
        type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2073, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj158,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj159=type_213->mResultType,
        type_213->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type_252));
        come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj160=type_213->mParamTypes,
        type_213->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_259);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj160,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj161=type_213->mParamNames,
        type_213->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_260);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj161,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        type_213->mVarArgs=var_args_262;
        type_213->mExtern=extern__154;
        if(        function_pointer_array_256        ) {
            type_213->mLambdaArray=(_Bool)1;
            type_213->mLambdaArrayNum=function_pointer_array_num_257;
        }
        type_213->mFunctionPointerNum=function_pointer_num_251;
        come_call_finalizer(sType_finalize, result_type_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(type_name_138,"__typeof__")&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_263=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_264=node_compile(exp_263,info);
        if(        !Value_264        ) {
            ((struct tuple2$2int$bool$*)(__right_value306=err_msg(info,"invalid __typeof__ expression")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value306, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__118 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value308=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2097, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            ((exp_263) ? exp_263 = come_decrement_ref_count(exp_263, ((struct sNode*)exp_263)->finalize, ((struct sNode*)exp_263)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value308, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__118;
        }
        else {
        }
        come_value_265=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj162=type_213,
        type_213=(struct sType*)come_increment_ref_count(sType_clone(come_value_265->type));
        come_call_finalizer(sType_finalize, __dec_obj162,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        attribute_266=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_266,"")        ) {
            __dec_obj163=type_213->mAttribute,
            type_213->mAttribute=(char*)come_increment_ref_count(attribute_266);
            __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace_219&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __dec_obj164=var_name_214,
                var_name_214=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            anonymous_name_162            ) {
                static int num_anonymous_var_name_267=0;
                num_anonymous_var_name_267++;
                __dec_obj165=var_name_214,
                var_name_214=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_267));
                __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj166=var_name_214,
                var_name_214=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                static int num_anonymous_var_name_268=0;
                num_anonymous_var_name_268++;
                __dec_obj167=var_name_214,
                var_name_214=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_268));
                __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            var_name_between_brace_219&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_269=info->no_comma;
                info->no_comma=(_Bool)1;
                node_270=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_269;
                __dec_obj168=type_213->mSizeNum,
                type_213->mSizeNum=(struct sNode*)come_increment_ref_count(node_270);
                (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                ((node_270) ? node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            attribute2_271=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_266,"")&&string_operator_not_equals(attribute2_271,"")            ) {
                __dec_obj169=type_213->mAttribute,
                type_213->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value319=string_operator_add(attribute_266," "))),attribute2_271));
                __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_271,"")            ) {
                __dec_obj170=type_213->mAttribute,
                type_213->mAttribute=(char*)come_increment_ref_count(attribute2_271);
                __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            (attribute2_271 = come_decrement_ref_count(attribute2_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        ((exp_263) ? exp_263 = come_decrement_ref_count(exp_263, ((struct sNode*)exp_263)->finalize, ((struct sNode*)exp_263)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (attribute_266 = come_decrement_ref_count(attribute_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        if(        (_condtional_value_X7=(((struct sType*)(__right_value321=map$2char$phsType$ph_operator_load_element(info->types,type_name_138))))),        come_call_finalizer(sType_finalize, __right_value321, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X7        ) {
            __dec_obj171=type_213,
            type_213=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value322=map$2char$phsType$ph_operator_load_element(info->types,type_name_138)))));
            come_call_finalizer(sType_finalize, __dec_obj171,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __right_value322, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            type_213->mTypedefOriginalPointerNum=type_213->mPointerNum;
            type_213->mClass=((struct sClass*)(__right_value324=map$2char$phsClass$ph_operator_load_element(info->classes,type_213->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value324, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj172=type_213->mOriginalTypeName,
            type_213->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_138));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            type_213->mOriginalTypeNamePointerNum=pointer_num_201;
            type_213->mOriginalTypeNameHeap=heap_202;
            type_213->mConstant=type_213->mConstant||constant_141;
            type_213->mImmutable=type_213->mImmutable||immutable__158;
            type_213->mTask=type_213->mTask||task__159;
            type_213->mAtomic=type_213->mAtomic||atomic__163;
            __dec_obj173=type_213->mAlignas,
            type_213->mAlignas=(struct sNode*)come_increment_ref_count(alignas__160);
            (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            type_213->mRegister=register__144;
            type_213->mUnsigned=type_213->mUnsigned||unsigned__145;
            type_213->mVolatile=volatile__143;
            type_213->mUniq=type_213->mUniq||uniq__156;
            type_213->mStatic=(type_213->mStatic||static__142)&&!type_213->mUniq;
            type_213->mRecord=type_213->mRecord||record__139;
            type_213->mException=type_213->mException||exception__140;
            type_213->mExtern=type_213->mExtern||extern__154;
            type_213->mInline=type_213->mInline||inline__155;
            type_213->mRestrict=type_213->mRestrict||restrict__149;
            type_213->mLongLong=type_213->mLongLong||long_long_147;
            type_213->mLong=type_213->mLong||long__146;
            type_213->mShort=type_213->mShort||short__148;
            type_213->mPointerNum+=pointer_num_201;
            type_213->mHeap=type_213->mHeap||heap_202;
            type_213->mChannel=type_213->mChannel||channel_205;
            type_213->mDefferRightValue=type_213->mDefferRightValue||deffer__208;
            __dec_obj174=type_213->mTupleName,
            type_213->mTupleName=(char*)come_increment_ref_count(tuple_name_209);
            __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_138)        ) {
            for(            i_272=0            ;            i_272<list$1char$ph_length(info->generics_type_names)            ;            i_272++            ){
                if(                (_condtional_value_X8=(string_operator_equals(((char*)(__right_value327=list$1char$ph_operator_load_element(info->generics_type_names,i_272))),type_name_138))),                (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value327 = come_decrement_ref_count(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X8                ) {
                    __dec_obj175=type_213,
                    type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2196, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_272)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            type_213->mConstant=type_213->mConstant||constant_141;
            type_213->mImmutable=type_213->mImmutable||immutable__158;
            type_213->mTask=type_213->mTask||task__159;
            type_213->mAtomic=type_213->mAtomic||atomic__163;
            __dec_obj176=type_213->mAlignas,
            type_213->mAlignas=(struct sNode*)come_increment_ref_count(alignas__160);
            (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            type_213->mRegister=register__144;
            type_213->mUnsigned=type_213->mUnsigned||unsigned__145;
            type_213->mVolatile=volatile__143;
            type_213->mUniq=type_213->mUniq||uniq__156;
            type_213->mStatic=(type_213->mStatic||static__142)&&!type_213->mUniq;
            type_213->mRecord=type_213->mRecord||record__139;
            type_213->mException=type_213->mException||exception__140;
            type_213->mExtern=type_213->mExtern||extern__154;
            type_213->mInline=type_213->mInline||inline__155;
            type_213->mRestrict=type_213->mRestrict||restrict__149;
            type_213->mLongLong=type_213->mLongLong||long_long_147;
            type_213->mLong=type_213->mLong||long__146;
            type_213->mShort=type_213->mShort||short__148;
            type_213->mPointerNum+=pointer_num_201;
            type_213->mHeap=type_213->mHeap||heap_202;
            type_213->mChannel=type_213->mChannel||channel_205;
            type_213->mDefferRightValue=type_213->mDefferRightValue||deffer__208;
            __dec_obj177=type_213->mTupleName,
            type_213->mTupleName=(char*)come_increment_ref_count(tuple_name_209);
            __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_138)        ) {
            for(            i_273=0            ;            i_273<list$1char$ph_length(info->method_generics_type_names)            ;            i_273++            ){
                if(                (_condtional_value_X9=(string_operator_equals(((char*)(__right_value332=list$1char$ph_operator_load_element(info->method_generics_type_names,i_273))),type_name_138))),                (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X9                ) {
                    __dec_obj178=type_213,
                    type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2227, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_273)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj178,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            type_213->mConstant=type_213->mConstant||constant_141;
            type_213->mImmutable=type_213->mImmutable||immutable__158;
            type_213->mTask=type_213->mTask||task__159;
            type_213->mAtomic=type_213->mAtomic||atomic__163;
            __dec_obj179=type_213->mAlignas,
            type_213->mAlignas=(struct sNode*)come_increment_ref_count(alignas__160);
            (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            type_213->mRegister=register__144;
            type_213->mUnsigned=type_213->mUnsigned||unsigned__145;
            type_213->mVolatile=volatile__143;
            type_213->mUniq=type_213->mUniq||uniq__156;
            type_213->mStatic=(type_213->mStatic||static__142)&&!type_213->mUniq;
            type_213->mRecord=type_213->mRecord||record__139;
            type_213->mException=type_213->mException||exception__140;
            type_213->mExtern=type_213->mExtern||extern__154;
            type_213->mInline=type_213->mInline||inline__155;
            type_213->mRestrict=type_213->mRestrict||restrict__149;
            type_213->mLongLong=type_213->mLongLong||long_long_147;
            type_213->mLong=type_213->mLong||long__146;
            type_213->mShort=type_213->mShort||short__148;
            type_213->mPointerNum+=pointer_num_201;
            type_213->mHeap=type_213->mHeap||heap_202;
            type_213->mChannel=type_213->mChannel||channel_205;
            type_213->mDefferRightValue=type_213->mDefferRightValue||deffer__208;
            __dec_obj180=type_213->mTupleName,
            type_213->mTupleName=(char*)come_increment_ref_count(tuple_name_209);
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_condtional_value_X10=(((struct sClass*)(__right_value338=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value337=__builtin_string(type_name_138))))))==((void*)0))),            (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            come_call_finalizer(sClass_finalize, __right_value338, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X10            ) {
                __result_obj__119 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value340=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2261, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value340, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__119;
            }
            __dec_obj181=type_213,
            type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2264, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            while(            (_Bool)1            ) {
                multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value344=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_274=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_275=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_276=multiple_assign_var7->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value344, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_276                ) {
                    __result_obj__120 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value346=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2270, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, generics_type_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_275 = come_decrement_ref_count(var_name_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value346, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__120;
                }
                list$1sType$ph_push_back(type_213->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_274));
                if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, generics_type_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_275 = come_decrement_ref_count(var_name_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value347=err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2))));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value347, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__121 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value349=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2287, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, generics_type_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_275 = come_decrement_ref_count(var_name_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value349, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__121;
                }
                come_call_finalizer(sType_finalize, generics_type_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_275 = come_decrement_ref_count(var_name_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            is_contained_generics_class(type_213,info)            ) {
                __dec_obj182=type_213,
                type_213=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_213),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj182,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            else {
                if(                !output_generics_struct((struct sType*)come_increment_ref_count(type_213),(struct sType*)come_increment_ref_count(type_213),info)                ) {
                    new_name_277=(char*)come_increment_ref_count(create_generics_name(type_213,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_277);
                    exit(7);
                    (new_name_277 = come_decrement_ref_count(new_name_277, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            type_213->mConstant=type_213->mConstant||constant_141;
            type_213->mImmutable=type_213->mImmutable||immutable__158;
            type_213->mTask=type_213->mTask||task__159;
            type_213->mAtomic=type_213->mAtomic||atomic__163;
            __dec_obj183=type_213->mAlignas,
            type_213->mAlignas=(struct sNode*)come_increment_ref_count(alignas__160);
            (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            type_213->mRegister=register__144;
            type_213->mUnsigned=type_213->mUnsigned||unsigned__145;
            type_213->mVolatile=volatile__143;
            type_213->mUniq=type_213->mUniq||uniq__156;
            type_213->mStatic=(type_213->mStatic||static__142)&&!type_213->mUniq;
            type_213->mRecord=type_213->mRecord||record__139;
            type_213->mException=type_213->mException||exception__140;
            type_213->mExtern=type_213->mExtern||extern__154;
            type_213->mInline=type_213->mInline||inline__155;
            type_213->mRestrict=type_213->mRestrict||restrict__149;
            type_213->mLongLong=type_213->mLongLong||long_long_147;
            type_213->mLong=type_213->mLong||long__146;
            type_213->mShort=type_213->mShort||short__148;
            type_213->mPointerNum+=pointer_num_201;
            type_213->mHeap=type_213->mHeap||heap_202;
            type_213->mChannel=type_213->mChannel||channel_205;
            type_213->mDefferRightValue=type_213->mDefferRightValue||deffer__208;
            __dec_obj184=type_213->mTupleName,
            type_213->mTupleName=(char*)come_increment_ref_count(tuple_name_209);
            __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj185=type_name_138,
            type_name_138=(char*)come_increment_ref_count(type_213->mClass->mName);
            __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            if(            struct__150            ) {
                klass_278=((struct sClass*)(__right_value352=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_138)));
                come_call_finalizer(sClass_finalize, __right_value352, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                klass_278==((void*)0)&&*info->p!=60                ) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_138)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 2334, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
                }
            }
            if(            union__151            ) {
                klass_316=((struct sClass*)(__right_value362=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_138)));
                come_call_finalizer(sClass_finalize, __right_value362, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                klass_316==((void*)0)&&*info->p!=60                ) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_138)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 2341, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
                }
            }
            __dec_obj186=type_213,
            type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2345, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_138)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj186,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            type_213->mConstant=type_213->mConstant||constant_141;
            type_213->mImmutable=type_213->mImmutable||immutable__158;
            type_213->mTask=type_213->mTask||task__159;
            type_213->mAtomic=type_213->mAtomic||atomic__163;
            __dec_obj187=type_213->mAlignas,
            type_213->mAlignas=(struct sNode*)come_increment_ref_count(alignas__160);
            (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            type_213->mRegister=register__144;
            type_213->mUnsigned=type_213->mUnsigned||unsigned__145;
            type_213->mVolatile=volatile__143;
            type_213->mUniq=type_213->mUniq||uniq__156;
            type_213->mStatic=(type_213->mStatic||static__142)&&!type_213->mUniq;
            type_213->mRecord=type_213->mRecord||record__139;
            type_213->mException=type_213->mException||exception__140;
            type_213->mExtern=type_213->mExtern||extern__154;
            type_213->mInline=type_213->mInline||inline__155;
            type_213->mRestrict=type_213->mRestrict||restrict__149;
            type_213->mLongLong=type_213->mLongLong||long_long_147;
            type_213->mLong=type_213->mLong||long__146;
            type_213->mShort=type_213->mShort||short__148;
            type_213->mPointerNum+=pointer_num_201;
            type_213->mHeap=type_213->mHeap||heap_202;
            type_213->mChannel=type_213->mChannel||channel_205;
            type_213->mDefferRightValue=type_213->mDefferRightValue||deffer__208;
            __dec_obj188=type_213->mTupleName,
            type_213->mTupleName=(char*)come_increment_ref_count(tuple_name_209);
            __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        skip_pointer_attribute(info);
        while(        1        ) {
            if(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_213->mPointerNum++;
                if(                type_213->mNoSolvedGenericsType                ) {
                    type_213->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_213->mHeap=(_Bool)1;
                if(                type_213->mNoSolvedGenericsType                ) {
                    type_213->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_213->mDefferRightValue=(_Bool)1;
                if(                type_213->mNoSolvedGenericsType                ) {
                    type_213->mNoSolvedGenericsType->mDefferRightValue=(_Bool)1;
                }
            }
            else if(            *info->p==38            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_213->mNoHeap=(_Bool)1;
                if(                type_213->mNoSolvedGenericsType                ) {
                    type_213->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63            ) {
                info->p++;
                if(                *info->p==63                ) {
                    info->p++;
                    type_213->mGuardValue=(_Bool)1;
                }
                else {
                    type_213->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_213->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(        1        ) {
            if(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_213->mPointerNum++;
                if(                type_213->mNoSolvedGenericsType                ) {
                    type_213->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_213->mHeap=(_Bool)1;
                if(                type_213->mNoSolvedGenericsType                ) {
                    type_213->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_213->mDefferRightValue=(_Bool)1;
                if(                type_213->mNoSolvedGenericsType                ) {
                    type_213->mNoSolvedGenericsType->mDefferRightValue=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_213->mChannel=(_Bool)1;
                if(                type_213->mNoSolvedGenericsType                ) {
                    type_213->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44        ) {
            types_317=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 2490, "struct list$1sType$ph*"))));
            list$1sType$ph_push_back(types_317,(struct sType*)come_increment_ref_count(sType_clone(type_213)));
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value373=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_318=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_319=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_320=multiple_assign_var8->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value373, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_320                ) {
                    __result_obj__137 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value375=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2501, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, type2_318, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_319 = come_decrement_ref_count(name_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1sType$ph$p_finalize, types_317, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value375, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__137;
                }
                list$1sType$ph_push_back(types_317,(struct sType*)come_increment_ref_count(sType_clone(type2_318)));
                come_call_finalizer(sType_finalize, type2_318, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_319 = come_decrement_ref_count(name_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_321=list$1sType$ph_length(types_317);
            __dec_obj189=type_213,
            type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2514, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",num_tuples_321)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj189,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            type_213->mPointerNum++;
            type_213->mHeap=(_Bool)1;
            for(            o2_saved_322=(struct list$1sType$ph*)come_increment_ref_count((types_317)),it_323=list$1sType$ph_begin((o2_saved_322))            ;            !list$1sType$ph_end((o2_saved_322))            ;            it_323=list$1sType$ph_next((o2_saved_322))            ){
                list$1sType$ph_push_back(type_213->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value380=sType_clone(it_323))))));
                come_call_finalizer(sType_finalize, __right_value380, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_322, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            while(            1            ) {
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_213->mPointerNum++;
                    if(                    type_213->mNoSolvedGenericsType                    ) {
                        type_213->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_213->mHeap=(_Bool)1;
                    if(                    type_213->mNoSolvedGenericsType                    ) {
                        type_213->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_213->mChannel=(_Bool)1;
                    if(                    type_213->mNoSolvedGenericsType                    ) {
                        type_213->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_213,info)            ) {
                __dec_obj190=type_213,
                type_213=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_213),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj190,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            else {
                if(                !output_generics_struct((struct sType*)come_increment_ref_count(type_213),(struct sType*)come_increment_ref_count(type_213),info)                ) {
                    new_name_324=(char*)come_increment_ref_count(create_generics_name(type_213,info));
                    printf("output generics is failed(%s)\n",new_name_324);
                    exit(9);
                    (new_name_324 = come_decrement_ref_count(new_name_324, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            type_213->mMultipleTypes=(_Bool)1;
            __dec_obj191=type_name_138,
            type_name_138=(char*)come_increment_ref_count(type_213->mClass->mName);
            __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, types_317, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        attribute_325=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_325,"")        ) {
            __dec_obj192=type_213->mAttribute,
            type_213->mAttribute=(char*)come_increment_ref_count(attribute_325);
            __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace_219&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __dec_obj193=var_name_214,
                var_name_214=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            anonymous_name_162            ) {
                static int num_anonymous_var_name_326=0;
                num_anonymous_var_name_326++;
                __dec_obj194=var_name_214,
                var_name_214=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_326));
                __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj195=var_name_214,
                var_name_214=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                static int num_anonymous_var_name_327=0;
                num_anonymous_var_name_327++;
                __dec_obj196=var_name_214,
                var_name_214=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_327));
                __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            var_name_between_brace_219&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_328=info->no_comma;
                info->no_comma=(_Bool)1;
                node_329=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_328;
                __dec_obj197=type_213->mSizeNum,
                type_213->mSizeNum=(struct sNode*)come_increment_ref_count(node_329);
                (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                ((node_329) ? node_329 = come_decrement_ref_count(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            attribute2_330=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_325,"")&&string_operator_not_equals(attribute2_330,"")            ) {
                __dec_obj198=type_213->mAttribute,
                type_213->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value391=string_operator_add(attribute_325," "))),attribute2_330));
                __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value391 = come_decrement_ref_count(__right_value391, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_330,"")            ) {
                __dec_obj199=type_213->mAttribute,
                type_213->mAttribute=(char*)come_increment_ref_count(attribute2_330);
                __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            (attribute2_330 = come_decrement_ref_count(attribute2_330, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (attribute_325 = come_decrement_ref_count(attribute_325, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    while(    *info->p==91    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93        ) {
            info->p++;
            skip_spaces_and_lf(info);
            type_213->mArrayPointerType=(_Bool)1;
            type_213->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_331=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(type_213->mArrayNum,(struct sNode*)come_increment_ref_count(node_331));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        ((node_331) ? node_331 = come_decrement_ref_count(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    multiple_assign_var9=((struct tuple2$2char$phchar$ph*)(__right_value394=parse_attribute(info,(_Bool)0)));
    asm_name_332=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_333=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value394, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    string_operator_not_equals(attribute2_333,"")    ) {
        __dec_obj200=type_213->mAttribute,
        type_213->mAttribute=(char*)come_increment_ref_count(attribute2_333);
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __dec_obj201=type_213->mAsmName,
    type_213->mAsmName=(char*)come_increment_ref_count(asm_name_332);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    parse_sharp_v5(info);
    if(    type_213->mChannel    ) {
        type_before_334=(struct sType*)come_increment_ref_count(sType_clone(type_213));
        __dec_obj202=type_213,
        type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2667, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj202,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj203=type_213->mArrayNum,
        type_213->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1___335[0]=((struct sNode*)(__right_value399=create_int_node(2,info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 2668, "struct list$1sNode$ph")),1,__list_values1___335)));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj203,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        ((__right_value399) ? __right_value399 = come_decrement_ref_count(__right_value399, ((struct sNode*)__right_value399)->finalize, ((struct sNode*)__right_value399)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        __dec_obj204=type_213->mChannelType,
        type_213->mChannelType=(struct sType*)come_increment_ref_count(type_before_334);
        come_call_finalizer(sType_finalize, __dec_obj204,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        type_213->mChannel=(_Bool)1;
        come_call_finalizer(sType_finalize, type_before_334, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    type_213->mException    ) {
        type2_337=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2673, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph_operator_store_element(type2_337->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2674, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info)));
        come_call_finalizer(sType_finalize, __right_value407, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_operator_store_element(type2_337->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2675, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type1")),(_Bool)0,info)));
        come_call_finalizer(sType_finalize, __right_value413, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type2_337->mPointerNum=1;
        type2_337->mHeap=(_Bool)1;
        type3_343=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2679, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph_operator_store_element(type3_343->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_213));
        list$1sType$ph_operator_store_element(type3_343->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2681, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info)));
        come_call_finalizer(sType_finalize, __right_value422, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type4_344=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type2_337),(struct sType*)come_increment_ref_count(type3_343),info));
        type4_344->mException=(_Bool)1;
        type4_344->mUniq=type_213->mUniq;
        __result_obj__141 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value428=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2688, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type4_344),(char*)come_increment_ref_count(var_name_214),(_Bool)1))));
        come_call_finalizer(sType_finalize, type2_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type3_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type4_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (asm_name_332 = come_decrement_ref_count(asm_name_332, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (attribute2_333 = come_decrement_ref_count(attribute2_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value428, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__141;
        come_call_finalizer(sType_finalize, type2_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type3_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type4_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_not_equals(attribute_200,"")    ) {
        __dec_obj206=type_213->mAttribute,
        type_213->mAttribute=(char*)come_increment_ref_count(attribute_200);
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__142 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value430=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2695, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_213),(char*)come_increment_ref_count(var_name_214),(_Bool)1))));
    (type_name_138 = come_decrement_ref_count(type_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((alignas__160) ? alignas__160 = come_decrement_ref_count(alignas__160, ((struct sNode*)alignas__160)->finalize, ((struct sNode*)alignas__160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (attribute_200 = come_decrement_ref_count(attribute_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (tuple_name_209 = come_decrement_ref_count(tuple_name_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (asm_name_332 = come_decrement_ref_count(asm_name_332, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (attribute2_333 = come_decrement_ref_count(attribute2_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value430, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_240;
int i_241;
char* __result_obj__113;
char* default_value_242;
char* __result_obj__114;
default_value_242 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_240=self->head;
    i_241=0;
    while(    it_240!=((void*)0)    ) {
        if(        position==i_241        ) {
            __result_obj__113 = (char*)come_increment_ref_count(it_240->item);
            (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__113;
        }
        it_240=it_240->next;
        i_241++;
    }
    memset(&default_value_242,0,sizeof(char*));
    __result_obj__114 = (char*)come_increment_ref_count(default_value_242);
    (default_value_242 = come_decrement_ref_count(default_value_242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_243;
int i_244;
char* __result_obj__115;
char* default_value_245;
char* __result_obj__116;
default_value_245 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_243=self->head;
    i_244=0;
    while(    it_243!=((void*)0)    ) {
        if(        position==i_244        ) {
            __result_obj__115 = (char*)come_increment_ref_count(it_243->item);
            (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__115;
        }
        it_243=it_243->next;
        i_244++;
    }
    memset(&default_value_245,0,sizeof(char*));
    __result_obj__116 = (char*)come_increment_ref_count(default_value_245);
    (default_value_245 = come_decrement_ref_count(default_value_245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_296;
unsigned int it_297;
_Bool same_key_exist_314;
char* it2_315;
struct map$2char$phsClass$ph* __result_obj__136;
    if(    self->len*10>=self->size    ) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_296=string_get_hash_key(((char*)key))%self->size;
    it_297=hash_296;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_297]        ) {
            if(            string_equals(self->keys[it_297],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_297]);
                    (self->keys[it_297] = come_decrement_ref_count(self->keys[it_297], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_297]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_297]);
                    self->keys[it_297]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sClass_finalize, self->items[it_297], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_297]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_297]=item;
                }
                break;
            }
            it_297++;
            if(            it_297>=self->size            ) {
                it_297=0;
            }
            else if(            it_297==hash_296            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_297]=(_Bool)1;
            if(            1            ) {
                self->keys[it_297]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_297]=key;
            }
            if(            1            ) {
                self->items[it_297]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_297]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_314=(_Bool)0;
    for(    it2_315=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_315=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_315,key)        ) {
            same_key_exist_314=(_Bool)1;
        }
    }
    if(    !same_key_exist_314    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__136 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__136;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_279;
void* __right_value353 = (void*)0;
char** keys_280;
void* __right_value354 = (void*)0;
struct sClass** items_281;
void* __right_value355 = (void*)0;
_Bool* item_existance_282;
int len_283;
char* it_286;
struct sClass* default_value_289;
void* __right_value356 = (void*)0;
struct sClass* it2_290;
unsigned int hash_293;
int n_294;
struct sClass* default_value_295;
void* __right_value357 = (void*)0;
default_value_289 = (void*)0;
default_value_295 = (void*)0;
    size_279=self->size*10;
    keys_280=(char**)come_increment_ref_count(((char**)(__right_value353=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_279)), "./comelang.h", 2163, "char**"))));
    items_281=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value354=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_279)), "./comelang.h", 2164, "struct sClass**"))));
    item_existance_282=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value355=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_279)), "./comelang.h", 2165, "_Bool*"))));
    len_283=0;
    for(    it_286=map$2char$phsClass$ph_begin(self)    ;    !map$2char$phsClass$ph_end(self)    ;    it_286=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_289,0,sizeof(struct sClass*));
        it2_290=((struct sClass*)(__right_value356=map$2char$phsClass$ph_at(self,it_286,(struct sClass*)come_increment_ref_count(default_value_289))));
        come_call_finalizer(sClass_finalize, __right_value356, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_293=string_get_hash_key(((char*)it_286))%size_279;
        n_294=hash_293;
        while(        (_Bool)1        ) {
            if(            item_existance_282[n_294]            ) {
                n_294++;
                if(                n_294>=size_279                ) {
                    n_294=0;
                }
                else if(                n_294==hash_293                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_282[n_294]=(_Bool)1;
                keys_280[n_294]=it_286;
                items_281[n_294]=((struct sClass*)(__right_value357=map$2char$phsClass$ph_at(self,it_286,(struct sClass*)come_increment_ref_count(default_value_295))));
                come_call_finalizer(sClass_finalize, __right_value357, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_283++;
                come_call_finalizer(sClass_finalize, default_value_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_280;
    self->items=items_281;
    self->item_existance=item_existance_282;
    self->size=size_279;
    self->len=len_283;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_284;
char* __result_obj__122;
char* __result_obj__123;
char* result_285;
char* __result_obj__124;
result_284 = (void*)0;
result_285 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_284,0,sizeof(char*));
        __result_obj__122 = result_284;
        return __result_obj__122;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__123 = self->key_list->it->item;
        return __result_obj__123;
    }
    memset(&result_285,0,sizeof(char*));
    __result_obj__124 = result_285;
    return __result_obj__124;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_287;
char* __result_obj__125;
char* __result_obj__126;
char* result_288;
char* __result_obj__127;
result_287 = (void*)0;
result_288 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_287,0,sizeof(char*));
        __result_obj__125 = result_287;
        return __result_obj__125;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__126 = self->key_list->it->item;
        return __result_obj__126;
    }
    memset(&result_288,0,sizeof(char*));
    __result_obj__127 = result_288;
    return __result_obj__127;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_291;
unsigned int it_292;
struct sClass* __result_obj__128;
struct sClass* __result_obj__129;
struct sClass* __result_obj__130;
struct sClass* __result_obj__131;
    hash_291=string_get_hash_key(((char*)key))%self->size;
    it_292=hash_291;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_292]        ) {
            if(            string_equals(self->keys[it_292],key)            ) {
                __result_obj__128 = (struct sClass*)come_increment_ref_count(self->items[it_292]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__128;
            }
            it_292++;
            if(            it_292>=self->size            ) {
                it_292=0;
            }
            else if(            it_292==hash_291            ) {
                __result_obj__129 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__129;
            }
        }
        else {
            __result_obj__130 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__130;
        }
    }
    __result_obj__131 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__131;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_298;
struct list_item$1char$ph* it_299;
struct list$1char$ph* __result_obj__135;
    it2_298=0;
    it_299=self->head;
    while(    it_299!=((void*)0)    ) {
        if(        string_equals(it_299->item,item)        ) {
            list$1char$ph_delete(self,it2_298,it2_298+1);
            break;
        }
        it2_298++;
        it_299=it_299->next;
    }
    __result_obj__135 = self;
    return __result_obj__135;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_300;
struct list$1char$ph* __result_obj__132;
struct list_item$1char$ph* it_303;
int i_304;
struct list_item$1char$ph* prev_it_305;
struct list_item$1char$ph* it_306;
int i_307;
struct list_item$1char$ph* prev_it_308;
struct list_item$1char$ph* it_309;
struct list_item$1char$ph* head_prev_it_310;
struct list_item$1char$ph* tail_it_311;
int i_312;
struct list_item$1char$ph* prev_it_313;
struct list$1char$ph* __result_obj__134;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_300=tail;
        tail=head;
        head=tmp_300;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__132 = self;
        return __result_obj__132;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_303=self->head;
        i_304=0;
        while(        it_303!=((void*)0)        ) {
            if(            i_304<tail            ) {
                prev_it_305=it_303;
                it_303=it_303->next;
                i_304++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_304==tail            ) {
                self->head=it_303;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_303=it_303->next;
                i_304++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_306=self->head;
        i_307=0;
        while(        it_306!=((void*)0)        ) {
            if(            i_307==head            ) {
                self->tail=it_306->prev;
                self->tail->next=((void*)0);
            }
            if(            i_307>=head            ) {
                prev_it_308=it_306;
                it_306=it_306->next;
                i_307++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_308, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_306=it_306->next;
                i_307++;
            }
        }
    }
    else {
        it_309=self->head;
        head_prev_it_310=((void*)0);
        tail_it_311=((void*)0);
        i_312=0;
        while(        it_309!=((void*)0)        ) {
            if(            i_312==head            ) {
                head_prev_it_310=it_309->prev;
            }
            if(            i_312==tail            ) {
                tail_it_311=it_309;
            }
            if(            i_312>=head&&i_312<tail            ) {
                prev_it_313=it_309;
                it_309=it_309->next;
                i_312++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_313, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_309=it_309->next;
                i_312++;
            }
        }
        if(        head_prev_it_310!=((void*)0)        ) {
            head_prev_it_310->next=tail_it_311;
        }
        if(        tail_it_311!=((void*)0)        ) {
            tail_it_311->prev=head_prev_it_310;
        }
    }
    __result_obj__134 = self;
    return __result_obj__134;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_301;
struct list_item$1char$ph* prev_it_302;
struct list$1char$ph* __result_obj__133;
    it_301=self->head;
    while(    it_301!=((void*)0)    ) {
        prev_it_302=it_301;
        it_301=it_301->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__133 = self;
    return __result_obj__133;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i_336;
struct list$1sNode$ph* __result_obj__138;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_336=0    ;    i_336<num_value    ;    i_336++    ){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i_336]));
    }
    __result_obj__138 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_338;
int i_339;
struct sType* default_value_340;
struct list$1sType$ph* __result_obj__139;
struct list_item$1sType$ph* it_341;
int i_342;
struct sType* __dec_obj205;
struct list$1sType$ph* __result_obj__140;
default_value_340 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_338=self->len;
        for(        i_339=0        ;        i_339<position-len_338        ;        i_339++        ){
            memset(&default_value_340,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_340));
            come_call_finalizer(sType_finalize, default_value_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__139 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__139;
    }
    it_341=self->head;
    i_342=0;
    while(    it_341!=((void*)0)    ) {
        if(        position==i_342        ) {
            __dec_obj205=it_341->item,
            it_341->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj205,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_341=it_341->next;
        i_342++;
    }
    __result_obj__140 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__140;
}

