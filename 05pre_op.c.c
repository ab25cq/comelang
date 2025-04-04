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
    _Bool mDynamic;
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

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sRefferenceNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sParenBlockNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* paren_block;
};

struct sDerefferenceNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    _Bool mQuote;
};

struct sLogicalDenial
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sLogicalDenial2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sReverseNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sMinusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sPlusPlusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sMinusMinusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sNormalBlock
{
    int sline;
    char* sname;
    int sline_real;
    struct sBlock* mBlock;
    _Bool clang;
    _Bool comma;
};

struct sComplement
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sParenNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
};

struct sCastNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* mType;
    struct sNode* mLeft;
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
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
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
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self);
static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self);
static _Bool tuple2$2void$psNode$ph_equals(struct tuple2$2void$psNode$ph* left, struct tuple2$2void$psNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);
char* sRefferenceNode_kind(struct sRefferenceNode* self);
_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo* info);
char* sParenBlockNode_kind(struct sParenBlockNode* self);
_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo* info);
static void sParenBlockNode_finalize(struct sParenBlockNode* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);
char* sDerefferenceNode_kind(struct sDerefferenceNode* self);
_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);
char* sLogicalDenial_kind(struct sLogicalDenial* self);
_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);
static void sLogicalDenial_finalize(struct sLogicalDenial* self);
struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo* info);
char* sLogicalDenial2_kind(struct sLogicalDenial2* self);
_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo* info);
static void sLogicalDenial2_finalize(struct sLogicalDenial2* self);
struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);
char* sReverseNode_kind(struct sReverseNode* self);
_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);
static void sReverseNode_finalize(struct sReverseNode* self);
struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);
char* sMinusNode2_kind(struct sMinusNode2* self);
_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);
static void sMinusNode2_finalize(struct sMinusNode2* self);
struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);
char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self);
_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);
char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self);
_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info);
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
_Bool sNormalBlock_terminated(struct sNormalBlock* self);
char* sNormalBlock_kind(struct sNormalBlock* self);
_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
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
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sNormalBlock_finalize(struct sNormalBlock* self);
struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info);
char* sComplement_kind(struct sComplement* self);
_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);
static void sComplement_finalize(struct sComplement* self);
struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);
char* sParenNode_kind(struct sParenNode* self);
_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);
static void sParenNode_finalize(struct sParenNode* self);
struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);
char* sCastNode_kind(struct sCastNode* self);
_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);
static void sCastNode_finalize(struct sCastNode* self);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
struct sNode* pre_position_operator(struct sInfo* info);
static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_node_v98(struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info){
void* __right_value38 = (void*)0;
struct sType* generics_type_0;
struct sType* __dec_obj25;
struct sClass* klass_30;
char* class_name_31;
struct sFun* operator_fun_32;
char* fun_name2_33;
struct sGenericsFun* generics_fun_34;
void* __right_value39 = (void*)0;
char* none_generics_name_35;
void* __right_value40 = (void*)0;
struct sType* obj_type_36;
void* __right_value41 = (void*)0;
char* __dec_obj26;
void* __right_value42 = (void*)0;
char* fun_name3_37;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_40=0;
_Bool err_41=0;
_Bool __result_obj__21;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_48=0;
char* fun_name_49=0;
void* __right_value48 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var3 = (void*)0;
struct sFun* fun2_50=0;
char* fun_name2_51=0;
void* __right_value49 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun_52=0;
char* fun_name_53=0;
void* __right_value50 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_54=0;
char* fun_name2_55=0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
char* __dec_obj27;
int i_56;
void* __right_value53 = (void*)0;
char* new_fun_name_57;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
char* __dec_obj28;
void* __right_value56 = (void*)0;
_Bool result_58;
struct sNode* obj_59;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_60;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct sNode* node_68;
_Bool Value_69;
_Bool __result_obj__35;
fun_name2_33 = (void*)0;
memset(&i_56, 0, sizeof(int));
    generics_type_0=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_0->mNoSolvedGenericsType) {
        __dec_obj25=generics_type_0,
        generics_type_0=(struct sType*)come_increment_ref_count(generics_type_0->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_32=((void*)0);
    generics_fun_34=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_35=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_36=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj26=fun_name2_33,
        fun_name2_33=(char*)come_increment_ref_count(create_method_name(obj_type_36,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_37=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_35,fun_name));
        generics_fun_34=((struct sGenericsFun*)(__right_value43=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_37,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value43,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_34) {
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value45=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_33)),generics_fun_34,obj_type_36,info)));
            name_40=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_41=multiple_assign_var1->v2;
            /*c*/ come_call_finalizer3(__right_value45,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_41) {
                __result_obj__21 = (_Bool)0;
                (name_40 = come_decrement_ref_count(name_40, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_35 = come_decrement_ref_count(none_generics_name_35, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_36,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_37 = come_decrement_ref_count(fun_name3_37, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(generics_type_0,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__21;
            }
            operator_fun_32=((struct sFun*)(__right_value46=map$2char$phsFun$ph_operator_load_element(info->funcs,name_40)));
            /*c*/ come_call_finalizer3(__right_value46,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_40 = come_decrement_ref_count(name_40, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value47=create_equals_automatically(obj_type_36,"equals",info)));
                fun_48=multiple_assign_var2->v1;
                fun_name_49=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                /*c*/ come_call_finalizer3(__right_value47,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value48=create_operator_equals_automatically(obj_type_36,"operator_equals",info)));
                fun2_50=multiple_assign_var3->v1;
                fun_name2_51=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                /*c*/ come_call_finalizer3(__right_value48,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                operator_fun_32=fun2_50;
                (fun_name_49 = come_decrement_ref_count(fun_name_49, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_51 = come_decrement_ref_count(fun_name2_51, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value49=create_equals_automatically(obj_type_36,"not_equals",info)));
                fun_52=multiple_assign_var4->v1;
                fun_name_53=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                /*c*/ come_call_finalizer3(__right_value49,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value50=create_operator_not_equals_automatically(obj_type_36,"operator_not_equals",info)));
                fun2_54=multiple_assign_var5->v1;
                fun_name2_55=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                /*c*/ come_call_finalizer3(__right_value50,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                operator_fun_32=fun2_54;
                (fun_name_53 = come_decrement_ref_count(fun_name_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_55 = come_decrement_ref_count(fun_name2_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                operator_fun_32=((struct sFun*)(__right_value51=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_33)));
                /*c*/ come_call_finalizer3(__right_value51,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        (none_generics_name_35 = come_decrement_ref_count(none_generics_name_35, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_36,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_37 = come_decrement_ref_count(fun_name3_37, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj27=fun_name2_33,
        fun_name2_33=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_56=128-1;        i_56>=1;        i_56--        ){
            new_fun_name_57=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_33,i_56));
            operator_fun_32=((struct sFun*)(__right_value54=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_57)));
            /*c*/ come_call_finalizer3(__right_value54,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            operator_fun_32) {
                __dec_obj28=fun_name2_33,
                fun_name2_33=(char*)come_increment_ref_count(__builtin_string(new_fun_name_57));
                __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_57 = come_decrement_ref_count(new_fun_name_57, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_57 = come_decrement_ref_count(new_fun_name_57, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        operator_fun_32==((void*)0)) {
            operator_fun_32=((struct sFun*)(__right_value56=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_33)));
            /*c*/ come_call_finalizer3(__right_value56,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    result_58=(_Bool)0;
    if(    operator_fun_32) {
        obj_59=(struct sNode*)come_increment_ref_count(node);
        params_60=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05pre_op.c", 82, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_60,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "05pre_op.c", 84, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(obj_59))));
        node_68=(struct sNode*)come_increment_ref_count(create_method_call(fun_name2_33,(struct sNode*)come_increment_ref_count(obj_59),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_60),((void*)0),0,((void*)0),(_Bool)0,info));
        Value_69=node_compile(node_68,info);
        if(        Value_69) {
            result_58=(_Bool)1;
        }
        else {
        }
        ((obj_59) ? obj_59 = come_decrement_ref_count(obj_59, ((struct sNode*)obj_59)->finalize, ((struct sNode*)obj_59)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_60,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_68) ? node_68 = come_decrement_ref_count(node_68, ((struct sNode*)node_68)->finalize, ((struct sNode*)node_68)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__35 = result_58;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(generics_type_0,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__35;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value0 = (void*)0;
struct sType* result_1;
void* __right_value1 = (void*)0;
struct sType* __dec_obj1;
void* __right_value2 = (void*)0;
struct sType* __dec_obj2;
void* __right_value10 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value11 = (void*)0;
struct sType* __dec_obj7;
void* __right_value12 = (void*)0;
struct sType* __dec_obj8;
void* __right_value14 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value15 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value16 = (void*)0;
char* __dec_obj11;
void* __right_value17 = (void*)0;
char* __dec_obj12;
void* __right_value18 = (void*)0;
char* __dec_obj13;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
void* __right_value27 = (void*)0;
char* __dec_obj18;
void* __right_value28 = (void*)0;
struct list$1sType$ph* __dec_obj19;
void* __right_value36 = (void*)0;
struct list$1char$ph* __dec_obj23;
void* __right_value37 = (void*)0;
struct sType* __dec_obj24;
struct sType* __result_obj__16;
    if(    self==(void*)0) {
        __result_obj__1 = (void*)0;
        return __result_obj__1;
    }
    result_1=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_1->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj1=result_1->mOriginalLoadVarType,
        result_1->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj1,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj2=result_1->mChannelType,
        result_1->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj2,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj6=result_1->mGenericsTypes,
        result_1->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj6,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj7=result_1->mNoSolvedGenericsType,
        result_1->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj7,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj8=result_1->mAnyOriginalType,
        result_1->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj8,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj9=result_1->mSizeNum,
        result_1->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj10=result_1->mAlignas,
        result_1->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj11=result_1->mTupleName,
        result_1->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj12=result_1->mAttribute,
        result_1->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_1->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_1->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_1->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_1->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_1->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_1->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_1->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_1->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_1->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_1->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_1->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_1->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_1->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_1->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_1->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_1->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_1->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_1->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_1->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_1->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_1->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_1->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_1->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj13=result_1->mAsmName,
        result_1->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_1->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_1->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj17=result_1->mArrayNum,
        result_1->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj17,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_1->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_1->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_1->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_1->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj18=result_1->mOriginalTypeName,
        result_1->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_1->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_1->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_1->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj19=result_1->mParamTypes,
        result_1->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj19,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj23=result_1->mParamNames,
        result_1->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj23,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj24=result_1->mResultType,
        result_1->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_1->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__16 = result_1;
    /*c*/ come_call_finalizer3(result_1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__16;
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
struct list_item$1sType$ph* it_2;
struct list_item$1sType$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)) {
        prev_it_3=it_2;
        it_2=it_2->next;
        /*c*/ come_call_finalizer3(prev_it_3,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_4;
struct list_item$1sNode$ph* prev_it_5;
    it_4=self->head;
    while(    it_4!=((void*)0)) {
        prev_it_5=it_4;
        it_4=it_4->next;
        /*c*/ come_call_finalizer3(prev_it_5,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_6;
struct list_item$1char$ph* prev_it_7;
    it_6=self->head;
    while(    it_6!=((void*)0)) {
        prev_it_7=it_6;
        it_6=it_6->next;
        /*c*/ come_call_finalizer3(prev_it_7,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct list$1sType$ph* result_8;
struct list_item$1sType$ph* it_9;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__2,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__2;
    }
    result_8=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_9=self->head;
    while(    it_9!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_8,(struct sType*)come_increment_ref_count(sType_clone(it_9->item)));
        }
        else {
            list$1sType$ph_add(result_8,(struct sType*)come_increment_ref_count(sType_clone(it_9->item)));
        }
        it_9=it_9->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result_8);
    /*c*/ come_call_finalizer3(result_8,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__5,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__3;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__3 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__3,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__3;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value5 = (void*)0;
struct list_item$1sType$ph* litem_10;
struct sType* __dec_obj3;
void* __right_value6 = (void*)0;
struct list_item$1sType$ph* litem_11;
struct sType* __dec_obj4;
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_12;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0) {
        litem_10=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value5=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_10->prev=((void*)0);
        litem_10->next=((void*)0);
        __dec_obj3=litem_10->item,
        litem_10->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj3,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_10;
        self->head=litem_10;
    }
    else if(    self->len==1) {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value6=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        __dec_obj4=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_12->prev=self->tail;
        litem_12->next=((void*)0);
        __dec_obj5=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_12;
        self->tail=litem_12;
    }
    self->len++;
    __result_obj__4 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_13;
struct list_item$1sType$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)) {
        prev_it_14=it_13;
        it_13=it_13->next;
        /*c*/ come_call_finalizer3(prev_it_14,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__6;
void* __right_value13 = (void*)0;
struct sNode* result_15;
struct sNode* __result_obj__7;
    if(    self==(void*)0) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__6;
    }
    result_15=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_15->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_15->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_15->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_15->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_15->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_15->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_15->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_15->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_15->kind=self->kind;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_15);
    ((result_15) ? result_15 = come_decrement_ref_count(result_15, ((struct sNode*)result_15)->finalize, ((struct sNode*)result_15)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct list$1sNode$ph* result_16;
struct list_item$1sNode$ph* it_17;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__8,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__8;
    }
    result_16=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_17=self->head;
    while(    it_17!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_16,(struct sNode*)come_increment_ref_count(sNode_clone(it_17->item)));
        }
        else {
            list$1sNode$ph_add(result_16,(struct sNode*)come_increment_ref_count(sNode_clone(it_17->item)));
        }
        it_17=it_17->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result_16);
    /*c*/ come_call_finalizer3(result_16,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__11,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__9,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value21 = (void*)0;
struct list_item$1sNode$ph* litem_18;
struct sNode* __dec_obj14;
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_19;
struct sNode* __dec_obj15;
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_20;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0) {
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value21=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_18->prev=((void*)0);
        litem_18->next=((void*)0);
        __dec_obj14=litem_18->item,
        litem_18->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_18;
        self->head=litem_18;
    }
    else if(    self->len==1) {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_19->prev=self->head;
        litem_19->next=((void*)0);
        __dec_obj15=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_19;
        self->head->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_20->prev=self->tail;
        litem_20->next=((void*)0);
        __dec_obj16=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_20;
        self->tail=litem_20;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_21;
struct list_item$1sNode$ph* prev_it_22;
    it_21=self->head;
    while(    it_21!=((void*)0)) {
        prev_it_22=it_21;
        it_21=it_21->next;
        /*c*/ come_call_finalizer3(prev_it_22,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__12;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct list$1char$ph* result_23;
struct list_item$1char$ph* it_24;
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__12,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__12;
    }
    result_23=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_24=self->head;
    while(    it_24!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_24->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_24->item, "./comelang.h", 1032, "char*")));
        }
        it_24=it_24->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result_23);
    /*c*/ come_call_finalizer3(result_23,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__15,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__13,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__13;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value31 = (void*)0;
struct list_item$1char$ph* litem_25;
char* __dec_obj20;
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj21;
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj22;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0) {
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value31=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_25->prev=((void*)0);
        litem_25->next=((void*)0);
        __dec_obj20=litem_25->item,
        litem_25->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_25;
        self->head=litem_25;
    }
    else if(    self->len==1) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        __dec_obj21=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        __dec_obj22=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_27;
        self->tail=litem_27;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_28;
struct list_item$1char$ph* prev_it_29;
    it_28=self->head;
    while(    it_28!=((void*)0)) {
        prev_it_29=it_28;
        it_28=it_28->next;
        /*c*/ come_call_finalizer3(prev_it_29,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_38;
unsigned int it_39;
struct sGenericsFun* __result_obj__17;
struct sGenericsFun* __result_obj__18;
struct sGenericsFun* __result_obj__19;
struct sGenericsFun* __result_obj__20;
    hash_38=string_get_hash_key(((char*)key))%self->size;
    it_39=hash_38;
    while(    (_Bool)1) {
        if(        self->item_existance[it_39]) {
            if(            string_equals(self->keys[it_39],key)) {
                __result_obj__17 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_39]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__17,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__17;
            }
            it_39++;
            if(            it_39>=self->size) {
                it_39=0;
            }
            else if(            it_39==hash_38) {
                __result_obj__18 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__18,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__18;
            }
        }
        else {
            __result_obj__19 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__19,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__19;
        }
    }
    __result_obj__20 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__20,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__20;
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

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_42;
unsigned int hash_43;
unsigned int it_44;
struct sFun* __result_obj__22;
struct sFun* __result_obj__23;
struct sFun* __result_obj__24;
struct sFun* __result_obj__25;
default_value_42 = (void*)0;
    memset(&default_value_42,0,sizeof(struct sFun*));
    hash_43=string_get_hash_key(((char*)key))%self->size;
    it_44=hash_43;
    while(    (_Bool)1) {
        if(        self->item_existance[it_44]) {
            if(            string_equals(self->keys[it_44],key)) {
                __result_obj__22 = (struct sFun*)come_increment_ref_count(self->items[it_44]);
                /*c*/ come_call_finalizer3(default_value_42,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__22,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__22;
            }
            it_44++;
            if(            it_44>=self->size) {
                it_44=0;
            }
            else if(            it_44==hash_43) {
                __result_obj__23 = (struct sFun*)come_increment_ref_count(default_value_42);
                /*c*/ come_call_finalizer3(default_value_42,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__23,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__23;
            }
        }
        else {
            __result_obj__24 = (struct sFun*)come_increment_ref_count(default_value_42);
            /*c*/ come_call_finalizer3(default_value_42,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__24,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__24;
        }
    }
    __result_obj__25 = (struct sFun*)come_increment_ref_count(default_value_42);
    /*c*/ come_call_finalizer3(default_value_42,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__25,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__25;
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
struct sFun* default_value_45;
unsigned int hash_46;
unsigned int it_47;
struct sFun* __result_obj__26;
struct sFun* __result_obj__27;
struct sFun* __result_obj__28;
struct sFun* __result_obj__29;
default_value_45 = (void*)0;
    memset(&default_value_45,0,sizeof(struct sFun*));
    hash_46=string_get_hash_key(((char*)key))%self->size;
    it_47=hash_46;
    while(    (_Bool)1) {
        if(        self->item_existance[it_47]) {
            if(            string_equals(self->keys[it_47],key)) {
                __result_obj__26 = (struct sFun*)come_increment_ref_count(self->items[it_47]);
                /*c*/ come_call_finalizer3(default_value_45,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__26,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__26;
            }
            it_47++;
            if(            it_47>=self->size) {
                it_47=0;
            }
            else if(            it_47==hash_46) {
                __result_obj__27 = (struct sFun*)come_increment_ref_count(default_value_45);
                /*c*/ come_call_finalizer3(default_value_45,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__27,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__27;
            }
        }
        else {
            __result_obj__28 = (struct sFun*)come_increment_ref_count(default_value_45);
            /*c*/ come_call_finalizer3(default_value_45,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__28,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__28;
        }
    }
    __result_obj__29 = (struct sFun*)come_increment_ref_count(default_value_45);
    /*c*/ come_call_finalizer3(default_value_45,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__29,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__29;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__30;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__30 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__30,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__30;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_61;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_62;
    it_61=self->head;
    while(    it_61!=((void*)0)) {
        prev_it_62=it_61;
        it_61=it_61->next;
        /*c*/ come_call_finalizer3(prev_it_62,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value59 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_63;
struct tuple2$2char$phsNode$ph* __dec_obj29;
void* __right_value60 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_64;
struct tuple2$2char$phsNode$ph* __dec_obj30;
void* __right_value61 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_65;
struct tuple2$2char$phsNode$ph* __dec_obj31;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__31;
    if(    self->len==0) {
        litem_63=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value59=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_63->prev=((void*)0);
        litem_63->next=((void*)0);
        __dec_obj29=litem_63->item,
        litem_63->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj29,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_63;
        self->head=litem_63;
    }
    else if(    self->len==1) {
        litem_64=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value60=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_64->prev=self->head;
        litem_64->next=((void*)0);
        __dec_obj30=litem_64->item,
        litem_64->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj30,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_64;
        self->head->next=litem_64;
    }
    else {
        litem_65=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value61=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_65->prev=self->tail;
        litem_65->next=((void*)0);
        __dec_obj31=litem_65->item,
        litem_65->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj31,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_65;
        self->tail=litem_65;
    }
    self->len++;
    __result_obj__31 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__31;
}

static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self){
struct tuple2$2void$psNode$ph* __result_obj__32;
void* __right_value62 = (void*)0;
struct tuple2$2void$psNode$ph* result_66;
void* __right_value63 = (void*)0;
struct sNode* __dec_obj32;
struct tuple2$2void$psNode$ph* __result_obj__33;
    if(    self==(void*)0) {
        __result_obj__32 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__32,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__32;
    }
    result_66=(struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "tuple2$2void$psNode$ph_clone", 3, "struct tuple2$2void$psNode$ph*"));
    if(    self!=((void*)0)) {
        result_66->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj32=result_66->v2,
        result_66->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__33 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(result_66);
    /*c*/ come_call_finalizer3(result_66,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__33,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__33;
}

static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self){
unsigned int result_67;
    result_67=0;
    result_67+=int_get_hash_key(((int)self->v1));
    result_67+=int_get_hash_key(((int)self->v2));
    return result_67;
}

static _Bool tuple2$2void$psNode$ph_equals(struct tuple2$2void$psNode$ph* left, struct tuple2$2void$psNode$ph* right){
    if(    !voidp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj33;
struct tuple2$2void$psNode$ph* __result_obj__34;
    self->v1=v1;
    __dec_obj33=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__34 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__34,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__34;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __right_value67 = (void*)0;
struct sNode* __dec_obj34;
struct sRefferenceNode* __result_obj__36;
    ((struct sNodeBase*)(__right_value67=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value67,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj34=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__36 = (struct sRefferenceNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sRefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__36,sRefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__36;
}

char* sRefferenceNode_kind(struct sRefferenceNode* self){
void* __right_value68 = (void*)0;
char* __result_obj__37;
    __result_obj__37 = (char*)come_increment_ref_count(((char*)(__right_value68=__builtin_string("sRefferenceNode"))));
    (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__37 = come_decrement_ref_count(__result_obj__37, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__37;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
struct sNode* value_70;
void* __right_value69 = (void*)0;
struct CVALUE* left_value_71;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct CVALUE* come_value_72;
void* __right_value72 = (void*)0;
char* __dec_obj35;
void* __right_value73 = (void*)0;
char* __dec_obj36;
void* __right_value74 = (void*)0;
struct sType* __dec_obj37;
_Bool __result_obj__39;
    value_70=self->value;
    if(    !node_compile(value_70,info)) {
        return (_Bool)0;
    }
    left_value_71=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_72=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 120, "struct CVALUE*"))));
    if(    left_value_71->c_value_without_cast_object_value) {
        __dec_obj35=come_value_72->c_value,
        come_value_72->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value_71->c_value_without_cast_object_value));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj36=come_value_72->c_value,
        come_value_72->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value_71->c_value));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj37=come_value_72->type,
    come_value_72->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_71->type));
    /*b*/ come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_72->type->mPointerNum++;
    come_value_72->var=((void*)0);
    add_come_last_code(info,"%s",come_value_72->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_72));
    __result_obj__39 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_71,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_72,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__39;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value75 = (void*)0;
struct list_item$1CVALUE$ph* litem_73;
struct CVALUE* __dec_obj38;
void* __right_value76 = (void*)0;
struct list_item$1CVALUE$ph* litem_74;
struct CVALUE* __dec_obj39;
void* __right_value77 = (void*)0;
struct list_item$1CVALUE$ph* litem_75;
struct CVALUE* __dec_obj40;
struct list$1CVALUE$ph* __result_obj__38;
    if(    self->len==0) {
        litem_73=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value75=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_73->prev=((void*)0);
        litem_73->next=((void*)0);
        __dec_obj38=litem_73->item,
        litem_73->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_73;
        self->head=litem_73;
    }
    else if(    self->len==1) {
        litem_74=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value76=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_74->prev=self->head;
        litem_74->next=((void*)0);
        __dec_obj39=litem_74->item,
        litem_74->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_74;
        self->head->next=litem_74;
    }
    else {
        litem_75=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value77=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_75->prev=self->tail;
        litem_75->next=((void*)0);
        __dec_obj40=litem_75->item,
        litem_75->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_75;
        self->tail=litem_75;
    }
    self->len++;
    __result_obj__38 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__38;
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

struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo* info){
void* __right_value78 = (void*)0;
struct list$1sNode$ph* __dec_obj41;
struct sParenBlockNode* __result_obj__40;
    ((struct sNodeBase*)(__right_value78=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value78,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj41=self->paren_block,
    self->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(paren_block);
    /*b*/ come_call_finalizer3(__dec_obj41,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__40 = (struct sParenBlockNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sParenBlockNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(paren_block,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__40,sParenBlockNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__40;
}

char* sParenBlockNode_kind(struct sParenBlockNode* self){
void* __right_value79 = (void*)0;
char* __result_obj__41;
    __result_obj__41 = (char*)come_increment_ref_count(((char*)(__right_value79=__builtin_string("sParenBlockNode"))));
    (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__41 = come_decrement_ref_count(__result_obj__41, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__41;
}

_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo* info){
struct list$1sNode$ph* paren_block_76;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
struct buffer* buf_77;
struct sType* come_type_78;
struct list$1sNode$ph* o2_saved_79;
struct sNode* it_82;
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
_Bool _if_conditional1;
void* __right_value91 = (void*)0;
struct buffer* __dec_obj42;
_Bool __result_obj__48;
void* __right_value92 = (void*)0;
struct CVALUE* come_value_85;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct sType* __dec_obj43;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct CVALUE* come_value_86;
void* __right_value100 = (void*)0;
char* __dec_obj44;
struct sType* __dec_obj45;
_Bool __result_obj__49;
    paren_block_76=(struct list$1sNode$ph*)come_increment_ref_count(self->paren_block);
    buf_77=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05pre_op.c", 159, "struct buffer*"))));
    buffer_append_str(buf_77,"({");
    come_type_78=((void*)0);
    for(    o2_saved_79=(struct list$1sNode$ph*)come_increment_ref_count((paren_block_76)),it_82=list$1sNode$ph_begin((o2_saved_79));    !list$1sNode$ph_end((o2_saved_79));    it_82=list$1sNode$ph_next((o2_saved_79))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value83=it_82->kind(it_82->_protocol_obj))),"sIfNode")||string_operator_equals(((char*)(__right_value85=it_82->kind(it_82->_protocol_obj))),"sWhileNode")||string_operator_equals(((char*)(__right_value87=it_82->kind(it_82->_protocol_obj))),"sDoWhileNode")||string_operator_equals(((char*)(__right_value89=it_82->kind(it_82->_protocol_obj))),"sForNode")||((char*)(__right_value90=it_82->kind(it_82->_protocol_obj)))=="sSwitchNode")),        (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            add_come_code(info,((char*)(__right_value91=buffer_to_string(buf_77))));
            (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj42=buf_77,
            buf_77=((void*)0);
            /*b*/ come_call_finalizer3(__dec_obj42,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        !node_compile(it_82,info)) {
            __result_obj__48 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_79,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(paren_block_76,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_77,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_type_78,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__48;
        }
        if(        list$1CVALUE$ph_length(info->stack)>0) {
            come_value_85=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            buf_77) {
                buffer_append_str(buf_77,((char*)(__right_value93=string_operator_add(come_value_85->c_value,"; "))));
                (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                add_come_code(info,((char*)(__right_value94=string_operator_add(come_value_85->c_value,"; "))));
                (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            __dec_obj43=come_type_78,
            come_type_78=(struct sType*)come_increment_ref_count(sType_clone(come_value_85->type));
            /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_85,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            if(            buf_77) {
                buffer_append_str(buf_77,((char*)(__right_value96=string_operator_add(info->module->mLastCode,"; "))));
                (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(buf_77,((char*)(__right_value97=string_operator_add(info->module->mLastCode2,"; "))));
                (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                transpiler_clear_last_code(info);
            }
            else {
                add_last_code_to_source(info);
            }
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_79,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    buf_77) {
        buffer_append_str(buf_77,"})");
        come_value_86=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 204, "struct CVALUE*"))));
        __dec_obj44=come_value_86->c_value,
        come_value_86->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_77));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj45=come_value_86->type,
        come_value_86->type=(struct sType*)come_increment_ref_count(come_type_78);
        /*b*/ come_call_finalizer3(__dec_obj45,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_86->var=((void*)0);
        add_come_last_code(info,"%s",come_value_86->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_86));
        /*c*/ come_call_finalizer3(come_value_86,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        add_come_code(info,"});");
    }
    __result_obj__49 = (_Bool)1;
    /*c*/ come_call_finalizer3(paren_block_76,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_77,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_type_78,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__49;
}

static void sParenBlockNode_finalize(struct sParenBlockNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->paren_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->paren_block,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_80;
struct sNode* __result_obj__42;
struct sNode* __result_obj__43;
struct sNode* result_81;
struct sNode* __result_obj__44;
result_80 = (void*)0;
result_81 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_80,0,sizeof(struct sNode*));
        __result_obj__42 = result_80;
        return __result_obj__42;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__43 = self->it->item;
        return __result_obj__43;
    }
    memset(&result_81,0,sizeof(struct sNode*));
    __result_obj__44 = result_81;
    return __result_obj__44;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_83;
struct sNode* __result_obj__45;
struct sNode* __result_obj__46;
struct sNode* result_84;
struct sNode* __result_obj__47;
result_83 = (void*)0;
result_84 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_83,0,sizeof(struct sNode*));
        __result_obj__45 = result_83;
        return __result_obj__45;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__46 = self->it->item;
        return __result_obj__46;
    }
    memset(&result_84,0,sizeof(struct sNode*));
    __result_obj__47 = result_84;
    return __result_obj__47;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __right_value101 = (void*)0;
struct sNode* __dec_obj46;
struct sDerefferenceNode* __result_obj__50;
    ((struct sNodeBase*)(__right_value101=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value101,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj46=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__50 = (struct sDerefferenceNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDerefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__50,sDerefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__50;
}

char* sDerefferenceNode_kind(struct sDerefferenceNode* self){
void* __right_value102 = (void*)0;
char* __result_obj__51;
    __result_obj__51 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string("sDerefferenceNode"))));
    (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__51;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
struct sNode* value_87;
_Bool __result_obj__52;
void* __right_value103 = (void*)0;
struct CVALUE* left_value_88;
struct sType* type_89;
char* fun_name_90;
_Bool calling_fun_91;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct CVALUE* come_value_92;
void* __right_value106 = (void*)0;
char* __dec_obj47;
void* __right_value107 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__53;
memset(&calling_fun_91, 0, sizeof(_Bool));
    value_87=(struct sNode*)come_increment_ref_count(self->value);
    if(    !node_compile(value_87,info)) {
        __result_obj__52 = (_Bool)0;
        ((value_87) ? value_87 = come_decrement_ref_count(value_87, ((struct sNode*)value_87)->finalize, ((struct sNode*)value_87)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__52;
    }
    left_value_88=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_89=(struct sType*)come_increment_ref_count(left_value_88->type);
    fun_name_90="operator_derefference";
    if(    self->mQuote) {
        calling_fun_91=(_Bool)0;
    }
    else {
        calling_fun_91=operator_overload_fun_self(type_89,fun_name_90,(struct sNode*)come_increment_ref_count(value_87),left_value_88,info);
    }
    if(    !calling_fun_91) {
        come_value_92=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 261, "struct CVALUE*"))));
        __dec_obj47=come_value_92->c_value,
        come_value_92->c_value=(char*)come_increment_ref_count(xsprintf("*%s",left_value_88->c_value));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj48=come_value_92->type,
        come_value_92->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_88->type));
        /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_92->type->mPointerNum--;
        come_value_92->var=((void*)0);
        add_come_last_code(info,"%s",come_value_92->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
        /*c*/ come_call_finalizer3(come_value_92,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__53 = (_Bool)1;
    ((value_87) ? value_87 = come_decrement_ref_count(value_87, ((struct sNode*)value_87)->finalize, ((struct sNode*)value_87)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_88,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_89,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__53;
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __right_value108 = (void*)0;
struct sNode* __dec_obj49;
struct sLogicalDenial* __result_obj__54;
    ((struct sNodeBase*)(__right_value108=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value108,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj49=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__54 = (struct sLogicalDenial*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLogicalDenial_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__54,sLogicalDenial_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__54;
}

char* sLogicalDenial_kind(struct sLogicalDenial* self){
void* __right_value109 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string("sLogicalDenial"))));
    (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__55;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __right_value110 = (void*)0;
struct CVALUE* come_value_93;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct CVALUE* come_value2_94;
void* __right_value113 = (void*)0;
char* __dec_obj50;
void* __right_value114 = (void*)0;
struct sType* __dec_obj51;
_Bool __result_obj__56;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_93=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_94=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 299, "struct CVALUE*"))));
    __dec_obj50=come_value2_94->c_value,
    come_value2_94->c_value=(char*)come_increment_ref_count(xsprintf("!%s",come_value_93->c_value));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj51=come_value2_94->type,
    come_value2_94->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_93->type));
    /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_94->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_94));
    add_come_last_code(info,"%s",come_value2_94->c_value);
    __result_obj__56 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_93,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_94,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__56;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo* info){
void* __right_value115 = (void*)0;
struct sNode* __dec_obj52;
struct sLogicalDenial2* __result_obj__57;
    ((struct sNodeBase*)(__right_value115=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value115,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj52=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__57 = (struct sLogicalDenial2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLogicalDenial2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__57,sLogicalDenial2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__57;
}

char* sLogicalDenial2_kind(struct sLogicalDenial2* self){
void* __right_value116 = (void*)0;
char* __result_obj__58;
    __result_obj__58 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string("sLogicalDenial"))));
    (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__58;
}

_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo* info){
void* __right_value117 = (void*)0;
struct CVALUE* come_value_95;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
struct CVALUE* come_value2_96;
void* __right_value120 = (void*)0;
char* __dec_obj53;
void* __right_value121 = (void*)0;
struct sType* __dec_obj54;
_Bool __result_obj__59;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_95=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_96=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 335, "struct CVALUE*"))));
    __dec_obj53=come_value2_96->c_value,
    come_value2_96->c_value=(char*)come_increment_ref_count(xsprintf("!!%s",come_value_95->c_value));
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj54=come_value2_96->type,
    come_value2_96->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_95->type));
    /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_96->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_96));
    add_come_last_code(info,"%s",come_value2_96->c_value);
    __result_obj__59 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_95,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_96,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

static void sLogicalDenial2_finalize(struct sLogicalDenial2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __right_value122 = (void*)0;
struct sNode* __dec_obj55;
struct sReverseNode* __result_obj__60;
    ((struct sNodeBase*)(__right_value122=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value122,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj55=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__60 = (struct sReverseNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReverseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__60,sReverseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__60;
}

char* sReverseNode_kind(struct sReverseNode* self){
void* __right_value123 = (void*)0;
char* __result_obj__61;
    __result_obj__61 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string("sReverseNode"))));
    (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__61;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
struct sNode* value_97;
void* __right_value124 = (void*)0;
struct CVALUE* left_value_98;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct CVALUE* come_value_99;
void* __right_value127 = (void*)0;
char* __dec_obj56;
void* __right_value128 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__62;
    value_97=self->value;
    if(    !node_compile(value_97,info)) {
        return (_Bool)0;
    }
    left_value_98=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_99=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 373, "struct CVALUE*"))));
    __dec_obj56=come_value_99->c_value,
    come_value_99->c_value=(char*)come_increment_ref_count(xsprintf("!%s",left_value_98->c_value));
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj57=come_value_99->type,
    come_value_99->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_98->type));
    /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_99->type->mPointerNum--;
    come_value_99->var=((void*)0);
    add_come_last_code(info,"%s",come_value_99->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_99));
    __result_obj__62 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_98,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_99,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static void sReverseNode_finalize(struct sReverseNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value129 = (void*)0;
struct sNode* __dec_obj58;
struct sMinusNode2* __result_obj__63;
    ((struct sNodeBase*)(__right_value129=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value129,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj58=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__63 = (struct sMinusNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__63,sMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__63;
}

char* sMinusNode2_kind(struct sMinusNode2* self){
void* __right_value130 = (void*)0;
char* __result_obj__64;
    __result_obj__64 = (char*)come_increment_ref_count(((char*)(__right_value130=__builtin_string("sMinusNode2"))));
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__64;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __right_value131 = (void*)0;
struct CVALUE* come_value_100;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct CVALUE* come_value2_101;
void* __right_value134 = (void*)0;
char* __dec_obj59;
void* __right_value135 = (void*)0;
struct sType* __dec_obj60;
_Bool __result_obj__65;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_100=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_101=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 410, "struct CVALUE*"))));
    __dec_obj59=come_value2_101->c_value,
    come_value2_101->c_value=(char*)come_increment_ref_count(xsprintf("-%s",come_value_100->c_value));
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj60=come_value2_101->type,
    come_value2_101->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_100->type));
    /*b*/ come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_101->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_101));
    add_come_last_code(info,"%s",come_value2_101->c_value);
    __result_obj__65 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_100,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_101,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value136 = (void*)0;
