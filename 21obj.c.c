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
long  long __lldata;
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

extern void* gComeFunResultObject;

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern void* wildcard;

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
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

struct object
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
};

struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1charp
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};

struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};

struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};

struct list_item$1short
{
    short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};

struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};

struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};

struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};

struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};

struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};

struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};

struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};

struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};

struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};

struct vector$1char
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1charp
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double
{
    double* items;
    int len;
    int size;
    int it;
};

struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};

struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};

typedef struct regex_t* re_t;

enum { UNUSED
,DOT
,BEGIN
,END
,QUESTIONMARK
,STAR
,PLUS
,CHAR
,CHAR_CLASS
,INV_CHAR_CLASS
,DIGIT
,NOT_DIGIT
,ALPHA
,NOT_ALPHA
,WHITESPACE
,NOT_WHITESPACE
};

union anonymous_typeZ4
{
unsigned char ch;
unsigned char* ccl;
};

union anonymous_typeZ5
{
unsigned char ch;
unsigned char* ccl;
};

struct regex_t
{
    unsigned char type;
    union anonymous_typeZ5 u;
};

typedef struct regex_t regex_t;

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};

struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
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
    struct list$1voidph* mFields;
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

struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};

struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mNoSolvedGenericsType;
    struct sType* mOriginalLoadVarType;
    struct sType* mAnyOriginalType;
    struct sType* mChannelType;
    _Bool mAnyClass;
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
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
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mAllocaValue;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    char* mTupleName;
    char* mAttribute;
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
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
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
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
    _Bool mCloner;
    _Bool mNoResultType;
    char* mAttribute;
    char* mFunAttribute;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct list$1voidp
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
};

struct map$2voidphvoidph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1voidp* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2voidphvoidph* mHeader;
    struct map$2voidphvoidph* mHeaderStructs;
};

struct sVarTable
{
    struct map$2voidphvoidph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sBlock
{
    struct list$1sNodeph* mNodes;
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
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};

struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};

struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
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
    struct map$2voidphvoidph* funcs;
    struct map$2voidphvoidph* generics_funcs;
    struct map$2voidphvoidph* classes;
    struct map$2voidphvoidph* modules;
    struct map$2voidphvoidph* types;
    struct map$2voidphvoidph* generics_classes;
    struct map$2voidphvoidph* struct_definition;
    struct map$2voidphvoidph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1voidph* right_value_objects;
    struct sType* generics_type;
    struct list$1voidph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
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
    struct map$2voidphvoidph* module_params;
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
    struct list$1voidph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2voidphvoidph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
    _Bool in_exception_value;
};

struct tuple2$2intcharph
{
    int v1;
    char* v2;
};

struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};

struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};

struct tuple2$2charphsGenericsFunp
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2boolcharph
{
    _Bool v1;
    char* v2;
};

struct tuple2$2charphcharph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2charphbool
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};

struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};

extern struct list$1voidph* gExceptionRightValueObjects;
struct tuple4$4charphcharphcharphcharph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sNewNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    struct list$1tuple2$2charphsNodephph* initializer;
};

struct sImplementsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj_exp;
    struct sType* inf_type;
};

