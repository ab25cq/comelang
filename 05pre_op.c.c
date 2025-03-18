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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
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
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
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
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
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
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);
char* sRefferenceNode_kind(struct sRefferenceNode* self);
_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
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
struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info);
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
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
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
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
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
static void va_list_finalize(va_list self){
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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info){
void* __right_value224 = (void*)0;
struct sType* generics_type_249;
struct sType* __dec_obj40;
struct sClass* klass_277;
char* class_name_278;
struct sFun* operator_fun_279;
char* fun_name2_280;
struct sGenericsFun* generics_fun_281;
void* __right_value225 = (void*)0;
char* none_generics_name_282;
void* __right_value226 = (void*)0;
struct sType* obj_type_283;
void* __right_value227 = (void*)0;
char* __dec_obj41;
void* __right_value228 = (void*)0;
char* fun_name3_284;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_287=0;
_Bool err_288=0;
_Bool __result_obj__186;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_292=0;
char* fun_name_293=0;
void* __right_value234 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var3 = (void*)0;
struct sFun* fun2_294=0;
char* fun_name2_295=0;
void* __right_value235 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun_296=0;
char* fun_name_297=0;
void* __right_value236 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_298=0;
char* fun_name2_299=0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
char* __dec_obj42;
int i_300;
void* __right_value239 = (void*)0;
char* new_fun_name_301;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
char* __dec_obj43;
void* __right_value242 = (void*)0;
_Bool result_302;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct CVALUE* come_value_303;
char* left_value2_304;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var6 = (void*)0;
_Bool come_exception_var_1_308=0;
char* Err_309=0;
_Bool _if_conditional1;
_Bool __result_obj__193;
void* __right_value249 = (void*)0;
_Bool _if_conditional2;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* __dec_obj44;
void* __right_value252 = (void*)0;
char* __dec_obj45;
void* __right_value253 = (void*)0;
char* __dec_obj46;
void* __right_value254 = (void*)0;
struct sType* type2_310;
void* __right_value255 = (void*)0;
struct sType* type3_311;
void* __right_value256 = (void*)0;
struct sType* __dec_obj47;
void* __right_value257 = (void*)0;
char* __dec_obj48;
_Bool __result_obj__195;
fun_name2_280 = (void*)0;
memset(&i_300, 0, sizeof(int));
left_value2_304 = (void*)0;
    generics_type_249=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_249->mNoSolvedGenericsType) {
        __dec_obj40=generics_type_249,
        generics_type_249=(struct sType*)come_increment_ref_count(generics_type_249->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    klass_277=type->mClass;
    class_name_278=klass_277->mName;
    operator_fun_279=((void*)0);
    generics_fun_281=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_282=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_283=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj41=fun_name2_280,
        fun_name2_280=(char*)come_increment_ref_count(create_method_name(obj_type_283,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_284=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_282,fun_name));
        generics_fun_281=((struct sGenericsFun*)(__right_value229=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_284,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value229,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_281) {
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value231=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_280)),generics_fun_281,obj_type_283,info)));
            name_287=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_288=multiple_assign_var1->v2;
            /*c*/ come_call_finalizer3(__right_value231,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_288) {
                __result_obj__186 = (_Bool)0;
                (name_287 = come_decrement_ref_count(name_287, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_282 = come_decrement_ref_count(none_generics_name_282, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_283,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_284 = come_decrement_ref_count(fun_name3_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(generics_type_249,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_280 = come_decrement_ref_count(fun_name2_280, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__186;
            }
            operator_fun_279=((struct sFun*)(__right_value232=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_287)));
            /*c*/ come_call_finalizer3(__right_value232,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_287 = come_decrement_ref_count(name_287, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value233=create_equals_automatically(obj_type_283,"equals",info)));
                fun_292=multiple_assign_var2->v1;
                fun_name_293=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                /*c*/ come_call_finalizer3(__right_value233,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value234=create_operator_equals_automatically(obj_type_283,"operator_equals",info)));
                fun2_294=multiple_assign_var3->v1;
                fun_name2_295=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                /*c*/ come_call_finalizer3(__right_value234,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                operator_fun_279=fun2_294;
                (fun_name_293 = come_decrement_ref_count(fun_name_293, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_295 = come_decrement_ref_count(fun_name2_295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value235=create_equals_automatically(obj_type_283,"not_equals",info)));
                fun_296=multiple_assign_var4->v1;
                fun_name_297=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                /*c*/ come_call_finalizer3(__right_value235,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value236=create_operator_not_equals_automatically(obj_type_283,"operator_not_equals",info)));
                fun2_298=multiple_assign_var5->v1;
                fun_name2_299=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                /*c*/ come_call_finalizer3(__right_value236,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                operator_fun_279=fun2_298;
                (fun_name_297 = come_decrement_ref_count(fun_name_297, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_299 = come_decrement_ref_count(fun_name2_299, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                operator_fun_279=((struct sFun*)(__right_value237=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_280)));
                /*c*/ come_call_finalizer3(__right_value237,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        (none_generics_name_282 = come_decrement_ref_count(none_generics_name_282, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_283,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_284 = come_decrement_ref_count(fun_name3_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj42=fun_name2_280,
        fun_name2_280=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_300=128-1;        i_300>=1;        i_300--        ){
            new_fun_name_301=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_280,i_300));
            operator_fun_279=((struct sFun*)(__right_value240=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_301)));
            /*c*/ come_call_finalizer3(__right_value240,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            operator_fun_279) {
                __dec_obj43=fun_name2_280,
                fun_name2_280=(char*)come_increment_ref_count(__builtin_string(new_fun_name_301));
                __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_301 = come_decrement_ref_count(new_fun_name_301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_301 = come_decrement_ref_count(new_fun_name_301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        operator_fun_279==((void*)0)) {
            operator_fun_279=((struct sFun*)(__right_value242=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_280)));
            /*c*/ come_call_finalizer3(__right_value242,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    result_302=(_Bool)0;
    if(    operator_fun_279) {
        come_value_303=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 81, "struct CVALUE*"))));
        multiple_assign_var6=((struct tuple2$2bool$char$ph*)(__right_value248=check_assign_type(((char*)(__right_value246=xsprintf("\%s is assigned to",((char*)(__right_value245=string_to_string(fun_name2_280)))))),((struct sType*)(__right_value247=list$1sType$ph$p_operator_load_element(operator_fun_279->mParamTypes,0))),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
        come_exception_var_1_308=multiple_assign_var6->v1;
        Err_309=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional1=(Err_309)),        (__right_value245 = come_decrement_ref_count(__right_value245, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value247,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value248,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional1) {
            __result_obj__193 = (_Bool)1;
            /*c*/ come_call_finalizer3(come_value_303,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (left_value2_304 = come_decrement_ref_count(left_value2_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_309 = come_decrement_ref_count(Err_309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(generics_type_249,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name2_280 = come_decrement_ref_count(fun_name2_280, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__193;
        }
        else {
        }
        if(        (_if_conditional2=(((struct sType*)(__right_value249=list$1sType$ph$p_operator_load_element(operator_fun_279->mParamTypes,0)))->mHeap&&left_value->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value249,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)(__right_value250=list$1sType$ph$p_operator_load_element(operator_fun_279->mParamTypes,0))),left_value->type,left_value,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value250,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj44=left_value2_304,
            left_value2_304=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj45=left_value2_304,
            left_value2_304=(char*)come_increment_ref_count((char*)come_memdup(left_value->c_value, "05pre_op.c", 91, "char*"));
            __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        __dec_obj46=come_value_303->c_value,
        come_value_303->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_280,left_value2_304));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        type2_310=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_279->mResultType));
        type3_311=(struct sType*)come_increment_ref_count(solve_generics(type2_310,generics_type_249,info));
        come_value_303->var=((void*)0);
        __dec_obj47=come_value_303->type,
        come_value_303->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_311));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        type3_311->mHeap) {
            append_object_to_right_values2(come_value_303,(struct sType*)come_increment_ref_count(type3_311),info,(_Bool)0);
        }
        __dec_obj48=come_value_303->c_value,
        come_value_303->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_303->c_value,come_value_303->type,info));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        add_come_last_code(info,"%s",come_value_303->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_303));
        result_302=(_Bool)1;
        /*c*/ come_call_finalizer3(come_value_303,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (left_value2_304 = come_decrement_ref_count(left_value2_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (Err_309 = come_decrement_ref_count(Err_309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type3_311,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__195 = result_302;
    /*c*/ come_call_finalizer3(generics_type_249,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_280 = come_decrement_ref_count(fun_name2_280, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__195;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__167;
void* __right_value186 = (void*)0;
struct sType* result_250;
void* __right_value187 = (void*)0;
struct sType* __dec_obj16;
void* __right_value188 = (void*)0;
struct sType* __dec_obj17;
void* __right_value196 = (void*)0;
struct list$1sType$ph* __dec_obj21;
void* __right_value197 = (void*)0;
struct sType* __dec_obj22;
void* __right_value198 = (void*)0;
struct sType* __dec_obj23;
void* __right_value200 = (void*)0;
struct sNode* __dec_obj24;
void* __right_value201 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value202 = (void*)0;
char* __dec_obj26;
void* __right_value203 = (void*)0;
char* __dec_obj27;
void* __right_value204 = (void*)0;
char* __dec_obj28;
void* __right_value212 = (void*)0;
struct list$1sNode$ph* __dec_obj32;
void* __right_value213 = (void*)0;
char* __dec_obj33;
void* __right_value214 = (void*)0;
struct list$1sType$ph* __dec_obj34;
void* __right_value222 = (void*)0;
struct list$1char$ph* __dec_obj38;
void* __right_value223 = (void*)0;
struct sType* __dec_obj39;
struct sType* __result_obj__181;
    if(    self==(void*)0) {
        __result_obj__167 = (void*)0;
        return __result_obj__167;
    }
    result_250=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_250->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj16=result_250->mOriginalLoadVarType,
        result_250->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj16,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj17=result_250->mChannelType,
        result_250->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj21=result_250->mGenericsTypes,
        result_250->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj21,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj22=result_250->mNoSolvedGenericsType,
        result_250->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj23=result_250->mAnyOriginalType,
        result_250->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj24=result_250->mSizeNum,
        result_250->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj25=result_250->mAlignas,
        result_250->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj26=result_250->mTupleName,
        result_250->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj27=result_250->mAttribute,
        result_250->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_250->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_250->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_250->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_250->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_250->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_250->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_250->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_250->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_250->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_250->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_250->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_250->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_250->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_250->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_250->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_250->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_250->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_250->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_250->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_250->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_250->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_250->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj28=result_250->mAsmName,
        result_250->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_250->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_250->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj32=result_250->mArrayNum,
        result_250->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj32,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_250->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj33=result_250->mOriginalTypeName,
        result_250->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_250->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_250->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj34=result_250->mParamTypes,
        result_250->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj38=result_250->mParamNames,
        result_250->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj38,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj39=result_250->mResultType,
        result_250->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mVarArgs=self->mVarArgs;
    }
    __result_obj__181 = result_250;
    /*c*/ come_call_finalizer3(result_250,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
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

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__168;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct list$1sType$ph* result_255;
struct list_item$1sType$ph* it_256;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct list$1sType$ph* __result_obj__171;
    if(    self==((void*)0)) {
        __result_obj__168 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__168,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__168;
    }
    result_255=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1138, "struct list$1sType$ph*"))));
    it_256=self->head;
    while(it_256!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_255,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_256->item)));
        }
        else {
            list$1sType$ph_add(result_255,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_256->item)));
        }
        it_256=it_256->next;
    }
    __result_obj__171 = come_increment_ref_count(result_255);
    /*c*/ come_call_finalizer3(result_255,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__169;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__169 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value191 = (void*)0;
struct list_item$1sType$ph* litem_257;
struct sType* __dec_obj18;
void* __right_value192 = (void*)0;
struct list_item$1sType$ph* litem_258;
struct sType* __dec_obj19;
void* __right_value193 = (void*)0;
struct list_item$1sType$ph* litem_259;
struct sType* __dec_obj20;
struct list$1sType$ph* __result_obj__170;
    if(    self->len==0) {
        litem_257=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value191=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_257->prev=((void*)0);
        litem_257->next=((void*)0);
        __dec_obj18=litem_257->item,
        litem_257->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_257;
        self->head=litem_257;
    }
    else if(    self->len==1) {
        litem_258=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value192=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_258->prev=self->head;
        litem_258->next=((void*)0);
        __dec_obj19=litem_258->item,
        litem_258->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_258;
        self->head->next=litem_258;
    }
    else {
        litem_259=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value193=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_259->prev=self->tail;
        litem_259->next=((void*)0);
        __dec_obj20=litem_259->item,
        litem_259->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_259;
        self->tail=litem_259;
    }
    self->len++;
    __result_obj__170 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_260;
struct list_item$1sType$ph* prev_it_261;
    it_260=self->head;
    while(it_260!=((void*)0)) {
        prev_it_261=it_260;
        it_260=it_260->next;
        /*c*/ come_call_finalizer3(prev_it_261,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__172;
void* __right_value199 = (void*)0;
struct sNode* result_262;
struct sNode* __result_obj__173;
    if(    self==(void*)0) {
        __result_obj__172 = come_increment_ref_count((void*)0);
        ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__172;
    }
    result_262=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_262->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_262->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_262->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_262->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_262->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_262->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_262->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_262->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_262->kind=self->kind;
    }
    __result_obj__173 = come_increment_ref_count(result_262);
    ((result_262) ? result_262 = come_decrement_ref_count(result_262, ((struct sNode*)result_262)->finalize, ((struct sNode*)result_262)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__173;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__174;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct list$1sNode$ph* result_263;
struct list_item$1sNode$ph* it_264;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct list$1sNode$ph* __result_obj__177;
    if(    self==((void*)0)) {
        __result_obj__174 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__174,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__174;
    }
    result_263=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_264=self->head;
    while(it_264!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_263,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_264->item)));
        }
        else {
            list$1sNode$ph_add(result_263,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_264->item)));
        }
        it_264=it_264->next;
    }
    __result_obj__177 = come_increment_ref_count(result_263);
    /*c*/ come_call_finalizer3(result_263,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__177,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__175;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__175 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__175,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value207 = (void*)0;
struct list_item$1sNode$ph* litem_265;
struct sNode* __dec_obj29;
void* __right_value208 = (void*)0;
struct list_item$1sNode$ph* litem_266;
struct sNode* __dec_obj30;
void* __right_value209 = (void*)0;
struct list_item$1sNode$ph* litem_267;
struct sNode* __dec_obj31;
struct list$1sNode$ph* __result_obj__176;
    if(    self->len==0) {
        litem_265=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value207=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_265->prev=((void*)0);
        litem_265->next=((void*)0);
        __dec_obj29=litem_265->item,
        litem_265->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_265;
        self->head=litem_265;
    }
    else if(    self->len==1) {
        litem_266=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value208=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_266->prev=self->head;
        litem_266->next=((void*)0);
        __dec_obj30=litem_266->item,
        litem_266->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_266;
        self->head->next=litem_266;
    }
    else {
        litem_267=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value209=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_267->prev=self->tail;
        litem_267->next=((void*)0);
        __dec_obj31=litem_267->item,
        litem_267->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_267;
        self->tail=litem_267;
    }
    self->len++;
    __result_obj__176 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__176;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_268;
struct list_item$1sNode$ph* prev_it_269;
    it_268=self->head;
    while(it_268!=((void*)0)) {
        prev_it_269=it_268;
        it_268=it_268->next;
        /*c*/ come_call_finalizer3(prev_it_269,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct list$1char$ph* result_270;
struct list_item$1char$ph* it_271;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct list$1char$ph* __result_obj__180;
    if(    self==((void*)0)) {
        __result_obj__178 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_270=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1138, "struct list$1char$ph*"))));
    it_271=self->head;
    while(it_271!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_270,(char*)come_increment_ref_count((char*)come_memdup(it_271->item, "./comelang.h", 1143, "char*")));
        }
        else {
            list$1char$ph_add(result_270,(char*)come_increment_ref_count((char*)come_memdup(it_271->item, "./comelang.h", 1146, "char*")));
        }
        it_271=it_271->next;
    }
    __result_obj__180 = come_increment_ref_count(result_270);
    /*c*/ come_call_finalizer3(result_270,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__180,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value217 = (void*)0;
struct list_item$1char$ph* litem_272;
char* __dec_obj35;
void* __right_value218 = (void*)0;
struct list_item$1char$ph* litem_273;
char* __dec_obj36;
void* __right_value219 = (void*)0;
struct list_item$1char$ph* litem_274;
char* __dec_obj37;
struct list$1char$ph* __result_obj__179;
    if(    self->len==0) {
        litem_272=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value217=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_272->prev=((void*)0);
        litem_272->next=((void*)0);
        __dec_obj35=litem_272->item,
        litem_272->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_272;
        self->head=litem_272;
    }
    else if(    self->len==1) {
        litem_273=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value218=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_273->prev=self->head;
        litem_273->next=((void*)0);
        __dec_obj36=litem_273->item,
        litem_273->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_273;
        self->head->next=litem_273;
    }
    else {
        litem_274=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value219=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_274->prev=self->tail;
        litem_274->next=((void*)0);
        __dec_obj37=litem_274->item,
        litem_274->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_274;
        self->tail=litem_274;
    }
    self->len++;
    __result_obj__179 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__179;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_275;
struct list_item$1char$ph* prev_it_276;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
        /*c*/ come_call_finalizer3(prev_it_276,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_285;
unsigned int it_286;
struct sGenericsFun* __result_obj__182;
struct sGenericsFun* __result_obj__183;
struct sGenericsFun* __result_obj__184;
struct sGenericsFun* __result_obj__185;
    hash_285=string_get_hash_key(((char*)key))%self->size;
    it_286=hash_285;
    while((_Bool)1) {
        if(        self->item_existance[it_286]) {
            if(            string_equals(self->keys[it_286],key)) {
                __result_obj__182 = come_increment_ref_count(self->items[it_286]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__182,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__182;
            }
            it_286++;
            if(            it_286>=self->size) {
                it_286=0;
            }
            else if(            it_286==hash_285) {
                __result_obj__183 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__183,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__183;
            }
        }
        else {
            __result_obj__184 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__184,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__184;
        }
    }
    __result_obj__185 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__185,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__185;
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
struct sFun* default_value_289;
unsigned int hash_290;
unsigned int it_291;
struct sFun* __result_obj__187;
struct sFun* __result_obj__188;
struct sFun* __result_obj__189;
struct sFun* __result_obj__190;
default_value_289 = (void*)0;
    memset(&default_value_289,0,sizeof(struct sFun*));
    hash_290=string_get_hash_key(((char*)key))%self->size;
    it_291=hash_290;
    while((_Bool)1) {
        if(        self->item_existance[it_291]) {
            if(            string_equals(self->keys[it_291],key)) {
                __result_obj__187 = come_increment_ref_count(self->items[it_291]);
                /*c*/ come_call_finalizer3(default_value_289,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__187,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__187;
            }
            it_291++;
            if(            it_291>=self->size) {
                it_291=0;
            }
            else if(            it_291==hash_290) {
                __result_obj__188 = come_increment_ref_count(default_value_289);
                /*c*/ come_call_finalizer3(default_value_289,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__188,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__188;
            }
        }
        else {
            __result_obj__189 = come_increment_ref_count(default_value_289);
            /*c*/ come_call_finalizer3(default_value_289,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__189,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__189;
        }
    }
    __result_obj__190 = come_increment_ref_count(default_value_289);
    /*c*/ come_call_finalizer3(default_value_289,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
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

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_305;
int i_306;
struct sType* __result_obj__191;
struct sType* default_value_307;
struct sType* __result_obj__192;
default_value_307 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_305=self->head;
    i_306=0;
    while(it_305!=((void*)0)) {
        if(        position==i_306) {
            __result_obj__191 = come_increment_ref_count(it_305->item);
            /*c*/ come_call_finalizer3(__result_obj__191,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__191;
        }
        it_305=it_305->next;
        i_306++;
    }
    memset(&default_value_307,0,sizeof(struct sType*));
    __result_obj__192 = come_increment_ref_count(default_value_307);
    /*c*/ come_call_finalizer3(default_value_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__192,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value258 = (void*)0;
struct list_item$1CVALUE$ph* litem_312;
struct CVALUE* __dec_obj49;
void* __right_value259 = (void*)0;
struct list_item$1CVALUE$ph* litem_313;
struct CVALUE* __dec_obj50;
void* __right_value260 = (void*)0;
struct list_item$1CVALUE$ph* litem_314;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__194;
    if(    self->len==0) {
        litem_312=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value258=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1227, "struct list_item$1CVALUE$ph*"))));
        litem_312->prev=((void*)0);
        litem_312->next=((void*)0);
        __dec_obj49=litem_312->item,
        litem_312->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_312;
        self->head=litem_312;
    }
    else if(    self->len==1) {
        litem_313=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value259=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1237, "struct list_item$1CVALUE$ph*"))));
        litem_313->prev=self->head;
        litem_313->next=((void*)0);
        __dec_obj50=litem_313->item,
        litem_313->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_313;
        self->head->next=litem_313;
    }
    else {
        litem_314=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value260=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1247, "struct list_item$1CVALUE$ph*"))));
        litem_314->prev=self->tail;
        litem_314->next=((void*)0);
        __dec_obj51=litem_314->item,
        litem_314->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_314;
        self->tail=litem_314;
    }
    self->len++;
    __result_obj__194 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__194;
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __right_value261 = (void*)0;
struct sNode* __dec_obj52;
struct sRefferenceNode* __result_obj__196;
    ((struct sNodeBase*)(__right_value261=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value261,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj52=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__196 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sRefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__196,sRefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
}

char* sRefferenceNode_kind(struct sRefferenceNode* self){
void* __right_value262 = (void*)0;
char* __result_obj__197;
    __result_obj__197 = come_increment_ref_count(((char*)(__right_value262=__builtin_string("sRefferenceNode"))));
    (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__197;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
struct sNode* value_315;
void* __right_value263 = (void*)0;
struct CVALUE* left_value_316;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct CVALUE* come_value_317;
void* __right_value266 = (void*)0;
char* __dec_obj53;
void* __right_value267 = (void*)0;
char* __dec_obj54;
void* __right_value268 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__198;
    value_315=self->value;
    if(    !node_compile(value_315,info)) {
        return (_Bool)0;
    }
    left_value_316=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_317=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 144, "struct CVALUE*"))));
    if(    left_value_316->c_value_without_cast_object_value) {
        __dec_obj53=come_value_317->c_value,
        come_value_317->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value_316->c_value_without_cast_object_value));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj54=come_value_317->c_value,
        come_value_317->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value_316->c_value));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj55=come_value_317->type,
    come_value_317->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_316->type));
    /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_317->type->mPointerNum++;
    come_value_317->var=((void*)0);
    add_come_last_code(info,"%s",come_value_317->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_317));
    __result_obj__198 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_316,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_317,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__198;
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

struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo* info){
void* __right_value269 = (void*)0;
struct list$1sNode$ph* __dec_obj56;
struct sParenBlockNode* __result_obj__199;
    ((struct sNodeBase*)(__right_value269=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value269,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj56=self->paren_block,
    self->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(paren_block);
    /*b*/ come_call_finalizer3(__dec_obj56,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__199 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sParenBlockNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(paren_block,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__199,sParenBlockNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

char* sParenBlockNode_kind(struct sParenBlockNode* self){
void* __right_value270 = (void*)0;
char* __result_obj__200;
    __result_obj__200 = come_increment_ref_count(((char*)(__right_value270=__builtin_string("sParenBlockNode"))));
    (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__200;
}

_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo* info){
struct list$1sNode$ph* paren_block_318;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct buffer* buf_319;
struct sType* come_type_320;
struct list$1sNode$ph* o2_saved_321;
struct sNode* it_324;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
_Bool _if_conditional3;
void* __right_value278 = (void*)0;
struct buffer* __dec_obj57;
_Bool __result_obj__207;
void* __right_value279 = (void*)0;
struct CVALUE* come_value_327;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sType* __dec_obj58;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct CVALUE* come_value_328;
void* __right_value287 = (void*)0;
char* __dec_obj59;
struct sType* __dec_obj60;
_Bool __result_obj__208;
    paren_block_318=(struct list$1sNode$ph*)come_increment_ref_count(self->paren_block);
    buf_319=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 183, "struct buffer*"))));
    buffer_append_str(buf_319,"({");
    come_type_320=((void*)0);
    for(    o2_saved_321=(struct list$1sNode$ph*)come_increment_ref_count((paren_block_318)),it_324=list$1sNode$ph_begin((o2_saved_321));    !list$1sNode$ph_end((o2_saved_321));    it_324=list$1sNode$ph_next((o2_saved_321))    ){
        if(        (_if_conditional3=(string_operator_equals(((char*)(__right_value273=it_324->kind(it_324->_protocol_obj))),"sIfNode")||string_operator_equals(((char*)(__right_value274=it_324->kind(it_324->_protocol_obj))),"sWhileNode")||string_operator_equals(((char*)(__right_value275=it_324->kind(it_324->_protocol_obj))),"sDoWhileNode")||string_operator_equals(((char*)(__right_value276=it_324->kind(it_324->_protocol_obj))),"sForNode")||((char*)(__right_value277=it_324->kind(it_324->_protocol_obj)))=="sSwitchNode")),        (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional3) {
            add_come_code(info,((char*)(__right_value278=buffer_to_string(buf_319))));
            (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj57=buf_319,
            buf_319=((void*)0);
            /*b*/ come_call_finalizer3(__dec_obj57,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        !node_compile(it_324,info)) {
            __result_obj__207 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_321,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(paren_block_318,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_319,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__207;
        }
        if(        list$1CVALUE$ph_length(info->stack)>0) {
            come_value_327=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            buf_319) {
                buffer_append_str(buf_319,((char*)(__right_value280=string_operator_add(come_value_327->c_value,"; "))));
                (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                add_come_code(info,((char*)(__right_value281=string_operator_add(come_value_327->c_value,"; "))));
                (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            __dec_obj58=come_type_320,
            come_type_320=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_327->type));
            /*b*/ come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_327,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            if(            buf_319) {
                buffer_append_str(buf_319,((char*)(__right_value283=string_operator_add(info->module->mLastCode,"; "))));
                (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(buf_319,((char*)(__right_value284=string_operator_add(info->module->mLastCode2,"; "))));
                (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                transpiler_clear_last_code(info);
            }
            else {
                add_last_code_to_source(info);
            }
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_321,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    buf_319) {
        buffer_append_str(buf_319,"})");
        come_value_328=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 228, "struct CVALUE*"))));
        __dec_obj59=come_value_328->c_value,
        come_value_328->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_319));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj60=come_value_328->type,
        come_value_328->type=(struct sType*)come_increment_ref_count(come_type_320);
        /*b*/ come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_328->var=((void*)0);
        add_come_last_code(info,"%s",come_value_328->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_328));
        /*c*/ come_call_finalizer3(come_value_328,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        add_come_code(info,"});");
    }
    __result_obj__208 = (_Bool)1;
    /*c*/ come_call_finalizer3(paren_block_318,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_319,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__208;
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
struct sNode* result_322;
struct sNode* __result_obj__201;
struct sNode* __result_obj__202;
struct sNode* result_323;
struct sNode* __result_obj__203;
result_322 = (void*)0;
result_323 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_322,0,sizeof(struct sNode*));
        __result_obj__201 = result_322;
        return __result_obj__201;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__202 = self->it->item;
        return __result_obj__202;
    }
    memset(&result_323,0,sizeof(struct sNode*));
    __result_obj__203 = result_323;
    return __result_obj__203;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_325;
struct sNode* __result_obj__204;
struct sNode* __result_obj__205;
struct sNode* result_326;
struct sNode* __result_obj__206;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_325,0,sizeof(struct sNode*));
        __result_obj__204 = result_325;
        return __result_obj__204;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__205 = self->it->item;
        return __result_obj__205;
    }
    memset(&result_326,0,sizeof(struct sNode*));
    __result_obj__206 = result_326;
    return __result_obj__206;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __right_value288 = (void*)0;
