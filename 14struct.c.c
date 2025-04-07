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

struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNode$ph* mMethods;
};

struct list_item$1sClass$p
{
    struct sClass* item;
    struct list_item$1sClass$p* prev;
    struct list_item$1sClass$p* next;
};

struct list$1sClass$p
{
    struct list_item$1sClass$p* head;
    struct list_item$1sClass$p* tail;
    int len;
    struct list_item$1sClass$p* it;
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
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
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
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type);
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
char* get_none_generics_name(char* class_name);
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
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
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
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNode* create_nothing_node(struct sInfo* info);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static void sClassNode_finalize(struct sClassNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self);
static void list$1sClass$p$p_finalize(struct list$1sClass$p* self);
static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item);
static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item);
static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self);
static _Bool list$1sClass$p_end(struct list$1sClass$p* self);
static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
void output_struct(struct sClass* klass, struct sInfo* info){
char* name_0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_1;
_Bool existance_generics_2;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_3;
struct tuple2$2char$phsType$ph* it_6;
struct tuple2$2char$phsType$ph* multiple_assign_var1 = (void*)0;
char* name_9=0;
struct sType* type_10=0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
_Bool _if_conditional1;
void* __right_value14 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0) {
        return;
    }
    name_0=(char*)come_increment_ref_count(klass->mName);
    buf_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 14, "struct buffer*"))));
    buffer_append_format(buf_1,"struct %s\n{\n",klass->mName);
    existance_generics_2=(_Bool)0;
    for(    o2_saved_3=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_6=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_3));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_3));    it_6=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_3))    ){
        multiple_assign_var1=it_6;
        name_9=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_10=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_10,info)||is_contained_generics_types(type_10,info)) {
            existance_generics_2=(_Bool)1;
        }
        type_10->mStatic=(_Bool)0;
        buffer_append_str(buf_1,"    ");
        buffer_append_str(buf_1,((char*)(__right_value2=make_define_var(type_10,name_9,(_Bool)0,info))));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_1,";\n");
        (name_9 = come_decrement_ref_count(name_9, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_10,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_3,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_1,"};\n");
    }
    else {
        buffer_append_format(buf_1,"} %s;\n",klass->mAttribute);
    }
    if(    (_if_conditional1=(((struct buffer*)(__right_value5=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value4=__builtin_string(name_0))))))==((void*)0)&&!existance_generics_2)),    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value5,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional1) {
        map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_0)),(struct buffer*)come_increment_ref_count(buf_1));
    }
    (name_0 = come_decrement_ref_count(name_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_1,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_4;
struct tuple2$2char$phsType$ph* __result_obj__1;
struct tuple2$2char$phsType$ph* __result_obj__2;
struct tuple2$2char$phsType$ph* result_5;
struct tuple2$2char$phsType$ph* __result_obj__3;
result_4 = (void*)0;
result_5 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_4,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__1 = result_4;
        return __result_obj__1;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__2 = self->it->item;
        return __result_obj__2;
    }
    memset(&result_5,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__3 = result_5;
    return __result_obj__3;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_7;
struct tuple2$2char$phsType$ph* __result_obj__4;
struct tuple2$2char$phsType$ph* __result_obj__5;
struct tuple2$2char$phsType$ph* result_8;
struct tuple2$2char$phsType$ph* __result_obj__6;
result_7 = (void*)0;
result_8 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_7,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__4 = result_7;
        return __result_obj__4;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__5 = self->it->item;
        return __result_obj__5;
    }
    memset(&result_8,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__6 = result_8;
    return __result_obj__6;
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
struct list_item$1sType$ph* it_11;
struct list_item$1sType$ph* prev_it_12;
    it_11=self->head;
    while(    it_11!=((void*)0)) {
        prev_it_12=it_11;
        it_11=it_11->next;
        /*c*/ come_call_finalizer3(prev_it_12,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_13;
struct list_item$1sNode$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)) {
        prev_it_14=it_13;
        it_13=it_13->next;
        /*c*/ come_call_finalizer3(prev_it_14,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_15;
struct list_item$1char$ph* prev_it_16;
    it_15=self->head;
    while(    it_15!=((void*)0)) {
        prev_it_16=it_15;
        it_15=it_15->next;
        /*c*/ come_call_finalizer3(prev_it_16,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_17;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_18;
    it_17=self->head;
    while(    it_17!=((void*)0)) {
        prev_it_18=it_17;
        it_17=it_17->next;
        /*c*/ come_call_finalizer3(prev_it_18,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_19;
unsigned int hash_20;
unsigned int it_21;
struct buffer* __result_obj__7;
struct buffer* __result_obj__8;
struct buffer* __result_obj__9;
struct buffer* __result_obj__10;
default_value_19 = (void*)0;
    memset(&default_value_19,0,sizeof(struct buffer*));
    hash_20=string_get_hash_key(((char*)key))%self->size;
    it_21=hash_20;
    while(    (_Bool)1) {
        if(        self->item_existance[it_21]) {
            if(            string_equals(self->keys[it_21],key)) {
                __result_obj__7 = (struct buffer*)come_increment_ref_count(self->items[it_21]);
                /*c*/ come_call_finalizer3(default_value_19,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__7,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__7;
            }
            it_21++;
            if(            it_21>=self->size) {
                it_21=0;
            }
            else if(            it_21==hash_20) {
                __result_obj__8 = (struct buffer*)come_increment_ref_count(default_value_19);
                /*c*/ come_call_finalizer3(default_value_19,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__8,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__8;
            }
        }
        else {
            __result_obj__9 = (struct buffer*)come_increment_ref_count(default_value_19);
            /*c*/ come_call_finalizer3(default_value_19,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__9,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__9;
        }
    }
    __result_obj__10 = (struct buffer*)come_increment_ref_count(default_value_19);
    /*c*/ come_call_finalizer3(default_value_19,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__10,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__10;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_22;
unsigned int hash_23;
unsigned int it_24;
struct buffer* __result_obj__11;
struct buffer* __result_obj__12;
struct buffer* __result_obj__13;
struct buffer* __result_obj__14;
default_value_22 = (void*)0;
    memset(&default_value_22,0,sizeof(struct buffer*));
    hash_23=string_get_hash_key(((char*)key))%self->size;
    it_24=hash_23;
    while(    (_Bool)1) {
        if(        self->item_existance[it_24]) {
            if(            string_equals(self->keys[it_24],key)) {
                __result_obj__11 = (struct buffer*)come_increment_ref_count(self->items[it_24]);
                /*c*/ come_call_finalizer3(default_value_22,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__11,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__11;
            }
            it_24++;
            if(            it_24>=self->size) {
                it_24=0;
            }
            else if(            it_24==hash_23) {
                __result_obj__12 = (struct buffer*)come_increment_ref_count(default_value_22);
                /*c*/ come_call_finalizer3(default_value_22,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__12,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__12;
            }
        }
        else {
            __result_obj__13 = (struct buffer*)come_increment_ref_count(default_value_22);
            /*c*/ come_call_finalizer3(default_value_22,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__13,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__13;
        }
    }
    __result_obj__14 = (struct buffer*)come_increment_ref_count(default_value_22);
    /*c*/ come_call_finalizer3(default_value_22,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__14,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__14;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
unsigned int hash_42;
unsigned int it_43;
_Bool same_key_exist_60;
char* it2_63;
struct map$2char$phbuffer$ph* __result_obj__36;
    if(    self->len*10>=self->size) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash_42=string_get_hash_key(((char*)key))%self->size;
    it_43=hash_42;
    while(    (_Bool)1) {
        if(        self->item_existance[it_43]) {
            if(            string_equals(self->keys[it_43],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_43]);
                    (self->keys[it_43] = come_decrement_ref_count(self->keys[it_43], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_43]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_43]);
                    self->keys[it_43]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_43],buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_43]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_43]=item;
                }
                break;
            }
            it_43++;
            if(            it_43>=self->size) {
                it_43=0;
            }
            else if(            it_43==hash_42) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_43]=(_Bool)1;
            if(            1) {
                self->keys[it_43]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_43]=key;
            }
            if(            1) {
                self->items[it_43]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_43]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_60=(_Bool)0;
    for(    it2_63=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_63=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_63,key)) {
            same_key_exist_60=(_Bool)1;
        }
    }
    if(    !same_key_exist_60) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__36 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__36;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size_25;
void* __right_value6 = (void*)0;
char** keys_26;
void* __right_value7 = (void*)0;
struct buffer** items_27;
void* __right_value8 = (void*)0;
_Bool* item_existance_28;
int len_29;
char* it_32;
struct buffer* default_value_35;
void* __right_value9 = (void*)0;
struct buffer* it2_36;
unsigned int hash_39;
int n_40;
struct buffer* default_value_41;
void* __right_value10 = (void*)0;
default_value_35 = (void*)0;
default_value_41 = (void*)0;
    size_25=self->size*10;
    keys_26=(char**)come_increment_ref_count(((char**)(__right_value6=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_25)), "./comelang.h", 2153, "char**"))));
    items_27=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value7=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(size_25)), "./comelang.h", 2154, "struct buffer**"))));
    item_existance_28=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value8=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_25)), "./comelang.h", 2155, "_Bool*"))));
    len_29=0;
    for(    it_32=map$2char$phbuffer$ph_begin(self);    !map$2char$phbuffer$ph_end(self);    it_32=map$2char$phbuffer$ph_next(self)    ){
        memset(&default_value_35,0,sizeof(struct buffer*));
        it2_36=((struct buffer*)(__right_value9=map$2char$phbuffer$ph_at(self,it_32,(struct buffer*)come_increment_ref_count(default_value_35))));
        /*c*/ come_call_finalizer3(__right_value9,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_39=string_get_hash_key(((char*)it_32))%size_25;
        n_40=hash_39;
        while(        (_Bool)1) {
            if(            item_existance_28[n_40]) {
                n_40++;
                if(                n_40>=size_25) {
                    n_40=0;
                }
                else if(                n_40==hash_39) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_28[n_40]=(_Bool)1;
                keys_26[n_40]=it_32;
                items_27[n_40]=((struct buffer*)(__right_value10=map$2char$phbuffer$ph_at(self,it_32,(struct buffer*)come_increment_ref_count(default_value_41))));
                /*c*/ come_call_finalizer3(__right_value10,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_29++;
                /*c*/ come_call_finalizer3(default_value_41,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_41,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_35,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_26;
    self->items=items_27;
    self->item_existance=item_existance_28;
    self->size=size_25;
    self->len=len_29;
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_30;
char* __result_obj__15;
char* __result_obj__16;
char* result_31;
char* __result_obj__17;
result_30 = (void*)0;
result_31 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_30,0,sizeof(char*));
        __result_obj__15 = result_30;
        return __result_obj__15;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__16 = self->key_list->it->item;
        return __result_obj__16;
    }
    memset(&result_31,0,sizeof(char*));
    __result_obj__17 = result_31;
    return __result_obj__17;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_33;
char* __result_obj__18;
char* __result_obj__19;
char* result_34;
char* __result_obj__20;
result_33 = (void*)0;
result_34 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_33,0,sizeof(char*));
        __result_obj__18 = result_33;
        return __result_obj__18;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__19 = self->key_list->it->item;
        return __result_obj__19;
    }
    memset(&result_34,0,sizeof(char*));
    __result_obj__20 = result_34;
    return __result_obj__20;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value){
unsigned int hash_37;
unsigned int it_38;
struct buffer* __result_obj__21;
struct buffer* __result_obj__22;
struct buffer* __result_obj__23;
struct buffer* __result_obj__24;
    hash_37=string_get_hash_key(((char*)key))%self->size;
    it_38=hash_37;
    while(    (_Bool)1) {
        if(        self->item_existance[it_38]) {
            if(            string_equals(self->keys[it_38],key)) {
                __result_obj__21 = (struct buffer*)come_increment_ref_count(self->items[it_38]);
                /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__21,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__21;
            }
            it_38++;
            if(            it_38>=self->size) {
                it_38=0;
            }
            else if(            it_38==hash_37) {
                __result_obj__22 = (struct buffer*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__22,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__22;
            }
        }
        else {
            __result_obj__23 = (struct buffer*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__23,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__23;
        }
    }
    __result_obj__24 = (struct buffer*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__24,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_44;
struct list_item$1char$ph* it_45;
struct list$1char$ph* __result_obj__28;
    it2_44=0;
    it_45=self->head;
    while(    it_45!=((void*)0)) {
        if(        string_equals(it_45->item,item)) {
            list$1char$ph_delete(self,it2_44,it2_44+1);
            break;
        }
        it2_44++;
        it_45=it_45->next;
    }
    __result_obj__28 = self;
    return __result_obj__28;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_46;
struct list$1char$ph* __result_obj__25;
struct list_item$1char$ph* it_49;
int i_50;
struct list_item$1char$ph* prev_it_51;
struct list_item$1char$ph* it_52;
int i_53;
struct list_item$1char$ph* prev_it_54;
struct list_item$1char$ph* it_55;
struct list_item$1char$ph* head_prev_it_56;
struct list_item$1char$ph* tail_it_57;
int i_58;
struct list_item$1char$ph* prev_it_59;
struct list$1char$ph* __result_obj__27;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_46=tail;
        tail=head;
        head=tmp_46;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__25 = self;
        return __result_obj__25;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_49=self->head;
        i_50=0;
        while(        it_49!=((void*)0)) {
            if(            i_50<tail) {
                prev_it_51=it_49;
                it_49=it_49->next;
                i_50++;
                /*c*/ come_call_finalizer3(prev_it_51,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_50==tail) {
                self->head=it_49;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_49=it_49->next;
                i_50++;
            }
        }
    }
    else if(    tail==self->len) {
        it_52=self->head;
        i_53=0;
        while(        it_52!=((void*)0)) {
            if(            i_53==head) {
                self->tail=it_52->prev;
                self->tail->next=((void*)0);
            }
            if(            i_53>=head) {
                prev_it_54=it_52;
                it_52=it_52->next;
                i_53++;
                /*c*/ come_call_finalizer3(prev_it_54,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_52=it_52->next;
                i_53++;
            }
        }
    }
    else {
        it_55=self->head;
        head_prev_it_56=((void*)0);
        tail_it_57=((void*)0);
        i_58=0;
        while(        it_55!=((void*)0)) {
            if(            i_58==head) {
                head_prev_it_56=it_55->prev;
            }
            if(            i_58==tail) {
                tail_it_57=it_55;
            }
            if(            i_58>=head&&i_58<tail) {
                prev_it_59=it_55;
                it_55=it_55->next;
                i_58++;
                /*c*/ come_call_finalizer3(prev_it_59,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_55=it_55->next;
                i_58++;
            }
        }
        if(        head_prev_it_56!=((void*)0)) {
            head_prev_it_56->next=tail_it_57;
        }
        if(        tail_it_57!=((void*)0)) {
            tail_it_57->prev=head_prev_it_56;
        }
    }
    __result_obj__27 = self;
    return __result_obj__27;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_47;
struct list_item$1char$ph* prev_it_48;
struct list$1char$ph* __result_obj__26;
    it_47=self->head;
    while(    it_47!=((void*)0)) {
        prev_it_48=it_47;
        it_47=it_47->next;
        /*c*/ come_call_finalizer3(prev_it_48,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = self;
    return __result_obj__26;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_61;
char* __result_obj__29;
char* __result_obj__30;
char* result_62;
char* __result_obj__31;
result_61 = (void*)0;
result_62 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_61,0,sizeof(char*));
        __result_obj__29 = result_61;
        return __result_obj__29;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_62,0,sizeof(char*));
    __result_obj__31 = result_62;
    return __result_obj__31;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_64;
char* __result_obj__32;
char* __result_obj__33;
char* result_65;
char* __result_obj__34;
result_64 = (void*)0;
result_65 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_64,0,sizeof(char*));
        __result_obj__32 = result_64;
        return __result_obj__32;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__33 = self->it->item;
        return __result_obj__33;
    }
    memset(&result_65,0,sizeof(char*));
    __result_obj__34 = result_65;
    return __result_obj__34;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value11 = (void*)0;
struct list_item$1char$ph* litem_66;
char* __dec_obj1;
void* __right_value12 = (void*)0;
struct list_item$1char$ph* litem_67;
char* __dec_obj2;
void* __right_value13 = (void*)0;
struct list_item$1char$ph* litem_68;
char* __dec_obj3;
struct list$1char$ph* __result_obj__35;
    if(    self->len==0) {
        litem_66=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value11=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_66->prev=((void*)0);
        litem_66->next=((void*)0);
        __dec_obj1=litem_66->item,
        litem_66->item=(char*)come_increment_ref_count(item);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_66;
        self->head=litem_66;
    }
    else if(    self->len==1) {
        litem_67=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value12=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_67->prev=self->head;
        litem_67->next=((void*)0);
        __dec_obj2=litem_67->item,
        litem_67->item=(char*)come_increment_ref_count(item);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_67;
        self->head->next=litem_67;
    }
    else {
        litem_68=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value13=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_68->prev=self->tail;
        litem_68->next=((void*)0);
        __dec_obj3=litem_68->item,
        litem_68->item=(char*)come_increment_ref_count(item);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_68;
        self->tail=litem_68;
    }
    self->len++;
    __result_obj__35 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__35;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct buffer* buf_69;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_70;
struct tuple2$2char$phsType$ph* it_71;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* name_72=0;
struct sType* type_73=0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
char* id_74;
void* __right_value19 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    buf_69=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 50, "struct buffer*"))));
    if(    klass->mParentClassName) {
        buffer_append_format(buf_69,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
    }
    else {
        buffer_append_format(buf_69,"struct %s\n{\n",klass->mName);
    }
    for(    o2_saved_70=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_71=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_70));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_70));    it_71=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_70))    ){
        multiple_assign_var2=it_71;
        name_72=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        type_73=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        type_73->mStatic=(_Bool)0;
        buffer_append_str(buf_69,"    ");
        buffer_append_str(buf_69,((char*)(__right_value17=make_define_var_no_solved(type_73,name_72,(_Bool)0,(_Bool)1,info))));
        (__right_value17 = come_decrement_ref_count(__right_value17, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_69,";\n");
        (name_72 = come_decrement_ref_count(name_72, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_73,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_70,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_69,"};\n");
    }
    else {
        buffer_append_format(buf_69,"} %s;\n",klass->mAttribute);
    }
    id_74=(char*)come_increment_ref_count(__builtin_string(klass->mName));
    add_come_code_at_come_struct_header(info,id_74,"%s",((char*)(__right_value19=buffer_to_string(buf_69))));
    (__right_value19 = come_decrement_ref_count(__right_value19, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_69,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (id_74 = come_decrement_ref_count(id_74, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_75;
struct sClass* klass_76;
int i_77;
void* __right_value20 = (void*)0;
_Bool result_78;
    type2_75=type->mNoSolvedGenericsType;
    if(    type2_75&&is_contained_generics_types(type2_75,info)) {
        return (_Bool)1;
    }
    klass_76=type->mClass;
    if(    klass_76->mGenerics) {
        return (_Bool)1;
    }
    for(    i_77=0;    i_77<list$1sType$ph_length(type->mGenericsTypes);    i_77++    ){
        result_78=is_contained_generics_types(((struct sType*)(__right_value20=list$1sType$ph_operator_load_element(type->mGenericsTypes,i_77))),info);
        /*c*/ come_call_finalizer3(__right_value20,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        result_78) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_79;
int i_80;
struct sType* __result_obj__37;
struct sType* default_value_81;
struct sType* __result_obj__38;
default_value_81 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_79=self->head;
    i_80=0;
    while(    it_79!=((void*)0)) {
        if(        position==i_80) {
            __result_obj__37 = (struct sType*)come_increment_ref_count(it_79->item);
            /*c*/ come_call_finalizer3(__result_obj__37,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__37;
        }
        it_79=it_79->next;
        i_80++;
    }
    memset(&default_value_81,0,sizeof(struct sType*));
    __result_obj__38 = (struct sType*)come_increment_ref_count(default_value_81);
    /*c*/ come_call_finalizer3(default_value_81,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__38,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__38;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_82;
int i_83;
struct sType* __result_obj__39;
struct sType* default_value_84;
struct sType* __result_obj__40;
default_value_84 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_82=self->head;
    i_83=0;
    while(    it_82!=((void*)0)) {
        if(        position==i_83) {
            __result_obj__39 = (struct sType*)come_increment_ref_count(it_82->item);
            /*c*/ come_call_finalizer3(__result_obj__39,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__39;
        }
        it_82=it_82->next;
        i_83++;
    }
    memset(&default_value_84,0,sizeof(struct sType*));
    __result_obj__40 = (struct sType*)come_increment_ref_count(default_value_84);
    /*c*/ come_call_finalizer3(default_value_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__40,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__40;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_85;
struct sClass* klass_86;
int i_87;
void* __right_value21 = (void*)0;
_Bool result_88;
    type2_85=type->mNoSolvedGenericsType;
    if(    type2_85&&is_contained_method_generics_types(type2_85,info)) {
        return (_Bool)1;
    }
    klass_86=type->mClass;
    if(    klass_86->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_87=0;    i_87<list$1sType$ph_length(type->mGenericsTypes);    i_87++    ){
        result_88=is_contained_method_generics_types(((struct sType*)(__right_value21=list$1sType$ph_operator_load_element(type->mGenericsTypes,i_87))),info);
        /*c*/ come_call_finalizer3(__right_value21,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        result_88) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value22 = (void*)0;
char* new_name_89;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct sClass* generics_class_92;
void* __right_value26 = (void*)0;
_Bool __result_obj__49;
void* __right_value32 = (void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct sClass* new_class_120;
int i_121;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_122;
struct tuple2$2char$phsType$ph* it_123;
struct tuple2$2char$phsType$ph* multiple_assign_var3 = (void*)0;
char* name_124=0;
struct sType* type_125=0;
void* __right_value37 = (void*)0;
struct sType* new_type_126;
void* __right_value41 = (void*)0;
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
struct sType* __dec_obj34;
void* __right_value86 = (void*)0;
struct sType* __dec_obj35;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
_Bool __result_obj__82;
    new_name_89=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2char$phsClass$ph_find(info->classes,new_name_89)) {
        generics_class_92=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value24=__builtin_string(type->mClass->mName)))));
        (__right_value23 = come_decrement_ref_count(__right_value23, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value24 = come_decrement_ref_count(__right_value24, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        generics_class_92==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value26=err_msg(info,"generics_class(%s) is null",type->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value26,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__49 = (_Bool)0;
            /*c*/ come_call_finalizer3(generics_class_92,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (new_name_89 = come_decrement_ref_count(new_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__49;
        }
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_89)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 140, "struct sClass*")),(char*)come_increment_ref_count(new_name_89),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
        new_class_120=((struct sClass*)(__right_value36=map$2char$phsClass$ph_at(info->classes,((char*)(__right_value35=__builtin_string(new_name_89))),((void*)0))));
        (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value36,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_121=0;
        for(        o2_saved_122=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((generics_class_92->mFields)),it_123=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_122));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_122));        it_123=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_122))        ){
            multiple_assign_var3=it_123;
            name_124=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_125=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_126=(struct sType*)come_increment_ref_count(solve_generics(type_125,generics_type,info));
            list$1tuple2$2char$phsType$ph$ph_push_back(new_class_120->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 150, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count((char*)come_memdup(name_124, "14struct.c", 150, "char*")),(struct sType*)come_increment_ref_count(sType_clone(new_type_126)))));
            (name_124 = come_decrement_ref_count(name_124, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_125,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(new_type_126,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_122,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj34=type->mNoSolvedGenericsType,
        type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(type));
        /*b*/ come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        type->mClass=new_class_120;
        list$1sType$ph_reset(type->mGenericsTypes);
        output_struct(new_class_120,info);
        /*c*/ come_call_finalizer3(generics_class_92,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        if(        type->mNoSolvedGenericsType==((void*)0)&&list$1sType$ph_length(type->mGenericsTypes)>0) {
            __dec_obj35=type->mNoSolvedGenericsType,
            type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(type));
            /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value89=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value88=__builtin_string(new_name_89))))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value89,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_reset(type->mGenericsTypes);
    }
    __result_obj__82 = (_Bool)1;
    (new_name_89 = come_decrement_ref_count(new_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__82;
}

static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key){
unsigned int hash_90;
int it_91;
    hash_90=string_get_hash_key(((char*)key))%self->size;
    it_91=hash_90;
    while(    (_Bool)1) {
        if(        self->item_existance[it_91]) {
            if(            string_equals(self->keys[it_91],key)) {
                return (_Bool)1;
            }
            it_91++;
            if(            it_91>=self->size) {
                it_91=0;
            }
            else if(            it_91==hash_90) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_93;
unsigned int hash_94;
unsigned int it_95;
struct sClass* __result_obj__41;
struct sClass* __result_obj__42;
struct sClass* __result_obj__43;
struct sClass* __result_obj__44;
default_value_93 = (void*)0;
    memset(&default_value_93,0,sizeof(struct sClass*));
    hash_94=string_get_hash_key(((char*)key))%self->size;
    it_95=hash_94;
    while(    (_Bool)1) {
        if(        self->item_existance[it_95]) {
            if(            string_equals(self->keys[it_95],key)) {
                __result_obj__41 = (struct sClass*)come_increment_ref_count(self->items[it_95]);
                /*c*/ come_call_finalizer3(default_value_93,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__41,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__41;
            }
            it_95++;
            if(            it_95>=self->size) {
                it_95=0;
            }
            else if(            it_95==hash_94) {
                __result_obj__42 = (struct sClass*)come_increment_ref_count(default_value_93);
                /*c*/ come_call_finalizer3(default_value_93,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__42,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__42;
            }
        }
        else {
            __result_obj__43 = (struct sClass*)come_increment_ref_count(default_value_93);
            /*c*/ come_call_finalizer3(default_value_93,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__43,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__43;
        }
    }
    __result_obj__44 = (struct sClass*)come_increment_ref_count(default_value_93);
    /*c*/ come_call_finalizer3(default_value_93,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__44,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__44;
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_96;
unsigned int hash_97;
unsigned int it_98;
struct sClass* __result_obj__45;
struct sClass* __result_obj__46;
struct sClass* __result_obj__47;
struct sClass* __result_obj__48;
default_value_96 = (void*)0;
    memset(&default_value_96,0,sizeof(struct sClass*));
    hash_97=string_get_hash_key(((char*)key))%self->size;
    it_98=hash_97;
    while(    (_Bool)1) {
        if(        self->item_existance[it_98]) {
            if(            string_equals(self->keys[it_98],key)) {
                __result_obj__45 = (struct sClass*)come_increment_ref_count(self->items[it_98]);
                /*c*/ come_call_finalizer3(default_value_96,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__45,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__45;
            }
            it_98++;
            if(            it_98>=self->size) {
                it_98=0;
            }
            else if(            it_98==hash_97) {
                __result_obj__46 = (struct sClass*)come_increment_ref_count(default_value_96);
                /*c*/ come_call_finalizer3(default_value_96,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__46,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__46;
            }
        }
        else {
            __result_obj__47 = (struct sClass*)come_increment_ref_count(default_value_96);
            /*c*/ come_call_finalizer3(default_value_96,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__47,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__47;
        }
    }
    __result_obj__48 = (struct sClass*)come_increment_ref_count(default_value_96);
    /*c*/ come_call_finalizer3(default_value_96,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__48,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__48;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_116;
unsigned int it_117;
_Bool same_key_exist_118;
char* it2_119;
struct map$2char$phsClass$ph* __result_obj__60;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_116=string_get_hash_key(((char*)key))%self->size;
    it_117=hash_116;
    while(    (_Bool)1) {
        if(        self->item_existance[it_117]) {
            if(            string_equals(self->keys[it_117],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_117]);
                    (self->keys[it_117] = come_decrement_ref_count(self->keys[it_117], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_117]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_117]);
                    self->keys[it_117]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_117],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_117]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_117]=item;
                }
                break;
            }
            it_117++;
            if(            it_117>=self->size) {
                it_117=0;
            }
            else if(            it_117==hash_116) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_117]=(_Bool)1;
            if(            1) {
                self->keys[it_117]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_117]=key;
            }
            if(            1) {
                self->items[it_117]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_117]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_118=(_Bool)0;
    for(    it2_119=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_119=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_119,key)) {
            same_key_exist_118=(_Bool)1;
        }
    }
    if(    !same_key_exist_118) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__60 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__60;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_99;
void* __right_value27 = (void*)0;
char** keys_100;
void* __right_value28 = (void*)0;
struct sClass** items_101;
void* __right_value29 = (void*)0;
_Bool* item_existance_102;
int len_103;
char* it_106;
struct sClass* default_value_109;
void* __right_value30 = (void*)0;
struct sClass* it2_110;
unsigned int hash_113;
int n_114;
struct sClass* default_value_115;
void* __right_value31 = (void*)0;
default_value_109 = (void*)0;
default_value_115 = (void*)0;
    size_99=self->size*10;
    keys_100=(char**)come_increment_ref_count(((char**)(__right_value27=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_99)), "./comelang.h", 2153, "char**"))));
    items_101=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value28=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_99)), "./comelang.h", 2154, "struct sClass**"))));
    item_existance_102=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value29=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_99)), "./comelang.h", 2155, "_Bool*"))));
    len_103=0;
    for(    it_106=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_106=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_109,0,sizeof(struct sClass*));
        it2_110=((struct sClass*)(__right_value30=map$2char$phsClass$ph_at(self,it_106,(struct sClass*)come_increment_ref_count(default_value_109))));
        /*c*/ come_call_finalizer3(__right_value30,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_113=string_get_hash_key(((char*)it_106))%size_99;
        n_114=hash_113;
        while(        (_Bool)1) {
            if(            item_existance_102[n_114]) {
                n_114++;
                if(                n_114>=size_99) {
                    n_114=0;
                }
                else if(                n_114==hash_113) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_102[n_114]=(_Bool)1;
                keys_100[n_114]=it_106;
                items_101[n_114]=((struct sClass*)(__right_value31=map$2char$phsClass$ph_at(self,it_106,(struct sClass*)come_increment_ref_count(default_value_115))));
                /*c*/ come_call_finalizer3(__right_value31,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_103++;
                /*c*/ come_call_finalizer3(default_value_115,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_115,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_109,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_100;
    self->items=items_101;
    self->item_existance=item_existance_102;
    self->size=size_99;
    self->len=len_103;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_104;
char* __result_obj__50;
char* __result_obj__51;
char* result_105;
char* __result_obj__52;
result_104 = (void*)0;
result_105 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_104,0,sizeof(char*));
        __result_obj__50 = result_104;
        return __result_obj__50;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__51 = self->key_list->it->item;
        return __result_obj__51;
    }
    memset(&result_105,0,sizeof(char*));
    __result_obj__52 = result_105;
    return __result_obj__52;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_107;
char* __result_obj__53;
char* __result_obj__54;
char* result_108;
char* __result_obj__55;
result_107 = (void*)0;
result_108 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_107,0,sizeof(char*));
        __result_obj__53 = result_107;
        return __result_obj__53;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__54 = self->key_list->it->item;
        return __result_obj__54;
    }
    memset(&result_108,0,sizeof(char*));
    __result_obj__55 = result_108;
    return __result_obj__55;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_111;
unsigned int it_112;
struct sClass* __result_obj__56;
struct sClass* __result_obj__57;
struct sClass* __result_obj__58;
struct sClass* __result_obj__59;
    hash_111=string_get_hash_key(((char*)key))%self->size;
    it_112=hash_111;
    while(    (_Bool)1) {
        if(        self->item_existance[it_112]) {
            if(            string_equals(self->keys[it_112],key)) {
                __result_obj__56 = (struct sClass*)come_increment_ref_count(self->items[it_112]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__56,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__56;
            }
            it_112++;
            if(            it_112>=self->size) {
                it_112=0;
            }
            else if(            it_112==hash_111) {
                __result_obj__57 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__57,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__57;
            }
        }
        else {
            __result_obj__58 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__58,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__58;
        }
    }
    __result_obj__59 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__59,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value38 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_127;
struct tuple2$2char$phsType$ph* __dec_obj4;
void* __right_value39 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_128;
struct tuple2$2char$phsType$ph* __dec_obj5;
void* __right_value40 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_129;
struct tuple2$2char$phsType$ph* __dec_obj6;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__61;
    if(    self->len==0) {
        litem_127=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value38=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_127->prev=((void*)0);
        litem_127->next=((void*)0);
        __dec_obj4=litem_127->item,
        litem_127->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj4,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_127;
        self->head=litem_127;
    }
    else if(    self->len==1) {
        litem_128=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value39=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_128->prev=self->head;
        litem_128->next=((void*)0);
        __dec_obj5=litem_128->item,
        litem_128->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_128;
        self->head->next=litem_128;
    }
    else {
        litem_129=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value40=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_129->prev=self->tail;
        litem_129->next=((void*)0);
        __dec_obj6=litem_129->item,
        litem_129->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj6,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_129;
        self->tail=litem_129;
    }
    self->len++;
    __result_obj__61 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__61;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__62;
void* __right_value42 = (void*)0;
struct sType* result_130;
void* __right_value43 = (void*)0;
struct sType* __dec_obj7;
void* __right_value44 = (void*)0;
struct sType* __dec_obj8;
void* __right_value52 = (void*)0;
struct list$1sType$ph* __dec_obj12;
void* __right_value53 = (void*)0;
struct sType* __dec_obj13;
void* __right_value55 = (void*)0;
struct sNode* __dec_obj14;
void* __right_value56 = (void*)0;
struct sNode* __dec_obj15;
void* __right_value57 = (void*)0;
char* __dec_obj16;
void* __right_value58 = (void*)0;
char* __dec_obj17;
void* __right_value59 = (void*)0;
char* __dec_obj18;
void* __right_value67 = (void*)0;
struct list$1sNode$ph* __dec_obj22;
void* __right_value68 = (void*)0;
char* __dec_obj23;
void* __right_value69 = (void*)0;
struct list$1sType$ph* __dec_obj24;
void* __right_value77 = (void*)0;
struct list$1char$ph* __dec_obj28;
void* __right_value78 = (void*)0;
struct sType* __dec_obj29;
struct sType* __result_obj__77;
    if(    self==(void*)0) {
        __result_obj__62 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__62,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__62;
    }
    result_130=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_130->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj7=result_130->mOriginalLoadVarType,
        result_130->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj7,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj8=result_130->mChannelType,
        result_130->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj8,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj12=result_130->mGenericsTypes,
        result_130->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj12,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj13=result_130->mNoSolvedGenericsType,
        result_130->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj13,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj14=result_130->mSizeNum,
        result_130->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj15=result_130->mAlignas,
        result_130->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj16=result_130->mTupleName,
        result_130->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj17=result_130->mAttribute,
        result_130->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_130->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_130->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_130->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_130->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_130->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_130->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_130->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_130->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_130->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_130->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_130->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_130->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_130->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_130->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_130->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_130->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_130->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_130->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_130->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_130->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_130->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_130->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_130->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj18=result_130->mAsmName,
        result_130->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_130->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_130->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_130->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj22=result_130->mArrayNum,
        result_130->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_130->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_130->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_130->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_130->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_130->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj23=result_130->mOriginalTypeName,
        result_130->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_130->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_130->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_130->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_130->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj24=result_130->mParamTypes,
        result_130->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj24,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj28=result_130->mParamNames,
        result_130->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj28,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj29=result_130->mResultType,
        result_130->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_130->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_130->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__77 = (struct sType*)come_increment_ref_count(result_130);
    /*c*/ come_call_finalizer3(result_130,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__63;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct list$1sType$ph* result_131;
struct list_item$1sType$ph* it_132;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct list$1sType$ph* __result_obj__66;
    if(    self==((void*)0)) {
        __result_obj__63 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__63,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__63;
    }
    result_131=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_132=self->head;
    while(    it_132!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_131,(struct sType*)come_increment_ref_count(sType_clone(it_132->item)));
        }
        else {
            list$1sType$ph_add(result_131,(struct sType*)come_increment_ref_count(sType_clone(it_132->item)));
        }
        it_132=it_132->next;
    }
    __result_obj__66 = (struct list$1sType$ph*)come_increment_ref_count(result_131);
    /*c*/ come_call_finalizer3(result_131,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__66,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__66;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__64;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__64 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__64,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__64;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value47 = (void*)0;
struct list_item$1sType$ph* litem_133;
struct sType* __dec_obj9;
void* __right_value48 = (void*)0;
struct list_item$1sType$ph* litem_134;
struct sType* __dec_obj10;
void* __right_value49 = (void*)0;
struct list_item$1sType$ph* litem_135;
struct sType* __dec_obj11;
struct list$1sType$ph* __result_obj__65;
    if(    self->len==0) {
        litem_133=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value47=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_133->prev=((void*)0);
        litem_133->next=((void*)0);
        __dec_obj9=litem_133->item,
        litem_133->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj9,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_133;
        self->head=litem_133;
    }
    else if(    self->len==1) {
        litem_134=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value48=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_134->prev=self->head;
        litem_134->next=((void*)0);
        __dec_obj10=litem_134->item,
        litem_134->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj10,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_134;
        self->head->next=litem_134;
    }
    else {
        litem_135=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value49=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_135->prev=self->tail;
        litem_135->next=((void*)0);
        __dec_obj11=litem_135->item,
        litem_135->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj11,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_135;
        self->tail=litem_135;
    }
    self->len++;
    __result_obj__65 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_136;
struct list_item$1sType$ph* prev_it_137;
    it_136=self->head;
    while(    it_136!=((void*)0)) {
        prev_it_137=it_136;
        it_136=it_136->next;
        /*c*/ come_call_finalizer3(prev_it_137,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__67;
void* __right_value54 = (void*)0;
struct sNode* result_138;
struct sNode* __result_obj__68;
    if(    self==(void*)0) {
        __result_obj__67 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__67) ? __result_obj__67 = come_decrement_ref_count(__result_obj__67, ((struct sNode*)__result_obj__67)->finalize, ((struct sNode*)__result_obj__67)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__67;
    }
    result_138=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_138->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_138->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_138->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_138->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_138->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_138->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_138->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_138->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_138->kind=self->kind;
    }
    __result_obj__68 = (struct sNode*)come_increment_ref_count(result_138);
    ((result_138) ? result_138 = come_decrement_ref_count(result_138, ((struct sNode*)result_138)->finalize, ((struct sNode*)result_138)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__68) ? __result_obj__68 = come_decrement_ref_count(__result_obj__68, ((struct sNode*)__result_obj__68)->finalize, ((struct sNode*)__result_obj__68)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__68;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__69;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1sNode$ph* result_139;
struct list_item$1sNode$ph* it_140;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1sNode$ph* __result_obj__72;
    if(    self==((void*)0)) {
        __result_obj__69 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__69,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__69;
    }
    result_139=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_140=self->head;
    while(    it_140!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_139,(struct sNode*)come_increment_ref_count(sNode_clone(it_140->item)));
        }
        else {
            list$1sNode$ph_add(result_139,(struct sNode*)come_increment_ref_count(sNode_clone(it_140->item)));
        }
        it_140=it_140->next;
    }
    __result_obj__72 = (struct list$1sNode$ph*)come_increment_ref_count(result_139);
    /*c*/ come_call_finalizer3(result_139,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__70;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__70,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__70;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value62 = (void*)0;
struct list_item$1sNode$ph* litem_141;
struct sNode* __dec_obj19;
void* __right_value63 = (void*)0;
struct list_item$1sNode$ph* litem_142;
struct sNode* __dec_obj20;
void* __right_value64 = (void*)0;
struct list_item$1sNode$ph* litem_143;
struct sNode* __dec_obj21;
struct list$1sNode$ph* __result_obj__71;
    if(    self->len==0) {
        litem_141=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value62=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        __dec_obj19=litem_141->item,
        litem_141->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value63=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        __dec_obj20=litem_142->item,
        litem_142->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value64=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        __dec_obj21=litem_143->item,
        litem_143->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result_obj__71 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__71;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_144;
struct list_item$1sNode$ph* prev_it_145;
    it_144=self->head;
    while(    it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        /*c*/ come_call_finalizer3(prev_it_145,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__73;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1char$ph* result_146;
struct list_item$1char$ph* it_147;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1char$ph* __result_obj__76;
    if(    self==((void*)0)) {
        __result_obj__73 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__73,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__73;
    }
    result_146=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_147=self->head;
    while(    it_147!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_146,(char*)come_increment_ref_count((char*)come_memdup(it_147->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_146,(char*)come_increment_ref_count((char*)come_memdup(it_147->item, "./comelang.h", 1032, "char*")));
        }
        it_147=it_147->next;
    }
    __result_obj__76 = (struct list$1char$ph*)come_increment_ref_count(result_146);
    /*c*/ come_call_finalizer3(result_146,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__76,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__76;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__74 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value72 = (void*)0;
struct list_item$1char$ph* litem_148;
char* __dec_obj25;
void* __right_value73 = (void*)0;
struct list_item$1char$ph* litem_149;
char* __dec_obj26;
void* __right_value74 = (void*)0;
struct list_item$1char$ph* litem_150;
char* __dec_obj27;
struct list$1char$ph* __result_obj__75;
    if(    self->len==0) {
        litem_148=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value72=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        __dec_obj25=litem_148->item,
        litem_148->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_148;
        self->head=litem_148;
    }
    else if(    self->len==1) {
        litem_149=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value73=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_149->prev=self->head;
        litem_149->next=((void*)0);
        __dec_obj26=litem_149->item,
        litem_149->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_149;
        self->head->next=litem_149;
    }
    else {
        litem_150=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value74=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_150->prev=self->tail;
        litem_150->next=((void*)0);
        __dec_obj27=litem_150->item,
        litem_150->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_150;
        self->tail=litem_150;
    }
    self->len++;
    __result_obj__75 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__75;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_151;
struct list_item$1char$ph* prev_it_152;
    it_151=self->head;
    while(    it_151!=((void*)0)) {
        prev_it_152=it_151;
        it_151=it_151->next;
        /*c*/ come_call_finalizer3(prev_it_152,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__78;
void* __right_value80 = (void*)0;
struct tuple2$2char$phsType$ph* result_153;
void* __right_value81 = (void*)0;
char* __dec_obj30;
void* __right_value82 = (void*)0;
struct sType* __dec_obj31;
struct tuple2$2char$phsType$ph* __result_obj__79;
    if(    self==(void*)0) {
        __result_obj__78 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__78,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__78;
    }
    result_153=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj30=result_153->v1,
        result_153->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj31=result_153->v2,
        result_153->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__79 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_153);
    /*c*/ come_call_finalizer3(result_153,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__79,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__79;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_154;
    result_154=0;
    result_154+=int_get_hash_key(((int)self->v1));
    result_154+=int_get_hash_key(((int)self->v2));
    return result_154;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->v2,right->v2)) {
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
    if(    !bool_equals(left->mUniq,right->mUniq)) {
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
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_155;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_156;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_155=left->head;
    it2_156=right->head;
    while(    it_155!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_155->item,it2_156->item)) {
            return (_Bool)0;
        }
        it_155=it_155->next;
        it2_156=it2_156->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_157;
struct list_item$1sType$ph* it2_158;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_157=left->head;
    it2_158=right->head;
    while(    it_157!=((void*)0)) {
        if(        !sType_equals(it_157->item,it2_158->item)) {
            return (_Bool)0;
        }
        it_157=it_157->next;
        it2_158=it2_158->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_159;
struct list_item$1sNode$ph* it2_160;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_159=left->head;
    it2_160=right->head;
    while(    it_159!=((void*)0)) {
        if(        !sNode_equals(it_159->item,it2_160->item)) {
            return (_Bool)0;
        }
        it_159=it_159->next;
        it2_160=it2_160->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_161;
struct list_item$1char$ph* it2_162;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_161=left->head;
    it2_162=right->head;
    while(    it_161!=((void*)0)) {
        if(        !string_equals(it_161->item,it2_162->item)) {
            return (_Bool)0;
        }
        it_161=it_161->next;
        it2_162=it2_162->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj32;
struct sType* __dec_obj33;
struct tuple2$2char$phsType$ph* __result_obj__80;
    __dec_obj32=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj33=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__80 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__80,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__80;
}

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_163;
struct list_item$1sType$ph* prev_it_164;
struct list$1sType$ph* __result_obj__81;
    it_163=self->head;
    while(    it_163!=((void*)0)) {
        prev_it_164=it_163;
        it_163=it_163->next;
        /*c*/ come_call_finalizer3(prev_it_164,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__81 = self;
    return __result_obj__81;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
char* __dec_obj36;
void* __right_value104 = (void*)0;
struct sClass* __dec_obj44;
struct sStructNode* __result_obj__89;
    ((struct sNodeBase*)(__right_value90=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value90,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj36=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj44=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    /*b*/ come_call_finalizer3(__dec_obj44,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__89 = (struct sStructNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStructNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__89,sStructNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__89;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __right_value105 = (void*)0;
char* __result_obj__90;
    __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string("sStructNode"))));
    (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__90;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_173;
void* __right_value106 = (void*)0;
char* name_174;
_Bool __result_obj__91;
    klass_173=(struct sClass*)come_increment_ref_count(self->mClass);
    name_174=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_173,info);
    __result_obj__91 = (_Bool)1;
    /*c*/ come_call_finalizer3(klass_173,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_174 = come_decrement_ref_count(name_174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__91;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__83;
void* __right_value92 = (void*)0;
struct sClass* result_165;
void* __right_value93 = (void*)0;
char* __dec_obj37;
void* __right_value101 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj41;
void* __right_value102 = (void*)0;
char* __dec_obj42;
void* __right_value103 = (void*)0;
char* __dec_obj43;
struct sClass* __result_obj__88;
    if(    self==(void*)0) {
        __result_obj__83 = (void*)0;
        return __result_obj__83;
    }
    result_165=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass*"));
    if(    self!=((void*)0)) {
        result_165->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_165->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_165->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_165->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_165->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_165->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_165->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_165->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)) {
        result_165->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj37=result_165->mName,
        result_165->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClass_clone", 13, "char*"));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_165->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_165->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj41=result_165->mFields,
        result_165->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(self->mFields));
        /*b*/ come_call_finalizer3(__dec_obj41,list$1tuple2$2char$phsType$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj42=result_165->mParentClassName,
        result_165->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(self->mParentClassName, "sClass_clone", 17, "char*"));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj43=result_165->mAttribute,
        result_165->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sClass_clone", 18, "char*"));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__88 = result_165;
    /*c*/ come_call_finalizer3(result_165,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__88;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__84;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* result_166;
struct list_item$1tuple2$2char$phsType$ph$ph* it_167;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__87;
    if(    self==((void*)0)) {
        __result_obj__84 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__84,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__84;
    }
    result_166=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    it_167=self->head;
    while(    it_167!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsType$ph$ph_add(result_166,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it_167->item)));
        }
        else {
            list$1tuple2$2char$phsType$ph$ph_add(result_166,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it_167->item)));
        }
        it_167=it_167->next;
    }
    __result_obj__87 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(result_166);
    /*c*/ come_call_finalizer3(result_166,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__87,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__87;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__85;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__85 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__85,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value96 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_168;
struct tuple2$2char$phsType$ph* __dec_obj38;
void* __right_value97 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_169;
struct tuple2$2char$phsType$ph* __dec_obj39;
void* __right_value98 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_170;
struct tuple2$2char$phsType$ph* __dec_obj40;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__86;
    if(    self->len==0) {
        litem_168=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value96=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_168->prev=((void*)0);
        litem_168->next=((void*)0);
        __dec_obj38=litem_168->item,
        litem_168->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj38,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_168;
        self->head=litem_168;
    }
    else if(    self->len==1) {
        litem_169=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value97=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_169->prev=self->head;
        litem_169->next=((void*)0);
        __dec_obj39=litem_169->item,
        litem_169->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj39,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_169;
        self->head->next=litem_169;
    }
    else {
        litem_170=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value98=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_170->prev=self->tail;
        litem_170->next=((void*)0);
        __dec_obj40=litem_170->item,
        litem_170->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj40,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_170;
        self->tail=litem_170;
    }
    self->len++;
    __result_obj__86 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__86;
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_171;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_172;
    it_171=self->head;
    while(    it_171!=((void*)0)) {
        prev_it_172=it_171;
        it_171=it_171->next;
        /*c*/ come_call_finalizer3(prev_it_172,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sStructNode_finalize(struct sStructNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mClass,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info){
void* __right_value107 = (void*)0;
char* __dec_obj45;
struct sStructNobodyNode* __result_obj__92;
    ((struct sNodeBase*)(__right_value107=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value107,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj45=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__92 = (struct sStructNobodyNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStructNobodyNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__92,sStructNobodyNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__92;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __right_value108 = (void*)0;
char* __result_obj__93;
    __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string("sStructNobodyNode"))));
    (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__93;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
char* name_175;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
_Bool __result_obj__94;
    name_175=(char*)come_increment_ref_count(self->mName);
    map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(__builtin_string(name_175)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value110=xsprintf("struct %s;\n",name_175))))));
    (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __result_obj__94 = (_Bool)1;
    (name_175 = come_decrement_ref_count(name_175, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__94;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __right_value112 = (void*)0;
struct sNothingNode* __result_obj__95;
    ((struct sNodeBase*)(__right_value112=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value112,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__95 = (struct sNothingNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNothingNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__95,sNothingNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__95;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __right_value113 = (void*)0;
char* __result_obj__96;
    __result_obj__96 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string("sNothingNode"))));
    (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__96;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value118 = (void*)0;
struct sNode* __result_obj__99;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 259, "struct sNode");
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value115=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 259, "struct sNothingNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result_obj__99 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value118=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value115,sNothingNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value118) ? __right_value118 = come_decrement_ref_count(__right_value118, ((struct sNode*)__right_value118)->finalize, ((struct sNode*)__right_value118)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__99) ? __result_obj__99 = come_decrement_ref_count(__result_obj__99, ((struct sNode*)__result_obj__99)->finalize, ((struct sNode*)__result_obj__99)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__99;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
struct sNothingNode* __result_obj__97;
void* __right_value116 = (void*)0;
struct sNothingNode* result_176;
void* __right_value117 = (void*)0;
char* __dec_obj46;
struct sNothingNode* __result_obj__98;
    if(    self==(void*)0) {
        __result_obj__97 = (void*)0;
        return __result_obj__97;
    }
    result_176=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*"));
    if(    self!=((void*)0)) {
        result_176->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj46=result_176->sname,
        result_176->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNothingNode_clone", 5, "char*"));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_176->sline_real=self->sline_real;
    }
    __result_obj__98 = result_176;
    /*c*/ come_call_finalizer3(result_176,sNothingNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__98;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info){
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
char* __dec_obj47;
void* __right_value121 = (void*)0;
struct sClass* __dec_obj48;
struct list$1sNode$ph* __dec_obj49;
struct sClassNode* __result_obj__100;
    ((struct sNodeBase*)(__right_value119=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value119,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj47=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    /*b*/ come_call_finalizer3(__dec_obj48,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj49=self->mMethods,
    self->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(methods);
    /*b*/ come_call_finalizer3(__dec_obj49,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__100 = (struct sClassNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sClassNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(klass,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(methods,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__100,sClassNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__100;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __right_value122 = (void*)0;
char* __result_obj__101;
    __result_obj__101 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string("sClassNode"))));
    (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__101;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
struct sClass* klass_177;
void* __right_value123 = (void*)0;
char* name_178;
void* __right_value124 = (void*)0;
_Bool _if_conditional2;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
_Bool _if_conditional3;
void* __right_value128 = (void*)0;
struct sClass* klass2_179;
void* __right_value129 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj50;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct sType* type_180;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct sType* override__181;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct list$1sNode$ph* o2_saved_203;
struct sNode* it_206;
_Bool Value_209;
_Bool __result_obj__119;
_Bool __result_obj__120;
    klass_177=(struct sClass*)come_increment_ref_count(self->mClass);
    name_178=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_if_conditional2=(((struct sClass*)(__right_value124=map$2char$phsClass$ph_at(info->classes,name_178,((void*)0))))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value124,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional2) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(name_178),(struct sClass*)come_increment_ref_count(sClass_clone(klass_177)));
    }
    if(    (_if_conditional3=(((struct sClass*)(__right_value126=map$2char$phsClass$ph_at(info->classes,name_178,((void*)0))))&&list$1tuple2$2char$phsType$ph$ph_length(((struct sClass*)(__right_value127=map$2char$phsClass$ph_at(info->classes,name_178,((void*)0))))->mFields)==0)),    /*c*/ come_call_finalizer3(__right_value126,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    /*c*/ come_call_finalizer3(__right_value127,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional3) {
        klass2_179=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,name_178,((void*)0)));
        __dec_obj50=klass2_179->mFields,
        klass2_179->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(klass_177->mFields));
        /*b*/ come_call_finalizer3(__dec_obj50,list$1tuple2$2char$phsType$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(klass2_179,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_180=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 298, "struct sType*")),(char*)come_increment_ref_count(name_178),(_Bool)0,info));
    override__181=((struct sType*)(__right_value133=map$2char$phsType$ph_at(info->types,((char*)(__right_value132=__builtin_string(name_178))),((void*)0))));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value133,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    override__181) {
        if(        override__181->mTypedef) {
            type_180->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(name_178)),(struct sType*)come_increment_ref_count(sType_clone(type_180)));
    output_struct(klass_177,info);
    for(    o2_saved_203=(struct list$1sNode$ph*)come_increment_ref_count((self->mMethods)),it_206=list$1sNode$ph_begin((o2_saved_203));    !list$1sNode$ph_end((o2_saved_203));    it_206=list$1sNode$ph_next((o2_saved_203))    ){
        Value_209=node_compile(it_206,info);
        if(        !Value_209) {
            __result_obj__119 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_203,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(klass_177,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_178 = come_decrement_ref_count(name_178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_180,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__119;
        }
        else {
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_203,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    info->output_header_file) {
        output_struct_come_header(klass_177,info);
    }
    __result_obj__120 = (_Bool)1;
    /*c*/ come_call_finalizer3(klass_177,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_178 = come_decrement_ref_count(name_178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_180,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__120;
}

static void sClassNode_finalize(struct sClassNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mClass,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mMethods,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_182;
unsigned int it_183;
struct sType* __result_obj__102;
struct sType* __result_obj__103;
struct sType* __result_obj__104;
struct sType* __result_obj__105;
    hash_182=string_get_hash_key(((char*)key))%self->size;
    it_183=hash_182;
    while(    (_Bool)1) {
        if(        self->item_existance[it_183]) {
            if(            string_equals(self->keys[it_183],key)) {
                __result_obj__102 = (struct sType*)come_increment_ref_count(self->items[it_183]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__102,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__102;
            }
            it_183++;
            if(            it_183>=self->size) {
                it_183=0;
            }
            else if(            it_183==hash_182) {
                __result_obj__103 = (struct sType*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__103,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__103;
            }
        }
        else {
            __result_obj__104 = (struct sType*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__104,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__104;
        }
    }
    __result_obj__105 = (struct sType*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__105,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__105;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_199;
unsigned int it_200;
_Bool same_key_exist_201;
char* it2_202;
struct map$2char$phsType$ph* __result_obj__112;
    if(    self->len*10>=self->size) {
        map$2char$phsType$ph_rehash(self);
    }
    hash_199=string_get_hash_key(((char*)key))%self->size;
    it_200=hash_199;
    while(    (_Bool)1) {
        if(        self->item_existance[it_200]) {
            if(            string_equals(self->keys[it_200],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_200]);
                    (self->keys[it_200] = come_decrement_ref_count(self->keys[it_200], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_200]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_200]);
                    self->keys[it_200]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_200],sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_200]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_200]=item;
                }
                break;
            }
            it_200++;
            if(            it_200>=self->size) {
                it_200=0;
            }
            else if(            it_200==hash_199) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_200]=(_Bool)1;
            if(            1) {
                self->keys[it_200]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_200]=key;
            }
            if(            1) {
                self->items[it_200]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_200]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_201=(_Bool)0;
    for(    it2_202=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_202=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_202,key)) {
            same_key_exist_201=(_Bool)1;
        }
    }
    if(    !same_key_exist_201) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__112 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__112;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size_184;
void* __right_value134 = (void*)0;
char** keys_185;
void* __right_value135 = (void*)0;
struct sType** items_186;
void* __right_value136 = (void*)0;
_Bool* item_existance_187;
int len_188;
char* it_191;
struct sType* default_value_194;
void* __right_value137 = (void*)0;
struct sType* it2_195;
unsigned int hash_196;
int n_197;
struct sType* default_value_198;
void* __right_value138 = (void*)0;
default_value_194 = (void*)0;
default_value_198 = (void*)0;
    size_184=self->size*10;
    keys_185=(char**)come_increment_ref_count(((char**)(__right_value134=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_184)), "./comelang.h", 2153, "char**"))));
    items_186=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value135=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(size_184)), "./comelang.h", 2154, "struct sType**"))));
    item_existance_187=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value136=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_184)), "./comelang.h", 2155, "_Bool*"))));
    len_188=0;
    for(    it_191=map$2char$phsType$ph_begin(self);    !map$2char$phsType$ph_end(self);    it_191=map$2char$phsType$ph_next(self)    ){
        memset(&default_value_194,0,sizeof(struct sType*));
        it2_195=((struct sType*)(__right_value137=map$2char$phsType$ph_at(self,it_191,(struct sType*)come_increment_ref_count(default_value_194))));
        /*c*/ come_call_finalizer3(__right_value137,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_196=string_get_hash_key(((char*)it_191))%size_184;
        n_197=hash_196;
        while(        (_Bool)1) {
            if(            item_existance_187[n_197]) {
                n_197++;
                if(                n_197>=size_184) {
                    n_197=0;
                }
                else if(                n_197==hash_196) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_187[n_197]=(_Bool)1;
                keys_185[n_197]=it_191;
                items_186[n_197]=((struct sType*)(__right_value138=map$2char$phsType$ph_at(self,it_191,(struct sType*)come_increment_ref_count(default_value_198))));
                /*c*/ come_call_finalizer3(__right_value138,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_188++;
                /*c*/ come_call_finalizer3(default_value_198,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_198,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_194,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_185;
    self->items=items_186;
    self->item_existance=item_existance_187;
    self->size=size_184;
    self->len=len_188;
}

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
char* result_189;
char* __result_obj__106;
char* __result_obj__107;
char* result_190;
char* __result_obj__108;
result_189 = (void*)0;
result_190 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_189,0,sizeof(char*));
        __result_obj__106 = result_189;
        return __result_obj__106;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__107 = self->key_list->it->item;
        return __result_obj__107;
    }
    memset(&result_190,0,sizeof(char*));
    __result_obj__108 = result_190;
    return __result_obj__108;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
char* result_192;
char* __result_obj__109;
char* __result_obj__110;
char* result_193;
char* __result_obj__111;
result_192 = (void*)0;
result_193 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_192,0,sizeof(char*));
        __result_obj__109 = result_192;
        return __result_obj__109;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__110 = self->key_list->it->item;
        return __result_obj__110;
    }
    memset(&result_193,0,sizeof(char*));
    __result_obj__111 = result_193;
    return __result_obj__111;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_204;
struct sNode* __result_obj__113;
struct sNode* __result_obj__114;
struct sNode* result_205;
struct sNode* __result_obj__115;
result_204 = (void*)0;
result_205 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_204,0,sizeof(struct sNode*));
        __result_obj__113 = result_204;
        return __result_obj__113;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__114 = self->it->item;
        return __result_obj__114;
    }
    memset(&result_205,0,sizeof(struct sNode*));
    __result_obj__115 = result_205;
    return __result_obj__115;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_207;
struct sNode* __result_obj__116;
struct sNode* __result_obj__117;
struct sNode* result_208;
struct sNode* __result_obj__118;
result_207 = (void*)0;
result_208 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_207,0,sizeof(struct sNode*));
        __result_obj__116 = result_207;
        return __result_obj__116;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__117 = self->it->item;
        return __result_obj__117;
    }
    memset(&result_208,0,sizeof(struct sNode*));
    __result_obj__118 = result_208;
    return __result_obj__118;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
