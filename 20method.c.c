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
    _Bool mUniq;
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

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2char$phvoid$p
{
    char* v1;
    void* v2;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
    _Bool guard_break;
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
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void sBlock_finalize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
static void sClassModule_finalize(struct sClassModule* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
int err_msg(struct sInfo* info, char* msg, ...);
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
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
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
char* skip_block(struct sInfo* info);
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
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
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
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self);
static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self);
static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2);
static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self);
static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self);
static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, _Bool guard_break, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
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
struct list_item$1sType$ph* it_239;
struct list_item$1sType$ph* prev_it_240;
    it_239=self->head;
    while(    it_239!=((void*)0)) {
        prev_it_240=it_239;
        it_239=it_239->next;
        /*c*/ come_call_finalizer3(prev_it_240,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_241;
struct list_item$1sNode$ph* prev_it_242;
    it_241=self->head;
    while(    it_241!=((void*)0)) {
        prev_it_242=it_241;
        it_241=it_241->next;
        /*c*/ come_call_finalizer3(prev_it_242,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
int i_243;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1char$ph* __dec_obj20;
struct map$2char$phchar$ph* __result_obj__167;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value194=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1928, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value195=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1929, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value196=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1930, "_Bool*"))));
    for(    i_243=0;    i_243<128;    i_243++    ){
        self->item_existance[i_243]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj20=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj20,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__167 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__166;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__166 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__166,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__166;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_244;
struct list_item$1char$ph* prev_it_245;
    it_244=self->head;
    while(    it_244!=((void*)0)) {
        prev_it_245=it_244;
        it_244=it_244->next;
        /*c*/ come_call_finalizer3(prev_it_245,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_246;
int i_247;
    for(    i_246=0;    i_246<self->size;    i_246++    ){
        if(        self->item_existance[i_246]) {
            if(            1) {
                (self->items[i_246] = come_decrement_ref_count(self->items[i_246], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_247=0;    i_247<self->size;    i_247++    ){
        if(        self->item_existance[i_247]) {
            if(            1) {
                (self->keys[i_247] = come_decrement_ref_count(self->keys[i_247], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_248;
int i_249;
    for(    i_248=0;    i_248<self->size;    i_248++    ){
        if(        self->item_existance[i_248]) {
            if(            1) {
                (self->items[i_248] = come_decrement_ref_count(self->items[i_248], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_249=0;    i_249<self->size;    i_249++    ){
        if(        self->item_existance[i_249]) {
            if(            1) {
                (self->keys[i_249] = come_decrement_ref_count(self->keys[i_249], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
int i_250;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1char$ph* __dec_obj23;
struct map$2char$phsVar$ph* __result_obj__169;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value203=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1928, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value204=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1929, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value205=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1930, "_Bool*"))));
    for(    i_250=0;    i_250<128;    i_250++    ){
        self->item_existance[i_250]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj23=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj23,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__169 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_251;
int i_252;
    for(    i_251=0;    i_251<self->size;    i_251++    ){
        if(        self->item_existance[i_251]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_251],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_252=0;    i_252<self->size;    i_252++    ){
        if(        self->item_existance[i_252]) {
            if(            1) {
                (self->keys[i_252] = come_decrement_ref_count(self->keys[i_252], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
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
int i_253;
int i_254;
    for(    i_253=0;    i_253<self->size;    i_253++    ){
        if(        self->item_existance[i_253]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_253],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_254=0;    i_254<self->size;    i_254++    ){
        if(        self->item_existance[i_254]) {
            if(            1) {
                (self->keys[i_254] = come_decrement_ref_count(self->keys[i_254], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__171 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_255;
struct list_item$1sNode$ph* prev_it_256;
    it_255=self->head;
    while(    it_255!=((void*)0)) {
        prev_it_256=it_255;
        it_255=it_255->next;
        /*c*/ come_call_finalizer3(prev_it_256,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __right_value218 = (void*)0;
struct sCurrentNode* __result_obj__176;
    ((struct sNodeBase*)(__right_value218=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value218,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__176 = (struct sCurrentNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__176,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __right_value219 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value219=__builtin_string(self->sname))));
    (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__177;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __right_value220 = (void*)0;
char* __result_obj__178;
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value220=__builtin_string("sCurrentNode"))));
    (__right_value220 = come_decrement_ref_count(__right_value220, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__178;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value221 = (void*)0;
char* class_name_257;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct sClass* current_stack_258;
struct sVarTable* vtable_259;
struct map$2char$phsVar$ph* o2_saved_260;
char* it_263;
char* key_266;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sVar* value_267;
void* __right_value265 = (void*)0;
struct sType* type2_274;
void* __right_value266 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct tuple2$2char$phsType$ph* item_294;
void* __right_value272 = (void*)0;
struct sType* type3_305;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct tuple2$2char$phsType$ph* item2_308;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_355;
char* it_356;
char* key_357;
void* __right_value286 = (void*)0;
struct sVar* value_358;
void* __right_value287 = (void*)0;
struct sType* type2_359;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct tuple2$2char$phsType$ph* item_360;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct CVALUE* come_value_361;
void* __right_value292 = (void*)0;
char* __dec_obj62;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* __dec_obj63;
_Bool __result_obj__234;
    info->current_stack_num++;
    class_name_257=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_258=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "common.h", 484, "struct sClass*")),(char*)come_increment_ref_count(class_name_257),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
    vtable_259=info->lv_table;
    while(    vtable_259) {
        for(        o2_saved_260=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_259->mVars)),it_263=map$2char$phsVar$ph_begin((o2_saved_260));        !map$2char$phsVar$ph_end((o2_saved_260));        it_263=map$2char$phsVar$ph_next((o2_saved_260))        ){
            key_266=it_263;
            value_267=((struct sVar*)(__right_value226=map$2char$phsVar$ph_operator_load_element(vtable_259->mVars,((char*)(__right_value225=__builtin_string(key_266))))));
            (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value226,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_274=(struct sType*)come_increment_ref_count(sType_clone(value_267->mType));
            type2_274->mPointerNum++;
            item_294=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 497, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_267->mCValueName)),(struct sType*)come_increment_ref_count(type2_274)));
            if(            value_267->mCValueName!=((void*)0)) {
                if(                strcmp(value_267->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_267->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_267->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_267->mType->mClass->mName,"va_list")||string_operator_equals(value_267->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_274->mArrayNum)==1) {
                    type3_305=(struct sType*)come_increment_ref_count(sType_clone(type2_274));
                    list$1sNode$ph_reset(type3_305->mArrayNum);
                    type3_305->mPointerNum=1;
                    type3_305->mOriginIsArray=(_Bool)1;
                    item2_308=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 517, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_267->mCValueName)),(struct sType*)come_increment_ref_count(type3_305)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_258->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_308)));
                    value_267->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_305,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_308,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_258->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item_294)));
                }
            }
            /*c*/ come_call_finalizer3(type2_274,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_294,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_260,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_259=vtable_259->mParent;
    }
    output_struct(current_stack_258,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_257),(struct sClass*)come_increment_ref_count(current_stack_258));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_257,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_257);
    vtable_259=info->lv_table;
    while(    vtable_259) {
        for(        o2_saved_355=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_259->mVars)),it_356=map$2char$phsVar$ph_begin((o2_saved_355));        !map$2char$phsVar$ph_end((o2_saved_355));        it_356=map$2char$phsVar$ph_next((o2_saved_355))        ){
            key_357=it_356;
            value_358=((struct sVar*)(__right_value286=map$2char$phsVar$ph_operator_load_element(vtable_259->mVars,key_357)));
            /*c*/ come_call_finalizer3(__right_value286,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_359=(struct sType*)come_increment_ref_count(sType_clone(value_358->mType));
            item_360=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 546, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_358->mCValueName),(struct sType*)come_increment_ref_count(type2_359)));
            if(            value_358->mCValueName!=((void*)0)) {
                if(                strcmp(value_358->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_358->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_358->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_358->mType->mClass->mName,"va_list")||string_operator_equals(value_358->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(value_358->mFunName,info->come_fun->mName)) {
                        if(                        string_operator_equals(type2_359->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_358->mCValueName,value_358->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_358->mCValueName,value_358->mCValueName);
                        }
                    }
                    else {
                        if(                        string_operator_equals(type2_359->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_358->mCValueName,value_358->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_358->mCValueName,value_358->mCValueName);
                        }
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_359,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_360,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_355,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_259=vtable_259->mParent;
    }
    come_value_361=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "common.h", 585, "struct CVALUE*"))));
    __dec_obj62=come_value_361->c_value,
    come_value_361->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj63=come_value_361->type,
    come_value_361->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "common.h", 588, "struct sType*")),(char*)come_increment_ref_count(class_name_257),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_361->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_361->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_361));
    __result_obj__234 = (_Bool)1;
    (class_name_257 = come_decrement_ref_count(class_name_257, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_258,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_361,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__234;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_261;
char* __result_obj__179;
char* __result_obj__180;
char* result_262;
char* __result_obj__181;
result_261 = (void*)0;
result_262 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_261,0,sizeof(char*));
        __result_obj__179 = result_261;
        return __result_obj__179;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__180 = self->key_list->it->item;
        return __result_obj__180;
    }
    memset(&result_262,0,sizeof(char*));
    __result_obj__181 = result_262;
    return __result_obj__181;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_264;
char* __result_obj__182;
char* __result_obj__183;
char* result_265;
char* __result_obj__184;
result_264 = (void*)0;
result_265 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_264,0,sizeof(char*));
        __result_obj__182 = result_264;
        return __result_obj__182;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__183 = self->key_list->it->item;
        return __result_obj__183;
    }
    memset(&result_265,0,sizeof(char*));
    __result_obj__184 = result_265;
    return __result_obj__184;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_268;
unsigned int hash_269;
unsigned int it_270;
struct sVar* __result_obj__185;
struct sVar* __result_obj__186;
struct sVar* __result_obj__187;
struct sVar* __result_obj__188;
default_value_268 = (void*)0;
    memset(&default_value_268,0,sizeof(struct sVar*));
    hash_269=string_get_hash_key(((char*)key))%self->size;
    it_270=hash_269;
    while(    (_Bool)1) {
        if(        self->item_existance[it_270]) {
            if(            string_equals(self->keys[it_270],key)) {
                __result_obj__185 = (struct sVar*)come_increment_ref_count(self->items[it_270]);
                /*c*/ come_call_finalizer3(default_value_268,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__185,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__185;
            }
            it_270++;
            if(            it_270>=self->size) {
                it_270=0;
            }
            else if(            it_270==hash_269) {
                __result_obj__186 = (struct sVar*)come_increment_ref_count(default_value_268);
                /*c*/ come_call_finalizer3(default_value_268,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__186,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__186;
            }
        }
        else {
            __result_obj__187 = (struct sVar*)come_increment_ref_count(default_value_268);
            /*c*/ come_call_finalizer3(default_value_268,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__187,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__187;
        }
    }
    __result_obj__188 = (struct sVar*)come_increment_ref_count(default_value_268);
    /*c*/ come_call_finalizer3(default_value_268,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__188,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_271;
unsigned int hash_272;
unsigned int it_273;
struct sVar* __result_obj__189;
struct sVar* __result_obj__190;
struct sVar* __result_obj__191;
struct sVar* __result_obj__192;
default_value_271 = (void*)0;
    memset(&default_value_271,0,sizeof(struct sVar*));
    hash_272=string_get_hash_key(((char*)key))%self->size;
    it_273=hash_272;
    while(    (_Bool)1) {
        if(        self->item_existance[it_273]) {
            if(            string_equals(self->keys[it_273],key)) {
                __result_obj__189 = (struct sVar*)come_increment_ref_count(self->items[it_273]);
                /*c*/ come_call_finalizer3(default_value_271,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__189,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__189;
            }
            it_273++;
            if(            it_273>=self->size) {
                it_273=0;
            }
            else if(            it_273==hash_272) {
                __result_obj__190 = (struct sVar*)come_increment_ref_count(default_value_271);
                /*c*/ come_call_finalizer3(default_value_271,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__190,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__190;
            }
        }
        else {
            __result_obj__191 = (struct sVar*)come_increment_ref_count(default_value_271);
            /*c*/ come_call_finalizer3(default_value_271,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__191,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__191;
        }
    }
    __result_obj__192 = (struct sVar*)come_increment_ref_count(default_value_271);
    /*c*/ come_call_finalizer3(default_value_271,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__192,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__193;
void* __right_value227 = (void*)0;
struct sType* result_275;
void* __right_value228 = (void*)0;
struct sType* __dec_obj31;
void* __right_value229 = (void*)0;
struct sType* __dec_obj32;
void* __right_value237 = (void*)0;
struct list$1sType$ph* __dec_obj36;
void* __right_value238 = (void*)0;
struct sType* __dec_obj37;
void* __right_value239 = (void*)0;
struct sType* __dec_obj38;
void* __right_value241 = (void*)0;
struct sNode* __dec_obj39;
void* __right_value242 = (void*)0;
struct sNode* __dec_obj40;
void* __right_value243 = (void*)0;
char* __dec_obj41;
void* __right_value244 = (void*)0;
char* __dec_obj42;
void* __right_value245 = (void*)0;
char* __dec_obj43;
void* __right_value253 = (void*)0;
struct list$1sNode$ph* __dec_obj47;
void* __right_value254 = (void*)0;
char* __dec_obj48;
void* __right_value255 = (void*)0;
struct list$1sType$ph* __dec_obj49;
void* __right_value263 = (void*)0;
struct list$1char$ph* __dec_obj53;
void* __right_value264 = (void*)0;
struct sType* __dec_obj54;
struct sType* __result_obj__206;
    if(    self==(void*)0) {
        __result_obj__193 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__193,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__193;
    }
    result_275=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_275->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj31=result_275->mOriginalLoadVarType,
        result_275->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj32=result_275->mChannelType,
        result_275->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj36=result_275->mGenericsTypes,
        result_275->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj36,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj37=result_275->mNoSolvedGenericsType,
        result_275->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj38=result_275->mAnyOriginalType,
        result_275->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj39=result_275->mSizeNum,
        result_275->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj40=result_275->mAlignas,
        result_275->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj41=result_275->mTupleName,
        result_275->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj42=result_275->mAttribute,
        result_275->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_275->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_275->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_275->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_275->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_275->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_275->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_275->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_275->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_275->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_275->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_275->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_275->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_275->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_275->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_275->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_275->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_275->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_275->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_275->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_275->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_275->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_275->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_275->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj43=result_275->mAsmName,
        result_275->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_275->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_275->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj47=result_275->mArrayNum,
        result_275->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj47,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_275->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj48=result_275->mOriginalTypeName,
        result_275->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_275->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_275->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj49=result_275->mParamTypes,
        result_275->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj49,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj53=result_275->mParamNames,
        result_275->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj53,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj54=result_275->mResultType,
        result_275->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_275->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__206 = (struct sType*)come_increment_ref_count(result_275);
    /*c*/ come_call_finalizer3(result_275,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__206,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__206;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__194;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct list$1sType$ph* result_276;
struct list_item$1sType$ph* it_277;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1sType$ph* __result_obj__197;
    if(    self==((void*)0)) {
        __result_obj__194 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__194,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__194;
    }
    result_276=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_277=self->head;
    while(    it_277!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_276,(struct sType*)come_increment_ref_count(sType_clone(it_277->item)));
        }
        else {
            list$1sType$ph_add(result_276,(struct sType*)come_increment_ref_count(sType_clone(it_277->item)));
        }
        it_277=it_277->next;
    }
    __result_obj__197 = (struct list$1sType$ph*)come_increment_ref_count(result_276);
    /*c*/ come_call_finalizer3(result_276,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__195;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__195 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__195,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value232 = (void*)0;
struct list_item$1sType$ph* litem_278;
struct sType* __dec_obj33;
void* __right_value233 = (void*)0;
struct list_item$1sType$ph* litem_279;
struct sType* __dec_obj34;
void* __right_value234 = (void*)0;
struct list_item$1sType$ph* litem_280;
struct sType* __dec_obj35;
struct list$1sType$ph* __result_obj__196;
    if(    self->len==0) {
        litem_278=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value232=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_278->prev=((void*)0);
        litem_278->next=((void*)0);
        __dec_obj33=litem_278->item,
        litem_278->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_278;
        self->head=litem_278;
    }
    else if(    self->len==1) {
        litem_279=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value233=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_279->prev=self->head;
        litem_279->next=((void*)0);
        __dec_obj34=litem_279->item,
        litem_279->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_279;
        self->head->next=litem_279;
    }
    else {
        litem_280=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value234=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_280->prev=self->tail;
        litem_280->next=((void*)0);
        __dec_obj35=litem_280->item,
        litem_280->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_280;
        self->tail=litem_280;
    }
    self->len++;
    __result_obj__196 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_281;
struct list_item$1sType$ph* prev_it_282;
    it_281=self->head;
    while(    it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        /*c*/ come_call_finalizer3(prev_it_282,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__198;
void* __right_value240 = (void*)0;
struct sNode* result_283;
struct sNode* __result_obj__199;
    if(    self==(void*)0) {
        __result_obj__198 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__198) ? __result_obj__198 = come_decrement_ref_count(__result_obj__198, ((struct sNode*)__result_obj__198)->finalize, ((struct sNode*)__result_obj__198)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__198;
    }
    result_283=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_283->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_283->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_283->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_283->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_283->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_283->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_283->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_283->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_283->kind=self->kind;
    }
    __result_obj__199 = (struct sNode*)come_increment_ref_count(result_283);
    ((result_283) ? result_283 = come_decrement_ref_count(result_283, ((struct sNode*)result_283)->finalize, ((struct sNode*)result_283)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__199) ? __result_obj__199 = come_decrement_ref_count(__result_obj__199, ((struct sNode*)__result_obj__199)->finalize, ((struct sNode*)__result_obj__199)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__199;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__200;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct list$1sNode$ph* result_284;
struct list_item$1sNode$ph* it_285;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct list$1sNode$ph* __result_obj__202;
    if(    self==((void*)0)) {
        __result_obj__200 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__200,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__200;
    }
    result_284=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_285=self->head;
    while(    it_285!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_284,(struct sNode*)come_increment_ref_count(sNode_clone(it_285->item)));
        }
        else {
            list$1sNode$ph_add(result_284,(struct sNode*)come_increment_ref_count(sNode_clone(it_285->item)));
        }
        it_285=it_285->next;
    }
    __result_obj__202 = (struct list$1sNode$ph*)come_increment_ref_count(result_284);
    /*c*/ come_call_finalizer3(result_284,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__202,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__202;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value248 = (void*)0;
struct list_item$1sNode$ph* litem_286;
struct sNode* __dec_obj44;
void* __right_value249 = (void*)0;
struct list_item$1sNode$ph* litem_287;
struct sNode* __dec_obj45;
void* __right_value250 = (void*)0;
struct list_item$1sNode$ph* litem_288;
struct sNode* __dec_obj46;
struct list$1sNode$ph* __result_obj__201;
    if(    self->len==0) {
        litem_286=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value248=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj44=litem_286->item,
        litem_286->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value249=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj45=litem_287->item,
        litem_287->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj45 ? __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value250=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj46=litem_288->item,
        litem_288->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result_obj__201 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__201;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__203;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1char$ph* result_289;
struct list_item$1char$ph* it_290;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1char$ph* __result_obj__205;
    if(    self==((void*)0)) {
        __result_obj__203 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__203,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__203;
    }
    result_289=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_290=self->head;
    while(    it_290!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_289,(char*)come_increment_ref_count((char*)come_memdup(it_290->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_289,(char*)come_increment_ref_count((char*)come_memdup(it_290->item, "./comelang.h", 1032, "char*")));
        }
        it_290=it_290->next;
    }
    __result_obj__205 = (struct list$1char$ph*)come_increment_ref_count(result_289);
    /*c*/ come_call_finalizer3(result_289,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__205,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__205;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value258 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj50;
void* __right_value259 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj51;
void* __right_value260 = (void*)0;
struct list_item$1char$ph* litem_293;
char* __dec_obj52;
struct list$1char$ph* __result_obj__204;
    if(    self->len==0) {
        litem_291=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value258=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj50=litem_291->item,
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value259=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj51=litem_292->item,
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value260=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj52=litem_293->item,
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_293;
        self->tail=litem_293;
    }
    self->len++;
    __result_obj__204 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__204;
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
struct tuple2$2char$phsType$ph* __result_obj__207;
void* __right_value267 = (void*)0;
struct tuple2$2char$phsType$ph* result_295;
void* __right_value268 = (void*)0;
char* __dec_obj55;
void* __right_value269 = (void*)0;
struct sType* __dec_obj56;
struct tuple2$2char$phsType$ph* __result_obj__208;
    if(    self==(void*)0) {
        __result_obj__207 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__207,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__207;
    }
    result_295=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj55=result_295->v1,
        result_295->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj56=result_295->v2,
        result_295->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__208 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_295);
    /*c*/ come_call_finalizer3(result_295,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__208,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__208;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_296;
    result_296=0;
    result_296+=int_get_hash_key(((int)self->v1));
    result_296+=int_get_hash_key(((int)self->v2));
    return result_296;
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
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_297;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_298;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_297=left->head;
    it2_298=right->head;
    while(    it_297!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_297->item,it2_298->item)) {
            return (_Bool)0;
        }
        it_297=it_297->next;
        it2_298=it2_298->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_299;
struct list_item$1sType$ph* it2_300;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_299=left->head;
    it2_300=right->head;
    while(    it_299!=((void*)0)) {
        if(        !sType_equals(it_299->item,it2_300->item)) {
            return (_Bool)0;
        }
        it_299=it_299->next;
        it2_300=it2_300->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_301;
struct list_item$1sNode$ph* it2_302;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_301=left->head;
    it2_302=right->head;
    while(    it_301!=((void*)0)) {
        if(        !sNode_equals(it_301->item,it2_302->item)) {
            return (_Bool)0;
        }
        it_301=it_301->next;
        it2_302=it2_302->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_303;
struct list_item$1char$ph* it2_304;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_303=left->head;
    it2_304=right->head;
    while(    it_303!=((void*)0)) {
        if(        !string_equals(it_303->item,it2_304->item)) {
            return (_Bool)0;
        }
        it_303=it_303->next;
        it2_304=it2_304->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj57;
struct sType* __dec_obj58;
struct tuple2$2char$phsType$ph* __result_obj__209;
    __dec_obj57=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj58=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__209 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__209,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_306;
struct list_item$1sNode$ph* prev_it_307;
struct list$1sNode$ph* __result_obj__210;
    it_306=self->head;
    while(    it_306!=((void*)0)) {
        prev_it_307=it_306;
        it_306=it_306->next;
        /*c*/ come_call_finalizer3(prev_it_307,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__210 = self;
    return __result_obj__210;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value276 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_309;
struct tuple2$2char$phsType$ph* __dec_obj59;
void* __right_value277 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_310;
struct tuple2$2char$phsType$ph* __dec_obj60;
void* __right_value278 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_311;
struct tuple2$2char$phsType$ph* __dec_obj61;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__211;
    if(    self->len==0) {
        litem_309=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value276=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_309->prev=((void*)0);
        litem_309->next=((void*)0);
        __dec_obj59=litem_309->item,
        litem_309->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj59,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_309;
        self->head=litem_309;
    }
    else if(    self->len==1) {
        litem_310=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value277=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_310->prev=self->head;
        litem_310->next=((void*)0);
        __dec_obj60=litem_310->item,
        litem_310->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_310;
        self->head->next=litem_310;
    }
    else {
        litem_311=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value278=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_311->prev=self->tail;
        litem_311->next=((void*)0);
        __dec_obj61=litem_311->item,
        litem_311->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj61,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_311;
        self->tail=litem_311;
    }
    self->len++;
    __result_obj__211 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_331;
unsigned int it_332;
_Bool same_key_exist_349;
char* it2_352;
struct map$2char$phsClass$ph* __result_obj__232;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_331=string_get_hash_key(((char*)key))%self->size;
    it_332=hash_331;
    while(    (_Bool)1) {
        if(        self->item_existance[it_332]) {
            if(            string_equals(self->keys[it_332],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_332]);
                    (self->keys[it_332] = come_decrement_ref_count(self->keys[it_332], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_332]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_332]);
                    self->keys[it_332]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_332],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_332]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_332]=item;
                }
                break;
            }
            it_332++;
            if(            it_332>=self->size) {
                it_332=0;
            }
            else if(            it_332==hash_331) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_332]=(_Bool)1;
            if(            1) {
                self->keys[it_332]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_332]=key;
            }
            if(            1) {
                self->items[it_332]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_332]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_349=(_Bool)0;
    for(    it2_352=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_352=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_352,key)) {
            same_key_exist_349=(_Bool)1;
        }
    }
    if(    !same_key_exist_349) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__232 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__232;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_312;
void* __right_value281 = (void*)0;
char** keys_313;
void* __right_value282 = (void*)0;
struct sClass** items_314;
void* __right_value283 = (void*)0;
_Bool* item_existance_315;
int len_316;
char* it_319;
struct sClass* default_value_322;
void* __right_value284 = (void*)0;
struct sClass* it2_323;
unsigned int hash_328;
int n_329;
struct sClass* default_value_330;
void* __right_value285 = (void*)0;
default_value_322 = (void*)0;
default_value_330 = (void*)0;
    size_312=self->size*10;
    keys_313=(char**)come_increment_ref_count(((char**)(__right_value281=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_312)), "./comelang.h", 2167, "char**"))));
    items_314=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value282=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_312)), "./comelang.h", 2168, "struct sClass**"))));
    item_existance_315=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value283=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_312)), "./comelang.h", 2169, "_Bool*"))));
    len_316=0;
    for(    it_319=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_319=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_322,0,sizeof(struct sClass*));
        it2_323=((struct sClass*)(__right_value284=map$2char$phsClass$ph_at(self,it_319,(struct sClass*)come_increment_ref_count(default_value_322))));
        /*c*/ come_call_finalizer3(__right_value284,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_328=string_get_hash_key(((char*)it_319))%size_312;
        n_329=hash_328;
        while(        (_Bool)1) {
            if(            item_existance_315[n_329]) {
                n_329++;
                if(                n_329>=size_312) {
                    n_329=0;
                }
                else if(                n_329==hash_328) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_315[n_329]=(_Bool)1;
                keys_313[n_329]=it_319;
                items_314[n_329]=((struct sClass*)(__right_value285=map$2char$phsClass$ph_at(self,it_319,(struct sClass*)come_increment_ref_count(default_value_330))));
                /*c*/ come_call_finalizer3(__right_value285,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_316++;
                /*c*/ come_call_finalizer3(default_value_330,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_330,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_322,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_313;
    self->items=items_314;
    self->item_existance=item_existance_315;
    self->size=size_312;
    self->len=len_316;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_317;
char* __result_obj__212;
char* __result_obj__213;
char* result_318;
char* __result_obj__214;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_317,0,sizeof(char*));
        __result_obj__212 = result_317;
        return __result_obj__212;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__213 = self->key_list->it->item;
        return __result_obj__213;
    }
    memset(&result_318,0,sizeof(char*));
    __result_obj__214 = result_318;
    return __result_obj__214;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_320;
char* __result_obj__215;
char* __result_obj__216;
char* result_321;
char* __result_obj__217;
result_320 = (void*)0;
result_321 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_320,0,sizeof(char*));
        __result_obj__215 = result_320;
        return __result_obj__215;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__216 = self->key_list->it->item;
        return __result_obj__216;
    }
    memset(&result_321,0,sizeof(char*));
    __result_obj__217 = result_321;
    return __result_obj__217;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_324;
unsigned int it_325;
struct sClass* __result_obj__218;
struct sClass* __result_obj__219;
struct sClass* __result_obj__220;
struct sClass* __result_obj__221;
    hash_324=string_get_hash_key(((char*)key))%self->size;
    it_325=hash_324;
    while(    (_Bool)1) {
        if(        self->item_existance[it_325]) {
            if(            string_equals(self->keys[it_325],key)) {
                __result_obj__218 = (struct sClass*)come_increment_ref_count(self->items[it_325]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__218,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__218;
            }
            it_325++;
            if(            it_325>=self->size) {
                it_325=0;
            }
            else if(            it_325==hash_324) {
                __result_obj__219 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__219,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__219;
            }
        }
        else {
            __result_obj__220 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__220,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__220;
        }
    }
    __result_obj__221 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__221,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_326;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_327;
    it_326=self->head;
    while(    it_326!=((void*)0)) {
        prev_it_327=it_326;
        it_326=it_326->next;
        /*c*/ come_call_finalizer3(prev_it_327,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_333;
struct list_item$1char$ph* it_334;
struct list$1char$ph* __result_obj__225;
    it2_333=0;
    it_334=self->head;
    while(    it_334!=((void*)0)) {
        if(        string_equals(it_334->item,item)) {
            list$1char$ph_delete(self,it2_333,it2_333+1);
            break;
        }
        it2_333++;
        it_334=it_334->next;
    }
    __result_obj__225 = self;
    return __result_obj__225;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_335;
struct list$1char$ph* __result_obj__222;
struct list_item$1char$ph* it_338;
int i_339;
struct list_item$1char$ph* prev_it_340;
struct list_item$1char$ph* it_341;
int i_342;
struct list_item$1char$ph* prev_it_343;
struct list_item$1char$ph* it_344;
struct list_item$1char$ph* head_prev_it_345;
struct list_item$1char$ph* tail_it_346;
int i_347;
struct list_item$1char$ph* prev_it_348;
struct list$1char$ph* __result_obj__224;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_335=tail;
        tail=head;
        head=tmp_335;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__222 = self;
        return __result_obj__222;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_338=self->head;
        i_339=0;
        while(        it_338!=((void*)0)) {
            if(            i_339<tail) {
                prev_it_340=it_338;
                it_338=it_338->next;
                i_339++;
                /*c*/ come_call_finalizer3(prev_it_340,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_339==tail) {
                self->head=it_338;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_338=it_338->next;
                i_339++;
            }
        }
    }
    else if(    tail==self->len) {
        it_341=self->head;
        i_342=0;
        while(        it_341!=((void*)0)) {
            if(            i_342==head) {
                self->tail=it_341->prev;
                self->tail->next=((void*)0);
            }
            if(            i_342>=head) {
                prev_it_343=it_341;
                it_341=it_341->next;
                i_342++;
                /*c*/ come_call_finalizer3(prev_it_343,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_341=it_341->next;
                i_342++;
            }
        }
    }
    else {
        it_344=self->head;
        head_prev_it_345=((void*)0);
        tail_it_346=((void*)0);
        i_347=0;
        while(        it_344!=((void*)0)) {
            if(            i_347==head) {
                head_prev_it_345=it_344->prev;
            }
            if(            i_347==tail) {
                tail_it_346=it_344;
            }
            if(            i_347>=head&&i_347<tail) {
                prev_it_348=it_344;
                it_344=it_344->next;
                i_347++;
                /*c*/ come_call_finalizer3(prev_it_348,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_344=it_344->next;
                i_347++;
            }
        }
        if(        head_prev_it_345!=((void*)0)) {
            head_prev_it_345->next=tail_it_346;
        }
        if(        tail_it_346!=((void*)0)) {
            tail_it_346->prev=head_prev_it_345;
        }
    }
    __result_obj__224 = self;
    return __result_obj__224;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_336;
struct list_item$1char$ph* prev_it_337;
struct list$1char$ph* __result_obj__223;
    it_336=self->head;
    while(    it_336!=((void*)0)) {
        prev_it_337=it_336;
        it_336=it_336->next;
        /*c*/ come_call_finalizer3(prev_it_337,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__223 = self;
    return __result_obj__223;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_350;
char* __result_obj__226;
char* __result_obj__227;
char* result_351;
char* __result_obj__228;
result_350 = (void*)0;
result_351 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_350,0,sizeof(char*));
        __result_obj__226 = result_350;
        return __result_obj__226;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__227 = self->it->item;
        return __result_obj__227;
    }
    memset(&result_351,0,sizeof(char*));
    __result_obj__228 = result_351;
    return __result_obj__228;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_353;
char* __result_obj__229;
char* __result_obj__230;
char* result_354;
char* __result_obj__231;
result_353 = (void*)0;
result_354 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_353,0,sizeof(char*));
        __result_obj__229 = result_353;
        return __result_obj__229;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__230 = self->it->item;
        return __result_obj__230;
    }
    memset(&result_354,0,sizeof(char*));
    __result_obj__231 = result_354;
    return __result_obj__231;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value295 = (void*)0;
struct list_item$1CVALUE$ph* litem_362;
struct CVALUE* __dec_obj64;
void* __right_value296 = (void*)0;
struct list_item$1CVALUE$ph* litem_363;
struct CVALUE* __dec_obj65;
void* __right_value297 = (void*)0;
struct list_item$1CVALUE$ph* litem_364;
struct CVALUE* __dec_obj66;
struct list$1CVALUE$ph* __result_obj__233;
    if(    self->len==0) {
        litem_362=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value295=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_362->prev=((void*)0);
        litem_362->next=((void*)0);
        __dec_obj64=litem_362->item,
        litem_362->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj64,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_362;
        self->head=litem_362;
    }
    else if(    self->len==1) {
        litem_363=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value296=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_363->prev=self->head;
        litem_363->next=((void*)0);
        __dec_obj65=litem_363->item,
        litem_363->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj65,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_363;
        self->head->next=litem_363;
    }
    else {
        litem_364=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value297=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_364->prev=self->tail;
        litem_364->next=((void*)0);
        __dec_obj66=litem_364->item,
        litem_364->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj66,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_364;
        self->tail=litem_364;
    }
    self->len++;
    __result_obj__233 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value298 = (void*)0;
char* none_generics_name_365;
void* __right_value299 = (void*)0;
char* fun_name2_366;
void* __right_value300 = (void*)0;
char* fun_name3_367;
void* __right_value301 = (void*)0;
struct sType* no_solved_type_368;
void* __right_value302 = (void*)0;
struct sGenericsFun* generics_fun_369;
struct sType* type2_372;
void* __right_value303 = (void*)0;
struct sType* type_before_373;
void* __right_value304 = (void*)0;
char* __dec_obj67;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_374=0;
_Bool err_375=0;
void* __right_value307 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__242;
void* __right_value312 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__246;
    none_generics_name_365=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_366=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_367=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_365,fun_name));
    no_solved_type_368=(struct sType*)come_increment_ref_count(sType_clone(type));
    generics_fun_369=((struct sGenericsFun*)(__right_value302=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_367,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value302,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    generics_fun_369) {
        type2_372=(struct sType*)come_increment_ref_count(no_solved_type_368);
        type_before_373=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj67=fun_name2_366,
        fun_name2_366=(char*)come_increment_ref_count(create_method_name(type2_372,(_Bool)0,fun_name,info,array_equal_pointer));
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value306=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_366)),generics_fun_369,type2_372,info)));
        name_374=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        err_375=multiple_assign_var1->v2;
        /*c*/ come_call_finalizer3(__right_value306,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_375) {
            err_msg(info,"%s not found",fun_name3_367);
            __result_obj__242 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value311=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 29, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            /*c*/ come_call_finalizer3(type2_372,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_before_373,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_374 = come_decrement_ref_count(name_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (none_generics_name_365 = come_decrement_ref_count(none_generics_name_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name2_366 = come_decrement_ref_count(fun_name2_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name3_367 = come_decrement_ref_count(fun_name3_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(no_solved_type_368,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value311,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__242,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__242;
        }
        type=type_before_373;
        /*c*/ come_call_finalizer3(type2_372,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_before_373,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_374 = come_decrement_ref_count(name_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__246 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value316=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 35, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name2_366, "20method.c", 35, "char*")),generics_fun_369))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (none_generics_name_365 = come_decrement_ref_count(none_generics_name_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_366 = come_decrement_ref_count(fun_name2_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name3_367 = come_decrement_ref_count(fun_name3_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(no_solved_type_368,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value316,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__246,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_370;
unsigned int it_371;
struct sGenericsFun* __result_obj__235;
struct sGenericsFun* __result_obj__236;
struct sGenericsFun* __result_obj__237;
struct sGenericsFun* __result_obj__238;
    hash_370=string_get_hash_key(((char*)key))%self->size;
    it_371=hash_370;
    while(    (_Bool)1) {
        if(        self->item_existance[it_371]) {
            if(            string_equals(self->keys[it_371],key)) {
                __result_obj__235 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_371]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__235,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__235;
            }
            it_371++;
            if(            it_371>=self->size) {
                it_371=0;
            }
            else if(            it_371==hash_370) {
                __result_obj__236 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__236,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__236;
            }
        }
        else {
            __result_obj__237 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__237,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__237;
        }
    }
    __result_obj__238 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__238,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__238;
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

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self){
struct tuple2$2char$phvoid$p* __result_obj__239;
void* __right_value308 = (void*)0;
struct tuple2$2char$phvoid$p* result_376;
void* __right_value309 = (void*)0;
char* __dec_obj68;
struct tuple2$2char$phvoid$p* __result_obj__240;
    if(    self==(void*)0) {
        __result_obj__239 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__239,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__239;
    }
    result_376=(struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "tuple2$2char$phvoid$p_clone", 3, "struct tuple2$2char$phvoid$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj68=result_376->v1,
        result_376->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phvoid$p_clone", 4, "char*"));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_376->v2=self->v2;
    }
    __result_obj__240 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(result_376);
    /*c*/ come_call_finalizer3(result_376,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__240,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self){
unsigned int result_377;
    result_377=0;
    result_377+=int_get_hash_key(((int)self->v1));
    result_377+=int_get_hash_key(((int)self->v2));
    return result_377;
}

static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2){
char* __dec_obj69;
struct tuple2$2char$phvoid$p* __result_obj__241;
    __dec_obj69=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__241 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__241,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self){
struct tuple2$2char$phsGenericsFun$p* __result_obj__243;
void* __right_value313 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* result_378;
void* __right_value314 = (void*)0;
char* __dec_obj70;
struct tuple2$2char$phsGenericsFun$p* __result_obj__244;
    if(    self==(void*)0) {
        __result_obj__243 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__243,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__243;
    }
    result_378=(struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "tuple2$2char$phsGenericsFun$p_clone", 3, "struct tuple2$2char$phsGenericsFun$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj70=result_378->v1,
        result_378->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsGenericsFun$p_clone", 4, "char*"));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_378->v2=self->v2;
    }
    __result_obj__244 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(result_378);
    /*c*/ come_call_finalizer3(result_378,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__244,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__244;
}

static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self){
unsigned int result_379;
    result_379=0;
    result_379+=int_get_hash_key(((int)self->v1));
    result_379+=int_get_hash_key(((int)self->v2));
    return result_379;
}

static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right){
    if(    !sType_equals(left->mImplType,right->mImplType)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mGenericsTypeNames,right->mGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mMethodGenericsTypeNames,right->mMethodGenericsTypeNames)) {
        return (_Bool)0;
    }
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
    if(    !string_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mSLine,right->mSLine)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsSName,right->mGenericsSName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsSLine,right->mGenericsSLine)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstFun,right->mConstFun)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2){
char* __dec_obj71;
struct tuple2$2char$phsGenericsFun$p* __result_obj__245;
    __dec_obj71=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__245 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__245,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value317 = (void*)0;
char* fun_name3_381;
struct list$1sType$ph* method_generics_types_before_382;
struct list$1sType$ph* __dec_obj72;
void* __right_value318 = (void*)0;
struct sGenericsFun* generics_fun_383;
void* __right_value319 = (void*)0;
_Bool _if_conditional1;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__247;
struct list$1sType$ph* __dec_obj73;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__248;
    static int num_method_generics_380=0;
    fun_name3_381=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_380++));
    method_generics_types_before_382=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj72=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj72,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    generics_fun_383=((struct sGenericsFun*)(__right_value318=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value318,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    generics_fun_383) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_381)),generics_fun_383,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_381);
            __result_obj__247 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value322=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 51, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name3_381 = come_decrement_ref_count(fun_name3_381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(method_generics_types_before_382,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value322,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__247,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__247;
        }
    }
    __dec_obj73=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_382);
    /*b*/ come_call_finalizer3(__dec_obj73,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__248 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value325=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 57, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name3_381, "20method.c", 57, "char*")),generics_fun_383))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name3_381 = come_decrement_ref_count(fun_name3_381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(method_generics_types_before_382,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value325,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__248,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__248;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value330 = (void*)0;
struct sNode* current_stack_frame_node_384;
_Bool Value_386;
_Bool __result_obj__251;
void* __right_value331 = (void*)0;
struct CVALUE* come_value_389;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct buffer* method_block2_390;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sType* method_block_type_391;
void* __right_value336 = (void*)0;
char* class_name_398;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sClass* current_stack_frame_struct_405;
void* __right_value339 = (void*)0;
_Bool __result_obj__264;
void* __right_value340 = (void*)0;
struct sType* result_type_406;
struct list$1sType$ph* param_types_407;
struct list$1char$ph* param_names_408;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct buffer* all_alhabet_sname_409;
char* p_410;
int num_method_block_411;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
int i_412;
struct list$1sType$ph* o2_saved_413;
struct sType* it_416;
struct sType* param_type_419;
void* __right_value345 = (void*)0;
char* param_name_420;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* param_name_421;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
char* param_name_422;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct buffer* source3_423;
char* p_424;
char* head_425;
int sline_426;
struct buffer* __dec_obj75;
void* __right_value352 = (void*)0;
struct sNode* node_427;
_Bool in_method_block_428;
_Bool Value_429;
_Bool __result_obj__271;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
char* method_block_name_430;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct CVALUE* come_value2_431;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sFun* fun2_432;
_Bool __result_obj__276;
struct sType* method_block_type2_435;
void* __right_value359 = (void*)0;
char* __dec_obj76;
void* __right_value360 = (void*)0;
struct sType* __dec_obj77;
struct buffer* __dec_obj78;
void* __right_value361 = (void*)0;
struct sType* __dec_obj79;
_Bool contained_method_generics_method_block_436;
struct list$1sType$ph* o2_saved_437;
struct sType* it_438;
void* __right_value362 = (void*)0;
_Bool __result_obj__278;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 62, "struct sNode");
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value327=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "20method.c", 62, "struct sCurrentNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_384=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*c*/ come_call_finalizer3(__right_value327,sCurrentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_386=node_compile(current_stack_frame_node_384,info);
    if(    !Value_386) {
        __result_obj__251 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_384) ? current_stack_frame_node_384 = come_decrement_ref_count(current_stack_frame_node_384, ((struct sNode*)current_stack_frame_node_384)->finalize, ((struct sNode*)current_stack_frame_node_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__251;
    }
    else {
    }
    come_value_389=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_389));
    method_block2_390=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 71, "struct buffer*"))));
    method_block_type_391=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value334=list$1sType$ph_operator_load_element(fun->mParamTypes,-1)))));
    /*c*/ come_call_finalizer3(__right_value334,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    class_name_398=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)(__right_value337=list$1sType$ph_operator_load_element(method_block_type_391->mParamTypes,0)))->mClass=((struct sClass*)(__right_value338=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_398)));
    /*c*/ come_call_finalizer3(__right_value337,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value338,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    current_stack_frame_struct_405=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value339=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_398)));
    /*c*/ come_call_finalizer3(__right_value339,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_391->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result_obj__264 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_384) ? current_stack_frame_node_384 = come_decrement_ref_count(current_stack_frame_node_384, ((struct sNode*)current_stack_frame_node_384)->finalize, ((struct sNode*)current_stack_frame_node_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_389,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_390,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_391,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_398 = come_decrement_ref_count(class_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__264;
    }
    result_type_406=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_391->mResultType));
    result_type_406->mStatic=(_Bool)0;
    param_types_407=method_block_type_391->mParamTypes;
    param_names_408=method_block_type_391->mParamNames;
    all_alhabet_sname_409=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 92, "struct buffer*"))));
    {
        p_410=info->sname;
        while(        *p_410) {
            if(            xisalnum(*p_410)) {
                buffer_append_char(all_alhabet_sname_409,*p_410++);
            }
            else {
                p_410++;
            }
        }
    }
    num_method_block_411=info->num_method_block;
    buffer_append_format(method_block2_390,"%s method_block%d_%s(",((char*)(__right_value343=make_type_name_string(result_type_406,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value344=buffer_to_string(all_alhabet_sname_409))));
    (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    i_412=0;
    for(    o2_saved_413=(param_types_407),it_416=list$1sType$ph_begin((o2_saved_413));    !list$1sType$ph_end((o2_saved_413));    it_416=list$1sType$ph_next((o2_saved_413))    ){
        param_type_419=it_416;
        if(        i_412==0) {
            param_name_420=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_390,"%s",((char*)(__right_value346=make_define_var(param_type_419,param_name_420,(_Bool)0,info))));
            (__right_value346 = come_decrement_ref_count(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_420 = come_decrement_ref_count(param_name_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        i_412==1) {
            param_name_421=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_390,"%s",((char*)(__right_value348=make_define_var_no_solved(param_type_419,param_name_421,(_Bool)0,(_Bool)0,info))));
            (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_421 = come_decrement_ref_count(param_name_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            param_name_422=(char*)come_increment_ref_count(xsprintf("it%d",i_412));
            buffer_append_format(method_block2_390,"%s",((char*)(__right_value350=make_define_var_no_solved(param_type_419,param_name_422,(_Bool)0,(_Bool)0,info))));
            (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_422 = come_decrement_ref_count(param_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_412!=list$1sType$ph_length(param_types_407)-1) {
            buffer_append_str(method_block2_390,",");
        }
        i_412++;
    }
    buffer_append_str(method_block2_390,")\n");
    buffer_append_str(method_block2_390,((char*)(__right_value351=buffer_to_string(method_block))));
    (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source3_423=(struct buffer*)come_increment_ref_count(info->source);
    p_424=info->p;
    head_425=info->head;
    sline_426=info->sline;
    __dec_obj75=info->source,
    info->source=(struct buffer*)come_increment_ref_count(method_block2_390);
    /*b*/ come_call_finalizer3(__dec_obj75,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_427=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_428=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_429=node_compile(node_427,info);
    if(    !Value_429) {
        __result_obj__271 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_384) ? current_stack_frame_node_384 = come_decrement_ref_count(current_stack_frame_node_384, ((struct sNode*)current_stack_frame_node_384)->finalize, ((struct sNode*)current_stack_frame_node_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_389,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_390,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_391,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_398 = come_decrement_ref_count(class_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_409,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_423,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_427) ? node_427 = come_decrement_ref_count(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__271;
    }
    else {
    }
    info->in_method_block=in_method_block_428;
    method_block_name_430=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",num_method_block_411,((char*)(__right_value353=buffer_to_string(all_alhabet_sname_409)))));
    (__right_value353 = come_decrement_ref_count(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_431=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 163, "struct CVALUE*"))));
    fun2_432=((struct sFun*)(__right_value358=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value357=__builtin_string(method_block_name_430))),((void*)0))));
    (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value358,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun2_432==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_430);
        __result_obj__276 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_384) ? current_stack_frame_node_384 = come_decrement_ref_count(current_stack_frame_node_384, ((struct sNode*)current_stack_frame_node_384)->finalize, ((struct sNode*)current_stack_frame_node_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_389,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_390,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_391,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_398 = come_decrement_ref_count(class_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_409,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_423,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_427) ? node_427 = come_decrement_ref_count(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_430 = come_decrement_ref_count(method_block_name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_431,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__276;
    }
    method_block_type2_435=fun2_432->mLambdaType;
    __dec_obj76=come_value2_431->c_value,
    come_value2_431->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_430));
    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj77=come_value2_431->type,
    come_value2_431->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_435));
    /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_431->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_431));
    __dec_obj78=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_423);
    /*b*/ come_call_finalizer3(__dec_obj78,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_424;
    info->head=head_425;
    info->sline=sline_426;
    info->current_stack_frame_struct=current_stack_frame_struct_405;
    __dec_obj79=info->come_method_block_function_result_type,
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type));
    /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    contained_method_generics_method_block_436=(_Bool)0;
    for(    o2_saved_437=(param_types_407),it_438=list$1sType$ph_begin((o2_saved_437));    !list$1sType$ph_end((o2_saved_437));    it_438=list$1sType$ph_next((o2_saved_437))    ){
        if(        is_contained_method_generics_types(it_438,info)) {
            contained_method_generics_method_block_436=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_406,info)) {
        contained_method_generics_method_block_436=(_Bool)1;
    }
    if(    contained_method_generics_method_block_436) {
        map$2char$phsFun$ph_remove(info->funcs,((char*)(__right_value362=__builtin_string(method_block_name_430))));
        (__right_value362 = come_decrement_ref_count(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__278 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((current_stack_frame_node_384) ? current_stack_frame_node_384 = come_decrement_ref_count(current_stack_frame_node_384, ((struct sNode*)current_stack_frame_node_384)->finalize, ((struct sNode*)current_stack_frame_node_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_389,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block2_390,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_type_391,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_398 = come_decrement_ref_count(class_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(all_alhabet_sname_409,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(source3_423,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_427) ? node_427 = come_decrement_ref_count(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (method_block_name_430 = come_decrement_ref_count(method_block_name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value2_431,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__278;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__249;
void* __right_value328 = (void*)0;
struct sCurrentNode* result_385;
void* __right_value329 = (void*)0;
char* __dec_obj74;
struct sCurrentNode* __result_obj__250;
    if(    self==(void*)0) {
        __result_obj__249 = (void*)0;
        return __result_obj__249;
    }
    result_385=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)) {
        result_385->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj74=result_385->sname,
        result_385->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_385->sline_real=self->sline_real;
    }
    __result_obj__250 = result_385;
    /*c*/ come_call_finalizer3(result_385,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__250;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_387;
struct list_item$1CVALUE$ph* prev_it_388;
    it_387=self->head;
    while(    it_387!=((void*)0)) {
        prev_it_388=it_387;
        it_387=it_387->next;
        /*c*/ come_call_finalizer3(prev_it_388,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_392;
int i_393;
struct sType* __result_obj__252;
struct sType* default_value_394;
struct sType* __result_obj__253;
default_value_394 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_392=self->head;
    i_393=0;
    while(    it_392!=((void*)0)) {
        if(        position==i_393) {
            __result_obj__252 = (struct sType*)come_increment_ref_count(it_392->item);
            /*c*/ come_call_finalizer3(__result_obj__252,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__252;
        }
        it_392=it_392->next;
        i_393++;
    }
    memset(&default_value_394,0,sizeof(struct sType*));
    __result_obj__253 = (struct sType*)come_increment_ref_count(default_value_394);
    /*c*/ come_call_finalizer3(default_value_394,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__253,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_395;
int i_396;
struct sType* __result_obj__254;
struct sType* default_value_397;
struct sType* __result_obj__255;
default_value_397 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_395=self->head;
    i_396=0;
    while(    it_395!=((void*)0)) {
        if(        position==i_396) {
            __result_obj__254 = (struct sType*)come_increment_ref_count(it_395->item);
            /*c*/ come_call_finalizer3(__result_obj__254,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__254;
        }
        it_395=it_395->next;
        i_396++;
    }
    memset(&default_value_397,0,sizeof(struct sType*));
    __result_obj__255 = (struct sType*)come_increment_ref_count(default_value_397);
    /*c*/ come_call_finalizer3(default_value_397,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__255,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_399;
unsigned int hash_400;
unsigned int it_401;
struct sClass* __result_obj__256;
struct sClass* __result_obj__257;
struct sClass* __result_obj__258;
struct sClass* __result_obj__259;
default_value_399 = (void*)0;
    memset(&default_value_399,0,sizeof(struct sClass*));
    hash_400=string_get_hash_key(((char*)key))%self->size;
    it_401=hash_400;
    while(    (_Bool)1) {
        if(        self->item_existance[it_401]) {
            if(            string_equals(self->keys[it_401],key)) {
                __result_obj__256 = (struct sClass*)come_increment_ref_count(self->items[it_401]);
                /*c*/ come_call_finalizer3(default_value_399,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__256,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__256;
            }
            it_401++;
            if(            it_401>=self->size) {
                it_401=0;
            }
            else if(            it_401==hash_400) {
                __result_obj__257 = (struct sClass*)come_increment_ref_count(default_value_399);
                /*c*/ come_call_finalizer3(default_value_399,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__257,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__257;
            }
        }
        else {
            __result_obj__258 = (struct sClass*)come_increment_ref_count(default_value_399);
            /*c*/ come_call_finalizer3(default_value_399,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__258,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__258;
        }
    }
    __result_obj__259 = (struct sClass*)come_increment_ref_count(default_value_399);
    /*c*/ come_call_finalizer3(default_value_399,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__259,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_402;
unsigned int hash_403;
unsigned int it_404;
struct sClass* __result_obj__260;
struct sClass* __result_obj__261;
struct sClass* __result_obj__262;
struct sClass* __result_obj__263;
default_value_402 = (void*)0;
    memset(&default_value_402,0,sizeof(struct sClass*));
    hash_403=string_get_hash_key(((char*)key))%self->size;
    it_404=hash_403;
    while(    (_Bool)1) {
        if(        self->item_existance[it_404]) {
            if(            string_equals(self->keys[it_404],key)) {
                __result_obj__260 = (struct sClass*)come_increment_ref_count(self->items[it_404]);
                /*c*/ come_call_finalizer3(default_value_402,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__260,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__260;
            }
            it_404++;
            if(            it_404>=self->size) {
                it_404=0;
            }
            else if(            it_404==hash_403) {
                __result_obj__261 = (struct sClass*)come_increment_ref_count(default_value_402);
                /*c*/ come_call_finalizer3(default_value_402,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__261,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__261;
            }
        }
        else {
            __result_obj__262 = (struct sClass*)come_increment_ref_count(default_value_402);
            /*c*/ come_call_finalizer3(default_value_402,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__262,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__262;
        }
    }
    __result_obj__263 = (struct sClass*)come_increment_ref_count(default_value_402);
    /*c*/ come_call_finalizer3(default_value_402,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_414;
struct sType* __result_obj__265;
struct sType* __result_obj__266;
struct sType* result_415;
struct sType* __result_obj__267;
result_414 = (void*)0;
result_415 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_414,0,sizeof(struct sType*));
        __result_obj__265 = result_414;
        return __result_obj__265;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__266 = self->it->item;
        return __result_obj__266;
    }
    memset(&result_415,0,sizeof(struct sType*));
    __result_obj__267 = result_415;
    return __result_obj__267;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_417;
struct sType* __result_obj__268;
struct sType* __result_obj__269;
struct sType* result_418;
struct sType* __result_obj__270;
result_417 = (void*)0;
result_418 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_417,0,sizeof(struct sType*));
        __result_obj__268 = result_417;
        return __result_obj__268;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__269 = self->it->item;
        return __result_obj__269;
    }
    memset(&result_418,0,sizeof(struct sType*));
    __result_obj__270 = result_418;
    return __result_obj__270;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_433;
unsigned int it_434;
struct sFun* __result_obj__272;
struct sFun* __result_obj__273;
struct sFun* __result_obj__274;
struct sFun* __result_obj__275;
    hash_433=string_get_hash_key(((char*)key))%self->size;
    it_434=hash_433;
    while(    (_Bool)1) {
        if(        self->item_existance[it_434]) {
            if(            string_equals(self->keys[it_434],key)) {
                __result_obj__272 = (struct sFun*)come_increment_ref_count(self->items[it_434]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__272,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__272;
            }
            it_434++;
            if(            it_434>=self->size) {
                it_434=0;
            }
            else if(            it_434==hash_433) {
                __result_obj__273 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__273,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__273;
            }
        }
        else {
            __result_obj__274 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__274,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__274;
        }
    }
    __result_obj__275 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__275,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
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

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_439;
unsigned int it_440;
struct map$2char$phsFun$ph* __result_obj__277;
    hash_439=string_get_hash_key(((char*)key))%self->size;
    it_440=hash_439;
    while(    (_Bool)1) {
        if(        self->item_existance[it_440]) {
            if(            string_equals(self->keys[it_440],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_440]);
                self->item_existance[it_440]=(_Bool)0;
                if(                1) {
                    (self->keys[it_440] = come_decrement_ref_count(self->keys[it_440], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_440]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_440],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_440]=((void*)0);
                self->len--;
                break;
            }
            it_440++;
            if(            it_440>=self->size) {
                it_440=0;
            }
            else if(            it_440==hash_439) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__277 = self;
    return __result_obj__277;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, _Bool guard_break, struct sInfo* info){
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value365 = (void*)0;
char* __dec_obj81;
void* __right_value376 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj87;
void* __right_value377 = (void*)0;
struct buffer* __dec_obj88;
void* __right_value378 = (void*)0;
struct list$1sType$ph* __dec_obj89;
struct sMethodCallNode* __result_obj__285;
    ((struct sNodeBase*)(__right_value363=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value363,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj80=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj));
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj81=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj87=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj87,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj88=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(method_block));
    /*b*/ come_call_finalizer3(__dec_obj88,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj89=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_generics_types));
    /*b*/ come_call_finalizer3(__dec_obj89,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    self->guard_break=guard_break;
    __result_obj__285 = (struct sMethodCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__285,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __right_value379 = (void*)0;
char* __result_obj__286;
    __result_obj__286 = (char*)come_increment_ref_count(((char*)(__right_value379=__builtin_string("sMethodCallNode"))));
    (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__286 = come_decrement_ref_count(__result_obj__286, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__286;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_451;
struct list$1tuple2$2char$phsNode$ph$ph* params_452;
struct sNode* obj_453;
struct buffer* method_block_454;
int method_block_sline_455;
_Bool no_infference_method_generics_456;
struct list$1sType$ph* method_generics_types_457;
_Bool recursive_458;
struct list$1sType$ph* method_generics_types_before_459;
struct list$1sType$ph* __dec_obj90;
void* __right_value380 = (void*)0;
struct list$1sType$ph* __dec_obj91;
_Bool Value_460;
_Bool __result_obj__287;
void* __right_value381 = (void*)0;
struct CVALUE* obj_value_461;
void* __right_value382 = (void*)0;
struct sType* obj_type_462;
_Bool no_output_come_code_463;
struct sType* type_464;
void* __right_value383 = (void*)0;
char* none_generics_name_465;
void* __right_value384 = (void*)0;
char* fun_name2_466;
void* __right_value385 = (void*)0;
char* fun_name3_467;
void* __right_value386 = (void*)0;
struct sGenericsFun* generics_fun_468;
_Bool method_generics_469;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_470=0;
struct sGenericsFun* gfun_471=0;
char* generics_fun_name_472;
void* __right_value389 = (void*)0;
struct sFun* fun_473;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct list$1CVALUE$ph* come_params_474;
_Bool no_output_come_code_475;
_Bool __result_obj__289;
void* __right_value392 = (void*)0;
struct CVALUE* method_block_node_476;
void* __right_value393 = (void*)0;
struct sType* method_block_lambda_type_483;
void* __right_value394 = (void*)0;
struct sType* method_block_result_type_484;
void* __right_value395 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_485;
struct sType* generics_fun_method_block_result_type_486;
int method_generics_num_487;
void* __right_value399 = (void*)0;
int n_496;
struct list$1sType$ph* o2_saved_497;
struct sType* it_498;
int method_generics_num_499;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1CVALUE$ph* come_params_500;
int i_501;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_502;
struct tuple2$2char$phsNode$ph* it_505;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* label_508=0;
struct sNode* node_509=0;
_Bool Value_510;
_Bool __result_obj__303;
void* __right_value404 = (void*)0;
struct CVALUE* come_value_511;
void* __right_value405 = (void*)0;
struct sType* __dec_obj96;
int method_generics_num_512;
void* __right_value406 = (void*)0;
struct list$1sType$ph* o2_saved_513;
struct sType* it_514;
int method_generics_num_515;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1CVALUE$ph* come_params_516;
int i_517;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_518;
struct tuple2$2char$phsNode$ph* it_519;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* label_520=0;
struct sNode* node_521=0;
_Bool Value_522;
_Bool __result_obj__304;
void* __right_value411 = (void*)0;
struct CVALUE* come_value_523;
void* __right_value412 = (void*)0;
struct sType* __dec_obj97;
int method_generics_num_524;
void* __right_value413 = (void*)0;
int n_525;
struct list$1sType$ph* o2_saved_526;
struct sType* it_527;
int method_generics_num_528;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sClass* klass_529;
_Bool calling_dynamic_method_530;
struct sType* lambda_type_531;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_532;
struct tuple2$2char$phsType$ph* it_535;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* field_name_538=0;
struct sType* field_type_539=0;
void* __right_value416 = (void*)0;
struct sType* result_type_540;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1CVALUE$ph* come_params_541;
int i_542;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_543;
struct tuple2$2char$phsNode$ph* it_544;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* label_545=0;
struct sNode* node_546=0;
_Bool Value_547;
_Bool __result_obj__311;
void* __right_value419 = (void*)0;
struct CVALUE* come_value_548;
void* __right_value420 = (void*)0;
struct sType* __dec_obj98;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
_Bool _if_conditional2;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct buffer* buf_549;
int j_550;
struct list$1CVALUE$ph* o2_saved_551;
struct CVALUE* it_554;
void* __right_value429 = (void*)0;
char* __dec_obj99;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct CVALUE* come_value2_557;
void* __right_value432 = (void*)0;
char* __dec_obj100;
void* __right_value433 = (void*)0;
struct sType* result_type2_558;
void* __right_value434 = (void*)0;
struct sType* __dec_obj101;
_Bool __result_obj__318;
struct list$1sType$ph* __dec_obj102;
struct sGenericsFun* generics_fun_559;
char* generics_fun_name_560;
struct sFun* fun_561;
void* __right_value435 = (void*)0;
char* __dec_obj103;
struct sClass* klass_562;
void* __right_value436 = (void*)0;
_Bool _while_condtional1;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
char* __dec_obj104;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var7 = (void*)0;
char* name_563=0;
struct sGenericsFun* gfun_564=0;
char* __dec_obj105;
void* __right_value443 = (void*)0;
char* none_generics_name_565;
void* __right_value444 = (void*)0;
char* fun_name3_566;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_567=0;
struct sGenericsFun* gfun_568=0;
char* __dec_obj106;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var9 = (void*)0;
char* name_569=0;
struct sGenericsFun* gfun_570=0;
char* __dec_obj107;
int i_571;
void* __right_value449 = (void*)0;
char* new_fun_name_572;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
char* __dec_obj108;
struct sType* obj_array_type_579;
void* __right_value454 = (void*)0;
char* array_method_name_580;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
char* __dec_obj109;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
char* __dec_obj110;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
char* __dec_obj111;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sClass* klass_581;
void* __right_value470 = (void*)0;
_Bool _while_condtional2;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
char* __dec_obj112;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var10 = (void*)0;
struct sFun* fun2_582=0;
char* real_fun_name_583=0;
char* __dec_obj113;
void* __right_value476 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var11 = (void*)0;
struct sFun* fun2_584=0;
char* real_fun_name_585=0;
void* __right_value477 = (void*)0;
char* __dec_obj114;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
char* original_obj_type_fun_name_586;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
char* __dec_obj115;
void* __right_value482 = (void*)0;
struct sType* result_type_587;
void* __right_value483 = (void*)0;
struct sType* __dec_obj116;
void* __right_value484 = (void*)0;
struct sType* result_type2_588;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1sType$ph* param_types_589;
struct list$1sType$ph* o2_saved_590;
struct sType* it_591;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* it2_592;
struct sType* no_solved_obj_type_593;
void* __right_value489 = (void*)0;
struct sType* it3_594;
void* __right_value490 = (void*)0;
struct list$1sType$ph* type_checking_param_types_595;
int n_596;
struct list$1sType$ph* o2_saved_597;
struct sType* it_598;
struct sType* no_solved_obj_type_599;
void* __right_value491 = (void*)0;
struct sType* it3_600;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1CVALUE$ph* come_params_601;
int i_602;
_Bool first_param_606;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_607;
struct tuple2$2char$phsNode$ph* it_608;
struct tuple2$2char$phsNode$ph* multiple_assign_var12 = (void*)0;
char* label_609=0;
struct sNode* node_610=0;
int n_611;
struct list$1char$ph* o2_saved_612;
char* it_613;
_Bool Value_614;
_Bool __result_obj__328;
void* __right_value497 = (void*)0;
struct CVALUE* come_value_615;
void* __right_value498 = (void*)0;
struct sType* __dec_obj120;
void* __right_value499 = (void*)0;
_Bool _if_conditional3;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
_Bool _if_conditional4;
void* __right_value506 = (void*)0;
int i_621;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_622;
struct tuple2$2char$phsNode$ph* it_623;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_624=0;
struct sNode* node_625=0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
_Bool _if_conditional5;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
_Bool _elif_conditional1;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
_Bool _if_conditional6;
_Bool Value_632;
_Bool __result_obj__335;
void* __right_value516 = (void*)0;
struct CVALUE* come_value_633;
void* __right_value517 = (void*)0;
struct sType* __dec_obj122;
void* __right_value518 = (void*)0;
_Bool _if_conditional7;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
_Bool _if_conditional8;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
_Bool _if_conditional9;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
char* default_param_634;
void* __right_value529 = (void*)0;
char* param_name_635;
void* __right_value530 = (void*)0;
_Bool _if_conditional10;
struct buffer* source_636;
char* p_637;
char* head_638;
int sline_639;
void* __right_value531 = (void*)0;
struct buffer* __dec_obj123;
void* __right_value532 = (void*)0;
struct sNode* node_640;
_Bool Value_641;
_Bool __result_obj__336;
struct buffer* __dec_obj124;
void* __right_value533 = (void*)0;
struct CVALUE* come_value_642;
void* __right_value534 = (void*)0;
struct sType* __dec_obj125;
void* __right_value535 = (void*)0;
_Bool _if_conditional11;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
_Bool _if_conditional12;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
_Bool _if_conditional13;
_Bool __result_obj__337;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct buffer* buf_643;
char* saved_obj_value_644;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
char* var_name_646;
void* __right_value548 = (void*)0;
char* __dec_obj126;
int j_647;
struct list$1CVALUE$ph* o2_saved_648;
struct CVALUE* it_649;
int j_650;
struct list$1CVALUE$ph* o2_saved_651;
struct CVALUE* it_652;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct CVALUE* come_value2_653;
void* __right_value551 = (void*)0;
char* __dec_obj127;
void* __right_value552 = (void*)0;
struct sType* __dec_obj128;
void* __right_value553 = (void*)0;
char* __dec_obj129;
void* __right_value554 = (void*)0;
struct list$1sType$ph* __dec_obj130;
_Bool __result_obj__338;
    fun_name_451=(char*)come_increment_ref_count(self->fun_name);
    params_452=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj_453=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_454=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_455=self->method_block_sline;
    no_infference_method_generics_456=self->no_infference_method_generics;
    method_generics_types_457=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types);
    recursive_458=self->recursive;
    method_generics_types_before_459=((void*)0);
    __dec_obj90=method_generics_types_before_459,
    method_generics_types_before_459=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj90,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj91=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
    /*b*/ come_call_finalizer3(__dec_obj91,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    Value_460=node_compile(obj_453,info);
    if(    !Value_460) {
        __result_obj__287 = (_Bool)0;
        (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__287;
    }
    else {
    }
    obj_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    obj_type_462=(struct sType*)come_increment_ref_count(sType_clone(obj_value_461->type));
    if(    !no_infference_method_generics_456) {
        no_output_come_code_463=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_464=(struct sType*)come_increment_ref_count(obj_type_462);
        none_generics_name_465=(char*)come_increment_ref_count(get_none_generics_name(type_464->mClass->mName));
        fun_name2_466=(char*)come_increment_ref_count(create_method_name(type_464,(_Bool)0,fun_name_451,info,(_Bool)1));
        fun_name3_467=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_465,fun_name_451));
        generics_fun_468=((struct sGenericsFun*)(__right_value386=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_467,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value386,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_468) {
            method_generics_469=list$1char$ph_length(generics_fun_468->mMethodGenericsTypeNames)>0;
            if(            method_generics_469&&list$1sType$ph_length(info->method_generics_types)==0) {
                multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value388=make_generics_function(obj_type_462,(char*)come_increment_ref_count(__builtin_string(fun_name_451)),info,(_Bool)1)));
                name_470=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                gfun_471=multiple_assign_var2->v2;
                /*c*/ come_call_finalizer3(__right_value388,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_name_472=(char*)come_increment_ref_count(name_470);
                fun_473=((struct sFun*)(__right_value389=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_472,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value389,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_params_474=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 290, "struct list$1CVALUE$ph*"))));
                if(                method_block_454) {
                    no_output_come_code_475=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_454,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_474),fun_473,fun_name3_467,method_block_sline_455,info,(_Bool)1)) {
                        __result_obj__289 = (_Bool)0;
                        (name_470 = come_decrement_ref_count(name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_472 = come_decrement_ref_count(generics_fun_name_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_params_474,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_464,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (none_generics_name_465 = come_decrement_ref_count(none_generics_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name2_466 = come_decrement_ref_count(fun_name2_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name3_467 = come_decrement_ref_count(fun_name3_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__289;
                    }
                    info->no_output_come_code=no_output_come_code_475;
                    method_block_node_476=((struct CVALUE*)(__right_value392=list$1CVALUE$ph_operator_load_element(come_params_474,-1)));
                    /*c*/ come_call_finalizer3(__right_value392,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    method_block_lambda_type_483=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_476->type));
                    method_block_result_type_484=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_485=((struct sType*)(__right_value395=list$1sType$ph_operator_load_element(generics_fun_468->mParamTypes,-1)));
                    /*c*/ come_call_finalizer3(__right_value395,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    generics_fun_method_block_result_type_486=generics_fun_method_block_lambda_type_485->mResultType;
                    if(                    generics_fun_method_block_result_type_486->mClass->mMethodGenerics) {
                        method_generics_num_487=generics_fun_method_block_result_type_486->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_487,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_484)));
                    }
                    n_496=0;
                    for(                    o2_saved_497=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_485->mParamTypes)),it_498=list$1sType$ph_begin((o2_saved_497));                    !list$1sType$ph_end((o2_saved_497));                    it_498=list$1sType$ph_next((o2_saved_497))                    ){
                        if(                        it_498->mClass->mMethodGenerics) {
                            method_generics_num_499=it_498->mClass->mMethodGenericsNum;
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_499,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value400=list$1sType$ph_operator_load_element(method_block_lambda_type_483->mParamTypes,n_496))))));
                            /*c*/ come_call_finalizer3(__right_value400,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        n_496++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_497,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_params_500=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 319, "struct list$1CVALUE$ph*"))));
                    i_501=0;
                    for(                    o2_saved_502=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_452)),it_505=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_502));                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_502));                    it_505=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_502))                    ){
                        multiple_assign_var3=it_505;
                        label_508=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        node_509=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(                        i_501==0) {
                            list$1CVALUE$ph_push_back(come_params_500,(struct CVALUE*)come_increment_ref_count(obj_value_461));
                            i_501++;
                        }
                        else {
                            Value_510=node_compile(node_509,info);
                            if(                            !Value_510) {
                                __result_obj__303 = (_Bool)0;
                                (label_508 = come_decrement_ref_count(label_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_509) ? node_509 = come_decrement_ref_count(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(o2_saved_502,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_block_lambda_type_483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_block_result_type_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_500,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (name_470 = come_decrement_ref_count(name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_472 = come_decrement_ref_count(generics_fun_name_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(come_params_474,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_464,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (none_generics_name_465 = come_decrement_ref_count(none_generics_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_466 = come_decrement_ref_count(fun_name2_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_467 = come_decrement_ref_count(fun_name3_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__303;
                            }
                            else {
                            }
                            come_value_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            __dec_obj96=come_value_511->type,
                            come_value_511->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_511->type,info->generics_type,info));
                            /*b*/ come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            list$1CVALUE$ph_push_back(come_params_500,(struct CVALUE*)come_increment_ref_count(come_value_511));
                            /*c*/ come_call_finalizer3(come_value_511,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        (label_508 = come_decrement_ref_count(label_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_509) ? node_509 = come_decrement_ref_count(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_502,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    generics_fun_468->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_512=generics_fun_468->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_512,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                        }
                    }
                    n_496=0;
                    for(                    o2_saved_513=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_468->mParamTypes)),it_514=list$1sType$ph_begin((o2_saved_513));                    !list$1sType$ph_end((o2_saved_513));                    it_514=list$1sType$ph_next((o2_saved_513))                    ){
                        if(                        it_514->mClass->mMethodGenerics) {
                            method_generics_num_515=it_514->mClass->mMethodGenericsNum;
                            if(                            n_496<list$1CVALUE$ph_length(come_params_500)) {
                                list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_515,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value407=list$1CVALUE$ph_operator_load_element(come_params_500,n_496)))->type)));
                                /*c*/ come_call_finalizer3(__right_value407,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            }
                        }
                        n_496++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_513,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_block_lambda_type_483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_block_result_type_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_500,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    come_params_516=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 358, "struct list$1CVALUE$ph*"))));
                    i_517=0;
                    for(                    o2_saved_518=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_452)),it_519=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_518));                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_518));                    it_519=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_518))                    ){
                        multiple_assign_var4=it_519;
                        label_520=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                        node_521=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                        if(                        i_517==0) {
                            list$1CVALUE$ph_push_back(come_params_516,(struct CVALUE*)come_increment_ref_count(obj_value_461));
                            i_517++;
                        }
                        else {
                            Value_522=node_compile(node_521,info);
                            if(                            !Value_522) {
                                __result_obj__304 = (_Bool)0;
                                (label_520 = come_decrement_ref_count(label_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_521) ? node_521 = come_decrement_ref_count(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(o2_saved_518,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_516,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (name_470 = come_decrement_ref_count(name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_472 = come_decrement_ref_count(generics_fun_name_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(come_params_474,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_464,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (none_generics_name_465 = come_decrement_ref_count(none_generics_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_466 = come_decrement_ref_count(fun_name2_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_467 = come_decrement_ref_count(fun_name3_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__304;
                            }
                            else {
                            }
                            come_value_523=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            __dec_obj97=come_value_523->type,
                            come_value_523->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_523->type,info->generics_type,info));
                            /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            list$1CVALUE$ph_push_back(come_params_516,(struct CVALUE*)come_increment_ref_count(come_value_523));
                            /*c*/ come_call_finalizer3(come_value_523,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        (label_520 = come_decrement_ref_count(label_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_521) ? node_521 = come_decrement_ref_count(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_518,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    generics_fun_468->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_524=generics_fun_468->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_524,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                        }
                    }
                    n_525=0;
                    for(                    o2_saved_526=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_468->mParamTypes)),it_527=list$1sType$ph_begin((o2_saved_526));                    !list$1sType$ph_end((o2_saved_526));                    it_527=list$1sType$ph_next((o2_saved_526))                    ){
                        if(                        it_527->mClass->mMethodGenerics) {
                            method_generics_num_528=it_527->mClass->mMethodGenericsNum;
                            if(                            n_525<list$1CVALUE$ph_length(come_params_516)) {
                                list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_528,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value414=list$1CVALUE$ph_operator_load_element(come_params_516,n_525)))->type)));
                                /*c*/ come_call_finalizer3(__right_value414,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            }
                        }
                        n_525++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_526,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_516,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_472);
                (name_470 = come_decrement_ref_count(name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_472 = come_decrement_ref_count(generics_fun_name_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_params_474,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_463;
        /*c*/ come_call_finalizer3(type_464,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (none_generics_name_465 = come_decrement_ref_count(none_generics_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name2_466 = come_decrement_ref_count(fun_name2_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name3_467 = come_decrement_ref_count(fun_name3_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    klass_529=obj_type_462->mClass;
    calling_dynamic_method_530=(_Bool)0;
    lambda_type_531=((void*)0);
    for(    o2_saved_532=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_529->mFields)),it_535=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_532));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_532));    it_535=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_532))    ){
        multiple_assign_var5=it_535;
        field_name_538=(char*)come_increment_ref_count(multiple_assign_var5->v1);
        field_type_539=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
        if(        string_operator_equals(field_name_538,fun_name_451)&&string_operator_equals(field_type_539->mClass->mName,"lambda")) {
            calling_dynamic_method_530=(_Bool)1;
            lambda_type_531=field_type_539;
            (field_name_538 = come_decrement_ref_count(field_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_539,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            break;
        }
        (field_name_538 = come_decrement_ref_count(field_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type_539,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_532,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    calling_dynamic_method_530) {
        result_type_540=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_531->mResultType));
        result_type_540->mStatic=(_Bool)0;
        come_params_541=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 421, "struct list$1CVALUE$ph*"))));
        i_542=0;
        for(        o2_saved_543=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_452)),it_544=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_543));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_543));        it_544=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_543))        ){
            multiple_assign_var6=it_544;
            label_545=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_546=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            if(            i_542==0) {
                list$1CVALUE$ph_push_back(come_params_541,(struct CVALUE*)come_increment_ref_count(obj_value_461));
                i_542++;
            }
            else {
                Value_547=node_compile(node_546,info);
                if(                !Value_547) {
                    __result_obj__311 = (_Bool)0;
                    (label_545 = come_decrement_ref_count(label_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_546) ? node_546 = come_decrement_ref_count(node_546, ((struct sNode*)node_546)->finalize, ((struct sNode*)node_546)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_543,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_540,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_541,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__311;
                }
                else {
                }
                come_value_548=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj98=come_value_548->type,
                come_value_548->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_548->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                check_assign_type(((char*)(__right_value423=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value421=string_to_string(fun_name_451))),((char*)(__right_value422=int_to_string(i_542)))))),((struct sType*)(__right_value424=list$1sType$ph_operator_load_element(lambda_type_531->mParamTypes,i_542-1))),come_value_548->type,come_value_548,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value421 = come_decrement_ref_count(__right_value421, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value422 = come_decrement_ref_count(__right_value422, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value423 = come_decrement_ref_count(__right_value423, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value424,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                (_if_conditional2=(((struct sType*)(__right_value425=list$1sType$ph_operator_load_element(lambda_type_531->mParamTypes,i_542-1)))->mHeap&&come_value_548->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value425,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)(__right_value426=list$1sType$ph_operator_load_element(lambda_type_531->mParamTypes,i_542-1))),come_value_548->type,come_value_548,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value426,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_push_back(come_params_541,(struct CVALUE*)come_increment_ref_count(come_value_548));
                i_542++;
                /*c*/ come_call_finalizer3(come_value_548,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (label_545 = come_decrement_ref_count(label_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_546) ? node_546 = come_decrement_ref_count(node_546, ((struct sNode*)node_546)->finalize, ((struct sNode*)node_546)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_543,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buf_549=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 452, "struct buffer*"))));
        buffer_append_format(buf_549,"%s->%s",obj_value_461->c_value,fun_name_451);
        buffer_append_str(buf_549,"(");
        j_550=0;
        for(        o2_saved_551=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_541)),it_554=list$1CVALUE$ph_begin((o2_saved_551));        !list$1CVALUE$ph_end((o2_saved_551));        it_554=list$1CVALUE$ph_next((o2_saved_551))        ){
            if(            j_550==0) {
                __dec_obj99=it_554->c_value,
                it_554->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_554->c_value));
                __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            buffer_append_str(buf_549,it_554->c_value);
            if(            j_550!=list$1CVALUE$ph_length(come_params_541)-1) {
                buffer_append_str(buf_549,",");
            }
            j_550++;
        }
        /*c*/ come_call_finalizer3(o2_saved_551,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_549,")");
        come_value2_557=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 472, "struct CVALUE*"))));
        __dec_obj100=come_value2_557->c_value,
        come_value2_557->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_549));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        result_type2_558=(struct sType*)come_increment_ref_count(solve_generics(result_type_540,info->generics_type,info));
        __dec_obj101=come_value2_557->type,
        come_value2_557->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_558));
        /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_557->type->mStatic=(_Bool)0;
        come_value2_557->var=((void*)0);
        if(        self->guard_break&&!result_type2_558->mException) {
            err_msg(info,"Invalid guard break");
            __result_obj__318 = (_Bool)0;
            /*c*/ come_call_finalizer3(result_type_540,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_541,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_549,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_value2_557,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type2_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__318;
        }
        if(        result_type2_558->mHeap) {
            append_object_to_right_values2(come_value2_557,(struct sType*)come_increment_ref_count(result_type2_558),info,(_Bool)0,((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value2_557->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_557));
        /*c*/ come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj102=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_459);
        /*b*/ come_call_finalizer3(__dec_obj102,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=((void*)0);
        /*c*/ come_call_finalizer3(result_type_540,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_541,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_549,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_557,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        generics_fun_559=((void*)0);
        generics_fun_name_560=((void*)0);
        fun_561=((void*)0);
        if(        string_operator_equals(fun_name_451,"super")) {
            __dec_obj103=fun_name_451,
            fun_name_451=(char*)come_increment_ref_count(create_non_method_name(obj_type_462,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            klass_562=obj_type_462->mClass;
            while(            (_while_condtional1=(((struct sClass*)(__right_value436=map$2char$phsClass$ph_operator_load_element(info->classes,klass_562->mParentClassName))))),            /*c*/ come_call_finalizer3(__right_value436,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _while_condtional1) {
                klass_562=((struct sClass*)(__right_value437=map$2char$phsClass$ph_operator_load_element(info->classes,klass_562->mParentClassName)));
                /*c*/ come_call_finalizer3(__right_value437,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj104=generics_fun_name_560,
                generics_fun_name_560=(char*)come_increment_ref_count(create_method_name_using_class(klass_562,(_Bool)0,fun_name_451,info,(_Bool)1));
                __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                fun_561=((struct sFun*)(__right_value440=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value439=__builtin_string(generics_fun_name_560))),((void*)0))));
                (__right_value439 = come_decrement_ref_count(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value440,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_561) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_462&&obj_type_462->mNoSolvedGenericsType&&list$1sType$ph_length(obj_type_462->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var7=((struct tuple2$2char$phsGenericsFun$p*)(__right_value442=make_generics_function(obj_type_462,(char*)come_increment_ref_count(__builtin_string(fun_name_451)),info,(_Bool)1)));
                name_563=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                gfun_564=multiple_assign_var7->v2;
                /*c*/ come_call_finalizer3(__right_value442,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj105=generics_fun_name_560,
                generics_fun_name_560=(char*)come_increment_ref_count(name_563);
                __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                generics_fun_559=gfun_564;
                (name_563 = come_decrement_ref_count(name_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            list$1sType$ph_length(info->method_generics_types)>0) {
                none_generics_name_565=(char*)come_increment_ref_count(get_none_generics_name(obj_type_462->mClass->mName));
                fun_name3_566=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_565,fun_name_451));
                multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value446=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_566)),(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types),info)));
                name_567=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                gfun_568=multiple_assign_var8->v2;
                /*c*/ come_call_finalizer3(__right_value446,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj106=generics_fun_name_560,
                generics_fun_name_560=(char*)come_increment_ref_count(name_567);
                __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                generics_fun_559=gfun_568;
                (none_generics_name_565 = come_decrement_ref_count(none_generics_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_566 = come_decrement_ref_count(fun_name3_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_567 = come_decrement_ref_count(name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var9=((struct tuple2$2char$phsGenericsFun$p*)(__right_value448=make_generics_function(obj_type_462,(char*)come_increment_ref_count(__builtin_string(fun_name_451)),info,(_Bool)1)));
                name_569=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                gfun_570=multiple_assign_var9->v2;
                /*c*/ come_call_finalizer3(__right_value448,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj107=generics_fun_name_560,
                generics_fun_name_560=(char*)come_increment_ref_count(name_569);
                __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                generics_fun_559=gfun_570;
                (name_569 = come_decrement_ref_count(name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            for(            i_571=128;            i_571>=1;            i_571--            ){
                new_fun_name_572=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_560,i_571));
                fun_561=((struct sFun*)(__right_value452=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value451=__builtin_string(new_fun_name_572))))));
                (__right_value450 = come_decrement_ref_count(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value451 = come_decrement_ref_count(__right_value451, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value452,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_561!=((void*)0)) {
                    __dec_obj108=generics_fun_name_560,
                    generics_fun_name_560=(char*)come_increment_ref_count(__builtin_string(new_fun_name_572));
                    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    (new_fun_name_572 = come_decrement_ref_count(new_fun_name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_572 = come_decrement_ref_count(new_fun_name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            fun_561==((void*)0)) {
                obj_array_type_579=obj_type_462->mOriginalLoadVarType;
                if(                obj_array_type_579&&list$1sNode$ph_length(obj_array_type_579->mArrayNum)>0) {
                    array_method_name_580=(char*)come_increment_ref_count(create_method_name(obj_array_type_579,(_Bool)0,fun_name_451,info,(_Bool)0));
                    fun_561=((struct sFun*)(__right_value456=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value455=__builtin_string(array_method_name_580))),((void*)0))));
                    (__right_value455 = come_decrement_ref_count(__right_value455, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value456,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    fun_561) {
                        __dec_obj109=generics_fun_name_560,
                        generics_fun_name_560=(char*)come_increment_ref_count(__builtin_string(array_method_name_580));
                        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                    else {
                        fun_561=((struct sFun*)(__right_value459=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value458=__builtin_string(generics_fun_name_560))),((void*)0))));
                        (__right_value458 = come_decrement_ref_count(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value459,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        fun_561==((void*)0)) {
                            __dec_obj110=generics_fun_name_560,
                            generics_fun_name_560=(char*)come_increment_ref_count(create_method_name(obj_type_462,(_Bool)0,((char*)(__right_value460=__builtin_string(fun_name_451))),info,(_Bool)1));
                            __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            (__right_value460 = come_decrement_ref_count(__right_value460, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_561=((struct sFun*)(__right_value463=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value462=__builtin_string(generics_fun_name_560))),((void*)0))));
                            (__right_value462 = come_decrement_ref_count(__right_value462, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(__right_value463,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            if(                            fun_561==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)",generics_fun_name_560,info->come_fun->mName);
                            }
                        }
                    }
                    (array_method_name_580 = come_decrement_ref_count(array_method_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    fun_561=((struct sFun*)(__right_value465=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value464=__builtin_string(generics_fun_name_560))),((void*)0))));
                    (__right_value464 = come_decrement_ref_count(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value465,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    fun_561==((void*)0)) {
                        __dec_obj111=generics_fun_name_560,
                        generics_fun_name_560=(char*)come_increment_ref_count(create_method_name(obj_type_462,(_Bool)0,((char*)(__right_value466=__builtin_string(fun_name_451))),info,(_Bool)1));
                        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        (__right_value466 = come_decrement_ref_count(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        fun_561=((struct sFun*)(__right_value469=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value468=__builtin_string(generics_fun_name_560))),((void*)0))));
                        (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value469,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        fun_561==((void*)0)) {
                            klass_581=obj_type_462->mClass;
                            while(                            (_while_condtional2=(((struct sClass*)(__right_value470=map$2char$phsClass$ph_operator_load_element(info->classes,klass_581->mParentClassName))))),                            /*c*/ come_call_finalizer3(__right_value470,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _while_condtional2) {
                                klass_581=((struct sClass*)(__right_value471=map$2char$phsClass$ph_operator_load_element(info->classes,klass_581->mParentClassName)));
                                /*c*/ come_call_finalizer3(__right_value471,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                __dec_obj112=generics_fun_name_560,
                                generics_fun_name_560=(char*)come_increment_ref_count(create_method_name_using_class(klass_581,(_Bool)0,fun_name_451,info,(_Bool)1));
                                __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                                fun_561=((struct sFun*)(__right_value474=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value473=__builtin_string(generics_fun_name_560))),((void*)0))));
                                (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(__right_value474,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                if(                                fun_561) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_561==((void*)0)&&string_operator_equals(fun_name_451,"to_string")) {
                            multiple_assign_var10=((struct tuple2$2sFun$pchar$ph*)(__right_value475=create_to_string_automatically(obj_type_462,fun_name_451,info)));
                            fun2_582=multiple_assign_var10->v1;
                            real_fun_name_583=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                            /*c*/ come_call_finalizer3(__right_value475,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            fun_561=fun2_582;
                            __dec_obj113=generics_fun_name_560,
                            generics_fun_name_560=(char*)come_increment_ref_count(real_fun_name_583);
                            __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            (real_fun_name_583 = come_decrement_ref_count(real_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_561==((void*)0)&&string_operator_equals(fun_name_451,"equals")) {
                            multiple_assign_var11=((struct tuple2$2sFun$pchar$ph*)(__right_value476=create_equals_automatically(obj_type_462,fun_name_451,info)));
                            fun2_584=multiple_assign_var11->v1;
                            real_fun_name_585=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                            /*c*/ come_call_finalizer3(__right_value476,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            fun_561=((struct sFun*)(__right_value477=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_585)));
                            /*c*/ come_call_finalizer3(__right_value477,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            __dec_obj114=generics_fun_name_560,
                            generics_fun_name_560=(char*)come_increment_ref_count(real_fun_name_585);
                            __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            (real_fun_name_585 = come_decrement_ref_count(real_fun_name_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_561==((void*)0)) {
                            original_obj_type_fun_name_586=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_462,(_Bool)0,((char*)(__right_value478=__builtin_string(fun_name_451))),info,(_Bool)1));
                            (__right_value478 = come_decrement_ref_count(__right_value478, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_561=((struct sFun*)(__right_value481=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value480=__builtin_string(original_obj_type_fun_name_586))),((void*)0))));
                            (__right_value480 = come_decrement_ref_count(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(__right_value481,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            if(                            fun_561) {
                                __dec_obj115=generics_fun_name_560,
                                generics_fun_name_560=(char*)come_increment_ref_count(original_obj_type_fun_name_586);
                                __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                            (original_obj_type_fun_name_586 = come_decrement_ref_count(original_obj_type_fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_561==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)",generics_fun_name_560,info->come_fun->mName);
                        }
                    }
                }
            }
        }
        if(        fun_561==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)",generics_fun_name_560,info->come_fun->mName);
        }
        if(        list$1sType$ph_length(fun_561->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
        }
        result_type_587=(struct sType*)come_increment_ref_count(sType_clone(fun_561->mResultType));
        __dec_obj116=result_type_587,
        result_type_587=(struct sType*)come_increment_ref_count(solve_generics(result_type_587,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_587->mStatic=(_Bool)0;
        result_type2_588=(struct sType*)come_increment_ref_count(solve_generics(result_type_587,info->generics_type,info));
        param_types_589=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 646, "struct list$1sType$ph*"))));
        for(        o2_saved_590=(struct list$1sType$ph*)come_increment_ref_count((fun_561->mParamTypes)),it_591=list$1sType$ph_begin((o2_saved_590));        !list$1sType$ph_end((o2_saved_590));        it_591=list$1sType$ph_next((o2_saved_590))        ){
            if(            it_591==((void*)0)) {
                list$1sType$ph_push_back(param_types_589,(struct sType*)come_increment_ref_count(sType_clone(it_591)));
            }
            else {
                it2_592=(struct sType*)come_increment_ref_count(solve_generics(it_591,info->generics_type,info));
                no_solved_obj_type_593=(struct sType*)come_increment_ref_count(obj_type_462->mNoSolvedGenericsType);
                it3_594=(struct sType*)come_increment_ref_count(solve_generics(it_591,no_solved_obj_type_593,info));
                list$1sType$ph_push_back(param_types_589,(struct sType*)come_increment_ref_count(it2_592));
                /*c*/ come_call_finalizer3(it2_592,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(no_solved_obj_type_593,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(it3_594,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(o2_saved_590,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type_checking_param_types_595=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types_589));
        if(        generics_fun_559) {
            n_596=0;
            for(            o2_saved_597=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_559->mParamTypes)),it_598=list$1sType$ph_begin((o2_saved_597));            !list$1sType$ph_end((o2_saved_597));            it_598=list$1sType$ph_next((o2_saved_597))            ){
                if(                it_598==((void*)0)) {
                }
                else {
                    no_solved_obj_type_599=(struct sType*)come_increment_ref_count(obj_type_462->mNoSolvedGenericsType);
                    it3_600=(struct sType*)come_increment_ref_count(solve_generics(it_598,no_solved_obj_type_599,info));
                    /*c*/ come_call_finalizer3(no_solved_obj_type_599,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(it3_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                n_596++;
            }
            /*c*/ come_call_finalizer3(o2_saved_597,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        come_params_601=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 676, "struct list$1CVALUE$ph*"))));
        for(        i_602=0;        i_602<list$1sType$ph_length(fun_561->mParamTypes)-(((method_block_454)?(2):(0)));        i_602++        ){
            list$1CVALUE$ph_add(come_params_601,((void*)0));
        }
        first_param_606=(_Bool)1;
        for(        o2_saved_607=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_452)),it_608=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_607));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_607));        it_608=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_607))        ){
            multiple_assign_var12=it_608;
            label_609=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            node_610=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            first_param_606) {
                first_param_606=(_Bool)0;
            }
            else if(            label_609) {
                n_611=0;
                for(                o2_saved_612=(struct list$1char$ph*)come_increment_ref_count((fun_561->mParamNames)),it_613=list$1char$ph_begin((o2_saved_612));                !list$1char$ph_end((o2_saved_612));                it_613=list$1char$ph_next((o2_saved_612))                ){
                    if(                    string_operator_equals(label_609,it_613)) {
                        break;
                    }
                    n_611++;
                }
                /*c*/ come_call_finalizer3(o2_saved_612,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_614=node_compile(node_610,info);
                if(                !Value_614) {
                    __result_obj__328 = (_Bool)0;
                    (label_609 = come_decrement_ref_count(label_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_610) ? node_610 = come_decrement_ref_count(node_610, ((struct sNode*)node_610)->finalize, ((struct sNode*)node_610)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_607,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_560 = come_decrement_ref_count(generics_fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_587,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_595,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_601,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__328;
                }
                else {
                }
                come_value_615=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj120=come_value_615->type,
                come_value_615->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_615->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                (_if_conditional3=(((struct sType*)(__right_value499=list$1sType$ph_operator_load_element(param_types_589,n_611))))),                /*c*/ come_call_finalizer3(__right_value499,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional3) {
                    check_assign_type(((char*)(__right_value502=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value500=string_to_string(fun_name_451))),((char*)(__right_value501=int_to_string(n_611)))))),((struct sType*)(__right_value503=list$1sType$ph_operator_load_element(type_checking_param_types_595,n_611))),come_value_615->type,come_value_615,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value500 = come_decrement_ref_count(__right_value500, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value503,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                (_if_conditional4=(((struct sType*)(__right_value504=list$1sType$ph_operator_load_element(param_types_589,n_611)))&&((struct sType*)(__right_value505=list$1sType$ph_operator_load_element(param_types_589,n_611)))->mHeap&&come_value_615->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value504,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value505,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)(__right_value506=list$1sType$ph_operator_load_element(param_types_589,n_611))),come_value_615->type,come_value_615,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value506,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_601,n_611,(struct CVALUE*)come_increment_ref_count(come_value_615));
                /*c*/ come_call_finalizer3(come_value_615,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (label_609 = come_decrement_ref_count(label_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_610) ? node_610 = come_decrement_ref_count(node_610, ((struct sNode*)node_610)->finalize, ((struct sNode*)node_610)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_607,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_621=0;
        for(        o2_saved_622=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_452)),it_623=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_622));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_622));        it_623=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_622))        ){
            multiple_assign_var13=it_623;
            label_624=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_625=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            i_621==0) {
                check_assign_type(((char*)(__right_value509=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value507=string_to_string(fun_name_451))),((char*)(__right_value508=int_to_string(i_621)))))),((struct sType*)(__right_value510=list$1sType$ph_operator_load_element(type_checking_param_types_595,i_621))),obj_value_461->type,obj_value_461,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value509 = come_decrement_ref_count(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value510,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                (_if_conditional5=(((struct sType*)(__right_value511=list$1sType$ph_operator_load_element(param_types_589,i_621)))->mHeap&&obj_value_461->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value511,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional5) {
                    std_move(((struct sType*)(__right_value512=list$1sType$ph_operator_load_element(param_types_589,i_621))),obj_value_461->type,obj_value_461,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value512,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)(__right_value513=list$1sType$ph_operator_load_element(param_types_589,i_621)))->mHeap&&!obj_value_461->type->mHeap&&!gComeGC)),                /*c*/ come_call_finalizer3(__right_value513,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _elif_conditional1) {
                    err_msg(info,"require heap parametor(%s)",((char*)(__right_value514=list$1char$ph_operator_load_element(fun_561->mParamNames,i_621))));
                    (__right_value514 = come_decrement_ref_count(__right_value514, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1CVALUE$ph_replace(come_params_601,i_621,(struct CVALUE*)come_increment_ref_count(obj_value_461));
                i_621++;
            }
            else if(            label_624) {
            }
            else {
                while(                (_Bool)1) {
                    if(                    (_if_conditional6=(((struct CVALUE*)(__right_value515=list$1CVALUE$ph_operator_load_element(come_params_601,i_621)))==((void*)0))),                    /*c*/ come_call_finalizer3(__right_value515,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional6) {
                        break;
                    }
                    else {
                        i_621++;
                    }
                }
                Value_632=node_compile(node_625,info);
                if(                !Value_632) {
                    __result_obj__335 = (_Bool)0;
                    (label_624 = come_decrement_ref_count(label_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_625) ? node_625 = come_decrement_ref_count(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_622,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_560 = come_decrement_ref_count(generics_fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_587,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_595,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_601,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__335;
                }
                else {
                }
                come_value_633=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj122=come_value_633->type,
                come_value_633->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_633->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                (_if_conditional7=(((struct sType*)(__right_value518=list$1sType$ph_operator_load_element(param_types_589,i_621))))),                /*c*/ come_call_finalizer3(__right_value518,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional7) {
                    check_assign_type(((char*)(__right_value521=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value519=string_to_string(fun_name_451))),((char*)(__right_value520=int_to_string(i_621)))))),((struct sType*)(__right_value522=list$1sType$ph_operator_load_element(type_checking_param_types_595,i_621))),come_value_633->type,come_value_633,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value519 = come_decrement_ref_count(__right_value519, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value520 = come_decrement_ref_count(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value522,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                (_if_conditional8=(((struct sType*)(__right_value523=list$1sType$ph_operator_load_element(param_types_589,i_621)))&&((struct sType*)(__right_value524=list$1sType$ph_operator_load_element(param_types_589,i_621)))->mHeap&&come_value_633->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value523,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value524,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional8) {
                    std_move(((struct sType*)(__right_value525=list$1sType$ph_operator_load_element(param_types_589,i_621))),come_value_633->type,come_value_633,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value525,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_601,i_621,(struct CVALUE*)come_increment_ref_count(come_value_633));
                i_621++;
                /*c*/ come_call_finalizer3(come_value_633,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (label_624 = come_decrement_ref_count(label_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_625) ? node_625 = come_decrement_ref_count(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_622,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        while(        (_Bool)1) {
            if(            (_if_conditional9=(((struct CVALUE*)(__right_value526=list$1CVALUE$ph_operator_load_element(come_params_601,i_621)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value526,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                break;
            }
            else {
                i_621++;
            }
        }
        if(        list$1tuple2$2char$phsNode$ph$ph_length(params_452)<list$1sType$ph_length(fun_561->mParamTypes)+(((method_block_454)?(-2):(0)))) {
            for(            ;            i_621<list$1sType$ph_length(fun_561->mParamTypes)+(((method_block_454)?(-2):(0)));            i_621++            ){
                default_param_634=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value527=list$1char$ph_operator_load_element(fun_561->mParamDefaultParametors,i_621))), "20method.c", 896, "char*"));
                (__right_value527 = come_decrement_ref_count(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                param_name_635=((char*)(__right_value529=list$1char$ph_operator_load_element(fun_561->mParamNames,i_621)));
                (__right_value529 = come_decrement_ref_count(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                (_if_conditional10=(default_param_634&&string_operator_not_equals(default_param_634,"")&&((struct CVALUE*)(__right_value530=list$1CVALUE$ph_operator_load_element(come_params_601,i_621)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value530,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    source_636=(struct buffer*)come_increment_ref_count(info->source);
                    p_637=info->p;
                    head_638=info->head;
                    sline_639=info->sline;
                    __dec_obj123=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_634));
                    /*b*/ come_call_finalizer3(__dec_obj123,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_640=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_641=node_compile(node_640,info);
                    if(                    !Value_641) {
                        __result_obj__336 = (_Bool)0;
                        /*c*/ come_call_finalizer3(source_636,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((node_640) ? node_640 = come_decrement_ref_count(node_640, ((struct sNode*)node_640)->finalize, ((struct sNode*)node_640)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        (default_param_634 = come_decrement_ref_count(default_param_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_560 = come_decrement_ref_count(generics_fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_587,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_595,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_601,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__336;
                    }
                    else {
                    }
                    __dec_obj124=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(source_636);
                    /*b*/ come_call_finalizer3(__dec_obj124,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=p_637;
                    info->head=head_638;
                    info->sline=sline_639;
                    come_value_642=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    __dec_obj125=come_value_642->type,
                    come_value_642->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_642->type,info->generics_type,info));
                    /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    (_if_conditional11=(((struct sType*)(__right_value535=list$1sType$ph_operator_load_element(param_types_589,i_621))))),                    /*c*/ come_call_finalizer3(__right_value535,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional11) {
                        check_assign_type(((char*)(__right_value538=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value536=string_to_string(fun_name_451))),((char*)(__right_value537=int_to_string(i_621)))))),((struct sType*)(__right_value539=list$1sType$ph_operator_load_element(type_checking_param_types_595,i_621))),come_value_642->type,come_value_642,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value536 = come_decrement_ref_count(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value537 = come_decrement_ref_count(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value538 = come_decrement_ref_count(__right_value538, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value539,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    if(                    (_if_conditional12=(((struct sType*)(__right_value540=list$1sType$ph_operator_load_element(param_types_589,i_621)))&&((struct sType*)(__right_value541=list$1sType$ph_operator_load_element(param_types_589,i_621)))->mHeap&&come_value_642->type->mHeap)),                    /*c*/ come_call_finalizer3(__right_value540,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value541,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional12) {
                        std_move(((struct sType*)(__right_value542=list$1sType$ph_operator_load_element(param_types_589,i_621))),come_value_642->type,come_value_642,info,(_Bool)1);
                        /*c*/ come_call_finalizer3(__right_value542,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    list$1CVALUE$ph_replace(come_params_601,i_621,(struct CVALUE*)come_increment_ref_count(come_value_642));
                    /*c*/ come_call_finalizer3(source_636,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_640) ? node_640 = come_decrement_ref_count(node_640, ((struct sNode*)node_640)->finalize, ((struct sNode*)node_640)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value_642,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    if(                    (_if_conditional13=(((struct CVALUE*)(__right_value543=list$1CVALUE$ph_operator_load_element(come_params_601,i_621)))==((void*)0))),                    /*c*/ come_call_finalizer3(__right_value543,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional13) {
                        err_msg(info,"require parametor(%s) %d",fun_561->mName,i_621);
                    }
                }
                (default_param_634 = come_decrement_ref_count(default_param_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        method_block_454) {
            if(            !compile_method_block(method_block_454,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_601),fun_561,fun_name_451,method_block_sline_455,info,(_Bool)0)) {
                __result_obj__337 = (_Bool)0;
                (generics_fun_name_560 = come_decrement_ref_count(generics_fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_587,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_checking_param_types_595,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_601,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__337;
            }
        }
        buf_643=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 944, "struct buffer*"))));
        buffer_append_str(buf_643,generics_fun_name_560);
        buffer_append_str(buf_643,"(");
        saved_obj_value_644=((void*)0);
        if(        result_type2_588->mDefferRightValue) {
            static int var_num_645=0;
            var_name_646=(char*)come_increment_ref_count(xsprintf("__save_obj_value\%s",((char*)(__right_value546=int_to_string(var_num_645++)))));
            (__right_value546 = come_decrement_ref_count(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code(info,"%s=%s;\n",((char*)(__right_value548=make_define_var(obj_type_462,var_name_646,(_Bool)0,info))),obj_value_461->c_value);
            (__right_value548 = come_decrement_ref_count(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj126=saved_obj_value_644,
            saved_obj_value_644=(char*)come_increment_ref_count(var_name_646);
            __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            j_647=0;
            for(            o2_saved_648=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_601)),it_649=list$1CVALUE$ph_begin((o2_saved_648));            !list$1CVALUE$ph_end((o2_saved_648));            it_649=list$1CVALUE$ph_next((o2_saved_648))            ){
                if(                j_647==0) {
                    buffer_append_str(buf_643,saved_obj_value_644);
                }
                else {
                    buffer_append_str(buf_643,it_649->c_value);
                }
                if(                j_647!=list$1CVALUE$ph_length(come_params_601)-1) {
                    buffer_append_str(buf_643,",");
                }
                j_647++;
            }
            /*c*/ come_call_finalizer3(o2_saved_648,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_646 = come_decrement_ref_count(var_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            j_650=0;
            for(            o2_saved_651=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_601)),it_652=list$1CVALUE$ph_begin((o2_saved_651));            !list$1CVALUE$ph_end((o2_saved_651));            it_652=list$1CVALUE$ph_next((o2_saved_651))            ){
                buffer_append_str(buf_643,it_652->c_value);
                if(                j_650!=list$1CVALUE$ph_length(come_params_601)-1) {
                    buffer_append_str(buf_643,",");
                }
                j_650++;
            }
            /*c*/ come_call_finalizer3(o2_saved_651,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(buf_643,")");
        come_value2_653=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 989, "struct CVALUE*"))));
        come_value2_653->var=((void*)0);
        __dec_obj127=come_value2_653->c_value,
        come_value2_653->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_643));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj128=come_value2_653->type,
        come_value2_653->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_588));
        /*b*/ come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_653->type->mStatic=(_Bool)0;
        if(        result_type2_588->mHeap) {
            append_object_to_right_values2(come_value2_653,(struct sType*)come_increment_ref_count(result_type2_588),info,(_Bool)0,(struct sType*)come_increment_ref_count(obj_type_462),saved_obj_value_644);
        }
        else if(        saved_obj_value_644) {
            append_object_to_right_values2(come_value2_653,(struct sType*)come_increment_ref_count(result_type2_588),info,(_Bool)0,(struct sType*)come_increment_ref_count(obj_type_462),saved_obj_value_644);
        }
        __dec_obj129=come_value2_653->c_value,
        come_value2_653->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_653->c_value,come_value2_653->type,info));
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        add_come_last_code(info,"%s",come_value2_653->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_653));
        if(        is_contained_method_generics_types(obj_type_462,info)&&generics_fun_name_560) {
            map$2char$phsFun$ph_remove(info->funcs,((char*)(__right_value554=__builtin_string(generics_fun_name_560))));
            (__right_value554 = come_decrement_ref_count(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj130=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_459);
        /*b*/ come_call_finalizer3(__dec_obj130,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=fun_561;
        (generics_fun_name_560 = come_decrement_ref_count(generics_fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_587,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_checking_param_types_595,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_601,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_643,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (saved_obj_value_644 = come_decrement_ref_count(saved_obj_value_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_653,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__338 = (_Bool)1;
    (fun_name_451 = come_decrement_ref_count(fun_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(params_452,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((obj_453) ? obj_453 = come_decrement_ref_count(obj_453, ((struct sNode*)obj_453)->finalize, ((struct sNode*)obj_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(method_block_454,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_before_459,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__338;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__279;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_443;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_444;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__284;
    if(    self==((void*)0)) {
        __result_obj__279 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__279,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__279;
    }
    result_443=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_444=self->head;
    while(    it_444!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_443,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_444->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_443,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_444->item)));
        }
        it_444=it_444->next;
    }
    __result_obj__284 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_443);
    /*c*/ come_call_finalizer3(result_443,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__284,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_441;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_442;
    it_441=self->head;
    while(    it_441!=((void*)0)) {
        prev_it_442=it_441;
        it_441=it_441->next;
        /*c*/ come_call_finalizer3(prev_it_442,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__280;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__280 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__280,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__280;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value368 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_445;
struct tuple2$2char$phsNode$ph* __dec_obj82;
void* __right_value369 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_446;
struct tuple2$2char$phsNode$ph* __dec_obj83;
void* __right_value370 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_447;
struct tuple2$2char$phsNode$ph* __dec_obj84;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__281;
    if(    self->len==0) {
        litem_445=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value368=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_445->prev=((void*)0);
        litem_445->next=((void*)0);
        __dec_obj82=litem_445->item,
        litem_445->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj82,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_445;
        self->head=litem_445;
    }
    else if(    self->len==1) {
        litem_446=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value369=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_446->prev=self->head;
        litem_446->next=((void*)0);
        __dec_obj83=litem_446->item,
        litem_446->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj83,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_446;
        self->head->next=litem_446;
    }
    else {
        litem_447=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value370=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_447->prev=self->tail;
        litem_447->next=((void*)0);
        __dec_obj84=litem_447->item,
        litem_447->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj84,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_447;
        self->tail=litem_447;
    }
    self->len++;
    __result_obj__281 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__281;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__282;
void* __right_value371 = (void*)0;
struct tuple2$2char$phsNode$ph* result_448;
void* __right_value372 = (void*)0;
char* __dec_obj85;
void* __right_value373 = (void*)0;
struct sNode* __dec_obj86;
struct tuple2$2char$phsNode$ph* __result_obj__283;
    if(    self==(void*)0) {
        __result_obj__282 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__282,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__282;
    }
    result_448=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj85=result_448->v1,
        result_448->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj86=result_448->v2,
        result_448->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__283 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_448);
    /*c*/ come_call_finalizer3(result_448,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__283,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__283;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_449;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_450;
    it_449=self->head;
    while(    it_449!=((void*)0)) {
        prev_it_450=it_449;
        it_449=it_449->next;
        /*c*/ come_call_finalizer3(prev_it_450,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        ((self->obj) ? self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__288;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__288 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__288,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__288;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_477;
int i_478;
struct CVALUE* __result_obj__290;
struct CVALUE* default_value_479;
struct CVALUE* __result_obj__291;
default_value_479 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_477=self->head;
    i_478=0;
    while(    it_477!=((void*)0)) {
        if(        position==i_478) {
            __result_obj__290 = (struct CVALUE*)come_increment_ref_count(it_477->item);
            /*c*/ come_call_finalizer3(__result_obj__290,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__290;
        }
        it_477=it_477->next;
        i_478++;
    }
    memset(&default_value_479,0,sizeof(struct CVALUE*));
    __result_obj__291 = (struct CVALUE*)come_increment_ref_count(default_value_479);
    /*c*/ come_call_finalizer3(default_value_479,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__291,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_480;
int i_481;
struct CVALUE* __result_obj__292;
struct CVALUE* default_value_482;
struct CVALUE* __result_obj__293;
default_value_482 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_480=self->head;
    i_481=0;
    while(    it_480!=((void*)0)) {
        if(        position==i_481) {
            __result_obj__292 = (struct CVALUE*)come_increment_ref_count(it_480->item);
            /*c*/ come_call_finalizer3(__result_obj__292,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__292;
        }
        it_480=it_480->next;
        i_481++;
    }
    memset(&default_value_482,0,sizeof(struct CVALUE*));
    __result_obj__293 = (struct CVALUE*)come_increment_ref_count(default_value_482);
    /*c*/ come_call_finalizer3(default_value_482,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__293,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_488;
int i_489;
struct sType* default_value_490;
struct list$1sType$ph* __result_obj__295;
struct list_item$1sType$ph* it_494;
int i_495;
struct sType* __dec_obj95;
struct list$1sType$ph* __result_obj__296;
default_value_490 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_488=self->len;
        for(        i_489=0;        i_489<position-len_488;        i_489++        ){
            memset(&default_value_490,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_490));
            /*c*/ come_call_finalizer3(default_value_490,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__295 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__295;
    }
    it_494=self->head;
    i_495=0;
    while(    it_494!=((void*)0)) {
        if(        position==i_495) {
            __dec_obj95=it_494->item,
            it_494->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_494=it_494->next;
        i_495++;
    }
    __result_obj__296 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__296;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value396 = (void*)0;
struct list_item$1sType$ph* litem_491;
struct sType* __dec_obj92;
void* __right_value397 = (void*)0;
struct list_item$1sType$ph* litem_492;
struct sType* __dec_obj93;
void* __right_value398 = (void*)0;
struct list_item$1sType$ph* litem_493;
struct sType* __dec_obj94;
struct list$1sType$ph* __result_obj__294;
    if(    self->len==0) {
        litem_491=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value396=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_491->prev=((void*)0);
        litem_491->next=((void*)0);
        __dec_obj92=litem_491->item,
        litem_491->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_491;
        self->head=litem_491;
    }
    else if(    self->len==1) {
        litem_492=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value397=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_492->prev=self->head;
        litem_492->next=((void*)0);
        __dec_obj93=litem_492->item,
        litem_492->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_492;
        self->head->next=litem_492;
    }
    else {
        litem_493=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value398=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_493->prev=self->tail;
        litem_493->next=((void*)0);
        __dec_obj94=litem_493->item,
        litem_493->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_493;
        self->tail=litem_493;
    }
    self->len++;
    __result_obj__294 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_503;
struct tuple2$2char$phsNode$ph* __result_obj__297;
struct tuple2$2char$phsNode$ph* __result_obj__298;
struct tuple2$2char$phsNode$ph* result_504;
struct tuple2$2char$phsNode$ph* __result_obj__299;
result_503 = (void*)0;
result_504 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_503,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__297 = result_503;
        return __result_obj__297;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__298 = self->it->item;
        return __result_obj__298;
    }
    memset(&result_504,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__299 = result_504;
    return __result_obj__299;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_506;
struct tuple2$2char$phsNode$ph* __result_obj__300;
struct tuple2$2char$phsNode$ph* __result_obj__301;
struct tuple2$2char$phsNode$ph* result_507;
struct tuple2$2char$phsNode$ph* __result_obj__302;
result_506 = (void*)0;
result_507 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_506,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__300 = result_506;
        return __result_obj__300;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__301 = self->it->item;
        return __result_obj__301;
    }
    memset(&result_507,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__302 = result_507;
    return __result_obj__302;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_533;
struct tuple2$2char$phsType$ph* __result_obj__305;
struct tuple2$2char$phsType$ph* __result_obj__306;
struct tuple2$2char$phsType$ph* result_534;
struct tuple2$2char$phsType$ph* __result_obj__307;
result_533 = (void*)0;
result_534 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_533,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__305 = result_533;
        return __result_obj__305;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__306 = self->it->item;
        return __result_obj__306;
    }
    memset(&result_534,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__307 = result_534;
    return __result_obj__307;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_536;
struct tuple2$2char$phsType$ph* __result_obj__308;
struct tuple2$2char$phsType$ph* __result_obj__309;
struct tuple2$2char$phsType$ph* result_537;
struct tuple2$2char$phsType$ph* __result_obj__310;
result_536 = (void*)0;
result_537 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_536,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__308 = result_536;
        return __result_obj__308;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__309 = self->it->item;
        return __result_obj__309;
    }
    memset(&result_537,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__310 = result_537;
    return __result_obj__310;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_552;
struct CVALUE* __result_obj__312;
struct CVALUE* __result_obj__313;
struct CVALUE* result_553;
struct CVALUE* __result_obj__314;
result_552 = (void*)0;
result_553 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_552,0,sizeof(struct CVALUE*));
        __result_obj__312 = result_552;
        return __result_obj__312;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__313 = self->it->item;
        return __result_obj__313;
    }
    memset(&result_553,0,sizeof(struct CVALUE*));
    __result_obj__314 = result_553;
    return __result_obj__314;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_555;
struct CVALUE* __result_obj__315;
struct CVALUE* __result_obj__316;
struct CVALUE* result_556;
struct CVALUE* __result_obj__317;
result_555 = (void*)0;
result_556 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_555,0,sizeof(struct CVALUE*));
        __result_obj__315 = result_555;
        return __result_obj__315;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__316 = self->it->item;
        return __result_obj__316;
    }
    memset(&result_556,0,sizeof(struct CVALUE*));
    __result_obj__317 = result_556;
    return __result_obj__317;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_573;
unsigned int hash_574;
unsigned int it_575;
struct sFun* __result_obj__319;
struct sFun* __result_obj__320;
struct sFun* __result_obj__321;
struct sFun* __result_obj__322;
default_value_573 = (void*)0;
    memset(&default_value_573,0,sizeof(struct sFun*));
    hash_574=string_get_hash_key(((char*)key))%self->size;
    it_575=hash_574;
    while(    (_Bool)1) {
        if(        self->item_existance[it_575]) {
            if(            string_equals(self->keys[it_575],key)) {
                __result_obj__319 = (struct sFun*)come_increment_ref_count(self->items[it_575]);
                /*c*/ come_call_finalizer3(default_value_573,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__319,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__319;
            }
            it_575++;
            if(            it_575>=self->size) {
                it_575=0;
            }
            else if(            it_575==hash_574) {
                __result_obj__320 = (struct sFun*)come_increment_ref_count(default_value_573);
                /*c*/ come_call_finalizer3(default_value_573,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__320,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__320;
            }
        }
        else {
            __result_obj__321 = (struct sFun*)come_increment_ref_count(default_value_573);
            /*c*/ come_call_finalizer3(default_value_573,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__321,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__321;
        }
    }
    __result_obj__322 = (struct sFun*)come_increment_ref_count(default_value_573);
    /*c*/ come_call_finalizer3(default_value_573,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__322,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__322;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_576;
unsigned int hash_577;
unsigned int it_578;
struct sFun* __result_obj__323;
struct sFun* __result_obj__324;
struct sFun* __result_obj__325;
struct sFun* __result_obj__326;
default_value_576 = (void*)0;
    memset(&default_value_576,0,sizeof(struct sFun*));
    hash_577=string_get_hash_key(((char*)key))%self->size;
    it_578=hash_577;
    while(    (_Bool)1) {
        if(        self->item_existance[it_578]) {
            if(            string_equals(self->keys[it_578],key)) {
                __result_obj__323 = (struct sFun*)come_increment_ref_count(self->items[it_578]);
                /*c*/ come_call_finalizer3(default_value_576,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__323,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__323;
            }
            it_578++;
            if(            it_578>=self->size) {
                it_578=0;
            }
            else if(            it_578==hash_577) {
                __result_obj__324 = (struct sFun*)come_increment_ref_count(default_value_576);
                /*c*/ come_call_finalizer3(default_value_576,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__324,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__324;
            }
        }
        else {
            __result_obj__325 = (struct sFun*)come_increment_ref_count(default_value_576);
            /*c*/ come_call_finalizer3(default_value_576,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__325,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__325;
        }
    }
    __result_obj__326 = (struct sFun*)come_increment_ref_count(default_value_576);
    /*c*/ come_call_finalizer3(default_value_576,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__326,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__326;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value494 = (void*)0;
struct list_item$1CVALUE$ph* litem_603;
struct CVALUE* __dec_obj117;
void* __right_value495 = (void*)0;
struct list_item$1CVALUE$ph* litem_604;
struct CVALUE* __dec_obj118;
void* __right_value496 = (void*)0;
struct list_item$1CVALUE$ph* litem_605;
struct CVALUE* __dec_obj119;
struct list$1CVALUE$ph* __result_obj__327;
    if(    self->len==0) {
        litem_603=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value494=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1043, "struct list_item$1CVALUE$ph*"))));
        litem_603->prev=((void*)0);
        litem_603->next=((void*)0);
        __dec_obj117=litem_603->item,
        litem_603->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_603;
        self->head=litem_603;
    }
    else if(    self->len==1) {
        litem_604=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value495=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1053, "struct list_item$1CVALUE$ph*"))));
        litem_604->prev=self->head;
        litem_604->next=((void*)0);
        __dec_obj118=litem_604->item,
        litem_604->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj118,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_604;
        self->head->next=litem_604;
    }
    else {
        litem_605=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value496=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1063, "struct list_item$1CVALUE$ph*"))));
        litem_605->prev=self->tail;
        litem_605->next=((void*)0);
        __dec_obj119=litem_605->item,
        litem_605->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_605;
        self->tail=litem_605;
    }
    self->len++;
    __result_obj__327 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__327;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_616;
int i_617;
struct CVALUE* default_value_618;
struct list$1CVALUE$ph* __result_obj__329;
struct list_item$1CVALUE$ph* it_619;
int i_620;
struct CVALUE* __dec_obj121;
struct list$1CVALUE$ph* __result_obj__330;
default_value_618 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_616=self->len;
        for(        i_617=0;        i_617<position-len_616;        i_617++        ){
            memset(&default_value_618,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_618));
            /*c*/ come_call_finalizer3(default_value_618,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__329 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__329;
    }
    it_619=self->head;
    i_620=0;
    while(    it_619!=((void*)0)) {
        if(        position==i_620) {
            __dec_obj121=it_619->item,
            it_619->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj121,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_619=it_619->next;
        i_620++;
    }
    __result_obj__330 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__330;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_626;
int i_627;
char* __result_obj__331;
char* default_value_628;
char* __result_obj__332;
default_value_628 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_626=self->head;
    i_627=0;
    while(    it_626!=((void*)0)) {
        if(        position==i_627) {
            __result_obj__331 = (char*)come_increment_ref_count(it_626->item);
            (__result_obj__331 = come_decrement_ref_count(__result_obj__331, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__331;
        }
        it_626=it_626->next;
        i_627++;
    }
    memset(&default_value_628,0,sizeof(char*));
    __result_obj__332 = (char*)come_increment_ref_count(default_value_628);
    (default_value_628 = come_decrement_ref_count(default_value_628, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__332 = come_decrement_ref_count(__result_obj__332, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__332;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_629;
int i_630;
char* __result_obj__333;
char* default_value_631;
char* __result_obj__334;
default_value_631 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_629=self->head;
    i_630=0;
    while(    it_629!=((void*)0)) {
        if(        position==i_630) {
            __result_obj__333 = (char*)come_increment_ref_count(it_629->item);
            (__result_obj__333 = come_decrement_ref_count(__result_obj__333, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__333;
        }
        it_629=it_629->next;
        i_630++;
    }
    memset(&default_value_631,0,sizeof(char*));
    __result_obj__334 = (char*)come_increment_ref_count(default_value_631);
    (default_value_631 = come_decrement_ref_count(default_value_631, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__334 = come_decrement_ref_count(__result_obj__334, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__334;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info){
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value564 = (void*)0;
struct sNode* node_654;
void* __right_value565 = (void*)0;
struct sNode* __dec_obj137;
struct sNode* __result_obj__341;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1026, "struct sNode");
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value556=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1026, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,guard_break,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_654=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*c*/ come_call_finalizer3(__right_value556,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj137=node_654,
    node_654=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_654),info));
    (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__341 = (struct sNode*)come_increment_ref_count(node_654);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_654) ? node_654 = come_decrement_ref_count(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__341) ? __result_obj__341 = come_decrement_ref_count(__result_obj__341, ((struct sNode*)__result_obj__341)->finalize, ((struct sNode*)__result_obj__341)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__341;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__339;
void* __right_value557 = (void*)0;
struct sMethodCallNode* result_655;
void* __right_value558 = (void*)0;
char* __dec_obj131;
void* __right_value559 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value560 = (void*)0;
char* __dec_obj133;
void* __right_value561 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj134;
void* __right_value562 = (void*)0;
struct buffer* __dec_obj135;
void* __right_value563 = (void*)0;
struct list$1sType$ph* __dec_obj136;
struct sMethodCallNode* __result_obj__340;
    if(    self==(void*)0) {
        __result_obj__339 = (void*)0;
        return __result_obj__339;
    }
    result_655=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*"));
    if(    self!=((void*)0)) {
        result_655->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj131=result_655->sname,
        result_655->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMethodCallNode_clone", 5, "char*"));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj132=result_655->obj,
        result_655->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj));
        (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj133=result_655->fun_name,
        result_655->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sMethodCallNode_clone", 8, "char*"));
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj134=result_655->params,
        result_655->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj134,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj135=result_655->method_block,
        result_655->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj135,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj136=result_655->method_generics_types,
        result_655->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj136,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_655->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_655->fun=self->fun;
    }
    if(    self!=((void*)0)) {
        result_655->guard_break=self->guard_break;
    }
    __result_obj__340 = result_655;
    /*c*/ come_call_finalizer3(result_655,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__340;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_656;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
_Bool parse_method_generics_type_661;
char* p_662;
int sline_663;
void* __right_value574 = (void*)0;
char* word_664;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1sType$ph* method_generics_types_665;
void* __right_value577 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type_666=0;
char* name_667=0;
_Bool err_668=0;
void* __right_value578 = (void*)0;
char* p_669;
int sline_670;
_Bool err_flag_671;
void* __right_value579 = (void*)0;
char* label_672;
void* __right_value580 = (void*)0;
char* __dec_obj143;
char* __dec_obj144;
_Bool no_comma_673;
_Bool in_fun_param_674;
void* __right_value581 = (void*)0;
struct sNode* node_675;
void* __right_value582 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct buffer* method_block_676;
int method_block_sline_677;
char* head_678;
void* __right_value585 = (void*)0;
char* tail_679;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct buffer* __dec_obj146;
int len_680;
void* __right_value588 = (void*)0;
char* mem_681;
struct sNode* node_682;
_Bool guard_break_683;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value592 = (void*)0;
struct sNode* __dec_obj147;
void* __right_value593 = (void*)0;
struct sNode* __dec_obj148;
_Bool guard_break_684;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sNode* _inf_value4;
struct sMethodCallNode* _inf_obj_value4;
void* __right_value597 = (void*)0;
struct sNode* __dec_obj149;
void* __right_value598 = (void*)0;
struct sNode* __dec_obj150;
struct sNode* __result_obj__344;
node_682 = (void*)0;
    params_656=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 1035, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_push_back(params_656,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1036, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(sNode_clone(obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_661=(_Bool)0;
    {
        p_662=info->p;
        sline_663=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_664=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_664,info)) {
                    parse_method_generics_type_661=(_Bool)1;
                }
                (word_664 = come_decrement_ref_count(word_664, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_662;
        info->sline=sline_663;
    }
    method_generics_types_665=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 1066, "struct list$1sType$ph*"))));
    if(    parse_method_generics_type_661&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value577=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_666=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                name_667=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                err_668=multiple_assign_var14->v3;
                /*c*/ come_call_finalizer3(__right_value577,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_668) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_665,(struct sType*)come_increment_ref_count(sType_clone(type_666)));
                /*c*/ come_call_finalizer3(type_666,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_667 = come_decrement_ref_count(name_667, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    if(    *info->p!=123) {
        expected_next_character(40,info);
        while(        (_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_669=info->p;
            sline_670=info->sline;
            err_flag_671=(_Bool)0;
            label_672=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj143=label_672,
                label_672=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_671=(_Bool)1;
            }
            if(            err_flag_671==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj144=label_672,
                label_672=((void*)0);
                __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_669;
                info->sline=sline_670;
            }
            no_comma_673=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_674=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_675=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj145=node_675,
            node_675=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_675),info));
            (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->in_fun_param=in_fun_param_674;
            info->no_comma=no_comma_673;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_656,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1142, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_672),(struct sNode*)come_increment_ref_count(node_675))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_672 = come_decrement_ref_count(label_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_675) ? node_675 = come_decrement_ref_count(node_675, ((struct sNode*)node_675)->finalize, ((struct sNode*)node_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_672 = come_decrement_ref_count(label_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_675) ? node_675 = come_decrement_ref_count(node_675, ((struct sNode*)node_675)->finalize, ((struct sNode*)node_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    method_block_676=((void*)0);
    method_block_sline_677=0;
    if(    *info->p==123) {
        head_678=info->p;
        method_block_sline_677=info->sline;
        ((char*)(__right_value585=skip_block(info)));
        (__right_value585 = come_decrement_ref_count(__right_value585, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_679=info->p;
        __dec_obj146=method_block_676,
        method_block_676=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 1166, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj146,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_680=tail_679-head_678;
        mem_681=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_680+1)), "20method.c", 1169, "char*"));
        memcpy(mem_681,head_678,len_680);
        mem_681[len_680]=0;
        buffer_append_str(method_block_676,mem_681);
        buffer_append_str(method_block_676,"\n");
        (mem_681 = come_decrement_ref_count(mem_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        guard_break_683=(_Bool)1;
        _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1188, "struct sNode");
        _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value591=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1188, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_656),method_block_676,method_block_sline_677,method_generics_types_665,(_Bool)0,(_Bool)1,guard_break_683,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sMethodCallNode_finalize;
        _inf_value3->clone=(void*)sMethodCallNode_clone;
        _inf_value3->compile=(void*)sMethodCallNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sMethodCallNode_terminated;
        _inf_value3->kind=(void*)sMethodCallNode_kind;
        __dec_obj147=node_682,
        node_682=(struct sNode*)come_increment_ref_count(_inf_value3);
        (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value591,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj148=node_682,
        node_682=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_682),info));
        (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    else {
        guard_break_684=(_Bool)0;
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1194, "struct sNode");
        _inf_obj_value4=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value596=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1194, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_656),method_block_676,method_block_sline_677,method_generics_types_665,(_Bool)0,(_Bool)1,guard_break_684,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sMethodCallNode_finalize;
        _inf_value4->clone=(void*)sMethodCallNode_clone;
        _inf_value4->compile=(void*)sMethodCallNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sMethodCallNode_terminated;
        _inf_value4->kind=(void*)sMethodCallNode_kind;
        __dec_obj149=node_682,
        node_682=(struct sNode*)come_increment_ref_count(_inf_value4);
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value596,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj150=node_682,
        node_682=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_682),info));
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__344 = (struct sNode*)come_increment_ref_count(node_682);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(params_656,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_665,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_682) ? node_682 = come_decrement_ref_count(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__344) ? __result_obj__344 = come_decrement_ref_count(__result_obj__344, ((struct sNode*)__result_obj__344)->finalize, ((struct sNode*)__result_obj__344)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__344;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value568 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_657;
struct tuple2$2char$phsNode$ph* __dec_obj138;
void* __right_value569 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_658;
struct tuple2$2char$phsNode$ph* __dec_obj139;
void* __right_value570 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_659;
struct tuple2$2char$phsNode$ph* __dec_obj140;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__342;
    if(    self->len==0) {
        litem_657=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value568=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_657->prev=((void*)0);
        litem_657->next=((void*)0);
        __dec_obj138=litem_657->item,
        litem_657->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj138,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_657;
        self->head=litem_657;
    }
    else if(    self->len==1) {
        litem_658=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value569=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_658->prev=self->head;
        litem_658->next=((void*)0);
        __dec_obj139=litem_658->item,
        litem_658->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj139,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_658;
        self->head->next=litem_658;
    }
    else {
        litem_659=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value570=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_659->prev=self->tail;
        litem_659->next=((void*)0);
        __dec_obj140=litem_659->item,
        litem_659->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj140,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_659;
        self->tail=litem_659;
    }
    self->len++;
    __result_obj__342 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__342;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_660;
    result_660=0;
    result_660+=int_get_hash_key(((int)self->v1));
    result_660+=int_get_hash_key(((int)self->v2));
    return result_660;
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
char* __dec_obj141;
struct sNode* __dec_obj142;
struct tuple2$2char$phsNode$ph* __result_obj__343;
    __dec_obj141=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj142=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__343 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__343,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__343;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sNode* _inf_value5;
struct sCurrentNode* _inf_obj_value5;
void* __right_value601 = (void*)0;
struct sNode* __result_obj__345;
void* __right_value602 = (void*)0;
struct sNode* __result_obj__346;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1205, "struct sNode");
        _inf_obj_value5=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value600=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1205, "struct sCurrentNode*")),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sCurrentNode_finalize;
        _inf_value5->clone=(void*)sCurrentNode_clone;
        _inf_value5->compile=(void*)sCurrentNode_compile;
        _inf_value5->sline=(void*)sCurrentNode_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sCurrentNode_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sCurrentNode_kind;
        __result_obj__345 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value601=_inf_value5)));
        /*c*/ come_call_finalizer3(__right_value600,sCurrentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value601) ? __right_value601 = come_decrement_ref_count(__right_value601, ((struct sNode*)__right_value601)->finalize, ((struct sNode*)__right_value601)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__345) ? __result_obj__345 = come_decrement_ref_count(__result_obj__345, ((struct sNode*)__result_obj__345)->finalize, ((struct sNode*)__result_obj__345)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__345;
    }
    __result_obj__346 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value602=string_node_v17(buf,head,head_sline,info))));
    ((__right_value602) ? __right_value602 = come_decrement_ref_count(__right_value602, ((struct sNode*)__right_value602)->finalize, ((struct sNode*)__right_value602)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__346) ? __result_obj__346 = come_decrement_ref_count(__result_obj__346, ((struct sNode*)__result_obj__346)->finalize, ((struct sNode*)__result_obj__346)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__346;
}

