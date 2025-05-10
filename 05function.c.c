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
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
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
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
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
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
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
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo* info, int top);
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
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
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
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
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item);
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
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
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sSemicolonNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__1 = (struct sSemicolonNode*)come_increment_ref_count(self);
    come_call_finalizer(sSemicolonNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sSemicolonNode_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__1;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value1 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value1=__builtin_string("sSemicolonNode"))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__2;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value2 = (void*)0;
struct sLambdaNode* __result_obj__3;
    ((struct sNodeBase*)(__right_value2=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value2, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mFun=fun;
    __result_obj__3 = (struct sLambdaNode*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sLambdaNode_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__3;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value3 = (void*)0;
char* __result_obj__4;
    __result_obj__4 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string("sLambdaNode"))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__4 = come_decrement_ref_count(__result_obj__4, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__4;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_0;
int block_level_1;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct CVALUE* come_value_2;
void* __right_value6 = (void*)0;
char* __dec_obj1;
void* __right_value44 = (void*)0;
struct sType* __dec_obj25;
_Bool __result_obj__22;
    come_fun_0=info->come_fun;
    info->come_fun=self->mFun;
    block_level_1=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock    ) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_1;
    come_value_2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*"))));
    __dec_obj1=come_value_2->c_value,
    come_value_2->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj25=come_value_2->type,
    come_value_2->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_2->var=((void*)0);
    add_come_last_code(info,"%s",come_value_2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_2));
    info->come_fun=come_fun_0;
    __result_obj__22 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__22;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__5;
void* __right_value7 = (void*)0;
struct sType* result_9;
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
struct sType* __result_obj__20;
    if(    self==(void*)0    ) {
        __result_obj__5 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__5;
    }
    result_9=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_9->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj2=result_9->mOriginalLoadVarType,
        result_9->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj3=result_9->mChannelType,
        result_9->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj7=result_9->mGenericsTypes,
        result_9->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj8=result_9->mNoSolvedGenericsType,
        result_9->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj9=result_9->mSizeNum,
        result_9->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj10=result_9->mAlignas,
        result_9->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj11=result_9->mTupleName,
        result_9->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj12=result_9->mAttribute,
        result_9->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_9->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_9->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_9->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_9->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_9->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_9->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_9->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_9->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_9->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_9->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_9->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_9->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_9->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_9->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_9->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_9->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_9->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_9->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_9->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_9->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_9->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_9->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_9->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj13=result_9->mAsmName,
        result_9->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_9->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_9->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_9->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj17=result_9->mArrayNum,
        result_9->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_9->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_9->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_9->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_9->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_9->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj18=result_9->mOriginalTypeName,
        result_9->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_9->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_9->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_9->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_9->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj19=result_9->mParamTypes,
        result_9->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj23=result_9->mParamNames,
        result_9->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj24=result_9->mResultType,
        result_9->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_9->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_9->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__20 = (struct sType*)come_increment_ref_count(result_9);
    come_call_finalizer(sType_finalize, result_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__20;
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
struct list_item$1sType$ph* it_3;
struct list_item$1sType$ph* prev_it_4;
    it_3=self->head;
    while(    it_3!=((void*)0)    ) {
        prev_it_4=it_3;
        it_3=it_3->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_5;
struct list_item$1sNode$ph* prev_it_6;
    it_5=self->head;
    while(    it_5!=((void*)0)    ) {
        prev_it_6=it_5;
        it_5=it_5->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_7;
struct list_item$1char$ph* prev_it_8;
    it_7=self->head;
    while(    it_7!=((void*)0)    ) {
        prev_it_8=it_7;
        it_7=it_7->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__6;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* result_10;
struct list_item$1sType$ph* it_11;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct list$1sType$ph* __result_obj__9;
    if(    self==((void*)0)    ) {
        __result_obj__6 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__6;
    }
    result_10=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1633, "struct list$1sType$ph*"))));
    it_11=self->head;
    while(    it_11!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_10,(struct sType*)come_increment_ref_count(sType_clone(it_11->item)));
        }
        else {
            list$1sType$ph_add(result_10,(struct sType*)come_increment_ref_count(sType_clone(it_11->item)));
        }
        it_11=it_11->next;
    }
    __result_obj__9 = (struct list$1sType$ph*)come_increment_ref_count(result_10);
    come_call_finalizer(list$1sType$ph$p_finalize, result_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__9;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__7;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value12 = (void*)0;
struct list_item$1sType$ph* litem_12;
struct sType* __dec_obj4;
void* __right_value13 = (void*)0;
struct list_item$1sType$ph* litem_13;
struct sType* __dec_obj5;
void* __right_value14 = (void*)0;
struct list_item$1sType$ph* litem_14;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__8;
    if(    self->len==0    ) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value12=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1652, "struct list_item$1sType$ph*"))));
        litem_12->prev=((void*)0);
        litem_12->next=((void*)0);
        __dec_obj4=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_12;
        self->head=litem_12;
    }
    else if(    self->len==1    ) {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value13=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1662, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->head;
        litem_13->next=((void*)0);
        __dec_obj5=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_13;
        self->head->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value14=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1672, "struct list_item$1sType$ph*"))));
        litem_14->prev=self->tail;
        litem_14->next=((void*)0);
        __dec_obj6=litem_14->item,
        litem_14->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_14;
        self->tail=litem_14;
    }
    self->len++;
    __result_obj__8 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__8;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_15;
struct list_item$1sType$ph* prev_it_16;
    it_15=self->head;
    while(    it_15!=((void*)0)    ) {
        prev_it_16=it_15;
        it_15=it_15->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__10;
void* __right_value19 = (void*)0;
struct sNode* result_17;
struct sNode* __result_obj__11;
    if(    self==(void*)0    ) {
        __result_obj__10 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__10) ? __result_obj__10 = come_decrement_ref_count(__result_obj__10, ((struct sNode*)__result_obj__10)->finalize, ((struct sNode*)__result_obj__10)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__10;
    }
    result_17=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_17->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_17->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_17->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_17->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_17->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_17->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_17->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_17->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_17->kind=self->kind;
    }
    __result_obj__11 = (struct sNode*)come_increment_ref_count(result_17);
    ((result_17) ? result_17 = come_decrement_ref_count(result_17, ((struct sNode*)result_17)->finalize, ((struct sNode*)result_17)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__11) ? __result_obj__11 = come_decrement_ref_count(__result_obj__11, ((struct sNode*)__result_obj__11)->finalize, ((struct sNode*)__result_obj__11)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__12;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* result_18;
struct list_item$1sNode$ph* it_19;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1sNode$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_18=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1633, "struct list$1sNode$ph*"))));
    it_19=self->head;
    while(    it_19!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_18,(struct sNode*)come_increment_ref_count(sNode_clone(it_19->item)));
        }
        else {
            list$1sNode$ph_add(result_18,(struct sNode*)come_increment_ref_count(sNode_clone(it_19->item)));
        }
        it_19=it_19->next;
    }
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(result_18);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value27 = (void*)0;
struct list_item$1sNode$ph* litem_20;
struct sNode* __dec_obj14;
void* __right_value28 = (void*)0;
struct list_item$1sNode$ph* litem_21;
struct sNode* __dec_obj15;
void* __right_value29 = (void*)0;
struct list_item$1sNode$ph* litem_22;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value27=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1652, "struct list_item$1sNode$ph*"))));
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        __dec_obj14=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_20;
        self->head=litem_20;
    }
    else if(    self->len==1    ) {
        litem_21=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value28=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1662, "struct list_item$1sNode$ph*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        __dec_obj15=litem_21->item,
        litem_21->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value29=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1672, "struct list_item$1sNode$ph*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        __dec_obj16=litem_22->item,
        litem_22->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__14 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__14;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_23;
struct list_item$1sNode$ph* prev_it_24;
    it_23=self->head;
    while(    it_23!=((void*)0)    ) {
        prev_it_24=it_23;
        it_23=it_23->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__16;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1char$ph* result_25;
struct list_item$1char$ph* it_26;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1char$ph* __result_obj__19;
    if(    self==((void*)0)    ) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__16;
    }
    result_25=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1633, "struct list$1char$ph*"))));
    it_26=self->head;
    while(    it_26!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_25,(char*)come_increment_ref_count((char*)come_memdup(it_26->item, "./comelang.h", 1638, "char*")));
        }
        else {
            list$1char$ph_add(result_25,(char*)come_increment_ref_count((char*)come_memdup(it_26->item, "./comelang.h", 1641, "char*")));
        }
        it_26=it_26->next;
    }
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(result_25);
    come_call_finalizer(list$1char$ph$p_finalize, result_25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value37 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj20;
void* __right_value38 = (void*)0;
struct list_item$1char$ph* litem_28;
char* __dec_obj21;
void* __right_value39 = (void*)0;
struct list_item$1char$ph* litem_29;
char* __dec_obj22;
struct list$1char$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value37=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1652, "struct list_item$1char$ph*"))));
        litem_27->prev=((void*)0);
        litem_27->next=((void*)0);
        __dec_obj20=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_27;
        self->head=litem_27;
    }
    else if(    self->len==1    ) {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value38=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1662, "struct list_item$1char$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj21=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value39=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1672, "struct list_item$1char$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj22=litem_29->item,
        litem_29->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__18 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__18;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_30;
struct list_item$1char$ph* prev_it_31;
    it_30=self->head;
    while(    it_30!=((void*)0)    ) {
        prev_it_31=it_30;
        it_30=it_30->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value45 = (void*)0;
struct list_item$1CVALUE$ph* litem_32;
struct CVALUE* __dec_obj26;
void* __right_value46 = (void*)0;
struct list_item$1CVALUE$ph* litem_33;
struct CVALUE* __dec_obj27;
void* __right_value47 = (void*)0;
struct list_item$1CVALUE$ph* litem_34;
struct CVALUE* __dec_obj28;
struct list$1CVALUE$ph* __result_obj__21;
    if(    self->len==0    ) {
        litem_32=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value45=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1722, "struct list_item$1CVALUE$ph*"))));
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        __dec_obj26=litem_32->item,
        litem_32->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1    ) {
        litem_33=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value46=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1732, "struct list_item$1CVALUE$ph*"))));
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        __dec_obj27=litem_33->item,
        litem_33->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value47=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1742, "struct list_item$1CVALUE$ph*"))));
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        __dec_obj28=litem_34->item,
        litem_34->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result_obj__21 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__21;
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

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value48 = (void*)0;
struct sFun* __dec_obj29;
struct sFunNode* __result_obj__23;
    ((struct sNodeBase*)(__right_value48=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj29=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer(sFun_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__23 = (struct sFunNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFunNode_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value49 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value49=__builtin_string("sFunNode"))));
    (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__24;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_35;
int block_level_36;
void* __right_value50 = (void*)0;
    come_fun_35=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock    ) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")        ) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_36=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_36;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2        ) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value50=xsprintf("come_heap_final();\n"))));
            (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    info->come_fun=come_fun_35;
    return (_Bool)1;
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

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)    ) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sBlock* result_37;
int sline_top_38;
int block_level_39;
char* p_saved_40;
int sline_saved_41;
char* sname_saved_42;
void* __right_value53 = (void*)0;
char* __dec_obj30;
char* __dec_obj31;
struct map$2char$phchar$ph* __dec_obj32;
char* p_45;
int sline_46;
void* __right_value54 = (void*)0;
char* sname_47;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
char* module_name_48;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$ph* params_49;
void* __right_value59 = (void*)0;
char* word_50;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
char* __dec_obj33;
void* __right_value63 = (void*)0;
char* __dec_obj34;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value67 = (void*)0;
struct sBlock* __result_obj__33;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct sClassModule* module_57;
void* __right_value71 = (void*)0;
struct sBlock* __result_obj__34;
void* __right_value72 = (void*)0;
void* __right_value78 = (void*)0;
struct map$2char$phchar$ph* __dec_obj36;
int i_63;
struct list$1char$ph* o2_saved_64;
char* it_67;
void* __right_value79 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
char* __dec_obj40;
void* __right_value94 = (void*)0;
struct sNode* node_116;
void* __right_value95 = (void*)0;
char* __dec_obj41;
void* __right_value96 = (void*)0;
struct sBlock* __result_obj__63;
_Bool omit_semicolon_120;
void* __right_value100 = (void*)0;
char* __dec_obj45;
char* head_135;
void* __right_value101 = (void*)0;
struct sNode* value_136;
char* tail_137;
void* __right_value102 = (void*)0;
struct sNode* __dec_obj46;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct sNode* node_139;
void* __right_value105 = (void*)0;
char* __dec_obj47;
struct sNode* node_140;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value110 = (void*)0;
struct sNode* __dec_obj49;
void* __right_value111 = (void*)0;
struct sNode* __dec_obj50;
void* __right_value112 = (void*)0;
struct sBlock* __result_obj__70;
_Bool omit_semicolon_142;
char* p_143;
char* head_144;
void* __right_value113 = (void*)0;
char* source_145;
void* __right_value114 = (void*)0;
struct sNode* node_146;
void* __right_value115 = (void*)0;
struct sBlock* __result_obj__71;
struct sBlock* __result_obj__72;
node_140 = (void*)0;
    result_37=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05function.c", 116, "struct sBlock*"))));
    sline_top_38=info->sline_top;
    info->sline_top=info->sline;
    block_level_39=info->block_level;
    if(    !no_block_level    ) {
        info->block_level++;
    }
    if(    *info->p==123    ) {
        p_saved_40=((void*)0);
        sline_saved_41=0;
        sname_saved_42=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1        ) {
            if(            p_saved_40            ) {
                if(                *info->p==0                ) {
                    info->p=p_saved_40;
                    info->sline=sline_saved_41;
                    __dec_obj30=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_42));
                    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    p_saved_40=((void*)0);
                    sline_saved_41=0;
                    __dec_obj31=sname_saved_42,
                    sname_saved_42=((void*)0);
                    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    __dec_obj32=info->module_params,
                    info->module_params=((void*)0);
                    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_45=info->p;
            sline_46=info->sline;
            sname_47=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123            ) {
                info->sline_top=sline_46;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0            ) {
                ((char*)(__right_value55=parse_word(info)));
                (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                module_name_48=(char*)come_increment_ref_count(parse_word(info));
                params_49=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 172, "struct list$1char$ph*"))));
                if(                *info->p==60                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1                    ) {
                        word_50=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_49,(char*)come_increment_ref_count(word_50));
                        if(                        *info->p==44                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value60=err_msg(info,"invalid source end")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        else if(                        *info->p==62                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_50 = come_decrement_ref_count(word_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value61=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        (word_50 = come_decrement_ref_count(word_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                if(                *info->p==59                ) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_40=info->p;
                sline_saved_41=info->sline;
                __dec_obj33=sname_saved_42,
                sname_saved_42=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj34=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_48));
                __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->sline=0;
                if(                (_condtional_value_X1=(((struct sClassModule*)(__right_value66=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value65=__builtin_string(module_name_48))))))==((void*)0))),                (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                come_call_finalizer(sClassModule_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X1                ) {
                    ((struct tuple2$2int$bool$*)(__right_value67=err_msg(info,"module not found")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value67, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__33 = (void*)come_increment_ref_count(((void*)0));
                    (module_name_48 = come_decrement_ref_count(module_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sBlock_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__33;
                }
                module_57=((struct sClassModule*)(__right_value70=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value69=__builtin_string(module_name_48))))));
                (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value70, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                list$1char$ph_length(module_57->mParams)!=list$1char$ph_length(params_49)                ) {
                    ((struct tuple2$2int$bool$*)(__right_value71=err_msg(info,"invalid parametor number")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__34 = (void*)come_increment_ref_count(((void*)0));
                    (module_name_48 = come_decrement_ref_count(module_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sBlock_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__34;
                }
                __dec_obj36=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 226, "struct map$2char$phchar$ph*"))));
                come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                i_63=0;
                for(                o2_saved_64=(struct list$1char$ph*)come_increment_ref_count((module_57->mParams)),it_67=list$1char$ph_begin((o2_saved_64))                ;                !list$1char$ph_end((o2_saved_64))                ;                it_67=list$1char$ph_next((o2_saved_64))                ){
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_67)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value91=list$1char$ph_operator_load_element(params_49,i_63))))));
                    (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    i_63++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                info->p=module_57->mText;
                info->sline=module_57->mSLine;
                __dec_obj40=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_57->mSName));
                __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (module_name_48 = come_decrement_ref_count(module_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, params_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            node_116=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj41=info->sname,
            info->sname=(char*)come_increment_ref_count(node_116->sname(node_116->_protocol_obj));
            __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->sline=node_116->sline(node_116->_protocol_obj);
            if(            node_116==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value96=err_msg(info,"Invalid expression")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value96, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__63 = (void*)come_increment_ref_count(((void*)0));
                (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sBlock_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__63;
            }
            list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_116));
            parse_sharp_v5(info);
            if(            node_116->terminated(node_116->_protocol_obj)            ) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_120=(_Bool)1;
            if(            node_116->terminated(node_116->_protocol_obj)            ) {
                omit_semicolon_120=(_Bool)0;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_120=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                result_37->mOmitSemicolon=omit_semicolon_120;
                if(                omit_semicolon_120&&in_function                ) {
                    list$1sNode$ph_delete(result_37->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_45;
                    info->sline=sline_46;
                    __dec_obj45=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_47));
                    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    head_135=info->p;
                    value_136=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_137=info->p;
                    __dec_obj46=value_136,
                    value_136=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_136),info));
                    (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                    char buf_138[tail_137-head_135+1];
                    memset(&buf_138, 0, sizeof(char)                    *(tail_137-head_135+1)                    );
                    memcpy(buf_138,head_135,tail_137-head_135);
                    buf_138[tail_137-head_135]=0;
                    expected_next_character(125,info);
                    node_139=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_136),(char*)come_increment_ref_count(__builtin_string(buf_138)),info));
                    list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_139));
                    ((value_136) ? value_136 = come_decrement_ref_count(value_136, ((struct sNode*)value_136)->finalize, ((struct sNode*)value_136)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    break;
                    ((value_136) ? value_136 = come_decrement_ref_count(value_136, ((struct sNode*)value_136)->finalize, ((struct sNode*)value_136)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    break;
                }
            }
            (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        if(        p_saved_40        ) {
            if(            info->p==0            ) {
                info->p=p_saved_40;
                info->sline=sline_saved_41;
                __dec_obj47=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_42));
                __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                p_saved_40=((void*)0);
                sline_saved_41=0;
            }
        }
        (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 329, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value107=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 329, "struct sSemicolonNode*")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj49=node_140,
            node_140=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sSemicolonNode_finalize, __right_value107, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_140));
        }
        else {
            __dec_obj50=node_140,
            node_140=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            parse_sharp_v5(info);
            if(            node_140==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value112=err_msg(info,"Invalid expression")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value112, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__70 = (void*)come_increment_ref_count(((void*)0));
                ((node_140) ? node_140 = come_decrement_ref_count(node_140, ((struct sNode*)node_140)->finalize, ((struct sNode*)node_140)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sBlock_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__70;
            }
            parse_sharp_v5(info);
            if(            node_140->terminated(node_140->_protocol_obj)            ) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_142=(_Bool)1;
            if(            node_140->terminated(node_140->_protocol_obj)            ) {
                omit_semicolon_142=(_Bool)0;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_142=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_37->mOmitSemicolon=omit_semicolon_142;
            list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_140));
        }
        ((node_140) ? node_140 = come_decrement_ref_count(node_140, ((struct sNode*)node_140)->finalize, ((struct sNode*)node_140)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    return_self_at_last    ) {
        p_143=info->p;
        head_144=info->head;
        source_145=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_145;
        info->head=source_145;
        node_146=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_146==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value115=err_msg(info,"Invalid expression")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value115, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__71 = (void*)come_increment_ref_count(((void*)0));
            (source_145 = come_decrement_ref_count(source_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_146) ? node_146 = come_decrement_ref_count(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__71;
        }
        list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_146));
        info->p=p_143;
        info->head=head_144;
        (source_145 = come_decrement_ref_count(source_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_146) ? node_146 = come_decrement_ref_count(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    info->block_level=block_level_39;
    __result_obj__72 = (struct sBlock*)come_increment_ref_count(result_37);
    come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_43;
int i_44;
    for(    i_43=0    ;    i_43<self->size    ;    i_43++    ){
        if(        self->item_existance[i_43]        ) {
            if(            1            ) {
                (self->items[i_43] = come_decrement_ref_count(self->items[i_43], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_44=0    ;    i_44<self->size    ;    i_44++    ){
        if(        self->item_existance[i_44]        ) {
            if(            1            ) {
                (self->keys[i_44] = come_decrement_ref_count(self->keys[i_44], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_51;
unsigned int hash_52;
unsigned int it_53;
struct sClassModule* __result_obj__25;
struct sClassModule* __result_obj__26;
struct sClassModule* __result_obj__27;
struct sClassModule* __result_obj__28;
default_value_51 = (void*)0;
    memset(&default_value_51,0,sizeof(struct sClassModule*));
    hash_52=string_get_hash_key(((char*)key))%self->size;
    it_53=hash_52;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_53]        ) {
            if(            string_equals(self->keys[it_53],key)            ) {
                __result_obj__25 = (struct sClassModule*)come_increment_ref_count(self->items[it_53]);
                come_call_finalizer(sClassModule_finalize, default_value_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__25;
            }
            it_53++;
            if(            it_53>=self->size            ) {
                it_53=0;
            }
            else if(            it_53==hash_52            ) {
                __result_obj__26 = (struct sClassModule*)come_increment_ref_count(default_value_51);
                come_call_finalizer(sClassModule_finalize, default_value_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sClassModule*)come_increment_ref_count(default_value_51);
            come_call_finalizer(sClassModule_finalize, default_value_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sClassModule*)come_increment_ref_count(default_value_51);
    come_call_finalizer(sClassModule_finalize, default_value_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
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

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_54;
unsigned int hash_55;
unsigned int it_56;
struct sClassModule* __result_obj__29;
struct sClassModule* __result_obj__30;
struct sClassModule* __result_obj__31;
struct sClassModule* __result_obj__32;
default_value_54 = (void*)0;
    memset(&default_value_54,0,sizeof(struct sClassModule*));
    hash_55=string_get_hash_key(((char*)key))%self->size;
    it_56=hash_55;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_56]        ) {
            if(            string_equals(self->keys[it_56],key)            ) {
                __result_obj__29 = (struct sClassModule*)come_increment_ref_count(self->items[it_56]);
                come_call_finalizer(sClassModule_finalize, default_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__29;
            }
            it_56++;
            if(            it_56>=self->size            ) {
                it_56=0;
            }
            else if(            it_56==hash_55            ) {
                __result_obj__30 = (struct sClassModule*)come_increment_ref_count(default_value_54);
                come_call_finalizer(sClassModule_finalize, default_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__30;
            }
        }
        else {
            __result_obj__31 = (struct sClassModule*)come_increment_ref_count(default_value_54);
            come_call_finalizer(sClassModule_finalize, default_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__31;
        }
    }
    __result_obj__32 = (struct sClassModule*)come_increment_ref_count(default_value_54);
    come_call_finalizer(sClassModule_finalize, default_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
int i_58;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1char$ph* __dec_obj35;
struct map$2char$phchar$ph* __result_obj__36;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value73=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 2520, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value74=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 2521, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value75=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2522, "_Bool*"))));
    for(    i_58=0    ;    i_58<128    ;    i_58++    ){
        self->item_existance[i_58]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj35=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2532, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__36 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__36;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__35;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__35 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__35;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_59;
struct list_item$1char$p* prev_it_60;
    it_59=self->head;
    while(    it_59!=((void*)0)    ) {
        prev_it_60=it_59;
        it_59=it_59->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_61;
int i_62;
    for(    i_61=0    ;    i_61<self->size    ;    i_61++    ){
        if(        self->item_existance[i_61]        ) {
            if(            1            ) {
                (self->items[i_61] = come_decrement_ref_count(self->items[i_61], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_62=0    ;    i_62<self->size    ;    i_62++    ){
        if(        self->item_existance[i_62]        ) {
            if(            1            ) {
                (self->keys[i_62] = come_decrement_ref_count(self->keys[i_62], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_65;
char* __result_obj__37;
char* __result_obj__38;
char* result_66;
char* __result_obj__39;
result_65 = (void*)0;
result_66 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_65,0,sizeof(char*));
        __result_obj__37 = result_65;
        return __result_obj__37;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_66,0,sizeof(char*));
    __result_obj__39 = result_66;
    return __result_obj__39;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_68;
char* __result_obj__40;
char* __result_obj__41;
char* result_69;
char* __result_obj__42;
result_68 = (void*)0;
result_69 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_68,0,sizeof(char*));
        __result_obj__40 = result_68;
        return __result_obj__40;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__41 = self->it->item;
        return __result_obj__41;
    }
    memset(&result_69,0,sizeof(char*));
    __result_obj__42 = result_69;
    return __result_obj__42;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_87;
unsigned int it_88;
_Bool same_key_exist_105;
char* it2_106;
struct map$2char$phchar$ph* __result_obj__58;
    if(    self->len*10>=self->size    ) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_87=string_get_hash_key(((char*)key))%self->size;
    it_88=hash_87;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_88]        ) {
            if(            string_equals(self->keys[it_88],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_88]);
                    (self->keys[it_88] = come_decrement_ref_count(self->keys[it_88], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_88]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_88]);
                    self->keys[it_88]=key;
                }
                if(                1                ) {
                    (self->items[it_88] = come_decrement_ref_count(self->items[it_88], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->items[it_88]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_88]=item;
                }
                break;
            }
            it_88++;
            if(            it_88>=self->size            ) {
                it_88=0;
            }
            else if(            it_88==hash_87            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_88]=(_Bool)1;
            if(            1            ) {
                self->keys[it_88]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_88]=key;
            }
            if(            1            ) {
                self->items[it_88]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_88]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_105=(_Bool)0;
    for(    it2_106=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_106=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_106,key)        ) {
            same_key_exist_105=(_Bool)1;
        }
    }
    if(    !same_key_exist_105    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__58 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__58;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_70;
void* __right_value80 = (void*)0;
char** keys_71;
void* __right_value81 = (void*)0;
char** items_72;
void* __right_value82 = (void*)0;
_Bool* item_existance_73;
int len_74;
char* it_77;
char* default_value_80;
void* __right_value83 = (void*)0;
char* it2_81;
unsigned int hash_84;
int n_85;
char* default_value_86;
void* __right_value84 = (void*)0;
default_value_80 = (void*)0;
default_value_86 = (void*)0;
    size_70=self->size*10;
    keys_71=(char**)come_increment_ref_count(((char**)(__right_value80=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_70)), "./comelang.h", 2759, "char**"))));
    items_72=(char**)come_increment_ref_count(((char**)(__right_value81=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_70)), "./comelang.h", 2760, "char**"))));
    item_existance_73=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value82=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_70)), "./comelang.h", 2761, "_Bool*"))));
    len_74=0;
    for(    it_77=map$2char$phchar$ph_begin(self)    ;    !map$2char$phchar$ph_end(self)    ;    it_77=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_80,0,sizeof(char*));
        it2_81=((char*)(__right_value83=map$2char$phchar$ph_at(self,it_77,(char*)come_increment_ref_count(default_value_80))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        hash_84=string_get_hash_key(((char*)it_77))%size_70;
        n_85=hash_84;
        while(        (_Bool)1        ) {
            if(            item_existance_73[n_85]            ) {
                n_85++;
                if(                n_85>=size_70                ) {
                    n_85=0;
                }
                else if(                n_85==hash_84                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_73[n_85]=(_Bool)1;
                keys_71[n_85]=it_77;
                items_72[n_85]=((char*)(__right_value84=map$2char$phchar$ph_at(self,it_77,(char*)come_increment_ref_count(default_value_86))));
                (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                len_74++;
                (default_value_86 = come_decrement_ref_count(default_value_86, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
                (default_value_86 = come_decrement_ref_count(default_value_86, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (default_value_80 = come_decrement_ref_count(default_value_80, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_71;
    self->items=items_72;
    self->item_existance=item_existance_73;
    self->size=size_70;
    self->len=len_74;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_75;
char* __result_obj__43;
char* __result_obj__44;
char* result_76;
char* __result_obj__45;
result_75 = (void*)0;
result_76 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_75,0,sizeof(char*));
        __result_obj__43 = result_75;
        return __result_obj__43;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__44 = self->key_list->it->item;
        return __result_obj__44;
    }
    memset(&result_76,0,sizeof(char*));
    __result_obj__45 = result_76;
    return __result_obj__45;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_78;
char* __result_obj__46;
char* __result_obj__47;
char* result_79;
char* __result_obj__48;
result_78 = (void*)0;
result_79 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_78,0,sizeof(char*));
        __result_obj__46 = result_78;
        return __result_obj__46;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__47 = self->key_list->it->item;
        return __result_obj__47;
    }
    memset(&result_79,0,sizeof(char*));
    __result_obj__48 = result_79;
    return __result_obj__48;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_82;
unsigned int it_83;
char* __result_obj__49;
char* __result_obj__50;
char* __result_obj__51;
char* __result_obj__52;
    hash_82=string_get_hash_key(((char*)key))%self->size;
    it_83=hash_82;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_83]        ) {
            if(            string_equals(self->keys[it_83],key)            ) {
                __result_obj__49 = (char*)come_increment_ref_count(self->items[it_83]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__49;
            }
            it_83++;
            if(            it_83>=self->size            ) {
                it_83=0;
            }
            else if(            it_83==hash_82            ) {
                __result_obj__50 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__50;
            }
        }
        else {
            __result_obj__51 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__51;
        }
    }
    __result_obj__52 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__52;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_89;
struct list_item$1char$ph* it_90;
struct list$1char$ph* __result_obj__56;
    it2_89=0;
    it_90=self->head;
    while(    it_90!=((void*)0)    ) {
        if(        string_equals(it_90->item,item)        ) {
            list$1char$ph_delete(self,it2_89,it2_89+1);
            break;
        }
        it2_89++;
        it_90=it_90->next;
    }
    __result_obj__56 = self;
    return __result_obj__56;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_91;
struct list$1char$ph* __result_obj__53;
struct list_item$1char$ph* it_94;
int i_95;
struct list_item$1char$ph* prev_it_96;
struct list_item$1char$ph* it_97;
int i_98;
struct list_item$1char$ph* prev_it_99;
struct list_item$1char$ph* it_100;
struct list_item$1char$ph* head_prev_it_101;
struct list_item$1char$ph* tail_it_102;
int i_103;
struct list_item$1char$ph* prev_it_104;
struct list$1char$ph* __result_obj__55;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_91=tail;
        tail=head;
        head=tmp_91;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__53 = self;
        return __result_obj__53;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_94=self->head;
        i_95=0;
        while(        it_94!=((void*)0)        ) {
            if(            i_95<tail            ) {
                prev_it_96=it_94;
                it_94=it_94->next;
                i_95++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_95==tail            ) {
                self->head=it_94;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_94=it_94->next;
                i_95++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_97=self->head;
        i_98=0;
        while(        it_97!=((void*)0)        ) {
            if(            i_98==head            ) {
                self->tail=it_97->prev;
                self->tail->next=((void*)0);
            }
            if(            i_98>=head            ) {
                prev_it_99=it_97;
                it_97=it_97->next;
                i_98++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_97=it_97->next;
                i_98++;
            }
        }
    }
    else {
        it_100=self->head;
        head_prev_it_101=((void*)0);
        tail_it_102=((void*)0);
        i_103=0;
        while(        it_100!=((void*)0)        ) {
            if(            i_103==head            ) {
                head_prev_it_101=it_100->prev;
            }
            if(            i_103==tail            ) {
                tail_it_102=it_100;
            }
            if(            i_103>=head&&i_103<tail            ) {
                prev_it_104=it_100;
                it_100=it_100->next;
                i_103++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_100=it_100->next;
                i_103++;
            }
        }
        if(        head_prev_it_101!=((void*)0)        ) {
            head_prev_it_101->next=tail_it_102;
        }
        if(        tail_it_102!=((void*)0)        ) {
            tail_it_102->prev=head_prev_it_101;
        }
    }
    __result_obj__55 = self;
    return __result_obj__55;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_92;
struct list_item$1char$ph* prev_it_93;
struct list$1char$ph* __result_obj__54;
    it_92=self->head;
    while(    it_92!=((void*)0)    ) {
        prev_it_93=it_92;
        it_92=it_92->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value85 = (void*)0;
struct list_item$1char$ph* litem_107;
char* __dec_obj37;
void* __right_value86 = (void*)0;
struct list_item$1char$ph* litem_108;
char* __dec_obj38;
void* __right_value87 = (void*)0;
struct list_item$1char$ph* litem_109;
char* __dec_obj39;
struct list$1char$ph* __result_obj__57;
    if(    self->len==0    ) {
        litem_107=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value85=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1722, "struct list_item$1char$ph*"))));
        litem_107->prev=((void*)0);
        litem_107->next=((void*)0);
        __dec_obj37=litem_107->item,
        litem_107->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_107;
        self->head=litem_107;
    }
    else if(    self->len==1    ) {
        litem_108=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value86=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1732, "struct list_item$1char$ph*"))));
        litem_108->prev=self->head;
        litem_108->next=((void*)0);
        __dec_obj38=litem_108->item,
        litem_108->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_108;
        self->head->next=litem_108;
    }
    else {
        litem_109=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value87=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1742, "struct list_item$1char$ph*"))));
        litem_109->prev=self->tail;
        litem_109->next=((void*)0);
        __dec_obj39=litem_109->item,
        litem_109->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_109;
        self->tail=litem_109;
    }
    self->len++;
    __result_obj__57 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__57;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_110;
