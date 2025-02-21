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
    _Bool mFunctionParam;
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
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
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
void err_msg(struct sInfo* info, char* msg, ...);
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
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
            self->items[i_218] = come_decrement_ref_count2(self->items[i_218], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(    (_if_conditional1=(((struct sFun*)((void*)(__right_value256=map$2voidphvoidphp_operator_load_element(info->funcs,finalizer_name_317))))==((void*)0))),    come_call_finalizer3(__right_value256,(void*)0, 0, 1, 0, 0, __result_obj__),
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
    if(    (_if_conditional2=(((struct sFun*)((void*)(__right_value259=map$2voidphvoidphp_operator_load_element(info->funcs,cloner_name_318))))==((void*)0))),    come_call_finalizer3(__right_value259,(void*)0, 0, 1, 0, 0, __result_obj__),
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
            name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    (_if_conditional3=(((struct sFun*)((void*)(__right_value262=map$2voidphvoidphp_operator_load_element(info->funcs,get_hash_key_name_319))))==((void*)0))),    come_call_finalizer3(__right_value262,(void*)0, 0, 1, 0, 0, __result_obj__),
    _if_conditional3) {
        multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value263=create_get_hash_key_automatically(any_type,"get_hash_key",info)));
        fun_326=multiple_assign_var2->v1;
        name_327=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        come_call_finalizer3(__right_value263,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj35=get_hash_key_name_319;
        get_hash_key_name_319=(char*)come_increment_ref_count(name_327);
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_327 = come_decrement_ref_count2(name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional4=(((struct sFun*)((void*)(__right_value264=map$2voidphvoidphp_operator_load_element(info->funcs,equaler_name_320))))==((void*)0))),    come_call_finalizer3(__right_value264,(void*)0, 0, 1, 0, 0, __result_obj__),
    _if_conditional4) {
        multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value265=create_equals_automatically(any_type,"equals",info)));
        fun_328=multiple_assign_var3->v1;
        name_329=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer3(__right_value265,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj36=equaler_name_320;
        equaler_name_320=(char*)come_increment_ref_count(name_329);
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_329 = come_decrement_ref_count2(name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result237__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4charphcharphcharphcharph*)(__right_value272=tuple4$4charphcharphcharphcharph_initialize((struct tuple4$4charphcharphcharphcharph**)come_increment_ref_count((struct tuple4$4charphcharphcharphcharph*)come_calloc(1, sizeof(struct tuple4$4charphcharphcharphcharph)*(1), "21obj.c", 36, "struct tuple4$4charphcharphcharphcharph", tuple4$4charphcharphcharphcharph_finalize, tuple4$4charphcharphcharphcharph_clone, tuple4$4charphcharphcharphcharph_get_hash_key, tuple4$4charphcharphcharphcharph_equals)),(char*)come_increment_ref_count(finalizer_name_317),(char*)come_increment_ref_count(cloner_name_318),(char*)come_increment_ref_count(get_hash_key_name_319),(char*)come_increment_ref_count(equaler_name_320))));
    come_call_finalizer3(any_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_317 = come_decrement_ref_count2(finalizer_name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_318 = come_decrement_ref_count2(cloner_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_319 = come_decrement_ref_count2(get_hash_key_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    equaler_name_320 = come_decrement_ref_count2(equaler_name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                come_call_finalizer3(default_value_321, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
            it_323++;
            if(            it_323>=self->size) {
                it_323=0;
            }
            else if(            it_323==hash_322) {
                __result231__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_321);
                come_call_finalizer3(default_value_321, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
        }
        else {
            __result232__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_321);
            come_call_finalizer3(default_value_321, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result232__;
        }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_321);
    come_call_finalizer3(default_value_321, (void*)0, 0, 0, 1, 0, (void*)0);
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
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj38=self->v2;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj39=self->v3;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        if(        self->v4==gComeFunResultObject) {
            __dec_obj40=self->v4;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v3 = come_decrement_ref_count2(v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v4 = come_decrement_ref_count2(v4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj50=self->v2;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj51=self->v3;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        if(        self->v4==gComeFunResultObject) {
            __dec_obj52=self->v4;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj54=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj55=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj56=self->mChannelType;
            come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj57=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj57,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj59=self->mArrayNum;
            come_call_finalizer3(__dec_obj59,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj61=self->mParamTypes;
            come_call_finalizer3(__dec_obj61,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj62=self->mParamNames;
            come_call_finalizer3(__dec_obj62,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj63=self->mResultType;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 1, 0, (void*)0);
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
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj65=self->mAlignas;
            if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj66=self->mOriginalTypeName;
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj67=self->mAsmName;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj68=self->mTupleName;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj69=self->mAttribute;
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj58,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
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
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer);
    come_call_finalizer3(__dec_obj96,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
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
    __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
_Bool __result276__;
struct sType* right_type_441;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __dec_obj117;
void* __right_value348 = (void*)0;
char* c_value_442;
void* __right_value349 = (void*)0;
char* __dec_obj118;
void* __right_value350 = (void*)0;
struct sType* __dec_obj119;
void* __right_value354 = (void*)0;
struct sType* type3_446;
void* __right_value355 = (void*)0;
char* type_name3_447;
char* obj_448;
void* __right_value356 = (void*)0;
struct sType* any_type_449;
void* __right_value357 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var9 = (void*)0;
char* finalizer_name_450=0;
char* cloner_name_451=0;
char* get_hash_key_name_452=0;
char* equaler_name_453=0;
void* __right_value358 = (void*)0;
char* any_type_name_454;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
char* __dec_obj123;
void* __right_value361 = (void*)0;
struct sType* __dec_obj124;
struct sType* any_type_455;
struct sType* __dec_obj125;
void* __right_value362 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var10 = (void*)0;
char* finalizer_name_456=0;
char* cloner_name_457=0;
char* get_hash_key_name_458=0;
char* equaler_name_459=0;
void* __right_value363 = (void*)0;
char* any_type_name_460;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
char* __dec_obj126;
void* __right_value366 = (void*)0;
struct sType* __dec_obj127;
void* __right_value367 = (void*)0;
struct sType* any_type_461;
void* __right_value368 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var11 = (void*)0;
char* finalizer_name_462=0;
char* cloner_name_463=0;
char* get_hash_key_name_464=0;
char* equaler_name_465=0;
void* __right_value369 = (void*)0;
char* any_type_name_466;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
char* __dec_obj128;
void* __right_value372 = (void*)0;
struct sType* __dec_obj129;
char* finalizer_name_467;
char* cloner_name_468;
char* get_hash_key_name_469;
char* equaler_name_470;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
char* __dec_obj130;
void* __right_value375 = (void*)0;
struct sType* __dec_obj131;
_Bool __result278__;
obj_401 = (void*)0;
obj_448 = (void*)0;
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
        come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        type_name3_399=(char*)come_increment_ref_count(make_type_name_string(type3_398,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value322=make_define_var(type3_398,var_name_397,(_Bool)0,info))));
        __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
            __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            any_type_402->mPointerNum++;
            __dec_obj110=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, any_type_402));
            come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_403 = come_decrement_ref_count2(finalizer_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_404 = come_decrement_ref_count2(cloner_name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_405 = come_decrement_ref_count2(get_hash_key_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_406 = come_decrement_ref_count2(equaler_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_407 = come_decrement_ref_count2(any_type_name_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            any_type_408->mPointerNum++;
            type2_383->mHeap=(_Bool)1;
            type2_383->mPointerNum++;
            if(            type2_383->mNoSolvedGenericsType) {
                type2_383->mNoSolvedGenericsType->mPointerNum++;
                type2_383->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
            __dec_obj112=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_409 = come_decrement_ref_count2(finalizer_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_410 = come_decrement_ref_count2(cloner_name_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_411 = come_decrement_ref_count2(get_hash_key_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_412 = come_decrement_ref_count2(equaler_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_413 = come_decrement_ref_count2(any_type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            any_type_414->mPointerNum++;
            __dec_obj114=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, any_type_414));
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_414,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_415 = come_decrement_ref_count2(finalizer_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_416 = come_decrement_ref_count2(cloner_name_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_417 = come_decrement_ref_count2(get_hash_key_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_418 = come_decrement_ref_count2(equaler_name_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_419 = come_decrement_ref_count2(any_type_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            finalizer_name_420="(void*)0";
            cloner_name_421="(void*)0";
            get_hash_key_name_422="(void*)0";
            equaler_name_423="(void*)0";
            __dec_obj115=obj_401;
            obj_401=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",var_name_397,type_name_394,type_name_394,((char*)(__right_value342=buffer_to_string(num_string_374))),info->sname,info->sline,type_name3_399,finalizer_name_420,cloner_name_421,get_hash_key_name_422,equaler_name_423));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
                name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_433) { exp_433 = come_decrement_ref_count2(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_426,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_397 = come_decrement_ref_count2(var_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type3_398,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name3_399 = come_decrement_ref_count2(type_name3_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
                obj_401 = come_decrement_ref_count2(obj_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_372,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_374,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_383,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_394 = come_decrement_ref_count2(type_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_395 = come_decrement_ref_count2(type_name2_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                    come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name_439 = come_decrement_ref_count2(field_name_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_440,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name_439 = come_decrement_ref_count2(field_name_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_440,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_437,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_436==((void*)0)) {
                err_msg(info,"field %s is not defined",name_432);
                __result276__ = (_Bool)0;
                name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_433) { exp_433 = come_decrement_ref_count2(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value2_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_426,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_397 = come_decrement_ref_count2(var_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type3_398,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name3_399 = come_decrement_ref_count2(type_name3_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
                obj_401 = come_decrement_ref_count2(obj_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_372,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_374,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_383,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_394 = come_decrement_ref_count2(type_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_395 = come_decrement_ref_count2(type_name2_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result276__;
            }
            right_type_441=(struct sType*)come_increment_ref_count(come_value2_435->type);
            check_assign_type(((char*)(__right_value347=xsprintf("\%s is assining to",((char*)(__right_value346=string_to_string(name_432)))))),left_type_436,right_type_441,come_value2_435,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj117=right_type_441;
            right_type_441=(struct sType*)come_increment_ref_count(come_value2_435->type);
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_436->mHeap&&right_type_441->mHeap&&left_type_436->mPointerNum>0&&right_type_441->mPointerNum>0) {
                c_value_442=(char*)come_increment_ref_count(increment_ref_count_object(left_type_436,come_value2_435->c_value,info));
                buffer_append_format(buf_400,"%s->%s = %s",var_name_397,name_432,c_value_442);
                c_value_442 = come_decrement_ref_count2(c_value_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                buffer_append_format(buf_400,"%s->%s = %s",var_name_397,name_432,come_value2_435->c_value);
            }
            buffer_append_str(buf_400,",");
            i_425++;
            name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_433) { exp_433 = come_decrement_ref_count2(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value2_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type_441,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_426,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_400,var_name_397);
        buffer_append_str(buf_400,")");
        __dec_obj118=come_value_373->c_value;
        come_value_373->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_400));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        type2_383->mHeap=(_Bool)1;
        type2_383->mPointerNum++;
        if(        type2_383->mNoSolvedGenericsType) {
            type2_383->mNoSolvedGenericsType->mPointerNum++;
            type2_383->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj119=come_value_373->type;
        come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
        come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_373->var=((void*)0);
        append_object_to_right_values2(come_value_373,(struct sType*)come_increment_ref_count(type2_383),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_373->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_373));
        var_name_397 = come_decrement_ref_count2(var_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_398,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name3_399 = come_decrement_ref_count2(type_name3_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
        obj_401 = come_decrement_ref_count2(obj_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        type3_446=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
        type3_446->mPointerNum++;
        type3_446->mHeap=(_Bool)1;
        if(        type3_446->mNoSolvedGenericsType) {
            type3_446->mNoSolvedGenericsType->mPointerNum++;
            type3_446->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        type_name3_447=(char*)come_increment_ref_count(make_type_name_string(type3_446,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        type2_383->mAnyClass&&type2_383->mAnyOriginalType) {
            any_type_449=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383->mAnyOriginalType));
            any_type_449->mPointerNum=1;
            any_type_449->mHeap=(_Bool)1;
            multiple_assign_var9=((struct tuple4$4charphcharphcharphcharph*)(__right_value357=create_vtable((struct sType*)come_increment_ref_count(any_type_449),info)));
            finalizer_name_450=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            cloner_name_451=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            get_hash_key_name_452=(char*)come_increment_ref_count(multiple_assign_var9->v3);
            equaler_name_453=(char*)come_increment_ref_count(multiple_assign_var9->v4);
            come_call_finalizer3(__right_value357,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
            any_type_449->mPointerNum--;
            any_type_name_454=(char*)come_increment_ref_count(make_type_name_string(any_type_449,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj123=come_value_373->c_value;
            come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",any_type_name_454,any_type_name_454,((char*)(__right_value359=buffer_to_string(num_string_374))),info->sname,info->sline,any_type_name_454,finalizer_name_450,cloner_name_451,get_hash_key_name_452,equaler_name_453));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            type2_383->mPointerNum--;
            any_type_449->mPointerNum++;
            __dec_obj124=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, any_type_449));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_450 = come_decrement_ref_count2(finalizer_name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_451 = come_decrement_ref_count2(cloner_name_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_452 = come_decrement_ref_count2(get_hash_key_name_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_453 = come_decrement_ref_count2(equaler_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_454 = come_decrement_ref_count2(any_type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        generics_any_child_384) {
            any_type_455=(struct sType*)come_increment_ref_count(no_solved_type_385);
            __dec_obj125=any_type_455->mAnyOriginalType;
            any_type_455->mAnyOriginalType=((void*)0);
            come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
            any_type_455->mPointerNum=1;
            any_type_455->mHeap=(_Bool)1;
            multiple_assign_var10=((struct tuple4$4charphcharphcharphcharph*)(__right_value362=create_vtable((struct sType*)come_increment_ref_count(any_type_455),info)));
            finalizer_name_456=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            cloner_name_457=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            get_hash_key_name_458=(char*)come_increment_ref_count(multiple_assign_var10->v3);
            equaler_name_459=(char*)come_increment_ref_count(multiple_assign_var10->v4);
            come_call_finalizer3(__right_value362,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
            any_type_455->mPointerNum--;
            any_type_name_460=(char*)come_increment_ref_count(make_type_name_string(any_type_455,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj126=come_value_373->c_value;
            come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_394,type_name_394,((char*)(__right_value364=buffer_to_string(num_string_374))),info->sname,info->sline,type_name3_447,finalizer_name_456,cloner_name_457,get_hash_key_name_458,equaler_name_459));
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            any_type_455->mPointerNum++;
            type2_383->mHeap=(_Bool)1;
            type2_383->mPointerNum++;
            if(            type2_383->mNoSolvedGenericsType) {
                type2_383->mNoSolvedGenericsType->mPointerNum++;
                type2_383->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
            __dec_obj127=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_455,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_456 = come_decrement_ref_count2(finalizer_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_457 = come_decrement_ref_count2(cloner_name_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_458 = come_decrement_ref_count2(get_hash_key_name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_459 = come_decrement_ref_count2(equaler_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_460 = come_decrement_ref_count2(any_type_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        type2_383->mCreateVTable||(type2_383->mClass->mDynamic&&type2_383->mPointerNum==0)) {
            any_type_461=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
            any_type_461->mPointerNum=1;
            any_type_461->mHeap=(_Bool)1;
            multiple_assign_var11=((struct tuple4$4charphcharphcharphcharph*)(__right_value368=create_vtable((struct sType*)come_increment_ref_count(any_type_461),info)));
            finalizer_name_462=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            cloner_name_463=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            get_hash_key_name_464=(char*)come_increment_ref_count(multiple_assign_var11->v3);
            equaler_name_465=(char*)come_increment_ref_count(multiple_assign_var11->v4);
            come_call_finalizer3(__right_value368,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
            any_type_461->mPointerNum--;
            any_type_name_466=(char*)come_increment_ref_count(make_type_name_string(any_type_461,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj128=come_value_373->c_value;
            come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",any_type_name_466,any_type_name_466,((char*)(__right_value370=buffer_to_string(num_string_374))),info->sname,info->sline,any_type_name_466,finalizer_name_462,cloner_name_463,get_hash_key_name_464,equaler_name_465));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            type2_383->mPointerNum--;
            any_type_461->mPointerNum++;
            __dec_obj129=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, any_type_461));
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_461,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_462 = come_decrement_ref_count2(finalizer_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_463 = come_decrement_ref_count2(cloner_name_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_464 = come_decrement_ref_count2(get_hash_key_name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_465 = come_decrement_ref_count2(equaler_name_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_466 = come_decrement_ref_count2(any_type_name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            finalizer_name_467="(void*)0";
            cloner_name_468="(void*)0";
            get_hash_key_name_469="(void*)0";
            equaler_name_470="(void*)0";
            __dec_obj130=come_value_373->c_value;
            come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_394,type_name_394,((char*)(__right_value373=buffer_to_string(num_string_374))),info->sname,info->sline,type_name3_447,finalizer_name_467,cloner_name_468,get_hash_key_name_469,equaler_name_470));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            type2_383->mHeap=(_Bool)1;
            type2_383->mPointerNum++;
            if(            type2_383->mNoSolvedGenericsType) {
                type2_383->mNoSolvedGenericsType->mPointerNum++;
                type2_383->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
            __dec_obj131=come_value_373->type;
            come_value_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_383));
            come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_373->var=((void*)0);
        append_object_to_right_values2(come_value_373,(struct sType*)come_increment_ref_count(type2_383),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_373->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_373));
        come_call_finalizer3(type3_446,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name3_447 = come_decrement_ref_count2(type_name3_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        obj_448 = come_decrement_ref_count2(obj_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result278__ = (_Bool)1;
    come_call_finalizer3(initializer_372,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_374,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_383,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(no_solved_type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_394 = come_decrement_ref_count2(type_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_395 = come_decrement_ref_count2(type_name2_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result278__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj70;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj70=self->sname;
            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj72=result_349->mOriginalLoadVarType;
        result_349->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj73=result_349->mAnyOriginalType;
        result_349->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj74=result_349->mChannelType;
        result_349->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj78=result_349->mGenericsTypes;
        result_349->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj78,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj82=result_349->mArrayNum;
        result_349->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj82,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj83=result_349->mParamTypes;
        result_349->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj83,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj87=result_349->mParamNames;
        result_349->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj87,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj88=result_349->mResultType;
        result_349->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(__dec_obj75,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_353;
        self->head=litem_353;
    }
    else if(    self->len==1) {
        litem_354=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value282=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_354->prev=self->head;
        litem_354->next=((void*)0);
        __dec_obj76=litem_354->item;
        litem_354->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_354;
        self->head->next=litem_354;
    }
    else {
        litem_355=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value283=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_355->prev=self->tail;
        litem_355->next=((void*)0);
        __dec_obj77=litem_355->item;
        litem_355->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_355;
        self->tail=litem_355;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
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
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    if(result_361) { result_361 = come_decrement_ref_count2(result_361, ((struct sNode*)result_361)->finalize, ((struct sNode*)result_361)->_protocol_obj, 0, 1, 0, (void*)0); } 
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
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj97,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj99=self->v2;
            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj101=self->type;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj102=self->initializer;
            come_call_finalizer3(__dec_obj102,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
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
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj104=self->type;
            come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 1, 0, (void*)0);
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
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj106=self->c_value_without_cast_object_value;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
struct list_item$1CVALUEph* litem_443;
struct CVALUE* __dec_obj120;
void* __right_value352 = (void*)0;
struct list_item$1CVALUEph* litem_444;
struct CVALUE* __dec_obj121;
void* __right_value353 = (void*)0;
struct list_item$1CVALUEph* litem_445;
struct CVALUE* __dec_obj122;
struct list$1CVALUEph* __result277__;
    if(    self->len==0) {
        litem_443=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value351=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_443->prev=((void*)0);
        litem_443->next=((void*)0);
        __dec_obj120=litem_443->item;
        litem_443->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_443;
        self->head=litem_443;
    }
    else if(    self->len==1) {
        litem_444=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value352=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_444->prev=self->head;
        litem_444->next=((void*)0);
        __dec_obj121=litem_444->item;
        litem_444->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj121,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_444;
        self->head->next=litem_444;
    }
    else {
        litem_445=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value353=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_445->prev=self->tail;
        litem_445->next=((void*)0);
        __dec_obj122=litem_445->item;
        litem_445->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj122,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_445;
        self->tail=litem_445;
    }
    self->len++;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value378 = (void*)0;
struct sType* __dec_obj133;
struct sImplementsNode* __result279__;
    ((struct sNodeBase*)(__right_value376=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value376,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj132=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_exp));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj133=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type));
    come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
char* __result280__;
    __result280__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value379=__builtin_string("sImplementsNode")));
    __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value380 = (void*)0;
struct sNode* obj_exp_471;
void* __right_value381 = (void*)0;
struct sType* inf_type_472;
_Bool Value_473;
_Bool __result281__;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_474;
void* __right_value383 = (void*)0;
struct sType* type_475;
struct sClass* klass_476;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct CVALUE* come_value2_477;
void* __right_value386 = (void*)0;
struct sType* type2_478;
void* __right_value387 = (void*)0;
char* type_name_479;
void* __right_value388 = (void*)0;
char* type_name2_480;
int inf_num_stack_482;
void* __right_value389 = (void*)0;
char* buf_483;
void* __right_value390 = (void*)0;
char* buf2_484;
void* __right_value391 = (void*)0;
char* c_value_485;
void* __right_value392 = (void*)0;
struct sType* typeX_486;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
int i_487;
void* __right_value395 = (void*)0;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_491=0;
struct sType* field_type_492=0;
void* __right_value396 = (void*)0;
char* method_name_493;
void* __right_value397 = (void*)0;
struct sFun* fun_494;
void* __right_value398 = (void*)0;
struct sType* type2_497;
void* __right_value399 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var13 = (void*)0;
struct sFun* fun2_498=0;
char* real_fun_name_499=0;
char* __dec_obj137;
void* __right_value400 = (void*)0;
struct sType* type2_500;
void* __right_value401 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var14 = (void*)0;
struct sFun* fun2_501=0;
char* real_fun_name_502=0;
char* __dec_obj138;
void* __right_value402 = (void*)0;
struct sClass* klass2_503;
void* __right_value403 = (void*)0;
_Bool _while_condtional1;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
char* __dec_obj139;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
char* __dec_obj140;
void* __right_value409 = (void*)0;
struct sType* type3_504;
void* __right_value410 = (void*)0;
struct sType* __dec_obj141;
_Bool __result288__;
    obj_exp_471=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
    inf_type_472=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
    Value_473=node_compile(obj_exp_471,info);
    if(    !Value_473) {
        __result281__ = (_Bool)0;
        if(obj_exp_471) { obj_exp_471 = come_decrement_ref_count2(obj_exp_471, ((struct sNode*)obj_exp_471)->finalize, ((struct sNode*)obj_exp_471)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(inf_type_472,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result281__;
    }
    else {
    }
    come_value_474=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_475=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_474->type));
    type_475->mPointerNum--;
    type_475->mHeap=(_Bool)0;
    klass_476=inf_type_472->mClass;
    come_value2_477=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 405, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_478=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_472));
    type_name_479=(char*)come_increment_ref_count(make_type_name_string(inf_type_472,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_480=(char*)come_increment_ref_count(make_type_name_string(type_475,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_481=0;
    ++inf_num_481;
    inf_num_stack_482=inf_num_481;
    buf_483=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_479,inf_num_stack_482));
    add_come_code_at_function_head(info,buf_483);
    buf2_484=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_480,inf_num_stack_482));
    add_come_code_at_function_head(info,buf2_484);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0);\n",inf_num_stack_482,type_name_479,type_name_479,info->sname,info->sline,type_name_479);
    c_value_485=(char*)come_increment_ref_count(increment_ref_count_object(come_value_474->type,come_value_474->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack_482,c_value_485);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack_482,inf_num_stack_482);
    typeX_486=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_475));
    typeX_486->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(__right_value393=create_finalizer_automatically(typeX_486,"finalize",info)));
    come_call_finalizer3(__right_value393,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    ((struct tuple2$2sFunpcharph*)(__right_value394=create_cloner_automatically(typeX_486,"clone",info)));
    come_call_finalizer3(__right_value394,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    i_487=1;    i_487<list$1voidphp_length(klass_476->mFields);    i_487++    ){
        multiple_assign_var12=((struct tuple2$2charphsTypeph*)((void*)(__right_value395=list$1voidphp_operator_load_element(klass_476->mFields,i_487))));
        name_491=(char*)come_increment_ref_count(multiple_assign_var12->v1);
        field_type_492=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
        come_call_finalizer3(__right_value395,(void*)0, 0, 1, 0, 0, (void*)0);
        method_name_493=(char*)come_increment_ref_count(create_method_name(type_475,(_Bool)0,name_491,info,(_Bool)1));
        fun_494=((struct sFun*)((void*)(__right_value397=map$2voidphvoidphp_at(info->funcs,method_name_493,((void*)0)))));
        come_call_finalizer3(__right_value397,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        fun_494==((void*)0)&&string_operator_equals(name_491,"to_string")) {
            type2_497=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_475));
            type2_497->mPointerNum++;
            multiple_assign_var13=((struct tuple2$2sFunpcharph*)(__right_value399=create_to_string_automatically(type2_497,name_491,info)));
            fun2_498=multiple_assign_var13->v1;
            real_fun_name_499=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            come_call_finalizer3(__right_value399,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            fun_494=fun2_498;
            __dec_obj137=method_name_493;
            method_name_493=(char*)come_increment_ref_count(real_fun_name_499);
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(type2_497,sType_finalize, 0, 0, 0, 0, (void*)0);
            real_fun_name_499 = come_decrement_ref_count2(real_fun_name_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        fun_494==((void*)0)&&string_operator_equals(name_491,"equals")) {
            type2_500=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_475));
            type2_500->mPointerNum++;
            multiple_assign_var14=((struct tuple2$2sFunpcharph*)(__right_value401=create_equals_automatically(type2_500,name_491,info)));
            fun2_501=multiple_assign_var14->v1;
            real_fun_name_502=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            come_call_finalizer3(__right_value401,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            fun_494=fun2_501;
            __dec_obj138=method_name_493;
            method_name_493=(char*)come_increment_ref_count(real_fun_name_502);
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(type2_500,sType_finalize, 0, 0, 0, 0, (void*)0);
            real_fun_name_502 = come_decrement_ref_count2(real_fun_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        fun_494==((void*)0)) {
            klass2_503=((struct sClass*)((void*)(__right_value402=map$2voidphvoidphp_operator_load_element(info->classes,type_475->mClass->mName))));
            come_call_finalizer3(__right_value402,(void*)0, 0, 1, 0, 0, (void*)0);
            while((_while_condtional1=(((struct sClass*)((void*)(__right_value403=map$2voidphvoidphp_operator_load_element(info->classes,klass2_503->mParentClassName)))))),            come_call_finalizer3(__right_value403,(void*)0, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass2_503=((struct sClass*)((void*)(__right_value404=map$2voidphvoidphp_operator_load_element(info->classes,klass2_503->mParentClassName))));
                come_call_finalizer3(__right_value404,(void*)0, 0, 1, 0, 0, (void*)0);
                __dec_obj139=method_name_493;
                method_name_493=(char*)come_increment_ref_count(create_method_name_using_class(klass2_503,(_Bool)0,name_491,info,(_Bool)1));
                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_494=((struct sFun*)((void*)(__right_value407=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value406=__builtin_string(method_name_493))),((void*)0)))));
                __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value407,(void*)0, 0, 1, 0, 0, (void*)0);
                if(                fun_494) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_482,name_491,method_name_493);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_482,name_491,method_name_493);
        }
        name_491 = come_decrement_ref_count2(name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
        method_name_493 = come_decrement_ref_count2(method_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj140=come_value2_477->c_value;
    come_value2_477->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack_482));
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    type3_504=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_472));
    type3_504->mPointerNum++;
    type3_504->mHeap=(_Bool)1;
    type2_478->mHeap=(_Bool)1;
    __dec_obj141=come_value2_477->type;
    come_value2_477->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_478));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_477->type->mPointerNum++;
    come_value2_477->var=((void*)0);
    append_object_to_right_values2(come_value2_477,(struct sType*)come_increment_ref_count(type3_504),info,(_Bool)0);
    add_come_last_code(info,"%s",come_value2_477->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_477));
    __result288__ = (_Bool)1;
    if(obj_exp_471) { obj_exp_471 = come_decrement_ref_count2(obj_exp_471, ((struct sNode*)obj_exp_471)->finalize, ((struct sNode*)obj_exp_471)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type_472,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_474,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_478,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_479 = come_decrement_ref_count2(type_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_480 = come_decrement_ref_count2(type_name2_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_483 = come_decrement_ref_count2(buf_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_484 = come_decrement_ref_count2(buf2_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    c_value_485 = come_decrement_ref_count2(c_value_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(typeX_486,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_504,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result288__;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
char* __dec_obj134;
struct sNode* __dec_obj135;
struct sType* __dec_obj136;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj134=self->sname;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj135=self->obj_exp;
            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        if(        self->inf_type==gComeFunResultObject) {
            __dec_obj136=self->inf_type;
            come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1voidph* it_488;
int i_489;
void* __result282__;
void* default_value_490;
void* __result283__;
default_value_490 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_488=self->head;
    i_489=0;
    while(it_488!=((void*)0)) {
        if(        position==i_489) {
            __result282__ = gComeFunResultObject = __result_obj__ = it_488->item;
            gComeFunResultObject = (void*)0;
            return __result282__;
        }
        it_488=it_488->next;
        i_489++;
    }
    memset(&default_value_490,0,sizeof(void*));
    __result283__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsTypeph*)default_value_490);
    come_call_finalizer3(default_value_490, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_495;
unsigned int it_496;
void* __result284__;
void* __result285__;
void* __result286__;
void* __result287__;
    hash_495=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_496=hash_495;
    while((_Bool)1) {
        if(        self->item_existance[it_496]) {
            if(            come_call_equals((void*)0, self->keys[it_496], key)) {
                __result284__ = gComeFunResultObject = __result_obj__ = self->items[it_496];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result284__;
            }
            it_496++;
            if(            it_496>=self->size) {
                it_496=0;
            }
            else if(            it_496==hash_495) {
                __result285__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result285__;
            }
        }
        else {
            __result286__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result286__;
        }
    }
    __result287__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
struct sTrueNode* __result289__;
    ((struct sNodeBase*)(__right_value411=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value411,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__=(void*)0;
void* __right_value412 = (void*)0;
char* __result290__;
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value412=__builtin_string("sTrueNode")));
    __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value415 = (void*)0;
char* __dec_obj143;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sType* __dec_obj144;
_Bool __result291__;
    come_value_505=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 554, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj143=come_value_505->c_value;
    come_value_505->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj144=come_value_505->type;
    come_value_505->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 557, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_505->var=((void*)0);
    add_come_last_code(info,"%s",come_value_505->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_505));
    __result291__ = (_Bool)1;
    come_call_finalizer3(come_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result291__;
}

static void sTrueNode_finalize(struct sTrueNode* self){
char* __dec_obj142;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj142=self->sname;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value422 = (void*)0;
struct sNode* __result294__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 570, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value419=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 570, "struct sTrueNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result294__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value422=_inf_value1));
    come_call_finalizer3(__right_value419,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value422) { __right_value422 = come_decrement_ref_count2(__right_value422, ((struct sNode*)__right_value422)->finalize, ((struct sNode*)__right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__=(void*)0;
struct sTrueNode* __result292__;
void* __right_value420 = (void*)0;
struct sTrueNode* result_506;
void* __right_value421 = (void*)0;
char* __dec_obj145;
struct sTrueNode* __result293__;
    if(    self==(void*)0) {
        __result292__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_506=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_506->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj145=result_506->sname;
        result_506->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_506->sline_real=self->sline_real;
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_506;
    come_call_finalizer3(result_506,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value423 = (void*)0;
struct sFalseNode* __result295__;
    ((struct sNodeBase*)(__right_value423=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value423,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__=(void*)0;
void* __right_value424 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value424=__builtin_string("sFalseNode")));
    __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct CVALUE* come_value_507;
void* __right_value427 = (void*)0;
char* __dec_obj147;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sType* __dec_obj148;
_Bool __result297__;
    come_value_507=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 587, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj147=come_value_507->c_value;
    come_value_507->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj148=come_value_507->type;
    come_value_507->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 590, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_507->var=((void*)0);
    add_come_last_code(info,"%s",come_value_507->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_507));
    __result297__ = (_Bool)1;
    come_call_finalizer3(come_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result297__;
}

static void sFalseNode_finalize(struct sFalseNode* self){
char* __dec_obj146;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj146=self->sname;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value434 = (void*)0;
struct sNode* __result300__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 603, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value431=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 603, "struct sFalseNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result300__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value434=_inf_value2));
    come_call_finalizer3(__right_value431,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value434) { __right_value434 = come_decrement_ref_count2(__right_value434, ((struct sNode*)__right_value434)->finalize, ((struct sNode*)__right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__=(void*)0;
struct sFalseNode* __result298__;
void* __right_value432 = (void*)0;
struct sFalseNode* result_508;
void* __right_value433 = (void*)0;
char* __dec_obj149;
struct sFalseNode* __result299__;
    if(    self==(void*)0) {
        __result298__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    result_508=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_508->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj149=result_508->sname;
        result_508->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_508->sline_real=self->sline_real;
    }
    __result299__ = gComeFunResultObject = __result_obj__ = result_508;
    come_call_finalizer3(result_508,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sType* __dec_obj150;
struct sSizeOfNode* __result301__;
    ((struct sNodeBase*)(__right_value435=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value435,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj150=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value437 = (void*)0;
char* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value437=__builtin_string("sSizeOfNode")));
    __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_509;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct CVALUE* come_value_510;
void* __right_value440 = (void*)0;
struct sType* type2_511;
void* __right_value441 = (void*)0;
char* type_name_512;
void* __right_value442 = (void*)0;
char* __dec_obj153;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* __dec_obj154;
_Bool __result303__;
    type_509=self->type;
    come_value_510=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 624, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_511=(struct sType*)come_increment_ref_count(solve_generics(type_509,info->generics_type,info));
    type_name_512=(char*)come_increment_ref_count(make_type_name_string(type2_511,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj153=come_value_510->c_value;
    come_value_510->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_512));
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj154=come_value_510->type;
    come_value_510->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 631, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_510->type->mUnsigned=(_Bool)1;
    come_value_510->var=((void*)0);
    add_come_last_code(info,"%s",come_value_510->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_510));
    __result303__ = (_Bool)1;
    come_call_finalizer3(come_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_511,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_512 = come_decrement_ref_count2(type_name_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result303__;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
char* __dec_obj151;
struct sType* __dec_obj152;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj151=self->sname;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj152=self->type;
            come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sNode* __dec_obj155;
struct sSizeOfExpNode* __result304__;
struct sSizeOfExpNode* __result305__;
    ((struct sNodeBase*)(__right_value445=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value445,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj155=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result304__;
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result305__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value447 = (void*)0;
char* __result306__;
    __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value447=__builtin_string("sSizeOfExpNode")));
    __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_513;
_Bool Value_514;
_Bool __result307__;
void* __right_value448 = (void*)0;
struct CVALUE* come_value_515;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct CVALUE* come_value2_516;
void* __right_value451 = (void*)0;
char* __dec_obj158;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sType* __dec_obj159;
_Bool __result308__;
    exp_513=(struct sNode*)come_increment_ref_count(self->exp);
    Value_514=node_compile(exp_513,info);
    if(    !Value_514) {
        __result307__ = (_Bool)0;
        if(exp_513) { exp_513 = come_decrement_ref_count2(exp_513, ((struct sNode*)exp_513)->finalize, ((struct sNode*)exp_513)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result307__;
    }
    else {
    }
    come_value_515=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_516=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 670, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj158=come_value2_516->c_value;
    come_value2_516->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_515->c_value));
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj159=come_value2_516->type;
    come_value2_516->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 673, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_516->type->mUnsigned=(_Bool)1;
    come_value2_516->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_516->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_516));
    __result308__ = (_Bool)1;
    if(exp_513) { exp_513 = come_decrement_ref_count2(exp_513, ((struct sNode*)exp_513)->finalize, ((struct sNode*)exp_513)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_515,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result308__;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
char* __dec_obj156;
struct sNode* __dec_obj157;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj156=self->sname;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj157=self->exp;
            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sType* __dec_obj160;
struct sTypeOfNode* __result309__;
    ((struct sNodeBase*)(__right_value454=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value454,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj160=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value456 = (void*)0;
char* __result310__;
    __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value456=__builtin_string("sTypeOfNode")));
    __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_517;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct CVALUE* come_value_518;
void* __right_value459 = (void*)0;
struct sType* type2_519;
void* __right_value460 = (void*)0;
char* type_name_520;
void* __right_value461 = (void*)0;
char* __dec_obj163;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sType* __dec_obj164;
_Bool __result311__;
    type_517=self->type;
    come_value_518=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 703, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_519=(struct sType*)come_increment_ref_count(solve_generics(type_517,info->generics_type,info));
    type_name_520=(char*)come_increment_ref_count(make_type_name_string(type2_519,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj163=come_value_518->c_value;
    come_value_518->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_520));
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj164=come_value_518->type;
    come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 710, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_518->var=((void*)0);
    add_come_last_code(info,"%s",come_value_518->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_518));
    __result311__ = (_Bool)1;
    come_call_finalizer3(come_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_519,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_520 = come_decrement_ref_count2(type_name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result311__;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
char* __dec_obj161;
struct sType* __dec_obj162;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj161=self->sname;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj162=self->type;
            come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sNode* __dec_obj165;
struct sTypeOfExpNode* __result312__;
    ((struct sNodeBase*)(__right_value464=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value464,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj165=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result312__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
char* __result313__;
    __result313__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value466=__builtin_string("sTypeOfExpNode")));
    __right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_521;
_Bool Value_522;
_Bool __result314__;
void* __right_value467 = (void*)0;
struct CVALUE* come_value_523;
void* __right_value468 = (void*)0;
struct sType* type_524;
void* __right_value469 = (void*)0;
struct sType* type2_525;
void* __right_value470 = (void*)0;
char* type_name_526;
void* __right_value471 = (void*)0;
char* __dec_obj168;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sType* __dec_obj169;
_Bool __result315__;
    exp_521=(struct sNode*)come_increment_ref_count(self->exp);
    Value_522=node_compile(exp_521,info);
    if(    !Value_522) {
        __result314__ = (_Bool)0;
        if(exp_521) { exp_521 = come_decrement_ref_count2(exp_521, ((struct sNode*)exp_521)->finalize, ((struct sNode*)exp_521)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result314__;
    }
    else {
    }
    come_value_523=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_524=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_523->type));
    type2_525=(struct sType*)come_increment_ref_count(solve_generics(type_524,info->generics_type,info));
    type_name_526=(char*)come_increment_ref_count(make_type_name_string(type2_525,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj168=come_value_523->c_value;
    come_value_523->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_526));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj169=come_value_523->type;
    come_value_523->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 753, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_523->var=((void*)0);
    add_come_last_code(info,"%s",come_value_523->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_523));
    __result315__ = (_Bool)1;
    if(exp_521) { exp_521 = come_decrement_ref_count2(exp_521, ((struct sNode*)exp_521)->finalize, ((struct sNode*)exp_521)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_523,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_525,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_526 = come_decrement_ref_count2(type_name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result315__;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
char* __dec_obj166;
struct sNode* __dec_obj167;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj166=self->sname;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj167=self->exp;
            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sNode* __dec_obj170;
struct sDynamicTypeOf* __result316__;
    ((struct sNodeBase*)(__right_value474=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value474,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj170=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); };
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDynamicTypeOf_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self){
void* __result_obj__=(void*)0;
void* __right_value476 = (void*)0;
char* __result317__;
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value476=__builtin_string("sDynamicTypeOf")));
    __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info){
struct sNode* exp_527;
_Bool Value_528;
_Bool __result318__;
void* __right_value477 = (void*)0;
struct CVALUE* come_value_529;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct CVALUE* come_value2_530;
void* __right_value480 = (void*)0;
char* __dec_obj173;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sType* __dec_obj174;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct CVALUE* come_value2_531;
void* __right_value485 = (void*)0;
char* __dec_obj175;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* __dec_obj176;
_Bool __result319__;
    exp_527=(struct sNode*)come_increment_ref_count(self->exp);
    Value_528=node_compile(exp_527,info);
    if(    !Value_528) {
        __result318__ = (_Bool)0;
        if(exp_527) { exp_527 = come_decrement_ref_count2(exp_527, ((struct sNode*)exp_527)->finalize, ((struct sNode*)exp_527)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result318__;
    }
    else {
    }
    come_value_529=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    come_value_529->type->mPointerNum>0&&come_value_529->type->mHeap) {
        come_value2_530=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 790, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj173=come_value2_530->c_value;
        come_value2_530->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_529->c_value));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj174=come_value2_530->type;
        come_value2_530->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 793, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_530->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_530->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_530));
        come_call_finalizer3(come_value2_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_531=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 801, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj175=come_value2_531->c_value;
        come_value2_531->c_value=(char*)come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj176=come_value2_531->type;
        come_value2_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 804, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_531->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_531->c_value);
        append_object_to_right_values2(come_value2_531,(struct sType*)come_increment_ref_count(come_value2_531->type),info,(_Bool)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_531));
        come_call_finalizer3(come_value2_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result319__ = (_Bool)1;
    if(exp_527) { exp_527 = come_decrement_ref_count2(exp_527, ((struct sNode*)exp_527)->finalize, ((struct sNode*)exp_527)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result319__;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self){
char* __dec_obj171;
struct sNode* __dec_obj172;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj171=self->sname;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj172=self->exp;
            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj177;
struct sAlignOfNode* __result320__;
struct sAlignOfNode* __result321__;
    ((struct sNodeBase*)(__right_value488=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value488,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj177=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value490 = (void*)0;
char* __result322__;
    __result322__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value490=__builtin_string("sAlignOfNode")));
    __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_532;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct CVALUE* come_value_533;
void* __right_value493 = (void*)0;
struct sType* type2_534;
void* __right_value494 = (void*)0;
char* type_name_535;
void* __right_value495 = (void*)0;
char* __dec_obj180;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* __dec_obj181;
_Bool __result323__;
    type_532=self->type;
    come_value_533=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 838, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_534=(struct sType*)come_increment_ref_count(solve_generics(type_532,info->generics_type,info));
    type_name_535=(char*)come_increment_ref_count(make_type_name_string(type2_534,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj180=come_value_533->c_value;
    come_value_533->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_535));
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj181=come_value_533->type;
    come_value_533->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 845, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_533->type->mUnsigned=(_Bool)1;
    come_value_533->var=((void*)0);
    add_come_last_code(info,"%s",come_value_533->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_533));
    __result323__ = (_Bool)1;
    come_call_finalizer3(come_value_533,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_534,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_535 = come_decrement_ref_count2(type_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result323__;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
char* __dec_obj178;
struct sType* __dec_obj179;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj178=self->sname;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj179=self->type;
            come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sNode* __dec_obj182;
struct sAlignOfExpNode* __result324__;
    ((struct sNodeBase*)(__right_value498=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value498,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj182=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result324__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value500 = (void*)0;
char* __result325__;
    __result325__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value500=__builtin_string("sAlignOfExpNode")));
    __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_536;
_Bool Value_537;
_Bool __result326__;
void* __right_value501 = (void*)0;
struct CVALUE* come_value_538;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct CVALUE* come_value2_539;
void* __right_value504 = (void*)0;
char* __dec_obj185;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj186;
_Bool __result327__;
    exp_536=(struct sNode*)come_increment_ref_count(self->exp);
    Value_537=node_compile(exp_536,info);
    if(    !Value_537) {
        __result326__ = (_Bool)0;
        if(exp_536) { exp_536 = come_decrement_ref_count2(exp_536, ((struct sNode*)exp_536)->finalize, ((struct sNode*)exp_536)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result326__;
    }
    else {
    }
    come_value_538=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_539=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 882, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj185=come_value2_539->c_value;
    come_value2_539->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_538->c_value));
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj186=come_value2_539->type;
    come_value2_539->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 885, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_539->type->mUnsigned=(_Bool)1;
    come_value2_539->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_539->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_539));
    __result327__ = (_Bool)1;
    if(exp_536) { exp_536 = come_decrement_ref_count2(exp_536, ((struct sNode*)exp_536)->finalize, ((struct sNode*)exp_536)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_538,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result327__;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
char* __dec_obj183;
struct sNode* __dec_obj184;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj183=self->sname;
            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj184=self->exp;
            if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj187;
struct sAlignOfNode2* __result328__;
    ((struct sNodeBase*)(__right_value507=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value507,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj187=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
void* __right_value509 = (void*)0;
char* __result329__;
    __result329__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value509=__builtin_string("sAlignOfNode2")));
    __right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_540;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct CVALUE* come_value_541;
void* __right_value512 = (void*)0;
struct sType* type2_542;
void* __right_value513 = (void*)0;
char* type_name_543;
void* __right_value514 = (void*)0;
char* __dec_obj190;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj191;
_Bool __result330__;
    type_540=self->type;
    come_value_541=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 915, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_542=(struct sType*)come_increment_ref_count(solve_generics(type_540,info->generics_type,info));
    type_name_543=(char*)come_increment_ref_count(make_type_name_string(type2_542,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj190=come_value_541->c_value;
    come_value_541->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_543));
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj191=come_value_541->type;
    come_value_541->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 922, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_541->type->mUnsigned=(_Bool)1;
    come_value_541->var=((void*)0);
    add_come_last_code(info,"%s",come_value_541->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_541));
    __result330__ = (_Bool)1;
    come_call_finalizer3(come_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_542,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_543 = come_decrement_ref_count2(type_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result330__;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
char* __dec_obj188;
struct sType* __dec_obj189;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj188=self->sname;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj189=self->type;
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sNode* __dec_obj192;
struct sAlignOfExpNode2* __result331__;
    ((struct sNodeBase*)(__right_value517=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value517,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj192=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); };
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result331__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
void* __right_value519 = (void*)0;
char* __result332__;
    __result332__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value519=__builtin_string("sAlignOfExpNode2")));
    __right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_544;
_Bool Value_545;
_Bool __result333__;
void* __right_value520 = (void*)0;
struct CVALUE* come_value_546;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct CVALUE* come_value2_547;
void* __right_value523 = (void*)0;
char* __dec_obj195;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj196;
_Bool __result334__;
    exp_544=(struct sNode*)come_increment_ref_count(self->exp);
    Value_545=node_compile(exp_544,info);
    if(    !Value_545) {
        __result333__ = (_Bool)0;
        if(exp_544) { exp_544 = come_decrement_ref_count2(exp_544, ((struct sNode*)exp_544)->finalize, ((struct sNode*)exp_544)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result333__;
    }
    else {
    }
    come_value_546=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_547=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 959, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj195=come_value2_547->c_value;
    come_value2_547->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_546->c_value));
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj196=come_value2_547->type;
    come_value2_547->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 962, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_547->type->mUnsigned=(_Bool)1;
    come_value2_547->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_547->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_547));
    __result334__ = (_Bool)1;
    if(exp_544) { exp_544 = come_decrement_ref_count2(exp_544, ((struct sNode*)exp_544)->finalize, ((struct sNode*)exp_544)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_546,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_547,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result334__;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
char* __dec_obj193;
struct sNode* __dec_obj194;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj193=self->sname;
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj194=self->exp;
            if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj197;
struct sAlignAsNode* __result335__;
    ((struct sNodeBase*)(__right_value526=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value526,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj197=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
void* __right_value528 = (void*)0;
char* __result336__;
    __result336__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value528=__builtin_string("sAlignAsNode")));
    __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_548;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct CVALUE* come_value_549;
void* __right_value531 = (void*)0;
struct sType* type2_550;
void* __right_value532 = (void*)0;
char* type_name_551;
void* __right_value533 = (void*)0;
char* __dec_obj200;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj201;
_Bool __result337__;
    type_548=self->type;
    come_value_549=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 992, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_550=(struct sType*)come_increment_ref_count(solve_generics(type_548,info->generics_type,info));
    type_name_551=(char*)come_increment_ref_count(make_type_name_string(type2_550,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj200=come_value_549->c_value;
    come_value_549->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_551));
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj201=come_value_549->type;
    come_value_549->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 999, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_549->type->mUnsigned=(_Bool)1;
    come_value_549->var=((void*)0);
    add_come_last_code(info,"%s",come_value_549->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_549));
    __result337__ = (_Bool)1;
    come_call_finalizer3(come_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_550,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_551 = come_decrement_ref_count2(type_name_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result337__;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
char* __dec_obj198;
struct sType* __dec_obj199;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj198=self->sname;
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj199=self->type;
            come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sNode* __dec_obj202;
struct sAlignAsExpNode* __result338__;
    ((struct sNodeBase*)(__right_value536=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value536,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj202=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
    __result338__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result338__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value538 = (void*)0;
char* __result339__;
    __result339__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value538=__builtin_string("sAlignAsExpNode")));
    __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_552;
_Bool Value_553;
_Bool __result340__;
void* __right_value539 = (void*)0;
struct CVALUE* come_value_554;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct CVALUE* come_value2_555;
void* __right_value542 = (void*)0;
char* __dec_obj205;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj206;
_Bool __result341__;
    exp_552=(struct sNode*)come_increment_ref_count(self->exp);
    Value_553=node_compile(exp_552,info);
    if(    !Value_553) {
        __result340__ = (_Bool)0;
        if(exp_552) { exp_552 = come_decrement_ref_count2(exp_552, ((struct sNode*)exp_552)->finalize, ((struct sNode*)exp_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result340__;
    }
    else {
    }
    come_value_554=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_555=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1036, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj205=come_value2_555->c_value;
    come_value2_555->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_554->c_value));
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj206=come_value2_555->type;
    come_value2_555->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1039, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_555->type->mUnsigned=(_Bool)1;
    come_value2_555->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_555->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_555));
    __result341__ = (_Bool)1;
    if(exp_552) { exp_552 = come_decrement_ref_count2(exp_552, ((struct sNode*)exp_552)->finalize, ((struct sNode*)exp_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_555,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result341__;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
char* __dec_obj203;
struct sNode* __dec_obj204;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj203=self->sname;
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj204=self->exp;
            if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sNode* __dec_obj207;
struct sDeleteNode* __result342__;
    ((struct sNodeBase*)(__right_value545=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value545,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj207=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
    __result342__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result342__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
void* __right_value547 = (void*)0;
char* __result343__;
    __result343__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value547=__builtin_string("sDeleteNode")));
    __right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_556;
_Bool Value_557;
void* __right_value548 = (void*)0;
struct CVALUE* come_value_558;
_Bool __result344__;
    node_556=self->node;
    Value_557=node_compile(node_556,info);
    if(    !Value_557) {
        return (_Bool)0;
    }
    else {
    }
    come_value_558=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_558->type,come_value_558->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result344__ = (_Bool)1;
    come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result344__;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
char* __dec_obj208;
struct sNode* __dec_obj209;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj208=self->sname;
            __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj209=self->node;
            if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sNode* __dec_obj210;
struct sBorrowNode* __result345__;
struct sBorrowNode* __result346__;
    ((struct sNodeBase*)(__right_value549=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value549,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj210=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result345__;
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result346__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
void* __right_value551 = (void*)0;
char* __result347__;
    __result347__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value551=__builtin_string("sBorrowNode")));
    __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_559;
_Bool Value_560;
void* __right_value552 = (void*)0;
struct CVALUE* come_value_561;
struct sRightValueObject* right_value_objects_562;
int right_value_id_563;
_Bool __result348__;
    node_559=self->node;
    Value_560=node_compile(node_559,info);
    if(    !Value_560) {
        return (_Bool)0;
    }
    else {
    }
    come_value_561=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_561->type->mHeap=(_Bool)0;
    right_value_objects_562=come_value_561->right_value_objects;
    if(    right_value_objects_562) {
        right_value_id_563=right_value_objects_562->mID;
        if(        right_value_id_563!=-1) {
            remove_object_from_right_values(right_value_id_563,info);
        }
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_561));
    __result348__ = (_Bool)1;
    come_call_finalizer3(come_value_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result348__;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
char* __dec_obj211;
struct sNode* __dec_obj212;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj211=self->sname;
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj212=self->node;
            if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sNode* __dec_obj213;
struct sCloneNode* __result349__;
    ((struct sNodeBase*)(__right_value553=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value553,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj213=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    __result349__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result349__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__=(void*)0;
void* __right_value555 = (void*)0;
char* __result350__;
    __result350__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value555=__builtin_string("sCloneNode")));
    __right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_564;
_Bool Value_565;
void* __right_value556 = (void*)0;
struct CVALUE* left_value_566;
void* __right_value557 = (void*)0;
struct sType* left_type_567;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct CVALUE* come_value_568;
void* __right_value560 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var15 = (void*)0;
struct sType* result_type_569=0;
char* c_value_570=0;
char* __dec_obj218;
void* __right_value561 = (void*)0;
struct sType* __dec_obj219;
_Bool __result351__;
    node_564=self->node;
    Value_565=node_compile(node_564,info);
    if(    !Value_565) {
        return (_Bool)0;
    }
    else {
    }
    left_value_566=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_567=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_566->type));
    if(    left_type_567->mPointerNum==1&&string_operator_equals(left_type_567->mClass->mName,"void")&&left_type_567->mHeap==(_Bool)0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_566));
    }
    else if(    left_type_567->mPointerNum==0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_566));
    }
    else if(    left_type_567->mPointerNum>0) {
        come_value_568=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1160, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        multiple_assign_var15=((struct tuple2$2sTypephcharph*)(__right_value560=clone_object(left_type_567,left_value_566->c_value,info)));
        result_type_569=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
        c_value_570=(char*)come_increment_ref_count(multiple_assign_var15->v2);
        come_call_finalizer3(__right_value560,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj218=come_value_568->c_value;
        come_value_568->c_value=(char*)come_increment_ref_count(c_value_570);
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj219=come_value_568->type;
        come_value_568->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_567));
        come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_568->type->mHeap=(_Bool)1;
        come_value_568->var=((void*)0);
        append_object_to_right_values2(come_value_568,(struct sType*)come_increment_ref_count(left_type_567),info,(_Bool)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_568));
        come_call_finalizer3(come_value_568,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
        c_value_570 = come_decrement_ref_count2(c_value_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result351__ = (_Bool)1;
    come_call_finalizer3(left_value_566,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result351__;
}

static void sCloneNode_finalize(struct sCloneNode* self){
char* __dec_obj214;
struct sNode* __dec_obj215;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj214=self->sname;
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj215=self->node;
            if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj216;
char* __dec_obj217;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj216=self->v1;
            come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj217=self->v2;
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sNode* __dec_obj220;
struct sDupeNode* __result352__;
    ((struct sNodeBase*)(__right_value562=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value562,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj220=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
    __result352__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result352__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__=(void*)0;
void* __right_value564 = (void*)0;
char* __result353__;
    __result353__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value564=__builtin_string("sDupeNode")));
    __right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_571;
_Bool Value_572;
void* __right_value565 = (void*)0;
struct CVALUE* left_value_573;
void* __right_value566 = (void*)0;
struct sType* left_type_574;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct CVALUE* come_value_575;
void* __right_value569 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var16 = (void*)0;
struct sType* result_type_576=0;
char* c_value_577=0;
char* __dec_obj223;
void* __right_value570 = (void*)0;
struct sType* __dec_obj224;
_Bool __result354__;
    node_571=self->node;
    Value_572=node_compile(node_571,info);
    if(    !Value_572) {
        return (_Bool)0;
    }
    else {
    }
    left_value_573=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_574=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_573->type));
    if(    left_type_574->mPointerNum==0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_573));
    }
    else if(    left_type_574->mPointerNum>0&&left_type_574->mHeap==(_Bool)0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_573));
    }
    else if(    left_type_574->mPointerNum>0) {
        come_value_575=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1211, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        multiple_assign_var16=((struct tuple2$2sTypephcharph*)(__right_value569=clone_object(left_type_574,left_value_573->c_value,info)));
        result_type_576=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
        c_value_577=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        come_call_finalizer3(__right_value569,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj223=come_value_575->c_value;
        come_value_575->c_value=(char*)come_increment_ref_count(c_value_577);
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj224=come_value_575->type;
        come_value_575->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_574));
        come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_575->type->mHeap=(_Bool)1;
        come_value_575->var=((void*)0);
        append_object_to_right_values2(come_value_575,(struct sType*)come_increment_ref_count(left_type_574),info,(_Bool)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_575));
        come_call_finalizer3(come_value_575,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
        c_value_577 = come_decrement_ref_count2(c_value_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result354__ = (_Bool)1;
    come_call_finalizer3(left_value_573,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result354__;
}

static void sDupeNode_finalize(struct sDupeNode* self){
char* __dec_obj221;
struct sNode* __dec_obj222;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj221=self->sname;
            __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj222=self->node;
            if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sNode* __dec_obj225;
struct sDummyHeapNode* __result355__;
    ((struct sNodeBase*)(__right_value571=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value571,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj225=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
    __result355__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result355__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
void* __right_value573 = (void*)0;
char* __result356__;
    __result356__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value573=__builtin_string("sDummyHeapNode")));
    __right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_578;
_Bool Value_579;
void* __right_value574 = (void*)0;
struct CVALUE* come_value_580;
_Bool __result357__;
    node_578=self->node;
    Value_579=node_compile(node_578,info);
    if(    !Value_579) {
        return (_Bool)0;
    }
    else {
    }
    come_value_580=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_580->type->mHeap=(_Bool)1;
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_580));
    __result357__ = (_Bool)1;
    come_call_finalizer3(come_value_580,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result357__;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
char* __dec_obj226;
struct sNode* __dec_obj227;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj226=self->sname;
            __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj227=self->node;
            if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sNode* __dec_obj228;
struct sGCIncNode* __result358__;
    ((struct sNodeBase*)(__right_value575=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value575,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj228=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
    __result358__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result358__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
void* __right_value577 = (void*)0;
char* __result359__;
    __result359__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value577=__builtin_string("sGCIncNode")));
    __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_581;
_Bool Value_582;
void* __right_value578 = (void*)0;
struct CVALUE* come_value_583;
struct sType* type_584;
void* __right_value579 = (void*)0;
char* type_name_585;
void* __right_value580 = (void*)0;
char* __dec_obj231;
_Bool __result360__;
    node_581=self->node;
    Value_582=node_compile(node_581,info);
    if(    !Value_582) {
        return (_Bool)0;
    }
    else {
    }
    come_value_583=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_584=come_value_583->type;
    if(    come_value_583->type->mHeap) {
        type_name_585=(char*)come_increment_ref_count(make_type_name_string(type_584,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj231=come_value_583->c_value;
        come_value_583->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_583->type,come_value_583->c_value,info));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        type_name_585 = come_decrement_ref_count2(type_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_583));
    __result360__ = (_Bool)1;
    come_call_finalizer3(come_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result360__;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
char* __dec_obj229;
struct sNode* __dec_obj230;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj229=self->sname;
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj230=self->node;
            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* __dec_obj232;
struct sGCDecNode* __result361__;
    ((struct sNodeBase*)(__right_value581=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value581,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj232=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
    __result361__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result361__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
void* __right_value583 = (void*)0;
char* __result362__;
    __result362__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value583=__builtin_string("sGCDecNode")));
    __right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_586;
_Bool Value_587;
void* __right_value584 = (void*)0;
struct CVALUE* come_value_588;
struct sType* type_589;
_Bool __result363__;
    node_586=self->node;
    Value_587=node_compile(node_586,info);
    if(    !Value_587) {
        return (_Bool)0;
    }
    else {
    }
    come_value_588=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_589=come_value_588->type;
    decrement_ref_count_object(type_589,come_value_588->c_value,info,(_Bool)0,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_588));
    __result363__ = (_Bool)1;
    come_call_finalizer3(come_value_588,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result363__;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
char* __dec_obj233;
struct sNode* __dec_obj234;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj233=self->sname;
            __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj234=self->node;
            if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sType* __dec_obj235;
struct sIsHeap* __result364__;
    ((struct sNodeBase*)(__right_value585=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value585,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj235=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__=(void*)0;
void* __right_value587 = (void*)0;
char* __result365__;
    __result365__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value587=__builtin_string("sIsHeap")));
    __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_590;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_591;
void* __right_value590 = (void*)0;
char* __dec_obj238;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sType* __dec_obj239;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct CVALUE* come_value_592;
void* __right_value595 = (void*)0;
char* __dec_obj240;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sType* __dec_obj241;
    node_590=self->type;
    if(    self->type->mHeap) {
        come_value_591=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1353, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj238=come_value_591->c_value;
        come_value_591->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj239=come_value_591->type;
        come_value_591->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1356, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_591->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_591));
        add_come_last_code(info,"%s",come_value_591->c_value);
        come_call_finalizer3(come_value_591,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_592=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1364, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj240=come_value_592->c_value;
        come_value_592->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj241=come_value_592->type;
        come_value_592->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1367, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_592->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_592));
        add_come_last_code(info,"%s",come_value_592->c_value);
        come_call_finalizer3(come_value_592,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsHeap_finalize(struct sIsHeap* self){
char* __dec_obj236;
struct sType* __dec_obj237;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj236=self->sname;
            __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj237=self->type;
            come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sType* __dec_obj242;
struct sIsPointer* __result366__;
    ((struct sNodeBase*)(__right_value598=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value598,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj242=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result366__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__=(void*)0;
void* __right_value600 = (void*)0;
char* __result367__;
    __result367__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value600=__builtin_string("sIsPointer")));
    __right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_593;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct CVALUE* come_value_594;
void* __right_value603 = (void*)0;
char* __dec_obj245;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sType* __dec_obj246;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct CVALUE* come_value_595;
void* __right_value608 = (void*)0;
char* __dec_obj247;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sType* __dec_obj248;
    node_593=self->type;
    if(    self->type->mPointerNum>0) {
        come_value_594=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1399, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj245=come_value_594->c_value;
        come_value_594->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj246=come_value_594->type;
        come_value_594->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1402, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_594->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_594));
        add_come_last_code(info,"%s",come_value_594->c_value);
        come_call_finalizer3(come_value_594,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_595=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1410, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj247=come_value_595->c_value;
        come_value_595->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj248=come_value_595->type;
        come_value_595->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1413, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_595->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_595));
        add_come_last_code(info,"%s",come_value_595->c_value);
        come_call_finalizer3(come_value_595,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsPointer_finalize(struct sIsPointer* self){
char* __dec_obj243;
struct sType* __dec_obj244;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj243=self->sname;
            __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj244=self->type;
            come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sNode* __dec_obj249;
struct sGCDecNoFreeNode* __result368__;
    ((struct sNodeBase*)(__right_value611=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value611,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj249=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
    __result368__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result368__;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
void* __right_value613 = (void*)0;
char* __result369__;
    __result369__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value613=__builtin_string("sGCDecNoFreeNode")));
    __right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_596;
_Bool Value_597;
void* __right_value614 = (void*)0;
struct CVALUE* come_value_598;
struct sType* type_599;
_Bool __result370__;
    node_596=self->node;
    Value_597=node_compile(node_596,info);
    if(    !Value_597) {
        return (_Bool)0;
    }
    else {
    }
    come_value_598=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_599=come_value_598->type;
    decrement_ref_count_object(type_599,come_value_598->c_value,info,(_Bool)0,(_Bool)1);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_598));
    __result370__ = (_Bool)1;
    come_call_finalizer3(come_value_598,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result370__;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
char* __dec_obj250;
struct sNode* __dec_obj251;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj250=self->sname;
            __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj251=self->node;
            if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value615 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17 = (void*)0;
struct sType* type_600=0;
char* name_601=0;
_Bool err_602=0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value631 = (void*)0;
struct sNode* obj_603;
void* __right_value632 = (void*)0;
char* fun_name_611;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sNode* __result379__;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_612;
void* __right_value637 = (void*)0;
char* word_613;
_Bool no_comma_614;
void* __right_value638 = (void*)0;
struct sNode* exp_615;
void* __right_value639 = (void*)0;
_Bool _if_conditional5;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sNode* value_node_616;
void* __right_value642 = (void*)0;
struct sNode* __dec_obj264;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* exp_618;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sNode* __result381__;
struct sNode* __result382__;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value650 = (void*)0;
struct sNode* __result383__;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value653 = (void*)0;
struct sNode* __result384__;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sNode* _inf_value6;
struct sTrueNode* _inf_obj_value6;
void* __right_value656 = (void*)0;
struct sNode* __result385__;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* _inf_value7;
struct sFalseNode* _inf_obj_value7;
void* __right_value659 = (void*)0;
struct sNode* __result386__;
void* __right_value660 = (void*)0;
struct sNode* node_619;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sNode* _inf_value8;
struct sDeleteNode* _inf_obj_value8;
void* __right_value666 = (void*)0;
struct sNode* __result389__;
void* __right_value667 = (void*)0;
struct sNode* node_621;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sNode* _inf_value9;
struct sBorrowNode* _inf_obj_value9;
void* __right_value673 = (void*)0;
struct sNode* __result392__;
void* __right_value674 = (void*)0;
struct sNode* node_623;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* _inf_value10;
struct sCloneNode* _inf_obj_value10;
void* __right_value680 = (void*)0;
struct sNode* __result395__;
void* __right_value681 = (void*)0;
struct sNode* node_625;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sNode* _inf_value11;
struct sDupeNode* _inf_obj_value11;
void* __right_value687 = (void*)0;
struct sNode* __result398__;
void* __right_value688 = (void*)0;
struct sNode* node_627;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
void* __right_value694 = (void*)0;
struct sNode* __result401__;
void* __right_value695 = (void*)0;
struct sNode* node_629;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
void* __right_value701 = (void*)0;
struct sNode* __result404__;
void* __right_value702 = (void*)0;
struct sNode* node_631;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
void* __right_value708 = (void*)0;
struct sNode* __result407__;
void* __right_value709 = (void*)0;
struct sNode* node_633;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sNode* _inf_value15;
struct sGCDecNoFreeNode* _inf_obj_value15;
void* __right_value715 = (void*)0;
struct sNode* __result410__;
void* __right_value716 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var18 = (void*)0;
struct sType* param_type_635=0;
char* param_name_636=0;
_Bool err_637=0;
void* __right_value717 = (void*)0;
struct sType* type2_638;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sNode* _inf_value16;
struct sIsHeap* _inf_obj_value16;
void* __right_value723 = (void*)0;
struct sNode* __result413__;
void* __right_value724 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var19 = (void*)0;
struct sType* param_type_640=0;
char* param_name_641=0;
_Bool err_642=0;
void* __right_value725 = (void*)0;
struct sType* type2_643;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sNode* _inf_value17;
struct sIsPointer* _inf_obj_value17;
void* __right_value731 = (void*)0;
struct sNode* __result416__;
void* __right_value732 = (void*)0;
struct sNode* __result417__;
void* __right_value733 = (void*)0;
struct sNode* __result418__;
void* __right_value734 = (void*)0;
struct sNode* __result419__;
void* __right_value735 = (void*)0;
struct sNode* __result420__;
_Bool come_c_645;
void* __right_value736 = (void*)0;
struct sNode* node_646;
struct sNode* __result421__;
void* __right_value737 = (void*)0;
struct sNode* __result422__;
void* __right_value738 = (void*)0;
struct sNode* __result423__;
void* __right_value739 = (void*)0;
struct sNode* __result424__;
void* __right_value740 = (void*)0;
struct sNode* __result425__;
void* __right_value741 = (void*)0;
struct sNode* __result426__;
_Bool paren_647;
_Bool is_type_name_flag_648;
char* p_649;
int sline_650;
void* __right_value742 = (void*)0;
char* word_651;
void* __right_value743 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var20 = (void*)0;
struct sType* type_652=0;
char* name_653=0;
_Bool err_654=0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct sNode* _inf_value18;
struct sSizeOfNode* _inf_obj_value18;
void* __right_value749 = (void*)0;
struct sNode* __result429__;
struct sNode* exp_656;
_Bool no_comma_657;
void* __right_value750 = (void*)0;
struct sNode* __dec_obj289;
void* __right_value751 = (void*)0;
struct sNode* __dec_obj290;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sNode* _inf_value19;
struct sSizeOfExpNode* _inf_obj_value19;
void* __right_value757 = (void*)0;
struct sNode* __result432__;
_Bool paren_659;
_Bool is_type_name_flag_660;
char* p_661;
int sline_662;
void* __right_value758 = (void*)0;
char* word_663;
void* __right_value759 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var21 = (void*)0;
struct sType* type_664=0;
char* name_665=0;
_Bool err_666=0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sNode* _inf_value20;
struct sTypeOfNode* _inf_obj_value20;
void* __right_value765 = (void*)0;
struct sNode* __result435__;
struct sNode* exp_668;
_Bool no_comma_669;
void* __right_value766 = (void*)0;
struct sNode* __dec_obj295;
void* __right_value767 = (void*)0;
struct sNode* __dec_obj296;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sNode* _inf_value21;
struct sTypeOfExpNode* _inf_obj_value21;
void* __right_value773 = (void*)0;
struct sNode* __result438__;
_Bool paren_671;
struct sNode* exp_672;
_Bool no_comma_673;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj299;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj300;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sNode* _inf_value22;
struct sDynamicTypeOf* _inf_obj_value22;
void* __right_value781 = (void*)0;
struct sNode* __result441__;
_Bool paren_675;
_Bool is_type_name_flag_676;
char* p_677;
int sline_678;
void* __right_value782 = (void*)0;
char* word_679;
void* __right_value783 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var22 = (void*)0;
struct sType* type_680=0;
char* name_681=0;
_Bool err_682=0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sNode* _inf_value23;
struct sAlignOfNode* _inf_obj_value23;
void* __right_value789 = (void*)0;
struct sNode* __result444__;
struct sNode* exp_684;
_Bool no_comma_685;
void* __right_value790 = (void*)0;
struct sNode* __dec_obj305;
void* __right_value791 = (void*)0;
struct sNode* __dec_obj306;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sNode* _inf_value24;
struct sAlignOfExpNode* _inf_obj_value24;
void* __right_value797 = (void*)0;
struct sNode* __result447__;
_Bool paren_687;
_Bool is_type_name_flag_688;
char* p_689;
int sline_690;
void* __right_value798 = (void*)0;
char* word_691;
void* __right_value799 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var23 = (void*)0;
struct sType* type_692=0;
char* name_693=0;
_Bool err_694=0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct sNode* _inf_value25;
struct sAlignOfNode2* _inf_obj_value25;
void* __right_value805 = (void*)0;
struct sNode* __result450__;
struct sNode* exp_696;
_Bool no_comma_697;
void* __right_value806 = (void*)0;
struct sNode* __dec_obj311;
void* __right_value807 = (void*)0;
struct sNode* __dec_obj312;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value26;
struct sAlignOfExpNode2* _inf_obj_value26;
void* __right_value813 = (void*)0;
struct sNode* __result453__;
_Bool is_type_name_flag_699;
char* p_700;
int sline_701;
void* __right_value814 = (void*)0;
char* word_702;
void* __right_value815 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var24 = (void*)0;
struct sType* type_703=0;
char* name_704=0;
_Bool err_705=0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct sNode* _inf_value27;
struct sAlignAsNode* _inf_obj_value27;
void* __right_value821 = (void*)0;
struct sNode* __result456__;
void* __right_value822 = (void*)0;
struct sNode* exp_707;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sNode* _inf_value28;
struct sAlignAsExpNode* _inf_obj_value28;
void* __right_value828 = (void*)0;
struct sNode* __result459__;
void* __right_value829 = (void*)0;
struct sNode* __result460__;
exp_656 = (void*)0;
exp_668 = (void*)0;
exp_672 = (void*)0;
exp_684 = (void*)0;
exp_696 = (void*)0;
    if(    !gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value615=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_600=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
        name_601=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        err_602=multiple_assign_var17->v3;
        come_call_finalizer3(__right_value615,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_602) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(        *info->p==40) {
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1470, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value617=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1470, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_600),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            obj_603=(struct sNode*)come_increment_ref_count(_inf_value3);
            come_call_finalizer3(__right_value617,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name_611=(char*)come_increment_ref_count(__builtin_string("initialize"));
            __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value634=parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_603)),(char*)come_increment_ref_count(fun_name_611),info)));
            if(obj_603) { obj_603 = come_decrement_ref_count2(obj_603, ((struct sNode*)obj_603)->finalize, ((struct sNode*)obj_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_611 = come_decrement_ref_count2(fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value634) { __right_value634 = come_decrement_ref_count2(__right_value634, ((struct sNode*)__right_value634)->finalize, ((struct sNode*)__right_value634)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result379__;
            if(obj_603) { obj_603 = come_decrement_ref_count2(obj_603, ((struct sNode*)obj_603)->finalize, ((struct sNode*)obj_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_611 = come_decrement_ref_count2(fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_612=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "21obj.c", 1479, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while((_Bool)1) {
                word_613=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_614=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_615=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_614;
                    if(                    (_if_conditional5=(string_operator_equals(((char*)(__right_value639=exp_615->kind(exp_615->_protocol_obj))),"sWildCard"))),                    (__right_value639 = come_decrement_ref_count2(__right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                    _if_conditional5) {
                        value_node_616=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value640=xsprintf("Value"))),info));
                        __right_value640 = come_decrement_ref_count2(__right_value640, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj264=exp_615;
                        exp_615=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_616),(char*)come_increment_ref_count(word_613),info));
                        if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
                        if(value_node_616) { value_node_616 = come_decrement_ref_count2(value_node_616, ((struct sNode*)value_node_616)->finalize, ((struct sNode*)value_node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    list$1tuple2$2charphsNodephphp_add(initializer_612,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1498, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(word_613),(struct sNode*)come_increment_ref_count(exp_615))));
                    if(exp_615) { exp_615 = come_decrement_ref_count2(exp_615, ((struct sNode*)exp_615)->finalize, ((struct sNode*)exp_615)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==44) {
                    exp_618=(struct sNode*)come_increment_ref_count(create_load_var(word_613,info));
                    list$1tuple2$2charphsNodephphp_add(initializer_612,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1503, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(word_613),(struct sNode*)come_increment_ref_count(exp_618))));
                    if(exp_618) { exp_618 = come_decrement_ref_count2(exp_618, ((struct sNode*)exp_618)->finalize, ((struct sNode*)exp_618)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"invalid character(21) %c\n",*info->p);
                    __result381__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    word_613 = come_decrement_ref_count2(word_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(initializer_612,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result381__;
                }
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    word_613 = come_decrement_ref_count2(word_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    __result382__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    word_613 = come_decrement_ref_count2(word_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(initializer_612,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result382__;
                }
                word_613 = come_decrement_ref_count2(word_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1524, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value649=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1524, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_600),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_612),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sNewNode_finalize;
            _inf_value4->clone=(void*)sNewNode_clone;
            _inf_value4->compile=(void*)sNewNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sNewNode_kind;
            __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value650=_inf_value4));
            come_call_finalizer3(initializer_612,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value649,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value650) { __right_value650 = come_decrement_ref_count2(__right_value650, ((struct sNode*)__right_value650)->finalize, ((struct sNode*)__right_value650)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result383__;
            come_call_finalizer3(initializer_612,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1527, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value652=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1527, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_600),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value653=_inf_value5));
            come_call_finalizer3(type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value652,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value653) { __right_value653 = come_decrement_ref_count2(__right_value653, ((struct sNode*)__right_value653)->finalize, ((struct sNode*)__right_value653)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result384__;
        }
        come_call_finalizer3(type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"true")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1531, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value655=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1531, "struct sTrueNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sTrueNode_finalize;
        _inf_value6->clone=(void*)sTrueNode_clone;
        _inf_value6->compile=(void*)sTrueNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sTrueNode_kind;
        __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value656=_inf_value6));
        come_call_finalizer3(__right_value655,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value656) { __right_value656 = come_decrement_ref_count2(__right_value656, ((struct sNode*)__right_value656)->finalize, ((struct sNode*)__right_value656)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"false")) {
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1534, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value658=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1534, "struct sFalseNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFalseNode_finalize;
        _inf_value7->clone=(void*)sFalseNode_clone;
        _inf_value7->compile=(void*)sFalseNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sFalseNode_kind;
        __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value659=_inf_value7));
        come_call_finalizer3(__right_value658,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value659) { __right_value659 = come_decrement_ref_count2(__right_value659, ((struct sNode*)__right_value659)->finalize, ((struct sNode*)__right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"delete")) {
        node_619=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1539, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value662=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1539, "struct sDeleteNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_619),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sDeleteNode_finalize;
        _inf_value8->clone=(void*)sDeleteNode_clone;
        _inf_value8->compile=(void*)sDeleteNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sDeleteNode_kind;
        __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value666=_inf_value8));
        if(node_619) { node_619 = come_decrement_ref_count2(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value662,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value666) { __right_value666 = come_decrement_ref_count2(__right_value666, ((struct sNode*)__right_value666)->finalize, ((struct sNode*)__right_value666)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result389__;
        if(node_619) { node_619 = come_decrement_ref_count2(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"borrow")) {
        node_621=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1544, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value669=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1544, "struct sBorrowNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_621),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sBorrowNode_finalize;
        _inf_value9->clone=(void*)sBorrowNode_clone;
        _inf_value9->compile=(void*)sBorrowNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sBorrowNode_kind;
        __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value673=_inf_value9));
        if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value669,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value673) { __right_value673 = come_decrement_ref_count2(__right_value673, ((struct sNode*)__right_value673)->finalize, ((struct sNode*)__right_value673)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result392__;
        if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"clone")) {
        node_623=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1549, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value10=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value676=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1549, "struct sCloneNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_623),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sCloneNode_finalize;
        _inf_value10->clone=(void*)sCloneNode_clone;
        _inf_value10->compile=(void*)sCloneNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sCloneNode_kind;
        __result395__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value680=_inf_value10));
        if(node_623) { node_623 = come_decrement_ref_count2(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value676,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value680) { __right_value680 = come_decrement_ref_count2(__right_value680, ((struct sNode*)__right_value680)->finalize, ((struct sNode*)__right_value680)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result395__;
        if(node_623) { node_623 = come_decrement_ref_count2(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dupe")) {
        node_625=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1554, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value11=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value683=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1554, "struct sDupeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_625),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDupeNode_finalize;
        _inf_value11->clone=(void*)sDupeNode_clone;
        _inf_value11->compile=(void*)sDupeNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDupeNode_kind;
        __result398__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value687=_inf_value11));
        if(node_625) { node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value683,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value687) { __right_value687 = come_decrement_ref_count2(__right_value687, ((struct sNode*)__right_value687)->finalize, ((struct sNode*)__right_value687)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result398__;
        if(node_625) { node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        node_627=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1559, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value690=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1559, "struct sDummyHeapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_627),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value12->clone=(void*)sDummyHeapNode_clone;
        _inf_value12->compile=(void*)sDummyHeapNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDummyHeapNode_kind;
        __result401__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value694=_inf_value12));
        if(node_627) { node_627 = come_decrement_ref_count2(node_627, ((struct sNode*)node_627)->finalize, ((struct sNode*)node_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value690,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value694) { __right_value694 = come_decrement_ref_count2(__right_value694, ((struct sNode*)__right_value694)->finalize, ((struct sNode*)__right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result401__;
        if(node_627) { node_627 = come_decrement_ref_count2(node_627, ((struct sNode*)node_627)->finalize, ((struct sNode*)node_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_629=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1569, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value697=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1569, "struct sGCIncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_629),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sGCIncNode_finalize;
        _inf_value13->clone=(void*)sGCIncNode_clone;
        _inf_value13->compile=(void*)sGCIncNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sGCIncNode_kind;
        __result404__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value701=_inf_value13));
        if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value697,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value701) { __right_value701 = come_decrement_ref_count2(__right_value701, ((struct sNode*)__right_value701)->finalize, ((struct sNode*)__right_value701)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result404__;
        if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_631=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1579, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value14=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value704=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1579, "struct sGCDecNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_631),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCDecNode_finalize;
        _inf_value14->clone=(void*)sGCDecNode_clone;
        _inf_value14->compile=(void*)sGCDecNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCDecNode_kind;
        __result407__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value708=_inf_value14));
        if(node_631) { node_631 = come_decrement_ref_count2(node_631, ((struct sNode*)node_631)->finalize, ((struct sNode*)node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value704,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value708) { __right_value708 = come_decrement_ref_count2(__right_value708, ((struct sNode*)__right_value708)->finalize, ((struct sNode*)__right_value708)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result407__;
        if(node_631) { node_631 = come_decrement_ref_count2(node_631, ((struct sNode*)node_631)->finalize, ((struct sNode*)node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_633=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1589, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value15=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value711=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1589, "struct sGCDecNoFreeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_633),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value15->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value15->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNoFreeNode_kind;
        __result410__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value715=_inf_value15));
        if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value711,sGCDecNoFreeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value715) { __right_value715 = come_decrement_ref_count2(__right_value715, ((struct sNode*)__right_value715)->finalize, ((struct sNode*)__right_value715)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result410__;
        if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var18=((struct tuple3$3sTypephcharphbool*)(__right_value716=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_635=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
        param_name_636=(char*)come_increment_ref_count(multiple_assign_var18->v2);
        err_637=multiple_assign_var18->v3;
        come_call_finalizer3(__right_value716,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_637) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_638=(struct sType*)come_increment_ref_count(solve_generics(param_type_635,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1605, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value16=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value719=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1605, "struct sIsHeap*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_638),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sIsHeap_finalize;
        _inf_value16->clone=(void*)sIsHeap_clone;
        _inf_value16->compile=(void*)sIsHeap_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sIsHeap_kind;
        __result413__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value723=_inf_value16));
        come_call_finalizer3(param_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_636 = come_decrement_ref_count2(param_name_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_638,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value719,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value723) { __right_value723 = come_decrement_ref_count2(__right_value723, ((struct sNode*)__right_value723)->finalize, ((struct sNode*)__right_value723)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result413__;
        come_call_finalizer3(param_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_636 = come_decrement_ref_count2(param_name_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_638,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var19=((struct tuple3$3sTypephcharphbool*)(__right_value724=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_640=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
        param_name_641=(char*)come_increment_ref_count(multiple_assign_var19->v2);
        err_642=multiple_assign_var19->v3;
        come_call_finalizer3(__right_value724,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_642) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_643=(struct sType*)come_increment_ref_count(solve_generics(param_type_640,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1621, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value17=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value727=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1621, "struct sIsPointer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_643),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sIsPointer_finalize;
        _inf_value17->clone=(void*)sIsPointer_clone;
        _inf_value17->compile=(void*)sIsPointer_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sIsPointer_kind;
        __result416__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value731=_inf_value17));
        come_call_finalizer3(param_type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_641 = come_decrement_ref_count2(param_name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_643,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value727,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value731) { __right_value731 = come_decrement_ref_count2(__right_value731, ((struct sNode*)__right_value731)->finalize, ((struct sNode*)__right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result416__;
        come_call_finalizer3(param_type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_641 = come_decrement_ref_count2(param_name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_643,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result417__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value732=create_nothing_node(info)));
            if(__right_value732) { __right_value732 = come_decrement_ref_count2(__right_value732, ((struct sNode*)__right_value732)->finalize, ((struct sNode*)__right_value732)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result417__;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result418__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value733=create_nothing_node(info)));
            if(__right_value733) { __right_value733 = come_decrement_ref_count2(__right_value733, ((struct sNode*)__right_value733)->finalize, ((struct sNode*)__right_value733)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result418__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result419__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value734=create_nothing_node(info)));
            if(__right_value734) { __right_value734 = come_decrement_ref_count2(__right_value734, ((struct sNode*)__right_value734)->finalize, ((struct sNode*)__right_value734)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result419__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result420__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value735=create_nothing_node(info)));
            if(__right_value735) { __right_value735 = come_decrement_ref_count2(__right_value735, ((struct sNode*)__right_value735)->finalize, ((struct sNode*)__right_value735)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result420__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_645=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123) {
                node_646=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info));
                gComeC=come_c_645;
                __result421__ = gComeFunResultObject = __result_obj__ = node_646;
                if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 1, 0, (void*)0); } 
                gComeFunResultObject = (void*)0;
                return __result421__;
                if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                __result422__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value737=create_nothing_node(info)));
                if(__right_value737) { __right_value737 = come_decrement_ref_count2(__right_value737, ((struct sNode*)__right_value737)->finalize, ((struct sNode*)__right_value737)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result422__;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __result423__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value738=create_nothing_node(info)));
            if(__right_value738) { __right_value738 = come_decrement_ref_count2(__right_value738, ((struct sNode*)__right_value738)->finalize, ((struct sNode*)__right_value738)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result423__;
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __result424__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value739=create_nothing_node(info)));
            if(__right_value739) { __right_value739 = come_decrement_ref_count2(__right_value739, ((struct sNode*)__right_value739)->finalize, ((struct sNode*)__right_value739)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result424__;
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __result425__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value740=create_nothing_node(info)));
            if(__right_value740) { __right_value740 = come_decrement_ref_count2(__right_value740, ((struct sNode*)__right_value740)->finalize, ((struct sNode*)__right_value740)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result425__;
        }
        else if(        parsecmp("no-null-check",info)) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __result426__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value741=create_nothing_node(info)));
            if(__right_value741) { __right_value741 = come_decrement_ref_count2(__right_value741, ((struct sNode*)__right_value741)->finalize, ((struct sNode*)__right_value741)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result426__;
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")) {
        paren_647=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_647=(_Bool)1;
        }
        is_type_name_flag_648=(_Bool)0;
        {
            p_649=info->p;
            sline_650=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_651=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_651,info)) {
                    is_type_name_flag_648=(_Bool)1;
                }
                word_651 = come_decrement_ref_count2(word_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_649;
            info->sline=sline_650;
        }
        if(        is_type_name_flag_648) {
            multiple_assign_var20=((struct tuple3$3sTypephcharphbool*)(__right_value743=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_652=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
            name_653=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            err_654=multiple_assign_var20->v3;
            come_call_finalizer3(__right_value743,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_654) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_647&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1745, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value745=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1745, "struct sSizeOfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_652),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sSizeOfNode_finalize;
            _inf_value18->clone=(void*)sSizeOfNode_clone;
            _inf_value18->compile=(void*)sSizeOfNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sSizeOfNode_kind;
            __result429__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value749=_inf_value18));
            come_call_finalizer3(type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_653 = come_decrement_ref_count2(name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value745,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value749) { __right_value749 = come_decrement_ref_count2(__right_value749, ((struct sNode*)__right_value749)->finalize, ((struct sNode*)__right_value749)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result429__;
            come_call_finalizer3(type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_653 = come_decrement_ref_count2(name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_647) {
                no_comma_657=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj289=exp_656;
                exp_656=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_657;
            }
            else {
                __dec_obj290=exp_656;
                exp_656=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_647&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1766, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value753=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1766, "struct sSizeOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_656),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value19->clone=(void*)sSizeOfExpNode_clone;
            _inf_value19->compile=(void*)sSizeOfExpNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sSizeOfExpNode_kind;
            __result432__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value757=_inf_value19));
            if(exp_656) { exp_656 = come_decrement_ref_count2(exp_656, ((struct sNode*)exp_656)->finalize, ((struct sNode*)exp_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value753,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value757) { __right_value757 = come_decrement_ref_count2(__right_value757, ((struct sNode*)__right_value757)->finalize, ((struct sNode*)__right_value757)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result432__;
            if(exp_656) { exp_656 = come_decrement_ref_count2(exp_656, ((struct sNode*)exp_656)->finalize, ((struct sNode*)exp_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"typeof")) {
        paren_659=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_659=(_Bool)1;
        }
        is_type_name_flag_660=(_Bool)0;
        {
            p_661=info->p;
            sline_662=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_663=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_663,info)) {
                    is_type_name_flag_660=(_Bool)1;
                }
                word_663 = come_decrement_ref_count2(word_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_661;
            info->sline=sline_662;
        }
        if(        is_type_name_flag_660) {
            multiple_assign_var21=((struct tuple3$3sTypephcharphbool*)(__right_value759=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_664=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
            name_665=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            err_666=multiple_assign_var21->v3;
            come_call_finalizer3(__right_value759,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_666) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_659&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1811, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value761=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1811, "struct sTypeOfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_664),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sTypeOfNode_finalize;
            _inf_value20->clone=(void*)sTypeOfNode_clone;
            _inf_value20->compile=(void*)sTypeOfNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sTypeOfNode_kind;
            __result435__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value765=_inf_value20));
            come_call_finalizer3(type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_665 = come_decrement_ref_count2(name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value761,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value765) { __right_value765 = come_decrement_ref_count2(__right_value765, ((struct sNode*)__right_value765)->finalize, ((struct sNode*)__right_value765)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result435__;
            come_call_finalizer3(type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_665 = come_decrement_ref_count2(name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_659) {
                no_comma_669=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj295=exp_668;
                exp_668=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_669;
            }
            else {
                __dec_obj296=exp_668;
                exp_668=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_659&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1832, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value769=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1832, "struct sTypeOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_668),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value21->clone=(void*)sTypeOfExpNode_clone;
            _inf_value21->compile=(void*)sTypeOfExpNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sTypeOfExpNode_kind;
            __result438__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value773=_inf_value21));
            if(exp_668) { exp_668 = come_decrement_ref_count2(exp_668, ((struct sNode*)exp_668)->finalize, ((struct sNode*)exp_668)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value769,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value773) { __right_value773 = come_decrement_ref_count2(__right_value773, ((struct sNode*)__right_value773)->finalize, ((struct sNode*)__right_value773)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result438__;
            if(exp_668) { exp_668 = come_decrement_ref_count2(exp_668, ((struct sNode*)exp_668)->finalize, ((struct sNode*)exp_668)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"dynamic_typeof")) {
        paren_671=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_671=(_Bool)1;
        }
        if(        !paren_671) {
            no_comma_673=info->no_comma;
            info->no_comma=(_Bool)1;
            __dec_obj299=exp_672;
            exp_672=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_673;
        }
        else {
            __dec_obj300=exp_672;
            exp_672=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
        }
        if(        paren_671&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1863, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value22=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value777=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1863, "struct sDynamicTypeOf*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_672),info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value22->clone=(void*)sDynamicTypeOf_clone;
        _inf_value22->compile=(void*)sDynamicTypeOf_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sDynamicTypeOf_kind;
        __result441__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value781=_inf_value22));
        if(exp_672) { exp_672 = come_decrement_ref_count2(exp_672, ((struct sNode*)exp_672)->finalize, ((struct sNode*)exp_672)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value777,sDynamicTypeOf_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value781) { __right_value781 = come_decrement_ref_count2(__right_value781, ((struct sNode*)__right_value781)->finalize, ((struct sNode*)__right_value781)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result441__;
        if(exp_672) { exp_672 = come_decrement_ref_count2(exp_672, ((struct sNode*)exp_672)->finalize, ((struct sNode*)exp_672)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"_Alignof")) {
        paren_675=(_Bool)0;
        if(        *info->p==40) {
            paren_675=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_676=(_Bool)0;
        {
            p_677=info->p;
            sline_678=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_679=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_679,info)) {
                    is_type_name_flag_676=(_Bool)1;
                }
                word_679 = come_decrement_ref_count2(word_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_677;
            info->sline=sline_678;
        }
        if(        is_type_name_flag_676) {
            multiple_assign_var22=((struct tuple3$3sTypephcharphbool*)(__right_value783=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_680=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
            name_681=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            err_682=multiple_assign_var22->v3;
            come_call_finalizer3(__right_value783,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_682) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            if(            paren_675&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1904, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value23=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value785=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1904, "struct sAlignOfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_680),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sAlignOfNode_finalize;
            _inf_value23->clone=(void*)sAlignOfNode_clone;
            _inf_value23->compile=(void*)sAlignOfNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sAlignOfNode_kind;
            __result444__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value789=_inf_value23));
            come_call_finalizer3(type_680,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_681 = come_decrement_ref_count2(name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value785,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value789) { __right_value789 = come_decrement_ref_count2(__right_value789, ((struct sNode*)__right_value789)->finalize, ((struct sNode*)__right_value789)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result444__;
            come_call_finalizer3(type_680,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_681 = come_decrement_ref_count2(name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_675) {
                no_comma_685=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj305=exp_684;
                exp_684=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_685;
            }
            else {
                __dec_obj306=exp_684;
                exp_684=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1918, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value24=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value793=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1918, "struct sAlignOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_684),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value24->clone=(void*)sAlignOfExpNode_clone;
            _inf_value24->compile=(void*)sAlignOfExpNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sAlignOfExpNode_kind;
            __result447__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value797=_inf_value24));
            if(exp_684) { exp_684 = come_decrement_ref_count2(exp_684, ((struct sNode*)exp_684)->finalize, ((struct sNode*)exp_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value793,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value797) { __right_value797 = come_decrement_ref_count2(__right_value797, ((struct sNode*)__right_value797)->finalize, ((struct sNode*)__right_value797)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result447__;
            if(exp_684) { exp_684 = come_decrement_ref_count2(exp_684, ((struct sNode*)exp_684)->finalize, ((struct sNode*)exp_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")) {
        paren_687=(_Bool)0;
        if(        *info->p==40) {
            paren_687=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_688=(_Bool)0;
        {
            p_689=info->p;
            sline_690=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_691=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_691,info)) {
                    is_type_name_flag_688=(_Bool)1;
                }
                word_691 = come_decrement_ref_count2(word_691, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_689;
            info->sline=sline_690;
        }
        if(        is_type_name_flag_688) {
            multiple_assign_var23=((struct tuple3$3sTypephcharphbool*)(__right_value799=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_692=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
            name_693=(char*)come_increment_ref_count(multiple_assign_var23->v2);
            err_694=multiple_assign_var23->v3;
            come_call_finalizer3(__right_value799,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_694) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_687&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1959, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value25=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value801=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1959, "struct sAlignOfNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_692),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value25->clone=(void*)sAlignOfNode2_clone;
            _inf_value25->compile=(void*)sAlignOfNode2_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfNode2_kind;
            __result450__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value805=_inf_value25));
            come_call_finalizer3(type_692,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_693 = come_decrement_ref_count2(name_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value801,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value805) { __right_value805 = come_decrement_ref_count2(__right_value805, ((struct sNode*)__right_value805)->finalize, ((struct sNode*)__right_value805)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result450__;
            come_call_finalizer3(type_692,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_693 = come_decrement_ref_count2(name_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_687) {
                no_comma_697=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj311=exp_696;
                exp_696=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_697;
            }
            else {
                __dec_obj312=exp_696;
                exp_696=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1973, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value26=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value809=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1973, "struct sAlignOfExpNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_696),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value26->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value26->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfExpNode2_kind;
            __result453__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value813=_inf_value26));
            if(exp_696) { exp_696 = come_decrement_ref_count2(exp_696, ((struct sNode*)exp_696)->finalize, ((struct sNode*)exp_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value809,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value813) { __right_value813 = come_decrement_ref_count2(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result453__;
            if(exp_696) { exp_696 = come_decrement_ref_count2(exp_696, ((struct sNode*)exp_696)->finalize, ((struct sNode*)exp_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")) {
        expected_next_character(40,info);
        is_type_name_flag_699=(_Bool)0;
        {
            p_700=info->p;
            sline_701=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_702=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_702,info)) {
                    is_type_name_flag_699=(_Bool)1;
                }
                word_702 = come_decrement_ref_count2(word_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_700;
            info->sline=sline_701;
        }
        if(        is_type_name_flag_699) {
            multiple_assign_var24=((struct tuple3$3sTypephcharphbool*)(__right_value815=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_703=(struct sType*)come_increment_ref_count(multiple_assign_var24->v1);
            name_704=(char*)come_increment_ref_count(multiple_assign_var24->v2);
            err_705=multiple_assign_var24->v3;
            come_call_finalizer3(__right_value815,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_705) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2006, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value27=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value817=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 2006, "struct sAlignAsNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_703),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignAsNode_finalize;
            _inf_value27->clone=(void*)sAlignAsNode_clone;
            _inf_value27->compile=(void*)sAlignAsNode_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignAsNode_kind;
            __result456__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value821=_inf_value27));
            come_call_finalizer3(type_703,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_704 = come_decrement_ref_count2(name_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value817,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value821) { __right_value821 = come_decrement_ref_count2(__right_value821, ((struct sNode*)__right_value821)->finalize, ((struct sNode*)__right_value821)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result456__;
            come_call_finalizer3(type_703,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_704 = come_decrement_ref_count2(name_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            exp_707=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2013, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value28=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value824=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 2013, "struct sAlignAsExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_707),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value28->clone=(void*)sAlignAsExpNode_clone;
            _inf_value28->compile=(void*)sAlignAsExpNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignAsExpNode_kind;
            __result459__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value828=_inf_value28));
            if(exp_707) { exp_707 = come_decrement_ref_count2(exp_707, ((struct sNode*)exp_707)->finalize, ((struct sNode*)exp_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value824,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value828) { __right_value828 = come_decrement_ref_count2(__right_value828, ((struct sNode*)__right_value828)->finalize, ((struct sNode*)__right_value828)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result459__;
            if(exp_707) { exp_707 = come_decrement_ref_count2(exp_707, ((struct sNode*)exp_707)->finalize, ((struct sNode*)exp_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result460__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value829=string_node_v20(buf,head,head_sline,info)));
    if(__right_value829) { __right_value829 = come_decrement_ref_count2(__right_value829, ((struct sNode*)__right_value829)->finalize, ((struct sNode*)__right_value829)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result460__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj252;
char* __dec_obj253;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj252=self->v1;
            come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj253=self->v2;
            __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__=(void*)0;
struct sNewNode* __result371__;
void* __right_value618 = (void*)0;
struct sNewNode* result_604;
void* __right_value619 = (void*)0;
char* __dec_obj254;
void* __right_value620 = (void*)0;
struct sType* __dec_obj255;
void* __right_value630 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj263;
struct sNewNode* __result378__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_604=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_604->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj254=result_604->sname;
        result_604->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_604->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj255=result_604->type;
        result_604->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj263=result_604->initializer;
        result_604->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj263,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result378__ = gComeFunResultObject = __result_obj__ = result_604;
    come_call_finalizer3(result_604,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result372__;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_605;
struct list_item$1tuple2$2charphsNodephph* it_606;
void* __right_value629 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result377__;
    if(    self==((void*)0)) {
        __result372__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    result_605=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_606=self->head;
    while(it_606!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_605,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_606->item)));
        it_606=it_606->next;
    }
    __result377__ = gComeFunResultObject = __result_obj__ = result_605;
    come_call_finalizer3(result_605,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result373__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result373__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value623 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_607;
struct tuple2$2charphsNodeph* __dec_obj256;
void* __right_value624 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_608;
struct tuple2$2charphsNodeph* __dec_obj257;
void* __right_value625 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_609;
struct tuple2$2charphsNodeph* __dec_obj258;
struct list$1tuple2$2charphsNodephph* __result374__;
    if(    self->len==0) {
        litem_607=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value623=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1382, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_607->prev=((void*)0);
        litem_607->next=((void*)0);
        __dec_obj256=litem_607->item;
        litem_607->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj256,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_607;
        self->head=litem_607;
    }
    else if(    self->len==1) {
        litem_608=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value624=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1392, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_608->prev=self->head;
        litem_608->next=((void*)0);
        __dec_obj257=litem_608->item;
        litem_608->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj257,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_608;
        self->head->next=litem_608;
    }
    else {
        litem_609=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value625=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1402, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_609->prev=self->tail;
        litem_609->next=((void*)0);
        __dec_obj258=litem_609->item;
        litem_609->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj258,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_609;
        self->tail=litem_609;
    }
    self->len++;
    __result374__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result375__;
void* __right_value626 = (void*)0;
struct tuple2$2charphsNodeph* result_610;
void* __right_value627 = (void*)0;
char* __dec_obj259;
void* __right_value628 = (void*)0;
struct sNode* __dec_obj260;
struct tuple2$2charphsNodeph* __result376__;
    if(    self==(void*)0) {
        __result375__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    result_610=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj259=result_610->v1;
        result_610->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj260=result_610->v2;
        result_610->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result376__ = gComeFunResultObject = __result_obj__ = result_610;
    come_call_finalizer3(result_610,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj261;
struct sNode* __dec_obj262;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj261=self->v1;
            __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj262=self->v2;
            if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_617;
    result_617=0;
    result_617+=int_get_hash_key(((int)self->v1));
    result_617+=int_get_hash_key(((int)self->v2));
    return result_617;
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
char* __dec_obj265;
struct sNode* __dec_obj266;
struct tuple2$2charphsNodeph* __result380__;
    __dec_obj265=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj266=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
    __result380__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
struct sDeleteNode* __result387__;
void* __right_value663 = (void*)0;
struct sDeleteNode* result_620;
void* __right_value664 = (void*)0;
char* __dec_obj267;
void* __right_value665 = (void*)0;
struct sNode* __dec_obj268;
struct sDeleteNode* __result388__;
    if(    self==(void*)0) {
        __result387__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    result_620=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_620->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj267=result_620->sname;
        result_620->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_620->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj268=result_620->node;
        result_620->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result388__ = gComeFunResultObject = __result_obj__ = result_620;
    come_call_finalizer3(result_620,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
struct sBorrowNode* __result390__;
void* __right_value670 = (void*)0;
struct sBorrowNode* result_622;
void* __right_value671 = (void*)0;
char* __dec_obj269;
void* __right_value672 = (void*)0;
struct sNode* __dec_obj270;
struct sBorrowNode* __result391__;
    if(    self==(void*)0) {
        __result390__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    result_622=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_622->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj269=result_622->sname;
        result_622->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_622->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj270=result_622->node;
        result_622->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result391__ = gComeFunResultObject = __result_obj__ = result_622;
    come_call_finalizer3(result_622,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__=(void*)0;
struct sCloneNode* __result393__;
void* __right_value677 = (void*)0;
struct sCloneNode* result_624;
void* __right_value678 = (void*)0;
char* __dec_obj271;
void* __right_value679 = (void*)0;
struct sNode* __dec_obj272;
struct sCloneNode* __result394__;
    if(    self==(void*)0) {
        __result393__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result393__;
    }
    result_624=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_624->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj271=result_624->sname;
        result_624->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_624->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj272=result_624->node;
        result_624->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result394__ = gComeFunResultObject = __result_obj__ = result_624;
    come_call_finalizer3(result_624,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__=(void*)0;
struct sDupeNode* __result396__;
void* __right_value684 = (void*)0;
struct sDupeNode* result_626;
void* __right_value685 = (void*)0;
char* __dec_obj273;
void* __right_value686 = (void*)0;
struct sNode* __dec_obj274;
struct sDupeNode* __result397__;
    if(    self==(void*)0) {
        __result396__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    result_626=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_626->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj273=result_626->sname;
        result_626->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_626->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj274=result_626->node;
        result_626->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result397__ = gComeFunResultObject = __result_obj__ = result_626;
    come_call_finalizer3(result_626,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
struct sDummyHeapNode* __result399__;
void* __right_value691 = (void*)0;
struct sDummyHeapNode* result_628;
void* __right_value692 = (void*)0;
char* __dec_obj275;
void* __right_value693 = (void*)0;
struct sNode* __dec_obj276;
struct sDummyHeapNode* __result400__;
    if(    self==(void*)0) {
        __result399__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result399__;
    }
    result_628=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_628->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj275=result_628->sname;
        result_628->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_628->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj276=result_628->node;
        result_628->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result400__ = gComeFunResultObject = __result_obj__ = result_628;
    come_call_finalizer3(result_628,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
struct sGCIncNode* __result402__;
void* __right_value698 = (void*)0;
struct sGCIncNode* result_630;
void* __right_value699 = (void*)0;
char* __dec_obj277;
void* __right_value700 = (void*)0;
struct sNode* __dec_obj278;
struct sGCIncNode* __result403__;
    if(    self==(void*)0) {
        __result402__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result402__;
    }
    result_630=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_630->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj277=result_630->sname;
        result_630->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_630->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj278=result_630->node;
        result_630->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result403__ = gComeFunResultObject = __result_obj__ = result_630;
    come_call_finalizer3(result_630,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNode* __result405__;
void* __right_value705 = (void*)0;
struct sGCDecNode* result_632;
void* __right_value706 = (void*)0;
char* __dec_obj279;
void* __right_value707 = (void*)0;
struct sNode* __dec_obj280;
struct sGCDecNode* __result406__;
    if(    self==(void*)0) {
        __result405__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result405__;
    }
    result_632=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_632->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj279=result_632->sname;
        result_632->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_632->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj280=result_632->node;
        result_632->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result406__ = gComeFunResultObject = __result_obj__ = result_632;
    come_call_finalizer3(result_632,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNoFreeNode* __result408__;
void* __right_value712 = (void*)0;
struct sGCDecNoFreeNode* result_634;
void* __right_value713 = (void*)0;
char* __dec_obj281;
void* __right_value714 = (void*)0;
struct sNode* __dec_obj282;
struct sGCDecNoFreeNode* __result409__;
    if(    self==(void*)0) {
        __result408__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result408__;
    }
    result_634=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_634->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj281=result_634->sname;
        result_634->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_634->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj282=result_634->node;
        result_634->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result409__ = gComeFunResultObject = __result_obj__ = result_634;
    come_call_finalizer3(result_634,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__=(void*)0;
struct sIsHeap* __result411__;
void* __right_value720 = (void*)0;
struct sIsHeap* result_639;
void* __right_value721 = (void*)0;
char* __dec_obj283;
void* __right_value722 = (void*)0;
struct sType* __dec_obj284;
struct sIsHeap* __result412__;
    if(    self==(void*)0) {
        __result411__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result411__;
    }
    result_639=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_639->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj283=result_639->sname;
        result_639->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_639->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj284=result_639->type;
        result_639->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj284,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result412__ = gComeFunResultObject = __result_obj__ = result_639;
    come_call_finalizer3(result_639,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__=(void*)0;
struct sIsPointer* __result414__;
void* __right_value728 = (void*)0;
struct sIsPointer* result_644;
void* __right_value729 = (void*)0;
char* __dec_obj285;
void* __right_value730 = (void*)0;
struct sType* __dec_obj286;
struct sIsPointer* __result415__;
    if(    self==(void*)0) {
        __result414__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result414__;
    }
    result_644=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_644->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj285=result_644->sname;
        result_644->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_644->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj286=result_644->type;
        result_644->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj286,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result415__ = gComeFunResultObject = __result_obj__ = result_644;
    come_call_finalizer3(result_644,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfNode* __result427__;
void* __right_value746 = (void*)0;
struct sSizeOfNode* result_655;
void* __right_value747 = (void*)0;
char* __dec_obj287;
void* __right_value748 = (void*)0;
struct sType* __dec_obj288;
struct sSizeOfNode* __result428__;
    if(    self==(void*)0) {
        __result427__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result427__;
    }
    result_655=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_655->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj287=result_655->sname;
        result_655->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj288=result_655->type;
        result_655->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj288,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result428__ = gComeFunResultObject = __result_obj__ = result_655;
    come_call_finalizer3(result_655,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result428__;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfExpNode* __result430__;
void* __right_value754 = (void*)0;
struct sSizeOfExpNode* result_658;
void* __right_value755 = (void*)0;
char* __dec_obj291;
void* __right_value756 = (void*)0;
struct sNode* __dec_obj292;
struct sSizeOfExpNode* __result431__;
    if(    self==(void*)0) {
        __result430__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result430__;
    }
    result_658=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_658->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj291=result_658->sname;
        result_658->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_658->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj292=result_658->exp;
        result_658->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result431__ = gComeFunResultObject = __result_obj__ = result_658;
    come_call_finalizer3(result_658,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result431__;
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfNode* __result433__;
void* __right_value762 = (void*)0;
struct sTypeOfNode* result_667;
void* __right_value763 = (void*)0;
char* __dec_obj293;
void* __right_value764 = (void*)0;
struct sType* __dec_obj294;
struct sTypeOfNode* __result434__;
    if(    self==(void*)0) {
        __result433__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result433__;
    }
    result_667=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_667->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj293=result_667->sname;
        result_667->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_667->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj294=result_667->type;
        result_667->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj294,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result434__ = gComeFunResultObject = __result_obj__ = result_667;
    come_call_finalizer3(result_667,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result434__;
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfExpNode* __result436__;
void* __right_value770 = (void*)0;
struct sTypeOfExpNode* result_670;
void* __right_value771 = (void*)0;
char* __dec_obj297;
void* __right_value772 = (void*)0;
struct sNode* __dec_obj298;
struct sTypeOfExpNode* __result437__;
    if(    self==(void*)0) {
        __result436__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result436__;
    }
    result_670=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_670->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj297=result_670->sname;
        result_670->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_670->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj298=result_670->exp;
        result_670->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result437__ = gComeFunResultObject = __result_obj__ = result_670;
    come_call_finalizer3(result_670,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result437__;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self){
void* __result_obj__=(void*)0;
struct sDynamicTypeOf* __result439__;
void* __right_value778 = (void*)0;
struct sDynamicTypeOf* result_674;
void* __right_value779 = (void*)0;
char* __dec_obj301;
void* __right_value780 = (void*)0;
struct sNode* __dec_obj302;
struct sDynamicTypeOf* __result440__;
    if(    self==(void*)0) {
        __result439__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result439__;
    }
    result_674=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_674->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj301=result_674->sname;
        result_674->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_674->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj302=result_674->exp;
        result_674->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result440__ = gComeFunResultObject = __result_obj__ = result_674;
    come_call_finalizer3(result_674,sDynamicTypeOf_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result440__;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode* __result442__;
void* __right_value786 = (void*)0;
struct sAlignOfNode* result_683;
void* __right_value787 = (void*)0;
char* __dec_obj303;
void* __right_value788 = (void*)0;
struct sType* __dec_obj304;
struct sAlignOfNode* __result443__;
    if(    self==(void*)0) {
        __result442__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result442__;
    }
    result_683=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_683->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj303=result_683->sname;
        result_683->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_683->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj304=result_683->type;
        result_683->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj304,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result443__ = gComeFunResultObject = __result_obj__ = result_683;
    come_call_finalizer3(result_683,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result443__;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode* __result445__;
void* __right_value794 = (void*)0;
struct sAlignOfExpNode* result_686;
void* __right_value795 = (void*)0;
char* __dec_obj307;
void* __right_value796 = (void*)0;
struct sNode* __dec_obj308;
struct sAlignOfExpNode* __result446__;
    if(    self==(void*)0) {
        __result445__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result445__;
    }
    result_686=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_686->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj307=result_686->sname;
        result_686->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_686->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj308=result_686->exp;
        result_686->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result446__ = gComeFunResultObject = __result_obj__ = result_686;
    come_call_finalizer3(result_686,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result446__;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode2* __result448__;
void* __right_value802 = (void*)0;
struct sAlignOfNode2* result_695;
void* __right_value803 = (void*)0;
char* __dec_obj309;
void* __right_value804 = (void*)0;
struct sType* __dec_obj310;
struct sAlignOfNode2* __result449__;
    if(    self==(void*)0) {
        __result448__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result448__;
    }
    result_695=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_695->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj309=result_695->sname;
        result_695->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_695->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj310=result_695->type;
        result_695->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj310,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result449__ = gComeFunResultObject = __result_obj__ = result_695;
    come_call_finalizer3(result_695,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result449__;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode2* __result451__;
void* __right_value810 = (void*)0;
struct sAlignOfExpNode2* result_698;
void* __right_value811 = (void*)0;
char* __dec_obj313;
void* __right_value812 = (void*)0;
struct sNode* __dec_obj314;
struct sAlignOfExpNode2* __result452__;
    if(    self==(void*)0) {
        __result451__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result451__;
    }
    result_698=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_698->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj313=result_698->sname;
        result_698->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_698->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj314=result_698->exp;
        result_698->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result452__ = gComeFunResultObject = __result_obj__ = result_698;
    come_call_finalizer3(result_698,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result452__;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsNode* __result454__;
void* __right_value818 = (void*)0;
struct sAlignAsNode* result_706;
void* __right_value819 = (void*)0;
char* __dec_obj315;
void* __right_value820 = (void*)0;
struct sType* __dec_obj316;
struct sAlignAsNode* __result455__;
    if(    self==(void*)0) {
        __result454__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result454__;
    }
    result_706=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_706->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_706->sname;
        result_706->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_706->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj316=result_706->type;
        result_706->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj316,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result455__ = gComeFunResultObject = __result_obj__ = result_706;
    come_call_finalizer3(result_706,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result455__;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsExpNode* __result457__;
void* __right_value825 = (void*)0;
struct sAlignAsExpNode* result_708;
void* __right_value826 = (void*)0;
char* __dec_obj317;
void* __right_value827 = (void*)0;
struct sNode* __dec_obj318;
struct sAlignAsExpNode* __result458__;
    if(    self==(void*)0) {
        __result457__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result457__;
    }
    result_708=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_708->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj317=result_708->sname;
        result_708->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_708->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj318=result_708->exp;
        result_708->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result458__ = gComeFunResultObject = __result_obj__ = result_708;
    come_call_finalizer3(result_708,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result458__;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value830 = (void*)0;
struct sNode* __result461__;
void* __right_value831 = (void*)0;
struct sNode* __result462__;
void* __right_value832 = (void*)0;
struct sNode* __result463__;
_Bool come_c_709;
void* __right_value833 = (void*)0;
struct sNode* __result464__;
void* __right_value834 = (void*)0;
struct sNode* __result465__;
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
            __result461__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value830=create_nothing_node(info)));
            if(__right_value830) { __right_value830 = come_decrement_ref_count2(__right_value830, ((struct sNode*)__right_value830)->finalize, ((struct sNode*)__right_value830)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result461__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result462__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value831=create_nothing_node(info)));
            if(__right_value831) { __right_value831 = come_decrement_ref_count2(__right_value831, ((struct sNode*)__right_value831)->finalize, ((struct sNode*)__right_value831)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result462__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result463__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value832=create_nothing_node(info)));
            if(__right_value832) { __right_value832 = come_decrement_ref_count2(__right_value832, ((struct sNode*)__right_value832)->finalize, ((struct sNode*)__right_value832)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result463__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_709=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_709;
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
            err_msg(info,"invalid using");
            exit(2);
        }
        __result464__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value833=create_nothing_node(info)));
        if(__right_value833) { __right_value833 = come_decrement_ref_count2(__right_value833, ((struct sNode*)__right_value833)->finalize, ((struct sNode*)__right_value833)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result464__;
    }
    __result465__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value834=top_level_v93(buf,head,head_sline,info)));
    if(__right_value834) { __right_value834 = come_decrement_ref_count2(__right_value834, ((struct sNode*)__right_value834)->finalize, ((struct sNode*)__right_value834)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result465__;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sNode* _inf_value29;
struct sImplementsNode* _inf_obj_value29;
void* __right_value841 = (void*)0;
struct sNode* __result468__;
    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2097, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value29=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value836=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2097, "struct sImplementsNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value29->_protocol_obj=_inf_obj_value29;
    _inf_value29->finalize=(void*)sImplementsNode_finalize;
    _inf_value29->clone=(void*)sImplementsNode_clone;
    _inf_value29->compile=(void*)sImplementsNode_compile;
    _inf_value29->sline=(void*)sNodeBase_sline;
    _inf_value29->sline_real=(void*)sNodeBase_sline_real;
    _inf_value29->sname=(void*)sNodeBase_sname;
    _inf_value29->terminated=(void*)sNodeBase_terminated;
    _inf_value29->kind=(void*)sImplementsNode_kind;
    __result468__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value841=_inf_value29));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value836,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value841) { __right_value841 = come_decrement_ref_count2(__right_value841, ((struct sNode*)__right_value841)->finalize, ((struct sNode*)__right_value841)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result468__;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
struct sImplementsNode* __result466__;
void* __right_value837 = (void*)0;
struct sImplementsNode* result_710;
void* __right_value838 = (void*)0;
char* __dec_obj319;
void* __right_value839 = (void*)0;
struct sNode* __dec_obj320;
void* __right_value840 = (void*)0;
struct sType* __dec_obj321;
struct sImplementsNode* __result467__;
    if(    self==(void*)0) {
        __result466__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result466__;
    }
    result_710=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_710->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj319=result_710->sname;
        result_710->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_710->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj320=result_710->obj_exp;
        result_710->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
        if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj321=result_710->inf_type;
        result_710->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
        come_call_finalizer3(__dec_obj321,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result467__ = gComeFunResultObject = __result_obj__ = result_710;
    come_call_finalizer3(result_710,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result467__;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value842 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var25 = (void*)0;
struct sType* type3_711=0;
char* name2_712=0;
_Bool err_713=0;
void* __right_value843 = (void*)0;
struct sType* inf_type_714;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sNode* _inf_value30;
struct sImplementsNode* _inf_obj_value30;
void* __right_value846 = (void*)0;
struct sNode* __result469__;
void* __right_value847 = (void*)0;
struct sNode* __result470__;
    if(    !gComeC&&parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var25=((struct tuple3$3sTypephcharphbool*)(__right_value842=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_711=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
        name2_712=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        err_713=multiple_assign_var25->v3;
        come_call_finalizer3(__right_value842,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_713) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_714=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_711));
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2114, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value845=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2114, "struct sImplementsNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_714),info))));
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sImplementsNode_finalize;
        _inf_value30->clone=(void*)sImplementsNode_clone;
        _inf_value30->compile=(void*)sImplementsNode_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sImplementsNode_kind;
        __result469__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value846=_inf_value30));
        come_call_finalizer3(type3_711,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_712 = come_decrement_ref_count2(name2_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value845,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value846) { __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result469__;
        come_call_finalizer3(type3_711,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_712 = come_decrement_ref_count2(name2_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result470__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value847=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value847) { __right_value847 = come_decrement_ref_count2(__right_value847, ((struct sNode*)__right_value847)->finalize, ((struct sNode*)__right_value847)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result470__;
}

