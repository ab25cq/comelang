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

struct list_item$1sBlock$ph
{
    struct sBlock* item;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sIfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNode$ph* mElifExpressionNodes;
    struct list$1sBlock$ph* mElifBlocks;
    int mElifNum;
    _Bool mGuard;
    struct sBlock* mElseBlock;
};

struct sMatchNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sIfMethodNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sOrStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sAndStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info);
_Bool sIfNode_terminated(struct sIfNode* self);
char* sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void sIfNode_finalize(struct sIfNode* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char* sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info);
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self);
char* sOrStatmentNode_kind(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);
static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self);
char* sAndStatmentNode_kind(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);
static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value2 = (void*)0;
struct sNode* __dec_obj1;
void* __right_value77 = (void*)0;
struct sBlock* __dec_obj37;
void* __right_value78 = (void*)0;
struct list$1sNode$ph* __dec_obj38;
void* __right_value86 = (void*)0;
struct list$1sBlock$ph* __dec_obj42;
void* __right_value87 = (void*)0;
struct sBlock* __dec_obj43;
struct sBlock* __dec_obj44;
struct sIfNode* __result_obj__55;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj1=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj37=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer(sBlock_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj38=self->mElifExpressionNodes,
    self->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(elif_expression_nodes));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj42=self->mElifBlocks,
    self->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(elif_blocks));
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(    else_block    ) {
        __dec_obj43=self->mElseBlock,
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(else_block));
        come_call_finalizer(sBlock_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj44=self->mElseBlock,
        self->mElseBlock=((void*)0);
        come_call_finalizer(sBlock_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__55 = (struct sIfNode*)come_increment_ref_count(self);
    come_call_finalizer(sIfNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sIfNode_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __right_value88 = (void*)0;
char* __result_obj__56;
    __result_obj__56 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string("sIfNode"))));
    (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__56;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value_98;
int i_99;
void* __right_value89 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value90 = (void*)0;
struct sBlock* else_block_106;
int elif_num_107;
_Bool guard__108;
char* if_result_var_name_109;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct sType* if_result_type_110;
void* __right_value94 = (void*)0;
char* __dec_obj45;
void* __right_value95 = (void*)0;
struct sVar* var__112;
void* __right_value96 = (void*)0;
struct sNode* expression_node_113;
int sline_114;
char* sname_115;
_Bool comma_instead_of_semicolon_before_116;
_Bool Value_117;
_Bool __result_obj__61;
_Bool normal_if_118;
void* __right_value97 = (void*)0;
struct CVALUE* conditional_value_119;
void* __right_value98 = (void*)0;
struct CVALUE* conditional_value_120;
struct sBlock* if_block_121;
int i_122;
void* __right_value99 = (void*)0;
struct sNode* expression_node2_123;
_Bool comma_instead_of_semicolon_before_130;
_Bool Value_131;
_Bool __result_obj__66;
_Bool normal_if_132;
void* __right_value100 = (void*)0;
struct CVALUE* conditional_value_133;
void* __right_value101 = (void*)0;
struct CVALUE* conditional_value_134;
void* __right_value102 = (void*)0;
struct sBlock* elif_node_block_135;
struct sVar* var__136;
int __exception_result_var_b1;
void* __right_value103 = (void*)0;
struct sNode* result_node_137;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct sNode* __dec_obj46;
_Bool Value_138;
_Bool __result_obj__67;
void* __right_value106 = (void*)0;
struct CVALUE* come_value2_139;
void* __right_value107 = (void*)0;
struct sType* __dec_obj47;
char* __dec_obj51;
_Bool __result_obj__69;
    existance_of_result_value_98=(_Bool)1;
    {
        if(        !self->mIfBlock->mOmitSemicolon        ) {
            existance_of_result_value_98=(_Bool)0;
        }
        for(        i_99=0        ;        i_99<self->mElifNum        ;        i_99++        ){
            if(            (_condtional_value_X1=(!((struct sBlock*)(__right_value89=list$1sBlock$ph_operator_load_element(self->mElifBlocks,i_99)))->mOmitSemicolon)),            come_call_finalizer(sBlock_finalize, __right_value89, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X1            ) {
                existance_of_result_value_98=(_Bool)0;
            }
        }
        if(        self->mElseBlock&&!self->mElseBlock->mOmitSemicolon        ) {
            existance_of_result_value_98=(_Bool)0;
        }
    }
    if(    info->comma_instead_of_semicolon    ) {
        ((struct tuple2$2int$bool$*)(__right_value90=err_msg(info,"In conditional operator comelang can't use if statment")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value90, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        return (_Bool)1;
    }
    else_block_106=self->mElseBlock;
    elif_num_107=self->mElifNum;
    guard__108=self->mGuard;
    if_result_var_name_109=(char*)come_increment_ref_count(info->if_result_var_name);
    if(    existance_of_result_value_98    ) {
        if_result_type_110=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "08if.c", 63, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        static int var_num_111=0;
        __dec_obj45=info->if_result_var_name,
        info->if_result_var_name=(char*)come_increment_ref_count(xsprintf("__if_result__%d",var_num_111++));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        add_variable_to_table(info->if_result_var_name,(struct sType*)come_increment_ref_count(sType_clone(if_result_type_110)),info,(_Bool)0,(_Bool)0);
        var__112=get_variable_from_table(info->lv_table,info->if_result_var_name);
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value96=make_define_var(var__112->mType,var__112->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, if_result_type_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    expression_node_113=self->mExpressionNode;
    sline_114=info->sline;
    sname_115=info->sname;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_before_116=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    Value_117=node_compile(expression_node_113,info);
    if(    !Value_117    ) {
        __result_obj__61 = (_Bool)0;
        (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__61;
    }
    else {
    }
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_116;
    normal_if_118=(_Bool)1;
    if(    existance_free_right_value_objects(info)    ) {
        normal_if_118=(_Bool)0;
    }
    if(    normal_if_118    ) {
        conditional_value_119=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"%s",conditional_value_119->c_value);
        come_call_finalizer(CVALUE_finalize, conditional_value_119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        conditional_value_120=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value_120),info);
        come_call_finalizer(CVALUE_finalize, conditional_value_120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    add_come_code(info,") {\n");
    if_block_121=self->mIfBlock;
    transpile_block(if_block_121,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_98);
    add_come_code(info,"}\n");
    if(    elif_num_107>0    ) {
        for(        i_122=0        ;        i_122<elif_num_107        ;        i_122++        ){
            expression_node2_123=((struct sNode*)(__right_value99=list$1sNode$ph_operator_load_element(self->mElifExpressionNodes,i_122)));
            ((__right_value99) ? __right_value99 = come_decrement_ref_count(__right_value99, ((struct sNode*)__right_value99)->finalize, ((struct sNode*)__right_value99)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            add_come_code(info,"else if(");
            comma_instead_of_semicolon_before_130=info->comma_instead_of_semicolon;
            info->comma_instead_of_semicolon=(_Bool)1;
            Value_131=node_compile(expression_node2_123,info);
            if(            !Value_131            ) {
                __result_obj__66 = (_Bool)0;
                (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__66;
            }
            else {
            }
            info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_130;
            normal_if_132=(_Bool)1;
            if(            existance_free_right_value_objects(info)            ) {
                normal_if_132=(_Bool)0;
            }
            if(            normal_if_132            ) {
                conditional_value_133=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s",conditional_value_133->c_value);
                come_call_finalizer(CVALUE_finalize, conditional_value_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                conditional_value_134=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value_134),info);
                come_call_finalizer(CVALUE_finalize, conditional_value_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            add_come_code(info,") {\n");
            elif_node_block_135=((struct sBlock*)(__right_value102=list$1sBlock$ph_operator_load_element(self->mElifBlocks,i_122)));
            come_call_finalizer(sBlock_finalize, __right_value102, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            transpile_block(elif_node_block_135,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_98);
            add_come_code(info,"}\n");
        }
    }
    if(    else_block_106    ) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_106,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_98);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    if(    existance_of_result_value_98    ) {
        var__136=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 162, 0),__exception_result_var_b1=assert_v2(var__136!=((void*)0)), come_pop_stackframe(), __exception_result_var_b1);
        result_node_137=(struct sNode*)come_increment_ref_count(create_load_var(info->if_result_var_name,info));
        __dec_obj46=result_node_137,
        result_node_137=(struct sNode*)come_increment_ref_count(cast_node((struct sType*)come_increment_ref_count(sType_clone(var__136->mType)),(struct sNode*)come_increment_ref_count(result_node_137),info));
        (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        Value_138=node_compile(result_node_137,info);
        if(        !Value_138        ) {
            __result_obj__67 = (_Bool)0;
            ((result_node_137) ? result_node_137 = come_decrement_ref_count(result_node_137, ((struct sNode*)result_node_137)->finalize, ((struct sNode*)result_node_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__67;
        }
        else {
        }
        come_value2_139=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj47=come_value2_139->type,
        come_value2_139->type=(struct sType*)come_increment_ref_count(sType_clone(var__136->mType));
        come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_139));
        ((result_node_137) ? result_node_137 = come_decrement_ref_count(result_node_137, ((struct sNode*)result_node_137)->finalize, ((struct sNode*)result_node_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __dec_obj51=info->if_result_var_name,
    info->if_result_var_name=(char*)come_increment_ref_count(if_result_var_name_109);
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__69 = (_Bool)1;
    (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__69;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__1;
void* __right_value1 = (void*)0;
struct sNode* result_0;
struct sNode* __result_obj__2;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__1) ? __result_obj__1 = come_decrement_ref_count(__result_obj__1, ((struct sNode*)__result_obj__1)->finalize, ((struct sNode*)__result_obj__1)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__1;
    }
    result_0=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_0->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_0->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_0->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_0->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_0->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_0->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_0->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_0->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_0->kind=self->kind;
    }
    __result_obj__2 = (struct sNode*)come_increment_ref_count(result_0);
    ((result_0) ? result_0 = come_decrement_ref_count(result_0, ((struct sNode*)result_0)->finalize, ((struct sNode*)result_0)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__2) ? __result_obj__2 = come_decrement_ref_count(__result_obj__2, ((struct sNode*)__result_obj__2)->finalize, ((struct sNode*)__result_obj__2)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__2;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__3;
void* __right_value3 = (void*)0;
struct sBlock* result_1;
void* __right_value11 = (void*)0;
struct list$1sNode$ph* __dec_obj5;
void* __right_value76 = (void*)0;
struct sVarTable* __dec_obj36;
struct sBlock* __result_obj__50;
    if(    self==(void*)0    ) {
        __result_obj__3 = (void*)0;
        return __result_obj__3;
    }
    result_1=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __dec_obj5=result_1->mNodes,
        result_1->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __dec_obj36=result_1->mVarTable,
        result_1->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_1->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__50 = result_1;
    come_call_finalizer(sBlock_finalize, result_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__4;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct list$1sNode$ph* result_4;
struct list_item$1sNode$ph* it_5;
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
struct list$1sNode$ph* __result_obj__7;
    if(    self==((void*)0)    ) {
        __result_obj__4 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__4;
    }
    result_4=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1633, "struct list$1sNode$ph*"))));
    it_5=self->head;
    while(    it_5!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_4,(struct sNode*)come_increment_ref_count(sNode_clone(it_5->item)));
        }
        else {
            list$1sNode$ph_add(result_4,(struct sNode*)come_increment_ref_count(sNode_clone(it_5->item)));
        }
        it_5=it_5->next;
    }
    __result_obj__7 = (struct list$1sNode$ph*)come_increment_ref_count(result_4);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__7;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_2;
struct list_item$1sNode$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)    ) {
        prev_it_3=it_2;
        it_2=it_2->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value6 = (void*)0;
struct list_item$1sNode$ph* litem_6;
struct sNode* __dec_obj2;
void* __right_value7 = (void*)0;
struct list_item$1sNode$ph* litem_7;
struct sNode* __dec_obj3;
void* __right_value8 = (void*)0;
struct list_item$1sNode$ph* litem_8;
struct sNode* __dec_obj4;
struct list$1sNode$ph* __result_obj__6;
    if(    self->len==0    ) {
        litem_6=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value6=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1652, "struct list_item$1sNode$ph*"))));
        litem_6->prev=((void*)0);
        litem_6->next=((void*)0);
        __dec_obj2=litem_6->item,
        litem_6->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_6;
        self->head=litem_6;
    }
    else if(    self->len==1    ) {
        litem_7=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value7=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1662, "struct list_item$1sNode$ph*"))));
        litem_7->prev=self->head;
        litem_7->next=((void*)0);
        __dec_obj3=litem_7->item,
        litem_7->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj3 ? __dec_obj3 = come_decrement_ref_count(__dec_obj3, ((struct sNode*)__dec_obj3)->finalize, ((struct sNode*)__dec_obj3)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_7;
        self->head->next=litem_7;
    }
    else {
        litem_8=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value8=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1672, "struct list_item$1sNode$ph*"))));
        litem_8->prev=self->tail;
        litem_8->next=((void*)0);
        __dec_obj4=litem_8->item,
        litem_8->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj4 ? __dec_obj4 = come_decrement_ref_count(__dec_obj4, ((struct sNode*)__dec_obj4)->finalize, ((struct sNode*)__dec_obj4)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_8;
        self->tail=litem_8;
    }
    self->len++;
    __result_obj__6 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__6;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_9;