int i_111;
char* __result_obj__59;
char* default_value_112;
char* __result_obj__60;
default_value_112 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_110=self->head;
    i_111=0;
    while(    it_110!=((void*)0)    ) {
        if(        position==i_111        ) {
            __result_obj__59 = (char*)come_increment_ref_count(it_110->item);
            (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__59;
        }
        it_110=it_110->next;
        i_111++;
    }
    memset(&default_value_112,0,sizeof(char*));
    __result_obj__60 = (char*)come_increment_ref_count(default_value_112);
    (default_value_112 = come_decrement_ref_count(default_value_112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__60;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_113;
int i_114;
char* __result_obj__61;
char* default_value_115;
char* __result_obj__62;
default_value_115 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_113=self->head;
    i_114=0;
    while(    it_113!=((void*)0)    ) {
        if(        position==i_114        ) {
            __result_obj__61 = (char*)come_increment_ref_count(it_113->item);
            (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__61;
        }
        it_113=it_113->next;
        i_114++;
    }
    memset(&default_value_115,0,sizeof(char*));
    __result_obj__62 = (char*)come_increment_ref_count(default_value_115);
    (default_value_115 = come_decrement_ref_count(default_value_115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__62;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value97 = (void*)0;
struct list_item$1sNode$ph* litem_117;
struct sNode* __dec_obj42;
void* __right_value98 = (void*)0;
struct list_item$1sNode$ph* litem_118;
struct sNode* __dec_obj43;
void* __right_value99 = (void*)0;
struct list_item$1sNode$ph* litem_119;
struct sNode* __dec_obj44;
struct list$1sNode$ph* __result_obj__64;
    if(    self->len==0    ) {
        litem_117=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value97=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1722, "struct list_item$1sNode$ph*"))));
        litem_117->prev=((void*)0);
        litem_117->next=((void*)0);
        __dec_obj42=litem_117->item,
        litem_117->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_117;
        self->head=litem_117;
    }
    else if(    self->len==1    ) {
        litem_118=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value98=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1732, "struct list_item$1sNode$ph*"))));
        litem_118->prev=self->head;
        litem_118->next=((void*)0);
        __dec_obj43=litem_118->item,
        litem_118->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_118;
        self->head->next=litem_118;
    }
    else {
        litem_119=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value99=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1742, "struct list_item$1sNode$ph*"))));
        litem_119->prev=self->tail;
        litem_119->next=((void*)0);
        __dec_obj44=litem_119->item,
        litem_119->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_119;
        self->tail=litem_119;
    }
    self->len++;
    __result_obj__64 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__64;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_121;
struct list$1sNode$ph* __result_obj__65;
struct list_item$1sNode$ph* it_124;
int i_125;
struct list_item$1sNode$ph* prev_it_126;
struct list_item$1sNode$ph* it_127;
int i_128;
struct list_item$1sNode$ph* prev_it_129;
struct list_item$1sNode$ph* it_130;
struct list_item$1sNode$ph* head_prev_it_131;
struct list_item$1sNode$ph* tail_it_132;
int i_133;
struct list_item$1sNode$ph* prev_it_134;
struct list$1sNode$ph* __result_obj__67;
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
        __result_obj__65 = self;
        return __result_obj__65;
    }
    if(    head==0&&tail==self->len    ) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0    ) {
        it_124=self->head;
        i_125=0;
        while(        it_124!=((void*)0)        ) {
            if(            i_125<tail            ) {
                prev_it_126=it_124;
                it_124=it_124->next;
                i_125++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
    __result_obj__67 = self;
    return __result_obj__67;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_122;
struct list_item$1sNode$ph* prev_it_123;
struct list$1sNode$ph* __result_obj__66;
    it_122=self->head;
    while(    it_122!=((void*)0)    ) {
        prev_it_123=it_122;
        it_122=it_122->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__68;
void* __right_value108 = (void*)0;
struct sSemicolonNode* result_141;
void* __right_value109 = (void*)0;
char* __dec_obj48;
struct sSemicolonNode* __result_obj__69;
    if(    self==(void*)0    ) {
        __result_obj__68 = (void*)0;
        return __result_obj__68;
    }
    result_141=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(    self!=((void*)0)    ) {
        result_141->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj48=result_141->sname,
        result_141->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSemicolonNode_clone", 5, "char*"));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_141->sline_real=self->sline_real;
    }
    __result_obj__69 = result_141;
    come_call_finalizer(sSemicolonNode_finalize, result_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_147;
struct sVarTable* old_table_148;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct sVarTable* __dec_obj51;
struct sVarTable* current_loop_vtable_149;
int i_150;
struct list$1char$ph* o2_saved_151;
char* name_152;
void* __right_value118 = (void*)0;
struct sType* type_153;
void* __right_value119 = (void*)0;
int block_level_160;
int i_161;
struct list$1sNode$ph* o2_saved_162;
struct sNode* node_165;
struct list$1sRightValueObject$ph* right_value_objects_168;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
int stack_num_before_173;
int sline_174;
void* __right_value122 = (void*)0;
char* sname_175;
void* __right_value123 = (void*)0;
char* __dec_obj55;
_Bool Value_176;
void* __right_value124 = (void*)0;
struct CVALUE* come_value_177;
void* __right_value130 = (void*)0;
struct CVALUE* come_value2_178;
void* __right_value131 = (void*)0;
char* __dec_obj60;
void* __right_value132 = (void*)0;
struct CVALUE* come_value2_180;
struct sVar* var__181;
void* __right_value133 = (void*)0;
struct CVALUE* come_value3_182;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct sType* __dec_obj61;
void* __right_value136 = (void*)0;
char* c_value_183;
void* __right_value137 = (void*)0;
char* __dec_obj62;
void* __right_value138 = (void*)0;
char* __dec_obj63;
void* __right_value139 = (void*)0;
char* __dec_obj64;
_Bool Value_184;
void* __right_value140 = (void*)0;
char* __dec_obj65;
struct list$1sRightValueObject$ph* __dec_obj66;
void* __if_result__0_187 = (void*)0;
struct list$1sVar$ph* o2_saved_188;
struct sVar* it_191;
void* __right_value141 = (void*)0;
struct list$1sVar$ph* __dec_obj67;
memset(&i_150, 0, sizeof(int));
memset(&i_161, 0, sizeof(int));
    if(    info->output_header_file    ) {
        return 0;
    }
    inhibits_output_code_147=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_148=info->lv_table;
    if(    !no_var_table    ) {
        __dec_obj51=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "05function.c", 403, "struct sVarTable*")),(_Bool)0,old_table_148));
        come_call_finalizer(sVarTable_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_149=info->current_loop_vtable;
    if(    loop_block    ) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names    ) {
        for(        o2_saved_151=(param_names),name_152=list$1char$ph_begin((o2_saved_151))        ;        !list$1char$ph_end((o2_saved_151))        ;        name_152=list$1char$ph_next((o2_saved_151))        ){
            type_153=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i_150));
            type_153->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_152,(struct sType*)come_increment_ref_count(sType_clone(type_153)),info,(_Bool)1,(_Bool)0);
            i_150++;
            come_call_finalizer(sType_finalize, type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    block_level_160=info->block_level;
    if(    !no_var_table    ) {
        info->block_level++;
    }
    if(    list$1sNode$ph_length(block->mNodes)==0    ) {
    }
    else {
        for(        o2_saved_162=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_165=list$1sNode$ph_begin((o2_saved_162))        ;        !list$1sNode$ph_end((o2_saved_162))        ;        node_165=list$1sNode$ph_next((o2_saved_162))        ){
            right_value_objects_168=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj52=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 433, "struct list$1sRightValueObject$ph*"))));
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj53=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj54=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            stack_num_before_173=list$1CVALUE$ph_length(info->stack);
            sline_174=info->sline;
            sname_175=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_165->sline(node_165->_protocol_obj);
            __dec_obj55=info->sname,
            info->sname=(char*)come_increment_ref_count(node_165->sname(node_165->_protocol_obj));
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(            i_161==list$1sNode$ph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon            ) {
                Value_176=node_compile(node_165,info);
                if(                !Value_176                ) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph_length(info->stack)==stack_num_before_173+1                ) {
                    come_value_177=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_177->type->mClass->mName,"void")&&come_value_177->type->mPointerNum==0                    ) {
                        come_value2_178=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_177));
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_178));
                        __dec_obj60=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_178->c_value));
                        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, come_value2_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    else {
                        come_value2_180=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_177));
                        var__181=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__181                        ) {
                            come_value3_182=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 468, "struct CVALUE*"));
                            if(                            var__181->mType->mClass=="void"&&var__181->mType->mPointerNum==1                            ) {
                                check_assign_type("invalid if result value",var__181->mType,((struct sType*)(__right_value134=sType_clone(come_value_177->type))),come_value3_182,(_Bool)0,(_Bool)1,(_Bool)1,info);
                                come_call_finalizer(sType_finalize, __right_value134, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            }
                            __dec_obj61=var__181->mType,
                            var__181->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_177->type));
                            come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                            if(                            come_value_177->type->mHeap                            ) {
                                c_value_183=(char*)come_increment_ref_count(increment_ref_count_object(come_value_177->type,come_value_177->c_value,info));
                                __dec_obj62=come_value2_180->c_value,
                                come_value2_180->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__181->mCValueName,c_value_183));
                                __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                                (c_value_183 = come_decrement_ref_count(c_value_183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            }
                            else {
                                __dec_obj63=come_value2_180->c_value,
                                come_value2_180->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__181->mCValueName,come_value_177->c_value));
                                __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            }
                            come_call_finalizer(CVALUE_finalize, come_value3_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_180));
                        __dec_obj64=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_180->c_value));
                        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, come_value2_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    come_call_finalizer(CVALUE_finalize, come_value_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            else {
                Value_184=node_compile(node_165,info);
                if(                !Value_184                ) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_174;
            __dec_obj65=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_175));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(            comma            ) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_173);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects            ) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj66=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_168);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            i_161++;
            come_call_finalizer(list$1sRightValueObject$ph$p_finalize, right_value_objects_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (sname_175 = come_decrement_ref_count(sname_175, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code    ) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_160==0        ) {
            for(            o2_saved_188=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_191=list$1sVar$ph_begin((o2_saved_188))            ;            !list$1sVar$ph_end((o2_saved_188))            ;            it_191=list$1sVar$ph_next((o2_saved_188))            ){
                free_object((struct sType*)come_increment_ref_count(sType_clone(it_191->mType)),it_191->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj67=info->match_it_var,
            __if_result__0_187=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sVar$ph$p_finalize, __if_result__0_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->lv_table=old_table_148;
    info->block_level=block_level_160;
    if(    string_operator_equals(info->come_fun->mName,"main")    ) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_149;
    info->inhibits_output_code=inhibits_output_code_147;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_154;
int i_155;
struct sType* __result_obj__73;
struct sType* default_value_156;
struct sType* __result_obj__74;
default_value_156 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_154=self->head;
    i_155=0;
    while(    it_154!=((void*)0)    ) {
        if(        position==i_155        ) {
            __result_obj__73 = (struct sType*)come_increment_ref_count(it_154->item);
            come_call_finalizer(sType_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__73;
        }
        it_154=it_154->next;
        i_155++;
    }
    memset(&default_value_156,0,sizeof(struct sType*));
    __result_obj__74 = (struct sType*)come_increment_ref_count(default_value_156);
    come_call_finalizer(sType_finalize, default_value_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_157;
int i_158;
struct sType* __result_obj__75;
struct sType* default_value_159;
struct sType* __result_obj__76;
default_value_159 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_157=self->head;
    i_158=0;
    while(    it_157!=((void*)0)    ) {
        if(        position==i_158        ) {
            __result_obj__75 = (struct sType*)come_increment_ref_count(it_157->item);
            come_call_finalizer(sType_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__75;
        }
        it_157=it_157->next;
        i_158++;
    }
    memset(&default_value_159,0,sizeof(struct sType*));
    __result_obj__76 = (struct sType*)come_increment_ref_count(default_value_159);
    come_call_finalizer(sType_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_163;
struct sNode* __result_obj__77;
struct sNode* __result_obj__78;
struct sNode* result_164;
struct sNode* __result_obj__79;
result_163 = (void*)0;
result_164 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_163,0,sizeof(struct sNode*));
        __result_obj__77 = result_163;
        return __result_obj__77;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__78 = self->it->item;
        return __result_obj__78;
    }
    memset(&result_164,0,sizeof(struct sNode*));
    __result_obj__79 = result_164;
    return __result_obj__79;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_166;
struct sNode* __result_obj__80;
struct sNode* __result_obj__81;
struct sNode* result_167;
struct sNode* __result_obj__82;
result_166 = (void*)0;
result_167 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_166,0,sizeof(struct sNode*));
        __result_obj__80 = result_166;
        return __result_obj__80;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__81 = self->it->item;
        return __result_obj__81;
    }
    memset(&result_167,0,sizeof(struct sNode*));
    __result_obj__82 = result_167;
    return __result_obj__82;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__83 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_169;
struct list_item$1sRightValueObject$ph* prev_it_170;
    it_169=self->head;
    while(    it_169!=((void*)0)    ) {
        prev_it_170=it_169;
        it_169=it_169->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct list_item$1sRightValueObject$ph* it_171;
struct list_item$1sRightValueObject$ph* prev_it_172;
    it_171=self->head;
    while(    it_171!=((void*)0)    ) {
        prev_it_172=it_171;
        it_171=it_171->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__84;
void* __right_value125 = (void*)0;
struct CVALUE* result_179;
void* __right_value126 = (void*)0;
char* __dec_obj56;
void* __right_value127 = (void*)0;
struct sType* __dec_obj57;
void* __right_value128 = (void*)0;
char* __dec_obj58;
void* __right_value129 = (void*)0;
char* __dec_obj59;
struct CVALUE* __result_obj__85;
    if(    self==(void*)0    ) {
        __result_obj__84 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__84;
    }
    result_179=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        __dec_obj56=result_179->c_value,
        result_179->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj57=result_179->type,
        result_179->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_179->var=self->var;
    }
    if(    self!=((void*)0)    ) {
        result_179->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        __dec_obj58=result_179->c_value_without_right_value_objects,
        result_179->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        __dec_obj59=result_179->c_value_without_cast_object_value,
        result_179->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__85 = (struct CVALUE*)come_increment_ref_count(result_179);
    come_call_finalizer(CVALUE_finalize, result_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_185;
struct list_item$1sRightValueObject$ph* prev_it_186;
struct list$1sRightValueObject$ph* __result_obj__86;
    it_185=self->head;
    while(    it_185!=((void*)0)    ) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__86 = self;
    return __result_obj__86;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_189;
struct sVar* __result_obj__87;
struct sVar* __result_obj__88;
struct sVar* result_190;
struct sVar* __result_obj__89;
result_189 = (void*)0;
result_190 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_189,0,sizeof(struct sVar*));
        __result_obj__87 = result_189;
        return __result_obj__87;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__88 = self->it->item;
        return __result_obj__88;
    }
    memset(&result_190,0,sizeof(struct sVar*));
    __result_obj__89 = result_190;
    return __result_obj__89;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_192;
struct sVar* __result_obj__90;
struct sVar* __result_obj__91;
struct sVar* result_193;
struct sVar* __result_obj__92;
result_192 = (void*)0;
result_193 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_192,0,sizeof(struct sVar*));
        __result_obj__90 = result_192;
        return __result_obj__90;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__91 = self->it->item;
        return __result_obj__91;
    }
    memset(&result_193,0,sizeof(struct sVar*));
    __result_obj__92 = result_193;
    return __result_obj__92;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_194;
struct list_item$1sVar$ph* prev_it_195;
    it_194=self->head;
    while(    it_194!=((void*)0)    ) {
        prev_it_195=it_194;
        it_194=it_194->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_196;
struct list_item$1sVar$ph* prev_it_197;
    it_196=self->head;
    while(    it_196!=((void*)0)    ) {
        prev_it_197=it_196;
        it_196=it_196->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUE$ph_length(info->stack)>top    ) {
        dec_stack_ptr(list$1CVALUE$ph_length(info->stack)-top,info);
    }
    if(    list$1CVALUE$ph_length(info->stack)<top    ) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph_length(info->stack),top);
        exit(2);
    }
}

char* skip_block(struct sInfo* info, _Bool return_self_at_last){
char* head_198;
_Bool dquort_199;
_Bool squort_200;
int sline_201;
int nest_202;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
char* tail_203;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct buffer* buf_204;
void* __right_value152 = (void*)0;
char* __result_obj__93;
    head_198=info->p;
    if(    *info->p==123    ) {
        info->p++;
        dquort_199=(_Bool)0;
        squort_200=(_Bool)0;
        sline_201=0;
        nest_202=0;
        while(        1        ) {
            if(            dquort_199            ) {
                if(                *info->p==92                ) {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value142=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_201)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value142, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    if(                    *info->p==10                    ) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34                ) {
                    info->p++;
                    dquort_199=!dquort_199;
                }
                else if(                *info->p==10                ) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value143=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_201)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value143, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value144=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_201)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value144, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
            }
            else if(            squort_200            ) {
                if(                *info->p==92                ) {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value145=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_201)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value145, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    if(                    *info->p==10                    ) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39                ) {
                    info->p++;
                    squort_200=!squort_200;
                }
                else if(                *info->p==10                ) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value146=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_201)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value146, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value147=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_201)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value147, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39            ) {
                sline_201=info->sline;
                info->p++;
                squort_200=!squort_200;
            }
            else if(            *info->p==34            ) {
                sline_201=info->sline;
                info->p++;
                dquort_199=!dquort_199;
            }
            else if(            *info->p==35            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123            ) {
                info->p++;
                nest_202++;
            }
            else if(            *info->p==125            ) {
                info->p++;
                if(                nest_202==0                ) {
                    break;
                }
                nest_202--;
            }
            else if(            *info->p==0            ) {
                ((struct tuple2$2int$bool$*)(__right_value148=err_msg(info,"The block requires } character for closing block")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value148, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else if(            *info->p==10            ) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        ((struct tuple2$2int$bool$*)(__right_value149=err_msg(info,"Require block. This is %c",*info->p)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value149, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        exit(1);
    }
    tail_203=info->p;
    buf_204=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 683, "struct buffer*"))));
    buffer_append(buf_204,head_198,tail_203-head_198-1);
    if(    return_self_at_last    ) {
        buffer_append_str(buf_204,"return self; }");
    }
    else {
        buffer_append_str(buf_204,"}");
    }
    skip_spaces_and_lf(info);
    __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value152=buffer_to_string(buf_204))));
    come_call_finalizer(buffer_finalize, buf_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__93;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct buffer* asm_fun_name_205;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct buffer* result_206;
char* head_207;
int brace_num_208;
char* tail_209;
char* head_210;
int brace_num_211;
char* tail_212;
char* head_213;
char* tail_214;
char* head_215;
char* tail_216;
int len_217;
_Bool in_dquort_218;
int brace_num_219;
char* head_220;
char* tail_221;
char* head_222;
char* tail_223;
char* head_224;
char* tail_225;
char* head_226;
int nest_227;
char* tail_228;
char* head_229;
int nest_230;
char* tail_231;
char* head_232;
int nest_233;
char* tail_234;
char* head_235;
int nest_236;
char* tail_237;
char* head_238;
int nest_239;
char* tail_240;
char* head_241;
char* tail_242;
char* head_243;
char* tail_244;
char* head_245;
char* tail_246;
char* head_247;
char* tail_248;
char* head_249;
char* tail_250;
char* head_251;
int brace_num_252;
char* tail_253;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__95;
    asm_fun_name_205=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 701, "struct buffer*"))));
    result_206=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 702, "struct buffer*"))));
    while(    (_Bool)1    ) {
        if(        parsecmp("__attribute__",info)        ) {
            head_207=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_208=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_208++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_208--;
                        if(                        brace_num_208==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_209=info->p;
            buffer_append(result_206,head_207,tail_209-head_207);
        }
        else if(        parsecmp("__declspec",info)        ) {
            head_210=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_211=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_211++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_211--;
                        if(                        brace_num_211==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_212=info->p;
            buffer_append(result_206,head_210,tail_212-head_210);
        }
        else if(        parsecmp("_Noreturn",info)        ) {
            head_213=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_214=info->p;
            buffer_append(result_206,head_213,tail_214-head_213);
        }
        else if(        parsecmp("__noreturn",info)        ) {
            head_215=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_216=info->p;
            buffer_append(result_206,head_215,tail_216-head_215);
        }
        else if(        parsecmp("__asm__",info)        ) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0            ) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_217=0;
            if(            *info->p==40            ) {
                in_dquort_218=(_Bool)0;
                brace_num_219=0;
                while(                *info->p                ) {
                    if(                    *info->p==34                    ) {
                        info->p++;
                        in_dquort_218=!in_dquort_218;
                    }
                    else if(                    in_dquort_218                    ) {
                        buffer_append_char(asm_fun_name_205,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_219++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_219--;
                        if(                        brace_num_219==0                        ) {
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
        else if(        parsecmp("__attribute_pure__",info)        ) {
            head_220=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_221=info->p;
            buffer_append(result_206,head_220,tail_221-head_220);
        }
        else if(        parsecmp("__malloc_like",info)        ) {
            head_222=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_223=info->p;
            buffer_append(result_206,head_222,tail_223-head_222);
        }
        else if(        parsecmp("__result_use_check",info)        ) {
            head_224=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_225=info->p;
            buffer_append(result_206,head_224,tail_225-head_224);
        }
        else if(        parsecmp("__alloc_size2",info)        ) {
            head_226=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_227=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_227++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_227--;
                        if(                        nest_227==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_228=info->p;
            buffer_append(result_206,head_226,tail_228-head_226);
        }
        else if(        parsecmp("__alloc_size",info)        ) {
            head_229=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_230=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_230++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_230--;
                        if(                        nest_230==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_231=info->p;
            buffer_append(result_206,head_229,tail_231-head_229);
        }
        else if(        parsecmp("__nonnull",info)        ) {
            head_232=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_233=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_233++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_233--;
                        if(                        nest_233==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_234=info->p;
            buffer_append(result_206,head_232,tail_234-head_232);
        }
        else if(        parsecmp("_Nonnull",info)        ) {
            head_235=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_236=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_236++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_236--;
                        if(                        nest_236==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_237=info->p;
            buffer_append(result_206,head_235,tail_237-head_235);
        }
        else if(        parsecmp("__alloc_align",info)        ) {
            head_238=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_239=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_239++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_239--;
                        if(                        nest_239==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_240=info->p;
            buffer_append(result_206,head_238,tail_240-head_238);
        }
        else if(        parsecmp("__attribute_malloc__",info)        ) {
            head_241=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_242=info->p;
            buffer_append(result_206,head_241,tail_242-head_241);
        }
        else if(        parsecmp("__attr_dealloc_fclose",info)        ) {
            head_243=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_244=info->p;
            buffer_append(result_206,head_243,tail_244-head_243);
        }
        else if(        parsecmp("__wur",info)        ) {
            head_245=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_246=info->p;
            buffer_append(result_206,head_245,tail_246-head_245);
        }
        else if(        parsecmp("__pure2",info)        ) {
            head_247=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_248=info->p;
            buffer_append(result_206,head_247,tail_248-head_247);
        }
        else if(        parsecmp("__pure",info)        ) {
            head_249=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_250=info->p;
            buffer_append(result_206,head_249,tail_250-head_249);
        }
        else if(        parsecmp("__asm",info)        ) {
            head_251=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_252=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_252++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_252--;
                        if(                        brace_num_252==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_253=info->p;
            buffer_append(result_206,head_251,tail_253-head_251);
        }
        else {
            break;
        }
    }
    __result_obj__95 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value160=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1116, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_205)),(char*)come_increment_ref_count(buffer_to_string(result_206))))));
    come_call_finalizer(buffer_finalize, asm_fun_name_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, result_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value160, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj68;
char* __dec_obj69;
struct tuple2$2char$phchar$ph* __result_obj__94;
    __dec_obj68=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj69=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__94 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct buffer* asm_fun_name_254;
void* __right_value163 = (void*)0;
char* attribute_255;
int nest_256;
int nest_257;
int nest_258;
int nest_259;
int nest_260;
void* __right_value164 = (void*)0;
char* __dec_obj70;
int len_261;
_Bool in_dquort_262;
int brace_num_263;
int brace_num_264;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__96;
    asm_fun_name_254=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1121, "struct buffer*"))));
    attribute_255=(char*)come_increment_ref_count(xsprintf(""));
    while(    (_Bool)1    ) {
        if(        parsecmp("__attribute_pure__",info)        ) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__malloc_like",info)        ) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__result_use_check",info)        ) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__alloc_size2",info)        ) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_256=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_256++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_256--;
                        if(                        nest_256==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__alloc_size",info)        ) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_257=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_257++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_257--;
                        if(                        nest_257==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__nonnull",info)        ) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_258=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_258++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_258--;
                        if(                        nest_258==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("_Nonnull",info)        ) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_259=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_259++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_259--;
                        if(                        nest_259==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__alloc_align",info)        ) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_260=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_260++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_260--;
                        if(                        nest_260==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__attribute_malloc__",info)        ) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__attr_dealloc_fclose",info)        ) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__wur",info)        ) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__pure2",info)        ) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__pure",info)        ) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__noreturn",info)        ) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__attribute__",info)        ) {
            __dec_obj70=attribute_255,
            attribute_255=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        parsecmp("__asm__",info)        ) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0            ) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_261=0;
            if(            *info->p==40            ) {
                in_dquort_262=(_Bool)0;
                brace_num_263=0;
                while(                *info->p                ) {
                    if(                    *info->p==34                    ) {
                        info->p++;
                        in_dquort_262=!in_dquort_262;
                    }
                    else if(                    in_dquort_262                    ) {
                        buffer_append_char(asm_fun_name_254,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_263++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_263--;
                        if(                        brace_num_263==0                        ) {
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
        else if(        parsecmp("__asm",info)        ) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_264=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_264++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_264--;
                        if(                        brace_num_264==0                        ) {
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
    __result_obj__96 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value167=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1390, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_254)),(char*)come_increment_ref_count(attribute_255)))));
    come_call_finalizer(buffer_finalize, asm_fun_name_254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (attribute_255 = come_decrement_ref_count(attribute_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value167, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value168 = (void*)0;
char* __dec_obj71;
char* head_265;
int head_sline_266;
void* __right_value169 = (void*)0;
char* buf_267;
void* __right_value170 = (void*)0;
struct sNode* node_268;
_Bool Value_269;
    while(    *info->p    ) {
        __dec_obj71=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "05function.c", 1396, "char*"));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        head_265=info->p;
        head_sline_266=info->sline;
        buf_267=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_267 = come_decrement_ref_count(buf_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        node_268=(struct sNode*)come_increment_ref_count(top_level_v99(buf_267,head_265,head_sline_266,info));
        parse_sharp_v5(info);
        while(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_268!=((void*)0)        ) {
            Value_269=node_compile(node_268,info);
            if(            !Value_269            ) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_267 = come_decrement_ref_count(buf_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_268) ? node_268 = come_decrement_ref_count(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            break;
        }
        (buf_267 = come_decrement_ref_count(buf_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_268) ? node_268 = come_decrement_ref_count(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value171 = (void*)0;
char* name_270;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct sType* result_type_271;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct list$1sType$ph* param_types_272;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct list$1char$ph* param_names_273;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct list$1char$ph* param_default_parametors_274;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct sFun* fun_275;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
char* name_297;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sType* result_type_298;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1sType$ph* param_types_299;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1char$ph* param_names_300;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct list$1char$ph* param_default_parametors_301;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct sFun* fun_302;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
char* name_303;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct sType* result_type_304;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct sType* __list_values1___305[3];
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct list$1sType$ph* param_types_310;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
char* __list_values2___311[3];
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1char$ph* param_names_313;
char* __list_values3___314[3];
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct list$1char$ph* param_default_parametors_315;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct sFun* fun_316;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
char* name_317;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct sType* result_type_318;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sType* __list_values4___319[3];
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1sType$ph* param_types_320;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
char* __list_values5___321[3];
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1char$ph* param_names_322;
char* __list_values6___323[3];
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1char$ph* param_default_parametors_324;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct sFun* fun_325;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* name_326;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct sType* result_type_327;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sType* __list_values7___328[3];
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1sType$ph* param_types_329;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
char* __list_values8___330[3];
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1char$ph* param_names_331;
char* __list_values9___332[3];
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1char$ph* param_default_parametors_333;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sFun* fun_334;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
char* name_335;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* result_type_336;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sType* __list_values10___337[3];
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct list$1sType$ph* param_types_338;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
char* __list_values11___339[3];
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1char$ph* param_names_340;
char* __list_values12___341[3];
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct list$1char$ph* param_default_parametors_342;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sFun* fun_343;
void* __right_value316 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_270=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_271=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1446, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_272=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1447, "struct list$1sType$ph*"))));
        param_names_273=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1448, "struct list$1char$ph*"))));
        param_default_parametors_274=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1449, "struct list$1char$ph*"))));
        fun_275=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1450, "struct sFun*")),(char*)come_increment_ref_count(name_270),(struct sType*)come_increment_ref_count(result_type_271),(struct list$1sType$ph*)come_increment_ref_count(param_types_272),(struct list$1char$ph*)come_increment_ref_count(param_names_273),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_274),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_270)),(struct sFun*)come_increment_ref_count(fun_275));
        (name_270 = come_decrement_ref_count(name_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_297=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_298=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1459, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_299=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1460, "struct list$1sType$ph*"))));
        param_names_300=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1461, "struct list$1char$ph*"))));
        param_default_parametors_301=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1462, "struct list$1char$ph*"))));
        fun_302=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1463, "struct sFun*")),(char*)come_increment_ref_count(name_297),(struct sType*)come_increment_ref_count(result_type_298),(struct list$1sType$ph*)come_increment_ref_count(param_types_299),(struct list$1char$ph*)come_increment_ref_count(param_names_300),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_301),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_297)),(struct sFun*)come_increment_ref_count(fun_302));
        (name_297 = come_decrement_ref_count(name_297, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_299, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_300, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_303=(char*)come_increment_ref_count(__builtin_string("strtol"));
        result_type_304=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1472, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        param_types_310=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___305[0]=((struct sType*)(__right_value212=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1473, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1___305[1]=((struct sType*)(__right_value215=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1473, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values1___305[2]=((struct sType*)(__right_value218=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1473, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1473, "struct list$1sType$ph")),3,__list_values1___305)));
        come_call_finalizer(sType_finalize, __right_value212, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value215, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value218, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_313=(struct list$1char$ph*)come_increment_ref_count((__list_values2___311[0]=((char*)(__right_value224=xsprintf("arg1"))),
__list_values2___311[1]=((char*)(__right_value225=xsprintf("arg2"))),
__list_values2___311[2]=((char*)(__right_value226=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1474, "struct list$1char$ph")),3,__list_values2___311)));
        (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_315=(struct list$1char$ph*)come_increment_ref_count((__list_values3___314[0]=(char*)((void*)0),
__list_values3___314[1]=(char*)((void*)0),
__list_values3___314[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1475, "struct list$1char$ph")),3,__list_values3___314)));
        fun_316=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1476, "struct sFun*")),(char*)come_increment_ref_count(name_303),(struct sType*)come_increment_ref_count(result_type_304),(struct list$1sType$ph*)come_increment_ref_count(param_types_310),(struct list$1char$ph*)come_increment_ref_count(param_names_313),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_315),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_303)),(struct sFun*)come_increment_ref_count(fun_316));
        (name_303 = come_decrement_ref_count(name_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_304, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_310, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_313, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_317=(char*)come_increment_ref_count(__builtin_string("strtoul"));
        result_type_318=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1485, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_318->mUnsigned=(_Bool)1;
        param_types_320=(struct list$1sType$ph*)come_increment_ref_count((__list_values4___319[0]=((struct sType*)(__right_value242=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1487, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values4___319[1]=((struct sType*)(__right_value245=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1487, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values4___319[2]=((struct sType*)(__right_value248=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1487, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1487, "struct list$1sType$ph")),3,__list_values4___319)));
        come_call_finalizer(sType_finalize, __right_value242, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value245, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value248, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_322=(struct list$1char$ph*)come_increment_ref_count((__list_values5___321[0]=((char*)(__right_value251=xsprintf("arg1"))),
__list_values5___321[1]=((char*)(__right_value252=xsprintf("arg2"))),
__list_values5___321[2]=((char*)(__right_value253=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1488, "struct list$1char$ph")),3,__list_values5___321)));
        (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_324=(struct list$1char$ph*)come_increment_ref_count((__list_values6___323[0]=(char*)((void*)0),
__list_values6___323[1]=(char*)((void*)0),
__list_values6___323[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1489, "struct list$1char$ph")),3,__list_values6___323)));
        fun_325=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1490, "struct sFun*")),(char*)come_increment_ref_count(name_317),(struct sType*)come_increment_ref_count(result_type_318),(struct list$1sType$ph*)come_increment_ref_count(param_types_320),(struct list$1char$ph*)come_increment_ref_count(param_names_322),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_324),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_317)),(struct sFun*)come_increment_ref_count(fun_325));
        (name_317 = come_decrement_ref_count(name_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_318, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_320, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_322, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_324, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_325, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_326=(char*)come_increment_ref_count(__builtin_string("strtoull"));
        result_type_327=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1499, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_327->mUnsigned=(_Bool)1;
        result_type_327->mLong=(_Bool)1;
        param_types_329=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___328[0]=((struct sType*)(__right_value269=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1502, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values7___328[1]=((struct sType*)(__right_value272=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1502, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values7___328[2]=((struct sType*)(__right_value275=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1502, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1502, "struct list$1sType$ph")),3,__list_values7___328)));
        come_call_finalizer(sType_finalize, __right_value269, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value272, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value275, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_331=(struct list$1char$ph*)come_increment_ref_count((__list_values8___330[0]=((char*)(__right_value278=xsprintf("arg1"))),
__list_values8___330[1]=((char*)(__right_value279=xsprintf("arg2"))),
__list_values8___330[2]=((char*)(__right_value280=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1503, "struct list$1char$ph")),3,__list_values8___330)));
        (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_333=(struct list$1char$ph*)come_increment_ref_count((__list_values9___332[0]=(char*)((void*)0),
__list_values9___332[1]=(char*)((void*)0),
__list_values9___332[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1504, "struct list$1char$ph")),3,__list_values9___332)));
        fun_334=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1505, "struct sFun*")),(char*)come_increment_ref_count(name_326),(struct sType*)come_increment_ref_count(result_type_327),(struct list$1sType$ph*)come_increment_ref_count(param_types_329),(struct list$1char$ph*)come_increment_ref_count(param_names_331),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_333),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_326)),(struct sFun*)come_increment_ref_count(fun_334));
        (name_326 = come_decrement_ref_count(name_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_327, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_331, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_333, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_334, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_335=(char*)come_increment_ref_count(__builtin_string("strtoll"));
        result_type_336=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1514, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_336->mLong=(_Bool)1;
        param_types_338=(struct list$1sType$ph*)come_increment_ref_count((__list_values10___337[0]=((struct sType*)(__right_value296=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1516, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values10___337[1]=((struct sType*)(__right_value299=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1516, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values10___337[2]=((struct sType*)(__right_value302=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1516, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1516, "struct list$1sType$ph")),3,__list_values10___337)));
        come_call_finalizer(sType_finalize, __right_value296, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value299, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value302, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_340=(struct list$1char$ph*)come_increment_ref_count((__list_values11___339[0]=((char*)(__right_value305=xsprintf("arg1"))),
__list_values11___339[1]=((char*)(__right_value306=xsprintf("arg2"))),
__list_values11___339[2]=((char*)(__right_value307=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1517, "struct list$1char$ph")),3,__list_values11___339)));
        (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_342=(struct list$1char$ph*)come_increment_ref_count((__list_values12___341[0]=(char*)((void*)0),
__list_values12___341[1]=(char*)((void*)0),
__list_values12___341[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1518, "struct list$1char$ph")),3,__list_values12___341)));
        fun_343=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1519, "struct sFun*")),(char*)come_increment_ref_count(name_335),(struct sType*)come_increment_ref_count(result_type_336),(struct list$1sType$ph*)come_increment_ref_count(param_types_338),(struct list$1char$ph*)come_increment_ref_count(param_names_340),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_342),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_335)),(struct sFun*)come_increment_ref_count(fun_343));
        (name_335 = come_decrement_ref_count(name_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_336, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_293;
unsigned int it_294;
_Bool same_key_exist_295;
char* it2_296;
struct map$2char$phsFun$ph* __result_obj__107;
    if(    self->len*10>=self->size    ) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_293=string_get_hash_key(((char*)key))%self->size;
    it_294=hash_293;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_294]        ) {
            if(            string_equals(self->keys[it_294],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_294]);
                    (self->keys[it_294] = come_decrement_ref_count(self->keys[it_294], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_294]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_294]);
                    self->keys[it_294]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it_294], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_294]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_294]=item;
                }
                break;
            }
            it_294++;
            if(            it_294>=self->size            ) {
                it_294=0;
            }
            else if(            it_294==hash_293            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_294]=(_Bool)1;
            if(            1            ) {
                self->keys[it_294]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_294]=key;
            }
            if(            1            ) {
                self->items[it_294]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_294]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_295=(_Bool)0;
    for(    it2_296=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_296=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_296,key)        ) {
            same_key_exist_295=(_Bool)1;
        }
    }
    if(    !same_key_exist_295    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__107 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__107;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_276;
void* __right_value185 = (void*)0;
char** keys_277;
void* __right_value186 = (void*)0;
struct sFun** items_278;
void* __right_value187 = (void*)0;
_Bool* item_existance_279;
int len_280;
char* it_283;
struct sFun* default_value_286;
void* __right_value188 = (void*)0;
struct sFun* it2_287;
unsigned int hash_290;
int n_291;
struct sFun* default_value_292;
void* __right_value189 = (void*)0;
default_value_286 = (void*)0;
default_value_292 = (void*)0;
    size_276=self->size*10;
    keys_277=(char**)come_increment_ref_count(((char**)(__right_value185=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_276)), "./comelang.h", 2759, "char**"))));
    items_278=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value186=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size_276)), "./comelang.h", 2760, "struct sFun**"))));
    item_existance_279=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value187=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_276)), "./comelang.h", 2761, "_Bool*"))));
    len_280=0;
    for(    it_283=map$2char$phsFun$ph_begin(self)    ;    !map$2char$phsFun$ph_end(self)    ;    it_283=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_286,0,sizeof(struct sFun*));
        it2_287=((struct sFun*)(__right_value188=map$2char$phsFun$ph_at(self,it_283,(struct sFun*)come_increment_ref_count(default_value_286))));
        come_call_finalizer(sFun_finalize, __right_value188, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_290=string_get_hash_key(((char*)it_283))%size_276;
        n_291=hash_290;
        while(        (_Bool)1        ) {
            if(            item_existance_279[n_291]            ) {
                n_291++;
                if(                n_291>=size_276                ) {
                    n_291=0;
                }
                else if(                n_291==hash_290                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_279[n_291]=(_Bool)1;
                keys_277[n_291]=it_283;
                items_278[n_291]=((struct sFun*)(__right_value189=map$2char$phsFun$ph_at(self,it_283,(struct sFun*)come_increment_ref_count(default_value_292))));
                come_call_finalizer(sFun_finalize, __right_value189, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_280++;
                come_call_finalizer(sFun_finalize, default_value_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sFun_finalize, default_value_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sFun_finalize, default_value_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_277;
    self->items=items_278;
    self->item_existance=item_existance_279;
    self->size=size_276;
    self->len=len_280;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_281;
char* __result_obj__97;
char* __result_obj__98;
char* result_282;
char* __result_obj__99;
result_281 = (void*)0;
result_282 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_281,0,sizeof(char*));
        __result_obj__97 = result_281;
        return __result_obj__97;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__98 = self->key_list->it->item;
        return __result_obj__98;
    }
    memset(&result_282,0,sizeof(char*));
    __result_obj__99 = result_282;
    return __result_obj__99;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_284;
char* __result_obj__100;
char* __result_obj__101;
char* result_285;
char* __result_obj__102;
result_284 = (void*)0;
result_285 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_284,0,sizeof(char*));
        __result_obj__100 = result_284;
        return __result_obj__100;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__101 = self->key_list->it->item;
        return __result_obj__101;
    }
    memset(&result_285,0,sizeof(char*));
    __result_obj__102 = result_285;
    return __result_obj__102;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_288;
unsigned int it_289;
struct sFun* __result_obj__103;
struct sFun* __result_obj__104;
struct sFun* __result_obj__105;
struct sFun* __result_obj__106;
    hash_288=string_get_hash_key(((char*)key))%self->size;
    it_289=hash_288;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_289]        ) {
            if(            string_equals(self->keys[it_289],key)            ) {
                __result_obj__103 = (struct sFun*)come_increment_ref_count(self->items[it_289]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__103;
            }
            it_289++;
            if(            it_289>=self->size            ) {
                it_289=0;
            }
            else if(            it_289==hash_288            ) {
                __result_obj__104 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__104;
            }
        }
        else {
            __result_obj__105 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__105;
        }
    }
    __result_obj__106 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_306;