struct sNode* __dec_obj61;
struct sPlusPlusNode2* __result_obj__66;
    ((struct sNodeBase*)(__right_value136=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value136,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj61=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__66 = (struct sPlusPlusNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sPlusPlusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__66,sPlusPlusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__66;
}

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self){
void* __right_value137 = (void*)0;
char* __result_obj__67;
    __result_obj__67 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string("sPlusPlusNode2"))));
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__67 = come_decrement_ref_count(__result_obj__67, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__67;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __right_value138 = (void*)0;
struct CVALUE* come_value_102;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct CVALUE* come_value2_103;
void* __right_value141 = (void*)0;
char* __dec_obj62;
void* __right_value142 = (void*)0;
struct sType* __dec_obj63;
_Bool __result_obj__68;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_102=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_103=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 446, "struct CVALUE*"))));
    __dec_obj62=come_value2_103->c_value,
    come_value2_103->c_value=(char*)come_increment_ref_count(xsprintf("++%s",come_value_102->c_value));
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj63=come_value2_103->type,
    come_value2_103->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_102->type));
    /*b*/ come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_103->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_103));
    add_come_last_code(info,"%s",come_value2_103->c_value);
    __result_obj__68 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_102,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_103,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value143 = (void*)0;
struct sNode* __dec_obj64;
struct sMinusMinusNode2* __result_obj__69;
    ((struct sNodeBase*)(__right_value143=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value143,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj64=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__69 = (struct sMinusMinusNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMinusMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__69,sMinusMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__69;
}

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self){
void* __right_value144 = (void*)0;
char* __result_obj__70;
    __result_obj__70 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string("sMinusMinusNode2"))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__70 = come_decrement_ref_count(__result_obj__70, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__70;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __right_value145 = (void*)0;
struct CVALUE* come_value_104;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct CVALUE* come_value2_105;
void* __right_value148 = (void*)0;
char* __dec_obj65;
void* __right_value149 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__71;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_104=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_105=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 482, "struct CVALUE*"))));
    __dec_obj65=come_value2_105->c_value,
    come_value2_105->c_value=(char*)come_increment_ref_count(xsprintf("--%s",come_value_104->c_value));
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj66=come_value2_105->type,
    come_value2_105->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_104->type));
    /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_105->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_105));
    add_come_last_code(info,"%s",come_value2_105->c_value);
    __result_obj__71 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_104,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_105,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__71;
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info, _Bool if_result){
void* __right_value150 = (void*)0;
void* __right_value185 = (void*)0;
struct sBlock* __dec_obj79;
struct sNormalBlock* __result_obj__104;
    ((struct sNodeBase*)(__right_value150=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value150,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj79=self->mBlock,
    self->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(block));
    /*b*/ come_call_finalizer3(__dec_obj79,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->clang=clang;
    self->comma=comma;
    __result_obj__104 = (struct sNormalBlock*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNormalBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__104,sNormalBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__104;
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self){
    return (_Bool)1;
}

char* sNormalBlock_kind(struct sNormalBlock* self){
void* __right_value186 = (void*)0;
char* __result_obj__105;
    __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value186=__builtin_string("sNormalBlock"))));
    (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__105;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
struct sBlock* block_164;
_Bool come_c_165;
    block_164=self->mBlock;
    if(    !self->comma) {
        add_come_code(info,"{\n");
    }
    come_c_165=gComeC;
    if(    self->clang) {
        gComeC=(_Bool)1;
    }
    transpile_block(block_164,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,self->comma,(_Bool)0);
    if(    !self->comma) {
        add_come_code(info,"}\n");
    }
    gComeC=come_c_165;
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__72;
void* __right_value151 = (void*)0;
struct sBlock* result_106;
void* __right_value152 = (void*)0;
struct list$1sNode$ph* __dec_obj67;
void* __right_value184 = (void*)0;
struct sVarTable* __dec_obj78;
struct sBlock* __result_obj__103;
    if(    self==(void*)0) {
        __result_obj__72 = (void*)0;
        return __result_obj__72;
    }
    result_106=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj67=result_106->mNodes,
        result_106->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj67,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj78=result_106->mVarTable,
        result_106->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj78,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_106->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__103 = result_106;
    /*c*/ come_call_finalizer3(result_106,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__103;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__73;
void* __right_value153 = (void*)0;
struct sVarTable* result_107;
void* __right_value183 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj77;
struct sVarTable* __result_obj__102;
    if(    self==(void*)0) {
        __result_obj__73 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__73,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__73;
    }
    result_107=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj77=result_107->mVars,
        result_107->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj77,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_107->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_107->mParent=self->mParent;
    }
    __result_obj__102 = (struct sVarTable*)come_increment_ref_count(result_107);
    /*c*/ come_call_finalizer3(result_107,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__102,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__102;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__74;
void* __right_value154 = (void*)0;
void* __right_value160 = (void*)0;
struct map$2char$phsVar$ph* result_113;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct list$1char$ph* __dec_obj69;
char* it_116;
struct sVar* default_value_119;
void* __right_value163 = (void*)0;
struct sVar* it2_122;
void* __right_value172 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__101;
default_value_119 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__74 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__74,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__74;
    }
    result_113=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1999, "struct map$2char$phsVar$ph*"))));
    __dec_obj69=result_113->key_list,
    result_113->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2001, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj69,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_116=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_116=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_119,0,sizeof(struct sVar*));
        it2_122=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_116,(struct sVar*)come_increment_ref_count(default_value_119)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_113,(char*)come_increment_ref_count((char*)come_memdup(it_116, "./comelang.h", 2010, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_122)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_113,(char*)come_increment_ref_count((char*)come_memdup(it_116, "./comelang.h", 2013, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_122)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_113,(char*)come_increment_ref_count(it_116),(struct sVar*)come_increment_ref_count(sVar_clone(it2_122)));
        }
        else {
            map$2char$phsVar$ph_put(result_113,(char*)come_increment_ref_count(it_116),(struct sVar*)come_increment_ref_count(sVar_clone(it2_122)));
        }
        /*c*/ come_call_finalizer3(default_value_119,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_122,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__101 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_113);
    /*c*/ come_call_finalizer3(result_113,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__101,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__101;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_108;
int i_109;
    for(    i_108=0;    i_108<self->size;    i_108++    ){
        if(        self->item_existance[i_108]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_108],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_109=0;    i_109<self->size;    i_109++    ){
        if(        self->item_existance[i_109]) {
            if(            1) {
                (self->keys[i_109] = come_decrement_ref_count(self->keys[i_109], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
int i_110;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct list$1char$ph* __dec_obj68;
struct map$2char$phsVar$ph* __result_obj__76;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value155=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1928, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value156=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1929, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value157=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1930, "_Bool*"))));
    for(    i_110=0;    i_110<128;    i_110++    ){
        self->item_existance[i_110]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj68=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj68,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__76 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__76,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__76;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__75;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__75 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__75,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__75;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_111;
struct list_item$1char$p* prev_it_112;
    it_111=self->head;
    while(    it_111!=((void*)0)) {
        prev_it_112=it_111;
        it_111=it_111->next;
        /*c*/ come_call_finalizer3(prev_it_112,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_114;
char* __result_obj__77;
char* __result_obj__78;
char* result_115;
char* __result_obj__79;
result_114 = (void*)0;
result_115 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_114,0,sizeof(char*));
        __result_obj__77 = result_114;
        return __result_obj__77;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__78 = self->key_list->it->item;
        return __result_obj__78;
    }
    memset(&result_115,0,sizeof(char*));
    __result_obj__79 = result_115;
    return __result_obj__79;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_117;
char* __result_obj__80;
char* __result_obj__81;
char* result_118;
char* __result_obj__82;
result_117 = (void*)0;
result_118 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_117,0,sizeof(char*));
        __result_obj__80 = result_117;
        return __result_obj__80;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__81 = self->key_list->it->item;
        return __result_obj__81;
    }
    memset(&result_118,0,sizeof(char*));
    __result_obj__82 = result_118;
    return __result_obj__82;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_120;
unsigned int it_121;
struct sVar* __result_obj__83;
struct sVar* __result_obj__84;
struct sVar* __result_obj__85;
struct sVar* __result_obj__86;
    hash_120=string_get_hash_key(((char*)key))%self->size;
    it_121=hash_120;
    while(    (_Bool)1) {
        if(        self->item_existance[it_121]) {
            if(            string_equals(self->keys[it_121],key)) {
                __result_obj__83 = (struct sVar*)come_increment_ref_count(self->items[it_121]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__83,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__83;
            }
            it_121++;
            if(            it_121>=self->size) {
                it_121=0;
            }
            else if(            it_121==hash_120) {
                __result_obj__84 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__84,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__84;
            }
        }
        else {
            __result_obj__85 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__85,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__85;
        }
    }
    __result_obj__86 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__86,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__86;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_134;
int it_135;
_Bool same_key_exist_152;
char* it2_155;
struct map$2char$phsVar$ph* __result_obj__98;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_134=string_get_hash_key(((char*)key))%self->size;
    it_135=hash_134;
    while(    (_Bool)1) {
        if(        self->item_existance[it_135]) {
            if(            string_equals(self->keys[it_135],key)) {
                if(                1) {
                    (self->keys[it_135] = come_decrement_ref_count(self->keys[it_135], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_135]);
                    self->keys[it_135]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_135]);
                    self->keys[it_135]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_135],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_135]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_135]=item;
                }
                break;
            }
            it_135++;
            if(            it_135>=self->size) {
                it_135=0;
            }
            else if(            it_135==hash_134) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_135]=(_Bool)1;
            if(            1) {
                self->keys[it_135]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_135]=key;
            }
            if(            1) {
                self->items[it_135]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_135]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_152=(_Bool)0;
    for(    it2_155=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_155=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_155,key)) {
            same_key_exist_152=(_Bool)1;
        }
    }
    if(    !same_key_exist_152) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__98 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__98;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_123;