struct list_item$1sNode$ph* prev_it_10;
    it_9=self->head;
    while(    it_9!=((void*)0)    ) {
        prev_it_10=it_9;
        it_9=it_9->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__8;
void* __right_value12 = (void*)0;
struct sVarTable* result_11;
void* __right_value75 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj35;
struct sVarTable* __result_obj__49;
    if(    self==(void*)0    ) {
        __result_obj__8 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_11=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __dec_obj35=result_11->mVars,
        result_11->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_11->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_11->mParent=self->mParent;
    }
    __result_obj__49 = (struct sVarTable*)come_increment_ref_count(result_11);
    come_call_finalizer(sVarTable_finalize, result_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__9;
void* __right_value13 = (void*)0;
void* __right_value19 = (void*)0;
struct map$2char$phsVar$ph* result_23;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1char$ph* __dec_obj7;
char* it_26;
struct sVar* default_value_29;
void* __right_value22 = (void*)0;
struct sVar* it2_32;
void* __right_value31 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__48;
default_value_29 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__9 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__9;
    }
    result_23=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2591, "struct map$2char$phsVar$ph*"))));
    __dec_obj7=result_23->key_list,
    result_23->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2593, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_26=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_26=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_29,0,sizeof(struct sVar*));
        it2_32=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_26,(struct sVar*)come_increment_ref_count(default_value_29)));
        if(        1&&1        ) {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_26, "./comelang.h", 2602, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_26, "./comelang.h", 2605, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count(it_26),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        else {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count(it_26),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        come_call_finalizer(sVar_finalize, default_value_29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2_32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__48 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_23);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_12;
int i_17;
    for(    i_12=0    ;    i_12<self->size    ;    i_12++    ){
        if(        self->item_existance[i_12]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_12], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_17=0    ;    i_17<self->size    ;    i_17++    ){
        if(        self->item_existance[i_17]        ) {
            if(            1            ) {
                (self->keys[i_17] = come_decrement_ref_count(self->keys[i_17], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
struct list_item$1sType$ph* it_13;
struct list_item$1sType$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)    ) {
        prev_it_14=it_13;
        it_13=it_13->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_15;
struct list_item$1char$ph* prev_it_16;
    it_15=self->head;
    while(    it_15!=((void*)0)    ) {
        prev_it_16=it_15;
        it_15=it_15->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
int i_18;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
struct list$1char$ph* __dec_obj6;
struct map$2char$phsVar$ph* __result_obj__11;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value14=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 2520, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value15=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2521, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value16=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2522, "_Bool*"))));
    for(    i_18=0    ;    i_18<128    ;    i_18++    ){
        self->item_existance[i_18]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj6=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2532, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__11 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__10;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__10 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__10;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_19;
struct list_item$1char$p* prev_it_20;
    it_19=self->head;
    while(    it_19!=((void*)0)    ) {
        prev_it_20=it_19;
        it_19=it_19->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_21;
struct list_item$1char$ph* prev_it_22;
    it_21=self->head;
    while(    it_21!=((void*)0)    ) {
        prev_it_22=it_21;
        it_21=it_21->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_24;
char* __result_obj__12;
char* __result_obj__13;
char* result_25;
char* __result_obj__14;
result_24 = (void*)0;
result_25 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_24,0,sizeof(char*));
        __result_obj__12 = result_24;
        return __result_obj__12;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__13 = self->key_list->it->item;
        return __result_obj__13;
    }
    memset(&result_25,0,sizeof(char*));
    __result_obj__14 = result_25;
    return __result_obj__14;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_27;
char* __result_obj__15;
char* __result_obj__16;
char* result_28;
char* __result_obj__17;
result_27 = (void*)0;
result_28 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_27,0,sizeof(char*));
        __result_obj__15 = result_27;
        return __result_obj__15;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__16 = self->key_list->it->item;
        return __result_obj__16;
    }
    memset(&result_28,0,sizeof(char*));
    __result_obj__17 = result_28;
    return __result_obj__17;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_30;
unsigned int it_31;
struct sVar* __result_obj__18;
struct sVar* __result_obj__19;
struct sVar* __result_obj__20;
struct sVar* __result_obj__21;
    hash_30=string_get_hash_key(((char*)key))%self->size;
    it_31=hash_30;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_31]        ) {
            if(            string_equals(self->keys[it_31],key)            ) {
                __result_obj__18 = (struct sVar*)come_increment_ref_count(self->items[it_31]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__18;
            }
            it_31++;
            if(            it_31>=self->size            ) {
                it_31=0;
            }
            else if(            it_31==hash_30            ) {
                __result_obj__19 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__19;
            }
        }
        else {
            __result_obj__20 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__20;
        }
    }
    __result_obj__21 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_44;
int it_45;
_Bool same_key_exist_62;
char* it2_65;
struct map$2char$phsVar$ph* __result_obj__33;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_44=string_get_hash_key(((char*)key))%self->size;
    it_45=hash_44;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_45]        ) {
            if(            string_equals(self->keys[it_45],key)            ) {
                if(                1                ) {
                    (self->keys[it_45] = come_decrement_ref_count(self->keys[it_45], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_45]);
                    self->keys[it_45]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_45]);
                    self->keys[it_45]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_45], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_45]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_45]=item;
                }
                break;
            }
            it_45++;
            if(            it_45>=self->size            ) {
                it_45=0;
            }
            else if(            it_45==hash_44            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_45]=(_Bool)1;
            if(            1            ) {
                self->keys[it_45]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_45]=key;
            }
            if(            1            ) {
                self->items[it_45]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_45]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_62=(_Bool)0;
    for(    it2_65=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_65=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_65,key)        ) {
            same_key_exist_62=(_Bool)1;
        }
    }
    if(    !same_key_exist_62    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__33 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__33;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_33;
void* __right_value23 = (void*)0;
char** keys_34;
void* __right_value24 = (void*)0;
struct sVar** items_35;
void* __right_value25 = (void*)0;
_Bool* item_existance_36;
int len_37;
char* it_38;
struct sVar* default_value_39;
void* __right_value26 = (void*)0;
struct sVar* it2_40;
unsigned int hash_41;
int n_42;
struct sVar* default_value_43;
void* __right_value27 = (void*)0;
default_value_39 = (void*)0;
default_value_43 = (void*)0;
    size_33=self->size*10;
    keys_34=(char**)come_increment_ref_count(((char**)(__right_value23=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_33)), "./comelang.h", 2759, "char**"))));
    items_35=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value24=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_33)), "./comelang.h", 2760, "struct sVar**"))));
    item_existance_36=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value25=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_33)), "./comelang.h", 2761, "_Bool*"))));
    len_37=0;
    for(    it_38=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_38=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_39,0,sizeof(struct sVar*));
        it2_40=((struct sVar*)(__right_value26=map$2char$phsVar$ph_at(self,it_38,(struct sVar*)come_increment_ref_count(default_value_39))));
        come_call_finalizer(sVar_finalize, __right_value26, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_41=string_get_hash_key(((char*)it_38))%size_33;
        n_42=hash_41;
        while(        (_Bool)1        ) {
            if(            item_existance_36[n_42]            ) {
                n_42++;
                if(                n_42>=size_33                ) {
                    n_42=0;
                }
                else if(                n_42==hash_41                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_36[n_42]=(_Bool)1;
                keys_34[n_42]=it_38;
                items_35[n_42]=((struct sVar*)(__right_value27=map$2char$phsVar$ph_at(self,it_38,(struct sVar*)come_increment_ref_count(default_value_43))));
                come_call_finalizer(sVar_finalize, __right_value27, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_37++;
                come_call_finalizer(sVar_finalize, default_value_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_34;
    self->items=items_35;
    self->item_existance=item_existance_36;
    self->size=size_33;
    self->len=len_37;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_46;
struct list_item$1char$ph* it_47;
struct list$1char$ph* __result_obj__25;
    it2_46=0;
    it_47=self->head;
    while(    it_47!=((void*)0)    ) {
        if(        string_equals(it_47->item,item)        ) {
            list$1char$ph_delete(self,it2_46,it2_46+1);
            break;
        }
        it2_46++;
        it_47=it_47->next;
    }
    __result_obj__25 = self;
    return __result_obj__25;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_48;
struct list$1char$ph* __result_obj__22;
struct list_item$1char$ph* it_51;
int i_52;
struct list_item$1char$ph* prev_it_53;
struct list_item$1char$ph* it_54;
int i_55;
struct list_item$1char$ph* prev_it_56;
struct list_item$1char$ph* it_57;
struct list_item$1char$ph* head_prev_it_58;
struct list_item$1char$ph* tail_it_59;
int i_60;
struct list_item$1char$ph* prev_it_61;
struct list$1char$ph* __result_obj__24;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_48=tail;
        tail=head;
        head=tmp_48;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__22 = self;
        return __result_obj__22;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_51=self->head;
        i_52=0;
        while(        it_51!=((void*)0)        ) {
            if(            i_52<tail            ) {
                prev_it_53=it_51;
                it_51=it_51->next;
                i_52++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_52==tail            ) {
                self->head=it_51;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_51=it_51->next;
                i_52++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_54=self->head;
        i_55=0;
        while(        it_54!=((void*)0)        ) {
            if(            i_55==head            ) {
                self->tail=it_54->prev;
                self->tail->next=((void*)0);
            }
            if(            i_55>=head            ) {
                prev_it_56=it_54;
                it_54=it_54->next;
                i_55++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_54=it_54->next;
                i_55++;
            }
        }
    }
    else {
        it_57=self->head;
        head_prev_it_58=((void*)0);
        tail_it_59=((void*)0);
        i_60=0;
        while(        it_57!=((void*)0)        ) {
            if(            i_60==head            ) {
                head_prev_it_58=it_57->prev;
            }
            if(            i_60==tail            ) {
                tail_it_59=it_57;
            }
            if(            i_60>=head&&i_60<tail            ) {
                prev_it_61=it_57;
                it_57=it_57->next;
                i_60++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_57=it_57->next;
                i_60++;
            }
        }
        if(        head_prev_it_58!=((void*)0)        ) {
            head_prev_it_58->next=tail_it_59;
        }
        if(        tail_it_59!=((void*)0)        ) {
            tail_it_59->prev=head_prev_it_58;
        }
    }
    __result_obj__24 = self;
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_49;
struct list_item$1char$ph* prev_it_50;
struct list$1char$ph* __result_obj__23;
    it_49=self->head;
    while(    it_49!=((void*)0)    ) {
        prev_it_50=it_49;
        it_49=it_49->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__23 = self;
    return __result_obj__23;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_63;
char* __result_obj__26;
char* __result_obj__27;
char* result_64;
char* __result_obj__28;
result_63 = (void*)0;
result_64 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_63,0,sizeof(char*));
        __result_obj__26 = result_63;
        return __result_obj__26;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__27 = self->it->item;
        return __result_obj__27;
    }
    memset(&result_64,0,sizeof(char*));
    __result_obj__28 = result_64;
    return __result_obj__28;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_66;
char* __result_obj__29;
char* __result_obj__30;
char* result_67;
char* __result_obj__31;
result_66 = (void*)0;
result_67 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_66,0,sizeof(char*));
        __result_obj__29 = result_66;
        return __result_obj__29;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_67,0,sizeof(char*));
    __result_obj__31 = result_67;
    return __result_obj__31;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value28 = (void*)0;
struct list_item$1char$ph* litem_68;
char* __dec_obj8;
void* __right_value29 = (void*)0;
struct list_item$1char$ph* litem_69;
char* __dec_obj9;
void* __right_value30 = (void*)0;
struct list_item$1char$ph* litem_70;
char* __dec_obj10;
struct list$1char$ph* __result_obj__32;
    if(    self->len==0    ) {
        litem_68=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value28=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1722, "struct list_item$1char$ph*"))));
        litem_68->prev=((void*)0);
        litem_68->next=((void*)0);
        __dec_obj8=litem_68->item,
        litem_68->item=(char*)come_increment_ref_count(item);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_68;
        self->head=litem_68;
    }
    else if(    self->len==1    ) {
        litem_69=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value29=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1732, "struct list_item$1char$ph*"))));
        litem_69->prev=self->head;
        litem_69->next=((void*)0);
        __dec_obj9=litem_69->item,
        litem_69->item=(char*)come_increment_ref_count(item);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_69;
        self->head->next=litem_69;
    }
    else {
        litem_70=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value30=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1742, "struct list_item$1char$ph*"))));
        litem_70->prev=self->tail;
        litem_70->next=((void*)0);
        __dec_obj10=litem_70->item,
        litem_70->item=(char*)come_increment_ref_count(item);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_70;
        self->tail=litem_70;
    }
    self->len++;
    __result_obj__32 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__32;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__34;