struct list$1sType$ph* __result_obj__109;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_306=0    ;    i_306<num_value    ;    i_306++    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i_306]));
    }
    __result_obj__109 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value219 = (void*)0;
struct list_item$1sType$ph* litem_307;
struct sType* __dec_obj72;
void* __right_value220 = (void*)0;
struct list_item$1sType$ph* litem_308;
struct sType* __dec_obj73;
void* __right_value221 = (void*)0;
struct list_item$1sType$ph* litem_309;
struct sType* __dec_obj74;
struct list$1sType$ph* __result_obj__108;
    if(    self->len==0    ) {
        litem_307=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value219=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1722, "struct list_item$1sType$ph*"))));
        litem_307->prev=((void*)0);
        litem_307->next=((void*)0);
        __dec_obj72=litem_307->item,
        litem_307->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_307;
        self->head=litem_307;
    }
    else if(    self->len==1    ) {
        litem_308=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value220=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1732, "struct list_item$1sType$ph*"))));
        litem_308->prev=self->head;
        litem_308->next=((void*)0);
        __dec_obj73=litem_308->item,
        litem_308->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_308;
        self->head->next=litem_308;
    }
    else {
        litem_309=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value221=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1742, "struct list_item$1sType$ph*"))));
        litem_309->prev=self->tail;
        litem_309->next=((void*)0);
        __dec_obj74=litem_309->item,
        litem_309->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_309;
        self->tail=litem_309;
    }
    self->len++;
    __result_obj__108 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_312;
struct list$1char$ph* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_312=0    ;    i_312<num_value    ;    i_312++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i_312]));
    }
    __result_obj__110 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_344;