struct sNode* __dec_obj61;
struct sDerefferenceNode* __result_obj__209;
    ((struct sNodeBase*)(__right_value288=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value288,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj61=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__209 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDerefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__209,sDerefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

char* sDerefferenceNode_kind(struct sDerefferenceNode* self){
void* __right_value289 = (void*)0;
char* __result_obj__210;
    __result_obj__210 = come_increment_ref_count(((char*)(__right_value289=__builtin_string("sDerefferenceNode"))));
    (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__210 = come_decrement_ref_count(__result_obj__210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__210;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
struct sNode* value_329;
void* __right_value290 = (void*)0;
struct CVALUE* left_value_330;
struct sType* type_331;
char* fun_name_332;
_Bool calling_fun_333;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct CVALUE* come_value_334;
void* __right_value293 = (void*)0;
char* __dec_obj62;
void* __right_value294 = (void*)0;
struct sType* __dec_obj63;
_Bool __result_obj__211;
memset(&calling_fun_333, 0, sizeof(_Bool));
    value_329=self->value;
    if(    !node_compile(value_329,info)) {
        return (_Bool)0;
    }
    left_value_330=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_331=(struct sType*)come_increment_ref_count(left_value_330->type);
    fun_name_332="operator_derefference";
    if(    self->mQuote) {
        calling_fun_333=(_Bool)0;
    }
    else {
        calling_fun_333=operator_overload_fun_self(type_331,fun_name_332,left_value_330,info);
    }
    if(    !calling_fun_333) {
        come_value_334=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 320, "struct CVALUE*"))));
        __dec_obj62=come_value_334->c_value,
        come_value_334->c_value=(char*)come_increment_ref_count(xsprintf("*%s",left_value_330->c_value));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj63=come_value_334->type,
        come_value_334->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_330->type));
        /*b*/ come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_334->type->mPointerNum--;
        come_value_334->var=((void*)0);
        add_come_last_code(info,"%s",come_value_334->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_334));
        /*c*/ come_call_finalizer3(come_value_334,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__211 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_330,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
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
void* __right_value295 = (void*)0;
struct sNode* __dec_obj64;
struct sLogicalDenial* __result_obj__212;
    ((struct sNodeBase*)(__right_value295=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value295,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj64=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__212 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLogicalDenial_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__212,sLogicalDenial_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
}

char* sLogicalDenial_kind(struct sLogicalDenial* self){
void* __right_value296 = (void*)0;
char* __result_obj__213;
    __result_obj__213 = come_increment_ref_count(((char*)(__right_value296=__builtin_string("sLogicalDenial"))));
    (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__213 = come_decrement_ref_count(__result_obj__213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__213;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __right_value297 = (void*)0;
struct CVALUE* come_value_335;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct CVALUE* come_value2_336;
void* __right_value300 = (void*)0;
char* __dec_obj65;
void* __right_value301 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__214;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_335=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_336=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 358, "struct CVALUE*"))));
    __dec_obj65=come_value2_336->c_value,
    come_value2_336->c_value=(char*)come_increment_ref_count(xsprintf("!%s",come_value_335->c_value));
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj66=come_value2_336->type,
    come_value2_336->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_335->type));
    /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_336->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_336));
    add_come_last_code(info,"%s",come_value2_336->c_value);
    __result_obj__214 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_335,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_336,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
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
void* __right_value302 = (void*)0;
struct sNode* __dec_obj67;
struct sLogicalDenial2* __result_obj__215;
    ((struct sNodeBase*)(__right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value302,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj67=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__215 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLogicalDenial2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__215,sLogicalDenial2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

char* sLogicalDenial2_kind(struct sLogicalDenial2* self){
void* __right_value303 = (void*)0;
char* __result_obj__216;
    __result_obj__216 = come_increment_ref_count(((char*)(__right_value303=__builtin_string("sLogicalDenial"))));
    (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__216;
}

_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo* info){
void* __right_value304 = (void*)0;
struct CVALUE* come_value_337;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct CVALUE* come_value2_338;
void* __right_value307 = (void*)0;
char* __dec_obj68;
void* __right_value308 = (void*)0;
struct sType* __dec_obj69;
_Bool __result_obj__217;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_337=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_338=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 394, "struct CVALUE*"))));
    __dec_obj68=come_value2_338->c_value,
    come_value2_338->c_value=(char*)come_increment_ref_count(xsprintf("!!%s",come_value_337->c_value));
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj69=come_value2_338->type,
    come_value2_338->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_337->type));
    /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_338->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_338));
    add_come_last_code(info,"%s",come_value2_338->c_value);
    __result_obj__217 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_337,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_338,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
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
void* __right_value309 = (void*)0;
struct sNode* __dec_obj70;
struct sReverseNode* __result_obj__218;
    ((struct sNodeBase*)(__right_value309=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value309,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj70=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__218 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReverseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__218,sReverseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

char* sReverseNode_kind(struct sReverseNode* self){
void* __right_value310 = (void*)0;
char* __result_obj__219;
    __result_obj__219 = come_increment_ref_count(((char*)(__right_value310=__builtin_string("sReverseNode"))));
    (__right_value310 = come_decrement_ref_count(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__219;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
struct sNode* value_339;
void* __right_value311 = (void*)0;
struct CVALUE* left_value_340;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct CVALUE* come_value_341;
void* __right_value314 = (void*)0;
char* __dec_obj71;
void* __right_value315 = (void*)0;
struct sType* __dec_obj72;
_Bool __result_obj__220;
    value_339=self->value;
    if(    !node_compile(value_339,info)) {
        return (_Bool)0;
    }
    left_value_340=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_341=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 432, "struct CVALUE*"))));
    __dec_obj71=come_value_341->c_value,
    come_value_341->c_value=(char*)come_increment_ref_count(xsprintf("!%s",left_value_340->c_value));
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj72=come_value_341->type,
    come_value_341->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_340->type));
    /*b*/ come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_341->type->mPointerNum--;
    come_value_341->var=((void*)0);
    add_come_last_code(info,"%s",come_value_341->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_341));
    __result_obj__220 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_340,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_341,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__220;
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
void* __right_value316 = (void*)0;
struct sNode* __dec_obj73;
struct sMinusNode2* __result_obj__221;
    ((struct sNodeBase*)(__right_value316=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value316,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj73=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__221 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__221,sMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

char* sMinusNode2_kind(struct sMinusNode2* self){
void* __right_value317 = (void*)0;
char* __result_obj__222;
    __result_obj__222 = come_increment_ref_count(((char*)(__right_value317=__builtin_string("sMinusNode2"))));
    (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__222;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __right_value318 = (void*)0;
struct CVALUE* come_value_342;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct CVALUE* come_value2_343;
void* __right_value321 = (void*)0;
char* __dec_obj74;
void* __right_value322 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__223;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_342=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_343=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 469, "struct CVALUE*"))));
    __dec_obj74=come_value2_343->c_value,
    come_value2_343->c_value=(char*)come_increment_ref_count(xsprintf("-%s",come_value_342->c_value));
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj75=come_value2_343->type,
    come_value2_343->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_342->type));
    /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_343->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_343));
    add_come_last_code(info,"%s",come_value2_343->c_value);
    __result_obj__223 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_342,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_343,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__223;
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
void* __right_value323 = (void*)0;
struct sNode* __dec_obj76;
struct sPlusPlusNode2* __result_obj__224;
    ((struct sNodeBase*)(__right_value323=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value323,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj76=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__224 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sPlusPlusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__224,sPlusPlusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__224;
}

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self){
void* __right_value324 = (void*)0;
char* __result_obj__225;
    __result_obj__225 = come_increment_ref_count(((char*)(__right_value324=__builtin_string("sPlusPlusNode2"))));
    (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__225 = come_decrement_ref_count(__result_obj__225, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__225;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __right_value325 = (void*)0;
struct CVALUE* come_value_344;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct CVALUE* come_value2_345;
void* __right_value328 = (void*)0;
char* __dec_obj77;
void* __right_value329 = (void*)0;
struct sType* __dec_obj78;
_Bool __result_obj__226;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_344=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_345=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 505, "struct CVALUE*"))));
    __dec_obj77=come_value2_345->c_value,
    come_value2_345->c_value=(char*)come_increment_ref_count(xsprintf("++%s",come_value_344->c_value));
    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj78=come_value2_345->type,
    come_value2_345->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_344->type));
    /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_345->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_345));
    add_come_last_code(info,"%s",come_value2_345->c_value);
    __result_obj__226 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_345,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
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
void* __right_value330 = (void*)0;
struct sNode* __dec_obj79;
struct sMinusMinusNode2* __result_obj__227;
    ((struct sNodeBase*)(__right_value330=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value330,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj79=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__227 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMinusMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__227,sMinusMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self){
void* __right_value331 = (void*)0;
char* __result_obj__228;
    __result_obj__228 = come_increment_ref_count(((char*)(__right_value331=__builtin_string("sMinusMinusNode2"))));
    (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__228 = come_decrement_ref_count(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__228;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __right_value332 = (void*)0;
struct CVALUE* come_value_346;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct CVALUE* come_value2_347;
void* __right_value335 = (void*)0;
char* __dec_obj80;
void* __right_value336 = (void*)0;
struct sType* __dec_obj81;
_Bool __result_obj__229;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_346=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_347=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 541, "struct CVALUE*"))));
    __dec_obj80=come_value2_347->c_value,
    come_value2_347->c_value=(char*)come_increment_ref_count(xsprintf("--%s",come_value_346->c_value));
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj81=come_value2_347->type,
    come_value2_347->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_346->type));
    /*b*/ come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_347->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_347));
    add_come_last_code(info,"%s",come_value2_347->c_value);
    __result_obj__229 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_346,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_347,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info){
void* __right_value337 = (void*)0;
void* __right_value369 = (void*)0;
struct sBlock* __dec_obj91;
struct sNormalBlock* __result_obj__261;
    ((struct sNodeBase*)(__right_value337=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value337,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj91=self->mBlock,
    self->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block));
    /*b*/ come_call_finalizer3(__dec_obj91,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->clang=clang;
    self->comma=comma;
    __result_obj__261 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNormalBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__261,sNormalBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self){
    return (_Bool)1;
}

char* sNormalBlock_kind(struct sNormalBlock* self){
void* __right_value370 = (void*)0;
char* __result_obj__262;
    __result_obj__262 = come_increment_ref_count(((char*)(__right_value370=__builtin_string("sNormalBlock"))));
    (__right_value370 = come_decrement_ref_count(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__262 = come_decrement_ref_count(__result_obj__262, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__262;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
struct sBlock* block_401;
_Bool come_c_402;
    block_401=self->mBlock;
    if(    !self->comma) {
        add_come_code(info,"{\n");
    }
    come_c_402=gComeC;
    if(    self->clang) {
        gComeC=(_Bool)1;
    }
    transpile_block(block_401,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,self->comma,(_Bool)0);
    if(    !self->comma) {
        add_come_code(info,"}\n");
    }
    gComeC=come_c_402;
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__230;
void* __right_value338 = (void*)0;
struct sBlock* result_348;
void* __right_value339 = (void*)0;
struct list$1sNode$ph* __dec_obj82;
void* __right_value368 = (void*)0;
struct sVarTable* __dec_obj90;
struct sBlock* __result_obj__260;
    if(    self==(void*)0) {
        __result_obj__230 = (void*)0;
        return __result_obj__230;
    }
    result_348=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj82=result_348->mNodes,
        result_348->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj82,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj90=result_348->mVarTable,
        result_348->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj90,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_348->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__260 = result_348;
    /*c*/ come_call_finalizer3(result_348,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__231;
void* __right_value340 = (void*)0;
struct sVarTable* result_349;
void* __right_value367 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj89;
struct sVarTable* __result_obj__259;
    if(    self==(void*)0) {
        __result_obj__231 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__231,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__231;
    }
    result_349=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj89=result_349->mVars,
        result_349->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph$p_clone, self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj89,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_349->mParent=self->mParent;
    }
    __result_obj__259 = come_increment_ref_count(result_349);
    /*c*/ come_call_finalizer3(result_349,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__259,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__232;
void* __right_value341 = (void*)0;
void* __right_value347 = (void*)0;
struct map$2char$phsVar$ph* result_353;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct list$1char$ph* __dec_obj84;
char* it_356;
struct sVar* default_value_359;
void* __right_value350 = (void*)0;
struct sVar* it2_362;
void* __right_value356 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__258;
default_value_359 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__232 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__232,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__232;
    }
    result_353=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2113, "struct map$2char$phsVar$ph*"))));
    __dec_obj84=result_353->key_list,
    result_353->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2115, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj84,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_356=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_356=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_359,0,sizeof(struct sVar*));
        it2_362=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_356,(struct sVar*)come_increment_ref_count(default_value_359)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_353,(char*)come_increment_ref_count((char*)come_memdup(it_356, "./comelang.h", 2124, "char*")),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_362)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_353,(char*)come_increment_ref_count((char*)come_memdup(it_356, "./comelang.h", 2127, "char*")),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_362)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_353,(char*)come_increment_ref_count(it_356),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_362)));
        }
        else {
            map$2char$phsVar$ph_put(result_353,(char*)come_increment_ref_count(it_356),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_362)));
        }
        /*c*/ come_call_finalizer3(default_value_359,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_362,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__258 = come_increment_ref_count(result_353);
    /*c*/ come_call_finalizer3(result_353,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__258,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_350;
int i_351;
    for(    i_350=0;    i_350<self->size;    i_350++    ){
        if(        self->item_existance[i_350]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_350],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_351=0;    i_351<self->size;    i_351++    ){
        if(        self->item_existance[i_351]) {
            if(            1) {
                (self->keys[i_351] = come_decrement_ref_count(self->keys[i_351], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
int i_352;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct list$1char$ph* __dec_obj83;
struct map$2char$phsVar$ph* __result_obj__234;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value342=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2042, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value343=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2043, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value344=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2044, "_Bool*"))));
    for(    i_352=0;    i_352<128;    i_352++    ){
        self->item_existance[i_352]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj83=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2054, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj83,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__234 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__234,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__234;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__233;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__233 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__233,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_354;
char* __result_obj__235;
char* __result_obj__236;
char* result_355;
char* __result_obj__237;
result_354 = (void*)0;
result_355 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_354,0,sizeof(char*));
        __result_obj__235 = result_354;
        return __result_obj__235;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__236 = self->key_list->it->item;
        return __result_obj__236;
    }
    memset(&result_355,0,sizeof(char*));
    __result_obj__237 = result_355;
    return __result_obj__237;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_357;
char* __result_obj__238;
char* __result_obj__239;
char* result_358;
char* __result_obj__240;
result_357 = (void*)0;
result_358 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_357,0,sizeof(char*));
        __result_obj__238 = result_357;
        return __result_obj__238;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__239 = self->key_list->it->item;
        return __result_obj__239;
    }
    memset(&result_358,0,sizeof(char*));
    __result_obj__240 = result_358;
    return __result_obj__240;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_360;