void* __right_value32 = (void*)0;
struct sVar* result_71;
void* __right_value33 = (void*)0;
char* __dec_obj11;
void* __right_value34 = (void*)0;
char* __dec_obj12;
void* __right_value68 = (void*)0;
struct sType* __dec_obj33;
void* __right_value69 = (void*)0;
char* __dec_obj34;
struct sVar* __result_obj__47;
    if(    self==(void*)0    ) {
        __result_obj__34 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__34;
    }
    result_71=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj11=result_71->mName,
        result_71->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __dec_obj12=result_71->mCValueName,
        result_71->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __dec_obj33=result_71->mType,
        result_71->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_71->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_71->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_71->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)    ) {
        result_71->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __dec_obj34=result_71->mFunName,
        result_71->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__47 = (struct sVar*)come_increment_ref_count(result_71);
    come_call_finalizer(sVar_finalize, result_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__35;
void* __right_value35 = (void*)0;
struct sType* result_72;
void* __right_value36 = (void*)0;
struct sType* __dec_obj13;
void* __right_value37 = (void*)0;
struct sType* __dec_obj14;
void* __right_value45 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value46 = (void*)0;
struct sType* __dec_obj19;
void* __right_value47 = (void*)0;
struct sNode* __dec_obj20;
void* __right_value48 = (void*)0;
struct sNode* __dec_obj21;
void* __right_value49 = (void*)0;
char* __dec_obj22;
void* __right_value50 = (void*)0;
char* __dec_obj23;
void* __right_value51 = (void*)0;
char* __dec_obj24;
void* __right_value56 = (void*)0;
struct list$1sNode$ph* __dec_obj25;
void* __right_value57 = (void*)0;
char* __dec_obj26;
void* __right_value58 = (void*)0;
struct list$1sType$ph* __dec_obj27;
void* __right_value66 = (void*)0;
struct list$1char$ph* __dec_obj31;
void* __right_value67 = (void*)0;
struct sType* __dec_obj32;
struct sType* __result_obj__46;
    if(    self==(void*)0    ) {
        __result_obj__35 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__35;
    }
    result_72=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_72->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj13=result_72->mOriginalLoadVarType,
        result_72->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj14=result_72->mChannelType,
        result_72->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj18=result_72->mGenericsTypes,
        result_72->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj19=result_72->mNoSolvedGenericsType,
        result_72->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj20=result_72->mSizeNum,
        result_72->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj21=result_72->mAlignas,
        result_72->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj22=result_72->mTupleName,
        result_72->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj23=result_72->mAttribute,
        result_72->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_72->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_72->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_72->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_72->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_72->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_72->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_72->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_72->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_72->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_72->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_72->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_72->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_72->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_72->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_72->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_72->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_72->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_72->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_72->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_72->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_72->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_72->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_72->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj24=result_72->mAsmName,
        result_72->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_72->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_72->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_72->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj25=result_72->mArrayNum,
        result_72->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_72->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_72->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_72->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_72->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_72->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj26=result_72->mOriginalTypeName,
        result_72->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_72->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_72->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_72->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_72->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj27=result_72->mParamTypes,
        result_72->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj31=result_72->mParamNames,
        result_72->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj32=result_72->mResultType,
        result_72->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_72->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_72->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__46 = (struct sType*)come_increment_ref_count(result_72);
    come_call_finalizer(sType_finalize, result_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__46;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__36;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct list$1sType$ph* result_73;
struct list_item$1sType$ph* it_74;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct list$1sType$ph* __result_obj__39;
    if(    self==((void*)0)    ) {
        __result_obj__36 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__36;
    }
    result_73=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1633, "struct list$1sType$ph*"))));
    it_74=self->head;
    while(    it_74!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_73,(struct sType*)come_increment_ref_count(sType_clone(it_74->item)));
        }
        else {
            list$1sType$ph_add(result_73,(struct sType*)come_increment_ref_count(sType_clone(it_74->item)));
        }
        it_74=it_74->next;
    }
    __result_obj__39 = (struct list$1sType$ph*)come_increment_ref_count(result_73);
    come_call_finalizer(list$1sType$ph$p_finalize, result_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__39;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__37;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__37 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value40 = (void*)0;
struct list_item$1sType$ph* litem_75;
struct sType* __dec_obj15;
void* __right_value41 = (void*)0;
struct list_item$1sType$ph* litem_76;
struct sType* __dec_obj16;
void* __right_value42 = (void*)0;
struct list_item$1sType$ph* litem_77;
struct sType* __dec_obj17;
struct list$1sType$ph* __result_obj__38;
    if(    self->len==0    ) {
        litem_75=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value40=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1652, "struct list_item$1sType$ph*"))));
        litem_75->prev=((void*)0);
        litem_75->next=((void*)0);
        __dec_obj15=litem_75->item,
        litem_75->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_75;
        self->head=litem_75;
    }
    else if(    self->len==1    ) {
        litem_76=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value41=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1662, "struct list_item$1sType$ph*"))));
        litem_76->prev=self->head;
        litem_76->next=((void*)0);
        __dec_obj16=litem_76->item,
        litem_76->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj16,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_76;
        self->head->next=litem_76;
    }
    else {
        litem_77=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value42=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1672, "struct list_item$1sType$ph*"))));
        litem_77->prev=self->tail;
        litem_77->next=((void*)0);
        __dec_obj17=litem_77->item,
        litem_77->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_77;
        self->tail=litem_77;
    }
    self->len++;
    __result_obj__38 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__38;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_78;
struct list_item$1sType$ph* prev_it_79;
    it_78=self->head;
    while(    it_78!=((void*)0)    ) {
        prev_it_79=it_78;
        it_78=it_78->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__40;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1sNode$ph* result_80;
struct list_item$1sNode$ph* it_81;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1sNode$ph* __result_obj__41;
    if(    self==((void*)0)    ) {
        __result_obj__40 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__40;
    }
    result_80=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1633, "struct list$1sNode$ph*"))));
    it_81=self->head;
    while(    it_81!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_80,(struct sNode*)come_increment_ref_count(sNode_clone(it_81->item)));
        }
        else {
            list$1sNode$ph_add(result_80,(struct sNode*)come_increment_ref_count(sNode_clone(it_81->item)));
        }
        it_81=it_81->next;
    }
    __result_obj__41 = (struct list$1sNode$ph*)come_increment_ref_count(result_80);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__41;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__42;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1char$ph* result_82;
struct list_item$1char$ph* it_83;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1char$ph* __result_obj__45;
    if(    self==((void*)0)    ) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__42;
    }
    result_82=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1633, "struct list$1char$ph*"))));
    it_83=self->head;
    while(    it_83!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_82,(char*)come_increment_ref_count((char*)come_memdup(it_83->item, "./comelang.h", 1638, "char*")));
        }
        else {
            list$1char$ph_add(result_82,(char*)come_increment_ref_count((char*)come_memdup(it_83->item, "./comelang.h", 1641, "char*")));
        }
        it_83=it_83->next;
    }
    __result_obj__45 = (struct list$1char$ph*)come_increment_ref_count(result_82);
    come_call_finalizer(list$1char$ph$p_finalize, result_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__43;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__43 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value61 = (void*)0;
struct list_item$1char$ph* litem_84;
char* __dec_obj28;
void* __right_value62 = (void*)0;
struct list_item$1char$ph* litem_85;
char* __dec_obj29;
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_86;
char* __dec_obj30;
struct list$1char$ph* __result_obj__44;
    if(    self->len==0    ) {
        litem_84=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value61=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1652, "struct list_item$1char$ph*"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj28=litem_84->item,
        litem_84->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_84;
        self->head=litem_84;
    }
    else if(    self->len==1    ) {
        litem_85=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value62=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1662, "struct list_item$1char$ph*"))));
        litem_85->prev=self->head;
        litem_85->next=((void*)0);
        __dec_obj29=litem_85->item,
        litem_85->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_85;
        self->head->next=litem_85;
    }
    else {
        litem_86=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1672, "struct list_item$1char$ph*"))));
        litem_86->prev=self->tail;
        litem_86->next=((void*)0);
        __dec_obj30=litem_86->item,
        litem_86->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_86;
        self->tail=litem_86;
    }
    self->len++;
    __result_obj__44 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__44;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_87;
int i_88;
    for(    i_87=0    ;    i_87<self->size    ;    i_87++    ){
        if(        self->item_existance[i_87]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_87], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_88=0    ;    i_88<self->size    ;    i_88++    ){
        if(        self->item_existance[i_88]        ) {
            if(            1            ) {
                (self->keys[i_88] = come_decrement_ref_count(self->keys[i_88], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__51;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct list$1sBlock$ph* result_91;
struct list_item$1sBlock$ph* it_92;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
struct list$1sBlock$ph* __result_obj__54;
    if(    self==((void*)0)    ) {
        __result_obj__51 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__51;
    }
    result_91=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1633, "struct list$1sBlock$ph*"))));
    it_92=self->head;
    while(    it_92!=((void*)0)    ) {
        if(        1        ) {
            list$1sBlock$ph_add(result_91,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_92->item)));
        }
        else {
            list$1sBlock$ph_add(result_91,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_92->item)));
        }
        it_92=it_92->next;
    }
    __result_obj__54 = (struct list$1sBlock$ph*)come_increment_ref_count(result_91);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_89;