_Bool is_type_name_flag_345;
int sline_346;
_Bool define_struct_nobody_347;
char* p_348;
int sline_349;
void* __right_value317 = (void*)0;
char* word_350;
_Bool uniq_class_351;
char* p_352;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* buf2_353;
_Bool define_function_pointer_result_function_354;
_Bool define_variable_between_brace_355;
char* p_356;
void* __right_value320 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* result_type_357=0;
char* fun_name_358=0;
_Bool err_359=0;
void* __right_value321 = (void*)0;
char* word_360;
_Bool define_function_flag_361;
char* p_362;
void* __right_value322 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* result_type_363=0;
char* fun_name_364=0;
_Bool err_365=0;
char* word_366;
void* __right_value323 = (void*)0;
char* __dec_obj75;
void* __right_value324 = (void*)0;
char* __dec_obj76;
char* __dec_obj77;
void* __right_value325 = (void*)0;
char* __dec_obj78;
_Bool define_variable_367;
char* p_368;
void* __right_value326 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* result_type_369=0;
char* fun_name_370=0;
_Bool err_371=0;
void* __right_value327 = (void*)0;
char* word_372;
void* __right_value328 = (void*)0;
char* word_373;
char* p_374;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* word_375;
void* __right_value332 = (void*)0;
char* __dec_obj79;
void* __right_value333 = (void*)0;
char* buf2_376;
void* __right_value334 = (void*)0;
struct sNode* __result_obj__111;
void* __right_value335 = (void*)0;
char* word_377;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
char* word_378;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sNode* node_379;
struct sNode* __result_obj__112;
void* __right_value340 = (void*)0;
struct sNode* __result_obj__113;
char* header_head_380;
void* __right_value341 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* result_type_381=0;
char* fun_name_382=0;
_Bool err_383=0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct list$1sType$ph* param_types_384;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1char$ph* param_names_385;
void* __right_value346 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* param_type_386=0;
char* param_name_387=0;
_Bool err_388=0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct list$1sType$ph* param_types2_390;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct list$1char$ph* param_names2_391;
void* __right_value355 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* param_type_392=0;
char* param_name_393=0;
_Bool err_394=0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
char* header_tail_396;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* result_type2_397;
struct sType* __dec_obj80;
void* __right_value363 = (void*)0;
struct list$1sType$ph* __dec_obj81;
void* __right_value364 = (void*)0;
struct list$1char$ph* __dec_obj82;
_Bool var_args_398;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1char$ph* param_default_parametors_399;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sFun* fun_400;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value425 = (void*)0;
struct sNode* result_401;
struct sNode* __result_obj__138;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* node_437;
struct sNode* __result_obj__139;
void* __right_value428 = (void*)0;
struct sNode* node_438;
struct sNode* __result_obj__140;
void* __right_value429 = (void*)0;
struct sNode* node_439;
char* source_tail_440;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct buffer* header_441;
struct sNode* __result_obj__141;
void* __right_value432 = (void*)0;
char* buf2_442;
void* __right_value433 = (void*)0;
struct sNode* __result_obj__142;
    info->in_top_level=(_Bool)1;
    source_head_344=info->p;
    is_type_name_flag_345=is_type_name(buf,info);
    sline_346=info->sline;
    define_struct_nobody_347=(_Bool)0;
    {
        p_348=info->p;
        sline_349=info->sline;
        if(        charp_operator_equals(buf,"struct")        ) {
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_350=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59                ) {
                    define_struct_nobody_347=(_Bool)1;
                }
                (word_350 = come_decrement_ref_count(word_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_349;
    }
    uniq_class_351=(_Bool)0;
    if(    charp_operator_equals(buf,"uniq")    ) {
        p_352=info->p;
        info->p=head;
        (void)((char*)(__right_value318=parse_word(info)));
        (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        xisalpha(*info->p)||*info->p==95        ) {
            buf2_353=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(buf2_353,"class")            ) {
                uniq_class_351=(_Bool)1;
            }
            (buf2_353 = come_decrement_ref_count(buf2_353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_352;
        info->sline=sline_346;
    }
    define_function_pointer_result_function_354=(_Bool)0;
    define_variable_between_brace_355=(_Bool)0;
    if(    is_type_name_flag_345&&!uniq_class_351    ) {
        p_356=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value320=backtrace_parse_type((_Bool)0,info)));
            result_type_357=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_358=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_359=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value320, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42                ) {
                    define_function_pointer_result_function_354=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        word_360=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_360,info)&&*info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40                            ) {
                            }
                            else {
                                define_variable_between_brace_355=(_Bool)1;
                            }
                        }
                        (word_360 = come_decrement_ref_count(word_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
            }
            come_call_finalizer(sType_finalize, result_type_357, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_358 = come_decrement_ref_count(fun_name_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_346;
    }
    define_function_flag_361=(_Bool)0;
    if(    is_type_name_flag_345&&!define_function_pointer_result_function_354&&charp_operator_not_equals(buf,"__typeof__")&&!uniq_class_351    ) {
        p_362=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value322=backtrace_parse_type((_Bool)0,info)));
            result_type_363=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_364=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_365=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value322, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_364 = come_decrement_ref_count(fun_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        !info->define_struct        ) {
            info->define_struct=(_Bool)0;
            word_366=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj75=word_366,
                word_366=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                if(                string_operator_equals(word_366,"extern")                ) {
                    __dec_obj76=word_366,
                    word_366=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
            else {
                __dec_obj77=word_366,
                word_366=((void*)0);
                __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_366            ) {
                if(                is_type_name(word_366,info)                ) {
                    while(                    *info->p==42                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93                    ) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95                    ) {
                        __dec_obj78=word_366,
                        word_366=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    }
                }
                if(                strlen(word_366)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))                ) {
                    if(                    is_type_name_flag_345                    ) {
                        define_function_flag_361=(_Bool)1;
                    }
                }
            }
            (word_366 = come_decrement_ref_count(word_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_362;
        info->sline=sline_346;
    }
    define_variable_367=(_Bool)1;
    if(    is_type_name_flag_345&&!define_function_pointer_result_function_354&&!uniq_class_351    ) {
        p_368=info->p;
        info->p=head;
        if(        !is_type_name_flag_345        ) {
            define_variable_367=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95        ) {
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value326=backtrace_parse_type((_Bool)0,info)));
            result_type_369=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_370=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_371=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value326, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        word_372=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40                            ) {
                                define_variable_367=(_Bool)1;
                            }
                        }
                        (word_372 = come_decrement_ref_count(word_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95                ) {
                    word_373=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_373,info)&&*info->p!=40                        ) {
                            define_variable_367=(_Bool)1;
                        }
                    }
                    (word_373 = come_decrement_ref_count(word_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            come_call_finalizer(sType_finalize, result_type_369, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_370 = come_decrement_ref_count(fun_name_370, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        info->define_struct        ) {
            info->define_struct=(_Bool)0;
            define_variable_367=(_Bool)0;
        }
        else if(        define_variable_367        ) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)            ) {
                define_variable_367=(_Bool)0;
            }
            while(            xisalpha(*info->p)||*info->p==95            ) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58            ) {
                define_variable_367=(_Bool)0;
            }
        }
        info->p=p_368;
        info->sline=sline_346;
    }
    else {
        define_variable_367=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_354    ) {
        p_374=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")        ) {
            ((char*)(__right_value329=parse_struct_attribute(info)));
            (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95            ) {
                ((char*)(__right_value330=parse_word(info)));
                (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95                ) {
                    word_375=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        __dec_obj79=word_375,
                        word_375=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        string_operator_equals(word_375,"extends")                        ) {
                            define_variable_367=(_Bool)0;
                        }
                    }
                    (word_375 = come_decrement_ref_count(word_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        if(        info->define_struct        ) {
            info->define_struct=(_Bool)0;
            define_variable_367=(_Bool)0;
        }
        else if(        define_variable_367        ) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)            ) {
                define_variable_367=(_Bool)0;
            }
            while(            xisalpha(*info->p)||*info->p==95            ) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58            ) {
                define_variable_367=(_Bool)0;
            }
        }
        info->p=p_374;
        info->sline=sline_346;
    }
    if(    uniq_class_351    ) {
        info->p=head;
        info->sline=sline_346;
        buf2_376=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__111 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value334=top_level_v98(buf2_376,head,head_sline,info))));
        (buf2_376 = come_decrement_ref_count(buf2_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__right_value334) ? __right_value334 = come_decrement_ref_count(__right_value334, ((struct sNode*)__right_value334)->finalize, ((struct sNode*)__right_value334)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__111) ? __result_obj__111 = come_decrement_ref_count(__result_obj__111, ((struct sNode*)__result_obj__111)->finalize, ((struct sNode*)__result_obj__111)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__111;
        (buf2_376 = come_decrement_ref_count(buf2_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"template")    ) {
        word_377=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while(            (_Bool)1            ) {
                if(                *info->p==62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0                ) {
                    ((struct tuple2$2int$bool$*)(__right_value336=err_msg(info,"unexpected source end")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value336, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                else {
                    word_378=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(word_378, "05function.c", 1841, "char*")));
                    (word_378 = come_decrement_ref_count(word_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            node_379=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__112 = (struct sNode*)come_increment_ref_count(node_379);
            ((node_379) ? node_379 = come_decrement_ref_count(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (word_377 = come_decrement_ref_count(word_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__112) ? __result_obj__112 = come_decrement_ref_count(__result_obj__112, ((struct sNode*)__result_obj__112)->finalize, ((struct sNode*)__result_obj__112)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__112;
            ((node_379) ? node_379 = come_decrement_ref_count(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        (word_377 = come_decrement_ref_count(word_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123    ) {
    }
    else if(    define_struct_nobody_347    ) {
    }
    else if(    define_variable_between_brace_355    ) {
        info->p=head;
        info->sline=sline_346;
        __result_obj__113 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value340=parse_global_variable(info))));
        ((__right_value340) ? __right_value340 = come_decrement_ref_count(__right_value340, ((struct sNode*)__right_value340)->finalize, ((struct sNode*)__right_value340)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__113) ? __result_obj__113 = come_decrement_ref_count(__result_obj__113, ((struct sNode*)__result_obj__113)->finalize, ((struct sNode*)__result_obj__113)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__113;
    }
    else if(    define_function_pointer_result_function_354    ) {
        header_head_380=info->p;
        multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value341=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_381=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_382=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_383=multiple_assign_var4->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value341, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_384=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1870, "struct list$1sType$ph*"))));
            param_names_385=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1871, "struct list$1char$ph*"))));
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(                (_Bool)1                ) {
                    multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value346=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_386=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_387=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_388=multiple_assign_var5->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value346, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_388                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value347=err_msg(info,"parse_type is failed")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value347, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    list$1sType$ph_push_back(param_types_384,(struct sType*)come_increment_ref_count(param_type_386));
                    static int num_function_pointer_result_var_name_a_389=0;
                    list$1char$ph_push_back(param_names_385,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_389)));
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        (void)((char*)(__right_value349=parse_word(info)));
                        (__right_value349 = come_decrement_ref_count(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    if(                    *info->p==44                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer(sType_finalize, param_type_386, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (param_name_387 = come_decrement_ref_count(param_name_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        break;
                    }
                    else {
                        ((struct tuple2$2int$bool$*)(__right_value350=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value350, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    come_call_finalizer(sType_finalize, param_type_386, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (param_name_387 = come_decrement_ref_count(param_name_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_390=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1917, "struct list$1sType$ph*"))));
                param_names2_391=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1918, "struct list$1char$ph*"))));
                if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while(                    (_Bool)1                    ) {
                        multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value355=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_392=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_393=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_394=multiple_assign_var6->v3;
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value355, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        if(                        !err_394                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value356=err_msg(info,"parse_type is failed")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value356, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        list$1sType$ph_push_back(param_types2_390,(struct sType*)come_increment_ref_count(param_type_392));
                        static int num_function_pointer_result_var_name_b_395=0;
                        list$1char$ph_push_back(param_names2_391,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_395)));
                        if(                        xisalpha(*info->p)||*info->p==95                        ) {
                            (void)((char*)(__right_value358=parse_word(info)));
                            (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        }
                        if(                        *info->p==44                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer(sType_finalize, param_type_392, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                            (param_name_393 = come_decrement_ref_count(param_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value359=err_msg(info,"require , or ) (2)")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value359, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        come_call_finalizer(sType_finalize, param_type_392, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (param_name_393 = come_decrement_ref_count(param_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                header_tail_396=info->p;
                result_type2_397=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1960, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj80=result_type2_397->mResultType,
                result_type2_397->mResultType=(struct sType*)come_increment_ref_count(result_type_381);
                come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                __dec_obj81=result_type2_397->mParamTypes,
                result_type2_397->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types2_390));
                come_call_finalizer(list$1sType$ph_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                __dec_obj82=result_type2_397->mParamNames,
                result_type2_397->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names2_391));
                come_call_finalizer(list$1char$ph_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                result_type2_397->mVarArgs=(_Bool)0;
                result_type2_397->mStatic=(_Bool)0;
                var_args_398=(_Bool)0;
                param_default_parametors_399=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1970, "struct list$1char$ph*"))));
                fun_400=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1972, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_382)),(struct sType*)come_increment_ref_count(result_type2_397),(struct list$1sType$ph*)come_increment_ref_count(param_types_384),(struct list$1char$ph*)come_increment_ref_count(param_names_385),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_399),(_Bool)1,var_args_398,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_382)),(struct sFun*)come_increment_ref_count(fun_400));
                _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 1984, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value374=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 1984, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_400),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_401=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer(sFunNode_finalize, __right_value374, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__138 = (struct sNode*)come_increment_ref_count(result_401);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2_390, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2_391, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type2_397, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_399, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, fun_400, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((result_401) ? result_401 = come_decrement_ref_count(result_401, ((struct sNode*)result_401)->finalize, ((struct sNode*)result_401)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_384, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names_385, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_382 = come_decrement_ref_count(fun_name_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((__result_obj__138) ? __result_obj__138 = come_decrement_ref_count(__result_obj__138, ((struct sNode*)__result_obj__138)->finalize, ((struct sNode*)__result_obj__138)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__138;
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2_390, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2_391, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type2_397, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_399, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, fun_400, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((result_401) ? result_401 = come_decrement_ref_count(result_401, ((struct sNode*)result_401)->finalize, ((struct sNode*)result_401)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value426=err_msg(info,"require (")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value426, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_384, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_385, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(sType_finalize, result_type_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_382 = come_decrement_ref_count(fun_name_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")    ) {
        info->p=head;
        info->sline=sline_346;
        node_437=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__139 = (struct sNode*)come_increment_ref_count(node_437);
        ((node_437) ? node_437 = come_decrement_ref_count(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__139) ? __result_obj__139 = come_decrement_ref_count(__result_obj__139, ((struct sNode*)__result_obj__139)->finalize, ((struct sNode*)__result_obj__139)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__139;
        ((node_437) ? node_437 = come_decrement_ref_count(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    define_function_flag_361    ) {
        info->p=head;
        info->sline=sline_346;
        node_438=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__140 = (struct sNode*)come_increment_ref_count(node_438);
        ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__140;
        ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    define_variable_367    ) {
        info->p=head;
        info->sline=sline_346;
        node_439=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_440=info->p;
        header_441=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2018, "struct buffer*"))));
        buffer_append(header_441,source_head_344,source_tail_440-source_head_344);
        __result_obj__141 = (struct sNode*)come_increment_ref_count(node_439);
        ((node_439) ? node_439 = come_decrement_ref_count(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header_441, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((__result_obj__141) ? __result_obj__141 = come_decrement_ref_count(__result_obj__141, ((struct sNode*)__result_obj__141)->finalize, ((struct sNode*)__result_obj__141)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__141;
        ((node_439) ? node_439 = come_decrement_ref_count(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header_441, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->p=head;
    info->sline=sline_346;
    buf2_442=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__142 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value433=top_level_v98(buf2_442,head,head_sline,info))));
    (buf2_442 = come_decrement_ref_count(buf2_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__right_value433) ? __right_value433 = come_decrement_ref_count(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__142;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__114;
void* __right_value375 = (void*)0;
struct sFunNode* result_402;
void* __right_value376 = (void*)0;
char* __dec_obj83;
void* __right_value424 = (void*)0;
struct sFun* __dec_obj108;
struct sFunNode* __result_obj__137;
    if(    self==(void*)0    ) {
        __result_obj__114 = (void*)0;
        return __result_obj__114;
    }
    result_402=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(    self!=((void*)0)    ) {
        result_402->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj83=result_402->sname,
        result_402->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunNode_clone", 5, "char*"));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_402->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)    ) {
        __dec_obj108=result_402->mFun,
        result_402->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer(sFun_finalize, __dec_obj108,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__137 = result_402;
    come_call_finalizer(sFunNode_finalize, result_402, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__115;
void* __right_value377 = (void*)0;
struct sFun* result_403;
void* __right_value378 = (void*)0;
char* __dec_obj84;
void* __right_value379 = (void*)0;
struct sType* __dec_obj85;
void* __right_value380 = (void*)0;
struct list$1sType$ph* __dec_obj86;
void* __right_value381 = (void*)0;
struct list$1char$ph* __dec_obj87;
void* __right_value382 = (void*)0;
struct list$1char$ph* __dec_obj88;
void* __right_value383 = (void*)0;
struct sType* __dec_obj89;
void* __right_value415 = (void*)0;
struct sBlock* __dec_obj99;
void* __right_value416 = (void*)0;
char* __dec_obj100;
void* __right_value417 = (void*)0;
char* __dec_obj101;
void* __right_value418 = (void*)0;
struct buffer* __dec_obj102;
void* __right_value419 = (void*)0;
struct buffer* __dec_obj103;
void* __right_value420 = (void*)0;
struct buffer* __dec_obj104;
void* __right_value421 = (void*)0;
struct buffer* __dec_obj105;
void* __right_value422 = (void*)0;
char* __dec_obj106;
void* __right_value423 = (void*)0;
char* __dec_obj107;
struct sFun* __result_obj__136;
    if(    self==(void*)0    ) {
        __result_obj__115 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__115;
    }
    result_403=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj84=result_403->mName,
        result_403->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sFun_clone", 4, "char*"));
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj85=result_403->mResultType,
        result_403->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj86=result_403->mParamTypes,
        result_403->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj87=result_403->mParamNames,
        result_403->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        __dec_obj88=result_403->mParamDefaultParametors,
        result_403->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        __dec_obj89=result_403->mLambdaType,
        result_403->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        __dec_obj99=result_403->mBlock,
        result_403->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        __dec_obj100=result_403->mTextBlock,
        result_403->mTextBlock=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlock, "sFun_clone", 11, "char*"));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        __dec_obj101=result_403->mTextBlockSName,
        result_403->mTextBlockSName=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlockSName, "sFun_clone", 12, "char*"));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_403->mTextBlockSline=self->mTextBlockSline;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        __dec_obj102=result_403->mSource,
        result_403->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer(buffer_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        __dec_obj103=result_403->mSourceHead,
        result_403->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer(buffer_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        __dec_obj104=result_403->mSourceHead2,
        result_403->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer(buffer_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        __dec_obj105=result_403->mSourceDefer,
        result_403->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer(buffer_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_403->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_403->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_403->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_403->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)    ) {
        result_403->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)    ) {
        result_403->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_403->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)    ) {
        result_403->mConstFun=self->mConstFun;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj106=result_403->mAttribute,
        result_403->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sFun_clone", 26, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        __dec_obj107=result_403->mFunAttribute,
        result_403->mFunAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mFunAttribute, "sFun_clone", 27, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_403->mGenericsFun=self->mGenericsFun;
    }
    if(    self!=((void*)0)    ) {
        result_403->mImmutable=self->mImmutable;
    }
    __result_obj__136 = (struct sFun*)come_increment_ref_count(result_403);
    come_call_finalizer(sFun_finalize, result_403, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__136;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__116;
void* __right_value384 = (void*)0;
struct sBlock* result_404;
void* __right_value385 = (void*)0;
struct list$1sNode$ph* __dec_obj90;
void* __right_value414 = (void*)0;
struct sVarTable* __dec_obj98;
struct sBlock* __result_obj__135;
    if(    self==(void*)0    ) {
        __result_obj__116 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__116;
    }
    result_404=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __dec_obj90=result_404->mNodes,
        result_404->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __dec_obj98=result_404->mVarTable,
        result_404->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_404->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__135 = (struct sBlock*)come_increment_ref_count(result_404);
    come_call_finalizer(sBlock_finalize, result_404, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__117;
void* __right_value386 = (void*)0;
struct sVarTable* result_405;
void* __right_value413 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj97;
struct sVarTable* __result_obj__134;
    if(    self==(void*)0    ) {
        __result_obj__117 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__117;
    }
    result_405=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __dec_obj97=result_405->mVars,
        result_405->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_405->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_405->mParent=self->mParent;
    }
    __result_obj__134 = (struct sVarTable*)come_increment_ref_count(result_405);
    come_call_finalizer(sVarTable_finalize, result_405, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__134;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__118;
void* __right_value387 = (void*)0;
void* __right_value393 = (void*)0;
struct map$2char$phsVar$ph* result_409;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct list$1char$ph* __dec_obj92;
char* it_412;
struct sVar* default_value_415;
void* __right_value396 = (void*)0;
struct sVar* it2_418;
void* __right_value402 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__133;
default_value_415 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__118 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__118;
    }
    result_409=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2591, "struct map$2char$phsVar$ph*"))));
    __dec_obj92=result_409->key_list,
    result_409->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2593, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_412=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_412=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_415,0,sizeof(struct sVar*));
        it2_418=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_412,(struct sVar*)come_increment_ref_count(default_value_415)));
        if(        1&&1        ) {
            map$2char$phsVar$ph_put(result_409,(char*)come_increment_ref_count((char*)come_memdup(it_412, "./comelang.h", 2602, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_418)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_409,(char*)come_increment_ref_count((char*)come_memdup(it_412, "./comelang.h", 2605, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_418)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_409,(char*)come_increment_ref_count(it_412),(struct sVar*)come_increment_ref_count(sVar_clone(it2_418)));
        }
        else {
            map$2char$phsVar$ph_put(result_409,(char*)come_increment_ref_count(it_412),(struct sVar*)come_increment_ref_count(sVar_clone(it2_418)));
        }
        come_call_finalizer(sVar_finalize, default_value_415, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2_418, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__133 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_409);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result_409, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__133;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_406;
int i_407;
    for(    i_406=0    ;    i_406<self->size    ;    i_406++    ){
        if(        self->item_existance[i_406]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_406], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_407=0    ;    i_407<self->size    ;    i_407++    ){
        if(        self->item_existance[i_407]        ) {
            if(            1            ) {
                (self->keys[i_407] = come_decrement_ref_count(self->keys[i_407], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
int i_408;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1char$ph* __dec_obj91;
struct map$2char$phsVar$ph* __result_obj__119;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value388=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 2520, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value389=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2521, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value390=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2522, "_Bool*"))));
    for(    i_408=0    ;    i_408<128    ;    i_408++    ){
        self->item_existance[i_408]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj91=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2532, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__119 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_410;
char* __result_obj__120;
char* __result_obj__121;
char* result_411;
char* __result_obj__122;
result_410 = (void*)0;
result_411 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_410,0,sizeof(char*));
        __result_obj__120 = result_410;
        return __result_obj__120;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__121 = self->key_list->it->item;
        return __result_obj__121;
    }
    memset(&result_411,0,sizeof(char*));
    __result_obj__122 = result_411;
    return __result_obj__122;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_413;
char* __result_obj__123;
char* __result_obj__124;
char* result_414;
char* __result_obj__125;
result_413 = (void*)0;
result_414 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_413,0,sizeof(char*));
        __result_obj__123 = result_413;
        return __result_obj__123;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__124 = self->key_list->it->item;
        return __result_obj__124;
    }
    memset(&result_414,0,sizeof(char*));
    __result_obj__125 = result_414;
    return __result_obj__125;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_416;
unsigned int it_417;
struct sVar* __result_obj__126;
struct sVar* __result_obj__127;
struct sVar* __result_obj__128;
struct sVar* __result_obj__129;
    hash_416=string_get_hash_key(((char*)key))%self->size;
    it_417=hash_416;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_417]        ) {
            if(            string_equals(self->keys[it_417],key)            ) {
                __result_obj__126 = (struct sVar*)come_increment_ref_count(self->items[it_417]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__126;
            }
            it_417++;
            if(            it_417>=self->size            ) {
                it_417=0;
            }
            else if(            it_417==hash_416            ) {
                __result_obj__127 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__127;
            }
        }
        else {
            __result_obj__128 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__128;
        }
    }
    __result_obj__129 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_430;
int it_431;
_Bool same_key_exist_432;
char* it2_433;
struct map$2char$phsVar$ph* __result_obj__130;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_430=string_get_hash_key(((char*)key))%self->size;
    it_431=hash_430;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_431]        ) {
            if(            string_equals(self->keys[it_431],key)            ) {
                if(                1                ) {
                    (self->keys[it_431] = come_decrement_ref_count(self->keys[it_431], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_431]);
                    self->keys[it_431]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_431]);
                    self->keys[it_431]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_431], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_431]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_431]=item;
                }
                break;
            }
            it_431++;
            if(            it_431>=self->size            ) {
                it_431=0;
            }
            else if(            it_431==hash_430            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_431]=(_Bool)1;
            if(            1            ) {
                self->keys[it_431]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_431]=key;
            }
            if(            1            ) {
                self->items[it_431]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_431]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_432=(_Bool)0;
    for(    it2_433=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_433=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_433,key)        ) {
            same_key_exist_432=(_Bool)1;
        }
    }
    if(    !same_key_exist_432    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__130 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__130;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_419;
void* __right_value397 = (void*)0;
char** keys_420;
void* __right_value398 = (void*)0;
struct sVar** items_421;
void* __right_value399 = (void*)0;
_Bool* item_existance_422;
int len_423;
char* it_424;
struct sVar* default_value_425;
void* __right_value400 = (void*)0;
struct sVar* it2_426;
unsigned int hash_427;
int n_428;
struct sVar* default_value_429;
void* __right_value401 = (void*)0;
default_value_425 = (void*)0;
default_value_429 = (void*)0;
    size_419=self->size*10;
    keys_420=(char**)come_increment_ref_count(((char**)(__right_value397=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_419)), "./comelang.h", 2759, "char**"))));
    items_421=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value398=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_419)), "./comelang.h", 2760, "struct sVar**"))));
    item_existance_422=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value399=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_419)), "./comelang.h", 2761, "_Bool*"))));
    len_423=0;
    for(    it_424=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_424=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_425,0,sizeof(struct sVar*));
        it2_426=((struct sVar*)(__right_value400=map$2char$phsVar$ph_at(self,it_424,(struct sVar*)come_increment_ref_count(default_value_425))));
        come_call_finalizer(sVar_finalize, __right_value400, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_427=string_get_hash_key(((char*)it_424))%size_419;
        n_428=hash_427;
        while(        (_Bool)1        ) {
            if(            item_existance_422[n_428]            ) {
                n_428++;
                if(                n_428>=size_419                ) {
                    n_428=0;
                }
                else if(                n_428==hash_427                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_422[n_428]=(_Bool)1;
                keys_420[n_428]=it_424;
                items_421[n_428]=((struct sVar*)(__right_value401=map$2char$phsVar$ph_at(self,it_424,(struct sVar*)come_increment_ref_count(default_value_429))));
                come_call_finalizer(sVar_finalize, __right_value401, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_423++;
                come_call_finalizer(sVar_finalize, default_value_429, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_429, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_425, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_420;
    self->items=items_421;
    self->item_existance=item_existance_422;
    self->size=size_419;
    self->len=len_423;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__131;
void* __right_value403 = (void*)0;
struct sVar* result_434;
void* __right_value404 = (void*)0;
char* __dec_obj93;
void* __right_value405 = (void*)0;
char* __dec_obj94;
void* __right_value406 = (void*)0;
struct sType* __dec_obj95;
void* __right_value407 = (void*)0;
char* __dec_obj96;
struct sVar* __result_obj__132;
    if(    self==(void*)0    ) {
        __result_obj__131 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__131;
    }
    result_434=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj93=result_434->mName,
        result_434->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __dec_obj94=result_434->mCValueName,
        result_434->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __dec_obj95=result_434->mType,
        result_434->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_434->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_434->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_434->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)    ) {
        result_434->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __dec_obj96=result_434->mFunName,
        result_434->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__132 = (struct sVar*)come_increment_ref_count(result_434);
    come_call_finalizer(sVar_finalize, result_434, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_435;
int i_436;
    for(    i_435=0    ;    i_435<self->size    ;    i_435++    ){
        if(        self->item_existance[i_435]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_435], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_436=0    ;    i_436<self->size    ;    i_436++    ){
        if(        self->item_existance[i_436]        ) {
            if(            1            ) {
                (self->keys[i_436] = come_decrement_ref_count(self->keys[i_436], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_443;
int caller_line_444;
char* caller_sname_445;
_Bool comma_instead_of_semicolon_446;
char* last_code_447;
char* __dec_obj109;
char* last_code2_448;
char* __dec_obj110;
void* __right_value434 = (void*)0;
char* sname_top_449;
int sline_top_450;
struct sType* __dec_obj111;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sFun* funX_451;
void* __right_value438 = (void*)0;
char* __dec_obj112;
char* __dec_obj113;
char* __dec_obj114;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__152;
void* __right_value441 = (void*)0;
struct sType* result_type_458;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1sType$ph* param_types_459;
struct list$1sType$ph* o2_saved_460;
struct sType* it_463;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sType* param_type_466;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1char$ph* param_names_467;
void* __right_value448 = (void*)0;
struct list$1char$ph* param_default_parametors_468;
char* p_469;
int sline_470;
char* sname_471;
char* head_472;
struct buffer* source_473;
void* __right_value449 = (void*)0;
struct buffer* __dec_obj116;
struct sType* generics_type_saved_474;
struct sType* __dec_obj117;
void* __right_value450 = (void*)0;
struct sType* __dec_obj118;
struct list$1char$ph* method_generics_type_names_475;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1char$ph* __dec_obj119;
struct list$1char$ph* o2_saved_476;
char* it_477;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1char$ph* __dec_obj120;
char* __dec_obj121;
void* __right_value455 = (void*)0;
struct sBlock* block_478;
struct buffer* __dec_obj122;
char* __dec_obj123;
_Bool const_fun_479;
_Bool var_args_480;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sFun* fun_481;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value463 = (void*)0;
struct sNode* node_482;
_Bool in_generics_fun_483;
_Bool Value_484;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__159;
struct sType* __dec_obj124;
struct list$1char$ph* __dec_obj125;
void* __right_value467 = (void*)0;
char* __dec_obj126;
char* __dec_obj127;
char* __dec_obj128;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__160;
    caller_fun_443=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_444=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_445=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_446=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_447=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj109=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_448=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj110=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top_449=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_450=info->sline;
    if(    generics_type->mNoSolvedGenericsType    ) {
        __dec_obj111=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    funX_451=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value436=__builtin_string(fun_name)))));
    (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value436 = come_decrement_ref_count(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    if(    funX_451    ) {
        __dec_obj112=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_449));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_top_450;
        __dec_obj113=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code_447);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj114=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_448);
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->caller_fun=caller_fun_443;
        info->caller_line=caller_line_444;
        info->caller_sname=caller_sname_445;
        info->comma_instead_of_semicolon=comma_instead_of_semicolon_446;
        __result_obj__152 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value440=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2067, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (last_code_447 = come_decrement_ref_count(last_code_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_448 = come_decrement_ref_count(last_code2_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_449 = come_decrement_ref_count(sname_top_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, funX_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value440, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__152;
    }
    result_type_458=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(generics_fun->mResultType),(struct sType*)come_increment_ref_count(generics_type),info));
    param_types_459=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2072, "struct list$1sType$ph*"))));
    for(    o2_saved_460=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_463=list$1sType$ph_begin((o2_saved_460))    ;    !list$1sType$ph_end((o2_saved_460))    ;    it_463=list$1sType$ph_next((o2_saved_460))    ){
        param_type_466=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(it_463)),(struct sType*)come_increment_ref_count(generics_type),info));
        list$1sType$ph_add(param_types_459,(struct sType*)come_increment_ref_count(sType_clone(param_type_466)));
        come_call_finalizer(sType_finalize, param_type_466, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_460, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names_467=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_468=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_469=info->p;
    sline_470=info->sline;
    sname_471=(char*)come_increment_ref_count(info->sname);
    head_472=info->head;
    source_473=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj116=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj116,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_474=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType    ) {
        __dec_obj117=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __dec_obj118=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    method_generics_type_names_475=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj119=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2100, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj119,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    o2_saved_476=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_477=list$1char$ph_begin((o2_saved_476))    ;    !list$1char$ph_end((o2_saved_476))    ;    it_477=list$1char$ph_next((o2_saved_476))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_477, "05function.c", 2102, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_476, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj120=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj120,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj121=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block_478=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_472;
    __dec_obj122=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_473);
    come_call_finalizer(buffer_finalize, __dec_obj122,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_469;
    info->sline=sline_470;
    __dec_obj123=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_471);
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type_458->mInline=(_Bool)0;
    result_type_458->mStatic=(_Bool)0;
    result_type_458->mUniq=(_Bool)0;
    const_fun_479=generics_fun->mConstFun;
    var_args_480=generics_fun->mVarArgs;
    fun_481=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2126, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_458),(struct list$1sType$ph*)come_increment_ref_count(param_types_459),(struct list$1char$ph*)come_increment_ref_count(param_names_467),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_468),(_Bool)0,var_args_480,(struct sBlock*)come_increment_ref_count(block_478),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_479,((void*)0),((void*)0),0,(_Bool)0));
    fun_481->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_481));
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2135, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value462=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2135, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_481),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_482=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sFunNode_finalize, __right_value462, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    in_generics_fun_483=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_484=node_compile(node_482,info);
    if(    !Value_484    ) {
        __result_obj__159 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value466=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2140, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (last_code_447 = come_decrement_ref_count(last_code_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_448 = come_decrement_ref_count(last_code2_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_449 = come_decrement_ref_count(sname_top_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, funX_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_458, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_459, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_467, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_468, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_471 = come_decrement_ref_count(sname_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source_473, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, generics_type_saved_474, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_475, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_478, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_481, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_482) ? node_482 = come_decrement_ref_count(node_482, ((struct sNode*)node_482)->finalize, ((struct sNode*)node_482)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value466, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__159;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_483;
    __dec_obj124=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_474);
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj125=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_475);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj125,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj126=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_449));
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top_450;
    __dec_obj127=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_447);
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj128=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_448);
    __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun_443;
    info->caller_line=caller_line_444;
    info->caller_sname=caller_sname_445;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_446;
    __result_obj__160 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value470=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2160, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_447 = come_decrement_ref_count(last_code_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_448 = come_decrement_ref_count(last_code2_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top_449 = come_decrement_ref_count(sname_top_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, funX_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type_458, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_459, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_467, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_468, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname_471 = come_decrement_ref_count(sname_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_473, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, generics_type_saved_474, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_475, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block_478, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun_481, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_482) ? node_482 = come_decrement_ref_count(node_482, ((struct sNode*)node_482)->finalize, ((struct sNode*)node_482)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value470, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_452;
unsigned int hash_453;
unsigned int it_454;
struct sFun* __result_obj__143;
struct sFun* __result_obj__144;
struct sFun* __result_obj__145;
struct sFun* __result_obj__146;
default_value_452 = (void*)0;
    memset(&default_value_452,0,sizeof(struct sFun*));
    hash_453=string_get_hash_key(((char*)key))%self->size;
    it_454=hash_453;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_454]        ) {
            if(            string_equals(self->keys[it_454],key)            ) {
                __result_obj__143 = (struct sFun*)come_increment_ref_count(self->items[it_454]);
                come_call_finalizer(sFun_finalize, default_value_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__143;
            }
            it_454++;
            if(            it_454>=self->size            ) {
                it_454=0;
            }
            else if(            it_454==hash_453            ) {
                __result_obj__144 = (struct sFun*)come_increment_ref_count(default_value_452);
                come_call_finalizer(sFun_finalize, default_value_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__144;
            }
        }
        else {
            __result_obj__145 = (struct sFun*)come_increment_ref_count(default_value_452);
            come_call_finalizer(sFun_finalize, default_value_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__145;
        }
    }
    __result_obj__146 = (struct sFun*)come_increment_ref_count(default_value_452);
    come_call_finalizer(sFun_finalize, default_value_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_455;
unsigned int hash_456;
unsigned int it_457;
struct sFun* __result_obj__147;
struct sFun* __result_obj__148;
struct sFun* __result_obj__149;
struct sFun* __result_obj__150;
default_value_455 = (void*)0;
    memset(&default_value_455,0,sizeof(struct sFun*));
    hash_456=string_get_hash_key(((char*)key))%self->size;
    it_457=hash_456;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_457]        ) {
            if(            string_equals(self->keys[it_457],key)            ) {
                __result_obj__147 = (struct sFun*)come_increment_ref_count(self->items[it_457]);
                come_call_finalizer(sFun_finalize, default_value_455, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__147;
            }
            it_457++;
            if(            it_457>=self->size            ) {
                it_457=0;
            }
            else if(            it_457==hash_456            ) {
                __result_obj__148 = (struct sFun*)come_increment_ref_count(default_value_455);
                come_call_finalizer(sFun_finalize, default_value_455, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__148;
            }
        }
        else {
            __result_obj__149 = (struct sFun*)come_increment_ref_count(default_value_455);
            come_call_finalizer(sFun_finalize, default_value_455, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__149;
        }
    }
    __result_obj__150 = (struct sFun*)come_increment_ref_count(default_value_455);
    come_call_finalizer(sFun_finalize, default_value_455, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj115;
struct tuple2$2char$phbool$* __result_obj__151;
    __dec_obj115=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v2=v2;
    __result_obj__151 = (struct tuple2$2char$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_461;
struct sType* __result_obj__153;
struct sType* __result_obj__154;
struct sType* result_462;
struct sType* __result_obj__155;
result_461 = (void*)0;
result_462 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_461,0,sizeof(struct sType*));
        __result_obj__153 = result_461;
        return __result_obj__153;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__154 = self->it->item;
        return __result_obj__154;
    }
    memset(&result_462,0,sizeof(struct sType*));
    __result_obj__155 = result_462;
    return __result_obj__155;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_464;
struct sType* __result_obj__156;
struct sType* __result_obj__157;
struct sType* result_465;
struct sType* __result_obj__158;
result_464 = (void*)0;
result_465 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_464,0,sizeof(struct sType*));
        __result_obj__156 = result_464;
        return __result_obj__156;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__157 = self->it->item;
        return __result_obj__157;
    }
    memset(&result_465,0,sizeof(struct sType*));
    __result_obj__158 = result_465;
    return __result_obj__158;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_485;
int caller_line_486;
char* caller_sname_487;
_Bool comma_instead_of_semicolon_488;
char* last_code_489;
char* __dec_obj129;
char* last_code2_490;
char* __dec_obj130;
void* __right_value471 = (void*)0;
char* sname_top_491;
int sline_top_492;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sFun* funX_493;
void* __right_value475 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
char* __dec_obj133;
_Bool __result_obj__161;
void* __right_value476 = (void*)0;
struct sType* result_type_494;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1sType$ph* param_types_495;
struct list$1sType$ph* o2_saved_496;
struct sType* it_497;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* param_type_498;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1char$ph* param_names_499;
void* __right_value483 = (void*)0;
struct list$1char$ph* param_default_parametors_500;
char* p_501;
int sline_502;
char* sname_503;
char* head_504;
struct buffer* source_505;
void* __right_value484 = (void*)0;
struct buffer* __dec_obj134;
struct list$1char$ph* method_generics_type_names_506;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1char$ph* __dec_obj135;
struct list$1char$ph* o2_saved_507;
char* it_508;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1char$ph* __dec_obj136;
char* __dec_obj137;
void* __right_value489 = (void*)0;
struct sBlock* block_509;
struct buffer* __dec_obj138;
char* __dec_obj139;
_Bool var_args_510;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sFun* fun_511;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value498 = (void*)0;
struct sNode* node_512;
_Bool Value_513;
void* __if_result__1_514 = (void*)0;
_Bool __result_obj__162;
struct list$1char$ph* __dec_obj140;
void* __right_value499 = (void*)0;
char* __dec_obj141;
char* __dec_obj142;
char* __dec_obj143;
_Bool __result_obj__163;
    caller_fun_485=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_486=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_487=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_488=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_489=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj129=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_490=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj130=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top_491=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_492=info->sline;
    funX_493=((struct sFun*)(__right_value474=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value473=__builtin_string(fun_name))))));
    (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value474, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    funX_493    ) {
        __dec_obj131=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_491));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_top_492;
        __dec_obj132=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code_489);
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj133=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_490);
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->caller_fun=caller_fun_485;
        info->caller_line=caller_line_486;
        info->caller_sname=caller_sname_487;
        info->comma_instead_of_semicolon=comma_instead_of_semicolon_488;
        __result_obj__161 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code_489 = come_decrement_ref_count(last_code_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_490 = come_decrement_ref_count(last_code2_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_491 = come_decrement_ref_count(sname_top_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    result_type_494=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_495=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2199, "struct list$1sType$ph*"))));
    for(    o2_saved_496=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_497=list$1sType$ph_begin((o2_saved_496))    ;    !list$1sType$ph_end((o2_saved_496))    ;    it_497=list$1sType$ph_next((o2_saved_496))    ){
        param_type_498=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value479=sType_clone(it_497))),info));
        come_call_finalizer(sType_finalize, __right_value479, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_add(param_types_495,(struct sType*)come_increment_ref_count(sType_clone(param_type_498)));
        come_call_finalizer(sType_finalize, param_type_498, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_496, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names_499=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_500=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_501=info->p;
    sline_502=info->sline;
    sname_503=(char*)come_increment_ref_count(info->sname);
    head_504=info->head;
    source_505=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj134=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj134,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_506=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj135=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2221, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj135,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    o2_saved_507=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_508=list$1char$ph_begin((o2_saved_507))    ;    !list$1char$ph_end((o2_saved_507))    ;    it_508=list$1char$ph_next((o2_saved_507))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_508, "05function.c", 2223, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_507, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj136=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj136,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj137=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block_509=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_504;
    __dec_obj138=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_505);
    come_call_finalizer(buffer_finalize, __dec_obj138,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_501;
    info->sline=sline_502;
    __dec_obj139=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_503);
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type_494->mInline=(_Bool)0;
    result_type_494->mStatic=(_Bool)0;
    result_type_494->mUniq=(_Bool)0;
    var_args_510=generics_fun->mVarArgs;
    fun_511=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2245, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_494),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types_495)),(struct list$1char$ph*)come_increment_ref_count(param_names_499),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_500),(_Bool)0,var_args_510,(struct sBlock*)come_increment_ref_count(block_509),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
    fun_511->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_511));
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2253, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value497=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2253, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_511),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_512=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sFunNode_finalize, __right_value497, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_513=node_compile(node_512,info);
    if(    !Value_513    ) {
        __result_obj__162 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code_489 = come_decrement_ref_count(last_code_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_490 = come_decrement_ref_count(last_code2_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_491 = come_decrement_ref_count(sname_top_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_494, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_495, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_499, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_500, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_503 = come_decrement_ref_count(sname_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_506, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_509, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_511, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_512) ? node_512 = come_decrement_ref_count(node_512, ((struct sNode*)node_512)->finalize, ((struct sNode*)node_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__162;
    }
    else {
        __if_result__1_514=(void*)(Value_513);
;
    }
    __dec_obj140=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_506);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj140,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj141=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_491));
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top_492;
    __dec_obj142=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_489);
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj143=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_490);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun_485;
    info->caller_line=caller_line_486;
    info->caller_sname=caller_sname_487;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_488;
    __result_obj__163 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code_489 = come_decrement_ref_count(last_code_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_490 = come_decrement_ref_count(last_code2_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top_491 = come_decrement_ref_count(sname_top_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_494, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_495, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_499, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_500, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname_503 = come_decrement_ref_count(sname_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_506, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block_509, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun_511, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_512) ? node_512 = come_decrement_ref_count(node_512, ((struct sNode*)node_512)->finalize, ((struct sNode*)node_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__163;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_515;
char* source_head_516;
void* __right_value500 = (void*)0;
char* attribute_517;
struct sType* result_type_518;
char* var_name_519;
_Bool constructor__520;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj144;
void* __right_value503 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* result_type2_521=0;
char* var_name2_522=0;
_Bool err_523=0;
struct sType* __dec_obj145;
char* __dec_obj146;
_Bool method_definition_524;
char* p_525;
int sline_526;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct buffer* buf2_527;
char* fun_name_528;
char* base_fun_name_529;
struct sType* obj_type2_530;
void* __right_value506 = (void*)0;
char* __dec_obj147;
void* __right_value507 = (void*)0;
char* __dec_obj148;
void* __right_value508 = (void*)0;
struct sType* __dec_obj149;
void* __right_value509 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* obj_type_531=0;
char* name_532=0;
_Bool err_533=0;
void* __right_value510 = (void*)0;
char* __dec_obj150;
void* __right_value511 = (void*)0;
char* __dec_obj151;
void* __right_value512 = (void*)0;
struct sType* __dec_obj152;
void* __right_value513 = (void*)0;
char* __dec_obj153;
void* __right_value514 = (void*)0;
char* __dec_obj154;
void* __right_value515 = (void*)0;
struct sType* __dec_obj155;
void* __right_value516 = (void*)0;
char* __dec_obj156;
void* __right_value517 = (void*)0;
char* __dec_obj157;
void* __right_value518 = (void*)0;
struct sType* __dec_obj158;
void* __right_value519 = (void*)0;
char* __dec_obj159;
void* __right_value520 = (void*)0;
char* __dec_obj160;
void* __right_value521 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var9 = (void*)0;
struct list$1sType$ph* param_types_534=0;
struct list$1char$ph* param_names_535=0;
struct list$1char$ph* param_default_parametors_536=0;
_Bool var_args_537=0;
char* header_tail_538;
void* __right_value522 = (void*)0;
_Bool const_fun_539;
int version_540;
int n_541;
void* __right_value523 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var10 = (void*)0;
char* asm_fun_542=0;
char* fun_attribute_543=0;
void* __right_value524 = (void*)0;
char* __dec_obj161;
_Bool in_top_level_544;
void* __right_value525 = (void*)0;
struct sBlock* block_545;
void* __right_value526 = (void*)0;
char* fun_name_547;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sFun* fun_548;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sFun* fun2_549;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value540 = (void*)0;
struct sNode* __result_obj__166;
void* __right_value541 = (void*)0;
char* none_generics_name_551;
void* __right_value542 = (void*)0;
char* generics_sname_552;
int generics_sline_553;
void* __right_value543 = (void*)0;
char* block_554;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sGenericsFun* fun_555;
void* __right_value550 = (void*)0;
char* fun_name3_556;
void* __right_value556 = (void*)0;
struct sNode* __result_obj__178;
void* __right_value557 = (void*)0;
char* generics_sname_578;
int generics_sline_579;
void* __right_value558 = (void*)0;
char* block_580;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sGenericsFun* fun_581;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sNode* __result_obj__179;
char* source_tail_582;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
char* new_fun_name_583;
void* __right_value569 = (void*)0;
char* __dec_obj163;
_Bool static_fun_584;
_Bool inline_fun_585;
_Bool uniq_fun_586;
void* __right_value570 = (void*)0;
char* generics_sname_587;
int generics_sline_588;
void* __right_value571 = (void*)0;
char* block_589;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sFun* fun_590;
void* __right_value575 = (void*)0;
char* header_591;
void* __right_value576 = (void*)0;
char* id_592;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value583 = (void*)0;
struct sNode* __result_obj__180;
void* __right_value584 = (void*)0;
struct sBlock* block_593;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sFun* fun_594;
void* __right_value589 = (void*)0;
char* header_595;
void* __right_value590 = (void*)0;
char* id_596;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value595 = (void*)0;
struct sNode* __result_obj__181;
void* __right_value596 = (void*)0;
char* new_fun_name_597;
void* __right_value597 = (void*)0;
char* __dec_obj164;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sFun* fun_598;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
char* header_599;
void* __right_value603 = (void*)0;
char* id_600;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value606 = (void*)0;
struct sNode* __result_obj__182;
void* __right_value607 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var11 = (void*)0;
char* asm_fun_601=0;
char* fun_attribute2_602=0;
void* __right_value608 = (void*)0;
char* __dec_obj165;
void* __right_value609 = (void*)0;
char* __dec_obj166;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sFun* fun_603;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
char* header_604;
void* __right_value615 = (void*)0;
char* id_605;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value618 = (void*)0;
struct sNode* __result_obj__183;
void* __right_value619 = (void*)0;
struct sNode* __result_obj__184;
fun_name_528 = (void*)0;
    header_head_515=info->p;
    source_head_516=info->p;
    attribute_517=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_518=((void*)0);
    var_name_519=((void*)0);
    constructor__520=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0    ) {
        ((char*)(__right_value501=parse_word(info)));
        (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        __dec_obj144=result_type_518,
        result_type_518=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type_518->mHeap=(_Bool)1;
        constructor__520=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value503=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_521=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_522=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_523=multiple_assign_var7->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value503, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj145=result_type_518,
        result_type_518=(struct sType*)come_increment_ref_count(result_type2_521);
        come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj146=var_name_519,
        var_name_519=(char*)come_increment_ref_count(var_name2_522);
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        !err_523        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer(sType_finalize, result_type2_521, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name2_522 = come_decrement_ref_count(var_name2_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    method_definition_524=(_Bool)0;
    {
        p_525=info->p;
        sline_526=info->sline;
        buf2_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2314, "struct buffer*"))));
        while(        xisalnum(*info->p)||*info->p==95        ) {
            buffer_append_char(buf2_527,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(        *info->p==42        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==91&&*(info->p+1)==93        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==37        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_527)>0&&*info->p==58&&*(info->p+1)==58        ) {
            method_definition_524=(_Bool)1;
        }
        info->p=p_525;
        info->sline=sline_526;
        come_call_finalizer(buffer_finalize, buf2_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    base_fun_name_529=((void*)0);
    obj_type2_530=((void*)0);
    if(    constructor__520    ) {
        __dec_obj147=base_fun_name_529,
        base_fun_name_529=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj148=fun_name_528,
        fun_name_528=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_529,info,(_Bool)1));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj149=obj_type2_530,
        obj_type2_530=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else if(    method_definition_524    ) {
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value509=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_531=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_532=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_533=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value509, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !err_533        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj150=base_fun_name_529,
        base_fun_name_529=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj151=fun_name_528,
        fun_name_528=(char*)come_increment_ref_count(create_method_name(obj_type_531,(_Bool)0,base_fun_name_529,info,(_Bool)1));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj152=obj_type2_530,
        obj_type2_530=(struct sType*)come_increment_ref_count(sType_clone(obj_type_531));
        come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, obj_type_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_532 = come_decrement_ref_count(name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    info->impl_type    ) {
        __dec_obj153=base_fun_name_529,
        base_fun_name_529=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj154=fun_name_528,
        fun_name_528=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_529,info,(_Bool)1));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj155=obj_type2_530,
        obj_type2_530=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer(sType_finalize, __dec_obj155,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else if(    info->class_type    ) {
        __dec_obj156=base_fun_name_529,
        base_fun_name_529=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj157=fun_name_528,
        fun_name_528=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_529,info,(_Bool)1));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj158=obj_type2_530,
        obj_type2_530=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj158,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj159=fun_name_528,
        fun_name_528=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj160=base_fun_name_529,
        base_fun_name_529=(char*)come_increment_ref_count(__builtin_string(fun_name_528));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_529,"initialize")    ) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value521=parse_params(info,constructor__520)));
    param_types_534=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_535=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_536=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_537=multiple_assign_var9->v4;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value521, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    header_tail_538=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_529,"initialize")    ) {
        info->in_class=(_Bool)1;
    }
    if(    result_type_518->mImmutable    ) {
        if(        method_definition_524||info->impl_type||info->class_type        ) {
            if(            list$1sType$ph_length(param_types_534)>0            ) {
                ((struct sType*)(__right_value522=list$1sType$ph_operator_load_element(param_types_534,0)))->mImmutable=(_Bool)1;
                come_call_finalizer(sType_finalize, __right_value522, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    const_fun_539=(_Bool)0;
    version_540=0;
    if(    parsecmp("version",info)    ) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_541=0;
        while(        xisdigit(*info->p)        ) {
            n_541=n_541*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_540=n_541;
    }
    multiple_assign_var10=((struct tuple2$2char$phchar$ph*)(__right_value523=parse_function_attribute(info)));
    asm_fun_542=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    fun_attribute_543=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value523, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    string_operator_not_equals(asm_fun_542,"")    ) {
        __dec_obj161=fun_name_528,
        fun_name_528=(char*)come_increment_ref_count(__builtin_string(asm_fun_542));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    in_top_level_544=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_529,"lambda")    ) {
        block_545=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_546=0;
        lambda_num_546++;
        fun_name_547=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_546));
        result_type_518->mInline=(_Bool)0;
        result_type_518->mStatic=(_Bool)0;
        result_type_518->mUniq=(_Bool)0;
        fun_548=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2443, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_547)),(struct sType*)come_increment_ref_count(result_type_518),(struct list$1sType$ph*)come_increment_ref_count(param_types_534),(struct list$1char$ph*)come_increment_ref_count(param_names_535),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_536),(_Bool)0,var_args_537,(struct sBlock*)come_increment_ref_count(block_545),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_539,((void*)0),((void*)0),0,(_Bool)0));
        fun2_549=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value533=__builtin_string(fun_name_547)))));
        (__right_value532 = come_decrement_ref_count(__right_value532, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_547)),(struct sFun*)come_increment_ref_count(fun_548));
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2453, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value537=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2453, "struct sLambdaNode*")),fun_548,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__166 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value540=_inf_value5)));
        come_call_finalizer(sBlock_finalize, block_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_547 = come_decrement_ref_count(fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, fun_548, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_549, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (attribute_517 = come_decrement_ref_count(attribute_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_519 = come_decrement_ref_count(var_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name_528 = come_decrement_ref_count(fun_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name_529 = come_decrement_ref_count(base_fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun_542 = come_decrement_ref_count(asm_fun_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute_543 = come_decrement_ref_count(fun_attribute_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sLambdaNode_finalize, __right_value537, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value540) ? __right_value540 = come_decrement_ref_count(__right_value540, ((struct sNode*)__right_value540)->finalize, ((struct sNode*)__right_value540)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__166) ? __result_obj__166 = come_decrement_ref_count(__result_obj__166, ((struct sNode*)__result_obj__166)->finalize, ((struct sNode*)__result_obj__166)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__166;
        come_call_finalizer(sBlock_finalize, block_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_547 = come_decrement_ref_count(fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, fun_548, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_549, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph_length(info->generics_type_names)>0    ) {
        none_generics_name_551=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_552=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_553=info->sline;
        block_554=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_555=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2463, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value545=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value546=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sType*)come_increment_ref_count(result_type_518),(struct list$1sType$ph*)come_increment_ref_count(param_types_534),(struct list$1char$ph*)come_increment_ref_count(param_names_535),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_536),var_args_537,(char*)come_increment_ref_count(block_554),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_552)),generics_sline_553,const_fun_539));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value545, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value546, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        fun_name3_556=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_551,base_fun_name_529));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_556)),(struct sGenericsFun*)come_increment_ref_count(fun_555));
        __result_obj__178 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_551 = come_decrement_ref_count(none_generics_name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (generics_sname_552 = come_decrement_ref_count(generics_sname_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_554 = come_decrement_ref_count(block_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_555, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_556 = come_decrement_ref_count(fun_name3_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (attribute_517 = come_decrement_ref_count(attribute_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_519 = come_decrement_ref_count(var_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name_528 = come_decrement_ref_count(fun_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name_529 = come_decrement_ref_count(base_fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun_542 = come_decrement_ref_count(asm_fun_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute_543 = come_decrement_ref_count(fun_attribute_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__178;
        (none_generics_name_551 = come_decrement_ref_count(none_generics_name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (generics_sname_552 = come_decrement_ref_count(generics_sname_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_554 = come_decrement_ref_count(block_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_555, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_556 = come_decrement_ref_count(fun_name3_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    list$1char$ph_length(info->method_generics_type_names)>0    ) {
        generics_sname_578=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_579=info->sline;
        block_580=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_581=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2477, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value560=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value561=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sType*)come_increment_ref_count(result_type_518),(struct list$1sType$ph*)come_increment_ref_count(param_types_534),(struct list$1char$ph*)come_increment_ref_count(param_names_535),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_536),var_args_537,(char*)come_increment_ref_count(block_580),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_578)),generics_sline_579,const_fun_539));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value560, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value561, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        method_definition_524        ) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sGenericsFun*)come_increment_ref_count(fun_581));
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_529)),(struct sGenericsFun*)come_increment_ref_count(fun_581));
        }
        __result_obj__179 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_578 = come_decrement_ref_count(generics_sname_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_580 = come_decrement_ref_count(block_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_581, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (attribute_517 = come_decrement_ref_count(attribute_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_519 = come_decrement_ref_count(var_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name_528 = come_decrement_ref_count(fun_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name_529 = come_decrement_ref_count(base_fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun_542 = come_decrement_ref_count(asm_fun_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute_543 = come_decrement_ref_count(fun_attribute_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__result_obj__179) ? __result_obj__179 = come_decrement_ref_count(__result_obj__179, ((struct sNode*)__result_obj__179)->finalize, ((struct sNode*)__result_obj__179)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__179;
        (generics_sname_578 = come_decrement_ref_count(generics_sname_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_580 = come_decrement_ref_count(block_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_581, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    *info->p==123    ) {
        source_tail_582=info->p-1;
        if(        version_540>0        ) {
            new_fun_name_583=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value567=__builtin_string(fun_name_528))),version_540));
            (__right_value567 = come_decrement_ref_count(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            __dec_obj163=fun_name_528,
            fun_name_528=(char*)come_increment_ref_count(__builtin_string(new_fun_name_583));
            __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (new_fun_name_583 = come_decrement_ref_count(new_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        static_fun_584=(_Bool)0;
        if(        result_type_518->mStatic        ) {
            result_type_518->mStatic=(_Bool)0;
            result_type_518->mUniq=(_Bool)0;
            static_fun_584=(_Bool)1;
        }
        inline_fun_585=(_Bool)0;
        if(        result_type_518->mInline        ) {
            result_type_518->mInline=(_Bool)0;
            result_type_518->mUniq=(_Bool)0;
            inline_fun_585=(_Bool)1;
        }
        uniq_fun_586=(_Bool)0;
        if(        result_type_518->mUniq        ) {
            result_type_518->mUniq=(_Bool)0;
            result_type_518->mInline=(_Bool)0;
            result_type_518->mStatic=(_Bool)0;
            uniq_fun_586=(_Bool)1;
        }
        if(        result_type_518->mUniq        ) {
            result_type_518->mUniq=(_Bool)0;
            result_type_518->mInline=(_Bool)0;
            result_type_518->mStatic=(_Bool)0;
        }
        if(        info->defining_class&&info->defining_class->mUniq        ) {
            uniq_fun_586=(_Bool)1;
        }
        if(        uniq_fun_586        ) {
            generics_sname_587=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_588=info->sline;
            block_589=(char*)come_increment_ref_count(skip_block(info,constructor__520));
            fun_590=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2532, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sType*)come_increment_ref_count(result_type_518),(struct list$1sType$ph*)come_increment_ref_count(param_types_534),(struct list$1char$ph*)come_increment_ref_count(param_names_535),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_536),(_Bool)0,var_args_537,((void*)0),static_fun_584,info,inline_fun_585,uniq_fun_586,(_Bool)0,(char*)come_increment_ref_count(attribute_517),(char*)come_increment_ref_count(fun_attribute_543),const_fun_539,(char*)come_increment_ref_count(block_589),(char*)come_increment_ref_count(generics_sname_587),generics_sline_588,(_Bool)0));
            if(            info->output_header_file            ) {
                if(                !result_type_518->mStatic&&!info->no_output_come_code                ) {
                    header_591=(char*)come_increment_ref_count(make_come_header_function(fun_590,(char*)come_increment_ref_count(base_fun_name_529),(struct sType*)come_increment_ref_count(obj_type2_530),version_540,info));
                    id_592=(char*)come_increment_ref_count(__builtin_string(fun_name_528));
                    add_come_code_at_come_header(info,id_592,"%s",header_591);
                    (header_591 = come_decrement_ref_count(header_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_592 = come_decrement_ref_count(id_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            if(            info->in_class            ) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sFun*)come_increment_ref_count(fun_590));
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sFun*)come_increment_ref_count(fun_590));
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sFun*)come_increment_ref_count(fun_590));
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sFun*)come_increment_ref_count(fun_590));
            }
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2560, "struct sNode");
            _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value582=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2560, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_590),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sFunNode_finalize;
            _inf_value6->clone=(void*)sFunNode_clone;
            _inf_value6->compile=(void*)sFunNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sFunNode_kind;
            __result_obj__180 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value583=_inf_value6)));
            (generics_sname_587 = come_decrement_ref_count(generics_sname_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (block_589 = come_decrement_ref_count(block_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_590, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_517 = come_decrement_ref_count(attribute_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_519 = come_decrement_ref_count(var_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_528 = come_decrement_ref_count(fun_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_529 = come_decrement_ref_count(base_fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_542 = come_decrement_ref_count(asm_fun_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_543 = come_decrement_ref_count(fun_attribute_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value582, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value583) ? __right_value583 = come_decrement_ref_count(__right_value583, ((struct sNode*)__right_value583)->finalize, ((struct sNode*)__right_value583)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__180) ? __result_obj__180 = come_decrement_ref_count(__result_obj__180, ((struct sNode*)__result_obj__180)->finalize, ((struct sNode*)__result_obj__180)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__180;
            (generics_sname_587 = come_decrement_ref_count(generics_sname_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (block_589 = come_decrement_ref_count(block_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_590, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            block_593=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__520,(_Bool)1));
            fun_594=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2565, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sType*)come_increment_ref_count(result_type_518),(struct list$1sType$ph*)come_increment_ref_count(param_types_534),(struct list$1char$ph*)come_increment_ref_count(param_names_535),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_536),(_Bool)0,var_args_537,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_593)),static_fun_584,info,inline_fun_585,uniq_fun_586,(_Bool)0,(char*)come_increment_ref_count(attribute_517),(char*)come_increment_ref_count(fun_attribute_543),const_fun_539,((void*)0),((void*)0),0,(_Bool)0));
            if(            info->output_header_file            ) {
                if(                !result_type_518->mStatic&&!info->no_output_come_code                ) {
                    header_595=(char*)come_increment_ref_count(make_come_header_function(fun_594,(char*)come_increment_ref_count(base_fun_name_529),(struct sType*)come_increment_ref_count(obj_type2_530),version_540,info));
                    id_596=(char*)come_increment_ref_count(__builtin_string(fun_name_528));
                    add_come_code_at_come_header(info,id_596,"%s",header_595);
                    (header_595 = come_decrement_ref_count(header_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_596 = come_decrement_ref_count(id_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            if(            info->in_class            ) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sFun*)come_increment_ref_count(fun_594));
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sFun*)come_increment_ref_count(fun_594));
            }
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2591, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value594=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2591, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_594),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result_obj__181 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value595=_inf_value7)));
            come_call_finalizer(sBlock_finalize, block_593, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun_594, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_517 = come_decrement_ref_count(attribute_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_519 = come_decrement_ref_count(var_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_528 = come_decrement_ref_count(fun_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_529 = come_decrement_ref_count(base_fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_542 = come_decrement_ref_count(asm_fun_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_543 = come_decrement_ref_count(fun_attribute_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value594, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value595) ? __right_value595 = come_decrement_ref_count(__right_value595, ((struct sNode*)__right_value595)->finalize, ((struct sNode*)__right_value595)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__181) ? __result_obj__181 = come_decrement_ref_count(__result_obj__181, ((struct sNode*)__result_obj__181)->finalize, ((struct sNode*)__result_obj__181)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__181;
            come_call_finalizer(sBlock_finalize, block_593, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun_594, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59    ) {
        if(        version_540>0        ) {
            new_fun_name_597=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_528,version_540));
            __dec_obj164=fun_name_528,
            fun_name_528=(char*)come_increment_ref_count(__builtin_string(new_fun_name_597));
            __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (new_fun_name_597 = come_decrement_ref_count(new_fun_name_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_518->mStatic=(_Bool)0;
            result_type_518->mUniq=(_Bool)0;
            result_type_518->mInline=(_Bool)0;
            fun_598=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2608, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sType*)come_increment_ref_count(result_type_518),(struct list$1sType$ph*)come_increment_ref_count(param_types_534),(struct list$1char$ph*)come_increment_ref_count(param_names_535),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_536),(_Bool)1,var_args_537,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_517),(char*)come_increment_ref_count(fun_attribute_543),const_fun_539,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sFun*)come_increment_ref_count(fun_598));
            if(            info->output_header_file            ) {
                if(                !result_type_518->mStatic&&!info->no_output_come_code                ) {
                    header_599=(char*)come_increment_ref_count(make_come_header_function(fun_598,(char*)come_increment_ref_count(base_fun_name_529),(struct sType*)come_increment_ref_count(obj_type2_530),version_540,info));
                    id_600=(char*)come_increment_ref_count(__builtin_string(fun_name_528));
                    add_come_code_at_come_header(info,id_600,"%s",header_599);
                    (header_599 = come_decrement_ref_count(header_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_600 = come_decrement_ref_count(id_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2628, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value605=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2628, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_598),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result_obj__182 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value606=_inf_value8)));
            come_call_finalizer(sFun_finalize, fun_598, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_517 = come_decrement_ref_count(attribute_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_519 = come_decrement_ref_count(var_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_528 = come_decrement_ref_count(fun_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_529 = come_decrement_ref_count(base_fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_542 = come_decrement_ref_count(asm_fun_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_543 = come_decrement_ref_count(fun_attribute_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value605, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value606) ? __right_value606 = come_decrement_ref_count(__right_value606, ((struct sNode*)__right_value606)->finalize, ((struct sNode*)__right_value606)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__182;
            come_call_finalizer(sFun_finalize, fun_598, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2char$phchar$ph*)(__right_value607=parse_function_attribute(info)));
            asm_fun_601=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            fun_attribute2_602=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value607, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            string_operator_not_equals(asm_fun_601,"")            ) {
                __dec_obj165=fun_name_528,
                fun_name_528=(char*)come_increment_ref_count(__builtin_string(asm_fun_601));
                __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            __dec_obj166=fun_attribute_543,
            fun_attribute_543=(char*)come_increment_ref_count(string_operator_add(fun_attribute_543,fun_attribute2_602));
            __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            result_type_518->mStatic=(_Bool)0;
            result_type_518->mUniq=(_Bool)0;
            result_type_518->mInline=(_Bool)0;
            fun_603=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2643, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sType*)come_increment_ref_count(result_type_518),(struct list$1sType$ph*)come_increment_ref_count(param_types_534),(struct list$1char$ph*)come_increment_ref_count(param_names_535),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_536),(_Bool)1,var_args_537,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_517),(char*)come_increment_ref_count(fun_attribute_543),const_fun_539,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_528)),(struct sFun*)come_increment_ref_count(fun_603));
            if(            info->output_header_file            ) {
                if(                !result_type_518->mStatic&&!info->no_output_come_code                ) {
                    header_604=(char*)come_increment_ref_count(make_come_header_function(fun_603,(char*)come_increment_ref_count(base_fun_name_529),(struct sType*)come_increment_ref_count(obj_type2_530),version_540,info));
                    id_605=(char*)come_increment_ref_count(__builtin_string(fun_name_528));
                    add_come_code_at_come_header(info,id_605,"%s",header_604);
                    (header_604 = come_decrement_ref_count(header_604, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_605 = come_decrement_ref_count(id_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2664, "struct sNode");
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value617=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2664, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_603),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            __result_obj__183 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value618=_inf_value9)));
            (asm_fun_601 = come_decrement_ref_count(asm_fun_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute2_602 = come_decrement_ref_count(fun_attribute2_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_603, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_517 = come_decrement_ref_count(attribute_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_519 = come_decrement_ref_count(var_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_528 = come_decrement_ref_count(fun_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_529 = come_decrement_ref_count(base_fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_542 = come_decrement_ref_count(asm_fun_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_543 = come_decrement_ref_count(fun_attribute_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value617, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value618) ? __right_value618 = come_decrement_ref_count(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__183) ? __result_obj__183 = come_decrement_ref_count(__result_obj__183, ((struct sNode*)__result_obj__183)->finalize, ((struct sNode*)__result_obj__183)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__183;
            (asm_fun_601 = come_decrement_ref_count(asm_fun_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute2_602 = come_decrement_ref_count(fun_attribute2_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_603, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    else {
        ((struct tuple2$2int$bool$*)(__right_value619=err_msg(info,"invalid character(2)(%c)",*info->p)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value619, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_544;
    __result_obj__184 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_517 = come_decrement_ref_count(attribute_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_519 = come_decrement_ref_count(var_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name_528 = come_decrement_ref_count(fun_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (base_fun_name_529 = come_decrement_ref_count(base_fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, obj_type2_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (asm_fun_542 = come_decrement_ref_count(asm_fun_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_attribute_543 = come_decrement_ref_count(fun_attribute_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__result_obj__184) ? __result_obj__184 = come_decrement_ref_count(__result_obj__184, ((struct sNode*)__result_obj__184)->finalize, ((struct sNode*)__result_obj__184)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__184;
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

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__164;
void* __right_value538 = (void*)0;
struct sLambdaNode* result_550;
void* __right_value539 = (void*)0;
char* __dec_obj162;
struct sLambdaNode* __result_obj__165;
    if(    self==(void*)0    ) {
        __result_obj__164 = (void*)0;
        return __result_obj__164;
    }
    result_550=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(    self!=((void*)0)    ) {
        result_550->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj162=result_550->sname,
        result_550->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaNode_clone", 5, "char*"));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_550->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_550->mFun=self->mFun;
    }
    __result_obj__165 = result_550;
    come_call_finalizer(sLambdaNode_finalize, result_550, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_574;
unsigned int it_575;
_Bool same_key_exist_576;
char* it2_577;
struct map$2char$phsGenericsFun$ph* __result_obj__177;
    if(    self->len*10>=self->size    ) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash_574=string_get_hash_key(((char*)key))%self->size;
    it_575=hash_574;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_575]        ) {
            if(            string_equals(self->keys[it_575],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_575]);
                    (self->keys[it_575] = come_decrement_ref_count(self->keys[it_575], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_575]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_575]);
                    self->keys[it_575]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sGenericsFun_finalize, self->items[it_575], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_575]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_575]=item;
                }
                break;
            }
            it_575++;
            if(            it_575>=self->size            ) {
                it_575=0;
            }
            else if(            it_575==hash_574            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_575]=(_Bool)1;
            if(            1            ) {
                self->keys[it_575]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_575]=key;
            }
            if(            1            ) {
                self->items[it_575]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_575]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_576=(_Bool)0;
    for(    it2_577=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_577=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_577,key)        ) {
            same_key_exist_576=(_Bool)1;
        }
    }
    if(    !same_key_exist_576    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__177 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__177;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_557;
void* __right_value551 = (void*)0;
char** keys_558;
void* __right_value552 = (void*)0;
struct sGenericsFun** items_559;
void* __right_value553 = (void*)0;
_Bool* item_existance_560;
int len_561;
char* it_564;
struct sGenericsFun* default_value_567;
void* __right_value554 = (void*)0;
struct sGenericsFun* it2_568;
unsigned int hash_571;
int n_572;
struct sGenericsFun* default_value_573;
void* __right_value555 = (void*)0;
default_value_567 = (void*)0;
default_value_573 = (void*)0;
    size_557=self->size*10;
    keys_558=(char**)come_increment_ref_count(((char**)(__right_value551=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_557)), "./comelang.h", 2759, "char**"))));
    items_559=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value552=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(size_557)), "./comelang.h", 2760, "struct sGenericsFun**"))));
    item_existance_560=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value553=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_557)), "./comelang.h", 2761, "_Bool*"))));
    len_561=0;
    for(    it_564=map$2char$phsGenericsFun$ph_begin(self)    ;    !map$2char$phsGenericsFun$ph_end(self)    ;    it_564=map$2char$phsGenericsFun$ph_next(self)    ){
        memset(&default_value_567,0,sizeof(struct sGenericsFun*));
        it2_568=((struct sGenericsFun*)(__right_value554=map$2char$phsGenericsFun$ph_at(self,it_564,(struct sGenericsFun*)come_increment_ref_count(default_value_567))));
        come_call_finalizer(sGenericsFun_finalize, __right_value554, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_571=string_get_hash_key(((char*)it_564))%size_557;
        n_572=hash_571;
        while(        (_Bool)1        ) {
            if(            item_existance_560[n_572]            ) {
                n_572++;
                if(                n_572>=size_557                ) {
                    n_572=0;
                }
                else if(                n_572==hash_571                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_560[n_572]=(_Bool)1;
                keys_558[n_572]=it_564;
                items_559[n_572]=((struct sGenericsFun*)(__right_value555=map$2char$phsGenericsFun$ph_at(self,it_564,(struct sGenericsFun*)come_increment_ref_count(default_value_573))));
                come_call_finalizer(sGenericsFun_finalize, __right_value555, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_561++;
                come_call_finalizer(sGenericsFun_finalize, default_value_573, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sGenericsFun_finalize, default_value_573, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sGenericsFun_finalize, default_value_567, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_558;
    self->items=items_559;
    self->item_existance=item_existance_560;
    self->size=size_557;
    self->len=len_561;
}

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_562;
char* __result_obj__167;
char* __result_obj__168;
char* result_563;
char* __result_obj__169;
result_562 = (void*)0;
result_563 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_562,0,sizeof(char*));
        __result_obj__167 = result_562;
        return __result_obj__167;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__168 = self->key_list->it->item;
        return __result_obj__168;
    }
    memset(&result_563,0,sizeof(char*));
    __result_obj__169 = result_563;
    return __result_obj__169;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
char* result_565;
char* __result_obj__170;
char* __result_obj__171;
char* result_566;
char* __result_obj__172;
result_565 = (void*)0;
result_566 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_565,0,sizeof(char*));
        __result_obj__170 = result_565;
        return __result_obj__170;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__171 = self->key_list->it->item;
        return __result_obj__171;
    }
    memset(&result_566,0,sizeof(char*));
    __result_obj__172 = result_566;
    return __result_obj__172;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_569;
unsigned int it_570;
struct sGenericsFun* __result_obj__173;
struct sGenericsFun* __result_obj__174;
struct sGenericsFun* __result_obj__175;
struct sGenericsFun* __result_obj__176;
    hash_569=string_get_hash_key(((char*)key))%self->size;
    it_570=hash_569;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_570]        ) {
            if(            string_equals(self->keys[it_570],key)            ) {
                __result_obj__173 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_570]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__173;
            }
            it_570++;
            if(            it_570>=self->size            ) {
                it_570=0;
            }
            else if(            it_570==hash_569            ) {
                __result_obj__174 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__174;
            }
        }
        else {
            __result_obj__175 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__175;
        }
    }
    __result_obj__176 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__176;
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

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_606;
char* __dec_obj167;
char* last_code2_607;
char* __dec_obj168;
_Bool comma_instead_of_semicolon_608;
struct sClass* current_stack_frame_struct_609;
char* real_fun_name_610;
struct sFun* finalizer_611;
void* __right_value620 = (void*)0;
struct sType* type_before_612;
void* __right_value621 = (void*)0;
struct sType* type2_613;
void* __right_value622 = (void*)0;
char* fun_name2_614;
struct sType* __dec_obj169;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
char* none_generics_name_615;
void* __right_value625 = (void*)0;
char* generics_fun_name_616;
void* __right_value626 = (void*)0;
struct sGenericsFun* generics_fun_617;
void* __right_value627 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var12 = (void*)0;
char* name_624=0;
_Bool err_625=0;
void* __right_value628 = (void*)0;
char* __dec_obj170;
int i_626;
void* __right_value629 = (void*)0;
char* new_fun_name_627;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
char* __dec_obj171;
void* __right_value632 = (void*)0;
char* __dec_obj172;
struct sType* __dec_obj173;
void* __right_value633 = (void*)0;
char* __dec_obj174;
void* __right_value634 = (void*)0;
char* user_real_fun_name_628;
void* __right_value635 = (void*)0;
struct sFun* user_finalizer_629;
void* __right_value636 = (void*)0;
struct sType* type2_630;
struct sType* __dec_obj175;
struct sClass* klass_631;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct buffer* source_632;
void* __right_value639 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_642;
struct tuple2$2char$phsType$ph* it_645;
struct tuple2$2char$phsType$ph* multiple_assign_var13 = (void*)0;
char* name_648=0;
struct sType* field_type_649=0;
char* p_652;
int sline_653;
char* sname_654;
char* head_655;
struct buffer* source3_656;
struct buffer* __dec_obj176;
void* __right_value640 = (void*)0;
char* __dec_obj177;
void* __right_value641 = (void*)0;
struct sBlock* block_657;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sType* result_type_658;
void* __right_value645 = (void*)0;
char* name_659;
void* __right_value646 = (void*)0;
struct sType* self_type_660;
struct sType* __list_values13___662[1];
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1sType$ph* param_types_661;
void* __right_value649 = (void*)0;
char* __list_values14___663[1];
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1char$ph* param_names_664;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1char$ph* param_default_parametors_665;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sFun* fun2_666;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sFun* fun_667;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value664 = (void*)0;
struct sNode* node_668;
_Bool Value_669;
struct buffer* __dec_obj178;
char* __dec_obj179;
char* __dec_obj180;
char* __dec_obj181;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__208;
memset(&i_626, 0, sizeof(int));
    last_code_606=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj167=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_607=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj168=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_608=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_609=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_610=((void*)0);
    finalizer_611=((void*)0);
    type_before_612=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_613=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_613->mHeap=(_Bool)0;
    fun_name2_614=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj169=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj169,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        finalizer_611=((struct sFun*)(__right_value623=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_614)));
        come_call_finalizer(sFun_finalize, __right_value623, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        finalizer_611==((void*)0)        ) {
            none_generics_name_615=(char*)come_increment_ref_count(get_none_generics_name(type2_613->mClass->mName));
            generics_fun_name_616=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_615,fun_name));
            generics_fun_617=((struct sGenericsFun*)(__right_value626=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_616)));
            come_call_finalizer(sGenericsFun_finalize, __right_value626, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            generics_fun_617            ) {
                multiple_assign_var12=((struct tuple2$2char$phbool$*)(__right_value627=create_generics_fun((char*)come_increment_ref_count(fun_name2_614),generics_fun_617,(struct sType*)come_increment_ref_count(type),info)));
                name_624=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                err_625=multiple_assign_var12->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value627, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_625                ) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_611=((struct sFun*)(__right_value628=map$2char$phsFun$ph_operator_load_element(info->funcs,name_624)));
                come_call_finalizer(sFun_finalize, __right_value628, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name_624 = come_decrement_ref_count(name_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name_615 = come_decrement_ref_count(none_generics_name_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_616 = come_decrement_ref_count(generics_fun_name_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        __dec_obj170=real_fun_name_610,
        real_fun_name_610=(char*)come_increment_ref_count(fun_name2_614);
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        for(        i_626=128-1        ;        i_626>=1        ;        i_626--        ){
            new_fun_name_627=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_614,i_626));
            finalizer_611=((struct sFun*)(__right_value630=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_627)));
            come_call_finalizer(sFun_finalize, __right_value630, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            finalizer_611            ) {
                __dec_obj171=fun_name2_614,
                fun_name2_614=(char*)come_increment_ref_count(__builtin_string(new_fun_name_627));
                __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_627 = come_decrement_ref_count(new_fun_name_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_627 = come_decrement_ref_count(new_fun_name_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        finalizer_611==((void*)0)        ) {
            finalizer_611=((struct sFun*)(__right_value632=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_614)));
            come_call_finalizer(sFun_finalize, __right_value632, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj172=real_fun_name_610,
        real_fun_name_610=(char*)come_increment_ref_count(fun_name2_614);
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    finalizer_611==((void*)0)    ) {
        __dec_obj173=type,
        type=(struct sType*)come_increment_ref_count(type_before_612);
        come_call_finalizer(sType_finalize, __dec_obj173,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj174=real_fun_name_610,
        real_fun_name_610=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        user_real_fun_name_628=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_629=((struct sFun*)(__right_value635=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_628)));
        come_call_finalizer(sFun_finalize, __right_value635, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type2_630=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
        __dec_obj175=type,
        type=(struct sType*)come_increment_ref_count(type2_630);
        come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        klass_631=type->mClass;
        if(        type->mPointerNum>0&&klass_631->mStruct||type->mAllocaValue        ) {
            source_632=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2764, "struct buffer*"))));
            buffer_append_char(source_632,123);
            if(            user_finalizer_629            ) {
                char source2_633[1024];
                memset(&source2_633, 0, sizeof(char)                *(1024)                );
                snprintf(source2_633,1024,"if(self != ((void*)0) && come_get_ref_count(self) == 0) { %s(self); }\n",user_real_fun_name_628);
                buffer_append_str(source_632,source2_633);
            }
            klass_631=((struct sClass*)(__right_value639=map$2char$phsClass$ph_operator_load_element(info->classes,klass_631->mName)));
            come_call_finalizer(sClass_finalize, __right_value639, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_642=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_631->mFields)),it_645=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_642))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_642))            ;            it_645=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_642))            ){
                multiple_assign_var13=it_645;
                name_648=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_649=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                field_type_649->mHeap                ) {
                    char source2_650[1024];
                    memset(&source2_650, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_650,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_648,name_648,name_648,name_648);
                    buffer_append_str(source_632,source2_650);
                }
                else if(                field_type_649->mChannel                ) {
                    char source2_651[1024];
                    memset(&source2_651, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_651,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[0]); }",name_648,name_648);
                    buffer_append_str(source_632,source2_651);
                    snprintf(source2_651,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[1]); }",name_648,name_648);
                    buffer_append_str(source_632,source2_651);
                }
                (name_648 = come_decrement_ref_count(name_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_649, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_642, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            buffer_append_char(source_632,125);
            p_652=info->p;
            sline_653=info->sline;
            sname_654=(char*)come_increment_ref_count(info->sname);
            head_655=info->head;
            source3_656=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj176=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source_632);
            come_call_finalizer(buffer_finalize, __dec_obj176,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            info->p=source_632->buf;
            info->head=source_632->buf;
            __dec_obj177=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_610));
            __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->sline=0;
            block_657=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_658=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2813, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_659=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_610, "05function.c", 2814, "char*"));
            self_type_660=(struct sType*)come_increment_ref_count(sType_clone(type));
            self_type_660->mHeap=(_Bool)0;
            if(            self_type_660->mPointerNum==0            ) {
                self_type_660->mPointerNum=1;
            }
            if(            self_type_660->mPointerNum>1            ) {
                self_type_660->mPointerNum=1;
            }
            param_types_661=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___662[0]=self_type_660,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2823, "struct list$1sType$ph")),1,__list_values13___662)));
            param_names_664=(struct list$1char$ph*)come_increment_ref_count((__list_values14___663[0]=((char*)(__right_value649=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2824, "struct list$1char$ph")),1,__list_values14___663)));
            (__right_value649 = come_decrement_ref_count(__right_value649, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            param_default_parametors_665=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2825, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors_665,((void*)0));
            result_type_658->mStatic=(_Bool)0;
            result_type_658->mUniq=(_Bool)0;
            result_type_658->mInline=(_Bool)0;
            fun2_666=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value655=__builtin_string(name_659)))));
            (__right_value654 = come_decrement_ref_count(__right_value654, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value655 = come_decrement_ref_count(__right_value655, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            fun2_666==((void*)0)||fun2_666->mExternal            ) {
                fun_667=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2834, "struct sFun*")),(char*)come_increment_ref_count(name_659),(struct sType*)come_increment_ref_count(result_type_658),(struct list$1sType$ph*)come_increment_ref_count(param_types_661),(struct list$1char$ph*)come_increment_ref_count(param_names_664),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_665),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_657),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                fun_667->mGenericsFun=(_Bool)1;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_659)),(struct sFun*)come_increment_ref_count(fun_667));
                finalizer_611=fun_667;
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2845, "struct sNode");
                _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value663=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2845, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_667),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sFunNode_finalize;
                _inf_value10->clone=(void*)sFunNode_clone;
                _inf_value10->compile=(void*)sFunNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sFunNode_kind;
                node_668=(struct sNode*)come_increment_ref_count(_inf_value10);
                come_call_finalizer(sFunNode_finalize, __right_value663, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                Value_669=node_compile(node_668,info);
                if(                !Value_669                ) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer(sFun_finalize, fun_667, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node_668) ? node_668 = come_decrement_ref_count(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                finalizer_611=fun2_666;
            }
            __dec_obj178=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3_656);
            come_call_finalizer(buffer_finalize, __dec_obj178,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            info->p=p_652;
            info->head=head_655;
            info->sline=sline_653;
            __dec_obj179=info->sname,
            info->sname=(char*)come_increment_ref_count(sname_654);
            __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source_632, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (sname_654 = come_decrement_ref_count(sname_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, source3_656, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, block_657, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_658, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_659 = come_decrement_ref_count(name_659, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, self_type_660, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_661, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_664, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_665, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun2_666, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (user_real_fun_name_628 = come_decrement_ref_count(user_real_fun_name_628, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_630, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_609;
    __dec_obj180=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_606);
    __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj181=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_607);
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_608;
    __result_obj__208 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value666=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2870, "struct tuple2$2sFun$pchar$ph")),finalizer_611,(char*)come_increment_ref_count(real_fun_name_610)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_606 = come_decrement_ref_count(last_code_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_607 = come_decrement_ref_count(last_code2_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_610 = come_decrement_ref_count(real_fun_name_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_before_612, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_613, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_614 = come_decrement_ref_count(fun_name2_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value666, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__208;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_618;
unsigned int hash_619;
unsigned int it_620;
struct sGenericsFun* __result_obj__185;
struct sGenericsFun* __result_obj__186;
struct sGenericsFun* __result_obj__187;
struct sGenericsFun* __result_obj__188;
default_value_618 = (void*)0;
    memset(&default_value_618,0,sizeof(struct sGenericsFun*));
    hash_619=string_get_hash_key(((char*)key))%self->size;
    it_620=hash_619;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_620]        ) {
            if(            string_equals(self->keys[it_620],key)            ) {
                __result_obj__185 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_620]);
                come_call_finalizer(sGenericsFun_finalize, default_value_618, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__185;
            }
            it_620++;
            if(            it_620>=self->size            ) {
                it_620=0;
            }
            else if(            it_620==hash_619            ) {
                __result_obj__186 = (struct sGenericsFun*)come_increment_ref_count(default_value_618);
                come_call_finalizer(sGenericsFun_finalize, default_value_618, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__186;
            }
        }
        else {
            __result_obj__187 = (struct sGenericsFun*)come_increment_ref_count(default_value_618);
            come_call_finalizer(sGenericsFun_finalize, default_value_618, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__187;
        }
    }
    __result_obj__188 = (struct sGenericsFun*)come_increment_ref_count(default_value_618);
    come_call_finalizer(sGenericsFun_finalize, default_value_618, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__188;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_621;
unsigned int hash_622;
unsigned int it_623;
struct sGenericsFun* __result_obj__189;
struct sGenericsFun* __result_obj__190;
struct sGenericsFun* __result_obj__191;
struct sGenericsFun* __result_obj__192;
default_value_621 = (void*)0;
    memset(&default_value_621,0,sizeof(struct sGenericsFun*));
    hash_622=string_get_hash_key(((char*)key))%self->size;
    it_623=hash_622;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_623]        ) {
            if(            string_equals(self->keys[it_623],key)            ) {
                __result_obj__189 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_623]);
                come_call_finalizer(sGenericsFun_finalize, default_value_621, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__189;
            }
            it_623++;
            if(            it_623>=self->size            ) {
                it_623=0;
            }
            else if(            it_623==hash_622            ) {
                __result_obj__190 = (struct sGenericsFun*)come_increment_ref_count(default_value_621);
                come_call_finalizer(sGenericsFun_finalize, default_value_621, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__190;
            }
        }
        else {
            __result_obj__191 = (struct sGenericsFun*)come_increment_ref_count(default_value_621);
            come_call_finalizer(sGenericsFun_finalize, default_value_621, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__191;
        }
    }
    __result_obj__192 = (struct sGenericsFun*)come_increment_ref_count(default_value_621);
    come_call_finalizer(sGenericsFun_finalize, default_value_621, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__192;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_634;
unsigned int hash_635;
unsigned int it_636;
struct sClass* __result_obj__193;
struct sClass* __result_obj__194;
struct sClass* __result_obj__195;
struct sClass* __result_obj__196;
default_value_634 = (void*)0;
    memset(&default_value_634,0,sizeof(struct sClass*));
    hash_635=string_get_hash_key(((char*)key))%self->size;
    it_636=hash_635;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_636]        ) {
            if(            string_equals(self->keys[it_636],key)            ) {
                __result_obj__193 = (struct sClass*)come_increment_ref_count(self->items[it_636]);
                come_call_finalizer(sClass_finalize, default_value_634, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__193;
            }
            it_636++;
            if(            it_636>=self->size            ) {
                it_636=0;
            }
            else if(            it_636==hash_635            ) {
                __result_obj__194 = (struct sClass*)come_increment_ref_count(default_value_634);
                come_call_finalizer(sClass_finalize, default_value_634, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__194;
            }
        }
        else {
            __result_obj__195 = (struct sClass*)come_increment_ref_count(default_value_634);
            come_call_finalizer(sClass_finalize, default_value_634, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__195;
        }
    }
    __result_obj__196 = (struct sClass*)come_increment_ref_count(default_value_634);
    come_call_finalizer(sClass_finalize, default_value_634, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__196;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_637;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_638;
    it_637=self->head;
    while(    it_637!=((void*)0)    ) {
        prev_it_638=it_637;
        it_637=it_637->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_638, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_639;
unsigned int hash_640;
unsigned int it_641;
struct sClass* __result_obj__197;
struct sClass* __result_obj__198;
struct sClass* __result_obj__199;
struct sClass* __result_obj__200;
default_value_639 = (void*)0;
    memset(&default_value_639,0,sizeof(struct sClass*));
    hash_640=string_get_hash_key(((char*)key))%self->size;
    it_641=hash_640;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_641]        ) {
            if(            string_equals(self->keys[it_641],key)            ) {
                __result_obj__197 = (struct sClass*)come_increment_ref_count(self->items[it_641]);
                come_call_finalizer(sClass_finalize, default_value_639, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__197;
            }
            it_641++;
            if(            it_641>=self->size            ) {
                it_641=0;
            }
            else if(            it_641==hash_640            ) {
                __result_obj__198 = (struct sClass*)come_increment_ref_count(default_value_639);
                come_call_finalizer(sClass_finalize, default_value_639, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__198;
            }
        }
        else {
            __result_obj__199 = (struct sClass*)come_increment_ref_count(default_value_639);
            come_call_finalizer(sClass_finalize, default_value_639, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__199;
        }
    }
    __result_obj__200 = (struct sClass*)come_increment_ref_count(default_value_639);
    come_call_finalizer(sClass_finalize, default_value_639, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__200;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_643;
struct tuple2$2char$phsType$ph* __result_obj__201;
struct tuple2$2char$phsType$ph* __result_obj__202;
struct tuple2$2char$phsType$ph* result_644;
struct tuple2$2char$phsType$ph* __result_obj__203;
result_643 = (void*)0;
result_644 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_643,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__201 = result_643;
        return __result_obj__201;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__202 = self->it->item;
        return __result_obj__202;
    }
    memset(&result_644,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__203 = result_644;
    return __result_obj__203;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_646;
struct tuple2$2char$phsType$ph* __result_obj__204;
struct tuple2$2char$phsType$ph* __result_obj__205;
struct tuple2$2char$phsType$ph* result_647;
struct tuple2$2char$phsType$ph* __result_obj__206;
result_646 = (void*)0;
result_647 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_646,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__204 = result_646;
        return __result_obj__204;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__205 = self->it->item;
        return __result_obj__205;
    }
    memset(&result_647,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__206 = result_647;
    return __result_obj__206;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj182;
struct tuple2$2sFun$pchar$ph* __result_obj__207;
    self->v1=v1;
    __dec_obj182=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__207 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__207;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_670;
char* __dec_obj183;
char* last_code2_671;
char* __dec_obj184;
_Bool comma_instead_of_semicolon_672;
struct sClass* current_stack_frame_struct_673;
struct sFun* equaler_674;
void* __right_value667 = (void*)0;
char* real_fun_name_675;
void* __right_value668 = (void*)0;
struct sType* type2_676;
struct sType* __dec_obj185;
struct sClass* klass_677;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct buffer* source_678;
char* name_679;
void* __right_value671 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_681;
struct tuple2$2char$phsType$ph* it_682;
struct tuple2$2char$phsType$ph* multiple_assign_var14 = (void*)0;
char* name_683=0;
struct sType* field_type_684=0;
char* p_686;
int sline_687;
char* sname_688;
char* head_689;
struct buffer* source3_690;
struct buffer* __dec_obj186;
void* __right_value672 = (void*)0;
char* __dec_obj187;
void* __right_value673 = (void*)0;
struct sBlock* block_691;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sType* result_type_692;
void* __right_value677 = (void*)0;
char* name_693;
void* __right_value678 = (void*)0;
struct sType* left_type_694;
void* __right_value679 = (void*)0;
struct sType* right_type_695;
struct sType* __list_values15___697[2];
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1sType$ph* param_types_696;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
char* __list_values16___698[2];
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct list$1char$ph* param_names_699;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct list$1char$ph* param_default_parametors_700;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sFun* fun2_701;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct sFun* fun_702;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value698 = (void*)0;
struct sNode* node_703;
_Bool Value_704;
void* __right_value699 = (void*)0;
struct buffer* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__209;
    last_code_670=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj183=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_671=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj184=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_672=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_673=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_674=((void*)0);
    real_fun_name_675=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_676=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj185=type,
    type=(struct sType*)come_increment_ref_count(type2_676);
    come_call_finalizer(sType_finalize, __dec_obj185,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_677=type->mClass;
    if(    type->mPointerNum>0&&!klass_677->mNumber    ) {
        source_678=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2896, "struct buffer*"))));
        buffer_append_char(source_678,123);
        if(        klass_677->mProtocol        ) {
            name_679="_protocol_obj";
            char source2_680[1024];
            memset(&source2_680, 0, sizeof(char)            *(1024)            );
            snprintf(source2_680,1024,"return left.%s.equals(right.%s);\n",name_679,name_679);
            buffer_append_str(source_678,source2_680);
        }
        else {
            klass_677=((struct sClass*)(__right_value671=map$2char$phsClass$ph_operator_load_element(info->classes,klass_677->mName)));
            come_call_finalizer(sClass_finalize, __right_value671, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_681=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_677->mFields)),it_682=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_681))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_681))            ;            it_682=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_681))            ){
                multiple_assign_var14=it_682;
                name_683=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_684=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_685[1024];
                memset(&source2_685, 0, sizeof(char)                *(1024)                );
                snprintf(source2_685,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_683,name_683,name_683);
                buffer_append_str(source_678,source2_685);
                (name_683 = come_decrement_ref_count(name_683, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_684, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_681, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_str(source_678,"return true;");
        buffer_append_char(source_678,125);
        p_686=info->p;
        sline_687=info->sline;
        sname_688=(char*)come_increment_ref_count(info->sname);
        head_689=info->head;
        source3_690=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj186=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_678);
        come_call_finalizer(buffer_finalize, __dec_obj186,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_678->buf;
        info->head=source_678->buf;
        __dec_obj187=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_675));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_691=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_692=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2936, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_693=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_675, "05function.c", 2937, "char*"));
        left_type_694=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_694->mHeap=(_Bool)0;
        right_type_695=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_695->mHeap=(_Bool)0;
        param_types_696=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___697[0]=left_type_694,