unsigned int it_361;
struct sVar* __result_obj__241;
struct sVar* __result_obj__242;
struct sVar* __result_obj__243;
struct sVar* __result_obj__244;
    hash_360=string_get_hash_key(((char*)key))%self->size;
    it_361=hash_360;
    while((_Bool)1) {
        if(        self->item_existance[it_361]) {
            if(            string_equals(self->keys[it_361],key)) {
                __result_obj__241 = come_increment_ref_count(self->items[it_361]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__241,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__241;
            }
            it_361++;
            if(            it_361>=self->size) {
                it_361=0;
            }
            else if(            it_361==hash_360) {
                __result_obj__242 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__242,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__242;
            }
        }
        else {
            __result_obj__243 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__243,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__243;
        }
    }
    __result_obj__244 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__244,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__244;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_374;
int it_375;
_Bool same_key_exist_392;
char* it2_395;
struct map$2char$phsVar$ph* __result_obj__255;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_374=string_get_hash_key(((char*)key))%self->size;
    it_375=hash_374;
    while((_Bool)1) {
        if(        self->item_existance[it_375]) {
            if(            string_equals(self->keys[it_375],key)) {
                if(                1) {
                    (self->keys[it_375] = come_decrement_ref_count(self->keys[it_375], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_375]);
                    self->keys[it_375]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_375]);
                    self->keys[it_375]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_375],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_375]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_375]=item;
                }
                break;
            }
            it_375++;
            if(            it_375>=self->size) {
                it_375=0;
            }
            else if(            it_375==hash_374) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_375]=(_Bool)1;
            if(            1) {
                self->keys[it_375]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_375]=key;
            }
            if(            1) {
                self->items[it_375]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_375]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_392=(_Bool)0;
    for(    it2_395=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_395=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_395,key)) {
            same_key_exist_392=(_Bool)1;
        }
    }
    if(    !same_key_exist_392) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__255 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_363;