struct list_item$1sBlock$ph* prev_it_90;
    it_89=self->head;
    while(    it_89!=((void*)0)    ) {
        prev_it_90=it_89;
        it_89=it_89->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__52;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__52 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__52;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value81 = (void*)0;
struct list_item$1sBlock$ph* litem_93;
struct sBlock* __dec_obj39;
void* __right_value82 = (void*)0;
struct list_item$1sBlock$ph* litem_94;
struct sBlock* __dec_obj40;
void* __right_value83 = (void*)0;
struct list_item$1sBlock$ph* litem_95;
struct sBlock* __dec_obj41;
struct list$1sBlock$ph* __result_obj__53;
    if(    self->len==0    ) {
        litem_93=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value81=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1652, "struct list_item$1sBlock$ph*"))));
        litem_93->prev=((void*)0);
        litem_93->next=((void*)0);
        __dec_obj39=litem_93->item,
        litem_93->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_93;
        self->head=litem_93;
    }
    else if(    self->len==1    ) {
        litem_94=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value82=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1662, "struct list_item$1sBlock$ph*"))));
        litem_94->prev=self->head;
        litem_94->next=((void*)0);
        __dec_obj40=litem_94->item,
        litem_94->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_94;
        self->head->next=litem_94;
    }
    else {
        litem_95=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value83=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1672, "struct list_item$1sBlock$ph*"))));
        litem_95->prev=self->tail;
        litem_95->next=((void*)0);
        __dec_obj41=litem_95->item,
        litem_95->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_95;
        self->tail=litem_95;
    }
    self->len++;
    __result_obj__53 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__53;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_96;
struct list_item$1sBlock$ph* prev_it_97;
    it_96=self->head;
    while(    it_96!=((void*)0)    ) {
        prev_it_97=it_96;
        it_96=it_96->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sIfNode_finalize(struct sIfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mElifExpressionNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)    ) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->mElifBlocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mElseBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_100;