__list_values15___697[1]=right_type_695,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2942, "struct list$1sType$ph")),2,__list_values15___697)));
        param_names_699=(struct list$1char$ph*)come_increment_ref_count((__list_values16___698[0]=((char*)(__right_value682=__builtin_string("left"))),
__list_values16___698[1]=((char*)(__right_value683=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2943, "struct list$1char$ph")),2,__list_values16___698)));
        (__right_value682 = come_decrement_ref_count(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value683 = come_decrement_ref_count(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_700=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2944, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_700,((void*)0));
        list$1char$ph_push_back(param_default_parametors_700,((void*)0));
        result_type_692->mStatic=(_Bool)0;
        result_type_692->mUniq=(_Bool)0;
        result_type_692->mInline=(_Bool)0;
        fun2_701=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value689=__builtin_string(name_693)))));
        (__right_value688 = come_decrement_ref_count(__right_value688, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value689 = come_decrement_ref_count(__right_value689, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_701==((void*)0)||fun2_701->mExternal        ) {
            fun_702=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2954, "struct sFun*")),(char*)come_increment_ref_count(name_693),(struct sType*)come_increment_ref_count(result_type_692),(struct list$1sType$ph*)come_increment_ref_count(param_types_696),(struct list$1char$ph*)come_increment_ref_count(param_names_699),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_700),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_691),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_702->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_693)),(struct sFun*)come_increment_ref_count(fun_702));
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2963, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value697=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2963, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_702),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_703=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer(sFunNode_finalize, __right_value697, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_704=node_compile(node_703,info);
            if(            !Value_704            ) {
                ((struct tuple2$2int$bool$*)(__right_value699=err_msg(info,"compiling error")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value699, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_674=fun_702;
            come_call_finalizer(sFun_finalize, fun_702, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_703) ? node_703 = come_decrement_ref_count(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_674=fun2_701;
        }
        __dec_obj188=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_690);
        come_call_finalizer(buffer_finalize, __dec_obj188,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_686;
        info->head=head_689;
        info->sline=sline_687;
        __dec_obj189=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_688);
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_678, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_688 = come_decrement_ref_count(sname_688, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_690, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_691, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_692, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_693 = come_decrement_ref_count(name_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_694, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_695, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_696, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_699, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_700, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_701, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_673;
    __dec_obj190=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_670);
    __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj191=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_671);
    __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_672;
    __result_obj__209 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value701=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2989, "struct tuple2$2sFun$pchar$ph")),equaler_674,(char*)come_increment_ref_count(real_fun_name_675)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_670 = come_decrement_ref_count(last_code_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_671 = come_decrement_ref_count(last_code2_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_675 = come_decrement_ref_count(real_fun_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_676, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value701, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__209;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_705;
char* __dec_obj192;
char* last_code2_706;
char* __dec_obj193;
_Bool comma_instead_of_semicolon_707;
struct sClass* current_stack_frame_struct_708;
struct sFun* equaler_709;
void* __right_value702 = (void*)0;
char* real_fun_name_710;
void* __right_value703 = (void*)0;
struct sType* type2_711;
struct sType* __dec_obj194;
struct sClass* klass_712;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct buffer* source_713;
char* name_714;
int i_717;
void* __right_value706 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_718;
struct tuple2$2char$phsType$ph* it_719;
struct tuple2$2char$phsType$ph* multiple_assign_var15 = (void*)0;
char* name_720=0;
struct sType* field_type_721=0;
char* p_725;
int sline_726;
char* sname_727;
char* head_728;
struct buffer* source3_729;
struct buffer* __dec_obj195;
void* __right_value707 = (void*)0;
char* __dec_obj196;
void* __right_value708 = (void*)0;
struct sBlock* block_730;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sType* result_type_731;
void* __right_value712 = (void*)0;
char* name_732;
void* __right_value713 = (void*)0;
struct sType* left_type_733;
void* __right_value714 = (void*)0;
struct sType* right_type_734;
struct sType* __list_values17___736[2];
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct list$1sType$ph* param_types_735;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
char* __list_values18___737[2];
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct list$1char$ph* param_names_738;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1char$ph* param_default_parametors_739;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sFun* fun2_740;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sFun* fun_741;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value733 = (void*)0;
struct sNode* node_742;
_Bool Value_743;
void* __right_value734 = (void*)0;
struct buffer* __dec_obj197;
char* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__210;
    last_code_705=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj192=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_706=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj193=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_707=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_708=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_709=((void*)0);
    real_fun_name_710=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_711=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj194=type,
    type=(struct sType*)come_increment_ref_count(type2_711);
    come_call_finalizer(sType_finalize, __dec_obj194,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_712=type->mClass;
    if(    type->mPointerNum>0&&!klass_712->mNumber    ) {
        source_713=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3014, "struct buffer*"))));
        buffer_append_char(source_713,123);
        if(        klass_712->mProtocol        ) {
            name_714="_protocol_obj";
            char source2_715[1024];
            memset(&source2_715, 0, sizeof(char)            *(1024)            );
            snprintf(source2_715,1024,"return left.%s !== right.%s;\n",name_714,name_714);
            buffer_append_str(source_713,source2_715);
        }
        else {
            char source2_716[1024];
            memset(&source2_716, 0, sizeof(char)            *(1024)            );
            snprintf(source2_716,1024,"return !(");
            buffer_append_str(source_713,source2_716);
            snprintf(source2_716,1024,"( ");
            buffer_append_str(source_713,source2_716);
            i_717=0;
            klass_712=((struct sClass*)(__right_value706=map$2char$phsClass$ph_operator_load_element(info->classes,klass_712->mName)));
            come_call_finalizer(sClass_finalize, __right_value706, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_718=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_712->mFields)),it_719=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_718))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_718))            ;            it_719=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_718))            ){
                multiple_assign_var15=it_719;
                name_720=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_721=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_722[1024];
                memset(&source2_722, 0, sizeof(char)                *(1024)                );
                snprintf(source2_722,1024,"(left.%s === right.%s)",name_720,name_720,name_720);
                buffer_append_str(source_713,source2_722);
                if(                i_717==list$1tuple2$2char$phsType$ph$ph_length(klass_712->mFields)-1                ) {
                    char source2_723[1024];
                    memset(&source2_723, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_723,1024,"));");
                    buffer_append_str(source_713,source2_723);
                }
                else {
                    char source2_724[1024];
                    memset(&source2_724, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_724,1024," && ");
                    buffer_append_str(source_713,source2_724);
                }
                i_717++;
                (name_720 = come_decrement_ref_count(name_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_721, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_718, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_char(source_713,125);
        p_725=info->p;
        sline_726=info->sline;
        sname_727=(char*)come_increment_ref_count(info->sname);
        head_728=info->head;
        source3_729=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj195=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_713);
        come_call_finalizer(buffer_finalize, __dec_obj195,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_713->buf;
        info->head=source_713->buf;
        __dec_obj196=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_710));
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_730=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_731=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3074, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_732=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_710, "05function.c", 3075, "char*"));
        left_type_733=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_733->mHeap=(_Bool)0;
        right_type_734=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_734->mHeap=(_Bool)0;
        param_types_735=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___736[0]=left_type_733,