void* __right_value351 = (void*)0;
char** keys_364;
void* __right_value352 = (void*)0;
struct sVar** items_365;
void* __right_value353 = (void*)0;
_Bool* item_existance_366;
int len_367;
char* it_368;
struct sVar* default_value_369;
void* __right_value354 = (void*)0;
struct sVar* it2_370;
unsigned int hash_371;
int n_372;
struct sVar* default_value_373;
void* __right_value355 = (void*)0;
default_value_369 = (void*)0;
default_value_373 = (void*)0;
    size_363=self->size*10;
    keys_364=(char**)come_increment_ref_count(((char**)(__right_value351=(char**)come_calloc(1, sizeof(char*)*(1*(size_363)), "./comelang.h", 2281, "char**"))));
    items_365=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value352=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_363)), "./comelang.h", 2282, "struct sVar**"))));
    item_existance_366=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value353=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_363)), "./comelang.h", 2283, "_Bool*"))));
    len_367=0;
    for(    it_368=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_368=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_369,0,sizeof(struct sVar*));
        it2_370=((struct sVar*)(__right_value354=map$2char$phsVar$ph_at(self,it_368,(struct sVar*)come_increment_ref_count(default_value_369))));
        /*c*/ come_call_finalizer3(__right_value354,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_371=string_get_hash_key(((char*)it_368))%size_363;
        n_372=hash_371;
        while((_Bool)1) {
            if(            item_existance_366[n_372]) {
                n_372++;
                if(                n_372>=size_363) {
                    n_372=0;
                }
                else if(                n_372==hash_371) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_366[n_372]=(_Bool)1;
                keys_364[n_372]=it_368;
                items_365[n_372]=((struct sVar*)(__right_value355=map$2char$phsVar$ph_at(self,it_368,(struct sVar*)come_increment_ref_count(default_value_373))));
                /*c*/ come_call_finalizer3(__right_value355,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_367++;
                /*c*/ come_call_finalizer3(default_value_373,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_373,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_369,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_364;
    self->items=items_365;
    self->item_existance=item_existance_366;
    self->size=size_363;
    self->len=len_367;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_376;
struct list_item$1char$ph* it_377;
struct list$1char$ph* __result_obj__248;
    it2_376=0;
    it_377=self->head;
    while(it_377!=((void*)0)) {
        if(        string_equals(it_377->item,item)) {
            list$1char$ph_delete(self,it2_376,it2_376+1);
            break;
        }
        it2_376++;
        it_377=it_377->next;
    }
    __result_obj__248 = self;
    return __result_obj__248;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_378;
struct list$1char$ph* __result_obj__245;
struct list_item$1char$ph* it_381;
int i_382;
struct list_item$1char$ph* prev_it_383;
struct list_item$1char$ph* it_384;
int i_385;
struct list_item$1char$ph* prev_it_386;
struct list_item$1char$ph* it_387;
struct list_item$1char$ph* head_prev_it_388;
struct list_item$1char$ph* tail_it_389;
int i_390;
struct list_item$1char$ph* prev_it_391;
struct list$1char$ph* __result_obj__247;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_378=tail;
        tail=head;
        head=tmp_378;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__245 = self;
        return __result_obj__245;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_381=self->head;
        i_382=0;
        while(it_381!=((void*)0)) {
            if(            i_382<tail) {
                prev_it_383=it_381;
                it_381=it_381->next;
                i_382++;
                /*c*/ come_call_finalizer3(prev_it_383,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_382==tail) {
                self->head=it_381;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_381=it_381->next;
                i_382++;
            }
        }
    }
    else if(    tail==self->len) {
        it_384=self->head;
        i_385=0;
        while(it_384!=((void*)0)) {
            if(            i_385==head) {
                self->tail=it_384->prev;
                self->tail->next=((void*)0);
            }
            if(            i_385>=head) {
                prev_it_386=it_384;
                it_384=it_384->next;
                i_385++;
                /*c*/ come_call_finalizer3(prev_it_386,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_384=it_384->next;
                i_385++;
            }
        }
    }
    else {
        it_387=self->head;
        head_prev_it_388=((void*)0);
        tail_it_389=((void*)0);
        i_390=0;
        while(it_387!=((void*)0)) {
            if(            i_390==head) {
                head_prev_it_388=it_387->prev;
            }
            if(            i_390==tail) {
                tail_it_389=it_387;
            }
            if(            i_390>=head&&i_390<tail) {
                prev_it_391=it_387;
                it_387=it_387->next;
                i_390++;
                /*c*/ come_call_finalizer3(prev_it_391,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_387=it_387->next;
                i_390++;
            }
        }
        if(        head_prev_it_388!=((void*)0)) {
            head_prev_it_388->next=tail_it_389;
        }
        if(        tail_it_389!=((void*)0)) {
            tail_it_389->prev=head_prev_it_388;
        }
    }
    __result_obj__247 = self;
    return __result_obj__247;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_379;
struct list_item$1char$ph* prev_it_380;
struct list$1char$ph* __result_obj__246;
    it_379=self->head;
    while(it_379!=((void*)0)) {
        prev_it_380=it_379;
        it_379=it_379->next;
        /*c*/ come_call_finalizer3(prev_it_380,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__246 = self;
    return __result_obj__246;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_393;
char* __result_obj__249;
char* __result_obj__250;
char* result_394;
char* __result_obj__251;
result_393 = (void*)0;
result_394 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_393,0,sizeof(char*));
        __result_obj__249 = result_393;
        return __result_obj__249;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__250 = self->it->item;
        return __result_obj__250;
    }
    memset(&result_394,0,sizeof(char*));
    __result_obj__251 = result_394;
    return __result_obj__251;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_396;
char* __result_obj__252;
char* __result_obj__253;
char* result_397;
char* __result_obj__254;
result_396 = (void*)0;
result_397 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_396,0,sizeof(char*));
        __result_obj__252 = result_396;
        return __result_obj__252;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__253 = self->it->item;
        return __result_obj__253;
    }
    memset(&result_397,0,sizeof(char*));
    __result_obj__254 = result_397;
    return __result_obj__254;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__256;
void* __right_value357 = (void*)0;
struct sVar* result_398;
void* __right_value358 = (void*)0;
char* __dec_obj85;
void* __right_value359 = (void*)0;
char* __dec_obj86;
void* __right_value360 = (void*)0;
struct sType* __dec_obj87;
void* __right_value361 = (void*)0;
char* __dec_obj88;
struct sVar* __result_obj__257;
    if(    self==(void*)0) {
        __result_obj__256 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__256,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__256;
    }
    result_398=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj85=result_398->mName,
        result_398->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj86=result_398->mCValueName,
        result_398->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj87=result_398->mType,
        result_398->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_398->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_398->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj88=result_398->mFunName,
        result_398->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 10, "char*"));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__257 = come_increment_ref_count(result_398);
    /*c*/ come_call_finalizer3(result_398,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__257,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_399;
int i_400;
    for(    i_399=0;    i_399<self->size;    i_399++    ){
        if(        self->item_existance[i_399]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_399],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_400=0;    i_400<self->size;    i_400++    ){
        if(        self->item_existance[i_400]) {
            if(            1) {
                (self->keys[i_400] = come_decrement_ref_count(self->keys[i_400], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
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
void* __right_value371 = (void*)0;
struct sNode* __dec_obj92;
struct sComplement* __result_obj__263;
    ((struct sNodeBase*)(__right_value371=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value371,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj92=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__263 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComplement_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,sComplement_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

char* sComplement_kind(struct sComplement* self){
void* __right_value372 = (void*)0;
char* __result_obj__264;
    __result_obj__264 = come_increment_ref_count(((char*)(__right_value372=__builtin_string("sComplement"))));
    (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__264 = come_decrement_ref_count(__result_obj__264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__264;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __right_value373 = (void*)0;
struct CVALUE* come_value_403;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct CVALUE* come_value2_404;
void* __right_value376 = (void*)0;
char* __dec_obj93;
void* __right_value377 = (void*)0;
struct sType* __dec_obj94;
_Bool __result_obj__265;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_403=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_404=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 624, "struct CVALUE*"))));
    __dec_obj93=come_value2_404->c_value,
    come_value2_404->c_value=(char*)come_increment_ref_count(xsprintf("~%s",come_value_403->c_value));
    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj94=come_value2_404->type,
    come_value2_404->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_403->type));
    /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_404->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_404));
    add_come_last_code(info,"%s",come_value2_404->c_value);
    __result_obj__265 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_403,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
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
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj95;
struct sParenNode* __result_obj__266;
    ((struct sNodeBase*)(__right_value378=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value378,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj95=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__266 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sParenNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__266,sParenNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

char* sParenNode_kind(struct sParenNode* self){
void* __right_value380 = (void*)0;
char* __result_obj__267;
    __result_obj__267 = come_increment_ref_count(((char*)(__right_value380=__builtin_string("sParenNode"))));
    (__right_value380 = come_decrement_ref_count(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__267 = come_decrement_ref_count(__result_obj__267, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__267;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
struct sNode* left_405;
void* __right_value381 = (void*)0;
struct CVALUE* left_value_406;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_407;
void* __right_value384 = (void*)0;
char* __dec_obj96;
void* __right_value385 = (void*)0;
struct sType* __dec_obj97;
_Bool __result_obj__268;
    left_405=self->mLeft;
    if(    !node_compile(left_405,info)) {
        return (_Bool)0;
    }
    left_value_406=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_407=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 662, "struct CVALUE*"))));
    __dec_obj96=come_value_407->c_value,
    come_value_407->c_value=(char*)come_increment_ref_count(xsprintf("(%s)",left_value_406->c_value));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj97=come_value_407->type,
    come_value_407->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_406->type));
    /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_407->var=((void*)0);
    add_come_last_code(info,"%s",come_value_407->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_407));
    __result_obj__268 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_406,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
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
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sType* __dec_obj98;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj99;
struct sCastNode* __result_obj__269;
    ((struct sNodeBase*)(__right_value386=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value386,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj98=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj99=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__269 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCastNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__269,sCastNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

char* sCastNode_kind(struct sCastNode* self){
void* __right_value389 = (void*)0;
char* __result_obj__270;
    __result_obj__270 = come_increment_ref_count(((char*)(__right_value389=__builtin_string("sCastNode"))));
    (__right_value389 = come_decrement_ref_count(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__270 = come_decrement_ref_count(__result_obj__270, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__270;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
struct sType* type_408;
struct sNode* left_409;
void* __right_value390 = (void*)0;
struct CVALUE* left_value_410;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* type2_411;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
char* __dec_obj100;
void* __right_value397 = (void*)0;
struct sType* __dec_obj101;
_Bool __result_obj__271;
    type_408=self->mType;
    left_409=self->mLeft;
    if(    !node_compile(left_409,info)) {
        return (_Bool)0;
    }
    left_value_410=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type2_411=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value391=come_call_cloner(sType_clone, type_408))),info->generics_type,info));
    /*c*/ come_call_finalizer3(__right_value391,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 704, "struct CVALUE*"))));
    cast_type(type2_411,left_value_410->type,left_value_410,info);
    __dec_obj100=come_value_412->c_value,
    come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",((char*)(__right_value395=make_type_name_string(type2_411,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_410->c_value));
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value395 = come_decrement_ref_count(__right_value395, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj101=come_value_412->type,
    come_value_412->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_411));
    /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_412->var=((void*)0);
    add_come_last_code(info,"%s",come_value_412->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
    __result_obj__271 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_410,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_411,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_412,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
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

struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info){
int sline_real_413;
void* __right_value398 = (void*)0;
struct sBlock* block_414;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sNode* _inf_value1;
struct sNormalBlock* _inf_obj_value1;
void* __right_value404 = (void*)0;
struct sNode* __result_obj__274;
    sline_real_413=info->sline_real;
    info->sline_real=info->sline;
    block_414=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    info->sline_real=sline_real_413;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 728, "struct sNode");
    _inf_obj_value1=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(__right_value400=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05pre_op.c", 728, "struct sNormalBlock*")),block_414,clang,comma,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    __result_obj__274 = come_increment_ref_count(((struct sNode*)(__right_value404=_inf_value1)));
    /*c*/ come_call_finalizer3(block_414,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value400,sNormalBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value404) ? __right_value404 = come_decrement_ref_count(__right_value404, ((struct sNode*)__right_value404)->finalize, ((struct sNode*)__right_value404)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__274) ? __result_obj__274 = come_decrement_ref_count(__result_obj__274, ((struct sNode*)__result_obj__274)->finalize, ((struct sNode*)__result_obj__274)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__274;
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
struct sNormalBlock* __result_obj__272;
void* __right_value401 = (void*)0;
struct sNormalBlock* result_415;
void* __right_value402 = (void*)0;
char* __dec_obj102;
void* __right_value403 = (void*)0;
struct sBlock* __dec_obj103;
struct sNormalBlock* __result_obj__273;
    if(    self==(void*)0) {
        __result_obj__272 = (void*)0;
        return __result_obj__272;
    }
    result_415=(struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "struct sNormalBlock*"));
    if(    self!=((void*)0)) {
        result_415->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj102=result_415->sname,
        result_415->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNormalBlock_clone", 5, "char*"));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj103=result_415->mBlock,
        result_415->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        /*b*/ come_call_finalizer3(__dec_obj103,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->clang=self->clang;
    }
    if(    self!=((void*)0)) {
        result_415->comma=self->comma;
    }
    __result_obj__273 = result_415;
    /*c*/ come_call_finalizer3(result_415,sNormalBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sNode* _inf_value2;
struct sLogicalDenial* _inf_obj_value2;
void* __right_value411 = (void*)0;
struct sNode* __result_obj__277;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 733, "struct sNode");
    _inf_obj_value2=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value407=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 733, "struct sLogicalDenial*")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    __result_obj__277 = come_increment_ref_count(((struct sNode*)(__right_value411=_inf_value2)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value407,sLogicalDenial_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value411) ? __right_value411 = come_decrement_ref_count(__right_value411, ((struct sNode*)__right_value411)->finalize, ((struct sNode*)__right_value411)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__277) ? __result_obj__277 = come_decrement_ref_count(__result_obj__277, ((struct sNode*)__result_obj__277)->finalize, ((struct sNode*)__result_obj__277)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__277;
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
struct sLogicalDenial* __result_obj__275;
void* __right_value408 = (void*)0;
struct sLogicalDenial* result_416;
void* __right_value409 = (void*)0;
char* __dec_obj104;
void* __right_value410 = (void*)0;
struct sNode* __dec_obj105;
struct sLogicalDenial* __result_obj__276;
    if(    self==(void*)0) {
        __result_obj__275 = (void*)0;
        return __result_obj__275;
    }
    result_416=(struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "struct sLogicalDenial*"));
    if(    self!=((void*)0)) {
        result_416->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj104=result_416->sname,
        result_416->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLogicalDenial_clone", 5, "char*"));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_416->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj105=result_416->value,
        result_416->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj105 ? __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__276 = result_416;
    /*c*/ come_call_finalizer3(result_416,sLogicalDenial_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info){
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sNode* _inf_value3;
struct sCastNode* _inf_obj_value3;
void* __right_value418 = (void*)0;
struct sNode* __result_obj__280;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 738, "struct sNode");
    _inf_obj_value3=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value413=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 738, "struct sCastNode*")),type,node,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCastNode_finalize;
    _inf_value3->clone=(void*)sCastNode_clone;
    _inf_value3->compile=(void*)sCastNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCastNode_kind;
    __result_obj__280 = come_increment_ref_count(((struct sNode*)(__right_value418=_inf_value3)));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value413,sCastNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value418) ? __right_value418 = come_decrement_ref_count(__right_value418, ((struct sNode*)__right_value418)->finalize, ((struct sNode*)__right_value418)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__280) ? __result_obj__280 = come_decrement_ref_count(__result_obj__280, ((struct sNode*)__result_obj__280)->finalize, ((struct sNode*)__result_obj__280)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__280;
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
struct sCastNode* __result_obj__278;
void* __right_value414 = (void*)0;
struct sCastNode* result_417;
void* __right_value415 = (void*)0;
char* __dec_obj106;
void* __right_value416 = (void*)0;
struct sType* __dec_obj107;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj108;
struct sCastNode* __result_obj__279;
    if(    self==(void*)0) {
        __result_obj__278 = (void*)0;
        return __result_obj__278;
    }
    result_417=(struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "struct sCastNode*"));
    if(    self!=((void*)0)) {
        result_417->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj106=result_417->sname,
        result_417->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCastNode_clone", 5, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_417->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj107=result_417->mType,
        result_417->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj108=result_417->mLeft,
        result_417->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__279 = result_417;
    /*c*/ come_call_finalizer3(result_417,sCastNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

struct sNode* reffence_node(struct sNode* value, struct sInfo* info){
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sNode* _inf_value4;
struct sRefferenceNode* _inf_obj_value4;
void* __right_value424 = (void*)0;
struct sNode* __result_obj__283;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 743, "struct sNode");
    _inf_obj_value4=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value420=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 743, "struct sRefferenceNode*")),(struct sNode*)come_increment_ref_count(value),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sRefferenceNode_finalize;
    _inf_value4->clone=(void*)sRefferenceNode_clone;
    _inf_value4->compile=(void*)sRefferenceNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sRefferenceNode_kind;
    __result_obj__283 = come_increment_ref_count(((struct sNode*)(__right_value424=_inf_value4)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value420,sRefferenceNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value424) ? __right_value424 = come_decrement_ref_count(__right_value424, ((struct sNode*)__right_value424)->finalize, ((struct sNode*)__right_value424)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__283) ? __result_obj__283 = come_decrement_ref_count(__result_obj__283, ((struct sNode*)__result_obj__283)->finalize, ((struct sNode*)__result_obj__283)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__283;
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
struct sRefferenceNode* __result_obj__281;
void* __right_value421 = (void*)0;
struct sRefferenceNode* result_418;
void* __right_value422 = (void*)0;
char* __dec_obj109;
void* __right_value423 = (void*)0;
struct sNode* __dec_obj110;
struct sRefferenceNode* __result_obj__282;
    if(    self==(void*)0) {
        __result_obj__281 = (void*)0;
        return __result_obj__281;
    }
    result_418=(struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "struct sRefferenceNode*"));
    if(    self!=((void*)0)) {
        result_418->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj109=result_418->sname,
        result_418->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sRefferenceNode_clone", 5, "char*"));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_418->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj110=result_418->value,
        result_418->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj110 ? __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__282 = result_418;
    /*c*/ come_call_finalizer3(result_418,sRefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__282;
}

struct sNode* pre_position_operator(struct sInfo* info){
_Bool refference_419;
char* p_420;
int sline_421;
void* __right_value425 = (void*)0;
struct sNode* __result_obj__284;
void* __right_value426 = (void*)0;
struct sNode* __result_obj__285;
void* __right_value427 = (void*)0;
struct sNode* __result_obj__286;
void* __right_value428 = (void*)0;
struct sNode* node_422;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct sNode* _inf_value5;
struct sLogicalDenial* _inf_obj_value5;
void* __right_value431 = (void*)0;
struct sNode* __result_obj__287;
void* __right_value432 = (void*)0;
struct sNode* node_423;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sNode* _inf_value6;
struct sLogicalDenial2* _inf_obj_value6;
void* __right_value438 = (void*)0;
struct sNode* __result_obj__290;
void* __right_value439 = (void*)0;
struct sNode* node_425;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sNode* _inf_value7;
struct sMinusMinusNode2* _inf_obj_value7;
void* __right_value445 = (void*)0;
struct sNode* __result_obj__293;
void* __right_value446 = (void*)0;
struct sNode* node_427;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sNode* _inf_value8;
struct sMinusNode2* _inf_obj_value8;
void* __right_value452 = (void*)0;
struct sNode* __result_obj__296;
void* __right_value453 = (void*)0;
struct sNode* node_429;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sNode* _inf_value9;
struct sPlusPlusNode2* _inf_obj_value9;
void* __right_value459 = (void*)0;
struct sNode* __result_obj__299;
void* __right_value460 = (void*)0;
struct sNode* node_431;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* _inf_value10;
struct sComplement* _inf_obj_value10;
void* __right_value466 = (void*)0;
struct sNode* __result_obj__302;
_Bool quote_433;
_Bool no_assign_434;
void* __right_value467 = (void*)0;
struct sNode* value_435;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sNode* _inf_value11;
struct sDerefferenceNode* _inf_obj_value11;
void* __right_value473 = (void*)0;
struct sNode* __result_obj__305;
void* __right_value474 = (void*)0;
struct sNode* value_437;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sNode* _inf_value12;
struct sRefferenceNode* _inf_obj_value12;
void* __right_value477 = (void*)0;
struct sNode* __result_obj__306;
void* __right_value478 = (void*)0;
struct sNode* value_438;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sNode* _inf_value13;
struct sReverseNode* _inf_obj_value13;
void* __right_value484 = (void*)0;
struct sNode* __result_obj__309;
_Bool cast_expression_flag_440;
char* p_441;
int sline_442;
void* __right_value485 = (void*)0;
char* word_443;
void* __right_value486 = (void*)0;
char* __dec_obj125;
_Bool tuple_expression_flag_444;
_Bool named_tuple_expression_flag_445;
char* p_446;
int sline_447;
char* p_448;
int sline_449;
void* __right_value487 = (void*)0;
_Bool no_comma_450;
_Bool no_output_err_451;
_Bool no_output_come_code_452;
void* __right_value488 = (void*)0;
struct sNode* node_453;
struct sNode* node2_454;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1sNode$ph* paren_block_455;
void* __right_value491 = (void*)0;
struct sNode* node2_456;
void* __right_value492 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c1_457=0;
char* Err_458=0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sNode* _inf_value14;
struct sParenBlockNode* _inf_obj_value14;
void* __right_value498 = (void*)0;
struct sNode* node_459;
struct sNode* __result_obj__312;
void* __right_value499 = (void*)0;
struct sNode* node_461;
struct sNode* __result_obj__313;
void* __right_value500 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type_462=0;
char* name_463=0;
_Bool err_464=0;
void* __right_value501 = (void*)0;
struct sNode* node_465;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sNode* _inf_value15;
struct sCastNode* _inf_obj_value15;
void* __right_value504 = (void*)0;
struct sNode* __result_obj__314;
struct sNode* node_466;
_Bool no_assign_467;
_Bool no_comma_468;
void* __right_value505 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value506 = (void*)0;
struct sNode* __dec_obj129;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sNode* _inf_value16;
struct sParenNode* _inf_obj_value16;
void* __right_value512 = (void*)0;
struct sNode* __dec_obj132;
struct sNode* __result_obj__317;
struct sNode* __result_obj__318;
memset(&quote_433, 0, sizeof(_Bool));
node_466 = (void*)0;
    skip_spaces_and_lf(info);
    refference_419=(_Bool)0;
    {
        p_420=info->p;
        sline_421=info->sline;
        if(        *info->p==38&&*(info->p+1)!=38) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==34) {
                refference_419=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                refference_419=(_Bool)1;
            }
            else if(            *info->p==40||*info->p==42) {
                while(*info->p==40||*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(                xisalpha(*info->p)||*info->p==95) {
                    refference_419=(_Bool)1;
                }
            }
        }
        info->p=p_420;
        info->sline=sline_421;
    }
    parse_sharp_v5(info);
    if(    *info->p==123) {
        if(        info->array_initializer) {
            __result_obj__284 = come_increment_ref_count(((struct sNode*)(__right_value425=parse_array_initializer(info))));
            ((__right_value425) ? __right_value425 = come_decrement_ref_count(__right_value425, ((struct sNode*)__right_value425)->finalize, ((struct sNode*)__right_value425)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__284) ? __result_obj__284 = come_decrement_ref_count(__result_obj__284, ((struct sNode*)__result_obj__284)->finalize, ((struct sNode*)__result_obj__284)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__284;
        }
        else if(        info->struct_initializer) {
            __result_obj__285 = come_increment_ref_count(((struct sNode*)(__right_value426=parse_struct_initializer(info))));
            ((__right_value426) ? __right_value426 = come_decrement_ref_count(__right_value426, ((struct sNode*)__right_value426)->finalize, ((struct sNode*)__right_value426)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__285) ? __result_obj__285 = come_decrement_ref_count(__result_obj__285, ((struct sNode*)__result_obj__285)->finalize, ((struct sNode*)__result_obj__285)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__285;
        }
        else {
            __result_obj__286 = come_increment_ref_count(((struct sNode*)(__right_value427=parse_normal_block((_Bool)0,(_Bool)0,info))));
            ((__right_value427) ? __right_value427 = come_decrement_ref_count(__right_value427, ((struct sNode*)__right_value427)->finalize, ((struct sNode*)__right_value427)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__286) ? __result_obj__286 = come_decrement_ref_count(__result_obj__286, ((struct sNode*)__result_obj__286)->finalize, ((struct sNode*)__result_obj__286)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__286;
        }
    }
    else if(    *info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        info->p++;
        skip_spaces_and_lf(info);
        node_422=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 801, "struct sNode");
        _inf_obj_value5=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value430=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 801, "struct sLogicalDenial*")),(struct sNode*)come_increment_ref_count(node_422),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLogicalDenial_finalize;
        _inf_value5->clone=(void*)sLogicalDenial_clone;
        _inf_value5->compile=(void*)sLogicalDenial_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLogicalDenial_kind;
        __result_obj__287 = come_increment_ref_count(((struct sNode*)(__right_value431=_inf_value5)));
        ((node_422) ? node_422 = come_decrement_ref_count(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value430,sLogicalDenial_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value431) ? __right_value431 = come_decrement_ref_count(__right_value431, ((struct sNode*)__right_value431)->finalize, ((struct sNode*)__right_value431)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__287) ? __result_obj__287 = come_decrement_ref_count(__result_obj__287, ((struct sNode*)__result_obj__287)->finalize, ((struct sNode*)__result_obj__287)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__287;
        ((node_422) ? node_422 = come_decrement_ref_count(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==33&&*(info->p+1)==33) {
        info->p++;
        skip_spaces_and_lf(info);
        node_423=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 809, "struct sNode");
        _inf_obj_value6=(struct sLogicalDenial2*)come_increment_ref_count(((struct sLogicalDenial2*)(__right_value434=sLogicalDenial2_initialize((struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc(1, sizeof(struct sLogicalDenial2)*(1), "05pre_op.c", 809, "struct sLogicalDenial2*")),(struct sNode*)come_increment_ref_count(node_423),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sLogicalDenial2_finalize;
        _inf_value6->clone=(void*)sLogicalDenial2_clone;
        _inf_value6->compile=(void*)sLogicalDenial2_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sLogicalDenial2_kind;
        __result_obj__290 = come_increment_ref_count(((struct sNode*)(__right_value438=_inf_value6)));
        ((node_423) ? node_423 = come_decrement_ref_count(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value434,sLogicalDenial2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value438) ? __right_value438 = come_decrement_ref_count(__right_value438, ((struct sNode*)__right_value438)->finalize, ((struct sNode*)__right_value438)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__290) ? __result_obj__290 = come_decrement_ref_count(__result_obj__290, ((struct sNode*)__result_obj__290)->finalize, ((struct sNode*)__result_obj__290)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__290;
        ((node_423) ? node_423 = come_decrement_ref_count(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==45&&*(info->p+1)==45) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_425=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 817, "struct sNode");
        _inf_obj_value7=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value441=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05pre_op.c", 817, "struct sMinusMinusNode2*")),(struct sNode*)come_increment_ref_count(node_425),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sMinusMinusNode2_finalize;
        _inf_value7->clone=(void*)sMinusMinusNode2_clone;
        _inf_value7->compile=(void*)sMinusMinusNode2_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sMinusMinusNode2_kind;
        __result_obj__293 = come_increment_ref_count(((struct sNode*)(__right_value445=_inf_value7)));
        ((node_425) ? node_425 = come_decrement_ref_count(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value441,sMinusMinusNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value445) ? __right_value445 = come_decrement_ref_count(__right_value445, ((struct sNode*)__right_value445)->finalize, ((struct sNode*)__right_value445)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__293) ? __result_obj__293 = come_decrement_ref_count(__result_obj__293, ((struct sNode*)__result_obj__293)->finalize, ((struct sNode*)__result_obj__293)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__293;
        ((node_425) ? node_425 = come_decrement_ref_count(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==45&&!xisdigit(*(info->p+1))) {
        info->p++;
        skip_spaces_and_lf(info);
        node_427=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 825, "struct sNode");
        _inf_obj_value8=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(__right_value448=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05pre_op.c", 825, "struct sMinusNode2*")),(struct sNode*)come_increment_ref_count(node_427),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sMinusNode2_finalize;
        _inf_value8->clone=(void*)sMinusNode2_clone;
        _inf_value8->compile=(void*)sMinusNode2_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sMinusNode2_kind;
        __result_obj__296 = come_increment_ref_count(((struct sNode*)(__right_value452=_inf_value8)));
        ((node_427) ? node_427 = come_decrement_ref_count(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value448,sMinusNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value452) ? __right_value452 = come_decrement_ref_count(__right_value452, ((struct sNode*)__right_value452)->finalize, ((struct sNode*)__right_value452)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__296) ? __result_obj__296 = come_decrement_ref_count(__result_obj__296, ((struct sNode*)__result_obj__296)->finalize, ((struct sNode*)__result_obj__296)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__296;
        ((node_427) ? node_427 = come_decrement_ref_count(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==43&&*(info->p+1)==43) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_429=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 833, "struct sNode");
        _inf_obj_value9=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value455=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05pre_op.c", 833, "struct sPlusPlusNode2*")),(struct sNode*)come_increment_ref_count(node_429),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sPlusPlusNode2_finalize;
        _inf_value9->clone=(void*)sPlusPlusNode2_clone;
        _inf_value9->compile=(void*)sPlusPlusNode2_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sPlusPlusNode2_kind;
        __result_obj__299 = come_increment_ref_count(((struct sNode*)(__right_value459=_inf_value9)));
        ((node_429) ? node_429 = come_decrement_ref_count(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value455,sPlusPlusNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value459) ? __right_value459 = come_decrement_ref_count(__right_value459, ((struct sNode*)__right_value459)->finalize, ((struct sNode*)__right_value459)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__299) ? __result_obj__299 = come_decrement_ref_count(__result_obj__299, ((struct sNode*)__result_obj__299)->finalize, ((struct sNode*)__result_obj__299)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__299;
        ((node_429) ? node_429 = come_decrement_ref_count(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==126) {
        info->p++;
        skip_spaces_and_lf(info);
        node_431=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 841, "struct sNode");
        _inf_obj_value10=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(__right_value462=sComplement_initialize((struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05pre_op.c", 841, "struct sComplement*")),(struct sNode*)come_increment_ref_count(node_431),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sComplement_finalize;
        _inf_value10->clone=(void*)sComplement_clone;
        _inf_value10->compile=(void*)sComplement_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sComplement_kind;
        __result_obj__302 = come_increment_ref_count(((struct sNode*)(__right_value466=_inf_value10)));
        ((node_431) ? node_431 = come_decrement_ref_count(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value462,sComplement_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value466) ? __right_value466 = come_decrement_ref_count(__right_value466, ((struct sNode*)__right_value466)->finalize, ((struct sNode*)__right_value466)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__302) ? __result_obj__302 = come_decrement_ref_count(__result_obj__302, ((struct sNode*)__result_obj__302)->finalize, ((struct sNode*)__result_obj__302)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__302;
        ((node_431) ? node_431 = come_decrement_ref_count(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (*info->p==92&&*(info->p+1)==42)||*info->p==42) {
        if(        *info->p==92) {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_433=(_Bool)1;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            quote_433=(_Bool)0;
        }
        no_assign_434=info->no_assign;
        info->no_assign=(_Bool)1;
        value_435=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        info->no_assign=no_assign_434;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 861, "struct sNode");
        _inf_obj_value11=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value469=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05pre_op.c", 861, "struct sDerefferenceNode*")),(struct sNode*)come_increment_ref_count(value_435),quote_433,info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDerefferenceNode_finalize;
        _inf_value11->clone=(void*)sDerefferenceNode_clone;
        _inf_value11->compile=(void*)sDerefferenceNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDerefferenceNode_kind;
        __result_obj__305 = come_increment_ref_count(((struct sNode*)(__right_value473=_inf_value11)));
        ((value_435) ? value_435 = come_decrement_ref_count(value_435, ((struct sNode*)value_435)->finalize, ((struct sNode*)value_435)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value469,sDerefferenceNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value473) ? __right_value473 = come_decrement_ref_count(__right_value473, ((struct sNode*)__right_value473)->finalize, ((struct sNode*)__right_value473)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__305) ? __result_obj__305 = come_decrement_ref_count(__result_obj__305, ((struct sNode*)__result_obj__305)->finalize, ((struct sNode*)__result_obj__305)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__305;
        ((value_435) ? value_435 = come_decrement_ref_count(value_435, ((struct sNode*)value_435)->finalize, ((struct sNode*)value_435)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==38&&refference_419) {
        info->p++;
        skip_spaces_and_lf(info);
        value_437=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 869, "struct sNode");
        _inf_obj_value12=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value476=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 869, "struct sRefferenceNode*")),(struct sNode*)come_increment_ref_count(value_437),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sRefferenceNode_finalize;
        _inf_value12->clone=(void*)sRefferenceNode_clone;
        _inf_value12->compile=(void*)sRefferenceNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sRefferenceNode_kind;
        __result_obj__306 = come_increment_ref_count(((struct sNode*)(__right_value477=_inf_value12)));
        ((value_437) ? value_437 = come_decrement_ref_count(value_437, ((struct sNode*)value_437)->finalize, ((struct sNode*)value_437)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value476,sRefferenceNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value477) ? __right_value477 = come_decrement_ref_count(__right_value477, ((struct sNode*)__right_value477)->finalize, ((struct sNode*)__right_value477)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__306;
        ((value_437) ? value_437 = come_decrement_ref_count(value_437, ((struct sNode*)value_437)->finalize, ((struct sNode*)value_437)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        info->p++;
        skip_spaces_and_lf(info);
        value_438=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 877, "struct sNode");
        _inf_obj_value13=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value480=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 877, "struct sReverseNode*")),(struct sNode*)come_increment_ref_count(value_438),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sReverseNode_finalize;
        _inf_value13->clone=(void*)sReverseNode_clone;
        _inf_value13->compile=(void*)sReverseNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sReverseNode_kind;
        __result_obj__309 = come_increment_ref_count(((struct sNode*)(__right_value484=_inf_value13)));
        ((value_438) ? value_438 = come_decrement_ref_count(value_438, ((struct sNode*)value_438)->finalize, ((struct sNode*)value_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value480,sReverseNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value484) ? __right_value484 = come_decrement_ref_count(__right_value484, ((struct sNode*)__right_value484)->finalize, ((struct sNode*)__right_value484)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__309) ? __result_obj__309 = come_decrement_ref_count(__result_obj__309, ((struct sNode*)__result_obj__309)->finalize, ((struct sNode*)__result_obj__309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__309;
        ((value_438) ? value_438 = come_decrement_ref_count(value_438, ((struct sNode*)value_438)->finalize, ((struct sNode*)value_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        cast_expression_flag_440=(_Bool)0;
        {
            p_441=info->p;
            sline_442=info->sline;
            parse_sharp_v5(info);
            word_443=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj125=word_443,
                word_443=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            parse_sharp_v5(info);
            if(            is_type_name(word_443,info)) {
                cast_expression_flag_440=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_441;
            info->sline=sline_442;
            (word_443 = come_decrement_ref_count(word_443, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        tuple_expression_flag_444=(_Bool)0;
        named_tuple_expression_flag_445=(_Bool)0;
        if(        !gComeC) {
            p_446=info->p;
            sline_447=info->sline;
            parse_sharp_v5(info);
            {
                p_448=info->p;
                sline_449=info->sline;
                if(                *info->p==95||xisalpha(*info->p)) {
                    ((char*)(__right_value487=parse_word(info)));
                    (__right_value487 = come_decrement_ref_count(__right_value487, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    named_tuple_expression_flag_445=(_Bool)1;
                }
                else {
                    info->p=p_448;
                    info->sline=sline_449;
                }
            }
            no_comma_450=info->no_comma;
            info->no_comma=(_Bool)1;
            no_output_err_451=info->no_output_err;
            info->no_output_err=(_Bool)1;
            no_output_come_code_452=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            node_453=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node2_454=(struct sNode*)come_increment_ref_count(node_453);
            parse_sharp_v5(info);
            info->no_comma=no_comma_450;
            info->no_output_err=no_output_err_451;
            info->no_output_come_code=no_output_come_code_452;
            if(            *info->p==44) {
                tuple_expression_flag_444=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_446;
            info->sline=sline_447;
            ((node_453) ? node_453 = come_decrement_ref_count(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node2_454) ? node2_454 = come_decrement_ref_count(node2_454, ((struct sNode*)node2_454)->finalize, ((struct sNode*)node2_454)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_block_455=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05pre_op.c", 966, "struct list$1sNode$ph*"))));
            while((_Bool)1) {
                parse_sharp_v5(info);
                node2_456=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                list$1sNode$ph_add(paren_block_455,(struct sNode*)come_increment_ref_count(node2_456));
                while(*info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_456) ? node2_456 = come_decrement_ref_count(node2_456, ((struct sNode*)node2_456)->finalize, ((struct sNode*)node2_456)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
                else if(                *info->p==0) {
                    multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value492=err_msg(info,"invalid source end in paren block")));
                    come_exception_var_c1_457=multiple_assign_var7->v1;
                    Err_458=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    ((Err_458)?(puts(Err_458),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value492,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(0);
                    (Err_458 = come_decrement_ref_count(Err_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                ((node2_456) ? node2_456 = come_decrement_ref_count(node2_456, ((struct sNode*)node2_456)->finalize, ((struct sNode*)node2_456)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            expected_next_character(41,info);
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 995, "struct sNode");
            _inf_obj_value14=(struct sParenBlockNode*)come_increment_ref_count(((struct sParenBlockNode*)(__right_value494=sParenBlockNode_initialize((struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc(1, sizeof(struct sParenBlockNode)*(1), "05pre_op.c", 995, "struct sParenBlockNode*")),(struct list$1sNode$ph*)come_increment_ref_count(paren_block_455),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sParenBlockNode_finalize;
            _inf_value14->clone=(void*)sParenBlockNode_clone;
            _inf_value14->compile=(void*)sParenBlockNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sParenBlockNode_kind;
            node_459=(struct sNode*)come_increment_ref_count(_inf_value14);
            /*c*/ come_call_finalizer3(__right_value494,sParenBlockNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            __result_obj__312 = come_increment_ref_count(node_459);
            /*c*/ come_call_finalizer3(paren_block_455,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_459) ? node_459 = come_decrement_ref_count(node_459, ((struct sNode*)node_459)->finalize, ((struct sNode*)node_459)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__312) ? __result_obj__312 = come_decrement_ref_count(__result_obj__312, ((struct sNode*)__result_obj__312)->finalize, ((struct sNode*)__result_obj__312)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__312;
            /*c*/ come_call_finalizer3(paren_block_455,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_459) ? node_459 = come_decrement_ref_count(node_459, ((struct sNode*)node_459)->finalize, ((struct sNode*)node_459)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&tuple_expression_flag_444) {
            parse_sharp_v5(info);
            node_461=(struct sNode*)come_increment_ref_count(parse_tuple(info,named_tuple_expression_flag_445));
            parse_sharp_v5(info);
            __result_obj__313 = come_increment_ref_count(node_461);
            ((node_461) ? node_461 = come_decrement_ref_count(node_461, ((struct sNode*)node_461)->finalize, ((struct sNode*)node_461)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__313) ? __result_obj__313 = come_decrement_ref_count(__result_obj__313, ((struct sNode*)__result_obj__313)->finalize, ((struct sNode*)__result_obj__313)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__313;
            ((node_461) ? node_461 = come_decrement_ref_count(node_461, ((struct sNode*)node_461)->finalize, ((struct sNode*)node_461)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        cast_expression_flag_440) {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value500=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_462=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_463=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_464=multiple_assign_var8->v3;
            /*c*/ come_call_finalizer3(__right_value500,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_464) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            expected_next_character(41,info);
            parse_sharp_v5(info);
            node_465=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 1025, "struct sNode");
            _inf_obj_value15=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value503=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 1025, "struct sCastNode*")),type_462,node_465,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCastNode_finalize;
            _inf_value15->clone=(void*)sCastNode_clone;
            _inf_value15->compile=(void*)sCastNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCastNode_kind;
            __result_obj__314 = come_increment_ref_count(((struct sNode*)(__right_value504=_inf_value15)));
            /*c*/ come_call_finalizer3(type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_465) ? node_465 = come_decrement_ref_count(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value503,sCastNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value504) ? __right_value504 = come_decrement_ref_count(__right_value504, ((struct sNode*)__right_value504)->finalize, ((struct sNode*)__right_value504)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__314) ? __result_obj__314 = come_decrement_ref_count(__result_obj__314, ((struct sNode*)__result_obj__314)->finalize, ((struct sNode*)__result_obj__314)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__314;
            /*c*/ come_call_finalizer3(type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_465) ? node_465 = come_decrement_ref_count(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_assign_467=info->no_assign;
            info->no_assign=(_Bool)0;
            if(            gComeC&&info->in_fun_param) {
                no_comma_468=info->no_comma;
                info->no_comma=(_Bool)0;
                parse_sharp_v5(info);
                __dec_obj128=node_466,
                node_466=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                parse_sharp_v5(info);
                info->no_comma=no_comma_468;
            }
            else {
                parse_sharp_v5(info);
                __dec_obj129=node_466,
                node_466=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                parse_sharp_v5(info);
            }
            info->no_assign=no_assign_467;
            expected_next_character(41,info);
            parse_sharp_v5(info);
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 1051, "struct sNode");
            _inf_obj_value16=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(__right_value508=sParenNode_initialize((struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05pre_op.c", 1051, "struct sParenNode*")),node_466,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sParenNode_finalize;
            _inf_value16->clone=(void*)sParenNode_clone;
            _inf_value16->compile=(void*)sParenNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sParenNode_kind;
            __dec_obj132=node_466,
            node_466=(struct sNode*)come_increment_ref_count(_inf_value16);
            (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value508,sParenNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__317 = come_increment_ref_count(node_466);
            ((node_466) ? node_466 = come_decrement_ref_count(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__317) ? __result_obj__317 = come_decrement_ref_count(__result_obj__317, ((struct sNode*)__result_obj__317)->finalize, ((struct sNode*)__result_obj__317)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__317;
            ((node_466) ? node_466 = come_decrement_ref_count(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else {
        __result_obj__318 = come_increment_ref_count((struct sNode*)((void*)0));
        ((__result_obj__318) ? __result_obj__318 = come_decrement_ref_count(__result_obj__318, ((struct sNode*)__result_obj__318)->finalize, ((struct sNode*)__result_obj__318)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__318;
    }
}

static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self){
struct sLogicalDenial2* __result_obj__288;
void* __right_value435 = (void*)0;
struct sLogicalDenial2* result_424;
void* __right_value436 = (void*)0;
char* __dec_obj111;
void* __right_value437 = (void*)0;
struct sNode* __dec_obj112;
struct sLogicalDenial2* __result_obj__289;
    if(    self==(void*)0) {
        __result_obj__288 = (void*)0;
        return __result_obj__288;
    }
    result_424=(struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc(1, sizeof(struct sLogicalDenial2)*(1), "sLogicalDenial2_clone", 3, "struct sLogicalDenial2*"));
    if(    self!=((void*)0)) {
        result_424->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj111=result_424->sname,
        result_424->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLogicalDenial2_clone", 5, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_424->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj112=result_424->value,
        result_424->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__289 = result_424;
    /*c*/ come_call_finalizer3(result_424,sLogicalDenial2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
struct sMinusMinusNode2* __result_obj__291;
void* __right_value442 = (void*)0;
struct sMinusMinusNode2* result_426;
void* __right_value443 = (void*)0;
char* __dec_obj113;
void* __right_value444 = (void*)0;
struct sNode* __dec_obj114;
struct sMinusMinusNode2* __result_obj__292;
    if(    self==(void*)0) {
        __result_obj__291 = (void*)0;
        return __result_obj__291;
    }
    result_426=(struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "struct sMinusMinusNode2*"));
    if(    self!=((void*)0)) {
        result_426->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj113=result_426->sname,
        result_426->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMinusMinusNode2_clone", 5, "char*"));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_426->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj114=result_426->value,
        result_426->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__292 = result_426;
    /*c*/ come_call_finalizer3(result_426,sMinusMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
struct sMinusNode2* __result_obj__294;
void* __right_value449 = (void*)0;
struct sMinusNode2* result_428;
void* __right_value450 = (void*)0;
char* __dec_obj115;
void* __right_value451 = (void*)0;
struct sNode* __dec_obj116;
struct sMinusNode2* __result_obj__295;
    if(    self==(void*)0) {
        __result_obj__294 = (void*)0;
        return __result_obj__294;
    }
    result_428=(struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "struct sMinusNode2*"));
    if(    self!=((void*)0)) {
        result_428->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_428->sname,
        result_428->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMinusNode2_clone", 5, "char*"));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_428->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj116=result_428->value,
        result_428->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__295 = result_428;
    /*c*/ come_call_finalizer3(result_428,sMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__295;
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
struct sPlusPlusNode2* __result_obj__297;
void* __right_value456 = (void*)0;
struct sPlusPlusNode2* result_430;
void* __right_value457 = (void*)0;
char* __dec_obj117;
void* __right_value458 = (void*)0;
struct sNode* __dec_obj118;
struct sPlusPlusNode2* __result_obj__298;
    if(    self==(void*)0) {
        __result_obj__297 = (void*)0;
        return __result_obj__297;
    }
    result_430=(struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "struct sPlusPlusNode2*"));
    if(    self!=((void*)0)) {
        result_430->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj117=result_430->sname,
        result_430->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sPlusPlusNode2_clone", 5, "char*"));
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_430->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj118=result_430->value,
        result_430->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj118 ? __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__298 = result_430;
    /*c*/ come_call_finalizer3(result_430,sPlusPlusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
}

static struct sComplement* sComplement_clone(struct sComplement* self){
struct sComplement* __result_obj__300;
void* __right_value463 = (void*)0;
struct sComplement* result_432;
void* __right_value464 = (void*)0;
char* __dec_obj119;
void* __right_value465 = (void*)0;
struct sNode* __dec_obj120;
struct sComplement* __result_obj__301;
    if(    self==(void*)0) {
        __result_obj__300 = (void*)0;
        return __result_obj__300;
    }
    result_432=(struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "struct sComplement*"));
    if(    self!=((void*)0)) {
        result_432->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_432->sname,
        result_432->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComplement_clone", 5, "char*"));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_432->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj120=result_432->value,
        result_432->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__301 = result_432;
    /*c*/ come_call_finalizer3(result_432,sComplement_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__301;
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
struct sDerefferenceNode* __result_obj__303;
void* __right_value470 = (void*)0;
struct sDerefferenceNode* result_436;
void* __right_value471 = (void*)0;
char* __dec_obj121;
void* __right_value472 = (void*)0;
struct sNode* __dec_obj122;
struct sDerefferenceNode* __result_obj__304;
    if(    self==(void*)0) {
        __result_obj__303 = (void*)0;
        return __result_obj__303;
    }
    result_436=(struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "struct sDerefferenceNode*"));
    if(    self!=((void*)0)) {
        result_436->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj121=result_436->sname,
        result_436->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDerefferenceNode_clone", 5, "char*"));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_436->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj122=result_436->value,
        result_436->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_436->mQuote=self->mQuote;
    }
    __result_obj__304 = result_436;
    /*c*/ come_call_finalizer3(result_436,sDerefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
struct sReverseNode* __result_obj__307;
void* __right_value481 = (void*)0;
struct sReverseNode* result_439;
void* __right_value482 = (void*)0;
char* __dec_obj123;
void* __right_value483 = (void*)0;
struct sNode* __dec_obj124;
struct sReverseNode* __result_obj__308;
    if(    self==(void*)0) {
        __result_obj__307 = (void*)0;
        return __result_obj__307;
    }
    result_439=(struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "struct sReverseNode*"));
    if(    self!=((void*)0)) {
        result_439->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj123=result_439->sname,
        result_439->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReverseNode_clone", 5, "char*"));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_439->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj124=result_439->value,
        result_439->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__308 = result_439;
    /*c*/ come_call_finalizer3(result_439,sReverseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self){
struct sParenBlockNode* __result_obj__310;
void* __right_value495 = (void*)0;
struct sParenBlockNode* result_460;
void* __right_value496 = (void*)0;
char* __dec_obj126;
void* __right_value497 = (void*)0;
struct list$1sNode$ph* __dec_obj127;
struct sParenBlockNode* __result_obj__311;
    if(    self==(void*)0) {
        __result_obj__310 = (void*)0;
        return __result_obj__310;
    }
    result_460=(struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc(1, sizeof(struct sParenBlockNode)*(1), "sParenBlockNode_clone", 3, "struct sParenBlockNode*"));
    if(    self!=((void*)0)) {
        result_460->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj126=result_460->sname,
        result_460->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sParenBlockNode_clone", 5, "char*"));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_460->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->paren_block!=((void*)0)) {
        __dec_obj127=result_460->paren_block,
        result_460->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->paren_block));
        /*b*/ come_call_finalizer3(__dec_obj127,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__311 = result_460;
    /*c*/ come_call_finalizer3(result_460,sParenBlockNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__311;
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
struct sParenNode* __result_obj__315;
void* __right_value509 = (void*)0;
struct sParenNode* result_469;
void* __right_value510 = (void*)0;
char* __dec_obj130;
void* __right_value511 = (void*)0;
struct sNode* __dec_obj131;
struct sParenNode* __result_obj__316;
    if(    self==(void*)0) {
        __result_obj__315 = (void*)0;
        return __result_obj__315;
    }
    result_469=(struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "struct sParenNode*"));
    if(    self!=((void*)0)) {
        result_469->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj130=result_469->sname,
        result_469->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sParenNode_clone", 5, "char*"));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_469->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj131=result_469->mLeft,
        result_469->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__316 = result_469;
    /*c*/ come_call_finalizer3(result_469,sParenNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__316;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __right_value513 = (void*)0;
struct sNode* node_470;
void* __right_value514 = (void*)0;
struct sNode* __result_obj__319;
struct sNode* __result_obj__320;
    node_470=(struct sNode*)come_increment_ref_count(pre_position_operator(info));
    if(    node_470==((void*)0)) {
        __result_obj__319 = come_increment_ref_count(((struct sNode*)(__right_value514=expression_node_v97(info))));
        ((node_470) ? node_470 = come_decrement_ref_count(node_470, ((struct sNode*)node_470)->finalize, ((struct sNode*)node_470)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value514) ? __right_value514 = come_decrement_ref_count(__right_value514, ((struct sNode*)__right_value514)->finalize, ((struct sNode*)__right_value514)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__319) ? __result_obj__319 = come_decrement_ref_count(__result_obj__319, ((struct sNode*)__result_obj__319)->finalize, ((struct sNode*)__result_obj__319)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__319;
    }
    else {
        __result_obj__320 = come_increment_ref_count(node_470);
        ((node_470) ? node_470 = come_decrement_ref_count(node_470, ((struct sNode*)node_470)->finalize, ((struct sNode*)node_470)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__320) ? __result_obj__320 = come_decrement_ref_count(__result_obj__320, ((struct sNode*)__result_obj__320)->finalize, ((struct sNode*)__result_obj__320)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__320;
    }
    ((node_470) ? node_470 = come_decrement_ref_count(node_470, ((struct sNode*)node_470)->finalize, ((struct sNode*)node_470)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