struct sTrueNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFalseNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSizeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sSizeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sTypeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicTypeOf
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignAsExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sIsPointer
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sGCDecNoFreeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
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
static unsigned int buffer_get_hash_key(struct buffer* self);
void stackframe();
char* come_get_stackframe();
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_get_finalizer(void* mem);
void* come_get_cloner(void* mem);
void* come_get_hash_key(void* mem);
void* come_get_equaler(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
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
struct smart_pointer$1char* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
struct list$1char* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1charp_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
struct list$1charp* charppa_to_list(char** self, unsigned long  int len);
static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
struct list$1short* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
struct list$1int* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1intp_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
struct list$1long* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1longp_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
struct list$1float* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
struct list$1double* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
struct vector$1char* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
struct vector$1int* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
struct vector$1long* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
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
char* charp_clone(char* self);
char* string_clone(char* self);
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
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item);
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
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
int re_match(const char* pattern, const char* text, int* matchlength);
int re_matchp(struct regex_t* pattern, const char* text, int* matchlength);
struct regex_t* re_compile(const char* pattern);
void re_print(struct regex_t* pattern);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
int matchone(struct regex_t p, char c);
int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchpattern(struct regex_t* pattern, const char* text, int* matchlength);
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
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
struct tuple2$2intcharph* err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
int transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
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
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2boolcharph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
int transpile_v5(struct sInfo* info);
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
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
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
struct sType* use_any_type(struct sType* type);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct tuple4$4charphcharphcharphcharph* create_vtable(struct sType* any_type, struct sInfo* info);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void tuple4$4charphcharphcharphcharph_finalize(struct tuple4$4charphcharphcharphcharph* self);
static struct tuple4$4charphcharphcharphcharph* tuple4$4charphcharphcharphcharph_clone(struct tuple4$4charphcharphcharphcharph* self);
static unsigned int tuple4$4charphcharphcharphcharph_get_hash_key(struct tuple4$4charphcharphcharphcharph* self);
static _Bool tuple4$4charphcharphcharphcharph_equals(struct tuple4$4charphcharphcharphcharph* left, struct tuple4$4charphcharphcharphcharph* right);
static struct tuple4$4charphcharphcharphcharph* tuple4$4charphcharphcharphcharph_initialize(struct tuple4$4charphcharphcharphcharph* self, char* v1, char* v2, char* v3, char* v4);
static void tuple4$4charphcharphcharphcharphp_finalize(struct tuple4$4charphcharphcharphcharph* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self);
static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo* info);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo* info);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);
char* sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info);
char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self);
_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info);
static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);
char* sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);
static void sDeleteNode_finalize(struct sDeleteNode* self);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);
char* sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);
static void sBorrowNode_finalize(struct sBorrowNode* self);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);
char* sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);
static void sCloneNode_finalize(struct sCloneNode* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);
char* sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);
static void sDupeNode_finalize(struct sDupeNode* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);
char* sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);
char* sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);
static void sGCIncNode_finalize(struct sGCIncNode* self);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);
static void sGCDecNode_finalize(struct sGCDecNode* self);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);
char* sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);
static void sIsHeap_finalize(struct sIsHeap* self);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);
char* sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);
static void sIsPointer_finalize(struct sIsPointer* self);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info);
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_1;
    result_1=0;
    result_1+=int_get_hash_key(((int)self->buf));
    result_1+=int_get_hash_key(((int)self->len));
    result_1+=int_get_hash_key(((int)self->size));
    return result_1;
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_175;
struct list$1char* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1charp_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_178;
struct list$1char* __result100__;
    if(    self->len==0) {
        litem_176=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1452, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1462, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1472, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_179;
struct list_item$1char* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_181;
struct list$1charp* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1charpp_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_184;
struct list$1charp* __result103__;
    if(    self->len==0) {
        litem_182=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1452, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1462, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1472, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_185;
struct list_item$1charp* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_187;
struct list$1short* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1shortp_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_190;
struct list$1short* __result106__;
    if(    self->len==0) {
        litem_188=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1452, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1462, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1472, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_191;
struct list_item$1short* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_193;
struct list$1int* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1intp_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_196;
struct list$1int* __result109__;
    if(    self->len==0) {
        litem_194=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1452, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1462, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1472, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_197;
struct list_item$1int* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_199;
struct list$1long* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1longp_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_202;
struct list$1long* __result112__;
    if(    self->len==0) {
        litem_200=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1452, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1462, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1472, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_203;
struct list_item$1long* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_205;
struct list$1float* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1floatp_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_208;
struct list$1float* __result115__;
    if(    self->len==0) {
        litem_206=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1452, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1462, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1472, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_209;
struct list_item$1float* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_211;
struct list$1double* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1doublep_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_214;
struct list$1double* __result118__;
    if(    self->len==0) {
        litem_212=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1452, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1462, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1472, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_215;
struct list_item$1double* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result121__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2244, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_217;
    if(    0) {
        for(        i_217=0;        i_217<self->len;        i_217++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result123__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2244, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_218;
    if(    0) {
        for(        i_218=0;        i_218<self->len;        i_218++        ){
            (self->items[i_218] = come_decrement_ref_count2(self->items[i_218], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2244, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_219;
    if(    0) {
        for(        i_219=0;        i_219<self->len;        i_219++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result127__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2244, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_220;
    if(    0) {
        for(        i_220=0;        i_220<self->len;        i_220++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result129__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2244, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2244, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_222;
    if(    0) {
        for(        i_222=0;        i_222<self->len;        i_222++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result133__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2244, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_223;
    if(    0) {
        for(        i_223=0;        i_223<self->len;        i_223++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result171__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_257;
struct list_item$1charph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        come_call_finalizer3(prev_it_258,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_262;
char* __dec_obj28;
void* __right_value195 = (void*)0;
struct list_item$1charph* litem_263;
char* __dec_obj29;
void* __right_value196 = (void*)0;
struct list_item$1charph* litem_264;
char* __dec_obj30;
struct list$1charph* __result173__;
    if(    self->len==0) {
        litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1452, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj28=litem_262->item;
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1462, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj29=litem_263->item;
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1472, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj30=litem_264->item;
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct tuple4$4charphcharphcharphcharph* create_vtable(struct sType* any_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* finalizer_name_317;
void* __right_value253 = (void*)0;
char* cloner_name_318;
void* __right_value254 = (void*)0;
char* get_hash_key_name_319;
void* __right_value255 = (void*)0;
char* equaler_name_320;
void* __right_value256 = (void*)0;
_Bool _if_conditional1;
void* __right_value257 = (void*)0;
char* __dec_obj31;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
_Bool _if_conditional2;
void* __right_value260 = (void*)0;
char* __dec_obj33;
void* __right_value261 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_324=0;
char* name_325=0;
char* __dec_obj34;
void* __right_value262 = (void*)0;
_Bool _if_conditional3;
void* __right_value263 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun_326=0;
char* name_327=0;
char* __dec_obj35;
void* __right_value264 = (void*)0;
_Bool _if_conditional4;
void* __right_value265 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_328=0;
char* name_329=0;
char* __dec_obj36;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct tuple4$4charphcharphcharphcharph* __result237__;
    finalizer_name_317=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_318=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_319=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"get_hash_key",info,(_Bool)1));
    equaler_name_320=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"equals",info,(_Bool)1));
    if(    (_if_conditional1=(((struct sFun*)((void*)(__right_value256=map$2voidphvoidphp_operator_load_element(info->funcs,finalizer_name_317))))==((void*)0))),    come_call_finalizer3(__right_value256,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
    _if_conditional1) {
        if(        any_type->mClass->mNumber) {
            __dec_obj31=finalizer_name_317;
            finalizer_name_317=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (void*)((struct tuple2$2sFunpcharph*)(__right_value258=create_finalizer_automatically(any_type,"finalize",info)));
            come_call_finalizer3(__right_value258,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    (_if_conditional2=(((struct sFun*)((void*)(__right_value259=map$2voidphvoidphp_operator_load_element(info->funcs,cloner_name_318))))==((void*)0))),    come_call_finalizer3(__right_value259,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
    _if_conditional2) {
        if(        any_type->mClass->mNumber) {
            __dec_obj33=cloner_name_318;
            cloner_name_318=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value261=create_cloner_automatically(any_type,"clone",info)));
            fun_324=multiple_assign_var1->v1;
            name_325=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer3(__right_value261,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj34=cloner_name_318;
            cloner_name_318=(char*)come_increment_ref_count(name_325);
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            (name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    (_if_conditional3=(((struct sFun*)((void*)(__right_value262=map$2voidphvoidphp_operator_load_element(info->funcs,get_hash_key_name_319))))==((void*)0))),    come_call_finalizer3(__right_value262,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
    _if_conditional3) {
        multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value263=create_get_hash_key_automatically(any_type,"get_hash_key",info)));
        fun_326=multiple_assign_var2->v1;
        name_327=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        come_call_finalizer3(__right_value263,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj35=get_hash_key_name_319;
        get_hash_key_name_319=(char*)come_increment_ref_count(name_327);
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        (name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    (_if_conditional4=(((struct sFun*)((void*)(__right_value264=map$2voidphvoidphp_operator_load_element(info->funcs,equaler_name_320))))==((void*)0))),    come_call_finalizer3(__right_value264,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
    _if_conditional4) {
        multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value265=create_equals_automatically(any_type,"equals",info)));
        fun_328=multiple_assign_var3->v1;
        name_329=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer3(__right_value265,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj36=equaler_name_320;
        equaler_name_320=(char*)come_increment_ref_count(name_329);
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        (name_329 = come_decrement_ref_count2(name_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result237__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4charphcharphcharphcharph*)(__right_value272=tuple4$4charphcharphcharphcharph_initialize((struct tuple4$4charphcharphcharphcharph**)come_increment_ref_count((struct tuple4$4charphcharphcharphcharph*)come_calloc(1, sizeof(struct tuple4$4charphcharphcharphcharph)*(1), "21obj.c", 36, "struct tuple4$4charphcharphcharphcharph", tuple4$4charphcharphcharphcharph_finalize, tuple4$4charphcharphcharphcharph_clone, tuple4$4charphcharphcharphcharph_get_hash_key, tuple4$4charphcharphcharphcharph_equals)),(char*)come_increment_ref_count(finalizer_name_317),(char*)come_increment_ref_count(cloner_name_318),(char*)come_increment_ref_count(get_hash_key_name_319),(char*)come_increment_ref_count(equaler_name_320))));
    come_call_finalizer3(any_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_317 = come_decrement_ref_count2(finalizer_name_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_318 = come_decrement_ref_count2(cloner_name_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_319 = come_decrement_ref_count2(get_hash_key_name_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_320 = come_decrement_ref_count2(equaler_name_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value272,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_321;
unsigned int hash_322;
unsigned int it_323;
void* __result230__;
void* __result231__;
void* __result232__;
void* __result233__;
default_value_321 = (void*)0;
    memset(&default_value_321,0,sizeof(void*));
    hash_322=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_323=hash_322;
    while((_Bool)1) {
        if(        self->item_existance[it_323]) {
            if(            come_call_equals((void*)0, self->keys[it_323], ((char*)key))) {
                __result230__ = gComeFunResultObject = __result_obj__ = self->items[it_323];
                come_call_finalizer3(default_value_321,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
            it_323++;
            if(            it_323>=self->size) {
                it_323=0;
            }
            else if(            it_323==hash_322) {
                __result231__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_321);
                come_call_finalizer3(default_value_321,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
        }
        else {
            __result232__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_321);
            come_call_finalizer3(default_value_321,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result232__;
        }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_321);
    come_call_finalizer3(default_value_321,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj32=self->v2;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple4$4charphcharphcharphcharph_finalize(struct tuple4$4charphcharphcharphcharph* self){
char* __dec_obj37;
char* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj37=self->v1;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj38=self->v2;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj39=self->v3;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        if(        self->v4==gComeFunResultObject) {
            __dec_obj40=self->v4;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple4$4charphcharphcharphcharph* tuple4$4charphcharphcharphcharph_clone(struct tuple4$4charphcharphcharphcharph* self){
void* __result_obj__=(void*)0;
struct tuple4$4charphcharphcharphcharph* __result234__;
void* __right_value266 = (void*)0;
struct tuple4$4charphcharphcharphcharph* result_330;
void* __right_value267 = (void*)0;
char* __dec_obj41;
void* __right_value268 = (void*)0;
char* __dec_obj42;
void* __right_value269 = (void*)0;
char* __dec_obj43;
void* __right_value270 = (void*)0;
char* __dec_obj44;
struct tuple4$4charphcharphcharphcharph* __result235__;
    if(    self==(void*)0) {
        __result234__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_330=(struct tuple4$4charphcharphcharphcharph*)come_increment_ref_count((struct tuple4$4charphcharphcharphcharph*)come_calloc(1, sizeof(struct tuple4$4charphcharphcharphcharph)*(1), "tuple4$4charphcharphcharphcharph_clone", 3, "struct tuple4$4charphcharphcharphcharph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj41=result_330->v1;
        result_330->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj42=result_330->v2;
        result_330->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj43=result_330->v3;
        result_330->v3=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v3));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        __dec_obj44=result_330->v4;
        result_330->v4=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v4));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_330;
    come_call_finalizer3(result_330,tuple4$4charphcharphcharphcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static unsigned int tuple4$4charphcharphcharphcharph_get_hash_key(struct tuple4$4charphcharphcharphcharph* self){
unsigned int result_331;
    result_331=0;
    result_331+=int_get_hash_key(((int)self->v1));
    result_331+=int_get_hash_key(((int)self->v2));
    result_331+=int_get_hash_key(((int)self->v3));
    result_331+=int_get_hash_key(((int)self->v4));
    return result_331;
}

static _Bool tuple4$4charphcharphcharphcharph_equals(struct tuple4$4charphcharphcharphcharph* left, struct tuple4$4charphcharphcharphcharph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4charphcharphcharphcharph* tuple4$4charphcharphcharphcharph_initialize(struct tuple4$4charphcharphcharphcharph* self, char* v1, char* v2, char* v3, char* v4){
void* __result_obj__=(void*)0;
char* __dec_obj45;
char* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
struct tuple4$4charphcharphcharphcharph* __result236__;
    __dec_obj45=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj46=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj47=self->v3;
    self->v3=(char*)come_increment_ref_count(v3);
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj48=self->v4;
    self->v4=(char*)come_increment_ref_count(v4);
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4charphcharphcharphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v3 = come_decrement_ref_count2(v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v4 = come_decrement_ref_count2(v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void tuple4$4charphcharphcharphcharphp_finalize(struct tuple4$4charphcharphcharphcharph* self){
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj49=self->v1;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj50=self->v2;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj51=self->v3;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        if(        self->v4==gComeFunResultObject) {
            __dec_obj52=self->v4;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj53;
struct sType* __dec_obj54;
struct sType* __dec_obj55;
struct sType* __dec_obj56;
struct list$1voidph* __dec_obj57;
struct list$1sNodeph* __dec_obj59;
struct list$1voidph* __dec_obj61;
struct list$1charph* __dec_obj62;
struct sType* __dec_obj63;
struct sNode* __dec_obj64;
struct sNode* __dec_obj65;
char* __dec_obj66;
char* __dec_obj67;
char* __dec_obj68;
char* __dec_obj69;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj53=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj54=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj55=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj56=self->mChannelType;
            come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj57=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj57,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj59=self->mArrayNum;
            come_call_finalizer3(__dec_obj59,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj61=self->mParamTypes;
            come_call_finalizer3(__dec_obj61,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj62=self->mParamNames;
            come_call_finalizer3(__dec_obj62,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj63=self->mResultType;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj64=self->mSizeNum;
            if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj65=self->mAlignas;
            if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj66=self->mOriginalTypeName;
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj67=self->mAsmName;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj68=self->mTupleName;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj69=self->mAttribute;
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_332;
struct list_item$1voidph* prev_it_333;
    it_332=self->head;
    while(it_332!=((void*)0)) {
        prev_it_333=it_332;
        it_332=it_332->next;
        come_call_finalizer3(prev_it_333,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj58;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj58=self->item;
            come_call_finalizer3(__dec_obj58,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_334;
struct list_item$1voidph* prev_it_335;
    it_334=self->head;
    while(it_334!=((void*)0)) {
        prev_it_335=it_334;
        it_334=it_334->next;
        come_call_finalizer3(prev_it_335,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_336;
struct list_item$1sNodeph* prev_it_337;
    it_336=self->head;
    while(it_336!=((void*)0)) {
        prev_it_337=it_336;
        it_336=it_336->next;
        come_call_finalizer3(prev_it_337,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj60;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj60=self->item;
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_338;
struct list_item$1sNodeph* prev_it_339;
    it_338=self->head;
    while(it_338!=((void*)0)) {
        prev_it_339=it_338;
        it_338=it_338->next;
        come_call_finalizer3(prev_it_339,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_340;
struct list_item$1charph* prev_it_341;
    it_340=self->head;
    while(it_340!=((void*)0)) {
        prev_it_341=it_340;
        it_340=it_340->next;
        come_call_finalizer3(prev_it_341,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj95;
struct list$1tuple2$2charphsNodephph* __dec_obj96;
struct sNewNode* __result253__;
    ((struct sNodeBase*)(__right_value273=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value273,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj96=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer);
    come_call_finalizer3(__dec_obj96,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
char* __result254__;
    __result254__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value310=__builtin_string("sNewNode")));
    (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result254__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_371;
struct list$1tuple2$2charphsNodephph* initializer_372;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct CVALUE* come_value_373;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct buffer* num_string_374;
struct list$1sNodeph* o2_saved_375;
struct sNode* it_378;
_Bool Value_381;
_Bool __result261__;
void* __right_value315 = (void*)0;
struct CVALUE* cvalue_382;
void* __right_value316 = (void*)0;
struct sType* type2_383;
_Bool generics_any_child_384;
struct sType* no_solved_type_385;
struct sType* __dec_obj107;
struct list$1voidph* o2_saved_386;
struct sType* it_389;
void* __right_value317 = (void*)0;
char* type_name_394;
void* __right_value318 = (void*)0;
char* type_name2_395;
void* __right_value319 = (void*)0;
char* var_name_397;
void* __right_value320 = (void*)0;
struct sType* type3_398;
struct sType* __dec_obj108;
void* __right_value321 = (void*)0;
char* type_name3_399;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct buffer* buf_400;
char* obj_401;
void* __right_value325 = (void*)0;
struct sType* any_type_402;
void* __right_value326 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var4 = (void*)0;
char* finalizer_name_403=0;
char* cloner_name_404=0;
char* get_hash_key_name_405=0;
char* equaler_name_406=0;
void* __right_value327 = (void*)0;
char* any_type_name_407;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
char* __dec_obj109;
void* __right_value330 = (void*)0;
struct sType* __dec_obj110;
struct sType* any_type_408;
void* __right_value331 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var5 = (void*)0;
char* finalizer_name_409=0;
char* cloner_name_410=0;
char* get_hash_key_name_411=0;
char* equaler_name_412=0;
void* __right_value332 = (void*)0;
char* any_type_name_413;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* __dec_obj111;
void* __right_value335 = (void*)0;
struct sType* __dec_obj112;
void* __right_value336 = (void*)0;
struct sType* any_type_414;
void* __right_value337 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var6 = (void*)0;
char* finalizer_name_415=0;
char* cloner_name_416=0;
char* get_hash_key_name_417=0;
char* equaler_name_418=0;
void* __right_value338 = (void*)0;
char* any_type_name_419;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
char* __dec_obj113;
void* __right_value341 = (void*)0;
struct sType* __dec_obj114;
char* finalizer_name_420;
char* cloner_name_421;
char* get_hash_key_name_422;
char* equaler_name_423;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
char* __dec_obj115;
struct sClass* klass_424;
int i_425;
struct list$1tuple2$2charphsNodephph* o2_saved_426;
struct tuple2$2charphsNodeph* it_429;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* name_432=0;
struct sNode* exp_433=0;
_Bool Value_434;
_Bool __result275__;
void* __right_value344 = (void*)0;
struct CVALUE* come_value2_435;
struct sType* left_type_436;
struct list$1voidph* o2_saved_437;
struct tuple2$2charphsTypeph* it2_438;
struct tuple2$2charphsTypeph* multiple_assign_var8 = (void*)0;
char* field_name_439=0;
struct sType* field_type_440=0;
void* __right_value345 = (void*)0;
struct sType* __dec_obj116;
void* __right_value346 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var9 = (void*)0;
int come_exception_var_1_441=0;
char* Err_442=0;
_Bool _if_conditional5;
_Bool __result276__;
struct sType* right_type_443;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var10 = (void*)0;
_Bool come_exception_var_2_444=0;
char* Err_445=0;
_Bool _if_conditional6;
_Bool __result277__;
struct sType* __dec_obj119;
void* __right_value350 = (void*)0;
char* c_value_446;
void* __right_value351 = (void*)0;
char* __dec_obj120;
void* __right_value352 = (void*)0;
struct sType* __dec_obj121;
void* __right_value356 = (void*)0;
struct sType* type3_450;
void* __right_value357 = (void*)0;
char* type_name3_451;
char* obj_452;
void* __right_value358 = (void*)0;
struct sType* any_type_453;
void* __right_value359 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var11 = (void*)0;
char* finalizer_name_454=0;
char* cloner_name_455=0;
char* get_hash_key_name_456=0;
char* equaler_name_457=0;
void* __right_value360 = (void*)0;
char* any_type_name_458;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
char* __dec_obj125;
void* __right_value363 = (void*)0;
struct sType* __dec_obj126;
struct sType* any_type_459;
struct sType* __dec_obj127;
void* __right_value364 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var12 = (void*)0;
char* finalizer_name_460=0;
char* cloner_name_461=0;
char* get_hash_key_name_462=0;
char* equaler_name_463=0;
void* __right_value365 = (void*)0;
char* any_type_name_464;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* __dec_obj128;
void* __right_value368 = (void*)0;
struct sType* __dec_obj129;
void* __right_value369 = (void*)0;
struct sType* any_type_465;
void* __right_value370 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var13 = (void*)0;
char* finalizer_name_466=0;
char* cloner_name_467=0;
char* get_hash_key_name_468=0;
char* equaler_name_469=0;
void* __right_value371 = (void*)0;
char* any_type_name_470;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
char* __dec_obj130;
void* __right_value374 = (void*)0;
struct sType* __dec_obj131;
char* finalizer_name_471;
char* cloner_name_472;
char* get_hash_key_name_473;
char* equaler_name_474;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
char* __dec_obj132;
void* __right_value377 = (void*)0;
struct sType* __dec_obj133;
_Bool __result279__;
obj_401 = (void*)0;
obj_452 = (void*)0;
    type_371=self->type;
    initializer_372=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    come_value_373=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 59, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_374=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 61, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_374,"1");
    for(    o2_saved_375=(struct list$1sNodeph*)come_increment_ref_count((type_371->mArrayNum)),it_378=list$1sNodephp_begin((o2_saved_375));    !list$1sNodephp_end((o2_saved_375));    it_378=list$1sNodephp_next((o2_saved_375))    ){
        Value_381=node_compile(it_378,info);
        if(        !Value_381) {
            __result261__ = (_Bool)0;
            come_call_finalizer3(o2_saved_375,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_372,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_374,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result261__;
        }
        else {
        }
        cvalue_382=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_format(num_string_374,"*(%s)",cvalue_382->c_value);
        come_call_finalizer3(cvalue_382,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_375,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    type2_383=(struct sType*)come_increment_ref_count(solve_generics(type_371,info->generics_type,info));
    generics_any_child_384=(_Bool)0;
    no_solved_type_385=((void*)0);
    if(    type2_383->mNoSolvedGenericsType) {
        __dec_obj107=no_solved_type_385;
        no_solved_type_385=(struct sType*)come_increment_ref_count(type2_383->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_386=(struct list$1voidph*)come_increment_ref_count((no_solved_type_385->mGenericsTypes)),it_389=((struct sType*)list$1voidphp_begin((o2_saved_386)));        !list$1voidphp_end((o2_saved_386));        it_389=((struct sType*)list$1voidphp_next((o2_saved_386)))        ){
            if(            it_389->mAnyOriginalType) {
                generics_any_child_384=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_386,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    list$1sNodephp_reset(type2_383->mArrayNum);
    type_name_394=(char*)come_increment_ref_count(make_type_name_string(type2_383,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_395=(char*)come_increment_ref_count(make_come_type_name_string(type2_383,info));
    if(    initializer_372) {
        static int var_num_396=1;
        var_num_396++;
        var_name_397=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_396));
        type3_398=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
        type3_398->mPointerNum++;
        if(        type3_398->mNoSolvedGenericsType) {
            type3_398->mNoSolvedGenericsType->mPointerNum++;
        }
        if(        type3_398->mAnyOriginalType) {
            __dec_obj108=type3_398;
            type3_398=(struct sType*)come_increment_ref_count(type3_398->mAnyOriginalType);
            come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        type_name3_399=(char*)come_increment_ref_count(make_type_name_string(type3_398,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value322=make_define_var(type3_398,var_name_397,(_Bool)0,info))));
        (__right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buf_400=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 121, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_400,"(");
        if(        type2_383->mAnyClass&&type2_383->mAnyOriginalType) {
            any_type_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383->mAnyOriginalType));
            any_type_402->mPointerNum=1;
            any_type_402->mHeap=1;
            multiple_assign_var4=((struct tuple4$4charphcharphcharphcharph*)(__right_value326=create_vtable((struct sType*)come_increment_ref_count(any_type_402),info)));
            finalizer_name_403=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            cloner_name_404=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            get_hash_key_name_405=(char*)come_increment_ref_count(multiple_assign_var4->v3);
            equaler_name_406=(char*)come_increment_ref_count(multiple_assign_var4->v4);
            come_call_finalizer3(__right_value326,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
            any_type_402->mPointerNum--;
            any_type_name_407=(char*)come_increment_ref_count(make_type_name_string(any_type_402,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj109=obj_401;
            obj_401=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",var_name_397,any_type_name_407,any_type_name_407,((char*)(__right_value328=buffer_to_string(num_string_374))),info->sname,info->sline,any_type_name_407,finalizer_name_403,cloner_name_404,get_hash_key_name_405,equaler_name_406));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            any_type_402->mPointerNum++;
            __dec_obj110=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, any_type_402));
            come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(any_type_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            (finalizer_name_403 = come_decrement_ref_count2(finalizer_name_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (cloner_name_404 = come_decrement_ref_count2(cloner_name_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (get_hash_key_name_405 = come_decrement_ref_count2(get_hash_key_name_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (equaler_name_406 = come_decrement_ref_count2(equaler_name_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (any_type_name_407 = come_decrement_ref_count2(any_type_name_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        generics_any_child_384) {
            any_type_408=(struct sType*)come_increment_ref_count(no_solved_type_385);
            any_type_408->mPointerNum=(_Bool)1;
            multiple_assign_var5=((struct tuple4$4charphcharphcharphcharph*)(__right_value331=create_vtable((struct sType*)come_increment_ref_count(any_type_408),info)));
            finalizer_name_409=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            cloner_name_410=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            get_hash_key_name_411=(char*)come_increment_ref_count(multiple_assign_var5->v3);
            equaler_name_412=(char*)come_increment_ref_count(multiple_assign_var5->v4);
            come_call_finalizer3(__right_value331,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
            any_type_408->mPointerNum--;
            any_type_name_413=(char*)come_increment_ref_count(make_type_name_string(any_type_408,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj111=obj_401;
            obj_401=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",var_name_397,any_type_name_413,any_type_name_413,((char*)(__right_value333=buffer_to_string(num_string_374))),info->sname,info->sline,any_type_name_413,finalizer_name_409,cloner_name_410,get_hash_key_name_411,equaler_name_412));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            any_type_408->mPointerNum++;
            type2_383->mHeap=(_Bool)1;
            type2_383->mPointerNum++;
            if(            type2_383->mNoSolvedGenericsType) {
                type2_383->mNoSolvedGenericsType->mPointerNum++;
                type2_383->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
            __dec_obj112=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(any_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
            (finalizer_name_409 = come_decrement_ref_count2(finalizer_name_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (cloner_name_410 = come_decrement_ref_count2(cloner_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (get_hash_key_name_411 = come_decrement_ref_count2(get_hash_key_name_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (equaler_name_412 = come_decrement_ref_count2(equaler_name_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (any_type_name_413 = come_decrement_ref_count2(any_type_name_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        type2_383->mCreateVTable||(type2_383->mClass->mDynamic&&type2_383->mPointerNum==0)) {
            any_type_414=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
            any_type_414->mPointerNum=1;
            any_type_414->mHeap=1;
            multiple_assign_var6=((struct tuple4$4charphcharphcharphcharph*)(__right_value337=create_vtable((struct sType*)come_increment_ref_count(any_type_414),info)));
            finalizer_name_415=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            cloner_name_416=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            get_hash_key_name_417=(char*)come_increment_ref_count(multiple_assign_var6->v3);
            equaler_name_418=(char*)come_increment_ref_count(multiple_assign_var6->v4);
            come_call_finalizer3(__right_value337,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
            any_type_414->mPointerNum--;
            any_type_name_419=(char*)come_increment_ref_count(make_type_name_string(any_type_414,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj113=obj_401;
            obj_401=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",var_name_397,any_type_name_419,any_type_name_419,((char*)(__right_value339=buffer_to_string(num_string_374))),info->sname,info->sline,any_type_name_419,finalizer_name_415,cloner_name_416,get_hash_key_name_417,equaler_name_418));
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            any_type_414->mPointerNum++;
            __dec_obj114=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, any_type_414));
            come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(any_type_414,sType_finalize, 0, 0, 0, 0, (void*)0);
            (finalizer_name_415 = come_decrement_ref_count2(finalizer_name_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (cloner_name_416 = come_decrement_ref_count2(cloner_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (get_hash_key_name_417 = come_decrement_ref_count2(get_hash_key_name_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (equaler_name_418 = come_decrement_ref_count2(equaler_name_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (any_type_name_419 = come_decrement_ref_count2(any_type_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            finalizer_name_420="(void*)0";
            cloner_name_421="(void*)0";
            get_hash_key_name_422="(void*)0";
            equaler_name_423="(void*)0";
            __dec_obj115=obj_401;
            obj_401=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",var_name_397,type_name_394,type_name_394,((char*)(__right_value342=buffer_to_string(num_string_374))),info->sname,info->sline,type_name3_399,finalizer_name_420,cloner_name_421,get_hash_key_name_422,equaler_name_423));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_str(buf_400,obj_401);
        buffer_append_str(buf_400,",");
        klass_424=type3_398->mClass;
        i_425=0;
        for(        o2_saved_426=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_372)),it_429=list$1tuple2$2charphsNodephphp_begin((o2_saved_426));        !list$1tuple2$2charphsNodephphp_end((o2_saved_426));        it_429=list$1tuple2$2charphsNodephphp_next((o2_saved_426))        ){
            multiple_assign_var7=it_429;
            name_432=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            exp_433=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_434=node_compile(exp_433,info);
            if(            !Value_434) {
                __result275__ = (_Bool)0;
                (name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((exp_433) ? exp_433 = come_decrement_ref_count2(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(o2_saved_426,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_397 = come_decrement_ref_count2(var_name_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_398,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name3_399 = come_decrement_ref_count2(type_name3_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(buf_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
                (obj_401 = come_decrement_ref_count2(obj_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(initializer_372,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_374,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_383,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_394 = come_decrement_ref_count2(type_name_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name2_395 = come_decrement_ref_count2(type_name2_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result275__;
            }
            else {
            }
            come_value2_435=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            left_type_436=((void*)0);
            for(            o2_saved_437=(struct list$1voidph*)come_increment_ref_count((klass_424->mFields)),it2_438=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_437)));            !list$1voidphp_end((o2_saved_437));            it2_438=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_437)))            ){
                multiple_assign_var8=it2_438;
                field_name_439=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                field_type_440=(struct sType*)come_increment_ref_count(multiple_assign_var8->v2);
                if(                string_operator_equals(name_432,field_name_439)) {
                    __dec_obj116=left_type_436;
                    left_type_436=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_440));
                    come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (field_name_439 = come_decrement_ref_count2(field_name_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type_440,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                (field_name_439 = come_decrement_ref_count2(field_name_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_440,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_437,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_436==((void*)0)) {
                multiple_assign_var9=((struct tuple2$2intcharph*)(__right_value346=err_msg(info,"field %s is not defined",name_432)));
                come_exception_var_1_441=multiple_assign_var9->v1;
                Err_442=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                if(                (_if_conditional5=(Err_442)),                come_call_finalizer3(__right_value346,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    __result276__ = (_Bool)1;
                    (Err_442 = come_decrement_ref_count2(Err_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((exp_433) ? exp_433 = come_decrement_ref_count2(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(come_value2_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_426,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_397 = come_decrement_ref_count2(var_name_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type3_398,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (type_name3_399 = come_decrement_ref_count2(type_name3_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(buf_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    (obj_401 = come_decrement_ref_count2(obj_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(initializer_372,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(num_string_374,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_383,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(no_solved_type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (type_name_394 = come_decrement_ref_count2(type_name_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name2_395 = come_decrement_ref_count2(type_name2_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result276__;
                }
                else {
                }
                (Err_442 = come_decrement_ref_count2(Err_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            right_type_443=(struct sType*)come_increment_ref_count(come_value2_435->type);
            multiple_assign_var10=((struct tuple2$2boolcharph*)(__right_value349=check_assign_type(((char*)(__right_value348=xsprintf("\%s is assining to",((char*)(__right_value347=string_to_string(name_432)))))),left_type_436,right_type_443,come_value2_435,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_2_444=multiple_assign_var10->v1;
            Err_445=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            (_if_conditional6=(Err_445)),            (__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value349,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result277__ = (_Bool)1;
                (name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((exp_433) ? exp_433 = come_decrement_ref_count2(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_value2_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                (Err_445 = come_decrement_ref_count2(Err_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(o2_saved_426,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_397 = come_decrement_ref_count2(var_name_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_398,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name3_399 = come_decrement_ref_count2(type_name3_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(buf_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
                (obj_401 = come_decrement_ref_count2(obj_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(initializer_372,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_374,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_383,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_394 = come_decrement_ref_count2(type_name_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name2_395 = come_decrement_ref_count2(type_name2_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result277__;
            }
            else {
            }
            __dec_obj119=right_type_443;
            right_type_443=(struct sType*)come_increment_ref_count(come_value2_435->type);
            come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            if(            left_type_436->mHeap&&right_type_443->mHeap&&left_type_436->mPointerNum>0&&right_type_443->mPointerNum>0) {
                c_value_446=(char*)come_increment_ref_count(increment_ref_count_object(left_type_436,come_value2_435->c_value,info));
                buffer_append_format(buf_400,"%s->%s = %s",var_name_397,name_432,c_value_446);
                (c_value_446 = come_decrement_ref_count2(c_value_446, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_format(buf_400,"%s->%s = %s",var_name_397,name_432,come_value2_435->c_value);
            }
            buffer_append_str(buf_400,",");
            i_425++;
            (name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_433) ? exp_433 = come_decrement_ref_count2(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value2_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            (Err_445 = come_decrement_ref_count2(Err_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(o2_saved_426,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_400,var_name_397);
        buffer_append_str(buf_400,")");
        __dec_obj120=come_value_373->c_value;
        come_value_373->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_400));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        type2_383->mHeap=(_Bool)1;
        type2_383->mPointerNum++;
        if(        type2_383->mNoSolvedGenericsType) {
            type2_383->mNoSolvedGenericsType->mPointerNum++;
            type2_383->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj121=come_value_373->type;
        come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
        come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_373->var=((void*)0);
        append_object_to_right_values2(come_value_373,(struct sType*)come_increment_ref_count(type2_383),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_373->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_373));
        (var_name_397 = come_decrement_ref_count2(var_name_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type3_398,sType_finalize, 0, 0, 0, 0, (void*)0);
        (type_name3_399 = come_decrement_ref_count2(type_name3_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(buf_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (obj_401 = come_decrement_ref_count2(obj_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        type3_450=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
        type3_450->mPointerNum++;
        type3_450->mHeap=(_Bool)1;
        if(        type3_450->mNoSolvedGenericsType) {
            type3_450->mNoSolvedGenericsType->mPointerNum++;
            type3_450->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        type_name3_451=(char*)come_increment_ref_count(make_type_name_string(type3_450,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        type2_383->mAnyClass&&type2_383->mAnyOriginalType) {
            any_type_453=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383->mAnyOriginalType));
            any_type_453->mPointerNum=1;
            any_type_453->mHeap=(_Bool)1;
            multiple_assign_var11=((struct tuple4$4charphcharphcharphcharph*)(__right_value359=create_vtable((struct sType*)come_increment_ref_count(any_type_453),info)));
            finalizer_name_454=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            cloner_name_455=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            get_hash_key_name_456=(char*)come_increment_ref_count(multiple_assign_var11->v3);
            equaler_name_457=(char*)come_increment_ref_count(multiple_assign_var11->v4);
            come_call_finalizer3(__right_value359,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
            any_type_453->mPointerNum--;
            any_type_name_458=(char*)come_increment_ref_count(make_type_name_string(any_type_453,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj125=come_value_373->c_value;
            come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",any_type_name_458,any_type_name_458,((char*)(__right_value361=buffer_to_string(num_string_374))),info->sname,info->sline,any_type_name_458,finalizer_name_454,cloner_name_455,get_hash_key_name_456,equaler_name_457));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            type2_383->mPointerNum--;
            any_type_453->mPointerNum++;
            __dec_obj126=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, any_type_453));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(any_type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
            (finalizer_name_454 = come_decrement_ref_count2(finalizer_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (cloner_name_455 = come_decrement_ref_count2(cloner_name_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (get_hash_key_name_456 = come_decrement_ref_count2(get_hash_key_name_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (equaler_name_457 = come_decrement_ref_count2(equaler_name_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (any_type_name_458 = come_decrement_ref_count2(any_type_name_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        generics_any_child_384) {
            any_type_459=(struct sType*)come_increment_ref_count(no_solved_type_385);
            __dec_obj127=any_type_459->mAnyOriginalType;
            any_type_459->mAnyOriginalType=((void*)0);
            come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            any_type_459->mPointerNum=1;
            any_type_459->mHeap=(_Bool)1;
            multiple_assign_var12=((struct tuple4$4charphcharphcharphcharph*)(__right_value364=create_vtable((struct sType*)come_increment_ref_count(any_type_459),info)));
            finalizer_name_460=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            cloner_name_461=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            get_hash_key_name_462=(char*)come_increment_ref_count(multiple_assign_var12->v3);
            equaler_name_463=(char*)come_increment_ref_count(multiple_assign_var12->v4);
            come_call_finalizer3(__right_value364,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
            any_type_459->mPointerNum--;
            any_type_name_464=(char*)come_increment_ref_count(make_type_name_string(any_type_459,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj128=come_value_373->c_value;
            come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_394,type_name_394,((char*)(__right_value366=buffer_to_string(num_string_374))),info->sname,info->sline,type_name3_451,finalizer_name_460,cloner_name_461,get_hash_key_name_462,equaler_name_463));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            any_type_459->mPointerNum++;
            type2_383->mHeap=(_Bool)1;
            type2_383->mPointerNum++;
            if(            type2_383->mNoSolvedGenericsType) {
                type2_383->mNoSolvedGenericsType->mPointerNum++;
                type2_383->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
            __dec_obj129=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
            come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(any_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
            (finalizer_name_460 = come_decrement_ref_count2(finalizer_name_460, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (cloner_name_461 = come_decrement_ref_count2(cloner_name_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (get_hash_key_name_462 = come_decrement_ref_count2(get_hash_key_name_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (equaler_name_463 = come_decrement_ref_count2(equaler_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (any_type_name_464 = come_decrement_ref_count2(any_type_name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        type2_383->mCreateVTable||(type2_383->mClass->mDynamic&&type2_383->mPointerNum==0)) {
            any_type_465=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
            any_type_465->mPointerNum=1;
            any_type_465->mHeap=(_Bool)1;
            multiple_assign_var13=((struct tuple4$4charphcharphcharphcharph*)(__right_value370=create_vtable((struct sType*)come_increment_ref_count(any_type_465),info)));
            finalizer_name_466=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            cloner_name_467=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            get_hash_key_name_468=(char*)come_increment_ref_count(multiple_assign_var13->v3);
            equaler_name_469=(char*)come_increment_ref_count(multiple_assign_var13->v4);
            come_call_finalizer3(__right_value370,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
            any_type_465->mPointerNum--;
            any_type_name_470=(char*)come_increment_ref_count(make_type_name_string(any_type_465,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj130=come_value_373->c_value;
            come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",any_type_name_470,any_type_name_470,((char*)(__right_value372=buffer_to_string(num_string_374))),info->sname,info->sline,any_type_name_470,finalizer_name_466,cloner_name_467,get_hash_key_name_468,equaler_name_469));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            type2_383->mPointerNum--;
            any_type_465->mPointerNum++;
            __dec_obj131=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, any_type_465));
            come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(any_type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
            (finalizer_name_466 = come_decrement_ref_count2(finalizer_name_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (cloner_name_467 = come_decrement_ref_count2(cloner_name_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (get_hash_key_name_468 = come_decrement_ref_count2(get_hash_key_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (equaler_name_469 = come_decrement_ref_count2(equaler_name_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (any_type_name_470 = come_decrement_ref_count2(any_type_name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            finalizer_name_471="(void*)0";
            cloner_name_472="(void*)0";
            get_hash_key_name_473="(void*)0";
            equaler_name_474="(void*)0";
            __dec_obj132=come_value_373->c_value;
            come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_394,type_name_394,((char*)(__right_value375=buffer_to_string(num_string_374))),info->sname,info->sline,type_name3_451,finalizer_name_471,cloner_name_472,get_hash_key_name_473,equaler_name_474));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            type2_383->mHeap=(_Bool)1;
            type2_383->mPointerNum++;
            if(            type2_383->mNoSolvedGenericsType) {
                type2_383->mNoSolvedGenericsType->mPointerNum++;
                type2_383->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
            __dec_obj133=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
            come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_373->var=((void*)0);
        append_object_to_right_values2(come_value_373,(struct sType*)come_increment_ref_count(type2_383),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_373->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_373));
        come_call_finalizer3(type3_450,sType_finalize, 0, 0, 0, 0, (void*)0);
        (type_name3_451 = come_decrement_ref_count2(type_name3_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (obj_452 = come_decrement_ref_count2(obj_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result279__ = (_Bool)1;
    come_call_finalizer3(initializer_372,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_374,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_383,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(no_solved_type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_394 = come_decrement_ref_count2(type_name_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (type_name2_395 = come_decrement_ref_count2(type_name2_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result279__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj70;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj70=self->sname;
            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result238__;
void* __right_value274 = (void*)0;
struct sType* result_349;
void* __right_value275 = (void*)0;
struct sType* __dec_obj71;
void* __right_value276 = (void*)0;
struct sType* __dec_obj72;
void* __right_value277 = (void*)0;
struct sType* __dec_obj73;
void* __right_value278 = (void*)0;
struct sType* __dec_obj74;
void* __right_value285 = (void*)0;
struct list$1voidph* __dec_obj78;
void* __right_value293 = (void*)0;
struct list$1sNodeph* __dec_obj82;
void* __right_value294 = (void*)0;
struct list$1voidph* __dec_obj83;
void* __right_value301 = (void*)0;
struct list$1charph* __dec_obj87;
void* __right_value302 = (void*)0;
struct sType* __dec_obj88;
void* __right_value303 = (void*)0;
struct sNode* __dec_obj89;
void* __right_value304 = (void*)0;
struct sNode* __dec_obj90;
void* __right_value305 = (void*)0;
char* __dec_obj91;
void* __right_value306 = (void*)0;
char* __dec_obj92;
void* __right_value307 = (void*)0;
char* __dec_obj93;
void* __right_value308 = (void*)0;
char* __dec_obj94;
struct sType* __result252__;
    if(    self==(void*)0) {
        __result238__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_349=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_349->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj71=result_349->mNoSolvedGenericsType;
        result_349->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj72=result_349->mOriginalLoadVarType;
        result_349->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj73=result_349->mAnyOriginalType;
        result_349->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj74=result_349->mChannelType;
        result_349->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj78=result_349->mGenericsTypes;
        result_349->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj78,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj82=result_349->mArrayNum;
        result_349->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj82,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj83=result_349->mParamTypes;
        result_349->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj83,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj87=result_349->mParamNames;
        result_349->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj87,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj88=result_349->mResultType;
        result_349->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_349->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_349->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_349->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_349->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_349->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_349->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_349->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_349->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_349->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_349->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_349->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_349->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_349->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_349->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_349->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_349->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_349->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_349->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_349->mException=self->mException;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj89=result_349->mSizeNum;
        result_349->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj90=result_349->mAlignas;
        result_349->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_349->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_349->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_349->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_349->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_349->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj91=result_349->mOriginalTypeName;
        result_349->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_349->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_349->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_349->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_349->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj92=result_349->mAsmName;
        result_349->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_349->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_349->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_349->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_349->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_349->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj93=result_349->mTupleName;
        result_349->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj94=result_349->mAttribute;
        result_349->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_349->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_349->mDynamic=self->mDynamic;
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_349;
    come_call_finalizer3(result_349,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_342;
    result_342=0;
    result_342+=int_get_hash_key(((int)self->mClass));
    result_342+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_342+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_342+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_342+=int_get_hash_key(((int)self->mChannelType));
    result_342+=int_get_hash_key(((int)self->mAnyClass));
    result_342+=int_get_hash_key(((int)self->mGenericsTypes));
    result_342+=int_get_hash_key(((int)self->mArrayNum));
    result_342+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_342+=int_get_hash_key(((int)self->mParamTypes));
    result_342+=int_get_hash_key(((int)self->mParamNames));
    result_342+=int_get_hash_key(((int)self->mResultType));
    result_342+=int_get_hash_key(((int)self->mVarArgs));
    result_342+=int_get_hash_key(((int)self->mUnsigned));
    result_342+=int_get_hash_key(((int)self->mShort));
    result_342+=int_get_hash_key(((int)self->mLong));
    result_342+=int_get_hash_key(((int)self->mLongLong));
    result_342+=int_get_hash_key(((int)self->mConstant));
    result_342+=int_get_hash_key(((int)self->mAtomic));
    result_342+=int_get_hash_key(((int)self->mRegister));
    result_342+=int_get_hash_key(((int)self->mVolatile));
    result_342+=int_get_hash_key(((int)self->mStatic));
    result_342+=int_get_hash_key(((int)self->mUniq));
    result_342+=int_get_hash_key(((int)self->mRecord));
    result_342+=int_get_hash_key(((int)self->mExtern));
    result_342+=int_get_hash_key(((int)self->mRestrict));
    result_342+=int_get_hash_key(((int)self->mImmutable));
    result_342+=int_get_hash_key(((int)self->mHeap));
    result_342+=int_get_hash_key(((int)self->mChannel));
    result_342+=int_get_hash_key(((int)self->mNoHeap));
    result_342+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_342+=int_get_hash_key(((int)self->mException));
    result_342+=int_get_hash_key(((int)self->mSizeNum));
    result_342+=int_get_hash_key(((int)self->mAlignas));
    result_342+=int_get_hash_key(((int)self->mPointerNum));
    result_342+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_342+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_342+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_342+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_342+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_342+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_342+=int_get_hash_key(((int)self->mAllocaValue));
    result_342+=int_get_hash_key(((int)self->mInline));
    result_342+=int_get_hash_key(((int)self->mNullValue));
    result_342+=int_get_hash_key(((int)self->mGuardValue));
    result_342+=int_get_hash_key(((int)self->mAsmName));
    result_342+=int_get_hash_key(((int)self->mArrayPointerType));
    result_342+=int_get_hash_key(((int)self->mLambdaArray));
    result_342+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_342+=int_get_hash_key(((int)self->mTypedef));
    result_342+=int_get_hash_key(((int)self->mMultipleTypes));
    result_342+=int_get_hash_key(((int)self->mOriginIsArray));
    result_342+=int_get_hash_key(((int)self->mTupleName));
    result_342+=int_get_hash_key(((int)self->mAttribute));
    result_342+=int_get_hash_key(((int)self->mGenerate));
    result_342+=int_get_hash_key(((int)self->mCreateVTable));
    result_342+=int_get_hash_key(((int)self->mDynamic));
    return result_342;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
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
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
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
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
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
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
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
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
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
    if(    !list$1voidphp_equals(left->mFields,right->mFields)) {
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

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_343;
struct list_item$1voidph* it2_344;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_343=left->head;
    it2_344=right->head;
    while(it_343!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_343->item, it2_344->item)) {
            return (_Bool)0;
        }
        it_343=it_343->next;
        it2_344=it2_344->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_345;
struct list_item$1sNodeph* it2_346;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_345=left->head;
    it2_346=right->head;
    while(it_345!=((void*)0)) {
        if(        !sNode_equals(it_345->item,it2_346->item)) {
            return (_Bool)0;
        }
        it_345=it_345->next;
        it2_346=it2_346->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_347;
struct list_item$1charph* it2_348;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_347=left->head;
    it2_348=right->head;
    while(it_347!=((void*)0)) {
        if(        !string_equals(it_347->item,it2_348->item)) {
            return (_Bool)0;
        }
        it_347=it_347->next;
        it2_348=it2_348->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result239__;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1voidph* result_351;
struct list_item$1voidph* it_352;
void* __right_value284 = (void*)0;
struct list$1voidph* __result242__;
    if(    self==((void*)0)) {
        __result239__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_351=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_352=self->head;
    while(it_352!=((void*)0)) {
        list$1voidphp_add(result_351,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_352->item)));
        it_352=it_352->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_351;
    come_call_finalizer3(result_351,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_350;
    result_350=0;
    result_350+=int_get_hash_key(((int)self->head));
    result_350+=int_get_hash_key(((int)self->tail));
    result_350+=int_get_hash_key(((int)self->len));
    result_350+=int_get_hash_key(((int)self->it));
    return result_350;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result240__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
struct list_item$1voidph* litem_353;
void* __dec_obj75;
void* __right_value282 = (void*)0;
struct list_item$1voidph* litem_354;
void* __dec_obj76;
void* __right_value283 = (void*)0;
struct list_item$1voidph* litem_355;
void* __dec_obj77;
struct list$1voidph* __result241__;
    if(    self->len==0) {
        litem_353=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value281=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_353->prev=((void*)0);
        litem_353->next=((void*)0);
        __dec_obj75=litem_353->item;
        litem_353->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_353;
        self->head=litem_353;
    }
    else if(    self->len==1) {
        litem_354=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value282=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_354->prev=self->head;
        litem_354->next=((void*)0);
        __dec_obj76=litem_354->item;
        litem_354->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_354;
        self->head->next=litem_354;
    }
    else {
        litem_355=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value283=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_355->prev=self->tail;
        litem_355->next=((void*)0);
        __dec_obj77=litem_355->item;
        litem_355->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_355;
        self->tail=litem_355;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result243__;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1sNodeph* result_356;
struct list_item$1sNodeph* it_357;
void* __right_value292 = (void*)0;
struct list$1sNodeph* __result248__;
    if(    self==((void*)0)) {
        __result243__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    result_356=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_357=self->head;
    while(it_357!=((void*)0)) {
        list$1sNodephp_add(result_356,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_357->item)));
        it_357=it_357->next;
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_356;
    come_call_finalizer3(result_356,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result244__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct list_item$1sNodeph* litem_358;
struct sNode* __dec_obj79;
void* __right_value289 = (void*)0;
struct list_item$1sNodeph* litem_359;
struct sNode* __dec_obj80;
void* __right_value290 = (void*)0;
struct list_item$1sNodeph* litem_360;
struct sNode* __dec_obj81;
struct list$1sNodeph* __result245__;
    if(    self->len==0) {
        litem_358=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value288=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=((void*)0);
        litem_358->next=((void*)0);
        __dec_obj79=litem_358->item;
        litem_358->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_358;
        self->head=litem_358;
    }
    else if(    self->len==1) {
        litem_359=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value289=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=self->head;
        litem_359->next=((void*)0);
        __dec_obj80=litem_359->item;
        litem_359->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_359;
        self->head->next=litem_359;
    }
    else {
        litem_360=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value290=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=self->tail;
        litem_360->next=((void*)0);
        __dec_obj81=litem_360->item;
        litem_360->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_360;
        self->tail=litem_360;
    }
    self->len++;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result246__;
void* __right_value291 = (void*)0;
struct sNode* result_361;
struct sNode* __result247__;
    if(    self==(void*)0) {
        __result246__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    result_361=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_361->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_361->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_361->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_361->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_361->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_361->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_361->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_361->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_361->kind=self->kind;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_361;
    ((result_361) ? result_361 = come_decrement_ref_count2(result_361, ((struct sNode*)result_361)->finalize, ((struct sNode*)result_361)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result249__;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1charph* result_362;
struct list_item$1charph* it_363;
void* __right_value300 = (void*)0;
struct list$1charph* __result251__;
    if(    self==((void*)0)) {
        __result249__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    result_362=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_363=self->head;
    while(it_363!=((void*)0)) {
        list$1charphp_add(result_362,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_363->item)));
        it_363=it_363->next;
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_362;
    come_call_finalizer3(result_362,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
struct list_item$1charph* litem_364;
char* __dec_obj84;
void* __right_value298 = (void*)0;
struct list_item$1charph* litem_365;
char* __dec_obj85;
void* __right_value299 = (void*)0;
struct list_item$1charph* litem_366;
char* __dec_obj86;
struct list$1charph* __result250__;
    if(    self->len==0) {
        litem_364=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value297=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_364->prev=((void*)0);
        litem_364->next=((void*)0);
        __dec_obj84=litem_364->item;
        litem_364->item=(char*)come_increment_ref_count(item);
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_364;
        self->head=litem_364;
    }
    else if(    self->len==1) {
        litem_365=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value298=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_365->prev=self->head;
        litem_365->next=((void*)0);
        __dec_obj85=litem_365->item;
        litem_365->item=(char*)come_increment_ref_count(item);
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_365;
        self->head->next=litem_365;
    }
    else {
        litem_366=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value299=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_366->prev=self->tail;
        litem_366->next=((void*)0);
        __dec_obj86=litem_366->item;
        litem_366->item=(char*)come_increment_ref_count(item);
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_366;
        self->tail=litem_366;
    }
    self->len++;
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_367;
struct list_item$1tuple2$2charphsNodephph* prev_it_368;
    it_367=self->head;
    while(it_367!=((void*)0)) {
        prev_it_368=it_367;
        it_367=it_367->next;
        come_call_finalizer3(prev_it_368,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj97;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj97=self->item;
            come_call_finalizer3(__dec_obj97,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj98;
struct sNode* __dec_obj99;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj98=self->v1;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj99=self->v2;
            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void sNewNode_finalize(struct sNewNode* self){
char* __dec_obj100;
struct sType* __dec_obj101;
struct list$1tuple2$2charphsNodephph* __dec_obj102;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj100=self->sname;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj101=self->type;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj102=self->initializer;
            come_call_finalizer3(__dec_obj102,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_369;
struct list_item$1tuple2$2charphsNodephph* prev_it_370;
    it_369=self->head;
    while(it_369!=((void*)0)) {
        prev_it_370=it_369;
        it_369=it_369->next;
        come_call_finalizer3(prev_it_370,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_376;
struct sNode* __result255__;
struct sNode* __result256__;
struct sNode* result_377;
struct sNode* __result257__;
result_376 = (void*)0;
result_377 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_376,0,sizeof(struct sNode*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_376;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->it=self->head;
    if(    self->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_377,0,sizeof(struct sNode*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_377;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_379;
struct sNode* __result258__;
struct sNode* __result259__;
struct sNode* result_380;
struct sNode* __result260__;
result_379 = (void*)0;
result_380 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_379,0,sizeof(struct sNode*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_379;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_380,0,sizeof(struct sNode*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_380;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj103;
struct sType* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj103=self->c_value;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj104=self->type;
            come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj105=self->c_value_without_right_value_objects;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj106=self->c_value_without_cast_object_value;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_387;
void* __result262__;
void* __result263__;
void* result_388;
void* __result264__;
result_387 = (void*)0;
result_388 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_387,0,sizeof(void*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_387;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->it=self->head;
    if(    self->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_388,0,sizeof(void*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_388;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_390;
void* __result265__;
void* __result266__;
void* result_391;
void* __result267__;
result_390 = (void*)0;
result_391 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_390,0,sizeof(void*));
        __result265__ = gComeFunResultObject = __result_obj__ = result_390;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result266__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    memset(&result_391,0,sizeof(void*));
    __result267__ = gComeFunResultObject = __result_obj__ = result_391;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_392;
struct list_item$1sNodeph* prev_it_393;
struct list$1sNodeph* __result268__;
    it_392=self->head;
    while(it_392!=((void*)0)) {
        prev_it_393=it_392;
        it_392=it_392->next;
        come_call_finalizer3(prev_it_393,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_427;
struct tuple2$2charphsNodeph* __result269__;
struct tuple2$2charphsNodeph* __result270__;
struct tuple2$2charphsNodeph* result_428;
struct tuple2$2charphsNodeph* __result271__;
result_427 = (void*)0;
result_428 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_427,0,sizeof(struct tuple2$2charphsNodeph*));
        __result269__ = gComeFunResultObject = __result_obj__ = result_427;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    self->it=self->head;
    if(    self->it) {
        __result270__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    memset(&result_428,0,sizeof(struct tuple2$2charphsNodeph*));
    __result271__ = gComeFunResultObject = __result_obj__ = result_428;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_430;
struct tuple2$2charphsNodeph* __result272__;
struct tuple2$2charphsNodeph* __result273__;
struct tuple2$2charphsNodeph* result_431;
struct tuple2$2charphsNodeph* __result274__;
result_430 = (void*)0;
result_431 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_430,0,sizeof(struct tuple2$2charphsNodeph*));
        __result272__ = gComeFunResultObject = __result_obj__ = result_430;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result273__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    memset(&result_431,0,sizeof(struct tuple2$2charphsNodeph*));
    __result274__ = gComeFunResultObject = __result_obj__ = result_431;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self){
char* __dec_obj117;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj117=self->v2;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self){
char* __dec_obj118;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj118=self->v2;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
struct list_item$1CVALUEph* litem_447;
struct CVALUE* __dec_obj122;
void* __right_value354 = (void*)0;
struct list_item$1CVALUEph* litem_448;
struct CVALUE* __dec_obj123;
void* __right_value355 = (void*)0;
struct list_item$1CVALUEph* litem_449;
struct CVALUE* __dec_obj124;
struct list$1CVALUEph* __result278__;
    if(    self->len==0) {
        litem_447=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value353=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_447->prev=((void*)0);
        litem_447->next=((void*)0);
        __dec_obj122=litem_447->item;
        litem_447->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj122,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_447;
        self->head=litem_447;
    }
    else if(    self->len==1) {
        litem_448=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value354=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_448->prev=self->head;
        litem_448->next=((void*)0);
        __dec_obj123=litem_448->item;
        litem_448->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_448;
        self->head->next=litem_448;
    }
    else {
        litem_449=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value355=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_449->prev=self->tail;
        litem_449->next=((void*)0);
        __dec_obj124=litem_449->item;
        litem_449->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_449;
        self->tail=litem_449;
    }
    self->len++;
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj134;
void* __right_value380 = (void*)0;
struct sType* __dec_obj135;
struct sImplementsNode* __result280__;
    ((struct sNodeBase*)(__right_value378=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value378,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj134=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_exp));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj135=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type));
    come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    ((obj_exp) ? obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
char* __result281__;
    __result281__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value381=__builtin_string("sImplementsNode")));
    (__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result281__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value382 = (void*)0;
struct sNode* obj_exp_475;
void* __right_value383 = (void*)0;
struct sType* inf_type_476;
_Bool Value_477;
_Bool __result282__;
void* __right_value384 = (void*)0;
struct CVALUE* come_value_478;
void* __right_value385 = (void*)0;
struct sType* type_479;
struct sClass* klass_480;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct CVALUE* come_value2_481;
void* __right_value388 = (void*)0;
struct sType* type2_482;
void* __right_value389 = (void*)0;
char* type_name_483;
void* __right_value390 = (void*)0;
char* type_name2_484;
int inf_num_stack_486;
void* __right_value391 = (void*)0;
char* buf_487;
void* __right_value392 = (void*)0;
char* buf2_488;
void* __right_value393 = (void*)0;
char* c_value_489;
void* __right_value394 = (void*)0;
struct sType* typeX_490;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
int i_491;
void* __right_value397 = (void*)0;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_495=0;
struct sType* field_type_496=0;
void* __right_value398 = (void*)0;
char* method_name_497;
void* __right_value399 = (void*)0;
struct sFun* fun_498;
void* __right_value400 = (void*)0;
struct sType* type2_501;
void* __right_value401 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var15 = (void*)0;
struct sFun* fun2_502=0;
char* real_fun_name_503=0;
char* __dec_obj139;
void* __right_value402 = (void*)0;
struct sType* type2_504;
void* __right_value403 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var16 = (void*)0;
struct sFun* fun2_505=0;
char* real_fun_name_506=0;
char* __dec_obj140;
void* __right_value404 = (void*)0;
struct sClass* klass2_507;
void* __right_value405 = (void*)0;
_Bool _while_condtional1;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* __dec_obj141;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
char* __dec_obj142;
void* __right_value411 = (void*)0;
struct sType* type3_508;
void* __right_value412 = (void*)0;
struct sType* __dec_obj143;
_Bool __result289__;
    obj_exp_475=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
    inf_type_476=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
    Value_477=node_compile(obj_exp_475,info);
    if(    !Value_477) {
        __result282__ = (_Bool)0;
        ((obj_exp_475) ? obj_exp_475 = come_decrement_ref_count2(obj_exp_475, ((struct sNode*)obj_exp_475)->finalize, ((struct sNode*)obj_exp_475)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(inf_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result282__;
    }
    else {
    }
    come_value_478=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_479=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_478->type));
    type_479->mPointerNum--;
    type_479->mHeap=(_Bool)0;
    klass_480=inf_type_476->mClass;
    come_value2_481=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 408, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_482=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_476));
    type_name_483=(char*)come_increment_ref_count(make_type_name_string(inf_type_476,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_484=(char*)come_increment_ref_count(make_type_name_string(type_479,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_485=0;
    ++inf_num_485;
    inf_num_stack_486=inf_num_485;
    buf_487=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_483,inf_num_stack_486));
    add_come_code_at_function_head(info,buf_487);
    buf2_488=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_484,inf_num_stack_486));
    add_come_code_at_function_head(info,buf2_488);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0);\n",inf_num_stack_486,type_name_483,type_name_483,info->sname,info->sline,type_name_483);
    c_value_489=(char*)come_increment_ref_count(increment_ref_count_object(come_value_478->type,come_value_478->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack_486,c_value_489);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack_486,inf_num_stack_486);
    typeX_490=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_479));
    typeX_490->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(__right_value395=create_finalizer_automatically(typeX_490,"finalize",info)));
    come_call_finalizer3(__right_value395,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    ((struct tuple2$2sFunpcharph*)(__right_value396=create_cloner_automatically(typeX_490,"clone",info)));
    come_call_finalizer3(__right_value396,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    i_491=1;    i_491<list$1voidphp_length(klass_480->mFields);    i_491++    ){
        multiple_assign_var14=((struct tuple2$2charphsTypeph*)((void*)(__right_value397=list$1voidphp_operator_load_element(klass_480->mFields,i_491))));
        name_495=(char*)come_increment_ref_count(multiple_assign_var14->v1);
        field_type_496=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
        come_call_finalizer3(__right_value397,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        method_name_497=(char*)come_increment_ref_count(create_method_name(type_479,(_Bool)0,name_495,info,(_Bool)1));
        fun_498=((struct sFun*)((void*)(__right_value399=map$2voidphvoidphp_at(info->funcs,method_name_497,((void*)0)))));
        come_call_finalizer3(__right_value399,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_498==((void*)0)&&string_operator_equals(name_495,"to_string")) {
            type2_501=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_479));
            type2_501->mPointerNum++;
            multiple_assign_var15=((struct tuple2$2sFunpcharph*)(__right_value401=create_to_string_automatically(type2_501,name_495,info)));
            fun2_502=multiple_assign_var15->v1;
            real_fun_name_503=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            come_call_finalizer3(__right_value401,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            fun_498=fun2_502;
            __dec_obj139=method_name_497;
            method_name_497=(char*)come_increment_ref_count(real_fun_name_503);
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(type2_501,sType_finalize, 0, 0, 0, 0, (void*)0);
            (real_fun_name_503 = come_decrement_ref_count2(real_fun_name_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        fun_498==((void*)0)&&string_operator_equals(name_495,"equals")) {
            type2_504=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_479));
            type2_504->mPointerNum++;
            multiple_assign_var16=((struct tuple2$2sFunpcharph*)(__right_value403=create_equals_automatically(type2_504,name_495,info)));
            fun2_505=multiple_assign_var16->v1;
            real_fun_name_506=(char*)come_increment_ref_count(multiple_assign_var16->v2);
            come_call_finalizer3(__right_value403,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            fun_498=fun2_505;
            __dec_obj140=method_name_497;
            method_name_497=(char*)come_increment_ref_count(real_fun_name_506);
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(type2_504,sType_finalize, 0, 0, 0, 0, (void*)0);
            (real_fun_name_506 = come_decrement_ref_count2(real_fun_name_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        fun_498==((void*)0)) {
            klass2_507=((struct sClass*)((void*)(__right_value404=map$2voidphvoidphp_operator_load_element(info->classes,type_479->mClass->mName))));
            come_call_finalizer3(__right_value404,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            while((_while_condtional1=(((struct sClass*)((void*)(__right_value405=map$2voidphvoidphp_operator_load_element(info->classes,klass2_507->mParentClassName)))))),            come_call_finalizer3(__right_value405,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _while_condtional1) {
                klass2_507=((struct sClass*)((void*)(__right_value406=map$2voidphvoidphp_operator_load_element(info->classes,klass2_507->mParentClassName))));
                come_call_finalizer3(__right_value406,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                __dec_obj141=method_name_497;
                method_name_497=(char*)come_increment_ref_count(create_method_name_using_class(klass2_507,(_Bool)0,name_495,info,(_Bool)1));
                __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_498=((struct sFun*)((void*)(__right_value409=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value408=__builtin_string(method_name_497))),((void*)0)))));
                (__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value409,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                fun_498) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_486,name_495,method_name_497);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_486,name_495,method_name_497);
        }
        (name_495 = come_decrement_ref_count2(name_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(field_type_496,sType_finalize, 0, 0, 0, 0, (void*)0);
        (method_name_497 = come_decrement_ref_count2(method_name_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj142=come_value2_481->c_value;
    come_value2_481->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack_486));
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    type3_508=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_476));
    type3_508->mPointerNum++;
    type3_508->mHeap=(_Bool)1;
    type2_482->mHeap=(_Bool)1;
    __dec_obj143=come_value2_481->type;
    come_value2_481->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_482));
    come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_481->type->mPointerNum++;
    come_value2_481->var=((void*)0);
    append_object_to_right_values2(come_value2_481,(struct sType*)come_increment_ref_count(type3_508),info,(_Bool)0);
    add_come_last_code(info,"%s",come_value2_481->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_481));
    __result289__ = (_Bool)1;
    ((obj_exp_475) ? obj_exp_475 = come_decrement_ref_count2(obj_exp_475, ((struct sNode*)obj_exp_475)->finalize, ((struct sNode*)obj_exp_475)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(inf_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_483 = come_decrement_ref_count2(type_name_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (type_name2_484 = come_decrement_ref_count2(type_name2_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (buf_487 = come_decrement_ref_count2(buf_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (buf2_488 = come_decrement_ref_count2(buf2_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (c_value_489 = come_decrement_ref_count2(c_value_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(typeX_490,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_508,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result289__;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
char* __dec_obj136;
struct sNode* __dec_obj137;
struct sType* __dec_obj138;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj136=self->sname;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj137=self->obj_exp;
            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->obj_exp) ? self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        if(        self->inf_type==gComeFunResultObject) {
            __dec_obj138=self->inf_type;
            come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_492;
int i_493;
void* __result283__;
void* default_value_494;
void* __result284__;
default_value_494 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_492=self->head;
    i_493=0;
    while(it_492!=((void*)0)) {
        if(        position==i_493) {
            __result283__ = gComeFunResultObject = __result_obj__ = it_492->item;
            gComeFunResultObject = (void*)0;
            return __result283__;
        }
        it_492=it_492->next;
        i_493++;
    }
    memset(&default_value_494,0,sizeof(void*));
    __result284__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsTypeph*)default_value_494);
    come_call_finalizer3(default_value_494,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_499;
unsigned int it_500;
void* __result285__;
void* __result286__;
void* __result287__;
void* __result288__;
    hash_499=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_500=hash_499;
    while((_Bool)1) {
        if(        self->item_existance[it_500]) {
            if(            come_call_equals((void*)0, self->keys[it_500], key)) {
                __result285__ = gComeFunResultObject = __result_obj__ = self->items[it_500];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result285__;
            }
            it_500++;
            if(            it_500>=self->size) {
                it_500=0;
            }
            else if(            it_500==hash_499) {
                __result286__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result286__;
            }
        }
        else {
            __result287__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result287__;
        }
    }
    __result288__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value413 = (void*)0;
struct sTrueNode* __result290__;
    ((struct sNodeBase*)(__right_value413=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value413,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__=(void*)0;
void* __right_value414 = (void*)0;
char* __result291__;
    __result291__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value414=__builtin_string("sTrueNode")));
    (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct CVALUE* come_value_509;
void* __right_value417 = (void*)0;
char* __dec_obj145;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sType* __dec_obj146;
_Bool __result292__;
    come_value_509=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 557, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj145=come_value_509->c_value;
    come_value_509->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj146=come_value_509->type;
    come_value_509->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 560, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_509->var=((void*)0);
    add_come_last_code(info,"%s",come_value_509->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_509));
    __result292__ = (_Bool)1;
    come_call_finalizer3(come_value_509,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

static void sTrueNode_finalize(struct sTrueNode* self){
char* __dec_obj144;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj144=self->sname;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value424 = (void*)0;
struct sNode* __result295__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 573, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value421=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 573, "struct sTrueNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result295__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value424=_inf_value1));
    come_call_finalizer3(__right_value421,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value424) ? __right_value424 = come_decrement_ref_count2(__right_value424, ((struct sNode*)__right_value424)->finalize, ((struct sNode*)__right_value424)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__=(void*)0;
struct sTrueNode* __result293__;
void* __right_value422 = (void*)0;
struct sTrueNode* result_510;
void* __right_value423 = (void*)0;
char* __dec_obj147;
struct sTrueNode* __result294__;
    if(    self==(void*)0) {
        __result293__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    result_510=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_510->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj147=result_510->sname;
        result_510->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_510->sline_real=self->sline_real;
    }
    __result294__ = gComeFunResultObject = __result_obj__ = result_510;
    come_call_finalizer3(result_510,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value425 = (void*)0;
struct sFalseNode* __result296__;
    ((struct sNodeBase*)(__right_value425=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value425,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__=(void*)0;
void* __right_value426 = (void*)0;
char* __result297__;
    __result297__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value426=__builtin_string("sFalseNode")));
    (__right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result297__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct CVALUE* come_value_511;
void* __right_value429 = (void*)0;
char* __dec_obj149;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sType* __dec_obj150;
_Bool __result298__;
    come_value_511=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 590, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj149=come_value_511->c_value;
    come_value_511->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj150=come_value_511->type;
    come_value_511->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_511->var=((void*)0);
    add_come_last_code(info,"%s",come_value_511->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_511));
    __result298__ = (_Bool)1;
    come_call_finalizer3(come_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result298__;
}

static void sFalseNode_finalize(struct sFalseNode* self){
char* __dec_obj148;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj148=self->sname;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value436 = (void*)0;
struct sNode* __result301__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 606, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value433=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 606, "struct sFalseNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result301__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value436=_inf_value2));
    come_call_finalizer3(__right_value433,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value436) ? __right_value436 = come_decrement_ref_count2(__right_value436, ((struct sNode*)__right_value436)->finalize, ((struct sNode*)__right_value436)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__=(void*)0;
struct sFalseNode* __result299__;
void* __right_value434 = (void*)0;
struct sFalseNode* result_512;
void* __right_value435 = (void*)0;
char* __dec_obj151;
struct sFalseNode* __result300__;
    if(    self==(void*)0) {
        __result299__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    result_512=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_512->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj151=result_512->sname;
        result_512->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_512->sline_real=self->sline_real;
    }
    __result300__ = gComeFunResultObject = __result_obj__ = result_512;
    come_call_finalizer3(result_512,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sType* __dec_obj152;
struct sSizeOfNode* __result302__;
    ((struct sNodeBase*)(__right_value437=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value437,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj152=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj152,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value439 = (void*)0;
char* __result303__;
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value439=__builtin_string("sSizeOfNode")));
    (__right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_513;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct CVALUE* come_value_514;
void* __right_value442 = (void*)0;
struct sType* type2_515;
void* __right_value443 = (void*)0;
char* type_name_516;
void* __right_value444 = (void*)0;
char* __dec_obj155;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sType* __dec_obj156;
_Bool __result304__;
    type_513=self->type;
    come_value_514=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 627, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_515=(struct sType*)come_increment_ref_count(solve_generics(type_513,info->generics_type,info));
    type_name_516=(char*)come_increment_ref_count(make_type_name_string(type2_515,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj155=come_value_514->c_value;
    come_value_514->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_516));
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj156=come_value_514->type;
    come_value_514->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 634, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj156,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_514->type->mUnsigned=(_Bool)1;
    come_value_514->var=((void*)0);
    add_come_last_code(info,"%s",come_value_514->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_514));
    __result304__ = (_Bool)1;
    come_call_finalizer3(come_value_514,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_515,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_516 = come_decrement_ref_count2(type_name_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result304__;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
char* __dec_obj153;
struct sType* __dec_obj154;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj153=self->sname;
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj154=self->type;
            come_call_finalizer3(__dec_obj154,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sNode* __dec_obj157;
struct sSizeOfExpNode* __result305__;
struct sSizeOfExpNode* __result306__;
    ((struct sNodeBase*)(__right_value447=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value447,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj157=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result305__;
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value449 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value449=__builtin_string("sSizeOfExpNode")));
    (__right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_517;
_Bool Value_518;
_Bool __result308__;
void* __right_value450 = (void*)0;
struct CVALUE* come_value_519;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct CVALUE* come_value2_520;
void* __right_value453 = (void*)0;
char* __dec_obj160;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sType* __dec_obj161;
_Bool __result309__;
    exp_517=(struct sNode*)come_increment_ref_count(self->exp);
    Value_518=node_compile(exp_517,info);
    if(    !Value_518) {
        __result308__ = (_Bool)0;
        ((exp_517) ? exp_517 = come_decrement_ref_count2(exp_517, ((struct sNode*)exp_517)->finalize, ((struct sNode*)exp_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result308__;
    }
    else {
    }
    come_value_519=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_520=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 673, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj160=come_value2_520->c_value;
    come_value2_520->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_519->c_value));
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj161=come_value2_520->type;
    come_value2_520->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 676, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_520->type->mUnsigned=(_Bool)1;
    come_value2_520->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_520->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_520));
    __result309__ = (_Bool)1;
    ((exp_517) ? exp_517 = come_decrement_ref_count2(exp_517, ((struct sNode*)exp_517)->finalize, ((struct sNode*)exp_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(come_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result309__;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
char* __dec_obj158;
struct sNode* __dec_obj159;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj158=self->sname;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj159=self->exp;
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sType* __dec_obj162;
struct sTypeOfNode* __result310__;
    ((struct sNodeBase*)(__right_value456=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value456,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj162=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj162,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value458 = (void*)0;
char* __result311__;
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value458=__builtin_string("sTypeOfNode")));
    (__right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_521;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct CVALUE* come_value_522;
void* __right_value461 = (void*)0;
struct sType* type2_523;
void* __right_value462 = (void*)0;
char* type_name_524;
void* __right_value463 = (void*)0;
char* __dec_obj165;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* __dec_obj166;
_Bool __result312__;
    type_521=self->type;
    come_value_522=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 706, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_523=(struct sType*)come_increment_ref_count(solve_generics(type_521,info->generics_type,info));
    type_name_524=(char*)come_increment_ref_count(make_type_name_string(type2_523,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj165=come_value_522->c_value;
    come_value_522->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_524));
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj166=come_value_522->type;
    come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 713, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj166,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_522->var=((void*)0);
    add_come_last_code(info,"%s",come_value_522->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_522));
    __result312__ = (_Bool)1;
    come_call_finalizer3(come_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_523,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_524 = come_decrement_ref_count2(type_name_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result312__;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
char* __dec_obj163;
struct sType* __dec_obj164;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj163=self->sname;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj164=self->type;
            come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sNode* __dec_obj167;
struct sTypeOfExpNode* __result313__;
    ((struct sNodeBase*)(__right_value466=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value466,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj167=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value468 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value468=__builtin_string("sTypeOfExpNode")));
    (__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result314__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_525;
_Bool Value_526;
_Bool __result315__;
void* __right_value469 = (void*)0;
struct CVALUE* come_value_527;
void* __right_value470 = (void*)0;
struct sType* type_528;
void* __right_value471 = (void*)0;
struct sType* type2_529;
void* __right_value472 = (void*)0;
char* type_name_530;
void* __right_value473 = (void*)0;
char* __dec_obj170;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sType* __dec_obj171;
_Bool __result316__;
    exp_525=(struct sNode*)come_increment_ref_count(self->exp);
    Value_526=node_compile(exp_525,info);
    if(    !Value_526) {
        __result315__ = (_Bool)0;
        ((exp_525) ? exp_525 = come_decrement_ref_count2(exp_525, ((struct sNode*)exp_525)->finalize, ((struct sNode*)exp_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result315__;
    }
    else {
    }
    come_value_527=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_528=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_527->type));
    type2_529=(struct sType*)come_increment_ref_count(solve_generics(type_528,info->generics_type,info));
    type_name_530=(char*)come_increment_ref_count(make_type_name_string(type2_529,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj170=come_value_527->c_value;
    come_value_527->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_530));
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj171=come_value_527->type;
    come_value_527->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 756, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_527->var=((void*)0);
    add_come_last_code(info,"%s",come_value_527->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_527));
    __result316__ = (_Bool)1;
    ((exp_525) ? exp_525 = come_decrement_ref_count2(exp_525, ((struct sNode*)exp_525)->finalize, ((struct sNode*)exp_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(come_value_527,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_529,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_530 = come_decrement_ref_count2(type_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result316__;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
char* __dec_obj168;
struct sNode* __dec_obj169;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj168=self->sname;
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj169=self->exp;
            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sNode* __dec_obj172;
struct sDynamicTypeOf* __result317__;
    ((struct sNodeBase*)(__right_value476=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value476,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj172=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDynamicTypeOf_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self){
void* __result_obj__=(void*)0;
void* __right_value478 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value478=__builtin_string("sDynamicTypeOf")));
    (__right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info){
struct sNode* exp_531;
_Bool Value_532;
_Bool __result319__;
void* __right_value479 = (void*)0;
struct CVALUE* come_value_533;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct CVALUE* come_value2_534;
void* __right_value482 = (void*)0;
char* __dec_obj175;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* __dec_obj176;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct CVALUE* come_value2_535;
void* __right_value487 = (void*)0;
char* __dec_obj177;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj178;
_Bool __result320__;
    exp_531=(struct sNode*)come_increment_ref_count(self->exp);
    Value_532=node_compile(exp_531,info);
    if(    !Value_532) {
        __result319__ = (_Bool)0;
        ((exp_531) ? exp_531 = come_decrement_ref_count2(exp_531, ((struct sNode*)exp_531)->finalize, ((struct sNode*)exp_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result319__;
    }
    else {
    }
    come_value_533=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    come_value_533->type->mPointerNum>0&&come_value_533->type->mHeap) {
        come_value2_534=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 793, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj175=come_value2_534->c_value;
        come_value2_534->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_533->c_value));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj176=come_value2_534->type;
        come_value2_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 796, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_534->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_534->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_534));
        come_call_finalizer3(come_value2_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_535=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 804, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj177=come_value2_535->c_value;
        come_value2_535->c_value=(char*)come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj178=come_value2_535->type;
        come_value2_535->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 807, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_535->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_535->c_value);
        append_object_to_right_values2(come_value2_535,(struct sType*)come_increment_ref_count(come_value2_535->type),info,(_Bool)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_535));
        come_call_finalizer3(come_value2_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result320__ = (_Bool)1;
    ((exp_531) ? exp_531 = come_decrement_ref_count2(exp_531, ((struct sNode*)exp_531)->finalize, ((struct sNode*)exp_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(come_value_533,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result320__;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self){
char* __dec_obj173;
struct sNode* __dec_obj174;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj173=self->sname;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj174=self->exp;
            if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj179;
struct sAlignOfNode* __result321__;
struct sAlignOfNode* __result322__;
    ((struct sNodeBase*)(__right_value490=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value490,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj179=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value492 = (void*)0;
char* __result323__;
    __result323__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value492=__builtin_string("sAlignOfNode")));
    (__right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result323__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_536;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct CVALUE* come_value_537;
void* __right_value495 = (void*)0;
struct sType* type2_538;
void* __right_value496 = (void*)0;
char* type_name_539;
void* __right_value497 = (void*)0;
char* __dec_obj182;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* __dec_obj183;
_Bool __result324__;
    type_536=self->type;
    come_value_537=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 841, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_538=(struct sType*)come_increment_ref_count(solve_generics(type_536,info->generics_type,info));
    type_name_539=(char*)come_increment_ref_count(make_type_name_string(type2_538,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj182=come_value_537->c_value;
    come_value_537->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_539));
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj183=come_value_537->type;
    come_value_537->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 848, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_537->type->mUnsigned=(_Bool)1;
    come_value_537->var=((void*)0);
    add_come_last_code(info,"%s",come_value_537->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_537));
    __result324__ = (_Bool)1;
    come_call_finalizer3(come_value_537,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_538,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_539 = come_decrement_ref_count2(type_name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result324__;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
char* __dec_obj180;
struct sType* __dec_obj181;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj180=self->sname;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj181=self->type;
            come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sNode* __dec_obj184;
struct sAlignOfExpNode* __result325__;
    ((struct sNodeBase*)(__right_value500=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value500,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj184=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); };
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value502 = (void*)0;
char* __result326__;
    __result326__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value502=__builtin_string("sAlignOfExpNode")));
    (__right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result326__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_540;
_Bool Value_541;
_Bool __result327__;
void* __right_value503 = (void*)0;
struct CVALUE* come_value_542;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct CVALUE* come_value2_543;
void* __right_value506 = (void*)0;
char* __dec_obj187;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj188;
_Bool __result328__;
    exp_540=(struct sNode*)come_increment_ref_count(self->exp);
    Value_541=node_compile(exp_540,info);
    if(    !Value_541) {
        __result327__ = (_Bool)0;
        ((exp_540) ? exp_540 = come_decrement_ref_count2(exp_540, ((struct sNode*)exp_540)->finalize, ((struct sNode*)exp_540)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result327__;
    }
    else {
    }
    come_value_542=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_543=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 885, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj187=come_value2_543->c_value;
    come_value2_543->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_542->c_value));
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj188=come_value2_543->type;
    come_value2_543->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 888, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj188,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_543->type->mUnsigned=(_Bool)1;
    come_value2_543->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_543->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_543));
    __result328__ = (_Bool)1;
    ((exp_540) ? exp_540 = come_decrement_ref_count2(exp_540, ((struct sNode*)exp_540)->finalize, ((struct sNode*)exp_540)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(come_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_543,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result328__;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
char* __dec_obj185;
struct sNode* __dec_obj186;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj185=self->sname;
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj186=self->exp;
            if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* __dec_obj189;
struct sAlignOfNode2* __result329__;
    ((struct sNodeBase*)(__right_value509=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value509,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj189=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj189,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
void* __right_value511 = (void*)0;
char* __result330__;
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value511=__builtin_string("sAlignOfNode2")));
    (__right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_544;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct CVALUE* come_value_545;
void* __right_value514 = (void*)0;
struct sType* type2_546;
void* __right_value515 = (void*)0;
char* type_name_547;
void* __right_value516 = (void*)0;
char* __dec_obj192;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* __dec_obj193;
_Bool __result331__;
    type_544=self->type;
    come_value_545=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 918, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_546=(struct sType*)come_increment_ref_count(solve_generics(type_544,info->generics_type,info));
    type_name_547=(char*)come_increment_ref_count(make_type_name_string(type2_546,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj192=come_value_545->c_value;
    come_value_545->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_547));
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj193=come_value_545->type;
    come_value_545->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 925, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj193,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_545->type->mUnsigned=(_Bool)1;
    come_value_545->var=((void*)0);
    add_come_last_code(info,"%s",come_value_545->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_545));
    __result331__ = (_Bool)1;
    come_call_finalizer3(come_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_546,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_547 = come_decrement_ref_count2(type_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result331__;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
char* __dec_obj190;
struct sType* __dec_obj191;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj190=self->sname;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj191=self->type;
            come_call_finalizer3(__dec_obj191,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sNode* __dec_obj194;
struct sAlignOfExpNode2* __result332__;
    ((struct sNodeBase*)(__right_value519=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value519,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj194=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
void* __right_value521 = (void*)0;
char* __result333__;
    __result333__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value521=__builtin_string("sAlignOfExpNode2")));
    (__right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result333__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_548;
_Bool Value_549;
_Bool __result334__;
void* __right_value522 = (void*)0;
struct CVALUE* come_value_550;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct CVALUE* come_value2_551;
void* __right_value525 = (void*)0;
char* __dec_obj197;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj198;
_Bool __result335__;
    exp_548=(struct sNode*)come_increment_ref_count(self->exp);
    Value_549=node_compile(exp_548,info);
    if(    !Value_549) {
        __result334__ = (_Bool)0;
        ((exp_548) ? exp_548 = come_decrement_ref_count2(exp_548, ((struct sNode*)exp_548)->finalize, ((struct sNode*)exp_548)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result334__;
    }
    else {
    }
    come_value_550=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_551=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 962, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj197=come_value2_551->c_value;
    come_value2_551->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_550->c_value));
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj198=come_value2_551->type;
    come_value2_551->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 965, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj198,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_551->type->mUnsigned=(_Bool)1;
    come_value2_551->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_551->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_551));
    __result335__ = (_Bool)1;
    ((exp_548) ? exp_548 = come_decrement_ref_count2(exp_548, ((struct sNode*)exp_548)->finalize, ((struct sNode*)exp_548)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(come_value_550,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_551,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result335__;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
char* __dec_obj195;
struct sNode* __dec_obj196;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj195=self->sname;
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj196=self->exp;
            if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* __dec_obj199;
struct sAlignAsNode* __result336__;
    ((struct sNodeBase*)(__right_value528=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value528,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj199=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj199,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
void* __right_value530 = (void*)0;
char* __result337__;
    __result337__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value530=__builtin_string("sAlignAsNode")));
    (__right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result337__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_552;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct CVALUE* come_value_553;
void* __right_value533 = (void*)0;
struct sType* type2_554;
void* __right_value534 = (void*)0;
char* type_name_555;
void* __right_value535 = (void*)0;
char* __dec_obj202;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj203;
_Bool __result338__;
    type_552=self->type;
    come_value_553=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 995, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_554=(struct sType*)come_increment_ref_count(solve_generics(type_552,info->generics_type,info));
    type_name_555=(char*)come_increment_ref_count(make_type_name_string(type2_554,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj202=come_value_553->c_value;
    come_value_553->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_555));
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj203=come_value_553->type;
    come_value_553->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1002, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj203,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_553->type->mUnsigned=(_Bool)1;
    come_value_553->var=((void*)0);
    add_come_last_code(info,"%s",come_value_553->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_553));
    __result338__ = (_Bool)1;
    come_call_finalizer3(come_value_553,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_554,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_555 = come_decrement_ref_count2(type_name_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result338__;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
char* __dec_obj200;
struct sType* __dec_obj201;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj200=self->sname;
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj201=self->type;
            come_call_finalizer3(__dec_obj201,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sNode* __dec_obj204;
struct sAlignAsExpNode* __result339__;
    ((struct sNodeBase*)(__right_value538=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value538,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj204=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value540 = (void*)0;
char* __result340__;
    __result340__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value540=__builtin_string("sAlignAsExpNode")));
    (__right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result340__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_556;
_Bool Value_557;
_Bool __result341__;
void* __right_value541 = (void*)0;
struct CVALUE* come_value_558;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct CVALUE* come_value2_559;
void* __right_value544 = (void*)0;
char* __dec_obj207;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* __dec_obj208;
_Bool __result342__;
    exp_556=(struct sNode*)come_increment_ref_count(self->exp);
    Value_557=node_compile(exp_556,info);
    if(    !Value_557) {
        __result341__ = (_Bool)0;
        ((exp_556) ? exp_556 = come_decrement_ref_count2(exp_556, ((struct sNode*)exp_556)->finalize, ((struct sNode*)exp_556)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result341__;
    }
    else {
    }
    come_value_558=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_559=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1039, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj207=come_value2_559->c_value;
    come_value2_559->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_558->c_value));
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj208=come_value2_559->type;
    come_value2_559->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1042, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj208,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_559->type->mUnsigned=(_Bool)1;
    come_value2_559->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_559->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_559));
    __result342__ = (_Bool)1;
    ((exp_556) ? exp_556 = come_decrement_ref_count2(exp_556, ((struct sNode*)exp_556)->finalize, ((struct sNode*)exp_556)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result342__;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
char* __dec_obj205;
struct sNode* __dec_obj206;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj205=self->sname;
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj206=self->exp;
            if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* __dec_obj209;
struct sDeleteNode* __result343__;
    ((struct sNodeBase*)(__right_value547=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value547,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj209=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
void* __right_value549 = (void*)0;
char* __result344__;
    __result344__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value549=__builtin_string("sDeleteNode")));
    (__right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result344__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_560;
_Bool Value_561;
void* __right_value550 = (void*)0;
struct CVALUE* come_value_562;
void* __right_value551 = (void*)0;
_Bool __result345__;
    node_560=self->node;
    Value_561=node_compile(node_560,info);
    if(    !Value_561) {
        return (_Bool)0;
    }
    else {
    }
    come_value_562=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(((struct sType*)(__right_value551=come_call_cloner(sType_clone, come_value_562->type))),come_value_562->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer3(__right_value551,sType_finalize, 0, 1, 0, 0, (void*)0);
    __result345__ = (_Bool)1;
    come_call_finalizer3(come_value_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result345__;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
char* __dec_obj210;
struct sNode* __dec_obj211;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj210=self->sname;
            __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj211=self->node;
            if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj212;
struct sBorrowNode* __result346__;
struct sBorrowNode* __result347__;
    ((struct sNodeBase*)(__right_value552=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value552,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj212=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result346__;
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
void* __right_value554 = (void*)0;
char* __result348__;
    __result348__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value554=__builtin_string("sBorrowNode")));
    (__right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result348__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_563;
_Bool Value_564;
void* __right_value555 = (void*)0;
struct CVALUE* come_value_565;
struct sRightValueObject* right_value_objects_566;
int right_value_id_567;
_Bool __result349__;
    node_563=self->node;
    Value_564=node_compile(node_563,info);
    if(    !Value_564) {
        return (_Bool)0;
    }
    else {
    }
    come_value_565=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_565->type->mHeap=(_Bool)0;
    right_value_objects_566=come_value_565->right_value_objects;
    if(    right_value_objects_566) {
        right_value_id_567=right_value_objects_566->mID;
        if(        right_value_id_567!=-1) {
            remove_object_from_right_values(right_value_id_567,info);
        }
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_565));
    __result349__ = (_Bool)1;
    come_call_finalizer3(come_value_565,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result349__;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
char* __dec_obj213;
struct sNode* __dec_obj214;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj213=self->sname;
            __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj214=self->node;
            if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count2(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sNode* __dec_obj215;
struct sCloneNode* __result350__;
    ((struct sNodeBase*)(__right_value556=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value556,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj215=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__=(void*)0;
void* __right_value558 = (void*)0;
char* __result351__;
    __result351__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value558=__builtin_string("sCloneNode")));
    (__right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result351__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_568;
_Bool Value_569;
void* __right_value559 = (void*)0;
struct CVALUE* left_value_570;
void* __right_value560 = (void*)0;
struct sType* left_type_571;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct CVALUE* come_value_572;
void* __right_value563 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var17 = (void*)0;
struct sType* result_type_573=0;
char* c_value_574=0;
char* __dec_obj220;
void* __right_value564 = (void*)0;
struct sType* __dec_obj221;
_Bool __result352__;
    node_568=self->node;
    Value_569=node_compile(node_568,info);
    if(    !Value_569) {
        return (_Bool)0;
    }
    else {
    }
    left_value_570=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_571=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_570->type));
    if(    left_type_571->mPointerNum==1&&string_operator_equals(left_type_571->mClass->mName,"void")&&left_type_571->mHeap==(_Bool)0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_570));
    }
    else if(    left_type_571->mPointerNum==0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_570));
    }
    else if(    left_type_571->mPointerNum>0) {
        come_value_572=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1163, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        multiple_assign_var17=((struct tuple2$2sTypephcharph*)(__right_value563=clone_object(left_type_571,left_value_570->c_value,info)));
        result_type_573=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
        c_value_574=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        come_call_finalizer3(__right_value563,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj220=come_value_572->c_value;
        come_value_572->c_value=(char*)come_increment_ref_count(c_value_574);
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj221=come_value_572->type;
        come_value_572->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_571));
        come_call_finalizer3(__dec_obj221,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_572->type->mHeap=(_Bool)1;
        come_value_572->var=((void*)0);
        append_object_to_right_values2(come_value_572,(struct sType*)come_increment_ref_count(left_type_571),info,(_Bool)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_572));
        come_call_finalizer3(come_value_572,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
        (c_value_574 = come_decrement_ref_count2(c_value_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result352__ = (_Bool)1;
    come_call_finalizer3(left_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result352__;
}

static void sCloneNode_finalize(struct sCloneNode* self){
char* __dec_obj216;
struct sNode* __dec_obj217;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj216=self->sname;
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj217=self->node;
            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj218;
char* __dec_obj219;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj218=self->v1;
            come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj219=self->v2;
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sNode* __dec_obj222;
struct sDupeNode* __result353__;
    ((struct sNodeBase*)(__right_value565=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value565,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj222=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); };
    __result353__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__=(void*)0;
void* __right_value567 = (void*)0;
char* __result354__;
    __result354__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value567=__builtin_string("sDupeNode")));
    (__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result354__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_575;
_Bool Value_576;
void* __right_value568 = (void*)0;
struct CVALUE* left_value_577;
void* __right_value569 = (void*)0;
struct sType* left_type_578;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct CVALUE* come_value_579;
void* __right_value572 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var18 = (void*)0;
struct sType* result_type_580=0;
char* c_value_581=0;
char* __dec_obj225;
void* __right_value573 = (void*)0;
struct sType* __dec_obj226;
_Bool __result355__;
    node_575=self->node;
    Value_576=node_compile(node_575,info);
    if(    !Value_576) {
        return (_Bool)0;
    }
    else {
    }
    left_value_577=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_578=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_577->type));
    if(    left_type_578->mPointerNum==0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_577));
    }
    else if(    left_type_578->mPointerNum>0&&left_type_578->mHeap==(_Bool)0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_577));
    }
    else if(    left_type_578->mPointerNum>0) {
        come_value_579=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1214, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        multiple_assign_var18=((struct tuple2$2sTypephcharph*)(__right_value572=clone_object(left_type_578,left_value_577->c_value,info)));
        result_type_580=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
        c_value_581=(char*)come_increment_ref_count(multiple_assign_var18->v2);
        come_call_finalizer3(__right_value572,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj225=come_value_579->c_value;
        come_value_579->c_value=(char*)come_increment_ref_count(c_value_581);
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj226=come_value_579->type;
        come_value_579->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_578));
        come_call_finalizer3(__dec_obj226,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_579->type->mHeap=(_Bool)1;
        come_value_579->var=((void*)0);
        append_object_to_right_values2(come_value_579,(struct sType*)come_increment_ref_count(left_type_578),info,(_Bool)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_579));
        come_call_finalizer3(come_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
        (c_value_581 = come_decrement_ref_count2(c_value_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result355__ = (_Bool)1;
    come_call_finalizer3(left_value_577,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_578,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result355__;
}

static void sDupeNode_finalize(struct sDupeNode* self){
char* __dec_obj223;
struct sNode* __dec_obj224;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj223=self->sname;
            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj224=self->node;
            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* __dec_obj227;
struct sDummyHeapNode* __result356__;
    ((struct sNodeBase*)(__right_value574=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value574,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj227=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
    __result356__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
void* __right_value576 = (void*)0;
char* __result357__;
    __result357__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value576=__builtin_string("sDummyHeapNode")));
    (__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result357__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_582;
_Bool Value_583;
void* __right_value577 = (void*)0;
struct CVALUE* come_value_584;
_Bool __result358__;
    node_582=self->node;
    Value_583=node_compile(node_582,info);
    if(    !Value_583) {
        return (_Bool)0;
    }
    else {
    }
    come_value_584=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_584->type->mHeap=(_Bool)1;
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_584));
    __result358__ = (_Bool)1;
    come_call_finalizer3(come_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result358__;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
char* __dec_obj228;
struct sNode* __dec_obj229;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj228=self->sname;
            __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj229=self->node;
            if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj230;
struct sGCIncNode* __result359__;
    ((struct sNodeBase*)(__right_value578=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value578,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj230=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    __result359__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
void* __right_value580 = (void*)0;
char* __result360__;
    __result360__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value580=__builtin_string("sGCIncNode")));
    (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result360__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_585;
_Bool Value_586;
void* __right_value581 = (void*)0;
struct CVALUE* come_value_587;
struct sType* type_588;
void* __right_value582 = (void*)0;
char* type_name_589;
void* __right_value583 = (void*)0;
char* __dec_obj233;
_Bool __result361__;
    node_585=self->node;
    Value_586=node_compile(node_585,info);
    if(    !Value_586) {
        return (_Bool)0;
    }
    else {
    }
    come_value_587=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_588=come_value_587->type;
    if(    come_value_587->type->mHeap) {
        type_name_589=(char*)come_increment_ref_count(make_type_name_string(type_588,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj233=come_value_587->c_value;
        come_value_587->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_587->type,come_value_587->c_value,info));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        (type_name_589 = come_decrement_ref_count2(type_name_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_587));
    __result361__ = (_Bool)1;
    come_call_finalizer3(come_value_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result361__;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
char* __dec_obj231;
struct sNode* __dec_obj232;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj231=self->sname;
            __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj232=self->node;
            if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sNode* __dec_obj234;
struct sGCDecNode* __result362__;
    ((struct sNodeBase*)(__right_value584=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value584,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj234=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
void* __right_value586 = (void*)0;
char* __result363__;
    __result363__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value586=__builtin_string("sGCDecNode")));
    (__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result363__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_590;
_Bool Value_591;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_592;
struct sType* type_593;
_Bool __result364__;
    node_590=self->node;
    Value_591=node_compile(node_590,info);
    if(    !Value_591) {
        return (_Bool)0;
    }
    else {
    }
    come_value_592=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_593=come_value_592->type;
    decrement_ref_count_object(type_593,come_value_592->c_value,info,(_Bool)0,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_592));
    __result364__ = (_Bool)1;
    come_call_finalizer3(come_value_592,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result364__;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
char* __dec_obj235;
struct sNode* __dec_obj236;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj235=self->sname;
            __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj236=self->node;
            if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sType* __dec_obj237;
struct sIsHeap* __result365__;
    ((struct sNodeBase*)(__right_value588=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value588,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj237=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj237,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result365__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__=(void*)0;
void* __right_value590 = (void*)0;
char* __result366__;
    __result366__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value590=__builtin_string("sIsHeap")));
    (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result366__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_594;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct CVALUE* come_value_595;
void* __right_value593 = (void*)0;
char* __dec_obj240;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sType* __dec_obj241;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct CVALUE* come_value_596;
void* __right_value598 = (void*)0;
char* __dec_obj242;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sType* __dec_obj243;
    node_594=self->type;
    if(    self->type->mHeap) {
        come_value_595=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1356, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj240=come_value_595->c_value;
        come_value_595->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj241=come_value_595->type;
        come_value_595->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1359, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj241,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_595->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_595));
        add_come_last_code(info,"%s",come_value_595->c_value);
        come_call_finalizer3(come_value_595,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_596=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1367, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj242=come_value_596->c_value;
        come_value_596->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj243=come_value_596->type;
        come_value_596->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1370, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj243,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_596->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_596));
        add_come_last_code(info,"%s",come_value_596->c_value);
        come_call_finalizer3(come_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsHeap_finalize(struct sIsHeap* self){
char* __dec_obj238;
struct sType* __dec_obj239;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj238=self->sname;
            __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj239=self->type;
            come_call_finalizer3(__dec_obj239,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sType* __dec_obj244;
struct sIsPointer* __result367__;
    ((struct sNodeBase*)(__right_value601=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value601,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj244=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj244,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result367__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__=(void*)0;
void* __right_value603 = (void*)0;
char* __result368__;
    __result368__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value603=__builtin_string("sIsPointer")));
    (__right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result368__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_597;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct CVALUE* come_value_598;
void* __right_value606 = (void*)0;
char* __dec_obj247;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sType* __dec_obj248;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct CVALUE* come_value_599;
void* __right_value611 = (void*)0;
char* __dec_obj249;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sType* __dec_obj250;
    node_597=self->type;
    if(    self->type->mPointerNum>0) {
        come_value_598=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1402, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj247=come_value_598->c_value;
        come_value_598->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj248=come_value_598->type;
        come_value_598->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1405, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj248,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_598->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_598));
        add_come_last_code(info,"%s",come_value_598->c_value);
        come_call_finalizer3(come_value_598,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_599=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1413, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj249=come_value_599->c_value;
        come_value_599->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj250=come_value_599->type;
        come_value_599->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1416, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj250,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_599->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_599));
        add_come_last_code(info,"%s",come_value_599->c_value);
        come_call_finalizer3(come_value_599,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsPointer_finalize(struct sIsPointer* self){
char* __dec_obj245;
struct sType* __dec_obj246;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj245=self->sname;
            __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj246=self->type;
            come_call_finalizer3(__dec_obj246,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sNode* __dec_obj251;
struct sGCDecNoFreeNode* __result369__;
    ((struct sNodeBase*)(__right_value614=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value614,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj251=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
    __result369__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
void* __right_value616 = (void*)0;
char* __result370__;
    __result370__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value616=__builtin_string("sGCDecNoFreeNode")));
    (__right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result370__;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_600;
_Bool Value_601;
void* __right_value617 = (void*)0;
struct CVALUE* come_value_602;
struct sType* type_603;
_Bool __result371__;
    node_600=self->node;
    Value_601=node_compile(node_600,info);
    if(    !Value_601) {
        return (_Bool)0;
    }
    else {
    }
    come_value_602=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_603=come_value_602->type;
    decrement_ref_count_object(type_603,come_value_602->c_value,info,(_Bool)0,(_Bool)1);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_602));
    __result371__ = (_Bool)1;
    come_call_finalizer3(come_value_602,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result371__;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
char* __dec_obj252;
struct sNode* __dec_obj253;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj252=self->sname;
            __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj253=self->node;
            if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value618 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var19 = (void*)0;
struct sType* type_604=0;
char* name_605=0;
_Bool err_606=0;
void* __right_value619 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var20 = (void*)0;
int come_exception_var_c1_607=0;
char* Err_608=0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value635 = (void*)0;
struct sNode* obj_609;
void* __right_value636 = (void*)0;
char* fun_name_617;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* __result380__;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_618;
void* __right_value641 = (void*)0;
char* word_619;
_Bool no_comma_620;
void* __right_value642 = (void*)0;
struct sNode* exp_621;
void* __right_value643 = (void*)0;
_Bool _if_conditional7;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* value_node_622;
void* __right_value646 = (void*)0;
struct sNode* __dec_obj266;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sNode* exp_624;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var21 = (void*)0;
int come_exception_var_c2_625=0;
char* Err_626=0;
struct sNode* __result382__;
void* __right_value653 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var22 = (void*)0;
int come_exception_var_c3_627=0;
char* Err_628=0;
struct sNode* __result383__;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value656 = (void*)0;
struct sNode* __result384__;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value659 = (void*)0;
struct sNode* __result385__;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sNode* _inf_value6;
struct sTrueNode* _inf_obj_value6;
void* __right_value662 = (void*)0;
struct sNode* __result386__;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sNode* _inf_value7;
struct sFalseNode* _inf_obj_value7;
void* __right_value665 = (void*)0;
struct sNode* __result387__;
void* __right_value666 = (void*)0;
struct sNode* node_629;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sNode* _inf_value8;
struct sDeleteNode* _inf_obj_value8;
void* __right_value672 = (void*)0;
struct sNode* __result390__;
void* __right_value673 = (void*)0;
struct sNode* node_631;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sNode* _inf_value9;
struct sBorrowNode* _inf_obj_value9;
void* __right_value679 = (void*)0;
struct sNode* __result393__;
void* __right_value680 = (void*)0;
struct sNode* node_633;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sNode* _inf_value10;
struct sCloneNode* _inf_obj_value10;
void* __right_value686 = (void*)0;
struct sNode* __result396__;
void* __right_value687 = (void*)0;
struct sNode* node_635;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct sNode* _inf_value11;
struct sDupeNode* _inf_obj_value11;
void* __right_value693 = (void*)0;
struct sNode* __result399__;
void* __right_value694 = (void*)0;
struct sNode* node_637;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
void* __right_value700 = (void*)0;
struct sNode* __result402__;
void* __right_value701 = (void*)0;
struct sNode* node_639;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
void* __right_value707 = (void*)0;
struct sNode* __result405__;
void* __right_value708 = (void*)0;
struct sNode* node_641;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
void* __right_value714 = (void*)0;
struct sNode* __result408__;
void* __right_value715 = (void*)0;
struct sNode* node_643;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sNode* _inf_value15;
struct sGCDecNoFreeNode* _inf_obj_value15;
void* __right_value721 = (void*)0;
struct sNode* __result411__;
void* __right_value722 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var23 = (void*)0;
struct sType* param_type_645=0;
char* param_name_646=0;
_Bool err_647=0;
void* __right_value723 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var24 = (void*)0;
int come_exception_var_c4_648=0;
char* Err_649=0;
void* __right_value724 = (void*)0;
struct sType* type2_650;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct sNode* _inf_value16;
struct sIsHeap* _inf_obj_value16;
void* __right_value730 = (void*)0;
struct sNode* __result414__;
void* __right_value731 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var25 = (void*)0;
struct sType* param_type_652=0;
char* param_name_653=0;
_Bool err_654=0;
void* __right_value732 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var26 = (void*)0;
int come_exception_var_c5_655=0;
char* Err_656=0;
void* __right_value733 = (void*)0;
struct sType* type2_657;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sNode* _inf_value17;
struct sIsPointer* _inf_obj_value17;
void* __right_value739 = (void*)0;
struct sNode* __result417__;
void* __right_value740 = (void*)0;
struct sNode* __result418__;
void* __right_value741 = (void*)0;
struct sNode* __result419__;
void* __right_value742 = (void*)0;
struct sNode* __result420__;
void* __right_value743 = (void*)0;
struct sNode* __result421__;
_Bool come_c_659;
void* __right_value744 = (void*)0;
struct sNode* node_660;
struct sNode* __result422__;
void* __right_value745 = (void*)0;
struct sNode* __result423__;
void* __right_value746 = (void*)0;
struct sNode* __result424__;
void* __right_value747 = (void*)0;
struct sNode* __result425__;
void* __right_value748 = (void*)0;
struct sNode* __result426__;
void* __right_value749 = (void*)0;
struct sNode* __result427__;
void* __right_value750 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var27 = (void*)0;
int come_exception_var_c6_661=0;
char* Err_662=0;
_Bool paren_663;
_Bool is_type_name_flag_664;
char* p_665;
int sline_666;
void* __right_value751 = (void*)0;
char* word_667;
void* __right_value752 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var28 = (void*)0;
struct sType* type_668=0;
char* name_669=0;
_Bool err_670=0;
void* __right_value753 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var29 = (void*)0;
int come_exception_var_c7_671=0;
char* Err_672=0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct sNode* _inf_value18;
struct sSizeOfNode* _inf_obj_value18;
void* __right_value759 = (void*)0;
struct sNode* __result430__;
struct sNode* exp_674;
_Bool no_comma_675;
void* __right_value760 = (void*)0;
struct sNode* __dec_obj291;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj292;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct sNode* _inf_value19;
struct sSizeOfExpNode* _inf_obj_value19;
void* __right_value767 = (void*)0;
struct sNode* __result433__;
_Bool paren_677;
_Bool is_type_name_flag_678;
char* p_679;
int sline_680;
void* __right_value768 = (void*)0;
char* word_681;
void* __right_value769 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var30 = (void*)0;
struct sType* type_682=0;
char* name_683=0;
_Bool err_684=0;
void* __right_value770 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var31 = (void*)0;
int come_exception_var_c8_685=0;
char* Err_686=0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sNode* _inf_value20;
struct sTypeOfNode* _inf_obj_value20;
void* __right_value776 = (void*)0;
struct sNode* __result436__;
struct sNode* exp_688;
_Bool no_comma_689;
void* __right_value777 = (void*)0;
struct sNode* __dec_obj297;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj298;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sNode* _inf_value21;
struct sTypeOfExpNode* _inf_obj_value21;
void* __right_value784 = (void*)0;
struct sNode* __result439__;
_Bool paren_691;
struct sNode* exp_692;
_Bool no_comma_693;
void* __right_value785 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value786 = (void*)0;
struct sNode* __dec_obj302;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sNode* _inf_value22;
struct sDynamicTypeOf* _inf_obj_value22;
void* __right_value792 = (void*)0;
struct sNode* __result442__;
_Bool paren_695;
_Bool is_type_name_flag_696;
char* p_697;
int sline_698;
void* __right_value793 = (void*)0;
char* word_699;
void* __right_value794 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var32 = (void*)0;
struct sType* type_700=0;
char* name_701=0;
_Bool err_702=0;
void* __right_value795 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var33 = (void*)0;
int come_exception_var_c9_703=0;
char* Err_704=0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sNode* _inf_value23;
struct sAlignOfNode* _inf_obj_value23;
void* __right_value801 = (void*)0;
struct sNode* __result445__;
struct sNode* exp_706;
_Bool no_comma_707;
void* __right_value802 = (void*)0;
struct sNode* __dec_obj307;
void* __right_value803 = (void*)0;
struct sNode* __dec_obj308;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sNode* _inf_value24;
struct sAlignOfExpNode* _inf_obj_value24;
void* __right_value809 = (void*)0;
struct sNode* __result448__;
_Bool paren_709;
_Bool is_type_name_flag_710;
char* p_711;
int sline_712;
void* __right_value810 = (void*)0;
char* word_713;
void* __right_value811 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var34 = (void*)0;
struct sType* type_714=0;
char* name_715=0;
_Bool err_716=0;
void* __right_value812 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var35 = (void*)0;
int come_exception_var_c10_717=0;
char* Err_718=0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct sNode* _inf_value25;
struct sAlignOfNode2* _inf_obj_value25;
void* __right_value818 = (void*)0;
struct sNode* __result451__;
struct sNode* exp_720;
_Bool no_comma_721;
void* __right_value819 = (void*)0;
struct sNode* __dec_obj313;
void* __right_value820 = (void*)0;
struct sNode* __dec_obj314;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct sNode* _inf_value26;
struct sAlignOfExpNode2* _inf_obj_value26;
void* __right_value826 = (void*)0;
struct sNode* __result454__;
_Bool is_type_name_flag_723;
char* p_724;
int sline_725;
void* __right_value827 = (void*)0;
char* word_726;
void* __right_value828 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var36 = (void*)0;
struct sType* type_727=0;
char* name_728=0;
_Bool err_729=0;
void* __right_value829 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var37 = (void*)0;
int come_exception_var_c11_730=0;
char* Err_731=0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct sNode* _inf_value27;
struct sAlignAsNode* _inf_obj_value27;
void* __right_value835 = (void*)0;
struct sNode* __result457__;
void* __right_value836 = (void*)0;
struct sNode* exp_733;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct sNode* _inf_value28;
struct sAlignAsExpNode* _inf_obj_value28;
void* __right_value842 = (void*)0;
struct sNode* __result460__;
void* __right_value843 = (void*)0;
struct sNode* __result461__;
exp_674 = (void*)0;
exp_688 = (void*)0;
exp_692 = (void*)0;
exp_706 = (void*)0;
exp_720 = (void*)0;
    if(    !gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var19=((struct tuple3$3sTypephcharphbool*)(__right_value618=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_604=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
        name_605=(char*)come_increment_ref_count(multiple_assign_var19->v2);
        err_606=multiple_assign_var19->v3;
        come_call_finalizer3(__right_value618,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_606) {
            multiple_assign_var20=((struct tuple2$2intcharph*)(__right_value619=err_msg(info,"parse_type failed")));
            come_exception_var_c1_607=multiple_assign_var20->v1;
            Err_608=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            ((Err_608)?(puts(Err_608),exit(0)):(0));
            come_call_finalizer3(__right_value619,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(2);
            (Err_608 = come_decrement_ref_count2(Err_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==40) {
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1473, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value621=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1473, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_604),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            obj_609=(struct sNode*)come_increment_ref_count(_inf_value3);
            come_call_finalizer3(__right_value621,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name_617=(char*)come_increment_ref_count(__builtin_string("initialize"));
            __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value638=parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_609)),(char*)come_increment_ref_count(fun_name_617),info)));
            ((obj_609) ? obj_609 = come_decrement_ref_count2(obj_609, ((struct sNode*)obj_609)->finalize, ((struct sNode*)obj_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (fun_name_617 = come_decrement_ref_count2(fun_name_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value638) ? __right_value638 = come_decrement_ref_count2(__right_value638, ((struct sNode*)__right_value638)->finalize, ((struct sNode*)__right_value638)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result380__;
            ((obj_609) ? obj_609 = come_decrement_ref_count2(obj_609, ((struct sNode*)obj_609)->finalize, ((struct sNode*)obj_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            (fun_name_617 = come_decrement_ref_count2(fun_name_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_618=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "21obj.c", 1482, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while((_Bool)1) {
                word_619=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_620=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_621=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_620;
                    if(                    (_if_conditional7=(string_operator_equals(((char*)(__right_value643=exp_621->kind(exp_621->_protocol_obj))),"sWildCard"))),                    (__right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                    _if_conditional7) {
                        value_node_622=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value644=xsprintf("Value"))),info));
                        (__right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                        __dec_obj266=exp_621;
                        exp_621=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_622),(char*)come_increment_ref_count(word_619),info));
                        if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
                        ((value_node_622) ? value_node_622 = come_decrement_ref_count2(value_node_622, ((struct sNode*)value_node_622)->finalize, ((struct sNode*)value_node_622)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    }
                    list$1tuple2$2charphsNodephphp_add(initializer_618,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1501, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(word_619),(struct sNode*)come_increment_ref_count(exp_621))));
                    ((exp_621) ? exp_621 = come_decrement_ref_count2(exp_621, ((struct sNode*)exp_621)->finalize, ((struct sNode*)exp_621)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else if(                *info->p==44) {
                    exp_624=(struct sNode*)come_increment_ref_count(create_load_var(word_619,info));
                    list$1tuple2$2charphsNodephphp_add(initializer_618,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1506, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(word_619),(struct sNode*)come_increment_ref_count(exp_624))));
                    ((exp_624) ? exp_624 = come_decrement_ref_count2(exp_624, ((struct sNode*)exp_624)->finalize, ((struct sNode*)exp_624)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else {
                    multiple_assign_var21=((struct tuple2$2intcharph*)(__right_value652=err_msg(info,"invalid character(21) %c\n",*info->p)));
                    come_exception_var_c2_625=multiple_assign_var21->v1;
                    Err_626=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    ((Err_626)?(puts(Err_626),exit(0)):(0));
                    come_call_finalizer3(__right_value652,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    __result382__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    (Err_626 = come_decrement_ref_count2(Err_626, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (word_619 = come_decrement_ref_count2(word_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(initializer_618,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    gComeFunResultObject = (void*)0;
                    return __result382__;
                    (Err_626 = come_decrement_ref_count2(Err_626, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (word_619 = come_decrement_ref_count2(word_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    multiple_assign_var22=((struct tuple2$2intcharph*)(__right_value653=err_msg(info,"invalid character(30) %c",*info->p)));
                    come_exception_var_c3_627=multiple_assign_var22->v1;
                    Err_628=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                    ((Err_628)?(puts(Err_628),exit(0)):(0));
                    come_call_finalizer3(__right_value653,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    __result383__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    (Err_628 = come_decrement_ref_count2(Err_628, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (word_619 = come_decrement_ref_count2(word_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(initializer_618,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    gComeFunResultObject = (void*)0;
                    return __result383__;
                    (Err_628 = come_decrement_ref_count2(Err_628, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (word_619 = come_decrement_ref_count2(word_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1527, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value655=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1527, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_604),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_618),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sNewNode_finalize;
            _inf_value4->clone=(void*)sNewNode_clone;
            _inf_value4->compile=(void*)sNewNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sNewNode_kind;
            __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value656=_inf_value4));
            come_call_finalizer3(initializer_618,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value655,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value656) ? __right_value656 = come_decrement_ref_count2(__right_value656, ((struct sNode*)__right_value656)->finalize, ((struct sNode*)__right_value656)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result384__;
            come_call_finalizer3(initializer_618,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1530, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value658=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1530, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_604),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value659=_inf_value5));
            come_call_finalizer3(type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value658,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value659) ? __right_value659 = come_decrement_ref_count2(__right_value659, ((struct sNode*)__right_value659)->finalize, ((struct sNode*)__right_value659)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result385__;
        }
        come_call_finalizer3(type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !gComeC&&charp_operator_equals(buf,"true")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1534, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value661=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1534, "struct sTrueNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sTrueNode_finalize;
        _inf_value6->clone=(void*)sTrueNode_clone;
        _inf_value6->compile=(void*)sTrueNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sTrueNode_kind;
        __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value662=_inf_value6));
        come_call_finalizer3(__right_value661,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value662) ? __right_value662 = come_decrement_ref_count2(__right_value662, ((struct sNode*)__right_value662)->finalize, ((struct sNode*)__right_value662)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"false")) {
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1537, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value664=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1537, "struct sFalseNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFalseNode_finalize;
        _inf_value7->clone=(void*)sFalseNode_clone;
        _inf_value7->compile=(void*)sFalseNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sFalseNode_kind;
        __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value665=_inf_value7));
        come_call_finalizer3(__right_value664,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value665) ? __right_value665 = come_decrement_ref_count2(__right_value665, ((struct sNode*)__right_value665)->finalize, ((struct sNode*)__right_value665)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"delete")) {
        node_629=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1542, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value668=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1542, "struct sDeleteNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_629),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sDeleteNode_finalize;
        _inf_value8->clone=(void*)sDeleteNode_clone;
        _inf_value8->compile=(void*)sDeleteNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sDeleteNode_kind;
        __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value672=_inf_value8));
        ((node_629) ? node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value668,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value672) ? __right_value672 = come_decrement_ref_count2(__right_value672, ((struct sNode*)__right_value672)->finalize, ((struct sNode*)__right_value672)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result390__;
        ((node_629) ? node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"borrow")) {
        node_631=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1547, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value675=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1547, "struct sBorrowNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_631),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sBorrowNode_finalize;
        _inf_value9->clone=(void*)sBorrowNode_clone;
        _inf_value9->compile=(void*)sBorrowNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sBorrowNode_kind;
        __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value679=_inf_value9));
        ((node_631) ? node_631 = come_decrement_ref_count2(node_631, ((struct sNode*)node_631)->finalize, ((struct sNode*)node_631)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value675,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value679) ? __right_value679 = come_decrement_ref_count2(__right_value679, ((struct sNode*)__right_value679)->finalize, ((struct sNode*)__right_value679)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result393__;
        ((node_631) ? node_631 = come_decrement_ref_count2(node_631, ((struct sNode*)node_631)->finalize, ((struct sNode*)node_631)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"clone")) {
        node_633=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1552, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value10=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value682=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1552, "struct sCloneNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_633),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sCloneNode_finalize;
        _inf_value10->clone=(void*)sCloneNode_clone;
        _inf_value10->compile=(void*)sCloneNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sCloneNode_kind;
        __result396__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value686=_inf_value10));
        ((node_633) ? node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value682,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value686) ? __right_value686 = come_decrement_ref_count2(__right_value686, ((struct sNode*)__right_value686)->finalize, ((struct sNode*)__right_value686)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result396__;
        ((node_633) ? node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dupe")) {
        node_635=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1557, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value11=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value689=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1557, "struct sDupeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_635),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDupeNode_finalize;
        _inf_value11->clone=(void*)sDupeNode_clone;
        _inf_value11->compile=(void*)sDupeNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDupeNode_kind;
        __result399__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value693=_inf_value11));
        ((node_635) ? node_635 = come_decrement_ref_count2(node_635, ((struct sNode*)node_635)->finalize, ((struct sNode*)node_635)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value689,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value693) ? __right_value693 = come_decrement_ref_count2(__right_value693, ((struct sNode*)__right_value693)->finalize, ((struct sNode*)__right_value693)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result399__;
        ((node_635) ? node_635 = come_decrement_ref_count2(node_635, ((struct sNode*)node_635)->finalize, ((struct sNode*)node_635)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        node_637=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1562, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value696=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1562, "struct sDummyHeapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_637),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value12->clone=(void*)sDummyHeapNode_clone;
        _inf_value12->compile=(void*)sDummyHeapNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDummyHeapNode_kind;
        __result402__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value700=_inf_value12));
        ((node_637) ? node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value696,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value700) ? __right_value700 = come_decrement_ref_count2(__right_value700, ((struct sNode*)__right_value700)->finalize, ((struct sNode*)__right_value700)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result402__;
        ((node_637) ? node_637 = come_decrement_ref_count2(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_639=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1572, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value703=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1572, "struct sGCIncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_639),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sGCIncNode_finalize;
        _inf_value13->clone=(void*)sGCIncNode_clone;
        _inf_value13->compile=(void*)sGCIncNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sGCIncNode_kind;
        __result405__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value707=_inf_value13));
        ((node_639) ? node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value703,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value707) ? __right_value707 = come_decrement_ref_count2(__right_value707, ((struct sNode*)__right_value707)->finalize, ((struct sNode*)__right_value707)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result405__;
        ((node_639) ? node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_641=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1582, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value14=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value710=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1582, "struct sGCDecNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_641),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCDecNode_finalize;
        _inf_value14->clone=(void*)sGCDecNode_clone;
        _inf_value14->compile=(void*)sGCDecNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCDecNode_kind;
        __result408__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value714=_inf_value14));
        ((node_641) ? node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value710,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value714) ? __right_value714 = come_decrement_ref_count2(__right_value714, ((struct sNode*)__right_value714)->finalize, ((struct sNode*)__right_value714)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result408__;
        ((node_641) ? node_641 = come_decrement_ref_count2(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_643=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1592, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value15=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value717=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1592, "struct sGCDecNoFreeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_643),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value15->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value15->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNoFreeNode_kind;
        __result411__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value721=_inf_value15));
        ((node_643) ? node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value717,sGCDecNoFreeNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value721) ? __right_value721 = come_decrement_ref_count2(__right_value721, ((struct sNode*)__right_value721)->finalize, ((struct sNode*)__right_value721)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result411__;
        ((node_643) ? node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var23=((struct tuple3$3sTypephcharphbool*)(__right_value722=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_645=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
        param_name_646=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        err_647=multiple_assign_var23->v3;
        come_call_finalizer3(__right_value722,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_647) {
            multiple_assign_var24=((struct tuple2$2intcharph*)(__right_value723=err_msg(info,"parse_type failed")));
            come_exception_var_c4_648=multiple_assign_var24->v1;
            Err_649=(char*)come_increment_ref_count(multiple_assign_var24->v2);
            ((Err_649)?(puts(Err_649),exit(0)):(0));
            come_call_finalizer3(__right_value723,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(2);
            (Err_649 = come_decrement_ref_count2(Err_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type2_650=(struct sType*)come_increment_ref_count(solve_generics(param_type_645,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1608, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value16=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value726=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1608, "struct sIsHeap*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_650),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sIsHeap_finalize;
        _inf_value16->clone=(void*)sIsHeap_clone;
        _inf_value16->compile=(void*)sIsHeap_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sIsHeap_kind;
        __result414__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value730=_inf_value16));
        come_call_finalizer3(param_type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
        (param_name_646 = come_decrement_ref_count2(param_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_650,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value726,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value730) ? __right_value730 = come_decrement_ref_count2(__right_value730, ((struct sNode*)__right_value730)->finalize, ((struct sNode*)__right_value730)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result414__;
        come_call_finalizer3(param_type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
        (param_name_646 = come_decrement_ref_count2(param_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_650,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var25=((struct tuple3$3sTypephcharphbool*)(__right_value731=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_652=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
        param_name_653=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        err_654=multiple_assign_var25->v3;
        come_call_finalizer3(__right_value731,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_654) {
            multiple_assign_var26=((struct tuple2$2intcharph*)(__right_value732=err_msg(info,"parse_type failed")));
            come_exception_var_c5_655=multiple_assign_var26->v1;
            Err_656=(char*)come_increment_ref_count(multiple_assign_var26->v2);
            ((Err_656)?(puts(Err_656),exit(0)):(0));
            come_call_finalizer3(__right_value732,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(2);
            (Err_656 = come_decrement_ref_count2(Err_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type2_657=(struct sType*)come_increment_ref_count(solve_generics(param_type_652,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1624, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value17=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value735=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1624, "struct sIsPointer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_657),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sIsPointer_finalize;
        _inf_value17->clone=(void*)sIsPointer_clone;
        _inf_value17->compile=(void*)sIsPointer_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sIsPointer_kind;
        __result417__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value739=_inf_value17));
        come_call_finalizer3(param_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
        (param_name_653 = come_decrement_ref_count2(param_name_653, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_657,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value735,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value739) ? __right_value739 = come_decrement_ref_count2(__right_value739, ((struct sNode*)__right_value739)->finalize, ((struct sNode*)__right_value739)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result417__;
        come_call_finalizer3(param_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
        (param_name_653 = come_decrement_ref_count2(param_name_653, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_657,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result418__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value740=create_nothing_node(info)));
            ((__right_value740) ? __right_value740 = come_decrement_ref_count2(__right_value740, ((struct sNode*)__right_value740)->finalize, ((struct sNode*)__right_value740)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result418__;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result419__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value741=create_nothing_node(info)));
            ((__right_value741) ? __right_value741 = come_decrement_ref_count2(__right_value741, ((struct sNode*)__right_value741)->finalize, ((struct sNode*)__right_value741)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result419__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result420__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value742=create_nothing_node(info)));
            ((__right_value742) ? __right_value742 = come_decrement_ref_count2(__right_value742, ((struct sNode*)__right_value742)->finalize, ((struct sNode*)__right_value742)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result420__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result421__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value743=create_nothing_node(info)));
            ((__right_value743) ? __right_value743 = come_decrement_ref_count2(__right_value743, ((struct sNode*)__right_value743)->finalize, ((struct sNode*)__right_value743)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result421__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_659=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123) {
                node_660=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info));
                gComeC=come_c_659;
                __result422__ = gComeFunResultObject = __result_obj__ = node_660;
                ((node_660) ? node_660 = come_decrement_ref_count2(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
                gComeFunResultObject = (void*)0;
                return __result422__;
                ((node_660) ? node_660 = come_decrement_ref_count2(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else {
                __result423__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value745=create_nothing_node(info)));
                ((__right_value745) ? __right_value745 = come_decrement_ref_count2(__right_value745, ((struct sNode*)__right_value745)->finalize, ((struct sNode*)__right_value745)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
                gComeFunResultObject = (void*)0;
                return __result423__;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __result424__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value746=create_nothing_node(info)));
            ((__right_value746) ? __right_value746 = come_decrement_ref_count2(__right_value746, ((struct sNode*)__right_value746)->finalize, ((struct sNode*)__right_value746)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result424__;
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __result425__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value747=create_nothing_node(info)));
            ((__right_value747) ? __right_value747 = come_decrement_ref_count2(__right_value747, ((struct sNode*)__right_value747)->finalize, ((struct sNode*)__right_value747)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result425__;
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __result426__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value748=create_nothing_node(info)));
            ((__right_value748) ? __right_value748 = come_decrement_ref_count2(__right_value748, ((struct sNode*)__right_value748)->finalize, ((struct sNode*)__right_value748)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result426__;
        }
        else if(        parsecmp("no-null-check",info)) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __result427__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value749=create_nothing_node(info)));
            ((__right_value749) ? __right_value749 = come_decrement_ref_count2(__right_value749, ((struct sNode*)__right_value749)->finalize, ((struct sNode*)__right_value749)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result427__;
        }
        else {
            multiple_assign_var27=((struct tuple2$2intcharph*)(__right_value750=err_msg(info,"invalid using")));
            come_exception_var_c6_661=multiple_assign_var27->v1;
            Err_662=(char*)come_increment_ref_count(multiple_assign_var27->v2);
            ((Err_662)?(puts(Err_662),exit(0)):(0));
            come_call_finalizer3(__right_value750,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(2);
            (Err_662 = come_decrement_ref_count2(Err_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")) {
        paren_663=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_663=(_Bool)1;
        }
        is_type_name_flag_664=(_Bool)0;
        {
            p_665=info->p;
            sline_666=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_667=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_667,info)) {
                    is_type_name_flag_664=(_Bool)1;
                }
                (word_667 = come_decrement_ref_count2(word_667, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_665;
            info->sline=sline_666;
        }
        if(        is_type_name_flag_664) {
            multiple_assign_var28=((struct tuple3$3sTypephcharphbool*)(__right_value752=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_668=(struct sType*)come_increment_ref_count(multiple_assign_var28->v1);
            name_669=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            err_670=multiple_assign_var28->v3;
            come_call_finalizer3(__right_value752,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_670) {
                multiple_assign_var29=((struct tuple2$2intcharph*)(__right_value753=err_msg(info,"parse type")));
                come_exception_var_c7_671=multiple_assign_var29->v1;
                Err_672=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_672)?(puts(Err_672),exit(0)):(0));
                come_call_finalizer3(__right_value753,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_672 = come_decrement_ref_count2(Err_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            paren_663&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1748, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value755=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1748, "struct sSizeOfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_668),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sSizeOfNode_finalize;
            _inf_value18->clone=(void*)sSizeOfNode_clone;
            _inf_value18->compile=(void*)sSizeOfNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sSizeOfNode_kind;
            __result430__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value759=_inf_value18));
            come_call_finalizer3(type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_669 = come_decrement_ref_count2(name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value755,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value759) ? __right_value759 = come_decrement_ref_count2(__right_value759, ((struct sNode*)__right_value759)->finalize, ((struct sNode*)__right_value759)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result430__;
            come_call_finalizer3(type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_669 = come_decrement_ref_count2(name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_663) {
                no_comma_675=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj291=exp_674;
                exp_674=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_675;
            }
            else {
                __dec_obj292=exp_674;
                exp_674=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_663&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1769, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value763=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1769, "struct sSizeOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_674),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value19->clone=(void*)sSizeOfExpNode_clone;
            _inf_value19->compile=(void*)sSizeOfExpNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sSizeOfExpNode_kind;
            __result433__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value767=_inf_value19));
            ((exp_674) ? exp_674 = come_decrement_ref_count2(exp_674, ((struct sNode*)exp_674)->finalize, ((struct sNode*)exp_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value763,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value767) ? __right_value767 = come_decrement_ref_count2(__right_value767, ((struct sNode*)__right_value767)->finalize, ((struct sNode*)__right_value767)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result433__;
            ((exp_674) ? exp_674 = come_decrement_ref_count2(exp_674, ((struct sNode*)exp_674)->finalize, ((struct sNode*)exp_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    else if(    charp_operator_equals(buf,"typeof")) {
        paren_677=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_677=(_Bool)1;
        }
        is_type_name_flag_678=(_Bool)0;
        {
            p_679=info->p;
            sline_680=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_681=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_681,info)) {
                    is_type_name_flag_678=(_Bool)1;
                }
                (word_681 = come_decrement_ref_count2(word_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_679;
            info->sline=sline_680;
        }
        if(        is_type_name_flag_678) {
            multiple_assign_var30=((struct tuple3$3sTypephcharphbool*)(__right_value769=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_682=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
            name_683=(char*)come_increment_ref_count(multiple_assign_var30->v2);
            err_684=multiple_assign_var30->v3;
            come_call_finalizer3(__right_value769,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_684) {
                multiple_assign_var31=((struct tuple2$2intcharph*)(__right_value770=err_msg(info,"parse type")));
                come_exception_var_c8_685=multiple_assign_var31->v1;
                Err_686=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                ((Err_686)?(puts(Err_686),exit(0)):(0));
                come_call_finalizer3(__right_value770,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_686 = come_decrement_ref_count2(Err_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            paren_677&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1814, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value772=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1814, "struct sTypeOfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_682),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sTypeOfNode_finalize;
            _inf_value20->clone=(void*)sTypeOfNode_clone;
            _inf_value20->compile=(void*)sTypeOfNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sTypeOfNode_kind;
            __result436__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value776=_inf_value20));
            come_call_finalizer3(type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_683 = come_decrement_ref_count2(name_683, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value772,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value776) ? __right_value776 = come_decrement_ref_count2(__right_value776, ((struct sNode*)__right_value776)->finalize, ((struct sNode*)__right_value776)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result436__;
            come_call_finalizer3(type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_683 = come_decrement_ref_count2(name_683, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_677) {
                no_comma_689=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj297=exp_688;
                exp_688=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_689;
            }
            else {
                __dec_obj298=exp_688;
                exp_688=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_677&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1835, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value780=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1835, "struct sTypeOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_688),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value21->clone=(void*)sTypeOfExpNode_clone;
            _inf_value21->compile=(void*)sTypeOfExpNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sTypeOfExpNode_kind;
            __result439__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value784=_inf_value21));
            ((exp_688) ? exp_688 = come_decrement_ref_count2(exp_688, ((struct sNode*)exp_688)->finalize, ((struct sNode*)exp_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value780,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value784) ? __right_value784 = come_decrement_ref_count2(__right_value784, ((struct sNode*)__right_value784)->finalize, ((struct sNode*)__right_value784)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result439__;
            ((exp_688) ? exp_688 = come_decrement_ref_count2(exp_688, ((struct sNode*)exp_688)->finalize, ((struct sNode*)exp_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    else if(    charp_operator_equals(buf,"dynamic_typeof")) {
        paren_691=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_691=(_Bool)1;
        }
        if(        !paren_691) {
            no_comma_693=info->no_comma;
            info->no_comma=(_Bool)1;
            __dec_obj301=exp_692;
            exp_692=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_693;
        }
        else {
            __dec_obj302=exp_692;
            exp_692=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
        }
        if(        paren_691&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1866, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value22=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value788=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1866, "struct sDynamicTypeOf*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_692),info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value22->clone=(void*)sDynamicTypeOf_clone;
        _inf_value22->compile=(void*)sDynamicTypeOf_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sDynamicTypeOf_kind;
        __result442__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value792=_inf_value22));
        ((exp_692) ? exp_692 = come_decrement_ref_count2(exp_692, ((struct sNode*)exp_692)->finalize, ((struct sNode*)exp_692)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value788,sDynamicTypeOf_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value792) ? __right_value792 = come_decrement_ref_count2(__right_value792, ((struct sNode*)__right_value792)->finalize, ((struct sNode*)__right_value792)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result442__;
        ((exp_692) ? exp_692 = come_decrement_ref_count2(exp_692, ((struct sNode*)exp_692)->finalize, ((struct sNode*)exp_692)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    charp_operator_equals(buf,"_Alignof")) {
        paren_695=(_Bool)0;
        if(        *info->p==40) {
            paren_695=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_696=(_Bool)0;
        {
            p_697=info->p;
            sline_698=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_699=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_699,info)) {
                    is_type_name_flag_696=(_Bool)1;
                }
                (word_699 = come_decrement_ref_count2(word_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_697;
            info->sline=sline_698;
        }
        if(        is_type_name_flag_696) {
            multiple_assign_var32=((struct tuple3$3sTypephcharphbool*)(__right_value794=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_700=(struct sType*)come_increment_ref_count(multiple_assign_var32->v1);
            name_701=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            err_702=multiple_assign_var32->v3;
            come_call_finalizer3(__right_value794,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_702) {
                multiple_assign_var33=((struct tuple2$2intcharph*)(__right_value795=err_msg(info,"parse type")));
                come_exception_var_c9_703=multiple_assign_var33->v1;
                Err_704=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                ((Err_704)?(puts(Err_704),exit(0)):(0));
                come_call_finalizer3(__right_value795,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_704 = come_decrement_ref_count2(Err_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(41,info);
            if(            paren_695&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1907, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value23=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value797=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1907, "struct sAlignOfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_700),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sAlignOfNode_finalize;
            _inf_value23->clone=(void*)sAlignOfNode_clone;
            _inf_value23->compile=(void*)sAlignOfNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sAlignOfNode_kind;
            __result445__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value801=_inf_value23));
            come_call_finalizer3(type_700,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_701 = come_decrement_ref_count2(name_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value797,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value801) ? __right_value801 = come_decrement_ref_count2(__right_value801, ((struct sNode*)__right_value801)->finalize, ((struct sNode*)__right_value801)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result445__;
            come_call_finalizer3(type_700,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_701 = come_decrement_ref_count2(name_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_695) {
                no_comma_707=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj307=exp_706;
                exp_706=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_707;
            }
            else {
                __dec_obj308=exp_706;
                exp_706=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1921, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value24=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value805=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1921, "struct sAlignOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_706),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value24->clone=(void*)sAlignOfExpNode_clone;
            _inf_value24->compile=(void*)sAlignOfExpNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sAlignOfExpNode_kind;
            __result448__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value809=_inf_value24));
            ((exp_706) ? exp_706 = come_decrement_ref_count2(exp_706, ((struct sNode*)exp_706)->finalize, ((struct sNode*)exp_706)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value805,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value809) ? __right_value809 = come_decrement_ref_count2(__right_value809, ((struct sNode*)__right_value809)->finalize, ((struct sNode*)__right_value809)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result448__;
            ((exp_706) ? exp_706 = come_decrement_ref_count2(exp_706, ((struct sNode*)exp_706)->finalize, ((struct sNode*)exp_706)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")) {
        paren_709=(_Bool)0;
        if(        *info->p==40) {
            paren_709=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_710=(_Bool)0;
        {
            p_711=info->p;
            sline_712=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_713=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_713,info)) {
                    is_type_name_flag_710=(_Bool)1;
                }
                (word_713 = come_decrement_ref_count2(word_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_711;
            info->sline=sline_712;
        }
        if(        is_type_name_flag_710) {
            multiple_assign_var34=((struct tuple3$3sTypephcharphbool*)(__right_value811=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_714=(struct sType*)come_increment_ref_count(multiple_assign_var34->v1);
            name_715=(char*)come_increment_ref_count(multiple_assign_var34->v2);
            err_716=multiple_assign_var34->v3;
            come_call_finalizer3(__right_value811,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_716) {
                multiple_assign_var35=((struct tuple2$2intcharph*)(__right_value812=err_msg(info,"parse type")));
                come_exception_var_c10_717=multiple_assign_var35->v1;
                Err_718=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                ((Err_718)?(puts(Err_718),exit(0)):(0));
                come_call_finalizer3(__right_value812,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_718 = come_decrement_ref_count2(Err_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            paren_709&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1962, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value25=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value814=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1962, "struct sAlignOfNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_714),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value25->clone=(void*)sAlignOfNode2_clone;
            _inf_value25->compile=(void*)sAlignOfNode2_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfNode2_kind;
            __result451__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value818=_inf_value25));
            come_call_finalizer3(type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_715 = come_decrement_ref_count2(name_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value814,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value818) ? __right_value818 = come_decrement_ref_count2(__right_value818, ((struct sNode*)__right_value818)->finalize, ((struct sNode*)__right_value818)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result451__;
            come_call_finalizer3(type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_715 = come_decrement_ref_count2(name_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_709) {
                no_comma_721=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj313=exp_720;
                exp_720=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_721;
            }
            else {
                __dec_obj314=exp_720;
                exp_720=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1976, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value26=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value822=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1976, "struct sAlignOfExpNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_720),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value26->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value26->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfExpNode2_kind;
            __result454__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value826=_inf_value26));
            ((exp_720) ? exp_720 = come_decrement_ref_count2(exp_720, ((struct sNode*)exp_720)->finalize, ((struct sNode*)exp_720)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value822,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value826) ? __right_value826 = come_decrement_ref_count2(__right_value826, ((struct sNode*)__right_value826)->finalize, ((struct sNode*)__right_value826)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result454__;
            ((exp_720) ? exp_720 = come_decrement_ref_count2(exp_720, ((struct sNode*)exp_720)->finalize, ((struct sNode*)exp_720)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")) {
        expected_next_character(40,info);
        is_type_name_flag_723=(_Bool)0;
        {
            p_724=info->p;
            sline_725=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_726=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_726,info)) {
                    is_type_name_flag_723=(_Bool)1;
                }
                (word_726 = come_decrement_ref_count2(word_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_724;
            info->sline=sline_725;
        }
        if(        is_type_name_flag_723) {
            multiple_assign_var36=((struct tuple3$3sTypephcharphbool*)(__right_value828=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_727=(struct sType*)come_increment_ref_count(multiple_assign_var36->v1);
            name_728=(char*)come_increment_ref_count(multiple_assign_var36->v2);
            err_729=multiple_assign_var36->v3;
            come_call_finalizer3(__right_value828,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_729) {
                multiple_assign_var37=((struct tuple2$2intcharph*)(__right_value829=err_msg(info,"parse type")));
                come_exception_var_c11_730=multiple_assign_var37->v1;
                Err_731=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                ((Err_731)?(puts(Err_731),exit(0)):(0));
                come_call_finalizer3(__right_value829,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_731 = come_decrement_ref_count2(Err_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(41,info);
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2009, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value27=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value831=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 2009, "struct sAlignAsNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_727),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignAsNode_finalize;
            _inf_value27->clone=(void*)sAlignAsNode_clone;
            _inf_value27->compile=(void*)sAlignAsNode_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignAsNode_kind;
            __result457__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value835=_inf_value27));
            come_call_finalizer3(type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_728 = come_decrement_ref_count2(name_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value831,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value835) ? __right_value835 = come_decrement_ref_count2(__right_value835, ((struct sNode*)__right_value835)->finalize, ((struct sNode*)__right_value835)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result457__;
            come_call_finalizer3(type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_728 = come_decrement_ref_count2(name_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            exp_733=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2016, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value28=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value838=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 2016, "struct sAlignAsExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_733),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value28->clone=(void*)sAlignAsExpNode_clone;
            _inf_value28->compile=(void*)sAlignAsExpNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignAsExpNode_kind;
            __result460__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value842=_inf_value28));
            ((exp_733) ? exp_733 = come_decrement_ref_count2(exp_733, ((struct sNode*)exp_733)->finalize, ((struct sNode*)exp_733)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(__right_value838,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value842) ? __right_value842 = come_decrement_ref_count2(__right_value842, ((struct sNode*)__right_value842)->finalize, ((struct sNode*)__right_value842)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result460__;
            ((exp_733) ? exp_733 = come_decrement_ref_count2(exp_733, ((struct sNode*)exp_733)->finalize, ((struct sNode*)exp_733)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    __result461__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value843=string_node_v20(buf,head,head_sline,info)));
    ((__right_value843) ? __right_value843 = come_decrement_ref_count2(__right_value843, ((struct sNode*)__right_value843)->finalize, ((struct sNode*)__right_value843)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result461__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj254;
char* __dec_obj255;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj254=self->v1;
            come_call_finalizer3(__dec_obj254,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj255=self->v2;
            __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__=(void*)0;
struct sNewNode* __result372__;
void* __right_value622 = (void*)0;
struct sNewNode* result_610;
void* __right_value623 = (void*)0;
char* __dec_obj256;
void* __right_value624 = (void*)0;
struct sType* __dec_obj257;
void* __right_value634 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj265;
struct sNewNode* __result379__;
    if(    self==(void*)0) {
        __result372__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    result_610=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_610->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj256=result_610->sname;
        result_610->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_610->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj257=result_610->type;
        result_610->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj257,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj265=result_610->initializer;
        result_610->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj265,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result379__ = gComeFunResultObject = __result_obj__ = result_610;
    come_call_finalizer3(result_610,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result373__;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_611;
struct list_item$1tuple2$2charphsNodephph* it_612;
void* __right_value633 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result378__;
    if(    self==((void*)0)) {
        __result373__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    result_611=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_612=self->head;
    while(it_612!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_611,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_612->item)));
        it_612=it_612->next;
    }
    __result378__ = gComeFunResultObject = __result_obj__ = result_611;
    come_call_finalizer3(result_611,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result374__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result374__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value627 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_613;
struct tuple2$2charphsNodeph* __dec_obj258;
void* __right_value628 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_614;
struct tuple2$2charphsNodeph* __dec_obj259;
void* __right_value629 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_615;
struct tuple2$2charphsNodeph* __dec_obj260;
struct list$1tuple2$2charphsNodephph* __result375__;
    if(    self->len==0) {
        litem_613=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value627=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1382, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_613->prev=((void*)0);
        litem_613->next=((void*)0);
        __dec_obj258=litem_613->item;
        litem_613->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj258,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_613;
        self->head=litem_613;
    }
    else if(    self->len==1) {
        litem_614=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value628=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1392, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_614->prev=self->head;
        litem_614->next=((void*)0);
        __dec_obj259=litem_614->item;
        litem_614->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj259,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_614;
        self->head->next=litem_614;
    }
    else {
        litem_615=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value629=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1402, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_615->prev=self->tail;
        litem_615->next=((void*)0);
        __dec_obj260=litem_615->item;
        litem_615->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj260,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_615;
        self->tail=litem_615;
    }
    self->len++;
    __result375__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result376__;
void* __right_value630 = (void*)0;
struct tuple2$2charphsNodeph* result_616;
void* __right_value631 = (void*)0;
char* __dec_obj261;
void* __right_value632 = (void*)0;
struct sNode* __dec_obj262;
struct tuple2$2charphsNodeph* __result377__;
    if(    self==(void*)0) {
        __result376__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    result_616=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj261=result_616->v1;
        result_616->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj262=result_616->v2;
        result_616->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result377__ = gComeFunResultObject = __result_obj__ = result_616;
    come_call_finalizer3(result_616,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj263;
struct sNode* __dec_obj264;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj263=self->v1;
            __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj264=self->v2;
            if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_623;
    result_623=0;
    result_623+=int_get_hash_key(((int)self->v1));
    result_623+=int_get_hash_key(((int)self->v2));
    return result_623;
}

static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj267;
struct sNode* __dec_obj268;
struct tuple2$2charphsNodeph* __result381__;
    __dec_obj267=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj268=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
    __result381__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
struct sDeleteNode* __result388__;
void* __right_value669 = (void*)0;
struct sDeleteNode* result_630;
void* __right_value670 = (void*)0;
char* __dec_obj269;
void* __right_value671 = (void*)0;
struct sNode* __dec_obj270;
struct sDeleteNode* __result389__;
    if(    self==(void*)0) {
        __result388__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result388__;
    }
    result_630=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_630->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj269=result_630->sname;
        result_630->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_630->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj270=result_630->node;
        result_630->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result389__ = gComeFunResultObject = __result_obj__ = result_630;
    come_call_finalizer3(result_630,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
struct sBorrowNode* __result391__;
void* __right_value676 = (void*)0;
struct sBorrowNode* result_632;
void* __right_value677 = (void*)0;
char* __dec_obj271;
void* __right_value678 = (void*)0;
struct sNode* __dec_obj272;
struct sBorrowNode* __result392__;
    if(    self==(void*)0) {
        __result391__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    result_632=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_632->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj271=result_632->sname;
        result_632->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_632->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj272=result_632->node;
        result_632->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result392__ = gComeFunResultObject = __result_obj__ = result_632;
    come_call_finalizer3(result_632,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__=(void*)0;
struct sCloneNode* __result394__;
void* __right_value683 = (void*)0;
struct sCloneNode* result_634;
void* __right_value684 = (void*)0;
char* __dec_obj273;
void* __right_value685 = (void*)0;
struct sNode* __dec_obj274;
struct sCloneNode* __result395__;
    if(    self==(void*)0) {
        __result394__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    result_634=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_634->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj273=result_634->sname;
        result_634->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_634->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj274=result_634->node;
        result_634->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result395__ = gComeFunResultObject = __result_obj__ = result_634;
    come_call_finalizer3(result_634,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__=(void*)0;
struct sDupeNode* __result397__;
void* __right_value690 = (void*)0;
struct sDupeNode* result_636;
void* __right_value691 = (void*)0;
char* __dec_obj275;
void* __right_value692 = (void*)0;
struct sNode* __dec_obj276;
struct sDupeNode* __result398__;
    if(    self==(void*)0) {
        __result397__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result397__;
    }
    result_636=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_636->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj275=result_636->sname;
        result_636->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_636->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj276=result_636->node;
        result_636->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result398__ = gComeFunResultObject = __result_obj__ = result_636;
    come_call_finalizer3(result_636,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
struct sDummyHeapNode* __result400__;
void* __right_value697 = (void*)0;
struct sDummyHeapNode* result_638;
void* __right_value698 = (void*)0;
char* __dec_obj277;
void* __right_value699 = (void*)0;
struct sNode* __dec_obj278;
struct sDummyHeapNode* __result401__;
    if(    self==(void*)0) {
        __result400__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result400__;
    }
    result_638=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_638->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj277=result_638->sname;
        result_638->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_638->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj278=result_638->node;
        result_638->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result401__ = gComeFunResultObject = __result_obj__ = result_638;
    come_call_finalizer3(result_638,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
struct sGCIncNode* __result403__;
void* __right_value704 = (void*)0;
struct sGCIncNode* result_640;
void* __right_value705 = (void*)0;
char* __dec_obj279;
void* __right_value706 = (void*)0;
struct sNode* __dec_obj280;
struct sGCIncNode* __result404__;
    if(    self==(void*)0) {
        __result403__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    result_640=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj279=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj280=result_640->node;
        result_640->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result404__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNode* __result406__;
void* __right_value711 = (void*)0;
struct sGCDecNode* result_642;
void* __right_value712 = (void*)0;
char* __dec_obj281;
void* __right_value713 = (void*)0;
struct sNode* __dec_obj282;
struct sGCDecNode* __result407__;
    if(    self==(void*)0) {
        __result406__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result406__;
    }
    result_642=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_642->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj281=result_642->sname;
        result_642->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_642->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj282=result_642->node;
        result_642->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result407__ = gComeFunResultObject = __result_obj__ = result_642;
    come_call_finalizer3(result_642,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNoFreeNode* __result409__;
void* __right_value718 = (void*)0;
struct sGCDecNoFreeNode* result_644;
void* __right_value719 = (void*)0;
char* __dec_obj283;
void* __right_value720 = (void*)0;
struct sNode* __dec_obj284;
struct sGCDecNoFreeNode* __result410__;
    if(    self==(void*)0) {
        __result409__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result409__;
    }
    result_644=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_644->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj283=result_644->sname;
        result_644->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_644->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj284=result_644->node;
        result_644->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result410__ = gComeFunResultObject = __result_obj__ = result_644;
    come_call_finalizer3(result_644,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__=(void*)0;
struct sIsHeap* __result412__;
void* __right_value727 = (void*)0;
struct sIsHeap* result_651;
void* __right_value728 = (void*)0;
char* __dec_obj285;
void* __right_value729 = (void*)0;
struct sType* __dec_obj286;
struct sIsHeap* __result413__;
    if(    self==(void*)0) {
        __result412__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result412__;
    }
    result_651=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_651->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj285=result_651->sname;
        result_651->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_651->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj286=result_651->type;
        result_651->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj286,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result413__ = gComeFunResultObject = __result_obj__ = result_651;
    come_call_finalizer3(result_651,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result413__;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__=(void*)0;
struct sIsPointer* __result415__;
void* __right_value736 = (void*)0;
struct sIsPointer* result_658;
void* __right_value737 = (void*)0;
char* __dec_obj287;
void* __right_value738 = (void*)0;
struct sType* __dec_obj288;
struct sIsPointer* __result416__;
    if(    self==(void*)0) {
        __result415__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result415__;
    }
    result_658=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_658->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj287=result_658->sname;
        result_658->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_658->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj288=result_658->type;
        result_658->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj288,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result416__ = gComeFunResultObject = __result_obj__ = result_658;
    come_call_finalizer3(result_658,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfNode* __result428__;
void* __right_value756 = (void*)0;
struct sSizeOfNode* result_673;
void* __right_value757 = (void*)0;
char* __dec_obj289;
void* __right_value758 = (void*)0;
struct sType* __dec_obj290;
struct sSizeOfNode* __result429__;
    if(    self==(void*)0) {
        __result428__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result428__;
    }
    result_673=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_673->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj289=result_673->sname;
        result_673->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_673->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj290=result_673->type;
        result_673->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj290,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result429__ = gComeFunResultObject = __result_obj__ = result_673;
    come_call_finalizer3(result_673,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result429__;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfExpNode* __result431__;
void* __right_value764 = (void*)0;
struct sSizeOfExpNode* result_676;
void* __right_value765 = (void*)0;
char* __dec_obj293;
void* __right_value766 = (void*)0;
struct sNode* __dec_obj294;
struct sSizeOfExpNode* __result432__;
    if(    self==(void*)0) {
        __result431__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result431__;
    }
    result_676=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_676->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj293=result_676->sname;
        result_676->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_676->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj294=result_676->exp;
        result_676->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result432__ = gComeFunResultObject = __result_obj__ = result_676;
    come_call_finalizer3(result_676,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result432__;
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfNode* __result434__;
void* __right_value773 = (void*)0;
struct sTypeOfNode* result_687;
void* __right_value774 = (void*)0;
char* __dec_obj295;
void* __right_value775 = (void*)0;
struct sType* __dec_obj296;
struct sTypeOfNode* __result435__;
    if(    self==(void*)0) {
        __result434__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result434__;
    }
    result_687=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_687->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj295=result_687->sname;
        result_687->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_687->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj296=result_687->type;
        result_687->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj296,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result435__ = gComeFunResultObject = __result_obj__ = result_687;
    come_call_finalizer3(result_687,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfExpNode* __result437__;
void* __right_value781 = (void*)0;
struct sTypeOfExpNode* result_690;
void* __right_value782 = (void*)0;
char* __dec_obj299;
void* __right_value783 = (void*)0;
struct sNode* __dec_obj300;
struct sTypeOfExpNode* __result438__;
    if(    self==(void*)0) {
        __result437__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result437__;
    }
    result_690=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_690->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_690->sname;
        result_690->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_690->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj300=result_690->exp;
        result_690->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result438__ = gComeFunResultObject = __result_obj__ = result_690;
    come_call_finalizer3(result_690,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result438__;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self){
void* __result_obj__=(void*)0;
struct sDynamicTypeOf* __result440__;
void* __right_value789 = (void*)0;
struct sDynamicTypeOf* result_694;
void* __right_value790 = (void*)0;
char* __dec_obj303;
void* __right_value791 = (void*)0;
struct sNode* __dec_obj304;
struct sDynamicTypeOf* __result441__;
    if(    self==(void*)0) {
        __result440__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result440__;
    }
    result_694=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_694->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj303=result_694->sname;
        result_694->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_694->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj304=result_694->exp;
        result_694->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result441__ = gComeFunResultObject = __result_obj__ = result_694;
    come_call_finalizer3(result_694,sDynamicTypeOf_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result441__;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode* __result443__;
void* __right_value798 = (void*)0;
struct sAlignOfNode* result_705;
void* __right_value799 = (void*)0;
char* __dec_obj305;
void* __right_value800 = (void*)0;
struct sType* __dec_obj306;
struct sAlignOfNode* __result444__;
    if(    self==(void*)0) {
        __result443__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result443__;
    }
    result_705=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_705->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj305=result_705->sname;
        result_705->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_705->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj306=result_705->type;
        result_705->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj306,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result444__ = gComeFunResultObject = __result_obj__ = result_705;
    come_call_finalizer3(result_705,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result444__;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode* __result446__;
void* __right_value806 = (void*)0;
struct sAlignOfExpNode* result_708;
void* __right_value807 = (void*)0;
char* __dec_obj309;
void* __right_value808 = (void*)0;
struct sNode* __dec_obj310;
struct sAlignOfExpNode* __result447__;
    if(    self==(void*)0) {
        __result446__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result446__;
    }
    result_708=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_708->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj309=result_708->sname;
        result_708->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_708->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj310=result_708->exp;
        result_708->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result447__ = gComeFunResultObject = __result_obj__ = result_708;
    come_call_finalizer3(result_708,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result447__;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode2* __result449__;
void* __right_value815 = (void*)0;
struct sAlignOfNode2* result_719;
void* __right_value816 = (void*)0;
char* __dec_obj311;
void* __right_value817 = (void*)0;
struct sType* __dec_obj312;
struct sAlignOfNode2* __result450__;
    if(    self==(void*)0) {
        __result449__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result449__;
    }
    result_719=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_719->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj311=result_719->sname;
        result_719->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_719->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj312=result_719->type;
        result_719->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj312,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result450__ = gComeFunResultObject = __result_obj__ = result_719;
    come_call_finalizer3(result_719,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result450__;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode2* __result452__;
void* __right_value823 = (void*)0;
struct sAlignOfExpNode2* result_722;
void* __right_value824 = (void*)0;
char* __dec_obj315;
void* __right_value825 = (void*)0;
struct sNode* __dec_obj316;
struct sAlignOfExpNode2* __result453__;
    if(    self==(void*)0) {
        __result452__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result452__;
    }
    result_722=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_722->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_722->sname;
        result_722->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_722->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj316=result_722->exp;
        result_722->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result453__ = gComeFunResultObject = __result_obj__ = result_722;
    come_call_finalizer3(result_722,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result453__;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsNode* __result455__;
void* __right_value832 = (void*)0;
struct sAlignAsNode* result_732;
void* __right_value833 = (void*)0;
char* __dec_obj317;
void* __right_value834 = (void*)0;
struct sType* __dec_obj318;
struct sAlignAsNode* __result456__;
    if(    self==(void*)0) {
        __result455__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result455__;
    }
    result_732=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_732->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj317=result_732->sname;
        result_732->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_732->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj318=result_732->type;
        result_732->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj318,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result456__ = gComeFunResultObject = __result_obj__ = result_732;
    come_call_finalizer3(result_732,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result456__;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsExpNode* __result458__;
void* __right_value839 = (void*)0;
struct sAlignAsExpNode* result_734;
void* __right_value840 = (void*)0;
char* __dec_obj319;
void* __right_value841 = (void*)0;
struct sNode* __dec_obj320;
struct sAlignAsExpNode* __result459__;
    if(    self==(void*)0) {
        __result458__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result458__;
    }
    result_734=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_734->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj319=result_734->sname;
        result_734->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_734->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj320=result_734->exp;
        result_734->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result459__ = gComeFunResultObject = __result_obj__ = result_734;
    come_call_finalizer3(result_734,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result459__;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value844 = (void*)0;
struct sNode* __result462__;
void* __right_value845 = (void*)0;
struct sNode* __result463__;
void* __right_value846 = (void*)0;
struct sNode* __result464__;
_Bool come_c_735;
void* __right_value847 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var38 = (void*)0;
int come_exception_var_c12_736=0;
char* Err_737=0;
void* __right_value848 = (void*)0;
struct sNode* __result465__;
void* __right_value849 = (void*)0;
struct sNode* __result466__;
    if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result462__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value844=create_nothing_node(info)));
            ((__right_value844) ? __right_value844 = come_decrement_ref_count2(__right_value844, ((struct sNode*)__right_value844)->finalize, ((struct sNode*)__right_value844)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result462__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result463__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value845=create_nothing_node(info)));
            ((__right_value845) ? __right_value845 = come_decrement_ref_count2(__right_value845, ((struct sNode*)__right_value845)->finalize, ((struct sNode*)__right_value845)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result463__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result464__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value846=create_nothing_node(info)));
            ((__right_value846) ? __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result464__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_735=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_735;
            }
            else {
                gComeC=(_Bool)1;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else {
            multiple_assign_var38=((struct tuple2$2intcharph*)(__right_value847=err_msg(info,"invalid using")));
            come_exception_var_c12_736=multiple_assign_var38->v1;
            Err_737=(char*)come_increment_ref_count(multiple_assign_var38->v2);
            ((Err_737)?(puts(Err_737),exit(0)):(0));
            come_call_finalizer3(__right_value847,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(2);
            (Err_737 = come_decrement_ref_count2(Err_737, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __result465__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value848=create_nothing_node(info)));
        ((__right_value848) ? __right_value848 = come_decrement_ref_count2(__right_value848, ((struct sNode*)__right_value848)->finalize, ((struct sNode*)__right_value848)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result465__;
    }
    __result466__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value849=top_level_v93(buf,head,head_sline,info)));
    ((__right_value849) ? __right_value849 = come_decrement_ref_count2(__right_value849, ((struct sNode*)__right_value849)->finalize, ((struct sNode*)__right_value849)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct sNode* _inf_value29;
struct sImplementsNode* _inf_obj_value29;
void* __right_value856 = (void*)0;
struct sNode* __result469__;
    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2100, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value29=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value851=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2100, "struct sImplementsNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value29->_protocol_obj=_inf_obj_value29;
    _inf_value29->finalize=(void*)sImplementsNode_finalize;
    _inf_value29->clone=(void*)sImplementsNode_clone;
    _inf_value29->compile=(void*)sImplementsNode_compile;
    _inf_value29->sline=(void*)sNodeBase_sline;
    _inf_value29->sline_real=(void*)sNodeBase_sline_real;
    _inf_value29->sname=(void*)sNodeBase_sname;
    _inf_value29->terminated=(void*)sNodeBase_terminated;
    _inf_value29->kind=(void*)sImplementsNode_kind;
    __result469__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value856=_inf_value29));
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value851,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value856) ? __right_value856 = come_decrement_ref_count2(__right_value856, ((struct sNode*)__right_value856)->finalize, ((struct sNode*)__right_value856)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result469__;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
struct sImplementsNode* __result467__;
void* __right_value852 = (void*)0;
struct sImplementsNode* result_738;
void* __right_value853 = (void*)0;
char* __dec_obj321;
void* __right_value854 = (void*)0;
struct sNode* __dec_obj322;
void* __right_value855 = (void*)0;
struct sType* __dec_obj323;
struct sImplementsNode* __result468__;
    if(    self==(void*)0) {
        __result467__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result467__;
    }
    result_738=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_738->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj321=result_738->sname;
        result_738->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_738->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj322=result_738->obj_exp;
        result_738->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
        if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj323=result_738->inf_type;
        result_738->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
        come_call_finalizer3(__dec_obj323,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result468__ = gComeFunResultObject = __result_obj__ = result_738;
    come_call_finalizer3(result_738,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result468__;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value857 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var39 = (void*)0;
struct sType* type3_739=0;
char* name2_740=0;
_Bool err_741=0;
void* __right_value858 = (void*)0;
struct sType* inf_type_742;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct sNode* _inf_value30;
struct sImplementsNode* _inf_obj_value30;
void* __right_value861 = (void*)0;
struct sNode* __result470__;
void* __right_value862 = (void*)0;
struct sNode* __result471__;
    if(    !gComeC&&parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var39=((struct tuple3$3sTypephcharphbool*)(__right_value857=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_739=(struct sType*)come_increment_ref_count(multiple_assign_var39->v1);
        name2_740=(char*)come_increment_ref_count(multiple_assign_var39->v2);
        err_741=multiple_assign_var39->v3;
        come_call_finalizer3(__right_value857,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_741) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_742=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_739));
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2117, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value860=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2117, "struct sImplementsNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_742),info))));
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sImplementsNode_finalize;
        _inf_value30->clone=(void*)sImplementsNode_clone;
        _inf_value30->compile=(void*)sImplementsNode_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sImplementsNode_kind;
        __result470__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value861=_inf_value30));
        come_call_finalizer3(type3_739,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name2_740 = come_decrement_ref_count2(name2_740, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(inf_type_742,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value860,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value861) ? __right_value861 = come_decrement_ref_count2(__right_value861, ((struct sNode*)__right_value861)->finalize, ((struct sNode*)__right_value861)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result470__;
        come_call_finalizer3(type3_739,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name2_740 = come_decrement_ref_count2(name2_740, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(inf_type_742,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result471__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value862=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info)));
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((__right_value862) ? __right_value862 = come_decrement_ref_count2(__right_value862, ((struct sNode*)__right_value862)->finalize, ((struct sNode*)__right_value862)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result471__;
}