void* __right_value164 = (void*)0;
char** keys_124;
void* __right_value165 = (void*)0;
struct sVar** items_125;
void* __right_value166 = (void*)0;
_Bool* item_existance_126;
int len_127;
char* it_128;
struct sVar* default_value_129;
void* __right_value167 = (void*)0;
struct sVar* it2_130;
unsigned int hash_131;
int n_132;
struct sVar* default_value_133;
void* __right_value168 = (void*)0;
default_value_129 = (void*)0;
default_value_133 = (void*)0;
    size_123=self->size*10;
    keys_124=(char**)come_increment_ref_count(((char**)(__right_value164=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_123)), "./comelang.h", 2167, "char**"))));
    items_125=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value165=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_123)), "./comelang.h", 2168, "struct sVar**"))));
    item_existance_126=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value166=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_123)), "./comelang.h", 2169, "_Bool*"))));
    len_127=0;
    for(    it_128=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_128=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_129,0,sizeof(struct sVar*));
        it2_130=((struct sVar*)(__right_value167=map$2char$phsVar$ph_at(self,it_128,(struct sVar*)come_increment_ref_count(default_value_129))));
        /*c*/ come_call_finalizer3(__right_value167,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_131=string_get_hash_key(((char*)it_128))%size_123;
        n_132=hash_131;
        while(        (_Bool)1) {
            if(            item_existance_126[n_132]) {
                n_132++;
                if(                n_132>=size_123) {
                    n_132=0;
                }
                else if(                n_132==hash_131) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_126[n_132]=(_Bool)1;
                keys_124[n_132]=it_128;
                items_125[n_132]=((struct sVar*)(__right_value168=map$2char$phsVar$ph_at(self,it_128,(struct sVar*)come_increment_ref_count(default_value_133))));
                /*c*/ come_call_finalizer3(__right_value168,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_127++;
                /*c*/ come_call_finalizer3(default_value_133,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_133,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_129,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_124;
    self->items=items_125;
    self->item_existance=item_existance_126;
    self->size=size_123;
    self->len=len_127;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_136;
struct list_item$1char$ph* it_137;
struct list$1char$ph* __result_obj__90;
    it2_136=0;
    it_137=self->head;
    while(    it_137!=((void*)0)) {
        if(        string_equals(it_137->item,item)) {
            list$1char$ph_delete(self,it2_136,it2_136+1);
            break;
        }
        it2_136++;
        it_137=it_137->next;
    }
    __result_obj__90 = self;
    return __result_obj__90;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_138;
struct list$1char$ph* __result_obj__87;
struct list_item$1char$ph* it_141;
int i_142;
struct list_item$1char$ph* prev_it_143;
struct list_item$1char$ph* it_144;
int i_145;
struct list_item$1char$ph* prev_it_146;
struct list_item$1char$ph* it_147;
struct list_item$1char$ph* head_prev_it_148;
struct list_item$1char$ph* tail_it_149;
int i_150;
struct list_item$1char$ph* prev_it_151;
struct list$1char$ph* __result_obj__89;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_138=tail;
        tail=head;
        head=tmp_138;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__87 = self;
        return __result_obj__87;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_141=self->head;
        i_142=0;
        while(        it_141!=((void*)0)) {
            if(            i_142<tail) {
                prev_it_143=it_141;
                it_141=it_141->next;
                i_142++;
                /*c*/ come_call_finalizer3(prev_it_143,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_142==tail) {
                self->head=it_141;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_141=it_141->next;
                i_142++;
            }
        }
    }
    else if(    tail==self->len) {
        it_144=self->head;
        i_145=0;
        while(        it_144!=((void*)0)) {
            if(            i_145==head) {
                self->tail=it_144->prev;
                self->tail->next=((void*)0);
            }
            if(            i_145>=head) {
                prev_it_146=it_144;
                it_144=it_144->next;
                i_145++;
                /*c*/ come_call_finalizer3(prev_it_146,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_144=it_144->next;
                i_145++;
            }
        }
    }
    else {
        it_147=self->head;
        head_prev_it_148=((void*)0);
        tail_it_149=((void*)0);
        i_150=0;
        while(        it_147!=((void*)0)) {
            if(            i_150==head) {
                head_prev_it_148=it_147->prev;
            }
            if(            i_150==tail) {
                tail_it_149=it_147;
            }
            if(            i_150>=head&&i_150<tail) {
                prev_it_151=it_147;
                it_147=it_147->next;
                i_150++;
                /*c*/ come_call_finalizer3(prev_it_151,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_147=it_147->next;
                i_150++;
            }
        }
        if(        head_prev_it_148!=((void*)0)) {
            head_prev_it_148->next=tail_it_149;
        }
        if(        tail_it_149!=((void*)0)) {
            tail_it_149->prev=head_prev_it_148;
        }
    }
    __result_obj__89 = self;
    return __result_obj__89;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_139;
struct list_item$1char$ph* prev_it_140;
struct list$1char$ph* __result_obj__88;
    it_139=self->head;
    while(    it_139!=((void*)0)) {
        prev_it_140=it_139;
        it_139=it_139->next;
        /*c*/ come_call_finalizer3(prev_it_140,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__88 = self;
    return __result_obj__88;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_153;
char* __result_obj__91;
char* __result_obj__92;
char* result_154;
char* __result_obj__93;
result_153 = (void*)0;
result_154 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_153,0,sizeof(char*));
        __result_obj__91 = result_153;
        return __result_obj__91;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__92 = self->it->item;
        return __result_obj__92;
    }
    memset(&result_154,0,sizeof(char*));
    __result_obj__93 = result_154;
    return __result_obj__93;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_156;
char* __result_obj__94;
char* __result_obj__95;
char* result_157;
char* __result_obj__96;
result_156 = (void*)0;
result_157 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_156,0,sizeof(char*));
        __result_obj__94 = result_156;
        return __result_obj__94;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__95 = self->it->item;
        return __result_obj__95;
    }
    memset(&result_157,0,sizeof(char*));
    __result_obj__96 = result_157;
    return __result_obj__96;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value169 = (void*)0;
struct list_item$1char$ph* litem_158;
char* __dec_obj70;
void* __right_value170 = (void*)0;
struct list_item$1char$ph* litem_159;
char* __dec_obj71;
void* __right_value171 = (void*)0;
struct list_item$1char$ph* litem_160;
char* __dec_obj72;
struct list$1char$ph* __result_obj__97;
    if(    self->len==0) {
        litem_158=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value169=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        __dec_obj70=litem_158->item,
        litem_158->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value170=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        __dec_obj71=litem_159->item,
        litem_159->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value171=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        __dec_obj72=litem_160->item,
        litem_160->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result_obj__97 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__97;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__99;
void* __right_value173 = (void*)0;
struct sVar* result_161;
void* __right_value174 = (void*)0;
char* __dec_obj73;
void* __right_value175 = (void*)0;
char* __dec_obj74;
void* __right_value176 = (void*)0;
struct sType* __dec_obj75;
void* __right_value177 = (void*)0;
char* __dec_obj76;
struct sVar* __result_obj__100;
    if(    self==(void*)0) {
        __result_obj__99 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__99,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__99;
    }
    result_161=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj73=result_161->mName,
        result_161->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj74=result_161->mCValueName,
        result_161->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj75=result_161->mType,
        result_161->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_161->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_161->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_161->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)) {
        result_161->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj76=result_161->mFunName,
        result_161->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__100 = (struct sVar*)come_increment_ref_count(result_161);
    /*c*/ come_call_finalizer3(result_161,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__100,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__100;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_162;
int i_163;
    for(    i_162=0;    i_162<self->size;    i_162++    ){
        if(        self->item_existance[i_162]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_162],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_163=0;    i_163<self->size;    i_163++    ){
        if(        self->item_existance[i_163]) {
            if(            1) {
                (self->keys[i_163] = come_decrement_ref_count(self->keys[i_163], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __right_value187 = (void*)0;
struct sNode* __dec_obj80;
struct sComplement* __result_obj__106;
    ((struct sNodeBase*)(__right_value187=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value187,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj80=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__106 = (struct sComplement*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComplement_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__106,sComplement_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__106;
}

char* sComplement_kind(struct sComplement* self){
void* __right_value188 = (void*)0;
char* __result_obj__107;
    __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value188=__builtin_string("sComplement"))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__107;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __right_value189 = (void*)0;
struct CVALUE* come_value_166;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct CVALUE* come_value2_167;
void* __right_value192 = (void*)0;
char* __dec_obj81;
void* __right_value193 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__108;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_166=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_167=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 565, "struct CVALUE*"))));
    __dec_obj81=come_value2_167->c_value,
    come_value2_167->c_value=(char*)come_increment_ref_count(xsprintf("~%s",come_value_166->c_value));
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj82=come_value2_167->type,
    come_value2_167->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_166->type));
    /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_167->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_167));
    add_come_last_code(info,"%s",come_value2_167->c_value);
    __result_obj__108 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_166,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_167,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__108;
}

static void sComplement_finalize(struct sComplement* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct sNode* __dec_obj83;
struct sParenNode* __result_obj__109;
    ((struct sNodeBase*)(__right_value194=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value194,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj83=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__109 = (struct sParenNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sParenNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__109,sParenNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__109;
}

char* sParenNode_kind(struct sParenNode* self){
void* __right_value196 = (void*)0;
char* __result_obj__110;
    __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value196=__builtin_string("sParenNode"))));
    (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__110;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
struct sNode* left_168;
void* __right_value197 = (void*)0;
struct CVALUE* left_value_169;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct CVALUE* come_value_170;
void* __right_value200 = (void*)0;
char* __dec_obj84;
void* __right_value201 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__111;
    left_168=self->mLeft;
    if(    !node_compile(left_168,info)) {
        return (_Bool)0;
    }
    left_value_169=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_170=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 603, "struct CVALUE*"))));
    __dec_obj84=come_value_170->c_value,
    come_value_170->c_value=(char*)come_increment_ref_count(xsprintf("(%s)",left_value_169->c_value));
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj85=come_value_170->type,
    come_value_170->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_169->type));
    /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_170->var=((void*)0);
    add_come_last_code(info,"%s",come_value_170->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_170));
    __result_obj__111 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_169,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_170,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void sParenNode_finalize(struct sParenNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct sType* __dec_obj86;
void* __right_value204 = (void*)0;
struct sNode* __dec_obj87;
struct sCastNode* __result_obj__112;
    ((struct sNodeBase*)(__right_value202=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value202,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj86=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj87=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__112 = (struct sCastNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCastNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__112,sCastNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__112;
}

char* sCastNode_kind(struct sCastNode* self){
void* __right_value205 = (void*)0;
char* __result_obj__113;
    __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value205=__builtin_string("sCastNode"))));
    (__right_value205 = come_decrement_ref_count(__right_value205, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__113;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
struct sType* type_171;
struct sNode* left_172;
void* __right_value206 = (void*)0;
struct CVALUE* left_value_173;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct sType* type2_174;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct CVALUE* come_value_175;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
char* __dec_obj88;
void* __right_value213 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__114;
    type_171=self->mType;
    left_172=self->mLeft;
    if(    !node_compile(left_172,info)) {
        return (_Bool)0;
    }
    left_value_173=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type2_174=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value207=sType_clone(type_171))),info->generics_type,info));
    /*c*/ come_call_finalizer3(__right_value207,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_175=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 645, "struct CVALUE*"))));
    cast_type(type2_174,left_value_173->type,left_value_173,info);
    __dec_obj88=come_value_175->c_value,
    come_value_175->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",((char*)(__right_value211=make_type_name_string(type2_174,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_173->c_value));
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj89=come_value_175->type,
    come_value_175->type=(struct sType*)come_increment_ref_count(sType_clone(type2_174));
    /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_175->var=((void*)0);
    add_come_last_code(info,"%s",come_value_175->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_175));
    __result_obj__114 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_173,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_174,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_175,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__114;
}