__list_values17___736[1]=right_type_734,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3080, "struct list$1sType$ph")),2,__list_values17___736)));
        param_names_738=(struct list$1char$ph*)come_increment_ref_count((__list_values18___737[0]=((char*)(__right_value717=__builtin_string("left"))),
__list_values18___737[1]=((char*)(__right_value718=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3081, "struct list$1char$ph")),2,__list_values18___737)));
        (__right_value717 = come_decrement_ref_count(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value718 = come_decrement_ref_count(__right_value718, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_739=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3082, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_739,((void*)0));
        list$1char$ph_push_back(param_default_parametors_739,((void*)0));
        result_type_731->mStatic=(_Bool)0;
        result_type_731->mUniq=(_Bool)0;
        result_type_731->mInline=(_Bool)0;
        fun2_740=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value724=__builtin_string(name_732)))));
        (__right_value723 = come_decrement_ref_count(__right_value723, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value724 = come_decrement_ref_count(__right_value724, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_740==((void*)0)||fun2_740->mExternal        ) {
            fun_741=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3092, "struct sFun*")),(char*)come_increment_ref_count(name_732),(struct sType*)come_increment_ref_count(result_type_731),(struct list$1sType$ph*)come_increment_ref_count(param_types_735),(struct list$1char$ph*)come_increment_ref_count(param_names_738),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_739),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_730),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_741->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_732)),(struct sFun*)come_increment_ref_count(fun_741));
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3101, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value732=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3101, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_741),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_742=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer(sFunNode_finalize, __right_value732, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_743=node_compile(node_742,info);
            if(            !Value_743            ) {
                ((struct tuple2$2int$bool$*)(__right_value734=err_msg(info,"compiling error")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value734, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_709=fun_741;
            come_call_finalizer(sFun_finalize, fun_741, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_742) ? node_742 = come_decrement_ref_count(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_709=fun2_740;
        }
        __dec_obj197=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_729);
        come_call_finalizer(buffer_finalize, __dec_obj197,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_725;
        info->head=head_728;
        info->sline=sline_726;
        __dec_obj198=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_727);
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_713, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_727 = come_decrement_ref_count(sname_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_729, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_730, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_731, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_732 = come_decrement_ref_count(name_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_733, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_734, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_735, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_738, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_739, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_740, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_708;
    __dec_obj199=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_705);
    __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj200=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_706);
    __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_707;
    __result_obj__210 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value736=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3127, "struct tuple2$2sFun$pchar$ph")),equaler_709,(char*)come_increment_ref_count(real_fun_name_710)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_705 = come_decrement_ref_count(last_code_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_706 = come_decrement_ref_count(last_code2_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_710 = come_decrement_ref_count(real_fun_name_710, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_711, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value736, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__210;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_744;
char* __dec_obj201;
char* last_code2_745;
char* __dec_obj202;
_Bool comma_instead_of_semicolon_746;
struct sClass* current_stack_frame_struct_747;
struct sFun* equaler_748;
void* __right_value737 = (void*)0;
char* real_fun_name_749;
void* __right_value738 = (void*)0;
struct sType* type2_750;
struct sType* __dec_obj203;
struct sClass* klass_751;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct buffer* source_752;
char* name_753;
int i_756;
void* __right_value741 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_757;
struct tuple2$2char$phsType$ph* it_758;
struct tuple2$2char$phsType$ph* multiple_assign_var16 = (void*)0;
char* name_759=0;
struct sType* field_type_760=0;
char* p_764;
int sline_765;
char* sname_766;
char* head_767;
struct buffer* source3_768;
struct buffer* __dec_obj204;
void* __right_value742 = (void*)0;
char* __dec_obj205;
void* __right_value743 = (void*)0;
struct sBlock* block_769;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sType* result_type_770;
void* __right_value747 = (void*)0;
char* name_771;
void* __right_value748 = (void*)0;
struct sType* left_type_772;
void* __right_value749 = (void*)0;
struct sType* right_type_773;
struct sType* __list_values19___775[2];
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct list$1sType$ph* param_types_774;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
char* __list_values20___776[2];
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct list$1char$ph* param_names_777;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct list$1char$ph* param_default_parametors_778;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sFun* fun2_779;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sFun* fun_780;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value768 = (void*)0;
struct sNode* node_781;
_Bool Value_782;
void* __right_value769 = (void*)0;
struct buffer* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__211;
    last_code_744=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj201=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_745=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj202=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_746=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_747=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_748=((void*)0);
    real_fun_name_749=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_750=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj203=type,
    type=(struct sType*)come_increment_ref_count(type2_750);
    come_call_finalizer(sType_finalize, __dec_obj203,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_751=type->mClass;
    if(    type->mPointerNum>0&&!klass_751->mNumber    ) {
        source_752=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3152, "struct buffer*"))));
        buffer_append_char(source_752,123);
        if(        klass_751->mProtocol        ) {
            name_753="_protocol_obj";
            char source2_754[1024];
            memset(&source2_754, 0, sizeof(char)            *(1024)            );
            snprintf(source2_754,1024,"return !left.%s.equals(right.%s);\n",name_753,name_753);
            buffer_append_str(source_752,source2_754);
        }
        else {
            char source2_755[1024];
            memset(&source2_755, 0, sizeof(char)            *(1024)            );
            snprintf(source2_755,1024,"return !(");
            buffer_append_str(source_752,source2_755);
            i_756=0;
            klass_751=((struct sClass*)(__right_value741=map$2char$phsClass$ph_operator_load_element(info->classes,klass_751->mName)));
            come_call_finalizer(sClass_finalize, __right_value741, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_757=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_751->mFields)),it_758=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_757))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_757))            ;            it_758=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_757))            ){
                multiple_assign_var16=it_758;
                name_759=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_760=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_761[1024];
                memset(&source2_761, 0, sizeof(char)                *(1024)                );
                snprintf(source2_761,1024,"left.%s.equals(right.%s)",name_759,name_759);
                buffer_append_str(source_752,source2_761);
                if(                i_756==list$1tuple2$2char$phsType$ph$ph_length(klass_751->mFields)-1                ) {
                    char source2_762[1024];
                    memset(&source2_762, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_762,1024,");");
                    buffer_append_str(source_752,source2_762);
                }
                else {
                    char source2_763[1024];
                    memset(&source2_763, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_763,1024," && ");
                    buffer_append_str(source_752,source2_763);
                }
                i_756++;
                (name_759 = come_decrement_ref_count(name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_760, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_757, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_char(source_752,125);
        p_764=info->p;
        sline_765=info->sline;
        sname_766=(char*)come_increment_ref_count(info->sname);
        head_767=info->head;
        source3_768=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj204=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_752);
        come_call_finalizer(buffer_finalize, __dec_obj204,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_752->buf;
        info->head=source_752->buf;
        __dec_obj205=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_749));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_769=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_770=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3209, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_771=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_749, "05function.c", 3210, "char*"));
        left_type_772=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_772->mHeap=(_Bool)0;
        right_type_773=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_773->mHeap=(_Bool)0;
        param_types_774=(struct list$1sType$ph*)come_increment_ref_count((__list_values19___775[0]=left_type_772,
__list_values19___775[1]=right_type_773,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3215, "struct list$1sType$ph")),2,__list_values19___775)));
        param_names_777=(struct list$1char$ph*)come_increment_ref_count((__list_values20___776[0]=((char*)(__right_value752=__builtin_string("left"))),
__list_values20___776[1]=((char*)(__right_value753=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3216, "struct list$1char$ph")),2,__list_values20___776)));
        (__right_value752 = come_decrement_ref_count(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value753 = come_decrement_ref_count(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_778=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3217, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_778,((void*)0));
        list$1char$ph_push_back(param_default_parametors_778,((void*)0));
        result_type_770->mStatic=(_Bool)0;
        result_type_770->mUniq=(_Bool)0;
        result_type_770->mInline=(_Bool)0;
        fun2_779=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value759=__builtin_string(name_771)))));
        (__right_value758 = come_decrement_ref_count(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value759 = come_decrement_ref_count(__right_value759, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_779==((void*)0)||fun2_779->mExternal        ) {
            fun_780=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3227, "struct sFun*")),(char*)come_increment_ref_count(name_771),(struct sType*)come_increment_ref_count(result_type_770),(struct list$1sType$ph*)come_increment_ref_count(param_types_774),(struct list$1char$ph*)come_increment_ref_count(param_names_777),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_778),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_769),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_780->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_771)),(struct sFun*)come_increment_ref_count(fun_780));
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3236, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value767=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3236, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_780),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_781=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer(sFunNode_finalize, __right_value767, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_782=node_compile(node_781,info);
            if(            !Value_782            ) {
                ((struct tuple2$2int$bool$*)(__right_value769=err_msg(info,"compiling error")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value769, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_748=fun_780;
            come_call_finalizer(sFun_finalize, fun_780, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_781) ? node_781 = come_decrement_ref_count(node_781, ((struct sNode*)node_781)->finalize, ((struct sNode*)node_781)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_748=fun2_779;
        }
        __dec_obj206=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_768);
        come_call_finalizer(buffer_finalize, __dec_obj206,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_764;
        info->head=head_767;
        info->sline=sline_765;
        __dec_obj207=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_766);
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_752, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_766 = come_decrement_ref_count(sname_766, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_768, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_769, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_770, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_771 = come_decrement_ref_count(name_771, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_772, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_773, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_774, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_777, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_778, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_779, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_747;
    __dec_obj208=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_744);
    __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj209=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_745);
    __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_746;
    __result_obj__211 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value771=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3262, "struct tuple2$2sFun$pchar$ph")),equaler_748,(char*)come_increment_ref_count(real_fun_name_749)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_744 = come_decrement_ref_count(last_code_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_745 = come_decrement_ref_count(last_code2_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_749 = come_decrement_ref_count(real_fun_name_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_750, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value771, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__211;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_783;
char* __dec_obj210;
char* last_code2_784;
char* __dec_obj211;
_Bool comma_instead_of_semicolon_785;
struct sClass* current_stack_frame_struct_786;
struct sFun* equaler_787;
void* __right_value772 = (void*)0;
char* real_fun_name_788;
void* __right_value773 = (void*)0;
struct sType* type2_789;
struct sType* __dec_obj212;
struct sClass* klass_790;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct buffer* source_791;
char* name_792;
void* __right_value776 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_795;
struct tuple2$2char$phsType$ph* it_796;
struct tuple2$2char$phsType$ph* multiple_assign_var17 = (void*)0;
char* name_797=0;
struct sType* field_type_798=0;
char* p_800;
int sline_801;
char* sname_802;
char* head_803;
struct buffer* source3_804;
struct buffer* __dec_obj213;
void* __right_value777 = (void*)0;
char* __dec_obj214;
void* __right_value778 = (void*)0;
struct sBlock* block_805;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sType* result_type_806;
void* __right_value782 = (void*)0;
char* name_807;
void* __right_value783 = (void*)0;
struct sType* left_type_808;
void* __right_value784 = (void*)0;
struct sType* right_type_809;
struct sType* __list_values21___811[2];
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct list$1sType$ph* param_types_810;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
char* __list_values22___812[2];
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct list$1char$ph* param_names_813;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct list$1char$ph* param_default_parametors_814;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sFun* fun2_815;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sFun* fun_816;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value803 = (void*)0;
struct sNode* node_817;
_Bool Value_818;
void* __right_value804 = (void*)0;
struct buffer* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
char* __dec_obj218;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__212;
    last_code_783=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj210=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_784=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj211=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_785=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_786=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_787=((void*)0);
    real_fun_name_788=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_789=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj212=type,
    type=(struct sType*)come_increment_ref_count(type2_789);
    come_call_finalizer(sType_finalize, __dec_obj212,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_790=type->mClass;
    if(    type->mPointerNum>0&&!klass_790->mNumber    ) {
        source_791=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3287, "struct buffer*"))));
        buffer_append_char(source_791,123);
        if(        klass_790->mProtocol        ) {
            name_792="_protocol_obj";
            char source2_793[1024];
            memset(&source2_793, 0, sizeof(char)            *(1024)            );
            snprintf(source2_793,1024,"return left.%s === right.%s;\n",name_792,name_792);
            buffer_append_str(source_791,source2_793);
        }
        else {
            char source2_794[1024];
            memset(&source2_794, 0, sizeof(char)            *(1024)            );
            klass_790=((struct sClass*)(__right_value776=map$2char$phsClass$ph_operator_load_element(info->classes,klass_790->mName)));
            come_call_finalizer(sClass_finalize, __right_value776, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_795=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_790->mFields)),it_796=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_795))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_795))            ;            it_796=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_795))            ){
                multiple_assign_var17=it_796;
                name_797=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_798=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                char source2_799[1024];
                memset(&source2_799, 0, sizeof(char)                *(1024)                );
                snprintf(source2_799,1024,"if(left.%s !== right.%s) { return false; }\n",name_797,name_797,name_797);
                buffer_append_str(source_791,source2_799);
                (name_797 = come_decrement_ref_count(name_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_798, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_795, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_str(source_791,"return true;\n");
        buffer_append_char(source_791,125);
        p_800=info->p;
        sline_801=info->sline;
        sname_802=(char*)come_increment_ref_count(info->sname);
        head_803=info->head;
        source3_804=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj213=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_791);
        come_call_finalizer(buffer_finalize, __dec_obj213,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_791->buf;
        info->head=source_791->buf;
        __dec_obj214=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_788));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_805=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_806=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3329, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_807=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_788, "05function.c", 3330, "char*"));
        left_type_808=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_808->mHeap=(_Bool)0;
        right_type_809=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_809->mHeap=(_Bool)0;
        param_types_810=(struct list$1sType$ph*)come_increment_ref_count((__list_values21___811[0]=left_type_808,
__list_values21___811[1]=right_type_809,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3335, "struct list$1sType$ph")),2,__list_values21___811)));
        param_names_813=(struct list$1char$ph*)come_increment_ref_count((__list_values22___812[0]=((char*)(__right_value787=__builtin_string("left"))),
__list_values22___812[1]=((char*)(__right_value788=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3336, "struct list$1char$ph")),2,__list_values22___812)));
        (__right_value787 = come_decrement_ref_count(__right_value787, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value788 = come_decrement_ref_count(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_814=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3337, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_814,((void*)0));
        list$1char$ph_push_back(param_default_parametors_814,((void*)0));
        result_type_806->mStatic=(_Bool)0;
        result_type_806->mUniq=(_Bool)0;
        result_type_806->mInline=(_Bool)0;
        fun2_815=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value794=__builtin_string(name_807)))));
        (__right_value793 = come_decrement_ref_count(__right_value793, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value794 = come_decrement_ref_count(__right_value794, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_815==((void*)0)||fun2_815->mExternal        ) {
            fun_816=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3347, "struct sFun*")),(char*)come_increment_ref_count(name_807),(struct sType*)come_increment_ref_count(result_type_806),(struct list$1sType$ph*)come_increment_ref_count(param_types_810),(struct list$1char$ph*)come_increment_ref_count(param_names_813),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_814),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_805),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_816->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_807)),(struct sFun*)come_increment_ref_count(fun_816));
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3356, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value802=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3356, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_816),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_817=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer(sFunNode_finalize, __right_value802, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_818=node_compile(node_817,info);
            if(            !Value_818            ) {
                ((struct tuple2$2int$bool$*)(__right_value804=err_msg(info,"compiling error(X)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value804, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_787=fun_816;
            come_call_finalizer(sFun_finalize, fun_816, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_817) ? node_817 = come_decrement_ref_count(node_817, ((struct sNode*)node_817)->finalize, ((struct sNode*)node_817)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_787=fun2_815;
        }
        __dec_obj215=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_804);
        come_call_finalizer(buffer_finalize, __dec_obj215,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_800;
        info->head=head_803;
        info->sline=sline_801;
        __dec_obj216=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_802);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_791, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_802 = come_decrement_ref_count(sname_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_804, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_805, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_806, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_807 = come_decrement_ref_count(name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_808, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_809, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_810, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_813, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_814, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_815, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_786;
    __dec_obj217=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_783);
    __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj218=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_784);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_785;
    __result_obj__212 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value806=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3382, "struct tuple2$2sFun$pchar$ph")),equaler_787,(char*)come_increment_ref_count(real_fun_name_788)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_783 = come_decrement_ref_count(last_code_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_784 = come_decrement_ref_count(last_code2_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_788 = come_decrement_ref_count(real_fun_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_789, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value806, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__212;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__213;
char* last_code_819;
char* __dec_obj219;
char* last_code2_820;
char* __dec_obj220;
_Bool comma_instead_of_semicolon_821;
struct sClass* current_stack_frame_struct_822;
struct sFun* cloner_823;
void* __right_value809 = (void*)0;
char* real_fun_name_824;
void* __right_value810 = (void*)0;
struct sType* type2_825;
struct sType* __dec_obj221;
struct sClass* klass_826;
char* fun_name2_827;
void* __right_value811 = (void*)0;
char* none_generics_name_828;
void* __right_value812 = (void*)0;
struct sType* obj_type_829;
void* __right_value813 = (void*)0;
char* __dec_obj222;
void* __right_value814 = (void*)0;
char* fun_name3_830;
void* __right_value815 = (void*)0;
struct sGenericsFun* generics_fun_831;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var18 = (void*)0;
char* name_832=0;
_Bool err_833=0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__214;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
char* __dec_obj223;
void* __right_value822 = (void*)0;
char* __dec_obj224;
int i_834;
void* __right_value823 = (void*)0;
char* new_fun_name_835;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
char* __dec_obj225;
void* __right_value826 = (void*)0;
char* __dec_obj226;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct buffer* source_836;
void* __right_value829 = (void*)0;
char* name_837;
void* __right_value830 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_839;
struct tuple2$2char$phsType$ph* it_840;
struct tuple2$2char$phsType$ph* multiple_assign_var19 = (void*)0;
char* name_841=0;
struct sType* field_type_842=0;
void* __right_value831 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_845;
struct tuple2$2char$phsType$ph* it_846;
struct tuple2$2char$phsType$ph* multiple_assign_var20 = (void*)0;
char* name_847=0;
struct sType* field_type_848=0;
void* __right_value832 = (void*)0;
char* user_real_fun_name_852;
void* __right_value833 = (void*)0;
struct sFun* user_cloner_853;
char* p_855;
int sline_856;
char* sname_857;
struct buffer* source3_858;
char* head_859;
struct buffer* __dec_obj227;
void* __right_value834 = (void*)0;
char* __dec_obj228;
void* __right_value835 = (void*)0;
struct sBlock* block_860;
void* __right_value836 = (void*)0;
struct sType* result_type_861;
void* __right_value837 = (void*)0;
char* name_862;
void* __right_value838 = (void*)0;
struct sType* self_type_863;
struct sType* __list_values23___865[1];
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1sType$ph* param_types_864;
void* __right_value841 = (void*)0;
char* __list_values24___866[1];
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct list$1char$ph* param_names_867;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct list$1char$ph* param_default_parametors_868;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct sFun* fun2_869;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct sFun* fun_870;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value856 = (void*)0;
struct sNode* node_871;
_Bool Value_872;
void* __right_value857 = (void*)0;
char* __dec_obj229;
struct buffer* __dec_obj230;
char* __dec_obj231;
char* __dec_obj232;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__215;
fun_name2_827 = (void*)0;
memset(&i_834, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")    ) {
        __result_obj__213 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value808=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3388, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value808, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__213;
    }
    last_code_819=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj219=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_820=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj220=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_821=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_822=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_823=((void*)0);
    real_fun_name_824=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_825=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj221=type,
    type=(struct sType*)come_increment_ref_count(type2_825);
    come_call_finalizer(sType_finalize, __dec_obj221,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_826=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_828=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_829=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj222=fun_name2_827,
        fun_name2_827=(char*)come_increment_ref_count(create_method_name(obj_type_829,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_830=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_828,fun_name));
        generics_fun_831=((struct sGenericsFun*)(__right_value815=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_830,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value815, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_831        ) {
            multiple_assign_var18=((struct tuple2$2char$phbool$*)(__right_value817=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_827)),generics_fun_831,(struct sType*)come_increment_ref_count(obj_type_829),info)));
            name_832=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            err_833=multiple_assign_var18->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value817, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_833            ) {
                if(                string_operator_equals(type->mClass->mName,"void")                ) {
                    __result_obj__214 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value819=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3428, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_832 = come_decrement_ref_count(name_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (none_generics_name_828 = come_decrement_ref_count(none_generics_name_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, obj_type_829, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name3_830 = come_decrement_ref_count(fun_name3_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (last_code_819 = come_decrement_ref_count(last_code_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (last_code2_820 = come_decrement_ref_count(last_code2_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (real_fun_name_824 = come_decrement_ref_count(real_fun_name_824, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type2_825, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name2_827 = come_decrement_ref_count(fun_name2_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value819, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__214;
                }
            }
            cloner_823=((struct sFun*)(__right_value820=map$2char$phsFun$ph_operator_load_element(info->funcs,name_832)));
            come_call_finalizer(sFun_finalize, __right_value820, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_832 = come_decrement_ref_count(name_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_823=((struct sFun*)(__right_value821=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_827)));
            come_call_finalizer(sFun_finalize, __right_value821, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj223=real_fun_name_824,
        real_fun_name_824=(char*)come_increment_ref_count(fun_name2_827);
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (none_generics_name_828 = come_decrement_ref_count(none_generics_name_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_829, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_830 = come_decrement_ref_count(fun_name3_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj224=fun_name2_827,
        fun_name2_827=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_834=128-1        ;        i_834>=1        ;        i_834--        ){
            new_fun_name_835=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_827,i_834));
            cloner_823=((struct sFun*)(__right_value824=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_835)));
            come_call_finalizer(sFun_finalize, __right_value824, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_823            ) {
                __dec_obj225=fun_name2_827,
                fun_name2_827=(char*)come_increment_ref_count(__builtin_string(new_fun_name_835));
                __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_835 = come_decrement_ref_count(new_fun_name_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_835 = come_decrement_ref_count(new_fun_name_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_823==((void*)0)        ) {
            cloner_823=((struct sFun*)(__right_value826=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_827)));
            come_call_finalizer(sFun_finalize, __right_value826, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj226=real_fun_name_824,
        real_fun_name_824=(char*)come_increment_ref_count(fun_name2_827);
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    cloner_823==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0    ) {
        source_836=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3463, "struct buffer*"))));
        buffer_append_str(source_836,"{\n");
        buffer_append_str(source_836,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_836,"var result = new %s;\n",((char*)(__right_value829=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value829 = come_decrement_ref_count(__right_value829, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        klass_826->mProtocol        ) {
            name_837="_protocol_obj";
            char source2_838[1024];
            memset(&source2_838, 0, sizeof(char)            *(1024)            );
            snprintf(source2_838,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_836,source2_838);
            klass_826=((struct sClass*)(__right_value830=map$2char$phsClass$ph_operator_load_element(info->classes,klass_826->mName)));
            come_call_finalizer(sClass_finalize, __right_value830, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_839=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_826->mFields)),it_840=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_839))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_839))            ;            it_840=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_839))            ){
                multiple_assign_var19=it_840;
                name_841=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_842=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                string_operator_equals(name_841,"_protocol_obj")                ) {
                }
                else if(                list$1sNode$ph_length(field_type_842->mArrayNum)>0                ) {
                    char source2_843[1024];
                    memset(&source2_843, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_843,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_841,name_841,name_841);
                    buffer_append_str(source_836,source2_843);
                }
                else {
                    char source2_844[1024];
                    memset(&source2_844, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_844,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_841,name_841);
                    buffer_append_str(source_836,source2_844);
                }
                (name_841 = come_decrement_ref_count(name_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_842, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_839, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            klass_826=((struct sClass*)(__right_value831=map$2char$phsClass$ph_operator_load_element(info->classes,klass_826->mName)));
            come_call_finalizer(sClass_finalize, __right_value831, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_845=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_826->mFields)),it_846=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_845))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_845))            ;            it_846=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_845))            ){
                multiple_assign_var20=it_846;
                name_847=(char*)come_increment_ref_count(multiple_assign_var20->v1);
                field_type_848=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                field_type_848->mHeap                ) {
                    char source2_849[1024];
                    memset(&source2_849, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_849,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_847,name_847,name_847);
                    buffer_append_str(source_836,source2_849);
                }
                else if(                list$1sNode$ph_length(field_type_848->mArrayNum)>0                ) {
                    char source2_850[1024];
                    memset(&source2_850, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_850,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_847,name_847,name_847);
                    buffer_append_str(source_836,source2_850);
                }
                else {
                    char source2_851[1024];
                    memset(&source2_851, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_851,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_847,name_847);
                    buffer_append_str(source_836,source2_851);
                }
                (name_847 = come_decrement_ref_count(name_847, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_848, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_845, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        user_real_fun_name_852=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_853=((struct sFun*)(__right_value833=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_852)));
        come_call_finalizer(sFun_finalize, __right_value833, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        user_cloner_853        ) {
            char source2_854[1024];
            memset(&source2_854, 0, sizeof(char)            *(1024)            );
            snprintf(source2_854,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_852);
            buffer_append_str(source_836,source2_854);
        }
        buffer_append_format(source_836,"return result;");
        buffer_append_char(source_836,125);
        p_855=info->p;
        sline_856=info->sline;
        sname_857=(char*)come_increment_ref_count(info->sname);
        source3_858=(struct buffer*)come_increment_ref_count(info->source);
        head_859=info->head;
        __dec_obj227=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_836);
        come_call_finalizer(buffer_finalize, __dec_obj227,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj228=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_824));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block_860=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_861=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_862=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_824, "05function.c", 3551, "char*"));
        self_type_863=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_863->mHeap=(_Bool)0;
        param_types_864=(struct list$1sType$ph*)come_increment_ref_count((__list_values23___865[0]=self_type_863,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3554, "struct list$1sType$ph")),1,__list_values23___865)));
        param_names_867=(struct list$1char$ph*)come_increment_ref_count((__list_values24___866[0]=((char*)(__right_value841=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3555, "struct list$1char$ph")),1,__list_values24___866)));
        (__right_value841 = come_decrement_ref_count(__right_value841, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_868=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3556, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_868,((void*)0));
        result_type_861->mStatic=(_Bool)0;
        result_type_861->mUniq=(_Bool)0;
        result_type_861->mInline=(_Bool)0;
        fun2_869=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value847=__builtin_string(name_862)))));
        (__right_value846 = come_decrement_ref_count(__right_value846, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value847 = come_decrement_ref_count(__right_value847, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_869==((void*)0)||fun2_869->mExternal        ) {
            fun_870=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3566, "struct sFun*")),(char*)come_increment_ref_count(name_862),(struct sType*)come_increment_ref_count(result_type_861),(struct list$1sType$ph*)come_increment_ref_count(param_types_864),(struct list$1char$ph*)come_increment_ref_count(param_names_867),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_868),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_860),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_870->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_862)),(struct sFun*)come_increment_ref_count(fun_870));
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3575, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value855=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3575, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_870),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_871=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer(sFunNode_finalize, __right_value855, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_872=node_compile(node_871,info);
            if(            !Value_872            ) {
                ((struct tuple2$2int$bool$*)(__right_value857=err_msg(info,"compiling error(Y)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value857, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            cloner_823=fun_870;
            come_call_finalizer(sFun_finalize, fun_870, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_871) ? node_871 = come_decrement_ref_count(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            cloner_823=fun2_869;
        }
        __dec_obj229=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_857);
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_856;
        __dec_obj230=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_858);
        come_call_finalizer(buffer_finalize, __dec_obj230,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_855;
        info->head=head_859;
        info->sline=sline_856;
        come_call_finalizer(buffer_finalize, source_836, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (user_real_fun_name_852 = come_decrement_ref_count(user_real_fun_name_852, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_857 = come_decrement_ref_count(sname_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_858, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_860, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_861, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_862 = come_decrement_ref_count(name_862, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type_863, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_864, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_867, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_868, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_869, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_822;
    __dec_obj231=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_819);
    __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj232=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_820);
    __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_821;
    __result_obj__215 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value859=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3603, "struct tuple2$2sFun$pchar$ph")),cloner_823,(char*)come_increment_ref_count(real_fun_name_824)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_819 = come_decrement_ref_count(last_code_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_820 = come_decrement_ref_count(last_code2_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_824 = come_decrement_ref_count(real_fun_name_824, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_825, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_827 = come_decrement_ref_count(fun_name2_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value859, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__215;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_907;
char* __dec_obj242;
char* last_code2_908;
char* __dec_obj243;
_Bool comma_instead_of_semicolon_909;
struct sClass* current_stack_frame_struct_910;
struct sFun* to_string_fun_911;
void* __right_value893 = (void*)0;
char* real_fun_name_912;
void* __right_value894 = (void*)0;
struct sType* type_before_913;
void* __right_value895 = (void*)0;
struct sType* type2_914;
struct sType* __dec_obj244;
struct sClass* klass_915;
struct sType* __dec_obj245;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
char* none_generics_name_916;
void* __right_value898 = (void*)0;
char* generics_fun_name_917;
void* __right_value899 = (void*)0;
struct sGenericsFun* generics_fun_918;
void* __right_value900 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var22 = (void*)0;
char* name_919=0;
_Bool err_920=0;
void* __right_value901 = (void*)0;
int i_921;
void* __right_value902 = (void*)0;
char* new_fun_name_922;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
char* __dec_obj246;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct buffer* source_923;
int i_924;
void* __right_value908 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_925;
struct tuple2$2char$phsType$ph* it_926;
struct tuple2$2char$phsType$ph* multiple_assign_var23 = (void*)0;
char* name_927=0;
struct sType* field_type_928=0;
char* p_932;
int sline_933;
char* sname_934;
struct buffer* source3_935;
char* head_936;
struct buffer* __dec_obj247;
void* __right_value909 = (void*)0;
char* __dec_obj248;
void* __right_value910 = (void*)0;
struct sBlock* block_937;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sType* result_type_938;
void* __right_value914 = (void*)0;
char* name_939;
void* __right_value915 = (void*)0;
struct sType* self_type_940;
void* __right_value916 = (void*)0;
struct sType* __dec_obj249;
struct sType* __list_values27___942[1];
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1sType$ph* param_types_941;
void* __right_value919 = (void*)0;
char* __list_values28___943[1];
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct list$1char$ph* param_names_944;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct list$1char$ph* param_default_parametors_945;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct sFun* fun2_946;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sFun* fun_947;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value934 = (void*)0;
struct sNode* node_948;
_Bool Value_949;
void* __right_value935 = (void*)0;
char* __dec_obj250;
struct buffer* __dec_obj251;
char* __dec_obj252;
char* __dec_obj253;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__217;
memset(&i_921, 0, sizeof(int));
    last_code_907=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj242=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_908=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj243=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_909=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_910=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    to_string_fun_911=((void*)0);
    real_fun_name_912=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type_before_913=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_914=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj244=type,
    type=(struct sType*)come_increment_ref_count(type2_914);
    come_call_finalizer(sType_finalize, __dec_obj244,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_915=type->mClass;
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj245=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj245,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        to_string_fun_911=((struct sFun*)(__right_value896=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_912)));
        come_call_finalizer(sFun_finalize, __right_value896, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        to_string_fun_911==((void*)0)        ) {
            none_generics_name_916=(char*)come_increment_ref_count(get_none_generics_name(type2_914->mClass->mName));
            generics_fun_name_917=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_916,fun_name));
            generics_fun_918=((struct sGenericsFun*)(__right_value899=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_917)));
            come_call_finalizer(sGenericsFun_finalize, __right_value899, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            generics_fun_918            ) {
                multiple_assign_var22=((struct tuple2$2char$phbool$*)(__right_value900=create_generics_fun((char*)come_increment_ref_count(real_fun_name_912),generics_fun_918,(struct sType*)come_increment_ref_count(type),info)));
                name_919=(char*)come_increment_ref_count(multiple_assign_var22->v1);
                err_920=multiple_assign_var22->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value900, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_920                ) {
                    printf("%s %d: can't create generics to_string_fun\n",info->sname,info->sline);
                    exit(2);
                }
                to_string_fun_911=((struct sFun*)(__right_value901=map$2char$phsFun$ph_operator_load_element(info->funcs,name_919)));
                come_call_finalizer(sFun_finalize, __right_value901, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name_919 = come_decrement_ref_count(name_919, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name_916 = come_decrement_ref_count(none_generics_name_916, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_917 = come_decrement_ref_count(generics_fun_name_917, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        i_921=128-1        ;        i_921>=1        ;        i_921--        ){
            new_fun_name_922=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_912,i_921));
            to_string_fun_911=((struct sFun*)(__right_value903=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_922)));
            come_call_finalizer(sFun_finalize, __right_value903, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            to_string_fun_911            ) {
                __dec_obj246=real_fun_name_912,
                real_fun_name_912=(char*)come_increment_ref_count(__builtin_string(new_fun_name_922));
                __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_922 = come_decrement_ref_count(new_fun_name_922, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_922 = come_decrement_ref_count(new_fun_name_922, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        to_string_fun_911==((void*)0)        ) {
            to_string_fun_911=((struct sFun*)(__right_value905=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_912)));
            come_call_finalizer(sFun_finalize, __right_value905, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    to_string_fun_911==((void*)0)&&type->mPointerNum>0&&!klass_915->mNumber    ) {
        source_923=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3812, "struct buffer*"))));
        buffer_append_str(source_923,"{\n");
        buffer_append_str(source_923,"var result = new buffer();\n");
        buffer_append_format(source_923,"result.append_str(\"%s {\");\n",klass_915->mName);
        i_924=0;
        klass_915=((struct sClass*)(__right_value908=map$2char$phsClass$ph_operator_load_element(info->classes,klass_915->mName)));
        come_call_finalizer(sClass_finalize, __right_value908, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        for(        o2_saved_925=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_915->mFields)),it_926=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_925))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_925))        ;        it_926=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_925))        ){
            multiple_assign_var23=it_926;
            name_927=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            field_type_928=(struct sType*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            string_operator_equals(field_type_928->mClass->mName,"lambda")            ) {
                char source2_929[1024];
                memset(&source2_929, 0, sizeof(char)                *(1024)                );
                snprintf(source2_929,1024,"result.append_str(\"%s:\");\n",name_927);
                buffer_append_str(source_923,source2_929);
                snprintf(source2_929,1024,"result.append_str(\"lambda\");\n");
                buffer_append_str(source_923,source2_929);
            }
            else if(            i_924==list$1tuple2$2char$phsType$ph$ph_length(klass_915->mFields)-1            ) {
                char source2_930[1024];
                memset(&source2_930, 0, sizeof(char)                *(1024)                );
                snprintf(source2_930,1024,"result.append_str(\"%s:\");\n",name_927);
                buffer_append_str(source_923,source2_930);
                snprintf(source2_930,1024,"result.append_str(self.%s.to_string());\n",name_927);
                buffer_append_str(source_923,source2_930);
            }
            else {
                char source2_931[1024];
                memset(&source2_931, 0, sizeof(char)                *(1024)                );
                snprintf(source2_931,1024,"result.append_str(\"%s:\");\n",name_927);
                buffer_append_str(source_923,source2_931);
                snprintf(source2_931,1024,"result.append_str(self.%s.to_string());\n",name_927);
                buffer_append_str(source_923,source2_931);
                snprintf(source2_931,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_923,source2_931);
            }
            i_924++;
            (name_927 = come_decrement_ref_count(name_927, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type_928, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_925, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(source_923,"result.append_str(\"}\");\n");
        buffer_append_format(source_923,"return result.to_string();\n");
        buffer_append_char(source_923,125);
        p_932=info->p;
        sline_933=info->sline;
        sname_934=(char*)come_increment_ref_count(info->sname);
        source3_935=(struct buffer*)come_increment_ref_count(info->source);
        head_936=info->head;
        __dec_obj247=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_923);
        come_call_finalizer(buffer_finalize, __dec_obj247,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj248=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_912));
        __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block_937=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_938=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3881, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_938->mHeap=(_Bool)1;
        name_939=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_912, "05function.c", 3883, "char*"));
        self_type_940=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj249=self_type_940,
        self_type_940=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
        come_call_finalizer(sType_finalize, __dec_obj249,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self_type_940->mHeap=(_Bool)0;
        param_types_941=(struct list$1sType$ph*)come_increment_ref_count((__list_values27___942[0]=self_type_940,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3888, "struct list$1sType$ph")),1,__list_values27___942)));
        param_names_944=(struct list$1char$ph*)come_increment_ref_count((__list_values28___943[0]=((char*)(__right_value919=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3889, "struct list$1char$ph")),1,__list_values28___943)));
        (__right_value919 = come_decrement_ref_count(__right_value919, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_945=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3890, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_945,((void*)0));
        result_type_938->mStatic=(_Bool)0;
        result_type_938->mUniq=(_Bool)0;
        result_type_938->mInline=(_Bool)0;
        fun2_946=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value925=__builtin_string(name_939)))));
        (__right_value924 = come_decrement_ref_count(__right_value924, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value925 = come_decrement_ref_count(__right_value925, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_946==((void*)0)||fun2_946->mExternal        ) {
            fun_947=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3899, "struct sFun*")),(char*)come_increment_ref_count(name_939),(struct sType*)come_increment_ref_count(result_type_938),(struct list$1sType$ph*)come_increment_ref_count(param_types_941),(struct list$1char$ph*)come_increment_ref_count(param_names_944),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_945),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_937),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_947->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_939)),(struct sFun*)come_increment_ref_count(fun_947));
            to_string_fun_911=fun_947;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3910, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value933=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3910, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_947),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_948=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer(sFunNode_finalize, __right_value933, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_949=node_compile(node_948,info);
            if(            !Value_949            ) {
                ((struct tuple2$2int$bool$*)(__right_value935=err_msg(info,"compiling error(Y)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value935, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            come_call_finalizer(sFun_finalize, fun_947, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_948) ? node_948 = come_decrement_ref_count(node_948, ((struct sNode*)node_948)->finalize, ((struct sNode*)node_948)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            to_string_fun_911=fun2_946;
        }
        __dec_obj250=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_934);
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_933;
        __dec_obj251=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_935);
        come_call_finalizer(buffer_finalize, __dec_obj251,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_932;
        info->head=head_936;
        info->sline=sline_933;
        come_call_finalizer(buffer_finalize, source_923, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_934 = come_decrement_ref_count(sname_934, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_935, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_937, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_938, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_939 = come_decrement_ref_count(name_939, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type_940, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_941, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_944, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_945, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_946, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_910;
    __dec_obj252=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_907);
    __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj253=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_908);
    __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_909;
    __result_obj__217 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value937=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3936, "struct tuple2$2sFun$pchar$ph")),to_string_fun_911,(char*)come_increment_ref_count(real_fun_name_912)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_907 = come_decrement_ref_count(last_code_907, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_908 = come_decrement_ref_count(last_code2_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_912 = come_decrement_ref_count(real_fun_name_912, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_before_913, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_914, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value937, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__217;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_950;
char* __dec_obj254;
char* last_code2_951;
char* __dec_obj255;
_Bool comma_instead_of_semicolon_952;
struct sClass* current_stack_frame_struct_953;
struct sFun* get_hash_key_fun_954;
void* __right_value938 = (void*)0;
char* real_fun_name_955;
void* __right_value939 = (void*)0;
struct sType* type2_956;
struct sType* __dec_obj256;
struct sClass* klass_957;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
char* none_generics_name_958;
void* __right_value942 = (void*)0;
char* generics_fun_name_959;
void* __right_value943 = (void*)0;
struct sGenericsFun* generics_fun_960;
void* __right_value944 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var24 = (void*)0;
char* name_961=0;
_Bool err_962=0;
void* __right_value945 = (void*)0;
int i_963;
void* __right_value946 = (void*)0;
char* new_fun_name_964;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
char* __dec_obj257;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct buffer* source_965;
int i_966;
void* __right_value952 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_967;
struct tuple2$2char$phsType$ph* it_968;
struct tuple2$2char$phsType$ph* multiple_assign_var25 = (void*)0;
char* name_969=0;
struct sType* field_type_970=0;
char* p_972;
int sline_973;
char* sname_974;
struct buffer* source3_975;
char* head_976;
struct buffer* __dec_obj258;
void* __right_value953 = (void*)0;
char* __dec_obj259;
void* __right_value954 = (void*)0;
struct sBlock* block_977;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct sType* result_type_978;
void* __right_value958 = (void*)0;
char* name_979;
void* __right_value959 = (void*)0;
struct sType* self_type_980;
struct sType* __list_values29___982[1];
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct list$1sType$ph* param_types_981;
void* __right_value962 = (void*)0;
char* __list_values30___983[1];
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct list$1char$ph* param_names_984;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct list$1char$ph* param_default_parametors_985;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sFun* fun2_986;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sFun* fun_987;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct sNode* _inf_value18;
struct sFunNode* _inf_obj_value18;
void* __right_value977 = (void*)0;
struct sNode* node_988;
_Bool Value_989;
void* __right_value978 = (void*)0;
char* __dec_obj260;
struct buffer* __dec_obj261;
char* __dec_obj262;
char* __dec_obj263;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__218;
memset(&i_963, 0, sizeof(int));
    last_code_950=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj254=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_951=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj255=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_952=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_953=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_954=((void*)0);
    real_fun_name_955=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_956=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj256=type,
    type=(struct sType*)come_increment_ref_count(type2_956);
    come_call_finalizer(sType_finalize, __dec_obj256,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_957=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        get_hash_key_fun_954=((struct sFun*)(__right_value940=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_955)));
        come_call_finalizer(sFun_finalize, __right_value940, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        get_hash_key_fun_954==((void*)0)        ) {
            none_generics_name_958=(char*)come_increment_ref_count(get_none_generics_name(type2_956->mClass->mName));
            generics_fun_name_959=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_958,fun_name));
            generics_fun_960=((struct sGenericsFun*)(__right_value943=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_959)));
            come_call_finalizer(sGenericsFun_finalize, __right_value943, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            generics_fun_960            ) {
                multiple_assign_var24=((struct tuple2$2char$phbool$*)(__right_value944=create_generics_fun((char*)come_increment_ref_count(real_fun_name_955),generics_fun_960,(struct sType*)come_increment_ref_count(type),info)));
                name_961=(char*)come_increment_ref_count(multiple_assign_var24->v1);
                err_962=multiple_assign_var24->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value944, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_962                ) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_954=((struct sFun*)(__right_value945=map$2char$phsFun$ph_operator_load_element(info->funcs,name_961)));
                come_call_finalizer(sFun_finalize, __right_value945, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name_961 = come_decrement_ref_count(name_961, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name_958 = come_decrement_ref_count(none_generics_name_958, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_959 = come_decrement_ref_count(generics_fun_name_959, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        i_963=128-1        ;        i_963>=1        ;        i_963--        ){
            new_fun_name_964=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_955,i_963));
            get_hash_key_fun_954=((struct sFun*)(__right_value947=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_964)));
            come_call_finalizer(sFun_finalize, __right_value947, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            get_hash_key_fun_954            ) {
                __dec_obj257=real_fun_name_955,
                real_fun_name_955=(char*)come_increment_ref_count(__builtin_string(new_fun_name_964));
                __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_964 = come_decrement_ref_count(new_fun_name_964, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_964 = come_decrement_ref_count(new_fun_name_964, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        get_hash_key_fun_954==((void*)0)        ) {
            get_hash_key_fun_954=((struct sFun*)(__right_value949=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_955)));
            come_call_finalizer(sFun_finalize, __right_value949, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    get_hash_key_fun_954==((void*)0)&&type->mPointerNum>0&&!klass_957->mNumber&&!klass_957->mProtocol    ) {
        source_965=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 4006, "struct buffer*"))));
        buffer_append_str(source_965,"{\n");
        buffer_append_str(source_965,"unsigned int result = 0;\n");
        i_966=0;
        klass_957=((struct sClass*)(__right_value952=map$2char$phsClass$ph_operator_load_element(info->classes,klass_957->mName)));
        come_call_finalizer(sClass_finalize, __right_value952, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        for(        o2_saved_967=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_957->mFields)),it_968=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_967))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_967))        ;        it_968=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_967))        ){
            multiple_assign_var25=it_968;
            name_969=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            field_type_970=(struct sType*)come_increment_ref_count(multiple_assign_var25->v2);
            char source2_971[1024];
            memset(&source2_971, 0, sizeof(char)            *(1024)            );
            snprintf(source2_971,1024,"result += ((int)self.%s).get_hash_key();\n",name_969);
            buffer_append_str(source_965,source2_971);
            i_966++;
            (name_969 = come_decrement_ref_count(name_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type_970, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_967, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_format(source_965,"return result;\n");
        buffer_append_char(source_965,125);
        p_972=info->p;
        sline_973=info->sline;
        sname_974=(char*)come_increment_ref_count(info->sname);
        source3_975=(struct buffer*)come_increment_ref_count(info->source);
        head_976=info->head;
        __dec_obj258=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_965);
        come_call_finalizer(buffer_finalize, __dec_obj258,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj259=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_955));
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block_977=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_978=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 4043, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_978->mUnsigned=(_Bool)1;
        name_979=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_955, "05function.c", 4045, "char*"));
        self_type_980=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_980->mHeap=(_Bool)0;
        param_types_981=(struct list$1sType$ph*)come_increment_ref_count((__list_values29___982[0]=self_type_980,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4048, "struct list$1sType$ph")),1,__list_values29___982)));
        param_names_984=(struct list$1char$ph*)come_increment_ref_count((__list_values30___983[0]=((char*)(__right_value962=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4049, "struct list$1char$ph")),1,__list_values30___983)));
        (__right_value962 = come_decrement_ref_count(__right_value962, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_985=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4050, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_985,((void*)0));
        result_type_978->mStatic=(_Bool)0;
        result_type_978->mUniq=(_Bool)0;
        result_type_978->mInline=(_Bool)0;
        fun2_986=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value968=__builtin_string(name_979)))));
        (__right_value967 = come_decrement_ref_count(__right_value967, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value968 = come_decrement_ref_count(__right_value968, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_986==((void*)0)||fun2_986->mExternal        ) {
            fun_987=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 4059, "struct sFun*")),(char*)come_increment_ref_count(name_979),(struct sType*)come_increment_ref_count(result_type_978),(struct list$1sType$ph*)come_increment_ref_count(param_types_981),(struct list$1char$ph*)come_increment_ref_count(param_names_984),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_985),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_977),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_987->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_979)),(struct sFun*)come_increment_ref_count(fun_987));
            get_hash_key_fun_954=fun_987;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 4070, "struct sNode");
            _inf_obj_value18=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value976=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 4070, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_987),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sFunNode_finalize;
            _inf_value18->clone=(void*)sFunNode_clone;
            _inf_value18->compile=(void*)sFunNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sFunNode_kind;
            node_988=(struct sNode*)come_increment_ref_count(_inf_value18);
            come_call_finalizer(sFunNode_finalize, __right_value976, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_989=node_compile(node_988,info);
            if(            !Value_989            ) {
                ((struct tuple2$2int$bool$*)(__right_value978=err_msg(info,"compiling error(Y)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value978, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            come_call_finalizer(sFun_finalize, fun_987, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_988) ? node_988 = come_decrement_ref_count(node_988, ((struct sNode*)node_988)->finalize, ((struct sNode*)node_988)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_954=fun2_986;
        }
        __dec_obj260=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_974);
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_973;
        __dec_obj261=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_975);
        come_call_finalizer(buffer_finalize, __dec_obj261,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_972;
        info->head=head_976;
        info->sline=sline_973;
        come_call_finalizer(buffer_finalize, source_965, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_974 = come_decrement_ref_count(sname_974, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_975, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_977, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_978, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_979 = come_decrement_ref_count(name_979, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type_980, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_981, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_984, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_985, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_986, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_953;
    __dec_obj262=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_950);
    __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj263=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_951);
    __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_952;
    __result_obj__218 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value980=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4096, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun_954,(char*)come_increment_ref_count(real_fun_name_955)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_950 = come_decrement_ref_count(last_code_950, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_951 = come_decrement_ref_count(last_code2_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_955 = come_decrement_ref_count(real_fun_name_955, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_956, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value980, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__218;
}

struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info){
struct sFun* caller_fun_990;
int caller_line_991;
char* caller_sname_992;
_Bool comma_instead_of_semicolon_993;
char* last_code_994;
char* __dec_obj264;
char* last_code2_995;
char* __dec_obj265;
void* __right_value981 = (void*)0;
char* sname_top_996;
int sline_top_997;
struct sType* result_type_998;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct list$1sType$ph* param_types_999;
struct list$1sType$ph* o2_saved_1000;
struct sType* it_1001;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct list$1char$ph* param_names_1002;
void* __right_value986 = (void*)0;
struct list$1char$ph* param_default_parametors_1003;
char* p_1004;
int sline_1005;
char* sname_1006;
char* head_1007;
struct buffer* source_1008;
void* __right_value987 = (void*)0;
struct buffer* __dec_obj266;
char* __dec_obj267;
void* __right_value988 = (void*)0;
struct sBlock* block_1009;
struct buffer* __dec_obj268;
char* __dec_obj269;
_Bool const_fun_1010;
_Bool var_args_1011;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct sFun* fun2_1012;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sNode* _inf_value19;
struct sFunNode* _inf_obj_value19;
void* __right_value995 = (void*)0;
struct sNode* node_1013;
_Bool Value_1014;
struct sFun* __result_obj__219;
void* __right_value996 = (void*)0;
char* __dec_obj270;
char* __dec_obj271;
char* __dec_obj272;
struct sFun* __result_obj__220;
    caller_fun_990=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_991=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_992=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_993=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_994=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj264=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_995=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj265=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top_996=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_997=info->sline;
    result_type_998=(struct sType*)come_increment_ref_count(fun->mResultType);
    param_types_999=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4120, "struct list$1sType$ph*"))));
    for(    o2_saved_1000=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_1001=list$1sType$ph_begin((o2_saved_1000))    ;    !list$1sType$ph_end((o2_saved_1000))    ;    it_1001=list$1sType$ph_next((o2_saved_1000))    ){
        list$1sType$ph_add(param_types_999,(struct sType*)come_increment_ref_count(sType_clone(it_1001)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_1000, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names_1002=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamNames));
    param_default_parametors_1003=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamDefaultParametors));
    p_1004=info->p;
    sline_1005=info->sline;
    sname_1006=(char*)come_increment_ref_count(info->sname);
    head_1007=info->head;
    source_1008=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj266=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(fun->mTextBlock));
    come_call_finalizer(buffer_finalize, __dec_obj266,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=fun->mTextBlockSline;
    __dec_obj267=info->sname,
    info->sname=(char*)come_increment_ref_count(fun->mTextBlockSName);
    __dec_obj267 = come_decrement_ref_count(__dec_obj267, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block_1009=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_1007;
    __dec_obj268=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_1008);
    come_call_finalizer(buffer_finalize, __dec_obj268,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_1004;
    info->sline=sline_1005;
    __dec_obj269=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_1006);
    __dec_obj269 = come_decrement_ref_count(__dec_obj269, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type_998->mInline=(_Bool)0;
    result_type_998->mStatic=(_Bool)0;
    result_type_998->mUniq=(_Bool)0;
    const_fun_1010=fun->mConstFun;
    var_args_1011=fun->mVarArgs;
    fun2_1012=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 4156, "struct sFun*")),(char*)come_increment_ref_count(fun->mName),(struct sType*)come_increment_ref_count(result_type_998),(struct list$1sType$ph*)come_increment_ref_count(param_types_999),(struct list$1char$ph*)come_increment_ref_count(param_names_1002),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1003),(_Bool)0,var_args_1011,(struct sBlock*)come_increment_ref_count(block_1009),(_Bool)0,info,(_Bool)0,(_Bool)1,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_1010,((void*)0),((void*)0),0,(_Bool)0));
    _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 4161, "struct sNode");
    _inf_obj_value19=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value994=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 4161, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun2_1012),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sFunNode_finalize;
    _inf_value19->clone=(void*)sFunNode_clone;
    _inf_value19->compile=(void*)sFunNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sFunNode_kind;
    node_1013=(struct sNode*)come_increment_ref_count(_inf_value19);
    come_call_finalizer(sFunNode_finalize, __right_value994, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_1014=node_compile(node_1013,info);
    if(    !Value_1014    ) {
        __result_obj__219 = (void*)come_increment_ref_count(((void*)0));
        (last_code_994 = come_decrement_ref_count(last_code_994, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_995 = come_decrement_ref_count(last_code2_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_996 = come_decrement_ref_count(sname_top_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_998, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_999, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_1002, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_1003, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_1006 = come_decrement_ref_count(sname_1006, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source_1008, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_1009, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_1012, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_1013) ? node_1013 = come_decrement_ref_count(node_1013, ((struct sNode*)node_1013)->finalize, ((struct sNode*)node_1013)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__219;
    }
    else {
    }
    __dec_obj270=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_996));
    __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top_997;
    __dec_obj271=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_994);
    __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj272=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_995);
    __dec_obj272 = come_decrement_ref_count(__dec_obj272, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun_990;
    info->caller_line=caller_line_991;
    info->caller_sname=caller_sname_992;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_993;
    __result_obj__220 = (struct sFun*)come_increment_ref_count(fun2_1012);
    (last_code_994 = come_decrement_ref_count(last_code_994, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_995 = come_decrement_ref_count(last_code2_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top_996 = come_decrement_ref_count(sname_top_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_998, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_999, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_1002, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_1003, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname_1006 = come_decrement_ref_count(sname_1006, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_1008, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block_1009, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun2_1012, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node_1013) ? node_1013 = come_decrement_ref_count(node_1013, ((struct sNode*)node_1013)->finalize, ((struct sNode*)node_1013)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__220;
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj273;
char* result_1015;
struct list$1CVALUE$ph* stack_saved_1016;
struct list$1sRightValueObject$ph* right_value_objects_1017;
struct sClass* klass_1018;
char* class_name_1019;
char* fun_name_1020;
void* __right_value997 = (void*)0;
struct sType* type2_1021;
struct sFun* cloner_1022;
char* fun_name2_1023;
void* __right_value998 = (void*)0;
char* none_generics_name_1024;
void* __right_value999 = (void*)0;
struct sType* obj_type_1025;
void* __right_value1000 = (void*)0;
char* __dec_obj274;
void* __right_value1001 = (void*)0;
char* fun_name3_1026;
void* __right_value1002 = (void*)0;
struct sGenericsFun* generics_fun_1027;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var26 = (void*)0;
char* name_1028=0;
_Bool err_1029=0;
_Bool __result_obj__221;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
char* __dec_obj275;
int i_1032;
void* __right_value1008 = (void*)0;
char* new_fun_name_1033;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
char* __dec_obj276;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var27 = (void*)0;
struct sFun* fun_1034=0;
char* new_fun_name_1035=0;
char* __dec_obj277;
struct list$1sRightValueObject$ph* __dec_obj278;
struct list$1CVALUE$ph* __dec_obj279;
_Bool __result_obj__222;
fun_name2_1023 = (void*)0;
memset(&i_1032, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj273=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj273,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_1015=((void*)0);
    stack_saved_1016=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1017=info->right_value_objects;
    klass_1018=type->mClass;
    class_name_1019=klass_1018->mName;
    fun_name_1020="equals";
    type2_1021=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1021->mHeap=(_Bool)0;
    cloner_1022=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_1024=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1025=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj274=fun_name2_1023,
        fun_name2_1023=(char*)come_increment_ref_count(create_method_name(obj_type_1025,(_Bool)0,fun_name_1020,info,(_Bool)1));
        __dec_obj274 = come_decrement_ref_count(__dec_obj274, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_1026=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1024,fun_name_1020));
        generics_fun_1027=((struct sGenericsFun*)(__right_value1002=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1026,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value1002, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_1027        ) {
            multiple_assign_var26=((struct tuple2$2char$phbool$*)(__right_value1004=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1023)),generics_fun_1027,(struct sType*)come_increment_ref_count(obj_type_1025),info)));
            name_1028=(char*)come_increment_ref_count(multiple_assign_var26->v1);
            err_1029=multiple_assign_var26->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1004, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_1029            ) {
                __result_obj__221 = (_Bool)0;
                (name_1028 = come_decrement_ref_count(name_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_1024 = come_decrement_ref_count(none_generics_name_1024, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_1025, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_1026 = come_decrement_ref_count(fun_name3_1026, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_1015 = come_decrement_ref_count(result_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1016, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_1021, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_1023 = come_decrement_ref_count(fun_name2_1023, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__221;
            }
            else {
                cloner_1022=((struct sFun*)(__right_value1005=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1028)));
                come_call_finalizer(sFun_finalize, __right_value1005, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (name_1028 = come_decrement_ref_count(name_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_1022=((struct sFun*)(__right_value1006=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1023)));
            come_call_finalizer(sFun_finalize, __right_value1006, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_1024 = come_decrement_ref_count(none_generics_name_1024, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_1025, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_1026 = come_decrement_ref_count(fun_name3_1026, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj275=fun_name2_1023,
        fun_name2_1023=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1020,info,(_Bool)1));
        __dec_obj275 = come_decrement_ref_count(__dec_obj275, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_1032=128-1        ;        i_1032>=1        ;        i_1032--        ){
            new_fun_name_1033=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1023,i_1032));
            cloner_1022=((struct sFun*)(__right_value1009=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1033)));
            come_call_finalizer(sFun_finalize, __right_value1009, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_1022            ) {
                __dec_obj276=fun_name2_1023,
                fun_name2_1023=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1033));
                __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_1033 = come_decrement_ref_count(new_fun_name_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_1033 = come_decrement_ref_count(new_fun_name_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_1022==((void*)0)        ) {
            cloner_1022=((struct sFun*)(__right_value1011=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1023)));
            come_call_finalizer(sFun_finalize, __right_value1011, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_1022==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        multiple_assign_var27=((struct tuple2$2sFun$pchar$ph*)(__right_value1012=create_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name_1020,info)));
        fun_1034=multiple_assign_var27->v1;
        new_fun_name_1035=(char*)come_increment_ref_count(multiple_assign_var27->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1012, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj277=fun_name2_1023,
        fun_name2_1023=(char*)come_increment_ref_count(new_fun_name_1035);
        __dec_obj277 = come_decrement_ref_count(__dec_obj277, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_1022=fun_1034;
        (new_fun_name_1035 = come_decrement_ref_count(new_fun_name_1035, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj278=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1017);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj278,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj279=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1016);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj279,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__222 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_1015 = come_decrement_ref_count(result_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1016, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_1021, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_1023 = come_decrement_ref_count(fun_name2_1023, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__222;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_1030;
struct list_item$1CVALUE$ph* prev_it_1031;
    it_1030=self->head;
    while(    it_1030!=((void*)0)    ) {
        prev_it_1031=it_1030;
        it_1030=it_1030->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_1031, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_1036;
struct list_item$1CVALUE$ph* prev_it_1037;
    it_1036=self->head;
    while(    it_1036!=((void*)0)    ) {
        prev_it_1037=it_1036;
        it_1036=it_1036->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_1037, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj280;
char* result_1038;
struct list$1CVALUE$ph* stack_saved_1039;
struct list$1sRightValueObject$ph* right_value_objects_1040;
struct sClass* klass_1041;
char* class_name_1042;
char* fun_name_1043;
void* __right_value1013 = (void*)0;
struct sType* type2_1044;
struct sFun* cloner_1045;
char* fun_name2_1046;
void* __right_value1014 = (void*)0;
char* none_generics_name_1047;
void* __right_value1015 = (void*)0;
struct sType* obj_type_1048;
void* __right_value1016 = (void*)0;
char* __dec_obj281;
void* __right_value1017 = (void*)0;
char* fun_name3_1049;
void* __right_value1018 = (void*)0;
struct sGenericsFun* generics_fun_1050;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var28 = (void*)0;
char* name_1051=0;
_Bool err_1052=0;
_Bool __result_obj__223;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
char* __dec_obj282;
int i_1053;
void* __right_value1024 = (void*)0;
char* new_fun_name_1054;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
char* __dec_obj283;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var29 = (void*)0;
struct sFun* fun_1055=0;
char* new_fun_name_1056=0;
char* __dec_obj284;
struct list$1sRightValueObject$ph* __dec_obj285;
struct list$1CVALUE$ph* __dec_obj286;
_Bool __result_obj__224;
fun_name2_1046 = (void*)0;
memset(&i_1053, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj280=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj280,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_1038=((void*)0);
    stack_saved_1039=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1040=info->right_value_objects;
    klass_1041=type->mClass;
    class_name_1042=klass_1041->mName;
    fun_name_1043="operator_equals";
    type2_1044=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1044->mHeap=(_Bool)0;
    cloner_1045=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_1047=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1048=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj281=fun_name2_1046,
        fun_name2_1046=(char*)come_increment_ref_count(create_method_name(obj_type_1048,(_Bool)0,fun_name_1043,info,(_Bool)1));
        __dec_obj281 = come_decrement_ref_count(__dec_obj281, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_1049=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1047,fun_name_1043));
        generics_fun_1050=((struct sGenericsFun*)(__right_value1018=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1049,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value1018, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_1050        ) {
            multiple_assign_var28=((struct tuple2$2char$phbool$*)(__right_value1020=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1046)),generics_fun_1050,(struct sType*)come_increment_ref_count(obj_type_1048),info)));
            name_1051=(char*)come_increment_ref_count(multiple_assign_var28->v1);
            err_1052=multiple_assign_var28->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1020, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_1052            ) {
                __result_obj__223 = (_Bool)0;
                (name_1051 = come_decrement_ref_count(name_1051, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_1047 = come_decrement_ref_count(none_generics_name_1047, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_1048, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_1049 = come_decrement_ref_count(fun_name3_1049, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_1038 = come_decrement_ref_count(result_1038, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1039, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_1044, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_1046 = come_decrement_ref_count(fun_name2_1046, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__223;
            }
            cloner_1045=((struct sFun*)(__right_value1021=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1051)));
            come_call_finalizer(sFun_finalize, __right_value1021, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_1051 = come_decrement_ref_count(name_1051, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_1045=((struct sFun*)(__right_value1022=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1046)));
            come_call_finalizer(sFun_finalize, __right_value1022, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_1047 = come_decrement_ref_count(none_generics_name_1047, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_1048, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_1049 = come_decrement_ref_count(fun_name3_1049, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj282=fun_name2_1046,
        fun_name2_1046=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1043,info,(_Bool)1));
        __dec_obj282 = come_decrement_ref_count(__dec_obj282, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_1053=128-1        ;        i_1053>=1        ;        i_1053--        ){
            new_fun_name_1054=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1046,i_1053));
            cloner_1045=((struct sFun*)(__right_value1025=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1054)));
            come_call_finalizer(sFun_finalize, __right_value1025, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_1045            ) {
                __dec_obj283=fun_name2_1046,
                fun_name2_1046=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1054));
                __dec_obj283 = come_decrement_ref_count(__dec_obj283, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_1054 = come_decrement_ref_count(new_fun_name_1054, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_1054 = come_decrement_ref_count(new_fun_name_1054, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_1045==((void*)0)        ) {
            cloner_1045=((struct sFun*)(__right_value1027=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1046)));
            come_call_finalizer(sFun_finalize, __right_value1027, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_1045==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        multiple_assign_var29=((struct tuple2$2sFun$pchar$ph*)(__right_value1028=create_operator_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name_1043,info)));
        fun_1055=multiple_assign_var29->v1;
        new_fun_name_1056=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1028, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj284=fun_name2_1046,
        fun_name2_1046=(char*)come_increment_ref_count(new_fun_name_1056);
        __dec_obj284 = come_decrement_ref_count(__dec_obj284, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_1045=fun_1055;
        (new_fun_name_1056 = come_decrement_ref_count(new_fun_name_1056, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj285=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1040);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj285,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj286=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1039);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj286,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__224 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_1038 = come_decrement_ref_count(result_1038, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1039, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_1044, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_1046 = come_decrement_ref_count(fun_name2_1046, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__224;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj287;
char* result_1057;
struct list$1CVALUE$ph* stack_saved_1058;
struct list$1sRightValueObject$ph* right_value_objects_1059;
struct sClass* klass_1060;
char* class_name_1061;
char* fun_name_1062;
void* __right_value1029 = (void*)0;
struct sType* type2_1063;
struct sFun* cloner_1064;
char* fun_name2_1065;
void* __right_value1030 = (void*)0;
char* none_generics_name_1066;
void* __right_value1031 = (void*)0;
struct sType* obj_type_1067;
void* __right_value1032 = (void*)0;
char* __dec_obj288;
void* __right_value1033 = (void*)0;
char* fun_name3_1068;
void* __right_value1034 = (void*)0;
struct sGenericsFun* generics_fun_1069;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var30 = (void*)0;
char* name_1070=0;
_Bool err_1071=0;
_Bool __result_obj__225;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
char* __dec_obj289;
int i_1072;
void* __right_value1040 = (void*)0;
char* new_fun_name_1073;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
char* __dec_obj290;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var31 = (void*)0;
struct sFun* fun_1074=0;
char* new_fun_name_1075=0;
char* __dec_obj291;
struct list$1sRightValueObject$ph* __dec_obj292;
struct list$1CVALUE$ph* __dec_obj293;
_Bool __result_obj__226;
fun_name2_1065 = (void*)0;
memset(&i_1072, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj287=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj287,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_1057=((void*)0);
    stack_saved_1058=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1059=info->right_value_objects;
    klass_1060=type->mClass;
    class_name_1061=klass_1060->mName;
    fun_name_1062="operator_not_equals";
    type2_1063=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1063->mHeap=(_Bool)0;
    cloner_1064=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_1066=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1067=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj288=fun_name2_1065,
        fun_name2_1065=(char*)come_increment_ref_count(create_method_name(obj_type_1067,(_Bool)0,fun_name_1062,info,(_Bool)1));
        __dec_obj288 = come_decrement_ref_count(__dec_obj288, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_1068=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1066,fun_name_1062));
        generics_fun_1069=((struct sGenericsFun*)(__right_value1034=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1068,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value1034, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_1069        ) {
            multiple_assign_var30=((struct tuple2$2char$phbool$*)(__right_value1036=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1065)),generics_fun_1069,(struct sType*)come_increment_ref_count(obj_type_1067),info)));
            name_1070=(char*)come_increment_ref_count(multiple_assign_var30->v1);
            err_1071=multiple_assign_var30->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1036, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_1071            ) {
                __result_obj__225 = (_Bool)0;
                (name_1070 = come_decrement_ref_count(name_1070, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_1066 = come_decrement_ref_count(none_generics_name_1066, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_1067, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_1068 = come_decrement_ref_count(fun_name3_1068, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_1057 = come_decrement_ref_count(result_1057, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1058, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_1063, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_1065 = come_decrement_ref_count(fun_name2_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__225;
            }
            cloner_1064=((struct sFun*)(__right_value1037=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1070)));
            come_call_finalizer(sFun_finalize, __right_value1037, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_1070 = come_decrement_ref_count(name_1070, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_1064=((struct sFun*)(__right_value1038=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1065)));
            come_call_finalizer(sFun_finalize, __right_value1038, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_1066 = come_decrement_ref_count(none_generics_name_1066, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_1067, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_1068 = come_decrement_ref_count(fun_name3_1068, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj289=fun_name2_1065,
        fun_name2_1065=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1062,info,(_Bool)1));
        __dec_obj289 = come_decrement_ref_count(__dec_obj289, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_1072=128-1        ;        i_1072>=1        ;        i_1072--        ){
            new_fun_name_1073=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1065,i_1072));
            cloner_1064=((struct sFun*)(__right_value1041=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1073)));
            come_call_finalizer(sFun_finalize, __right_value1041, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_1064            ) {
                __dec_obj290=fun_name2_1065,
                fun_name2_1065=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1073));
                __dec_obj290 = come_decrement_ref_count(__dec_obj290, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_1073 = come_decrement_ref_count(new_fun_name_1073, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_1073 = come_decrement_ref_count(new_fun_name_1073, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_1064==((void*)0)        ) {
            cloner_1064=((struct sFun*)(__right_value1043=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1065)));
            come_call_finalizer(sFun_finalize, __right_value1043, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_1064==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        multiple_assign_var31=((struct tuple2$2sFun$pchar$ph*)(__right_value1044=create_operator_not_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name_1062,info)));
        fun_1074=multiple_assign_var31->v1;
        new_fun_name_1075=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1044, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj291=fun_name2_1065,
        fun_name2_1065=(char*)come_increment_ref_count(new_fun_name_1075);
        __dec_obj291 = come_decrement_ref_count(__dec_obj291, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_1064=fun_1074;
        (new_fun_name_1075 = come_decrement_ref_count(new_fun_name_1075, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj292=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1059);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj292,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj293=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1058);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj293,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__226 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_1057 = come_decrement_ref_count(result_1057, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1058, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_1063, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_1065 = come_decrement_ref_count(fun_name2_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__226;
}