struct sClass* klass_210;
void* __right_value141 = (void*)0;
_Bool _if_conditional4;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct sClass* __dec_obj51;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct sClass* __dec_obj52;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct sType* type_213;
void* __right_value149 = (void*)0;
struct sType* override__214;
void* __right_value150 = (void*)0;
struct sClass* parent_class_215;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
char* parent_class_name_216;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct sNode* __result_obj__122;
_Bool multiple_declare_217;
char* p_218;
int sline_219;
void* __right_value155 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type_220=0;
char* name_221=0;
_Bool err_222=0;
void* __right_value156 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* base_type_223=0;
char* name_224=0;
_Bool err_225=0;
void* __right_value157 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var6 = (void*)0;
struct sType* type2_226=0;
char* name2_227=0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var7 = (void*)0;
struct sType* type2_228=0;
char* name2_229=0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type2_230=0;
char* name_231=0;
_Bool err_232=0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* struct_attribute2_233;
void* __right_value167 = (void*)0;
char* __dec_obj53;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
char* __dec_obj54;
char* __dec_obj55;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
char* __dec_obj56;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value180 = (void*)0;
struct sNode* node_234;
_Bool Value_236;
struct sNode* __result_obj__125;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value183 = (void*)0;
struct sNode* __result_obj__126;
klass_210 = (void*)0;
    if(    (_if_conditional4=(((struct sClass*)(__right_value141=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value141,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional4) {
        __dec_obj51=klass_210,
        klass_210=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 327, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj51,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_210));
    }
    else {
        __dec_obj52=klass_210,
        klass_210=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name,((void*)0)));
        /*b*/ come_call_finalizer3(__dec_obj52,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1tuple2$2char$phsType$ph$ph_reset(klass_210->mFields);
    }
    type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 335, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
    override__214=((struct sType*)(__right_value149=map$2char$phsType$ph_at(info->types,type_name,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value149,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    override__214) {
        if(        override__214->mTypedef) {
            type_213->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_213)));
    parent_class_215=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value151=parse_word(info)));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        parent_class_name_216=(char*)come_increment_ref_count(parse_word(info));
        parent_class_215=((struct sClass*)(__right_value153=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name_216)));
        /*c*/ come_call_finalizer3(__right_value153,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        parent_class_215==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value154=err_msg(info,"invalid class name(%s)",parent_class_name_216)));
            /*c*/ come_call_finalizer3(__right_value154,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__122 = (void*)come_increment_ref_count(((void*)0));
            (parent_class_name_216 = come_decrement_ref_count(parent_class_name_216, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(klass_210,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_213,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__result_obj__122) ? __result_obj__122 = come_decrement_ref_count(__result_obj__122, ((struct sNode*)__result_obj__122)->finalize, ((struct sNode*)__result_obj__122)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__122;
        }
        (parent_class_name_216 = come_decrement_ref_count(parent_class_name_216, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    expected_next_character(123,info);
    while(    (_Bool)1) {
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_217=(_Bool)0;
        {
            p_218=info->p;
            sline_219=info->sline;
            multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value155=backtrace_parse_type((_Bool)1,info)));
            type_220=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_221=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_222=multiple_assign_var4->v3;
            /*c*/ come_call_finalizer3(__right_value155,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            err_222&&*info->p==44) {
                multiple_declare_217=(_Bool)1;
            }
            info->p=p_218;
            info->sline=sline_219;
            /*c*/ come_call_finalizer3(type_220,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_221 = come_decrement_ref_count(name_221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        multiple_declare_217) {
            multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value156=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_223=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_224=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_225=multiple_assign_var5->v3;
            /*c*/ come_call_finalizer3(__right_value156,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value157=parse_variable_name((struct sType*)come_increment_ref_count(base_type_223),(_Bool)1,info)));
            type2_226=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_227=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            /*c*/ come_call_finalizer3(__right_value157,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_210->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 391, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_227),(struct sType*)come_increment_ref_count(type2_226))));
            while(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value160=parse_variable_name((struct sType*)come_increment_ref_count(base_type_223),(_Bool)0,info)));
                type2_228=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_229=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                /*c*/ come_call_finalizer3(__right_value160,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(klass_210->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 399, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_229),(struct sType*)come_increment_ref_count(type2_228))));
                /*c*/ come_call_finalizer3(type2_228,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name2_229 = come_decrement_ref_count(name2_229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(base_type_223,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_224 = come_decrement_ref_count(name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type2_226,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name2_227 = come_decrement_ref_count(name2_227, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value163=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_230=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_231=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_232=multiple_assign_var8->v3;
            /*c*/ come_call_finalizer3(__right_value163,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_232) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_210->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 410, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_231),(struct sType*)come_increment_ref_count(type2_230))));
            /*c*/ come_call_finalizer3(type2_230,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_231 = come_decrement_ref_count(name_231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2_233=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_215) {
        __dec_obj53=klass_210->mParentClassName,
        klass_210->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(parent_class_215->mName, "14struct.c", 430, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(klass_210->mName)),(struct sClass*)come_increment_ref_count(sClass_clone(klass_210)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_233,"")) {
    }
    else if(    string_operator_equals(struct_attribute,"")) {
        __dec_obj54=klass_210->mAttribute,
        klass_210->mAttribute=(char*)come_increment_ref_count(struct_attribute2_233);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_233,"")) {
        __dec_obj55=klass_210->mAttribute,
        klass_210->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj56=klass_210->mAttribute,
        klass_210->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value171=string_operator_add(struct_attribute," "))),struct_attribute2_233));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 446, "struct sNode");
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value175=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "14struct.c", 446, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_210,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_234=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*c*/ come_call_finalizer3(__right_value175,sStructNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_236=node_compile(node_234,info);
    if(    !Value_236) {
        __result_obj__125 = (void*)come_increment_ref_count(((void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(klass_210,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_213,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (struct_attribute2_233 = come_decrement_ref_count(struct_attribute2_233, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_234) ? node_234 = come_decrement_ref_count(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__125) ? __result_obj__125 = come_decrement_ref_count(__result_obj__125, ((struct sNode*)__result_obj__125)->finalize, ((struct sNode*)__result_obj__125)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__125;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 452, "struct sNode");
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value182=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 452, "struct sNothingNode*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result_obj__126 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value183=_inf_value3)));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(klass_210,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_213,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (struct_attribute2_233 = come_decrement_ref_count(struct_attribute2_233, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((node_234) ? node_234 = come_decrement_ref_count(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value182,sNothingNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value183) ? __right_value183 = come_decrement_ref_count(__right_value183, ((struct sNode*)__right_value183)->finalize, ((struct sNode*)__right_value183)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__126) ? __result_obj__126 = come_decrement_ref_count(__result_obj__126, ((struct sNode*)__result_obj__126)->finalize, ((struct sNode*)__result_obj__126)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__126;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_211;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_212;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__121;
    it_211=self->head;
    while(    it_211!=((void*)0)) {
        prev_it_212=it_211;
        it_211=it_211->next;
        /*c*/ come_call_finalizer3(prev_it_212,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
struct sStructNode* __result_obj__123;
void* __right_value176 = (void*)0;
struct sStructNode* result_235;
void* __right_value177 = (void*)0;
char* __dec_obj57;
void* __right_value178 = (void*)0;
char* __dec_obj58;
void* __right_value179 = (void*)0;
struct sClass* __dec_obj59;
struct sStructNode* __result_obj__124;
    if(    self==(void*)0) {
        __result_obj__123 = (void*)0;
        return __result_obj__123;
    }
    result_235=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*"));
    if(    self!=((void*)0)) {
        result_235->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj57=result_235->sname,
        result_235->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructNode_clone", 5, "char*"));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_235->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj58=result_235->mName,
        result_235->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStructNode_clone", 7, "char*"));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj59=result_235->mClass,
        result_235->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        /*b*/ come_call_finalizer3(__dec_obj59,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__124 = result_235;
    /*c*/ come_call_finalizer3(result_235,sStructNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__124;
}

char* parse_struct_attribute(struct sInfo* info){
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct buffer* result_237;
char* head_238;
char* tail_239;
void* __right_value186 = (void*)0;
char* __result_obj__127;
    parse_sharp_v5(info);
    result_237=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 458, "struct buffer*"))));
    while(    1) {
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            head_238=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_239=info->p;
            buffer_append(result_237,head_238,tail_239-head_238);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value186=buffer_to_string(result_237))));
    /*c*/ come_call_finalizer3(result_237,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__127;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_240;
void* __right_value187 = (void*)0;
char* struct_attribute_241;
void* __right_value188 = (void*)0;
char* type_name_242;
struct sClass* struct_class_243;
void* __right_value189 = (void*)0;
_Bool _if_conditional5;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sClass* __dec_obj60;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct sClass* __dec_obj61;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct sType* type_244;
void* __right_value198 = (void*)0;
struct sType* override__245;
char* source_tail_246;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct buffer* header_247;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
char* id_248;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value211 = (void*)0;
struct sNode* __result_obj__130;
void* __right_value212 = (void*)0;
char* T_250;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
_Bool _if_conditional6;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sClass* generics_class_251;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var9 = (void*)0;
struct sType* type2_252=0;
char* name_253=0;
_Bool err_254=0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
char* name2_255;
void* __right_value225 = (void*)0;
struct sType* type3_256;
_Bool no_comma_257;
void* __right_value226 = (void*)0;
struct sNode* node_258;
struct sNode* __dec_obj64;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
char* source_tail_259;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct buffer* header_260;
void* __right_value234 = (void*)0;
char* id_261;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value238 = (void*)0;
struct sNode* __result_obj__131;
struct sClass* struct_class_262;
void* __right_value239 = (void*)0;
_Bool _if_conditional7;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct sClass* __dec_obj65;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sClass* __dec_obj66;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct sType* type_263;
void* __right_value247 = (void*)0;
struct sType* override__264;
struct sClass* parent_class_265;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
char* parent_class_name_266;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct sNode* __result_obj__132;
_Bool multiple_declare_267;
char* p_268;
int sline_269;
void* __right_value252 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* type_270=0;
char* name_271=0;
_Bool err_272=0;
void* __right_value253 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* base_type_273=0;
char* name_274=0;
_Bool err_275=0;
void* __right_value254 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var12 = (void*)0;
struct sType* type2_276=0;
char* name2_277=0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var13 = (void*)0;
struct sType* type2_278=0;
char* name2_279=0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type2_280=0;
char* name_281=0;
_Bool err_282=0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* struct_attribute2_283;
char* source_tail_284;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* header_285;
void* __right_value266 = (void*)0;
char* id_286;
void* __right_value267 = (void*)0;
char* __dec_obj67;
char* __dec_obj68;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
char* __dec_obj69;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value274 = (void*)0;
struct sNode* __result_obj__133;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
_Bool _elif_conditional1;
_Bool uniq_class_287;
void* __right_value277 = (void*)0;
char* source_head_288;
void* __right_value278 = (void*)0;
char* type_name_289;
void* __right_value279 = (void*)0;
char* id_290;
struct sClass* parent_class_291;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
char* parent_class_name_292;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sNode* __result_obj__134;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1sClass$p* parent_classes_293;
struct sClass* parent_class2_296;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sClass* struct_class_300;
void* __right_value294 = (void*)0;
char* __dec_obj70;
struct sClass* defining_class_301;
void* __right_value295 = (void*)0;
_Bool _if_conditional8;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1sClass$p* o2_saved_307;
struct sClass* parent_310;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_313;
struct tuple2$2char$phsType$ph* it_314;
void* __right_value304 = (void*)0;
char* head_315;
char* p_saved_316;
int sline_saved_317;
char* sname_saved_318;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct list$1sNode$ph* methods_319;
void* __right_value307 = (void*)0;
char* __dec_obj71;
char* __dec_obj72;
struct map$2char$phchar$ph* __dec_obj73;
_Bool include__322;
_Bool multiple_declare_323;
char* p_324;
int sline_325;
void* __right_value308 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_326=0;
char* name_327=0;
_Bool err_328=0;
_Bool define_function_flag_329;
char* p_330;
int sline_331;
_Bool invalid_type_332;
void* __right_value309 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* result_type_333=0;
char* fun_name_334=0;
_Bool err_335=0;
char* word_336;
void* __right_value310 = (void*)0;
char* __dec_obj74;
void* __right_value311 = (void*)0;
char* __dec_obj75;
char* __dec_obj76;
void* __right_value312 = (void*)0;
char* __dec_obj77;
char* tail_337;
int pointer_num_338;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sType* __dec_obj78;
void* __right_value315 = (void*)0;
struct sNode* method_339;
struct sType* __dec_obj79;
void* __right_value319 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* base_type_343=0;
char* name_344=0;
_Bool err_345=0;
void* __right_value320 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var18 = (void*)0;
struct sType* type2_346=0;
char* name2_347=0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var19 = (void*)0;
struct sType* type2_348=0;
char* name2_349=0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
char* module_name_350;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct list$1char$ph* params_351;
void* __right_value330 = (void*)0;
char* word_352;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* __dec_obj83;
void* __right_value334 = (void*)0;
char* __dec_obj84;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
_Bool _if_conditional9;
void* __right_value338 = (void*)0;
struct sNode* __result_obj__154;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sClassModule* module_359;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value349 = (void*)0;
struct map$2char$phchar$ph* __dec_obj86;
int i_365;
struct list$1char$ph* o2_saved_366;
char* it_367;
void* __right_value350 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
char* __dec_obj87;
void* __right_value362 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var20 = (void*)0;
struct sType* type2_395=0;
char* name_396=0;
_Bool err_397=0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
char* __dec_obj88;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value374 = (void*)0;
struct sNode* __result_obj__174;
void* __right_value375 = (void*)0;
struct sNode* __result_obj__175;
struct_class_243 = (void*)0;
struct_class_262 = (void*)0;
    if(    charp_operator_equals(buf,"struct")) {
        source_head_240=head;
        struct_attribute_241=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_242=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional5=(((struct sClass*)(__right_value189=map$2char$phsClass$ph_at(info->classes,type_name_242,((void*)0))))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value189,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
                __dec_obj60=struct_class_243,
                struct_class_243=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 495, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_242)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
                /*b*/ come_call_finalizer3(__dec_obj60,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_242),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 497, "struct sClass*")),(char*)come_increment_ref_count(type_name_242),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
            }
            else {
                __dec_obj61=struct_class_243,
                struct_class_243=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name_242,((void*)0)));
                /*b*/ come_call_finalizer3(__dec_obj61,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            type_244=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 502, "struct sType*")),(char*)come_increment_ref_count(type_name_242),(_Bool)0,info));
            override__245=((struct sType*)(__right_value198=map$2char$phsType$ph_at(info->types,type_name_242,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value198,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            override__245) {
                if(                override__245->mTypedef) {
                    type_244->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_242),(struct sType*)come_increment_ref_count(type_244));
            source_tail_246=info->p;
            header_247=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 513, "struct buffer*"))));
            buffer_append(header_247,source_head_240,source_tail_246-source_head_240);
            id_248=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value202=__builtin_string(type_name_242))),";"));
            (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_come_struct_header(info,id_248,"%s",((char*)(__right_value204=buffer_to_string(header_247))));
            (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 519, "struct sNode");
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value207=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc_v2(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 519, "struct sStructNobodyNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_242)),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result_obj__130 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value211=_inf_value4)));
            /*c*/ come_call_finalizer3(struct_class_243,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_244,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_247,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_248 = come_decrement_ref_count(id_248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_241 = come_decrement_ref_count(struct_attribute_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_242 = come_decrement_ref_count(type_name_242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value207,sStructNobodyNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value211) ? __right_value211 = come_decrement_ref_count(__right_value211, ((struct sNode*)__right_value211)->finalize, ((struct sNode*)__right_value211)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__130) ? __result_obj__130 = come_decrement_ref_count(__result_obj__130, ((struct sNode*)__result_obj__130)->finalize, ((struct sNode*)__result_obj__130)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__130;
            /*c*/ come_call_finalizer3(struct_class_243,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_244,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_247,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_248 = come_decrement_ref_count(id_248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        *info->p==60) {
            list$1char$ph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while(            (_Bool)1) {
                T_250=(char*)come_increment_ref_count(parse_word(info));
                list$1char$ph_push_back(info->generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(T_250, "14struct.c", 529, "char*")));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (T_250 = come_decrement_ref_count(T_250, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value214=err_msg(info,"invalid generics struct definition")));
                    /*c*/ come_call_finalizer3(__right_value214,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
                (T_250 = come_decrement_ref_count(T_250, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional6=(((struct sClass*)(__right_value216=map$2char$phsClass$ph_at(info->generics_classes,((char*)(__right_value215=__builtin_string(type_name_242))),((void*)0))))!=((void*)0))),            (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value216,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                ((struct tuple2$2int$bool$*)(__right_value217=err_msg(info,"redefined generics struct(%s)",type_name_242)));
                /*c*/ come_call_finalizer3(__right_value217,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            generics_class_251=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 551, "struct sClass*")),(char*)come_increment_ref_count(type_name_242),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
            map$2char$phsClass$ph_insert(info->generics_classes,(char*)come_increment_ref_count(__builtin_string(type_name_242)),(struct sClass*)come_increment_ref_count(generics_class_251));
            expected_next_character(123,info);
            while(            (_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sType$phchar$phbool$*)(__right_value221=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_252=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_253=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_254=multiple_assign_var9->v3;
                /*c*/ come_call_finalizer3(__right_value221,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_254) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_251->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 576, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_253),(struct sType*)come_increment_ref_count(type2_252))));
                    while(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_255=(char*)come_increment_ref_count(parse_word(info));
                        type3_256=(struct sType*)come_increment_ref_count(sType_clone(type2_252));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_257=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_258=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_257;
                            __dec_obj64=type3_256->mSizeNum,
                            type3_256->mSizeNum=(struct sNode*)come_increment_ref_count(node_258);
                            (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                            ((node_258) ? node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        }
                        list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_251->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 598, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_255),(struct sType*)come_increment_ref_count(type3_256))));
                        (name2_255 = come_decrement_ref_count(name2_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(type3_256,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_251->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 602, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_253),(struct sType*)come_increment_ref_count(type2_252))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*c*/ come_call_finalizer3(type2_252,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_253 = come_decrement_ref_count(name_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                parse_sharp_v5(info);
                /*c*/ come_call_finalizer3(type2_252,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_253 = come_decrement_ref_count(name_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            ((struct tuple2$2char$phchar$ph*)(__right_value231=parse_attribute(info,(_Bool)0)));
            /*c*/ come_call_finalizer3(__right_value231,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1char$ph_reset(info->generics_type_names);
            source_tail_259=info->p;
            header_260=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 626, "struct buffer*"))));
            buffer_append_str(header_260,"struct ");
            buffer_append(header_260,source_head_240,source_tail_259-source_head_240);
            id_261=(char*)come_increment_ref_count(__builtin_string(type_name_242));
            add_come_code_at_come_struct_header(info,id_261,"%s;\n",((char*)(__right_value235=buffer_to_string(header_260))));
            (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 633, "struct sNode");
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value237=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 633, "struct sNothingNode*")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result_obj__131 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value238=_inf_value5)));
            /*c*/ come_call_finalizer3(generics_class_251,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_260,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_261 = come_decrement_ref_count(id_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_241 = come_decrement_ref_count(struct_attribute_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_242 = come_decrement_ref_count(type_name_242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value237,sNothingNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value238) ? __right_value238 = come_decrement_ref_count(__right_value238, ((struct sNode*)__right_value238)->finalize, ((struct sNode*)__right_value238)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__131) ? __result_obj__131 = come_decrement_ref_count(__result_obj__131, ((struct sNode*)__result_obj__131)->finalize, ((struct sNode*)__result_obj__131)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__131;
            /*c*/ come_call_finalizer3(generics_class_251,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_260,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_261 = come_decrement_ref_count(id_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            (_if_conditional7=(((struct sClass*)(__right_value239=map$2char$phsClass$ph_at(info->classes,type_name_242,((void*)0))))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value239,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                __dec_obj65=struct_class_262,
                struct_class_262=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 638, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_242)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
                /*b*/ come_call_finalizer3(__dec_obj65,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_242)),(struct sClass*)come_increment_ref_count(struct_class_262));
            }
            else {
                __dec_obj66=struct_class_262,
                struct_class_262=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name_242,((void*)0)));
                /*b*/ come_call_finalizer3(__dec_obj66,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_reset(struct_class_262->mFields);
            }
            type_263=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 646, "struct sType*")),(char*)come_increment_ref_count(type_name_242),(_Bool)0,info));
            override__264=((struct sType*)(__right_value247=map$2char$phsType$ph_at(info->types,type_name_242,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value247,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            override__264) {
                if(                override__264->mTypedef) {
                    type_263->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_242),(struct sType*)come_increment_ref_count(type_263));
            parent_class_265=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value248=parse_word(info)));
                (__right_value248 = come_decrement_ref_count(__right_value248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                parent_class_name_266=(char*)come_increment_ref_count(parse_word(info));
                parent_class_265=((struct sClass*)(__right_value250=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name_266)));
                /*c*/ come_call_finalizer3(__right_value250,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                parent_class_265==((void*)0)) {
                    ((struct tuple2$2int$bool$*)(__right_value251=err_msg(info,"invalid class name(%s)",parent_class_name_266)));
                    /*c*/ come_call_finalizer3(__right_value251,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__132 = (void*)come_increment_ref_count(((void*)0));
                    (parent_class_name_266 = come_decrement_ref_count(parent_class_name_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(struct_class_262,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_263,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (struct_attribute_241 = come_decrement_ref_count(struct_attribute_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_242 = come_decrement_ref_count(type_name_242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((__result_obj__132) ? __result_obj__132 = come_decrement_ref_count(__result_obj__132, ((struct sNode*)__result_obj__132)->finalize, ((struct sNode*)__result_obj__132)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__132;
                }
                (parent_class_name_266 = come_decrement_ref_count(parent_class_name_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(123,info);
            while(            (_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_267=(_Bool)0;
                {
                    p_268=info->p;
                    sline_269=info->sline;
                    multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value252=backtrace_parse_type((_Bool)1,info)));
                    type_270=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_271=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_272=multiple_assign_var10->v3;
                    /*c*/ come_call_finalizer3(__right_value252,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    err_272&&*info->p==44) {
                        multiple_declare_267=(_Bool)1;
                    }
                    info->p=p_268;
                    info->sline=sline_269;
                    /*c*/ come_call_finalizer3(type_270,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_271 = come_decrement_ref_count(name_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                multiple_declare_267) {
                    multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value253=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_273=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                    name_274=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    err_275=multiple_assign_var11->v3;
                    /*c*/ come_call_finalizer3(__right_value253,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    multiple_assign_var12=((struct tuple2$2sType$phchar$ph*)(__right_value254=parse_variable_name((struct sType*)come_increment_ref_count(base_type_273),(_Bool)1,info)));
                    type2_276=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                    name2_277=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                    /*c*/ come_call_finalizer3(__right_value254,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_262->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 700, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_277),(struct sType*)come_increment_ref_count(type2_276))));
                    while(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sType$phchar$ph*)(__right_value257=parse_variable_name((struct sType*)come_increment_ref_count(base_type_273),(_Bool)0,info)));
                        type2_278=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_279=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        /*c*/ come_call_finalizer3(__right_value257,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_262->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 708, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_279),(struct sType*)come_increment_ref_count(type2_278))));
                        /*c*/ come_call_finalizer3(type2_278,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (name2_279 = come_decrement_ref_count(name2_279, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    /*c*/ come_call_finalizer3(base_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_274 = come_decrement_ref_count(name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type2_276,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name2_277 = come_decrement_ref_count(name2_277, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value260=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_280=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                    name_281=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    err_282=multiple_assign_var14->v3;
                    /*c*/ come_call_finalizer3(__right_value260,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_282) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_262->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 718, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_281),(struct sType*)come_increment_ref_count(type2_280))));
                    /*c*/ come_call_finalizer3(type2_280,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_281 = come_decrement_ref_count(name_281, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2_283=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1char$ph_reset(info->generics_type_names);
            source_tail_284=info->p;
            header_285=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 743, "struct buffer*"))));
            buffer_append(header_285,source_head_240,source_tail_284-source_head_240);
            id_286=(char*)come_increment_ref_count(__builtin_string(type_name_242));
            add_come_code_at_come_struct_header(info,id_286,"%s;\n",((char*)(__right_value267=buffer_to_string(header_285))));
            (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            string_operator_equals(struct_attribute_241,"")&&string_operator_equals(struct_attribute2_283,"")) {
            }
            else if(            string_operator_equals(struct_attribute_241,"")) {
                __dec_obj67=struct_class_262->mAttribute,
                struct_class_262->mAttribute=(char*)come_increment_ref_count(struct_attribute2_283);
                __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_283,"")) {
                __dec_obj68=struct_class_262->mAttribute,
                struct_class_262->mAttribute=(char*)come_increment_ref_count(struct_attribute_241);
                __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                __dec_obj69=struct_class_262->mAttribute,
                struct_class_262->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value269=string_operator_add(struct_attribute_241," "))),struct_attribute2_283));
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 761, "struct sNode");
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value273=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "14struct.c", 761, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_242)),struct_class_262,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result_obj__133 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value274=_inf_value6)));
            /*c*/ come_call_finalizer3(struct_class_262,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_263,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (struct_attribute2_283 = come_decrement_ref_count(struct_attribute2_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(header_285,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_286 = come_decrement_ref_count(id_286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_241 = come_decrement_ref_count(struct_attribute_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_242 = come_decrement_ref_count(type_name_242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value273,sStructNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value274) ? __right_value274 = come_decrement_ref_count(__right_value274, ((struct sNode*)__right_value274)->finalize, ((struct sNode*)__right_value274)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__133) ? __result_obj__133 = come_decrement_ref_count(__result_obj__133, ((struct sNode*)__result_obj__133)->finalize, ((struct sNode*)__result_obj__133)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__133;
            /*c*/ come_call_finalizer3(struct_class_262,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_263,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (struct_attribute2_283 = come_decrement_ref_count(struct_attribute2_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(header_285,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_286 = come_decrement_ref_count(id_286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (struct_attribute_241 = come_decrement_ref_count(struct_attribute_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_242 = come_decrement_ref_count(type_name_242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    (_elif_conditional1=(!gComeC&&((charp_operator_equals(buf,"uniq")&&string_operator_equals(((char*)(__right_value276=charp_substring(info->p,0,strlen("class")))),"class"))||charp_operator_equals(buf,"class")))),    (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _elif_conditional1) {
        uniq_class_287=(_Bool)0;
        if(        charp_operator_equals(buf,"uniq")) {
            ((char*)(__right_value277=parse_word(info)));
            (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            uniq_class_287=(_Bool)1;
        }
        source_head_288=head;
        type_name_289=(char*)come_increment_ref_count(parse_word(info));
        id_290=(char*)come_increment_ref_count(__builtin_string(type_name_289));
        add_come_code_at_come_struct_header(info,id_290,"struct %s;\n",type_name_289);
        parent_class_291=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value280=parse_word(info)));
            (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            parent_class_name_292=(char*)come_increment_ref_count(parse_word(info));
            parent_class_291=((struct sClass*)(__right_value282=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name_292)));
            /*c*/ come_call_finalizer3(__right_value282,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            parent_class_291==((void*)0)) {
                ((struct tuple2$2int$bool$*)(__right_value283=err_msg(info,"invalid class name(%s)",parent_class_name_292)));
                /*c*/ come_call_finalizer3(__right_value283,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__134 = (void*)come_increment_ref_count(((void*)0));
                (parent_class_name_292 = come_decrement_ref_count(parent_class_name_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name_289 = come_decrement_ref_count(type_name_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_290 = come_decrement_ref_count(id_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__134) ? __result_obj__134 = come_decrement_ref_count(__result_obj__134, ((struct sNode*)__result_obj__134)->finalize, ((struct sNode*)__result_obj__134)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__134;
            }
            (parent_class_name_292 = come_decrement_ref_count(parent_class_name_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        parent_classes_293=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc_v2(1, sizeof(struct list$1sClass$p)*(1), "14struct.c", 794, "struct list$1sClass$p*"))));
        parent_class2_296=parent_class_291;
        while(        parent_class2_296) {
            list$1sClass$p_add(parent_classes_293,parent_class2_296);
            if(            parent_class_291->mParentClassName) {
                parent_class2_296=((struct sClass*)(__right_value291=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value290=__builtin_string(parent_class_291->mParentClassName))))));
                (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value290 = come_decrement_ref_count(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value291,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                parent_class2_296=((void*)0);
            }
        }
        struct_class_300=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 807, "struct sClass*")),(char*)come_increment_ref_count(type_name_289),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,uniq_class_287,info));
        if(        parent_class_291) {
            __dec_obj70=struct_class_300->mParentClassName,
            struct_class_300->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(parent_class_291->mName, "14struct.c", 810, "char*"));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        defining_class_301=info->defining_class;
        info->defining_class=struct_class_300;
        if(        (_if_conditional8=(((struct sClass*)(__right_value295=map$2char$phsClass$ph_at(info->classes,type_name_289,((void*)0))))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value295,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional8) {
            map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_289),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_300)));
        }
        else {
            ((struct sClass*)(__right_value297=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_289)))->mUniq=uniq_class_287;
            /*c*/ come_call_finalizer3(__right_value297,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        for(        o2_saved_307=(struct list$1sClass$p*)come_increment_ref_count((((struct list$1sClass$p*)(__right_value303=list$1sClass$p_reverse(parent_classes_293))))),parent_310=list$1sClass$p_begin((o2_saved_307)) ,        /*c*/ come_call_finalizer3(__right_value303,list$1sClass$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        0;        !list$1sClass$p_end((o2_saved_307));        parent_310=list$1sClass$p_next((o2_saved_307))        ){
            for(            o2_saved_313=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((parent_310->mFields)),it_314=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_313));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_313));            it_314=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_313))            ){
                list$1tuple2$2char$phsType$ph$ph_add(struct_class_300->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it_314)));
            }
            /*c*/ come_call_finalizer3(o2_saved_313,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_307,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        expected_next_character(123,info);
        head_315=info->p;
        p_saved_316=((void*)0);
        sline_saved_317=0;
        sname_saved_318=((void*)0);
        methods_319=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "14struct.c", 836, "struct list$1sNode$ph*"))));
        while(        (_Bool)1) {
            if(            p_saved_316) {
                if(                *info->p==0) {
                    info->p=p_saved_316;
                    info->sline=sline_saved_317;
                    __dec_obj71=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_318));
                    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    p_saved_316=((void*)0);
                    sline_saved_317=0;
                    __dec_obj72=sname_saved_318,
                    sname_saved_318=((void*)0);
                    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    __dec_obj73=info->module_params,
                    info->module_params=((void*)0);
                    /*b*/ come_call_finalizer3(__dec_obj73,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__322=parsecmp("include",info);
            multiple_declare_323=(_Bool)0;
            if(            include__322==(_Bool)0) {
                p_324=info->p;
                sline_325=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value308=backtrace_parse_type((_Bool)1,info)));
                    type_326=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_327=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_328=multiple_assign_var15->v3;
                    /*c*/ come_call_finalizer3(__right_value308,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    err_328&&*info->p==44) {
                        multiple_declare_323=(_Bool)1;
                    }
                    /*c*/ come_call_finalizer3(type_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_327 = come_decrement_ref_count(name_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                info->p=p_324;
                info->sline=sline_325;
            }
            define_function_flag_329=(_Bool)0;
            if(            include__322==(_Bool)0) {
                p_330=info->p;
                sline_331=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_329=(_Bool)1;
                }
                else {
                    invalid_type_332=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value309=backtrace_parse_type((_Bool)0,info)));
                        result_type_333=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name_334=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_335=multiple_assign_var16->v3;
                        /*c*/ come_call_finalizer3(__right_value309,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type_333,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_334 = come_decrement_ref_count(fun_name_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    word_336=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj74=word_336,
                        word_336=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(word_336,"extern")) {
                            __dec_obj75=word_336,
                            word_336=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                    }
                    else {
                        __dec_obj76=word_336,
                        word_336=((void*)0);
                        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_336) {
                        if(                        is_type_name(word_336,info)) {
                            while(                            *info->p==42) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95) {
                                __dec_obj77=word_336,
                                word_336=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                        }
                        if(                        strlen(word_336)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_329=(_Bool)1;
                        }
                    }
                    (word_336 = come_decrement_ref_count(word_336, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                info->p=p_330;
                info->sline=sline_331;
            }
            if(            define_function_flag_329) {
                tail_337=info->p;
                pointer_num_338=1;
                __dec_obj78=info->class_type,
                info->class_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 946, "struct sType*")),(char*)come_increment_ref_count(type_name_289),(_Bool)0,info));
                /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->class_type->mPointerNum=pointer_num_338;
                info->in_class=(_Bool)1;
                method_339=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj79=info->class_type,
                info->class_type=((void*)0);
                /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNode$ph_push_back(methods_319,(struct sNode*)come_increment_ref_count(method_339));
                ((method_339) ? method_339 = come_decrement_ref_count(method_339, ((struct sNode*)method_339)->finalize, ((struct sNode*)method_339)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            multiple_declare_323) {
                multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value319=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_343=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                name_344=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                err_345=multiple_assign_var17->v3;
                /*c*/ come_call_finalizer3(__right_value319,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var18=((struct tuple2$2sType$phchar$ph*)(__right_value320=parse_variable_name((struct sType*)come_increment_ref_count(base_type_343),(_Bool)1,info)));
                type2_346=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name2_347=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                /*c*/ come_call_finalizer3(__right_value320,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_300->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 963, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_347),(struct sType*)come_increment_ref_count(type2_346))));
                while(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sType$phchar$ph*)(__right_value323=parse_variable_name((struct sType*)come_increment_ref_count(base_type_343),(_Bool)0,info)));
                    type2_348=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name2_349=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    /*c*/ come_call_finalizer3(__right_value323,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_300->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 971, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_349),(struct sType*)come_increment_ref_count(type2_348))));
                    /*c*/ come_call_finalizer3(type2_348,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name2_349 = come_decrement_ref_count(name2_349, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                expected_next_character(59,info);
                /*c*/ come_call_finalizer3(base_type_343,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_344 = come_decrement_ref_count(name_344, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type2_346,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name2_347 = come_decrement_ref_count(name2_347, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value326=parse_word(info)));
                (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_350=(char*)come_increment_ref_count(parse_word(info));
                params_351=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "14struct.c", 980, "struct list$1char$ph*"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1) {
                        word_352=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_351,(char*)come_increment_ref_count(word_352));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            ((struct tuple2$2int$bool$*)(__right_value331=err_msg(info,"invalid source end")));
                            /*c*/ come_call_finalizer3(__right_value331,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_352 = come_decrement_ref_count(word_352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value332=err_msg(info,"invalid charactor(%c)",*info->p)));
                            /*c*/ come_call_finalizer3(__right_value332,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                        }
                        (word_352 = come_decrement_ref_count(word_352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_316=info->p;
                sline_saved_317=info->sline;
                __dec_obj83=sname_saved_318,
                sname_saved_318=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj84=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_350));
                __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->sline=0;
                if(                (_if_conditional9=(((struct sClassModule*)(__right_value337=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value336=__builtin_string(module_name_350))))))==((void*)0))),                (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value337,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional9) {
                    ((struct tuple2$2int$bool$*)(__right_value338=err_msg(info,"module not found")));
                    /*c*/ come_call_finalizer3(__right_value338,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__154 = (void*)come_increment_ref_count(((void*)0));
                    (module_name_350 = come_decrement_ref_count(module_name_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_351,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (type_name_289 = come_decrement_ref_count(type_name_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_290 = come_decrement_ref_count(id_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(parent_classes_293,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(struct_class_300,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_saved_318 = come_decrement_ref_count(sname_saved_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(methods_319,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((__result_obj__154) ? __result_obj__154 = come_decrement_ref_count(__result_obj__154, ((struct sNode*)__result_obj__154)->finalize, ((struct sNode*)__result_obj__154)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__154;
                }
                module_359=((struct sClassModule*)(__right_value341=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value340=__builtin_string(module_name_350))))));
                (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value341,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                list$1char$ph_length(module_359->mParams)!=list$1char$ph_length(params_351)) {
                    ((struct tuple2$2int$bool$*)(__right_value342=err_msg(info,"invalid parametor number")));
                    /*c*/ come_call_finalizer3(__right_value342,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                }
                __dec_obj86=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "14struct.c", 1034, "struct map$2char$phchar$ph*"))));
                /*b*/ come_call_finalizer3(__dec_obj86,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_365=0;
                for(                o2_saved_366=(struct list$1char$ph*)come_increment_ref_count((module_359->mParams)),it_367=list$1char$ph_begin((o2_saved_366));                !list$1char$ph_end((o2_saved_366));                it_367=list$1char$ph_next((o2_saved_366))                ){
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_367)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value359=list$1char$ph_operator_load_element(params_351,i_365))))));
                    (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_365++;
                }
                /*c*/ come_call_finalizer3(o2_saved_366,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->p=module_359->mText;
                info->sline=module_359->mSLine;
                __dec_obj87=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_359->mSName));
                __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (module_name_350 = come_decrement_ref_count(module_name_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_351,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                multiple_assign_var20=((struct tuple3$3sType$phchar$phbool$*)(__right_value362=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_395=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                name_396=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                err_397=multiple_assign_var20->v3;
                /*c*/ come_call_finalizer3(__right_value362,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_397) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_300->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 1053, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_396),(struct sType*)come_increment_ref_count(type2_395))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                /*c*/ come_call_finalizer3(type2_395,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_396 = come_decrement_ref_count(name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_316) {
            if(            info->p==0) {
                info->p=p_saved_316;
                info->sline=sline_saved_317;
                __dec_obj88=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_318));
                __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                p_saved_316=((void*)0);
                sline_saved_317=0;
            }
        }
        list$1char$ph_reset(info->generics_type_names);
        info->defining_class=defining_class_301;
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 1087, "struct sNode");
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value368=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc_v2(1, sizeof(struct sClassNode)*(1), "14struct.c", 1087, "struct sClassNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_289)),(struct sClass*)come_increment_ref_count(struct_class_300),(struct list$1sNode$ph*)come_increment_ref_count(methods_319),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result_obj__174 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value374=_inf_value7)));
        (type_name_289 = come_decrement_ref_count(type_name_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (id_290 = come_decrement_ref_count(id_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(parent_classes_293,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(struct_class_300,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_saved_318 = come_decrement_ref_count(sname_saved_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(methods_319,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value368,sClassNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value374) ? __right_value374 = come_decrement_ref_count(__right_value374, ((struct sNode*)__right_value374)->finalize, ((struct sNode*)__right_value374)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__174) ? __result_obj__174 = come_decrement_ref_count(__result_obj__174, ((struct sNode*)__result_obj__174)->finalize, ((struct sNode*)__result_obj__174)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__174;
        (type_name_289 = come_decrement_ref_count(type_name_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (id_290 = come_decrement_ref_count(id_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(parent_classes_293,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(struct_class_300,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_saved_318 = come_decrement_ref_count(sname_saved_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(methods_319,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__175 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value375=top_level_v97(buf,head,head_sline,info))));
    ((__right_value375) ? __right_value375 = come_decrement_ref_count(__right_value375, ((struct sNode*)__right_value375)->finalize, ((struct sNode*)__right_value375)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__175) ? __result_obj__175 = come_decrement_ref_count(__result_obj__175, ((struct sNode*)__result_obj__175)->finalize, ((struct sNode*)__result_obj__175)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__175;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
struct sStructNobodyNode* __result_obj__128;
void* __right_value208 = (void*)0;
struct sStructNobodyNode* result_249;
void* __right_value209 = (void*)0;
char* __dec_obj62;
void* __right_value210 = (void*)0;
char* __dec_obj63;
struct sStructNobodyNode* __result_obj__129;
    if(    self==(void*)0) {
        __result_obj__128 = (void*)0;
        return __result_obj__128;
    }
    result_249=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc_v2(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*"));
    if(    self!=((void*)0)) {
        result_249->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj62=result_249->sname,
        result_249->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructNobodyNode_clone", 5, "char*"));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj63=result_249->mName,
        result_249->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStructNobodyNode_clone", 7, "char*"));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__129 = result_249;
    /*c*/ come_call_finalizer3(result_249,sStructNobodyNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__129;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self){
struct list$1sClass$p* __result_obj__135;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__135 = (struct list$1sClass$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__135,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__135;
}

static void list$1sClass$p$p_finalize(struct list$1sClass$p* self){
struct list_item$1sClass$p* it_294;
struct list_item$1sClass$p* prev_it_295;
    it_294=self->head;
    while(    it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        /*c*/ come_call_finalizer3(prev_it_295,list_item$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self){
}

static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item){
void* __right_value286 = (void*)0;
struct list_item$1sClass$p* litem_297;
void* __right_value287 = (void*)0;
struct list_item$1sClass$p* litem_298;
void* __right_value288 = (void*)0;
struct list_item$1sClass$p* litem_299;
struct list$1sClass$p* __result_obj__136;
    if(    self->len==0) {
        litem_297=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value286=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1043, "struct list_item$1sClass$p*"))));
        litem_297->prev=((void*)0);
        litem_297->next=((void*)0);
        litem_297->item=item;
        self->tail=litem_297;
        self->head=litem_297;
    }
    else if(    self->len==1) {
        litem_298=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value287=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1053, "struct list_item$1sClass$p*"))));
        litem_298->prev=self->head;
        litem_298->next=((void*)0);
        litem_298->item=item;
        self->tail=litem_298;
        self->head->next=litem_298;
    }
    else {
        litem_299=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value288=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1063, "struct list_item$1sClass$p*"))));
        litem_299->prev=self->tail;
        litem_299->next=((void*)0);
        litem_299->item=item;
        self->tail->next=litem_299;
        self->tail=litem_299;
    }
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self){
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct list$1sClass$p* result_302;
struct list_item$1sClass$p* it_303;
struct list$1sClass$p* __result_obj__138;
    result_302=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc_v2(1, sizeof(struct list$1sClass$p)*(1), "./comelang.h", 1791, "struct list$1sClass$p*"))));
    it_303=self->tail;
    while(    it_303!=((void*)0)) {
        list$1sClass$p_push_back(result_302,it_303->item);
        it_303=it_303->prev;
    }
    __result_obj__138 = (struct list$1sClass$p*)come_increment_ref_count(result_302);
    /*c*/ come_call_finalizer3(result_302,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__138,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__138;
}

static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item){
void* __right_value300 = (void*)0;
struct list_item$1sClass$p* litem_304;
void* __right_value301 = (void*)0;
struct list_item$1sClass$p* litem_305;
void* __right_value302 = (void*)0;
struct list_item$1sClass$p* litem_306;
struct list$1sClass$p* __result_obj__137;
    if(    self->len==0) {
        litem_304=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value300=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1113, "struct list_item$1sClass$p*"))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        litem_304->item=item;
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1) {
        litem_305=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value301=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1123, "struct list_item$1sClass$p*"))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        litem_305->item=item;
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value302=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1133, "struct list_item$1sClass$p*"))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        litem_306->item=item;
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result_obj__137 = self;
    return __result_obj__137;
}

static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self){
struct sClass* result_308;
struct sClass* __result_obj__139;
struct sClass* __result_obj__140;
struct sClass* result_309;
struct sClass* __result_obj__141;
result_308 = (void*)0;
result_309 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_308,0,sizeof(struct sClass*));
        __result_obj__139 = result_308;
        return __result_obj__139;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__140 = self->it->item;
        return __result_obj__140;
    }
    memset(&result_309,0,sizeof(struct sClass*));
    __result_obj__141 = result_309;
    return __result_obj__141;
}

static _Bool list$1sClass$p_end(struct list$1sClass$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self){
struct sClass* result_311;
struct sClass* __result_obj__142;
struct sClass* __result_obj__143;
struct sClass* result_312;
struct sClass* __result_obj__144;
result_311 = (void*)0;
result_312 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_311,0,sizeof(struct sClass*));
        __result_obj__142 = result_311;
        return __result_obj__142;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__143 = self->it->item;
        return __result_obj__143;
    }
    memset(&result_312,0,sizeof(struct sClass*));
    __result_obj__144 = result_312;
    return __result_obj__144;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_320;