static void sCastNode_finalize(struct sCastNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result){
int sline_real_176;
void* __right_value214 = (void*)0;
struct sBlock* block_177;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct sNode* _inf_value1;
struct sNormalBlock* _inf_obj_value1;
void* __right_value220 = (void*)0;
struct sNode* __result_obj__117;
    sline_real_176=info->sline_real;
    info->sline_real=info->sline;
    block_177=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    info->sline_real=sline_real_176;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 669, "struct sNode");
    _inf_obj_value1=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(__right_value216=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc_v2(1, sizeof(struct sNormalBlock)*(1), "05pre_op.c", 669, "struct sNormalBlock*")),block_177,clang,comma,info,if_result))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    __result_obj__117 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value220=_inf_value1)));
    /*c*/ come_call_finalizer3(block_177,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value216,sNormalBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value220) ? __right_value220 = come_decrement_ref_count(__right_value220, ((struct sNode*)__right_value220)->finalize, ((struct sNode*)__right_value220)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__117) ? __result_obj__117 = come_decrement_ref_count(__result_obj__117, ((struct sNode*)__result_obj__117)->finalize, ((struct sNode*)__result_obj__117)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__117;
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
struct sNormalBlock* __result_obj__115;
void* __right_value217 = (void*)0;
struct sNormalBlock* result_178;
void* __right_value218 = (void*)0;
char* __dec_obj90;
void* __right_value219 = (void*)0;
struct sBlock* __dec_obj91;
struct sNormalBlock* __result_obj__116;
    if(    self==(void*)0) {
        __result_obj__115 = (void*)0;
        return __result_obj__115;
    }
    result_178=(struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc_v2(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "struct sNormalBlock*"));
    if(    self!=((void*)0)) {
        result_178->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj90=result_178->sname,
        result_178->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNormalBlock_clone", 5, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_178->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj91=result_178->mBlock,
        result_178->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        /*b*/ come_call_finalizer3(__dec_obj91,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_178->clang=self->clang;
    }
    if(    self!=((void*)0)) {
        result_178->comma=self->comma;
    }
    __result_obj__116 = result_178;
    /*c*/ come_call_finalizer3(result_178,sNormalBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__116;
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct sNode* _inf_value2;
struct sLogicalDenial* _inf_obj_value2;
void* __right_value227 = (void*)0;
struct sNode* __result_obj__120;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 674, "struct sNode");
    _inf_obj_value2=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value223=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 674, "struct sLogicalDenial*")),(struct sNode*)come_increment_ref_count(sNode_clone(node)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    __result_obj__120 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value227=_inf_value2)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value223,sLogicalDenial_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value227) ? __right_value227 = come_decrement_ref_count(__right_value227, ((struct sNode*)__right_value227)->finalize, ((struct sNode*)__right_value227)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__120) ? __result_obj__120 = come_decrement_ref_count(__result_obj__120, ((struct sNode*)__result_obj__120)->finalize, ((struct sNode*)__result_obj__120)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__120;
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
struct sLogicalDenial* __result_obj__118;
void* __right_value224 = (void*)0;
struct sLogicalDenial* result_179;
void* __right_value225 = (void*)0;
char* __dec_obj92;
void* __right_value226 = (void*)0;
struct sNode* __dec_obj93;
struct sLogicalDenial* __result_obj__119;
    if(    self==(void*)0) {
        __result_obj__118 = (void*)0;
        return __result_obj__118;
    }
    result_179=(struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "struct sLogicalDenial*"));
    if(    self!=((void*)0)) {
        result_179->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj92=result_179->sname,
        result_179->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLogicalDenial_clone", 5, "char*"));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_179->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj93=result_179->value,
        result_179->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__119 = result_179;
    /*c*/ come_call_finalizer3(result_179,sLogicalDenial_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__119;
}

struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info){
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct sNode* _inf_value3;
struct sCastNode* _inf_obj_value3;
void* __right_value234 = (void*)0;
struct sNode* __result_obj__123;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 679, "struct sNode");
    _inf_obj_value3=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value229=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 679, "struct sCastNode*")),type,node,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCastNode_finalize;
    _inf_value3->clone=(void*)sCastNode_clone;
    _inf_value3->compile=(void*)sCastNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCastNode_kind;
    __result_obj__123 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value234=_inf_value3)));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value229,sCastNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value234) ? __right_value234 = come_decrement_ref_count(__right_value234, ((struct sNode*)__right_value234)->finalize, ((struct sNode*)__right_value234)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__123) ? __result_obj__123 = come_decrement_ref_count(__result_obj__123, ((struct sNode*)__result_obj__123)->finalize, ((struct sNode*)__result_obj__123)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__123;
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
struct sCastNode* __result_obj__121;
void* __right_value230 = (void*)0;
struct sCastNode* result_180;
void* __right_value231 = (void*)0;
char* __dec_obj94;
void* __right_value232 = (void*)0;
struct sType* __dec_obj95;
void* __right_value233 = (void*)0;
struct sNode* __dec_obj96;
struct sCastNode* __result_obj__122;
    if(    self==(void*)0) {
        __result_obj__121 = (void*)0;
        return __result_obj__121;
    }
    result_180=(struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "struct sCastNode*"));
    if(    self!=((void*)0)) {
        result_180->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj94=result_180->sname,
        result_180->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCastNode_clone", 5, "char*"));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_180->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj95=result_180->mType,
        result_180->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj96=result_180->mLeft,
        result_180->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__122 = result_180;
    /*c*/ come_call_finalizer3(result_180,sCastNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__122;
}

struct sNode* reffence_node(struct sNode* value, struct sInfo* info){
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sNode* _inf_value4;
struct sRefferenceNode* _inf_obj_value4;
void* __right_value240 = (void*)0;
struct sNode* __result_obj__126;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 684, "struct sNode");
    _inf_obj_value4=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value236=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 684, "struct sRefferenceNode*")),(struct sNode*)come_increment_ref_count(value),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sRefferenceNode_finalize;
    _inf_value4->clone=(void*)sRefferenceNode_clone;
    _inf_value4->compile=(void*)sRefferenceNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sRefferenceNode_kind;
    __result_obj__126 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value240=_inf_value4)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value236,sRefferenceNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value240) ? __right_value240 = come_decrement_ref_count(__right_value240, ((struct sNode*)__right_value240)->finalize, ((struct sNode*)__right_value240)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__126) ? __result_obj__126 = come_decrement_ref_count(__result_obj__126, ((struct sNode*)__result_obj__126)->finalize, ((struct sNode*)__result_obj__126)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__126;
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
struct sRefferenceNode* __result_obj__124;
void* __right_value237 = (void*)0;
struct sRefferenceNode* result_181;
void* __right_value238 = (void*)0;
char* __dec_obj97;
void* __right_value239 = (void*)0;
struct sNode* __dec_obj98;
struct sRefferenceNode* __result_obj__125;
    if(    self==(void*)0) {
        __result_obj__124 = (void*)0;
        return __result_obj__124;
    }
    result_181=(struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "struct sRefferenceNode*"));
    if(    self!=((void*)0)) {
        result_181->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj97=result_181->sname,
        result_181->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sRefferenceNode_clone", 5, "char*"));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_181->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj98=result_181->value,
        result_181->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__125 = result_181;
    /*c*/ come_call_finalizer3(result_181,sRefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__125;
}

struct sNode* pre_position_operator(struct sInfo* info){
_Bool refference_182;
char* p_183;
int sline_184;
void* __right_value241 = (void*)0;
struct sNode* __result_obj__127;
void* __right_value242 = (void*)0;
struct sNode* __result_obj__128;
void* __right_value243 = (void*)0;
struct sNode* __result_obj__129;
void* __right_value244 = (void*)0;
struct sNode* node_185;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct sNode* _inf_value5;
struct sLogicalDenial* _inf_obj_value5;
void* __right_value247 = (void*)0;
struct sNode* __result_obj__130;
void* __right_value248 = (void*)0;
struct sNode* node_186;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sNode* _inf_value6;
struct sLogicalDenial2* _inf_obj_value6;
void* __right_value254 = (void*)0;
struct sNode* __result_obj__133;
void* __right_value255 = (void*)0;
struct sNode* node_188;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct sNode* _inf_value7;
struct sMinusMinusNode2* _inf_obj_value7;
void* __right_value261 = (void*)0;
struct sNode* __result_obj__136;
void* __right_value262 = (void*)0;
struct sNode* node_190;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sNode* _inf_value8;
struct sMinusNode2* _inf_obj_value8;
void* __right_value268 = (void*)0;
struct sNode* __result_obj__139;
void* __right_value269 = (void*)0;
struct sNode* node_192;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sNode* _inf_value9;
struct sPlusPlusNode2* _inf_obj_value9;
void* __right_value275 = (void*)0;
struct sNode* __result_obj__142;
void* __right_value276 = (void*)0;
struct sNode* node_194;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sNode* _inf_value10;
struct sComplement* _inf_obj_value10;
void* __right_value282 = (void*)0;
struct sNode* __result_obj__145;
_Bool quote_196;
_Bool no_assign_197;
void* __right_value283 = (void*)0;
struct sNode* value_198;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sNode* _inf_value11;
struct sDerefferenceNode* _inf_obj_value11;
void* __right_value289 = (void*)0;
struct sNode* __result_obj__148;
void* __right_value290 = (void*)0;
struct sNode* value_200;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sNode* _inf_value12;
struct sRefferenceNode* _inf_obj_value12;
void* __right_value293 = (void*)0;
struct sNode* __result_obj__149;
void* __right_value294 = (void*)0;
struct sNode* value_201;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct sNode* _inf_value13;
struct sReverseNode* _inf_obj_value13;
void* __right_value300 = (void*)0;
struct sNode* __result_obj__152;
_Bool cast_expression_flag_203;
char* p_204;
int sline_205;
void* __right_value301 = (void*)0;
char* word_206;
void* __right_value302 = (void*)0;
char* __dec_obj113;
_Bool tuple_expression_flag_207;
_Bool named_tuple_expression_flag_208;
char* p_209;
int sline_210;
char* p_211;
int sline_212;
void* __right_value303 = (void*)0;
_Bool no_comma_213;
_Bool no_output_err_214;
_Bool no_output_come_code_215;
void* __right_value304 = (void*)0;
struct sNode* node_216;
struct sNode* node2_217;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct list$1sNode$ph* paren_block_218;
void* __right_value307 = (void*)0;
struct sNode* node2_219;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sNode* _inf_value14;
struct sParenBlockNode* _inf_obj_value14;
void* __right_value313 = (void*)0;
struct sNode* node_220;
struct sNode* __result_obj__155;
void* __right_value314 = (void*)0;
struct sNode* node_222;
struct sNode* __result_obj__156;
void* __right_value315 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* type_223=0;
char* name_224=0;
_Bool err_225=0;
void* __right_value316 = (void*)0;
struct sNode* node_226;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sNode* _inf_value15;
struct sCastNode* _inf_obj_value15;
void* __right_value319 = (void*)0;
struct sNode* __result_obj__157;
struct sNode* node_227;
_Bool no_assign_228;
_Bool no_comma_229;
void* __right_value320 = (void*)0;
struct sNode* __dec_obj116;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj117;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sNode* _inf_value16;
struct sParenNode* _inf_obj_value16;
void* __right_value327 = (void*)0;
struct sNode* __dec_obj120;
struct sNode* __result_obj__160;
struct sNode* __result_obj__161;
memset(&quote_196, 0, sizeof(_Bool));
node_227 = (void*)0;
    skip_spaces_and_lf(info);
    refference_182=(_Bool)0;
    {
        p_183=info->p;
        sline_184=info->sline;
        if(        *info->p==38&&*(info->p+1)!=38) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==34) {
                refference_182=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                refference_182=(_Bool)1;
            }
            else if(            *info->p==40||*info->p==42) {
                while(                *info->p==40||*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(                xisalpha(*info->p)||*info->p==95) {
                    refference_182=(_Bool)1;
                }
            }
        }
        info->p=p_183;
        info->sline=sline_184;
    }
    parse_sharp_v5(info);
    if(    *info->p==123) {
        if(        info->array_initializer) {
            __result_obj__127 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value241=parse_array_initializer(info))));
            ((__right_value241) ? __right_value241 = come_decrement_ref_count(__right_value241, ((struct sNode*)__right_value241)->finalize, ((struct sNode*)__right_value241)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__127) ? __result_obj__127 = come_decrement_ref_count(__result_obj__127, ((struct sNode*)__result_obj__127)->finalize, ((struct sNode*)__result_obj__127)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__127;
        }
        else if(        info->struct_initializer) {
            __result_obj__128 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value242=parse_struct_initializer(info))));
            ((__right_value242) ? __right_value242 = come_decrement_ref_count(__right_value242, ((struct sNode*)__right_value242)->finalize, ((struct sNode*)__right_value242)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__128) ? __result_obj__128 = come_decrement_ref_count(__result_obj__128, ((struct sNode*)__result_obj__128)->finalize, ((struct sNode*)__result_obj__128)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__128;
        }
        else {
            __result_obj__129 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value243=parse_normal_block((_Bool)0,(_Bool)0,info,(_Bool)0))));
            ((__right_value243) ? __right_value243 = come_decrement_ref_count(__right_value243, ((struct sNode*)__right_value243)->finalize, ((struct sNode*)__right_value243)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__129) ? __result_obj__129 = come_decrement_ref_count(__result_obj__129, ((struct sNode*)__result_obj__129)->finalize, ((struct sNode*)__result_obj__129)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__129;
        }
    }
    else if(    *info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        info->p++;
        skip_spaces_and_lf(info);
        node_185=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 742, "struct sNode");
        _inf_obj_value5=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value246=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 742, "struct sLogicalDenial*")),(struct sNode*)come_increment_ref_count(node_185),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLogicalDenial_finalize;
        _inf_value5->clone=(void*)sLogicalDenial_clone;
        _inf_value5->compile=(void*)sLogicalDenial_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLogicalDenial_kind;
        __result_obj__130 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value247=_inf_value5)));
        ((node_185) ? node_185 = come_decrement_ref_count(node_185, ((struct sNode*)node_185)->finalize, ((struct sNode*)node_185)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value246,sLogicalDenial_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value247) ? __right_value247 = come_decrement_ref_count(__right_value247, ((struct sNode*)__right_value247)->finalize, ((struct sNode*)__right_value247)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__130) ? __result_obj__130 = come_decrement_ref_count(__result_obj__130, ((struct sNode*)__result_obj__130)->finalize, ((struct sNode*)__result_obj__130)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__130;
        ((node_185) ? node_185 = come_decrement_ref_count(node_185, ((struct sNode*)node_185)->finalize, ((struct sNode*)node_185)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==33&&*(info->p+1)==33) {
        info->p++;
        skip_spaces_and_lf(info);
        node_186=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 750, "struct sNode");
        _inf_obj_value6=(struct sLogicalDenial2*)come_increment_ref_count(((struct sLogicalDenial2*)(__right_value250=sLogicalDenial2_initialize((struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc_v2(1, sizeof(struct sLogicalDenial2)*(1), "05pre_op.c", 750, "struct sLogicalDenial2*")),(struct sNode*)come_increment_ref_count(node_186),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sLogicalDenial2_finalize;
        _inf_value6->clone=(void*)sLogicalDenial2_clone;
        _inf_value6->compile=(void*)sLogicalDenial2_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sLogicalDenial2_kind;
        __result_obj__133 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value254=_inf_value6)));
        ((node_186) ? node_186 = come_decrement_ref_count(node_186, ((struct sNode*)node_186)->finalize, ((struct sNode*)node_186)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value250,sLogicalDenial2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value254) ? __right_value254 = come_decrement_ref_count(__right_value254, ((struct sNode*)__right_value254)->finalize, ((struct sNode*)__right_value254)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__133) ? __result_obj__133 = come_decrement_ref_count(__result_obj__133, ((struct sNode*)__result_obj__133)->finalize, ((struct sNode*)__result_obj__133)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__133;
        ((node_186) ? node_186 = come_decrement_ref_count(node_186, ((struct sNode*)node_186)->finalize, ((struct sNode*)node_186)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==45&&*(info->p+1)==45) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_188=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 758, "struct sNode");
        _inf_obj_value7=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value257=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusMinusNode2)*(1), "05pre_op.c", 758, "struct sMinusMinusNode2*")),(struct sNode*)come_increment_ref_count(node_188),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sMinusMinusNode2_finalize;
        _inf_value7->clone=(void*)sMinusMinusNode2_clone;
        _inf_value7->compile=(void*)sMinusMinusNode2_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sMinusMinusNode2_kind;
        __result_obj__136 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value261=_inf_value7)));
        ((node_188) ? node_188 = come_decrement_ref_count(node_188, ((struct sNode*)node_188)->finalize, ((struct sNode*)node_188)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value257,sMinusMinusNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value261) ? __right_value261 = come_decrement_ref_count(__right_value261, ((struct sNode*)__right_value261)->finalize, ((struct sNode*)__right_value261)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__136) ? __result_obj__136 = come_decrement_ref_count(__result_obj__136, ((struct sNode*)__result_obj__136)->finalize, ((struct sNode*)__result_obj__136)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__136;
        ((node_188) ? node_188 = come_decrement_ref_count(node_188, ((struct sNode*)node_188)->finalize, ((struct sNode*)node_188)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==45&&!xisdigit(*(info->p+1))) {
        info->p++;
        skip_spaces_and_lf(info);
        node_190=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 766, "struct sNode");
        _inf_obj_value8=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(__right_value264=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusNode2)*(1), "05pre_op.c", 766, "struct sMinusNode2*")),(struct sNode*)come_increment_ref_count(node_190),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sMinusNode2_finalize;
        _inf_value8->clone=(void*)sMinusNode2_clone;
        _inf_value8->compile=(void*)sMinusNode2_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sMinusNode2_kind;
        __result_obj__139 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value268=_inf_value8)));
        ((node_190) ? node_190 = come_decrement_ref_count(node_190, ((struct sNode*)node_190)->finalize, ((struct sNode*)node_190)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value264,sMinusNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value268) ? __right_value268 = come_decrement_ref_count(__right_value268, ((struct sNode*)__right_value268)->finalize, ((struct sNode*)__right_value268)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__139) ? __result_obj__139 = come_decrement_ref_count(__result_obj__139, ((struct sNode*)__result_obj__139)->finalize, ((struct sNode*)__result_obj__139)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__139;
        ((node_190) ? node_190 = come_decrement_ref_count(node_190, ((struct sNode*)node_190)->finalize, ((struct sNode*)node_190)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==43&&*(info->p+1)==43) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_192=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 774, "struct sNode");
        _inf_obj_value9=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value271=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc_v2(1, sizeof(struct sPlusPlusNode2)*(1), "05pre_op.c", 774, "struct sPlusPlusNode2*")),(struct sNode*)come_increment_ref_count(node_192),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sPlusPlusNode2_finalize;
        _inf_value9->clone=(void*)sPlusPlusNode2_clone;
        _inf_value9->compile=(void*)sPlusPlusNode2_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sPlusPlusNode2_kind;
        __result_obj__142 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value275=_inf_value9)));
        ((node_192) ? node_192 = come_decrement_ref_count(node_192, ((struct sNode*)node_192)->finalize, ((struct sNode*)node_192)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value271,sPlusPlusNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value275) ? __right_value275 = come_decrement_ref_count(__right_value275, ((struct sNode*)__right_value275)->finalize, ((struct sNode*)__right_value275)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__142;
        ((node_192) ? node_192 = come_decrement_ref_count(node_192, ((struct sNode*)node_192)->finalize, ((struct sNode*)node_192)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==126) {
        info->p++;
        skip_spaces_and_lf(info);
        node_194=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 782, "struct sNode");
        _inf_obj_value10=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(__right_value278=sComplement_initialize((struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc_v2(1, sizeof(struct sComplement)*(1), "05pre_op.c", 782, "struct sComplement*")),(struct sNode*)come_increment_ref_count(node_194),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sComplement_finalize;
        _inf_value10->clone=(void*)sComplement_clone;
        _inf_value10->compile=(void*)sComplement_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sComplement_kind;
        __result_obj__145 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value282=_inf_value10)));
        ((node_194) ? node_194 = come_decrement_ref_count(node_194, ((struct sNode*)node_194)->finalize, ((struct sNode*)node_194)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value278,sComplement_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value282) ? __right_value282 = come_decrement_ref_count(__right_value282, ((struct sNode*)__right_value282)->finalize, ((struct sNode*)__right_value282)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__145) ? __result_obj__145 = come_decrement_ref_count(__result_obj__145, ((struct sNode*)__result_obj__145)->finalize, ((struct sNode*)__result_obj__145)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__145;
        ((node_194) ? node_194 = come_decrement_ref_count(node_194, ((struct sNode*)node_194)->finalize, ((struct sNode*)node_194)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (*info->p==92&&*(info->p+1)==42)||*info->p==42) {
        if(        *info->p==92) {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_196=(_Bool)1;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            quote_196=(_Bool)0;
        }
        no_assign_197=info->no_assign;
        info->no_assign=(_Bool)1;
        value_198=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        info->no_assign=no_assign_197;
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 802, "struct sNode");
        _inf_obj_value11=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value285=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc_v2(1, sizeof(struct sDerefferenceNode)*(1), "05pre_op.c", 802, "struct sDerefferenceNode*")),(struct sNode*)come_increment_ref_count(value_198),quote_196,info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDerefferenceNode_finalize;
        _inf_value11->clone=(void*)sDerefferenceNode_clone;
        _inf_value11->compile=(void*)sDerefferenceNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDerefferenceNode_kind;
        __result_obj__148 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value289=_inf_value11)));
        ((value_198) ? value_198 = come_decrement_ref_count(value_198, ((struct sNode*)value_198)->finalize, ((struct sNode*)value_198)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value285,sDerefferenceNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value289) ? __right_value289 = come_decrement_ref_count(__right_value289, ((struct sNode*)__right_value289)->finalize, ((struct sNode*)__right_value289)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__148) ? __result_obj__148 = come_decrement_ref_count(__result_obj__148, ((struct sNode*)__result_obj__148)->finalize, ((struct sNode*)__result_obj__148)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__148;
        ((value_198) ? value_198 = come_decrement_ref_count(value_198, ((struct sNode*)value_198)->finalize, ((struct sNode*)value_198)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==38&&refference_182) {
        info->p++;
        skip_spaces_and_lf(info);
        value_200=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 810, "struct sNode");
        _inf_obj_value12=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value292=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 810, "struct sRefferenceNode*")),(struct sNode*)come_increment_ref_count(value_200),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sRefferenceNode_finalize;
        _inf_value12->clone=(void*)sRefferenceNode_clone;
        _inf_value12->compile=(void*)sRefferenceNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sRefferenceNode_kind;
        __result_obj__149 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value293=_inf_value12)));
        ((value_200) ? value_200 = come_decrement_ref_count(value_200, ((struct sNode*)value_200)->finalize, ((struct sNode*)value_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value292,sRefferenceNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value293) ? __right_value293 = come_decrement_ref_count(__right_value293, ((struct sNode*)__right_value293)->finalize, ((struct sNode*)__right_value293)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__149) ? __result_obj__149 = come_decrement_ref_count(__result_obj__149, ((struct sNode*)__result_obj__149)->finalize, ((struct sNode*)__result_obj__149)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__149;
        ((value_200) ? value_200 = come_decrement_ref_count(value_200, ((struct sNode*)value_200)->finalize, ((struct sNode*)value_200)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        info->p++;
        skip_spaces_and_lf(info);
        value_201=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 818, "struct sNode");
        _inf_obj_value13=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value296=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc_v2(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 818, "struct sReverseNode*")),(struct sNode*)come_increment_ref_count(value_201),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sReverseNode_finalize;
        _inf_value13->clone=(void*)sReverseNode_clone;
        _inf_value13->compile=(void*)sReverseNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sReverseNode_kind;
        __result_obj__152 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value300=_inf_value13)));
        ((value_201) ? value_201 = come_decrement_ref_count(value_201, ((struct sNode*)value_201)->finalize, ((struct sNode*)value_201)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value296,sReverseNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value300) ? __right_value300 = come_decrement_ref_count(__right_value300, ((struct sNode*)__right_value300)->finalize, ((struct sNode*)__right_value300)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__152) ? __result_obj__152 = come_decrement_ref_count(__result_obj__152, ((struct sNode*)__result_obj__152)->finalize, ((struct sNode*)__result_obj__152)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__152;
        ((value_201) ? value_201 = come_decrement_ref_count(value_201, ((struct sNode*)value_201)->finalize, ((struct sNode*)value_201)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        cast_expression_flag_203=(_Bool)0;
        {
            p_204=info->p;
            sline_205=info->sline;
            parse_sharp_v5(info);
            word_206=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj113=word_206,
                word_206=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            parse_sharp_v5(info);
            if(            is_type_name(word_206,info)) {
                cast_expression_flag_203=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_204;
            info->sline=sline_205;
            (word_206 = come_decrement_ref_count(word_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        tuple_expression_flag_207=(_Bool)0;
        named_tuple_expression_flag_208=(_Bool)0;
        if(        !gComeC) {
            p_209=info->p;
            sline_210=info->sline;
            parse_sharp_v5(info);
            {
                p_211=info->p;
                sline_212=info->sline;
                if(                *info->p==95||xisalpha(*info->p)) {
                    ((char*)(__right_value303=parse_word(info)));
                    (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    named_tuple_expression_flag_208=(_Bool)1;
                }
                else {
                    info->p=p_211;
                    info->sline=sline_212;
                }
            }
            no_comma_213=info->no_comma;
            info->no_comma=(_Bool)1;
            no_output_err_214=info->no_output_err;
            info->no_output_err=(_Bool)1;
            no_output_come_code_215=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            node_216=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node2_217=(struct sNode*)come_increment_ref_count(node_216);
            parse_sharp_v5(info);
            info->no_comma=no_comma_213;
            info->no_output_err=no_output_err_214;
            info->no_output_come_code=no_output_come_code_215;
            if(            *info->p==44) {
                tuple_expression_flag_207=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_209;
            info->sline=sline_210;
            ((node_216) ? node_216 = come_decrement_ref_count(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node2_217) ? node2_217 = come_decrement_ref_count(node2_217, ((struct sNode*)node2_217)->finalize, ((struct sNode*)node2_217)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_block_218=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05pre_op.c", 907, "struct list$1sNode$ph*"))));
            while(            (_Bool)1) {
                parse_sharp_v5(info);
                node2_219=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                list$1sNode$ph_add(paren_block_218,(struct sNode*)come_increment_ref_count(node2_219));
                while(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_219) ? node2_219 = come_decrement_ref_count(node2_219, ((struct sNode*)node2_219)->finalize, ((struct sNode*)node2_219)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end in paren block");
                    exit(0);
                }
                ((node2_219) ? node2_219 = come_decrement_ref_count(node2_219, ((struct sNode*)node2_219)->finalize, ((struct sNode*)node2_219)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            expected_next_character(41,info);
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 936, "struct sNode");
            _inf_obj_value14=(struct sParenBlockNode*)come_increment_ref_count(((struct sParenBlockNode*)(__right_value309=sParenBlockNode_initialize((struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc_v2(1, sizeof(struct sParenBlockNode)*(1), "05pre_op.c", 936, "struct sParenBlockNode*")),(struct list$1sNode$ph*)come_increment_ref_count(paren_block_218),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sParenBlockNode_finalize;
            _inf_value14->clone=(void*)sParenBlockNode_clone;
            _inf_value14->compile=(void*)sParenBlockNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sParenBlockNode_kind;
            node_220=(struct sNode*)come_increment_ref_count(_inf_value14);
            /*c*/ come_call_finalizer3(__right_value309,sParenBlockNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            __result_obj__155 = (struct sNode*)come_increment_ref_count(node_220);
            /*c*/ come_call_finalizer3(paren_block_218,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_220) ? node_220 = come_decrement_ref_count(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__155) ? __result_obj__155 = come_decrement_ref_count(__result_obj__155, ((struct sNode*)__result_obj__155)->finalize, ((struct sNode*)__result_obj__155)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__155;
            /*c*/ come_call_finalizer3(paren_block_218,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_220) ? node_220 = come_decrement_ref_count(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&tuple_expression_flag_207) {
            parse_sharp_v5(info);
            node_222=(struct sNode*)come_increment_ref_count(parse_tuple(info,named_tuple_expression_flag_208));
            parse_sharp_v5(info);
            __result_obj__156 = (struct sNode*)come_increment_ref_count(node_222);
            ((node_222) ? node_222 = come_decrement_ref_count(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__156) ? __result_obj__156 = come_decrement_ref_count(__result_obj__156, ((struct sNode*)__result_obj__156)->finalize, ((struct sNode*)__result_obj__156)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__156;
            ((node_222) ? node_222 = come_decrement_ref_count(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        cast_expression_flag_203) {
            parse_sharp_v5(info);
            multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value315=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_223=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_224=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_225=multiple_assign_var6->v3;
            /*c*/ come_call_finalizer3(__right_value315,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_225) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            expected_next_character(41,info);
            parse_sharp_v5(info);
            node_226=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 966, "struct sNode");
            _inf_obj_value15=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value318=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 966, "struct sCastNode*")),type_223,node_226,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCastNode_finalize;
            _inf_value15->clone=(void*)sCastNode_clone;
            _inf_value15->compile=(void*)sCastNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCastNode_kind;
            __result_obj__157 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value319=_inf_value15)));
            /*c*/ come_call_finalizer3(type_223,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_224 = come_decrement_ref_count(name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_226) ? node_226 = come_decrement_ref_count(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value318,sCastNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value319) ? __right_value319 = come_decrement_ref_count(__right_value319, ((struct sNode*)__right_value319)->finalize, ((struct sNode*)__right_value319)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__157) ? __result_obj__157 = come_decrement_ref_count(__result_obj__157, ((struct sNode*)__result_obj__157)->finalize, ((struct sNode*)__result_obj__157)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__157;
            /*c*/ come_call_finalizer3(type_223,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_224 = come_decrement_ref_count(name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_226) ? node_226 = come_decrement_ref_count(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_assign_228=info->no_assign;
            info->no_assign=(_Bool)0;
            if(            gComeC&&info->in_fun_param) {
                no_comma_229=info->no_comma;
                info->no_comma=(_Bool)0;
                parse_sharp_v5(info);
                __dec_obj116=node_227,
                node_227=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                parse_sharp_v5(info);
                info->no_comma=no_comma_229;
            }
            else {
                parse_sharp_v5(info);
                __dec_obj117=node_227,
                node_227=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                parse_sharp_v5(info);
            }
            info->no_assign=no_assign_228;
            expected_next_character(41,info);
            parse_sharp_v5(info);
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 992, "struct sNode");
            _inf_obj_value16=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(__right_value323=sParenNode_initialize((struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc_v2(1, sizeof(struct sParenNode)*(1), "05pre_op.c", 992, "struct sParenNode*")),node_227,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sParenNode_finalize;
            _inf_value16->clone=(void*)sParenNode_clone;
            _inf_value16->compile=(void*)sParenNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sParenNode_kind;
            __dec_obj120=node_227,
            node_227=(struct sNode*)come_increment_ref_count(_inf_value16);
            (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value323,sParenNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__160 = (struct sNode*)come_increment_ref_count(node_227);
            ((node_227) ? node_227 = come_decrement_ref_count(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__160) ? __result_obj__160 = come_decrement_ref_count(__result_obj__160, ((struct sNode*)__result_obj__160)->finalize, ((struct sNode*)__result_obj__160)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__160;
            ((node_227) ? node_227 = come_decrement_ref_count(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else {
        __result_obj__161 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((__result_obj__161) ? __result_obj__161 = come_decrement_ref_count(__result_obj__161, ((struct sNode*)__result_obj__161)->finalize, ((struct sNode*)__result_obj__161)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__161;
    }
}

static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self){
struct sLogicalDenial2* __result_obj__131;
void* __right_value251 = (void*)0;
struct sLogicalDenial2* result_187;
void* __right_value252 = (void*)0;
char* __dec_obj99;
void* __right_value253 = (void*)0;
struct sNode* __dec_obj100;
struct sLogicalDenial2* __result_obj__132;
    if(    self==(void*)0) {
        __result_obj__131 = (void*)0;
        return __result_obj__131;
    }
    result_187=(struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc_v2(1, sizeof(struct sLogicalDenial2)*(1), "sLogicalDenial2_clone", 3, "struct sLogicalDenial2*"));
    if(    self!=((void*)0)) {
        result_187->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj99=result_187->sname,
        result_187->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLogicalDenial2_clone", 5, "char*"));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_187->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj100=result_187->value,
        result_187->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__132 = result_187;
    /*c*/ come_call_finalizer3(result_187,sLogicalDenial2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__132;
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
struct sMinusMinusNode2* __result_obj__134;
void* __right_value258 = (void*)0;
struct sMinusMinusNode2* result_189;
void* __right_value259 = (void*)0;
char* __dec_obj101;
void* __right_value260 = (void*)0;
struct sNode* __dec_obj102;
struct sMinusMinusNode2* __result_obj__135;
    if(    self==(void*)0) {
        __result_obj__134 = (void*)0;
        return __result_obj__134;
    }
    result_189=(struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "struct sMinusMinusNode2*"));
    if(    self!=((void*)0)) {
        result_189->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj101=result_189->sname,
        result_189->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMinusMinusNode2_clone", 5, "char*"));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_189->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj102=result_189->value,
        result_189->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__135 = result_189;
    /*c*/ come_call_finalizer3(result_189,sMinusMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__135;
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
struct sMinusNode2* __result_obj__137;
void* __right_value265 = (void*)0;
struct sMinusNode2* result_191;
void* __right_value266 = (void*)0;
char* __dec_obj103;
void* __right_value267 = (void*)0;
struct sNode* __dec_obj104;
struct sMinusNode2* __result_obj__138;
    if(    self==(void*)0) {
        __result_obj__137 = (void*)0;
        return __result_obj__137;
    }
    result_191=(struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "struct sMinusNode2*"));
    if(    self!=((void*)0)) {
        result_191->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj103=result_191->sname,
        result_191->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMinusNode2_clone", 5, "char*"));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_191->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj104=result_191->value,
        result_191->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__138 = result_191;
    /*c*/ come_call_finalizer3(result_191,sMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__138;
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
struct sPlusPlusNode2* __result_obj__140;
void* __right_value272 = (void*)0;
struct sPlusPlusNode2* result_193;
void* __right_value273 = (void*)0;
char* __dec_obj105;
void* __right_value274 = (void*)0;
struct sNode* __dec_obj106;
struct sPlusPlusNode2* __result_obj__141;
    if(    self==(void*)0) {
        __result_obj__140 = (void*)0;
        return __result_obj__140;
    }
    result_193=(struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc_v2(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "struct sPlusPlusNode2*"));
    if(    self!=((void*)0)) {
        result_193->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj105=result_193->sname,
        result_193->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sPlusPlusNode2_clone", 5, "char*"));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_193->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj106=result_193->value,
        result_193->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__141 = result_193;
    /*c*/ come_call_finalizer3(result_193,sPlusPlusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__141;
}

static struct sComplement* sComplement_clone(struct sComplement* self){
struct sComplement* __result_obj__143;
void* __right_value279 = (void*)0;
struct sComplement* result_195;
void* __right_value280 = (void*)0;
char* __dec_obj107;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj108;
struct sComplement* __result_obj__144;
    if(    self==(void*)0) {
        __result_obj__143 = (void*)0;
        return __result_obj__143;
    }
    result_195=(struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc_v2(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "struct sComplement*"));
    if(    self!=((void*)0)) {
        result_195->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj107=result_195->sname,
        result_195->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComplement_clone", 5, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_195->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj108=result_195->value,
        result_195->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__144 = result_195;
    /*c*/ come_call_finalizer3(result_195,sComplement_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__144;
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
struct sDerefferenceNode* __result_obj__146;
void* __right_value286 = (void*)0;
struct sDerefferenceNode* result_199;
void* __right_value287 = (void*)0;
char* __dec_obj109;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj110;
struct sDerefferenceNode* __result_obj__147;
    if(    self==(void*)0) {
        __result_obj__146 = (void*)0;
        return __result_obj__146;
    }
    result_199=(struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc_v2(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "struct sDerefferenceNode*"));
    if(    self!=((void*)0)) {
        result_199->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj109=result_199->sname,
        result_199->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDerefferenceNode_clone", 5, "char*"));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_199->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj110=result_199->value,
        result_199->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj110 ? __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_199->mQuote=self->mQuote;
    }
    __result_obj__147 = result_199;
    /*c*/ come_call_finalizer3(result_199,sDerefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__147;
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
struct sReverseNode* __result_obj__150;
void* __right_value297 = (void*)0;
struct sReverseNode* result_202;
void* __right_value298 = (void*)0;
char* __dec_obj111;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj112;
struct sReverseNode* __result_obj__151;
    if(    self==(void*)0) {
        __result_obj__150 = (void*)0;
        return __result_obj__150;
    }
    result_202=(struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc_v2(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "struct sReverseNode*"));
    if(    self!=((void*)0)) {
        result_202->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj111=result_202->sname,
        result_202->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReverseNode_clone", 5, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_202->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj112=result_202->value,
        result_202->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__151 = result_202;
    /*c*/ come_call_finalizer3(result_202,sReverseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__151;
}

static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self){
struct sParenBlockNode* __result_obj__153;
void* __right_value310 = (void*)0;
struct sParenBlockNode* result_221;
void* __right_value311 = (void*)0;
char* __dec_obj114;
void* __right_value312 = (void*)0;
struct list$1sNode$ph* __dec_obj115;
struct sParenBlockNode* __result_obj__154;
    if(    self==(void*)0) {
        __result_obj__153 = (void*)0;
        return __result_obj__153;
    }
    result_221=(struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc_v2(1, sizeof(struct sParenBlockNode)*(1), "sParenBlockNode_clone", 3, "struct sParenBlockNode*"));
    if(    self!=((void*)0)) {
        result_221->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj114=result_221->sname,
        result_221->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sParenBlockNode_clone", 5, "char*"));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_221->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->paren_block!=((void*)0)) {
        __dec_obj115=result_221->paren_block,
        result_221->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->paren_block));
        /*b*/ come_call_finalizer3(__dec_obj115,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__154 = result_221;
    /*c*/ come_call_finalizer3(result_221,sParenBlockNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__154;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
struct sParenNode* __result_obj__158;
void* __right_value324 = (void*)0;
struct sParenNode* result_230;
void* __right_value325 = (void*)0;
char* __dec_obj118;
void* __right_value326 = (void*)0;
struct sNode* __dec_obj119;
struct sParenNode* __result_obj__159;
    if(    self==(void*)0) {
        __result_obj__158 = (void*)0;
        return __result_obj__158;
    }
    result_230=(struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc_v2(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "struct sParenNode*"));
    if(    self!=((void*)0)) {
        result_230->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj118=result_230->sname,
        result_230->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sParenNode_clone", 5, "char*"));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_230->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj119=result_230->mLeft,
        result_230->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__159 = result_230;
    /*c*/ come_call_finalizer3(result_230,sParenNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__159;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __right_value328 = (void*)0;
struct sNode* node_231;
void* __right_value329 = (void*)0;
struct sNode* __result_obj__162;
struct sNode* __result_obj__163;
    node_231=(struct sNode*)come_increment_ref_count(pre_position_operator(info));
    if(    node_231==((void*)0)) {
        __result_obj__162 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value329=expression_node_v97(info))));
        ((node_231) ? node_231 = come_decrement_ref_count(node_231, ((struct sNode*)node_231)->finalize, ((struct sNode*)node_231)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value329) ? __right_value329 = come_decrement_ref_count(__right_value329, ((struct sNode*)__right_value329)->finalize, ((struct sNode*)__right_value329)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__162) ? __result_obj__162 = come_decrement_ref_count(__result_obj__162, ((struct sNode*)__result_obj__162)->finalize, ((struct sNode*)__result_obj__162)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__162;
    }
    else {
        __result_obj__163 = (struct sNode*)come_increment_ref_count(node_231);
        ((node_231) ? node_231 = come_decrement_ref_count(node_231, ((struct sNode*)node_231)->finalize, ((struct sNode*)node_231)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__163) ? __result_obj__163 = come_decrement_ref_count(__result_obj__163, ((struct sNode*)__result_obj__163)->finalize, ((struct sNode*)__result_obj__163)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__163;
    }
    ((node_231) ? node_231 = come_decrement_ref_count(node_231, ((struct sNode*)node_231)->finalize, ((struct sNode*)node_231)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