int i_101;
struct sBlock* __result_obj__57;
struct sBlock* default_value_102;
struct sBlock* __result_obj__58;
default_value_102 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_100=self->head;
    i_101=0;
    while(    it_100!=((void*)0)    ) {
        if(        position==i_101        ) {
            __result_obj__57 = (struct sBlock*)come_increment_ref_count(it_100->item);
            come_call_finalizer(sBlock_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__57;
        }
        it_100=it_100->next;
        i_101++;
    }
    memset(&default_value_102,0,sizeof(struct sBlock*));
    __result_obj__58 = (struct sBlock*)come_increment_ref_count(default_value_102);
    come_call_finalizer(sBlock_finalize, default_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__58;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_103;
int i_104;
struct sBlock* __result_obj__59;
struct sBlock* default_value_105;
struct sBlock* __result_obj__60;
default_value_105 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_103=self->head;
    i_104=0;
    while(    it_103!=((void*)0)    ) {
        if(        position==i_104        ) {
            __result_obj__59 = (struct sBlock*)come_increment_ref_count(it_103->item);
            come_call_finalizer(sBlock_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__59;
        }
        it_103=it_103->next;
        i_104++;
    }
    memset(&default_value_105,0,sizeof(struct sBlock*));
    __result_obj__60 = (struct sBlock*)come_increment_ref_count(default_value_105);
    come_call_finalizer(sBlock_finalize, default_value_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
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

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_124;
int i_125;
struct sNode* __result_obj__62;
struct sNode* default_value_126;
struct sNode* __result_obj__63;
default_value_126 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_124=self->head;
    i_125=0;
    while(    it_124!=((void*)0)    ) {
        if(        position==i_125        ) {
            __result_obj__62 = (struct sNode*)come_increment_ref_count(it_124->item);
            ((__result_obj__62) ? __result_obj__62 = come_decrement_ref_count(__result_obj__62, ((struct sNode*)__result_obj__62)->finalize, ((struct sNode*)__result_obj__62)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__62;
        }
        it_124=it_124->next;
        i_125++;
    }
    memset(&default_value_126,0,sizeof(struct sNode*));
    __result_obj__63 = (struct sNode*)come_increment_ref_count(default_value_126);
    ((default_value_126) ? default_value_126 = come_decrement_ref_count(default_value_126, ((struct sNode*)default_value_126)->finalize, ((struct sNode*)default_value_126)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__63) ? __result_obj__63 = come_decrement_ref_count(__result_obj__63, ((struct sNode*)__result_obj__63)->finalize, ((struct sNode*)__result_obj__63)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__63;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_127;
int i_128;
struct sNode* __result_obj__64;
struct sNode* default_value_129;
struct sNode* __result_obj__65;
default_value_129 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_127=self->head;
    i_128=0;
    while(    it_127!=((void*)0)    ) {
        if(        position==i_128        ) {
            __result_obj__64 = (struct sNode*)come_increment_ref_count(it_127->item);
            ((__result_obj__64) ? __result_obj__64 = come_decrement_ref_count(__result_obj__64, ((struct sNode*)__result_obj__64)->finalize, ((struct sNode*)__result_obj__64)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__64;
        }
        it_127=it_127->next;
        i_128++;
    }
    memset(&default_value_129,0,sizeof(struct sNode*));
    __result_obj__65 = (struct sNode*)come_increment_ref_count(default_value_129);
    ((default_value_129) ? default_value_129 = come_decrement_ref_count(default_value_129, ((struct sNode*)default_value_129)->finalize, ((struct sNode*)default_value_129)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__65) ? __result_obj__65 = come_decrement_ref_count(__result_obj__65, ((struct sNode*)__result_obj__65)->finalize, ((struct sNode*)__result_obj__65)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__65;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value108 = (void*)0;
struct list_item$1CVALUE$ph* litem_140;
struct CVALUE* __dec_obj48;
void* __right_value109 = (void*)0;
struct list_item$1CVALUE$ph* litem_141;
struct CVALUE* __dec_obj49;
void* __right_value110 = (void*)0;
struct list_item$1CVALUE$ph* litem_142;
struct CVALUE* __dec_obj50;
struct list$1CVALUE$ph* __result_obj__68;
    if(    self->len==0    ) {
        litem_140=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value108=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1722, "struct list_item$1CVALUE$ph*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        __dec_obj48=litem_140->item,
        litem_140->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj48,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1    ) {
        litem_141=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value109=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1732, "struct list_item$1CVALUE$ph*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        __dec_obj49=litem_141->item,
        litem_141->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value110=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1742, "struct list_item$1CVALUE$ph*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        __dec_obj50=litem_142->item,
        litem_142->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__68 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__68;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct sNode* __dec_obj52;
void* __right_value113 = (void*)0;
struct sNode* __dec_obj53;
struct sMatchNode* __result_obj__70;
    ((struct sNodeBase*)(__right_value111=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value111, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj52=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj53=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__70 = (struct sMatchNode*)come_increment_ref_count(self);
    come_call_finalizer(sMatchNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sMatchNode_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __right_value114 = (void*)0;
char* __result_obj__71;
    __result_obj__71 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string("sMatch"))));
    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__71;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node_143;
struct sNode* match_node_144;
_Bool Value_145;
_Bool __result_obj__72;
void* __right_value115 = (void*)0;
struct CVALUE* come_value_146;
_Bool Value_147;
_Bool __result_obj__73;
struct sVar* var__148;
int __exception_result_var_b2;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct list$1sVar$ph* __dec_obj54;
void* __right_value121 = (void*)0;
_Bool __result_obj__76;
    it_node_143=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_144=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_145=node_compile(it_node_143,info);
    if(    !Value_145    ) {
        __result_obj__72 = (_Bool)0;
        ((it_node_143) ? it_node_143 = come_decrement_ref_count(it_node_143, ((struct sNode*)it_node_143)->finalize, ((struct sNode*)it_node_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((match_node_144) ? match_node_144 = come_decrement_ref_count(match_node_144, ((struct sNode*)match_node_144)->finalize, ((struct sNode*)match_node_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__72;
    }
    else {
    }
    come_value_146=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_146->c_value);
    Value_147=node_compile(match_node_144,info);
    if(    !Value_147    ) {
        __result_obj__73 = (_Bool)0;
        ((it_node_143) ? it_node_143 = come_decrement_ref_count(it_node_143, ((struct sNode*)it_node_143)->finalize, ((struct sNode*)it_node_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((match_node_144) ? match_node_144 = come_decrement_ref_count(match_node_144, ((struct sNode*)match_node_144)->finalize, ((struct sNode*)match_node_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__73;
    }
    else {
    }
    if(    info->if_result_var_name    ) {
        var__148=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 221, 1),__exception_result_var_b2=assert_v2(var__148!=((void*)0)), come_pop_stackframe(), __exception_result_var_b2);
        if(        info->match_it_var==((void*)0)        ) {
            __dec_obj54=info->match_it_var,
            info->match_it_var=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc_v2(1, sizeof(struct list$1sVar$ph)*(1), "08if.c", 224, "struct list$1sVar$ph*"))));
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        list$1sVar$ph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(sVar_clone(var__148)));
    }
    __result_obj__76 = (_Bool)1;
    ((it_node_143) ? it_node_143 = come_decrement_ref_count(it_node_143, ((struct sNode*)it_node_143)->finalize, ((struct sNode*)it_node_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((match_node_144) ? match_node_144 = come_decrement_ref_count(match_node_144, ((struct sNode*)match_node_144)->finalize, ((struct sNode*)match_node_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__76;
}

static void sMatchNode_finalize(struct sMatchNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)    ) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)    ) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self){
struct list$1sVar$ph* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__74 = (struct list$1sVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_149;
struct list_item$1sVar$ph* prev_it_150;
    it_149=self->head;
    while(    it_149!=((void*)0)    ) {
        prev_it_150=it_149;
        it_149=it_149->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_151;
struct list_item$1sVar$ph* prev_it_152;
    it_151=self->head;
    while(    it_151!=((void*)0)    ) {
        prev_it_152=it_151;
        it_151=it_151->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item){
void* __right_value118 = (void*)0;
struct list_item$1sVar$ph* litem_153;
struct sVar* __dec_obj55;
void* __right_value119 = (void*)0;
struct list_item$1sVar$ph* litem_154;
struct sVar* __dec_obj56;
void* __right_value120 = (void*)0;
struct list_item$1sVar$ph* litem_155;
struct sVar* __dec_obj57;
struct list$1sVar$ph* __result_obj__75;
    if(    self->len==0    ) {
        litem_153=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value118=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1652, "struct list_item$1sVar$ph*"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        __dec_obj55=litem_153->item,
        litem_153->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1    ) {
        litem_154=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value119=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1662, "struct list_item$1sVar$ph*"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        __dec_obj56=litem_154->item,
        litem_154->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value120=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1672, "struct list_item$1sVar$ph*"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        __dec_obj57=litem_155->item,
        litem_155->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result_obj__75 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__75;
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value124 = (void*)0;
struct sNode* __dec_obj59;
struct sIfMethodNode* __result_obj__77;
    ((struct sNodeBase*)(__right_value122=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value122, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj58=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj59=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__77 = (struct sIfMethodNode*)come_increment_ref_count(self);
    come_call_finalizer(sIfMethodNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __right_value125 = (void*)0;
char* __result_obj__78;
    __result_obj__78 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string("sMatch"))));
    (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__78;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node_156;
struct sNode* match_node_157;
_Bool Value_158;
_Bool __result_obj__79;
void* __right_value126 = (void*)0;
struct CVALUE* come_value_159;
_Bool Value_160;
_Bool __result_obj__80;
struct sVar* var__161;
int __exception_result_var_b3;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct list$1sVar$ph* __dec_obj60;
void* __right_value129 = (void*)0;
_Bool __result_obj__81;
    it_node_156=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_157=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_158=node_compile(it_node_156,info);
    if(    !Value_158    ) {
        __result_obj__79 = (_Bool)0;
        ((it_node_156) ? it_node_156 = come_decrement_ref_count(it_node_156, ((struct sNode*)it_node_156)->finalize, ((struct sNode*)it_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((match_node_157) ? match_node_157 = come_decrement_ref_count(match_node_157, ((struct sNode*)match_node_157)->finalize, ((struct sNode*)match_node_157)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__79;
    }
    else {
    }
    come_value_159=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_159->c_value);
    Value_160=node_compile(match_node_157,info);
    if(    !Value_160    ) {
        __result_obj__80 = (_Bool)0;
        ((it_node_156) ? it_node_156 = come_decrement_ref_count(it_node_156, ((struct sNode*)it_node_156)->finalize, ((struct sNode*)it_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((match_node_157) ? match_node_157 = come_decrement_ref_count(match_node_157, ((struct sNode*)match_node_157)->finalize, ((struct sNode*)match_node_157)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__80;
    }
    else {
    }
    if(    info->if_result_var_name    ) {
        var__161=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 272, 2),__exception_result_var_b3=assert_v2(var__161!=((void*)0)), come_pop_stackframe(), __exception_result_var_b3);
        if(        info->match_it_var==((void*)0)        ) {
            __dec_obj60=info->match_it_var,
            info->match_it_var=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc_v2(1, sizeof(struct list$1sVar$ph)*(1), "08if.c", 275, "struct list$1sVar$ph*"))));
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        list$1sVar$ph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(sVar_clone(var__161)));
    }
    __result_obj__81 = (_Bool)1;
    ((it_node_156) ? it_node_156 = come_decrement_ref_count(it_node_156, ((struct sNode*)it_node_156)->finalize, ((struct sNode*)it_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((match_node_157) ? match_node_157 = come_decrement_ref_count(match_node_157, ((struct sNode*)match_node_157)->finalize, ((struct sNode*)match_node_157)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__81;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)    ) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)    ) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct sNode* __dec_obj61;
void* __right_value132 = (void*)0;
struct sBlock* __dec_obj62;
struct sOrStatmentNode* __result_obj__82;
    ((struct sNodeBase*)(__right_value130=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value130, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj61=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj62=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer(sBlock_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__82 = (struct sOrStatmentNode*)come_increment_ref_count(self);
    come_call_finalizer(sOrStatmentNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sOrStatmentNode_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __right_value133 = (void*)0;
char* __result_obj__83;
    __result_obj__83 = (char*)come_increment_ref_count(((char*)(__right_value133=__builtin_string("sOrStatmentNode"))));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__83;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_162;
_Bool comma_instead_of_semicolon_163;
_Bool Value_164;
void* __right_value134 = (void*)0;
struct CVALUE* conditional_value_165;
struct sBlock* if_block_166;
_Bool __result_obj__84;
    expression_node_162=self->mExpressionNode;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_163=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    Value_164=node_compile(expression_node_162,info);
    if(    !Value_164    ) {
        return (_Bool)0;
    }
    else {
    }
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_163;
    conditional_value_165=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value_165),info);
    add_come_code(info,") {\n");
    if_block_166=self->mIfBlock;
    transpile_block(if_block_166,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__84 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, conditional_value_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__84;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value137 = (void*)0;
struct sBlock* __dec_obj64;
struct sAndStatmentNode* __result_obj__85;
    ((struct sNodeBase*)(__right_value135=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj63=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj64=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer(sBlock_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__85 = (struct sAndStatmentNode*)come_increment_ref_count(self);
    come_call_finalizer(sAndStatmentNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAndStatmentNode_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __right_value138 = (void*)0;
char* __result_obj__86;
    __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string("sAndStatmentNode"))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__86;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_167;
_Bool comma_instead_of_semicolon_168;
_Bool Value_169;
void* __right_value139 = (void*)0;
struct CVALUE* conditional_value_170;
struct sBlock* if_block_171;
_Bool __result_obj__87;
    expression_node_167=self->mExpressionNode;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_168=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    Value_169=node_compile(expression_node_167,info);
    if(    !Value_169    ) {
        return (_Bool)0;
    }
    else {
    }
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_168;
    conditional_value_170=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value_170),info);
    add_come_code(info,") {\n");
    if_block_171=self->mIfBlock;
    transpile_block(if_block_171,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__87 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, conditional_value_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__87;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value140 = (void*)0;
char* sname_172;
int sline_173;
int sline_real_174;
void* __right_value141 = (void*)0;
struct sNode* expression_node_175;
void* __right_value142 = (void*)0;
struct sBlock* if_block_176;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_177;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct list$1sBlock$ph* elif_blocks_178;
int elif_num_179;
struct sBlock* else_block_180;
char* saved_p_181;
int saved_sline_182;
void* __right_value147 = (void*)0;
char* buf_183;
int sline_real_184;
void* __right_value148 = (void*)0;
struct sNode* expression_node_185;
void* __right_value152 = (void*)0;
struct sBlock* elif_block_189;
void* __right_value156 = (void*)0;
struct sBlock* __dec_obj71;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value166 = (void*)0;
struct sNode* result_193;
struct sNode* __result_obj__92;
void* __right_value167 = (void*)0;
struct sNode* __result_obj__93;
    if(    charp_operator_equals(buf,"if")    ) {
        sname_172=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 384, "char*"));
        sline_173=info->sline;
        sline_real_174=info->sline_real;
        info->sline_real=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_175=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_176=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        elif_expression_nodes_177=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 401, "struct list$1sNode$ph*"))));
        elif_blocks_178=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 403, "struct list$1sBlock$ph*"))));
        elif_num_179=0;
        else_block_180=((void*)0);
        while(        1        ) {
            saved_p_181=info->p;
            saved_sline_182=info->sline;
            parse_sharp_v5(info);
            if(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            !(xisalpha(*info->p)||*info->p==95)            ) {
                break;
            }
            parse_sharp_v5(info);
            buf_183=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(            string_operator_equals(buf_183,"else")            ) {
                sline_real_184=info->sline_real;
                info->sline_real=info->sline;
                if(                parsecmp("if",info)                ) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_185=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_push_back(elif_expression_nodes_177,(struct sNode*)come_increment_ref_count(expression_node_185));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_189=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlock$ph_push_back(elif_blocks_178,(struct sBlock*)come_increment_ref_count(elif_block_189));
                    elif_num_179++;
                    ((expression_node_185) ? expression_node_185 = come_decrement_ref_count(expression_node_185, ((struct sNode*)expression_node_185)->finalize, ((struct sNode*)expression_node_185)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(sBlock_finalize, elif_block_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj71=else_block_180,
                    else_block_180=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer(sBlock_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    (buf_183 = come_decrement_ref_count(buf_183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                info->sline_real=sline_real_184;
            }
            else {
                info->p=saved_p_181;
                info->sline=saved_sline_182;
                (buf_183 = come_decrement_ref_count(buf_183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (buf_183 = come_decrement_ref_count(buf_183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 466, "struct sNode");
        _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value158=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 466, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(expression_node_175),if_block_176,elif_expression_nodes_177,elif_blocks_178,elif_num_179,else_block_180,(_Bool)0,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sIfNode_finalize;
        _inf_value1->clone=(void*)sIfNode_clone;
        _inf_value1->compile=(void*)sIfNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sIfNode_terminated;
        _inf_value1->kind=(void*)sIfNode_kind;
        result_193=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer(sIfNode_finalize, __right_value158, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->sline_real=sline_real_174;
        __result_obj__92 = (struct sNode*)come_increment_ref_count(result_193);
        (sname_172 = come_decrement_ref_count(sname_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((expression_node_175) ? expression_node_175 = come_decrement_ref_count(expression_node_175, ((struct sNode*)expression_node_175)->finalize, ((struct sNode*)expression_node_175)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sBlock_finalize, if_block_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, else_block_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((result_193) ? result_193 = come_decrement_ref_count(result_193, ((struct sNode*)result_193)->finalize, ((struct sNode*)result_193)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__92) ? __result_obj__92 = come_decrement_ref_count(__result_obj__92, ((struct sNode*)__result_obj__92)->finalize, ((struct sNode*)__result_obj__92)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__92;
        (sname_172 = come_decrement_ref_count(sname_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((expression_node_175) ? expression_node_175 = come_decrement_ref_count(expression_node_175, ((struct sNode*)expression_node_175)->finalize, ((struct sNode*)expression_node_175)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sBlock_finalize, if_block_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, else_block_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((result_193) ? result_193 = come_decrement_ref_count(result_193, ((struct sNode*)result_193)->finalize, ((struct sNode*)result_193)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__93 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value167=string_node_v7(buf,head,head_sline,info))));
    ((__right_value167) ? __right_value167 = come_decrement_ref_count(__right_value167, ((struct sNode*)__right_value167)->finalize, ((struct sNode*)__right_value167)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__93) ? __result_obj__93 = come_decrement_ref_count(__result_obj__93, ((struct sNode*)__result_obj__93)->finalize, ((struct sNode*)__result_obj__93)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__93;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value149 = (void*)0;
struct list_item$1sNode$ph* litem_186;
struct sNode* __dec_obj65;
void* __right_value150 = (void*)0;
struct list_item$1sNode$ph* litem_187;
struct sNode* __dec_obj66;
void* __right_value151 = (void*)0;
struct list_item$1sNode$ph* litem_188;
struct sNode* __dec_obj67;
struct list$1sNode$ph* __result_obj__88;
    if(    self->len==0    ) {
        litem_186=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value149=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1722, "struct list_item$1sNode$ph*"))));
        litem_186->prev=((void*)0);
        litem_186->next=((void*)0);
        __dec_obj65=litem_186->item,
        litem_186->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_186;
        self->head=litem_186;
    }
    else if(    self->len==1    ) {
        litem_187=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value150=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1732, "struct list_item$1sNode$ph*"))));
        litem_187->prev=self->head;
        litem_187->next=((void*)0);
        __dec_obj66=litem_187->item,
        litem_187->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_187;
        self->head->next=litem_187;
    }
    else {
        litem_188=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value151=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1742, "struct list_item$1sNode$ph*"))));
        litem_188->prev=self->tail;
        litem_188->next=((void*)0);
        __dec_obj67=litem_188->item,
        litem_188->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_188;
        self->tail=litem_188;
    }
    self->len++;
    __result_obj__88 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__88;
}

static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value153 = (void*)0;
struct list_item$1sBlock$ph* litem_190;
struct sBlock* __dec_obj68;
void* __right_value154 = (void*)0;
struct list_item$1sBlock$ph* litem_191;
struct sBlock* __dec_obj69;
void* __right_value155 = (void*)0;
struct list_item$1sBlock$ph* litem_192;
struct sBlock* __dec_obj70;
struct list$1sBlock$ph* __result_obj__89;
    if(    self->len==0    ) {
        litem_190=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value153=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1722, "struct list_item$1sBlock$ph*"))));
        litem_190->prev=((void*)0);
        litem_190->next=((void*)0);
        __dec_obj68=litem_190->item,
        litem_190->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_190;
        self->head=litem_190;
    }
    else if(    self->len==1    ) {
        litem_191=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value154=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1732, "struct list_item$1sBlock$ph*"))));
        litem_191->prev=self->head;
        litem_191->next=((void*)0);
        __dec_obj69=litem_191->item,
        litem_191->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_191;
        self->head->next=litem_191;
    }
    else {
        litem_192=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value155=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1742, "struct list_item$1sBlock$ph*"))));
        litem_192->prev=self->tail;
        litem_192->next=((void*)0);
        __dec_obj70=litem_192->item,
        litem_192->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_192;
        self->tail=litem_192;
    }
    self->len++;
    __result_obj__89 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
struct sIfNode* __result_obj__90;
void* __right_value159 = (void*)0;
struct sIfNode* result_194;
void* __right_value160 = (void*)0;
char* __dec_obj72;
void* __right_value161 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value162 = (void*)0;
struct sBlock* __dec_obj74;
void* __right_value163 = (void*)0;
struct list$1sNode$ph* __dec_obj75;
void* __right_value164 = (void*)0;
struct list$1sBlock$ph* __dec_obj76;
void* __right_value165 = (void*)0;
struct sBlock* __dec_obj77;
struct sIfNode* __result_obj__91;
    if(    self==(void*)0    ) {
        __result_obj__90 = (void*)0;
        return __result_obj__90;
    }
    result_194=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode*"));
    if(    self!=((void*)0)    ) {
        result_194->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj72=result_194->sname,
        result_194->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIfNode_clone", 5, "char*"));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_194->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        __dec_obj73=result_194->mExpressionNode,
        result_194->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        __dec_obj74=result_194->mIfBlock,
        result_194->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)    ) {
        __dec_obj75=result_194->mElifExpressionNodes,
        result_194->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mElifExpressionNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)    ) {
        __dec_obj76=result_194->mElifBlocks,
        result_194->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->mElifBlocks));
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_194->mElifNum=self->mElifNum;
    }
    if(    self!=((void*)0)    ) {
        result_194->mGuard=self->mGuard;
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)    ) {
        __dec_obj77=result_194->mElseBlock,
        result_194->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mElseBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__91 = result_194;
    come_call_finalizer(sIfNode_finalize, result_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value168 = (void*)0;
char* sname_195;
int sline_196;
void* __right_value169 = (void*)0;
struct sBlock* if_block_197;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sNode* _inf_value2;
struct sOrStatmentNode* _inf_obj_value2;
void* __right_value176 = (void*)0;
struct sNode* __result_obj__96;
    sname_195=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 477, "char*"));
    sline_196=info->sline;
    parse_sharp_v5(info);
    if_block_197=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 484, "struct sNode");
    _inf_obj_value2=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value171=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc_v2(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 484, "struct sOrStatmentNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block_197,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value2->clone=(void*)sOrStatmentNode_clone;
    _inf_value2->compile=(void*)sOrStatmentNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value2->kind=(void*)sOrStatmentNode_kind;
    __result_obj__96 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value176=_inf_value2)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_195 = come_decrement_ref_count(sname_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sBlock_finalize, if_block_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sOrStatmentNode_finalize, __right_value171, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value176) ? __right_value176 = come_decrement_ref_count(__right_value176, ((struct sNode*)__right_value176)->finalize, ((struct sNode*)__right_value176)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__96) ? __result_obj__96 = come_decrement_ref_count(__result_obj__96, ((struct sNode*)__result_obj__96)->finalize, ((struct sNode*)__result_obj__96)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__96;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
struct sOrStatmentNode* __result_obj__94;
void* __right_value172 = (void*)0;
struct sOrStatmentNode* result_198;
void* __right_value173 = (void*)0;
char* __dec_obj78;
void* __right_value174 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value175 = (void*)0;
struct sBlock* __dec_obj80;
struct sOrStatmentNode* __result_obj__95;
    if(    self==(void*)0    ) {
        __result_obj__94 = (void*)0;
        return __result_obj__94;
    }
    result_198=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc_v2(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode*"));
    if(    self!=((void*)0)    ) {
        result_198->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj78=result_198->sname,
        result_198->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrStatmentNode_clone", 5, "char*"));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_198->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        __dec_obj79=result_198->mExpressionNode,
        result_198->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        __dec_obj80=result_198->mIfBlock,
        result_198->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__95 = result_198;
    come_call_finalizer(sOrStatmentNode_finalize, result_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value177 = (void*)0;
char* sname_199;
int sline_200;
void* __right_value178 = (void*)0;
struct sBlock* if_block_201;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct sNode* _inf_value3;
struct sAndStatmentNode* _inf_obj_value3;
void* __right_value185 = (void*)0;
struct sNode* __result_obj__99;
    sname_199=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 489, "char*"));
    sline_200=info->sline;
    parse_sharp_v5(info);
    if_block_201=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 496, "struct sNode");
    _inf_obj_value3=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value180=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc_v2(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 496, "struct sAndStatmentNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block_201,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value3->clone=(void*)sAndStatmentNode_clone;
    _inf_value3->compile=(void*)sAndStatmentNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value3->kind=(void*)sAndStatmentNode_kind;
    __result_obj__99 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value185=_inf_value3)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_199 = come_decrement_ref_count(sname_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sBlock_finalize, if_block_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sAndStatmentNode_finalize, __right_value180, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value185) ? __right_value185 = come_decrement_ref_count(__right_value185, ((struct sNode*)__right_value185)->finalize, ((struct sNode*)__right_value185)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__99) ? __result_obj__99 = come_decrement_ref_count(__result_obj__99, ((struct sNode*)__result_obj__99)->finalize, ((struct sNode*)__result_obj__99)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__99;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
struct sAndStatmentNode* __result_obj__97;
void* __right_value181 = (void*)0;
struct sAndStatmentNode* result_202;
void* __right_value182 = (void*)0;
char* __dec_obj81;
void* __right_value183 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value184 = (void*)0;
struct sBlock* __dec_obj83;
struct sAndStatmentNode* __result_obj__98;
    if(    self==(void*)0    ) {
        __result_obj__97 = (void*)0;
        return __result_obj__97;
    }
    result_202=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc_v2(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode*"));
    if(    self!=((void*)0)    ) {
        result_202->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj81=result_202->sname,
        result_202->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndStatmentNode_clone", 5, "char*"));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_202->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        __dec_obj82=result_202->mExpressionNode,
        result_202->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        __dec_obj83=result_202->mIfBlock,
        result_202->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__98 = result_202;
    come_call_finalizer(sAndStatmentNode_finalize, result_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __right_value186 = (void*)0;
char* sname_203;
int sline_204;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct sNode* it_node_205;
void* __right_value189 = (void*)0;
struct sNode* conditional_value_206;
void* __right_value190 = (void*)0;
struct sBlock* if_block_207;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_208;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct list$1sBlock$ph* elif_blocks_209;
int elif_num_210;
struct sBlock* else_block_211;
void* __right_value195 = (void*)0;
struct sBlock* __dec_obj84;
void* __right_value196 = (void*)0;
struct sNode* conditional_value_212;
void* __right_value197 = (void*)0;
struct sBlock* elif_block_213;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct sBlock* __dec_obj85;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct sNode* _inf_value4;
struct sIfNode* _inf_obj_value4;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sNode* _inf_value5;
struct sMatchNode* _inf_obj_value5;
void* __right_value210 = (void*)0;
struct sNode* __result_obj__102;
    sname_203=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 501, "char*"));
    sline_204=info->sline;
    expected_next_character(123,info);
    it_node_205=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    expected_next_character(40,info);
    conditional_value_206=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    if_block_207=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_208=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 517, "struct list$1sNode$ph*"))));
    elif_blocks_209=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 518, "struct list$1sBlock$ph*"))));
    elif_num_210=0;
    else_block_211=((void*)0);
    while(    (_Bool)1    ) {
        parse_sharp_v5(info);
        if(        strncmp(info->p,"else",strlen("else"))==0        ) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __dec_obj84=else_block_211,
            else_block_211=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            come_call_finalizer(sBlock_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else {
            expected_next_character(40,info);
            conditional_value_212=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_add(elif_expression_nodes_208,(struct sNode*)come_increment_ref_count(conditional_value_212));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            elif_block_213=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlock$ph_add(elif_blocks_209,(struct sBlock*)come_increment_ref_count(elif_block_213));
            elif_num_210++;
            ((conditional_value_212) ? conditional_value_212 = come_decrement_ref_count(conditional_value_212, ((struct sNode*)conditional_value_212)->finalize, ((struct sNode*)conditional_value_212)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sBlock_finalize, elif_block_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        if(        *info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(    else_block_211==((void*)0)    ) {
        __dec_obj85=else_block_211,
        else_block_211=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 556, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_211->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_211->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 562, "struct sNode");
    _inf_obj_value4=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value203=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 562, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_value_206),if_block_207,elif_expression_nodes_208,elif_blocks_209,elif_num_210,else_block_211,(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sIfNode_finalize;
    _inf_value4->clone=(void*)sIfNode_clone;
    _inf_value4->compile=(void*)sIfNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sIfNode_terminated;
    _inf_value4->kind=(void*)sIfNode_kind;
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 562, "struct sNode");
    _inf_obj_value5=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value205=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc_v2(1, sizeof(struct sMatchNode)*(1), "08if.c", 562, "struct sMatchNode*")),(struct sNode*)come_increment_ref_count(it_node_205),(struct sNode*)come_increment_ref_count(_inf_value4),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMatchNode_finalize;
    _inf_value5->clone=(void*)sMatchNode_clone;
    _inf_value5->compile=(void*)sMatchNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMatchNode_terminated;
    _inf_value5->kind=(void*)sMatchNode_kind;
    __result_obj__102 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value210=_inf_value5)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_203 = come_decrement_ref_count(sname_203, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_205) ? it_node_205 = come_decrement_ref_count(it_node_205, ((struct sNode*)it_node_205)->finalize, ((struct sNode*)it_node_205)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_value_206) ? conditional_value_206 = come_decrement_ref_count(conditional_value_206, ((struct sNode*)conditional_value_206)->finalize, ((struct sNode*)conditional_value_206)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfNode_finalize, __right_value203, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sMatchNode_finalize, __right_value205, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value210) ? __right_value210 = come_decrement_ref_count(__right_value210, ((struct sNode*)__right_value210)->finalize, ((struct sNode*)__right_value210)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__102) ? __result_obj__102 = come_decrement_ref_count(__result_obj__102, ((struct sNode*)__result_obj__102)->finalize, ((struct sNode*)__result_obj__102)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__102;
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
struct sMatchNode* __result_obj__100;
void* __right_value206 = (void*)0;
struct sMatchNode* result_214;
void* __right_value207 = (void*)0;
char* __dec_obj86;
void* __right_value208 = (void*)0;
struct sNode* __dec_obj87;
void* __right_value209 = (void*)0;
struct sNode* __dec_obj88;
struct sMatchNode* __result_obj__101;
    if(    self==(void*)0    ) {
        __result_obj__100 = (void*)0;
        return __result_obj__100;
    }
    result_214=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc_v2(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "struct sMatchNode*"));
    if(    self!=((void*)0)    ) {
        result_214->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj86=result_214->sname,
        result_214->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMatchNode_clone", 5, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_214->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)    ) {
        __dec_obj87=result_214->it_node,
        result_214->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)    ) {
        __dec_obj88=result_214->match_node,
        result_214->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__101 = result_214;
    come_call_finalizer(sMatchNode_finalize, result_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value211 = (void*)0;
char* sname_215;
int sline_216;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct sNode* it_node_217;
void* __right_value214 = (void*)0;
struct sNode* conditional_node_218;
void* __right_value215 = (void*)0;
struct sBlock* if_block_219;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_220;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1sBlock$ph* elif_blocks_221;
int elif_num_222;
struct sBlock* else_block_223;
char* saved_p_224;
int saved_sline_225;
void* __right_value220 = (void*)0;
char* buf_226;
void* __right_value221 = (void*)0;
struct sNode* expression_node_227;
void* __right_value222 = (void*)0;
struct sBlock* elif_block_228;
void* __right_value223 = (void*)0;
struct sBlock* __dec_obj89;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct sBlock* __dec_obj90;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct sNode* _inf_value6;
struct sIfNode* _inf_obj_value6;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sNode* _inf_value7;
struct sIfMethodNode* _inf_obj_value7;
void* __right_value236 = (void*)0;
struct sNode* result_229;
struct sNode* __result_obj__105;
    sname_215=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 567, "char*"));
    sline_216=info->sline;
    it_node_217=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    conditional_node_218=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    if_block_219=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_220=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 578, "struct list$1sNode$ph*"))));
    elif_blocks_221=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 580, "struct list$1sBlock$ph*"))));
    elif_num_222=0;
    else_block_223=((void*)0);
    while(    1    ) {
        saved_p_224=info->p;
        saved_sline_225=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)        ) {
            break;
        }
        parse_sharp_v5(info);
        buf_226=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_226,"else")        ) {
            if(            parsecmp("if",info)            ) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_227=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_220,(struct sNode*)come_increment_ref_count(expression_node_227));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_228=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_221,(struct sBlock*)come_increment_ref_count(elif_block_228));
                elif_num_222++;
                ((expression_node_227) ? expression_node_227 = come_decrement_ref_count(expression_node_227, ((struct sNode*)expression_node_227)->finalize, ((struct sNode*)expression_node_227)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block_228, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                __dec_obj89=else_block_223,
                else_block_223=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (buf_226 = come_decrement_ref_count(buf_226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_224;
            info->sline=saved_sline_225;
            (buf_226 = come_decrement_ref_count(buf_226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_226 = come_decrement_ref_count(buf_226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    else_block_223==((void*)0)    ) {
        __dec_obj90=else_block_223,
        else_block_223=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 641, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_223->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_223->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 647, "struct sNode");
    _inf_obj_value6=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value229=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 647, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node_218),if_block_219,elif_expression_nodes_220,elif_blocks_221,elif_num_222,else_block_223,(_Bool)0,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sIfNode_finalize;
    _inf_value6->clone=(void*)sIfNode_clone;
    _inf_value6->compile=(void*)sIfNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sIfNode_terminated;
    _inf_value6->kind=(void*)sIfNode_kind;
    _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 647, "struct sNode");
    _inf_obj_value7=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value231=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 647, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_217),(struct sNode*)come_increment_ref_count(_inf_value6),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sIfMethodNode_finalize;
    _inf_value7->clone=(void*)sIfMethodNode_clone;
    _inf_value7->compile=(void*)sIfMethodNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sIfMethodNode_terminated;
    _inf_value7->kind=(void*)sIfMethodNode_kind;
    result_229=(struct sNode*)come_increment_ref_count(_inf_value7);
    come_call_finalizer(sIfNode_finalize, __right_value229, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value231, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__105 = (struct sNode*)come_increment_ref_count(result_229);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_215 = come_decrement_ref_count(sname_215, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_217) ? it_node_217 = come_decrement_ref_count(it_node_217, ((struct sNode*)it_node_217)->finalize, ((struct sNode*)it_node_217)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node_218) ? conditional_node_218 = come_decrement_ref_count(conditional_node_218, ((struct sNode*)conditional_node_218)->finalize, ((struct sNode*)conditional_node_218)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((result_229) ? result_229 = come_decrement_ref_count(result_229, ((struct sNode*)result_229)->finalize, ((struct sNode*)result_229)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__105) ? __result_obj__105 = come_decrement_ref_count(__result_obj__105, ((struct sNode*)__result_obj__105)->finalize, ((struct sNode*)__result_obj__105)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__105;
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
struct sIfMethodNode* __result_obj__103;
void* __right_value232 = (void*)0;
struct sIfMethodNode* result_230;
void* __right_value233 = (void*)0;
char* __dec_obj91;
void* __right_value234 = (void*)0;
struct sNode* __dec_obj92;
void* __right_value235 = (void*)0;
struct sNode* __dec_obj93;
struct sIfMethodNode* __result_obj__104;
    if(    self==(void*)0    ) {
        __result_obj__103 = (void*)0;
        return __result_obj__103;
    }
    result_230=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "struct sIfMethodNode*"));
    if(    self!=((void*)0)    ) {
        result_230->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj91=result_230->sname,
        result_230->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIfMethodNode_clone", 5, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_230->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)    ) {
        __dec_obj92=result_230->it_node,
        result_230->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)    ) {
        __dec_obj93=result_230->match_node,
        result_230->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__104 = result_230;
    come_call_finalizer(sIfMethodNode_finalize, result_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value237 = (void*)0;
char* sname_231;
int sline_232;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct sNode* it_node_233;
void* __right_value240 = (void*)0;
struct sNode* conditional_node_234;
void* __right_value241 = (void*)0;
struct sNode* conditional_node2_235;
void* __right_value242 = (void*)0;
struct sBlock* if_block_236;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_237;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1sBlock$ph* elif_blocks_238;
int elif_num_239;
struct sBlock* else_block_240;
char* saved_p_241;
int saved_sline_242;
void* __right_value247 = (void*)0;
char* buf_243;
void* __right_value248 = (void*)0;
struct sNode* expression_node_244;
void* __right_value249 = (void*)0;
struct sBlock* elif_block_245;
void* __right_value250 = (void*)0;
struct sBlock* __dec_obj94;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct sBlock* __dec_obj95;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct sNode* _inf_value8;
struct sIfNode* _inf_obj_value8;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sNode* _inf_value9;
struct sIfMethodNode* _inf_obj_value9;
void* __right_value259 = (void*)0;
struct sNode* result_246;
struct sNode* __result_obj__106;
    sname_231=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 654, "char*"));
    sline_232=info->sline;
    it_node_233=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    conditional_node_234=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_235=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_234),info));
    parse_sharp_v5(info);
    if_block_236=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_237=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 666, "struct list$1sNode$ph*"))));
    elif_blocks_238=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 668, "struct list$1sBlock$ph*"))));
    elif_num_239=0;
    else_block_240=((void*)0);
    while(    1    ) {
        saved_p_241=info->p;
        saved_sline_242=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)        ) {
            break;
        }
        parse_sharp_v5(info);
        buf_243=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_243,"else")        ) {
            if(            parsecmp("if",info)            ) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_244=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_237,(struct sNode*)come_increment_ref_count(expression_node_244));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_245=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_238,(struct sBlock*)come_increment_ref_count(elif_block_245));
                elif_num_239++;
                ((expression_node_244) ? expression_node_244 = come_decrement_ref_count(expression_node_244, ((struct sNode*)expression_node_244)->finalize, ((struct sNode*)expression_node_244)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                __dec_obj94=else_block_240,
                else_block_240=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (buf_243 = come_decrement_ref_count(buf_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_241;
            info->sline=saved_sline_242;
            (buf_243 = come_decrement_ref_count(buf_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_243 = come_decrement_ref_count(buf_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    else_block_240==((void*)0)    ) {
        __dec_obj95=else_block_240,
        else_block_240=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 729, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_240->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_240->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 735, "struct sNode");
    _inf_obj_value8=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value256=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 735, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_235),if_block_236,elif_expression_nodes_237,elif_blocks_238,elif_num_239,else_block_240,(_Bool)0,info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sIfNode_finalize;
    _inf_value8->clone=(void*)sIfNode_clone;
    _inf_value8->compile=(void*)sIfNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sIfNode_terminated;
    _inf_value8->kind=(void*)sIfNode_kind;
    _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 735, "struct sNode");
    _inf_obj_value9=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value258=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 735, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_233),(struct sNode*)come_increment_ref_count(_inf_value8),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sIfMethodNode_finalize;
    _inf_value9->clone=(void*)sIfMethodNode_clone;
    _inf_value9->compile=(void*)sIfMethodNode_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sIfMethodNode_terminated;
    _inf_value9->kind=(void*)sIfMethodNode_kind;
    result_246=(struct sNode*)come_increment_ref_count(_inf_value9);
    come_call_finalizer(sIfNode_finalize, __right_value256, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value258, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__106 = (struct sNode*)come_increment_ref_count(result_246);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_231 = come_decrement_ref_count(sname_231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_233) ? it_node_233 = come_decrement_ref_count(it_node_233, ((struct sNode*)it_node_233)->finalize, ((struct sNode*)it_node_233)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node_234) ? conditional_node_234 = come_decrement_ref_count(conditional_node_234, ((struct sNode*)conditional_node_234)->finalize, ((struct sNode*)conditional_node_234)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node2_235) ? conditional_node2_235 = come_decrement_ref_count(conditional_node2_235, ((struct sNode*)conditional_node2_235)->finalize, ((struct sNode*)conditional_node2_235)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((result_246) ? result_246 = come_decrement_ref_count(result_246, ((struct sNode*)result_246)->finalize, ((struct sNode*)result_246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__106) ? __result_obj__106 = come_decrement_ref_count(__result_obj__106, ((struct sNode*)__result_obj__106)->finalize, ((struct sNode*)__result_obj__106)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__106;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value260 = (void*)0;
char* sname_247;
int sline_248;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sNode* it_node_249;
void* __right_value263 = (void*)0;
struct sNode* conditional_node_250;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sNode* conditional_node2_251;
void* __right_value266 = (void*)0;
struct sBlock* if_block_252;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_253;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sBlock$ph* elif_blocks_254;
int elif_num_255;
struct sBlock* else_block_256;
char* saved_p_257;
int saved_sline_258;
void* __right_value271 = (void*)0;
char* buf_259;
void* __right_value272 = (void*)0;
struct sNode* expression_node_260;
void* __right_value273 = (void*)0;
struct sBlock* elif_block_261;
void* __right_value274 = (void*)0;
struct sBlock* __dec_obj96;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sBlock* __dec_obj97;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sNode* _inf_value10;
struct sIfNode* _inf_obj_value10;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sNode* _inf_value11;
struct sIfMethodNode* _inf_obj_value11;
void* __right_value283 = (void*)0;
struct sNode* result_262;
struct sNode* __result_obj__107;
    sname_247=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 742, "char*"));
    sline_248=info->sline;
    it_node_249=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    conditional_node_250=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_251=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node_250),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    parse_sharp_v5(info);
    if_block_252=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_253=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 754, "struct list$1sNode$ph*"))));
    elif_blocks_254=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 756, "struct list$1sBlock$ph*"))));
    elif_num_255=0;
    else_block_256=((void*)0);
    while(    1    ) {
        saved_p_257=info->p;
        saved_sline_258=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)        ) {
            break;
        }
        parse_sharp_v5(info);
        buf_259=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_259,"else")        ) {
            if(            parsecmp("if",info)            ) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_260=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_253,(struct sNode*)come_increment_ref_count(expression_node_260));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_261=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_254,(struct sBlock*)come_increment_ref_count(elif_block_261));
                elif_num_255++;
                ((expression_node_260) ? expression_node_260 = come_decrement_ref_count(expression_node_260, ((struct sNode*)expression_node_260)->finalize, ((struct sNode*)expression_node_260)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                __dec_obj96=else_block_256,
                else_block_256=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (buf_259 = come_decrement_ref_count(buf_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_257;
            info->sline=saved_sline_258;
            (buf_259 = come_decrement_ref_count(buf_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_259 = come_decrement_ref_count(buf_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    else_block_256==((void*)0)    ) {
        __dec_obj97=else_block_256,
        else_block_256=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 817, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_256->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_256->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 823, "struct sNode");
    _inf_obj_value10=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value280=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 823, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_251),if_block_252,elif_expression_nodes_253,elif_blocks_254,elif_num_255,else_block_256,(_Bool)0,info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sIfNode_finalize;
    _inf_value10->clone=(void*)sIfNode_clone;
    _inf_value10->compile=(void*)sIfNode_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sIfNode_terminated;
    _inf_value10->kind=(void*)sIfNode_kind;
    _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 823, "struct sNode");
    _inf_obj_value11=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value282=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 823, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_249),(struct sNode*)come_increment_ref_count(_inf_value10),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sIfMethodNode_finalize;
    _inf_value11->clone=(void*)sIfMethodNode_clone;
    _inf_value11->compile=(void*)sIfMethodNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sIfMethodNode_terminated;
    _inf_value11->kind=(void*)sIfMethodNode_kind;
    result_262=(struct sNode*)come_increment_ref_count(_inf_value11);
    come_call_finalizer(sIfNode_finalize, __right_value280, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value282, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__107 = (struct sNode*)come_increment_ref_count(result_262);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_247 = come_decrement_ref_count(sname_247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_249) ? it_node_249 = come_decrement_ref_count(it_node_249, ((struct sNode*)it_node_249)->finalize, ((struct sNode*)it_node_249)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node_250) ? conditional_node_250 = come_decrement_ref_count(conditional_node_250, ((struct sNode*)conditional_node_250)->finalize, ((struct sNode*)conditional_node_250)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node2_251) ? conditional_node2_251 = come_decrement_ref_count(conditional_node2_251, ((struct sNode*)conditional_node2_251)->finalize, ((struct sNode*)conditional_node2_251)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((result_262) ? result_262 = come_decrement_ref_count(result_262, ((struct sNode*)result_262)->finalize, ((struct sNode*)result_262)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__107) ? __result_obj__107 = come_decrement_ref_count(__result_obj__107, ((struct sNode*)__result_obj__107)->finalize, ((struct sNode*)__result_obj__107)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__107;
}

struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value284 = (void*)0;
char* sname_263;
int sline_264;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sNode* it_node_265;
void* __right_value287 = (void*)0;
struct sNode* value_node_266;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sNode* conditional_node_267;
void* __right_value290 = (void*)0;
struct sNode* conditional_node2_268;
void* __right_value291 = (void*)0;
struct sBlock* if_block_269;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_270;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sBlock$ph* elif_blocks_271;
int elif_num_272;
struct sBlock* else_block_273;
char* saved_p_274;
int saved_sline_275;
void* __right_value296 = (void*)0;
char* buf_276;
void* __right_value297 = (void*)0;
struct sNode* expression_node_277;
void* __right_value298 = (void*)0;
struct sBlock* elif_block_278;
void* __right_value299 = (void*)0;
struct sBlock* __dec_obj98;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sBlock* __dec_obj99;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sNode* node_279;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sNode* _inf_value12;
struct sIfNode* _inf_obj_value12;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct sNode* _inf_value13;
struct sIfMethodNode* _inf_obj_value13;
void* __right_value309 = (void*)0;
struct sNode* result_280;
struct sNode* __result_obj__108;
    sname_263=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 830, "char*"));
    sline_264=info->sline;
    it_node_265=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    value_node_266=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node_267=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_266),(char*)come_increment_ref_count(xsprintf("v2")),info));
    conditional_node2_268=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_267),info));
    parse_sharp_v5(info);
    if_block_269=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_270=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 843, "struct list$1sNode$ph*"))));
    elif_blocks_271=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 845, "struct list$1sBlock$ph*"))));
    elif_num_272=0;
    else_block_273=((void*)0);
    while(    1    ) {
        saved_p_274=info->p;
        saved_sline_275=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)        ) {
            break;
        }
        parse_sharp_v5(info);
        buf_276=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_276,"else")        ) {
            if(            parsecmp("if",info)            ) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_277=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_270,(struct sNode*)come_increment_ref_count(expression_node_277));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_278=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_271,(struct sBlock*)come_increment_ref_count(elif_block_278));
                elif_num_272++;
                ((expression_node_277) ? expression_node_277 = come_decrement_ref_count(expression_node_277, ((struct sNode*)expression_node_277)->finalize, ((struct sNode*)expression_node_277)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                __dec_obj98=else_block_273,
                else_block_273=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (buf_276 = come_decrement_ref_count(buf_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_274;
            info->sline=saved_sline_275;
            (buf_276 = come_decrement_ref_count(buf_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_276 = come_decrement_ref_count(buf_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    else_block_273==((void*)0)    ) {
        __dec_obj99=else_block_273,
        else_block_273=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 906, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_273->mOmitSemicolon=(_Bool)1;
        node_279=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_266),(char*)come_increment_ref_count(xsprintf("v1")),info));
        list$1sNode$ph_push_back(else_block_273->mNodes,(struct sNode*)come_increment_ref_count(node_279));
        ((node_279) ? node_279 = come_decrement_ref_count(node_279, ((struct sNode*)node_279)->finalize, ((struct sNode*)node_279)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 914, "struct sNode");
    _inf_obj_value12=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value306=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 914, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_268),if_block_269,elif_expression_nodes_270,elif_blocks_271,elif_num_272,else_block_273,(_Bool)0,info))));
    _inf_value12->_protocol_obj=_inf_obj_value12;
    _inf_value12->finalize=(void*)sIfNode_finalize;
    _inf_value12->clone=(void*)sIfNode_clone;
    _inf_value12->compile=(void*)sIfNode_compile;
    _inf_value12->sline=(void*)sNodeBase_sline;
    _inf_value12->sline_real=(void*)sNodeBase_sline_real;
    _inf_value12->sname=(void*)sNodeBase_sname;
    _inf_value12->terminated=(void*)sIfNode_terminated;
    _inf_value12->kind=(void*)sIfNode_kind;
    _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 914, "struct sNode");
    _inf_obj_value13=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value308=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 914, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_265),(struct sNode*)come_increment_ref_count(_inf_value12),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sIfMethodNode_finalize;
    _inf_value13->clone=(void*)sIfMethodNode_clone;
    _inf_value13->compile=(void*)sIfMethodNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sIfMethodNode_terminated;
    _inf_value13->kind=(void*)sIfMethodNode_kind;
    result_280=(struct sNode*)come_increment_ref_count(_inf_value13);
    come_call_finalizer(sIfNode_finalize, __right_value306, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value308, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__108 = (struct sNode*)come_increment_ref_count(result_280);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_263 = come_decrement_ref_count(sname_263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_265) ? it_node_265 = come_decrement_ref_count(it_node_265, ((struct sNode*)it_node_265)->finalize, ((struct sNode*)it_node_265)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value_node_266) ? value_node_266 = come_decrement_ref_count(value_node_266, ((struct sNode*)value_node_266)->finalize, ((struct sNode*)value_node_266)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node_267) ? conditional_node_267 = come_decrement_ref_count(conditional_node_267, ((struct sNode*)conditional_node_267)->finalize, ((struct sNode*)conditional_node_267)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node2_268) ? conditional_node2_268 = come_decrement_ref_count(conditional_node2_268, ((struct sNode*)conditional_node2_268)->finalize, ((struct sNode*)conditional_node2_268)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block_269, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((result_280) ? result_280 = come_decrement_ref_count(result_280, ((struct sNode*)result_280)->finalize, ((struct sNode*)result_280)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__108) ? __result_obj__108 = come_decrement_ref_count(__result_obj__108, ((struct sNode*)__result_obj__108)->finalize, ((struct sNode*)__result_obj__108)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__108;
}

struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value310 = (void*)0;
char* sname_281;
int sline_282;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sNode* it_node_283;
void* __right_value313 = (void*)0;
struct sNode* value_node_284;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sNode* conditional_node_285;
void* __right_value316 = (void*)0;
struct sNode* conditional_node2_286;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct buffer* buf_287;
char* p_288;
struct buffer* source_289;
char* head_290;
char* p_291;
int sline_292;
struct buffer* __dec_obj100;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sBlock* if_block_293;
struct buffer* __dec_obj101;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_294;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1sBlock$ph* elif_blocks_295;
int elif_num_296;
struct sBlock* else_block_297;
char* saved_p_298;
int saved_sline_299;
void* __right_value325 = (void*)0;
char* buf_300;
void* __right_value326 = (void*)0;
struct sNode* expression_node_301;
void* __right_value327 = (void*)0;
struct sBlock* elif_block_302;
void* __right_value328 = (void*)0;
struct sBlock* __dec_obj102;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sBlock* __dec_obj103;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sNode* node_303;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* _inf_value14;
struct sIfNode* _inf_obj_value14;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct sNode* _inf_value15;
struct sIfMethodNode* _inf_obj_value15;
void* __right_value338 = (void*)0;
struct sNode* result_304;
struct sNode* __result_obj__109;
    sname_281=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 921, "char*"));
    sline_282=info->sline;
    it_node_283=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    value_node_284=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node_285=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_284),(char*)come_increment_ref_count(xsprintf("v2")),info));
    conditional_node2_286=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_285),info));
    parse_sharp_v5(info);
    buf_287=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value317=xsprintf("{ puts(\"%s %d: exception\"); exit(39); 39 }\n",info->sname,info->sline)))));
    (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    p_288=info->p;
    source_289=(struct buffer*)come_increment_ref_count(info->source);
    head_290=info->head;
    p_291=info->p;
    sline_292=info->sline;
    __dec_obj100=info->source,
    info->source=(struct buffer*)come_increment_ref_count(buf_287);
    come_call_finalizer(buffer_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->head=((char*)(__right_value319=buffer_to_string(info->source)));
    (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    info->p=info->head;
    info->sline=0;
    if_block_293=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj101=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_289);
    come_call_finalizer(buffer_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->head=head_290;
    info->p=p_291;
    info->sline=sline_292;
    elif_expression_nodes_294=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 953, "struct list$1sNode$ph*"))));
    elif_blocks_295=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 955, "struct list$1sBlock$ph*"))));
    elif_num_296=0;
    else_block_297=((void*)0);
    while(    1    ) {
        saved_p_298=info->p;
        saved_sline_299=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)        ) {
            break;
        }
        parse_sharp_v5(info);
        buf_300=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_300,"else")        ) {
            if(            parsecmp("if",info)            ) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_301=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_294,(struct sNode*)come_increment_ref_count(expression_node_301));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_302=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_295,(struct sBlock*)come_increment_ref_count(elif_block_302));
                elif_num_296++;
                ((expression_node_301) ? expression_node_301 = come_decrement_ref_count(expression_node_301, ((struct sNode*)expression_node_301)->finalize, ((struct sNode*)expression_node_301)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                __dec_obj102=else_block_297,
                else_block_297=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (buf_300 = come_decrement_ref_count(buf_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_298;
            info->sline=saved_sline_299;
            (buf_300 = come_decrement_ref_count(buf_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_300 = come_decrement_ref_count(buf_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    else_block_297==((void*)0)    ) {
        __dec_obj103=else_block_297,
        else_block_297=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 1016, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_297->mOmitSemicolon=(_Bool)1;
        node_303=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_284),(char*)come_increment_ref_count(xsprintf("v1")),info));
        list$1sNode$ph_push_back(else_block_297->mNodes,(struct sNode*)come_increment_ref_count(node_303));
        ((node_303) ? node_303 = come_decrement_ref_count(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 1024, "struct sNode");
    _inf_obj_value14=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value335=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 1024, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_286),if_block_293,elif_expression_nodes_294,elif_blocks_295,elif_num_296,else_block_297,(_Bool)0,info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sIfNode_finalize;
    _inf_value14->clone=(void*)sIfNode_clone;
    _inf_value14->compile=(void*)sIfNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sIfNode_terminated;
    _inf_value14->kind=(void*)sIfNode_kind;
    _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 1024, "struct sNode");
    _inf_obj_value15=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value337=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1024, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_283),(struct sNode*)come_increment_ref_count(_inf_value14),info))));
    _inf_value15->_protocol_obj=_inf_obj_value15;
    _inf_value15->finalize=(void*)sIfMethodNode_finalize;
    _inf_value15->clone=(void*)sIfMethodNode_clone;
    _inf_value15->compile=(void*)sIfMethodNode_compile;
    _inf_value15->sline=(void*)sNodeBase_sline;
    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
    _inf_value15->sname=(void*)sNodeBase_sname;
    _inf_value15->terminated=(void*)sIfMethodNode_terminated;
    _inf_value15->kind=(void*)sIfMethodNode_kind;
    result_304=(struct sNode*)come_increment_ref_count(_inf_value15);
    come_call_finalizer(sIfNode_finalize, __right_value335, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value337, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__109 = (struct sNode*)come_increment_ref_count(result_304);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_281 = come_decrement_ref_count(sname_281, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_283) ? it_node_283 = come_decrement_ref_count(it_node_283, ((struct sNode*)it_node_283)->finalize, ((struct sNode*)it_node_283)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value_node_284) ? value_node_284 = come_decrement_ref_count(value_node_284, ((struct sNode*)value_node_284)->finalize, ((struct sNode*)value_node_284)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node_285) ? conditional_node_285 = come_decrement_ref_count(conditional_node_285, ((struct sNode*)conditional_node_285)->finalize, ((struct sNode*)conditional_node_285)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node2_286) ? conditional_node2_286 = come_decrement_ref_count(conditional_node2_286, ((struct sNode*)conditional_node2_286)->finalize, ((struct sNode*)conditional_node2_286)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf_287, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, source_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, if_block_293, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_294, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_297, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((result_304) ? result_304 = come_decrement_ref_count(result_304, ((struct sNode*)result_304)->finalize, ((struct sNode*)result_304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__109) ? __result_obj__109 = come_decrement_ref_count(__result_obj__109, ((struct sNode*)__result_obj__109)->finalize, ((struct sNode*)__result_obj__109)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__109;
}