int i_321;
    for(    i_320=0;    i_320<self->size;    i_320++    ){
        if(        self->item_existance[i_320]) {
            if(            1) {
                (self->items[i_320] = come_decrement_ref_count(self->items[i_320], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_321=0;    i_321<self->size;    i_321++    ){
        if(        self->item_existance[i_321]) {
            if(            1) {
                (self->keys[i_321] = come_decrement_ref_count(self->keys[i_321], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value316 = (void*)0;
struct list_item$1sNode$ph* litem_340;
struct sNode* __dec_obj80;
void* __right_value317 = (void*)0;
struct list_item$1sNode$ph* litem_341;
struct sNode* __dec_obj81;
void* __right_value318 = (void*)0;
struct list_item$1sNode$ph* litem_342;
struct sNode* __dec_obj82;
struct list$1sNode$ph* __result_obj__145;
    if(    self->len==0) {
        litem_340=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value316=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1113, "struct list_item$1sNode$ph*"))));
        litem_340->prev=((void*)0);
        litem_340->next=((void*)0);
        __dec_obj80=litem_340->item,
        litem_340->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_340;
        self->head=litem_340;
    }
    else if(    self->len==1) {
        litem_341=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value317=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1123, "struct list_item$1sNode$ph*"))));
        litem_341->prev=self->head;
        litem_341->next=((void*)0);
        __dec_obj81=litem_341->item,
        litem_341->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_341;
        self->head->next=litem_341;
    }
    else {
        litem_342=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value318=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_342->prev=self->tail;
        litem_342->next=((void*)0);
        __dec_obj82=litem_342->item,
        litem_342->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_342;
        self->tail=litem_342;
    }
    self->len++;
    __result_obj__145 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__145;
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_353;
unsigned int hash_354;
unsigned int it_355;
struct sClassModule* __result_obj__146;
struct sClassModule* __result_obj__147;
struct sClassModule* __result_obj__148;
struct sClassModule* __result_obj__149;
default_value_353 = (void*)0;
    memset(&default_value_353,0,sizeof(struct sClassModule*));
    hash_354=string_get_hash_key(((char*)key))%self->size;
    it_355=hash_354;
    while(    (_Bool)1) {
        if(        self->item_existance[it_355]) {
            if(            string_equals(self->keys[it_355],key)) {
                __result_obj__146 = (struct sClassModule*)come_increment_ref_count(self->items[it_355]);
                /*c*/ come_call_finalizer3(default_value_353,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__146,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__146;
            }
            it_355++;
            if(            it_355>=self->size) {
                it_355=0;
            }
            else if(            it_355==hash_354) {
                __result_obj__147 = (struct sClassModule*)come_increment_ref_count(default_value_353);
                /*c*/ come_call_finalizer3(default_value_353,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__147,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__147;
            }
        }
        else {
            __result_obj__148 = (struct sClassModule*)come_increment_ref_count(default_value_353);
            /*c*/ come_call_finalizer3(default_value_353,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__148,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__148;
        }
    }
    __result_obj__149 = (struct sClassModule*)come_increment_ref_count(default_value_353);
    /*c*/ come_call_finalizer3(default_value_353,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__149,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__149;
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

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_356;
unsigned int hash_357;
unsigned int it_358;
struct sClassModule* __result_obj__150;
struct sClassModule* __result_obj__151;
struct sClassModule* __result_obj__152;
struct sClassModule* __result_obj__153;
default_value_356 = (void*)0;
    memset(&default_value_356,0,sizeof(struct sClassModule*));
    hash_357=string_get_hash_key(((char*)key))%self->size;
    it_358=hash_357;
    while(    (_Bool)1) {
        if(        self->item_existance[it_358]) {
            if(            string_equals(self->keys[it_358],key)) {
                __result_obj__150 = (struct sClassModule*)come_increment_ref_count(self->items[it_358]);
                /*c*/ come_call_finalizer3(default_value_356,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__150,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__150;
            }
            it_358++;
            if(            it_358>=self->size) {
                it_358=0;
            }
            else if(            it_358==hash_357) {
                __result_obj__151 = (struct sClassModule*)come_increment_ref_count(default_value_356);
                /*c*/ come_call_finalizer3(default_value_356,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__151,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__151;
            }
        }
        else {
            __result_obj__152 = (struct sClassModule*)come_increment_ref_count(default_value_356);
            /*c*/ come_call_finalizer3(default_value_356,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__152,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__152;
        }
    }
    __result_obj__153 = (struct sClassModule*)come_increment_ref_count(default_value_356);
    /*c*/ come_call_finalizer3(default_value_356,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__153,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__153;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
int i_360;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1char$ph* __dec_obj85;
struct map$2char$phchar$ph* __result_obj__156;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value344=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value345=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1915, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value346=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_360=0;    i_360<128;    i_360++    ){
        self->item_existance[i_360]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj85=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj85,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__156 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__156,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__156;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__155;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__155 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__155,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__155;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_361;
struct list_item$1char$p* prev_it_362;
    it_361=self->head;
    while(    it_361!=((void*)0)) {
        prev_it_362=it_361;
        it_361=it_361->next;
        /*c*/ come_call_finalizer3(prev_it_362,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_363;
int i_364;
    for(    i_363=0;    i_363<self->size;    i_363++    ){
        if(        self->item_existance[i_363]) {
            if(            1) {
                (self->items[i_363] = come_decrement_ref_count(self->items[i_363], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_364=0;    i_364<self->size;    i_364++    ){
        if(        self->item_existance[i_364]) {
            if(            1) {
                (self->keys[i_364] = come_decrement_ref_count(self->keys[i_364], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_385;
unsigned int it_386;
_Bool same_key_exist_387;
char* it2_388;
struct map$2char$phchar$ph* __result_obj__167;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_385=string_get_hash_key(((char*)key))%self->size;
    it_386=hash_385;
    while(    (_Bool)1) {
        if(        self->item_existance[it_386]) {
            if(            string_equals(self->keys[it_386],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_386]);
                    (self->keys[it_386] = come_decrement_ref_count(self->keys[it_386], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_386]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_386]);
                    self->keys[it_386]=key;
                }
                if(                1) {
                    (self->items[it_386] = come_decrement_ref_count(self->items[it_386], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_386]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_386]=item;
                }
                break;
            }
            it_386++;
            if(            it_386>=self->size) {
                it_386=0;
            }
            else if(            it_386==hash_385) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_386]=(_Bool)1;
            if(            1) {
                self->keys[it_386]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_386]=key;
            }
            if(            1) {
                self->items[it_386]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_386]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_387=(_Bool)0;
    for(    it2_388=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_388=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_388,key)) {
            same_key_exist_387=(_Bool)1;
        }
    }
    if(    !same_key_exist_387) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__167 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__167;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_368;
void* __right_value351 = (void*)0;
char** keys_369;
void* __right_value352 = (void*)0;
char** items_370;
void* __right_value353 = (void*)0;
_Bool* item_existance_371;
int len_372;
char* it_375;
char* default_value_378;
void* __right_value354 = (void*)0;
char* it2_379;
unsigned int hash_382;
int n_383;
char* default_value_384;
void* __right_value355 = (void*)0;
default_value_378 = (void*)0;
default_value_384 = (void*)0;
    size_368=self->size*10;
    keys_369=(char**)come_increment_ref_count(((char**)(__right_value351=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_368)), "./comelang.h", 2153, "char**"))));
    items_370=(char**)come_increment_ref_count(((char**)(__right_value352=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_368)), "./comelang.h", 2154, "char**"))));
    item_existance_371=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value353=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_368)), "./comelang.h", 2155, "_Bool*"))));
    len_372=0;
    for(    it_375=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_375=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_378,0,sizeof(char*));
        it2_379=((char*)(__right_value354=map$2char$phchar$ph_at(self,it_375,(char*)come_increment_ref_count(default_value_378))));
        (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_382=string_get_hash_key(((char*)it_375))%size_368;
        n_383=hash_382;
        while(        (_Bool)1) {
            if(            item_existance_371[n_383]) {
                n_383++;
                if(                n_383>=size_368) {
                    n_383=0;
                }
                else if(                n_383==hash_382) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_371[n_383]=(_Bool)1;
                keys_369[n_383]=it_375;
                items_370[n_383]=((char*)(__right_value355=map$2char$phchar$ph_at(self,it_375,(char*)come_increment_ref_count(default_value_384))));
                (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_372++;
                (default_value_384 = come_decrement_ref_count(default_value_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_384 = come_decrement_ref_count(default_value_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_378 = come_decrement_ref_count(default_value_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_369;
    self->items=items_370;
    self->item_existance=item_existance_371;
    self->size=size_368;
    self->len=len_372;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_373;
char* __result_obj__157;
char* __result_obj__158;
char* result_374;
char* __result_obj__159;
result_373 = (void*)0;
result_374 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_373,0,sizeof(char*));
        __result_obj__157 = result_373;
        return __result_obj__157;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__158 = self->key_list->it->item;
        return __result_obj__158;
    }
    memset(&result_374,0,sizeof(char*));
    __result_obj__159 = result_374;
    return __result_obj__159;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_376;
char* __result_obj__160;
char* __result_obj__161;
char* result_377;
char* __result_obj__162;
result_376 = (void*)0;
result_377 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_376,0,sizeof(char*));
        __result_obj__160 = result_376;
        return __result_obj__160;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__161 = self->key_list->it->item;
        return __result_obj__161;
    }
    memset(&result_377,0,sizeof(char*));
    __result_obj__162 = result_377;
    return __result_obj__162;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_380;
unsigned int it_381;
char* __result_obj__163;
char* __result_obj__164;
char* __result_obj__165;
char* __result_obj__166;
    hash_380=string_get_hash_key(((char*)key))%self->size;
    it_381=hash_380;
    while(    (_Bool)1) {
        if(        self->item_existance[it_381]) {
            if(            string_equals(self->keys[it_381],key)) {
                __result_obj__163 = (char*)come_increment_ref_count(self->items[it_381]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__163;
            }
            it_381++;
            if(            it_381>=self->size) {
                it_381=0;
            }
            else if(            it_381==hash_380) {
                __result_obj__164 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
                (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__164;
            }
        }
        else {
            __result_obj__165 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
            (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__165;
        }
    }
    __result_obj__166 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__166;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_389;
int i_390;
char* __result_obj__168;
char* default_value_391;
char* __result_obj__169;
default_value_391 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_389=self->head;
    i_390=0;
    while(    it_389!=((void*)0)) {
        if(        position==i_390) {
            __result_obj__168 = (char*)come_increment_ref_count(it_389->item);
            (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__168;
        }
        it_389=it_389->next;
        i_390++;
    }
    memset(&default_value_391,0,sizeof(char*));
    __result_obj__169 = (char*)come_increment_ref_count(default_value_391);
    (default_value_391 = come_decrement_ref_count(default_value_391, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__169;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_392;
int i_393;
char* __result_obj__170;
char* default_value_394;
char* __result_obj__171;
default_value_394 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_392=self->head;
    i_393=0;
    while(    it_392!=((void*)0)) {
        if(        position==i_393) {
            __result_obj__170 = (char*)come_increment_ref_count(it_392->item);
            (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__170;
        }
        it_392=it_392->next;
        i_393++;
    }
    memset(&default_value_394,0,sizeof(char*));
    __result_obj__171 = (char*)come_increment_ref_count(default_value_394);
    (default_value_394 = come_decrement_ref_count(default_value_394, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__171;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
struct sClassNode* __result_obj__172;
void* __right_value369 = (void*)0;
struct sClassNode* result_398;
void* __right_value370 = (void*)0;
char* __dec_obj89;
void* __right_value371 = (void*)0;
char* __dec_obj90;
void* __right_value372 = (void*)0;
struct sClass* __dec_obj91;
void* __right_value373 = (void*)0;
struct list$1sNode$ph* __dec_obj92;
struct sClassNode* __result_obj__173;
    if(    self==(void*)0) {
        __result_obj__172 = (void*)0;
        return __result_obj__172;
    }
    result_398=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc_v2(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*"));
    if(    self!=((void*)0)) {
        result_398->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj89=result_398->sname,
        result_398->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sClassNode_clone", 5, "char*"));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj90=result_398->mName,
        result_398->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClassNode_clone", 7, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj91=result_398->mClass,
        result_398->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        /*b*/ come_call_finalizer3(__dec_obj91,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj92=result_398->mMethods,
        result_398->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mMethods));
        /*b*/ come_call_finalizer3(__dec_obj92,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__173 = result_398;
    /*c*/ come_call_finalizer3(result_398,sClassNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__173;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool define_struct_399;
char* p_400;
int sline_401;
void* __right_value376 = (void*)0;
char* type_name_402;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
char* struct_attribute_403;
void* __right_value381 = (void*)0;
char* type_name_404;
void* __right_value382 = (void*)0;
struct sNode* __result_obj__176;
void* __right_value383 = (void*)0;
struct sNode* __result_obj__177;
    define_struct_399=(_Bool)0;
    {
        p_400=info->p;
        sline_401=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_402=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value377=parse_word(info)));
                    (__right_value377 = come_decrement_ref_count(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((char*)(__right_value378=parse_word(info)));
                    (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==123) {
                    ((char*)(__right_value379=skip_block(info,(_Bool)0)));
                    (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    if(                    *info->p==59) {
                        define_struct_399=(_Bool)1;
                    }
                }
                (type_name_402 = come_decrement_ref_count(type_name_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_400;
        info->sline=sline_401;
    }
    if(    define_struct_399) {
        struct_attribute_403=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_404=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__176 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value382=parse_struct((char*)come_increment_ref_count(type_name_404),(char*)come_increment_ref_count(struct_attribute_403),info))));
        (struct_attribute_403 = come_decrement_ref_count(struct_attribute_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_404 = come_decrement_ref_count(type_name_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__right_value382) ? __right_value382 = come_decrement_ref_count(__right_value382, ((struct sNode*)__right_value382)->finalize, ((struct sNode*)__right_value382)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__176) ? __result_obj__176 = come_decrement_ref_count(__result_obj__176, ((struct sNode*)__result_obj__176)->finalize, ((struct sNode*)__result_obj__176)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__176;
        (struct_attribute_403 = come_decrement_ref_count(struct_attribute_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_404 = come_decrement_ref_count(type_name_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__177 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value383=string_node_v13(buf,head,head_sline,info))));
    ((__right_value383) ? __right_value383 = come_decrement_ref_count(__right_value383, ((struct sNode*)__right_value383)->finalize, ((struct sNode*)__right_value383)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__177) ? __result_obj__177 = come_decrement_ref_count(__result_obj__177, ((struct sNode*)__result_obj__177)->finalize, ((struct sNode*)__result_obj__177)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__177;
}

