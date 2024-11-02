// source head
typedef unsigned long unsigned  int size_t;
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
typedef long (*cookie_read_function_t)(void*,char*,unsigned long unsigned  int);
typedef long (*cookie_write_function_t)(void*,const char*,unsigned long unsigned  int);
typedef int (*cookie_seek_function_t)(void*,long*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long unsigned  int);
    long (*write)(void*,const char*,unsigned long unsigned  int);
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
struct __locale_struct;
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
typedef void* any;
typedef char* string;
extern void* wildcard;
extern _Bool gComeGCLib;
extern void* gComeFunResultObject;
struct buffer
{
    char* buf;
    int len;
    int size;
};
struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};
struct smart_pointer$1short
{
    struct buffer* memory;
    short short* p;
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
    short short item;
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
    short short* items;
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
struct integer
{
    long value;
};
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct sType;
struct sClass;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};
struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};
struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
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
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
};
struct sInfo;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};
struct sNodeBase
{
    int sline;
    char* sname;
};
struct tuple1$1sTypeph
{
    struct sType* v1;
};
struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};
struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
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
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    struct tuple1$1sTypeph* mNoExceptionType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    _Bool mNoNumberArray;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
};
struct sVar;
struct sRightValueObject;
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
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
struct sVarTable;
struct sBlock;
struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
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
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
};
struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};
struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceHead3;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
    struct buffer* mHeader;
};
struct sVarTable;
struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sVarTable
{
    struct map$2charphsVarph* mVars;
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
struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};
struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
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
struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1sVarph
{
    struct sVar* item;
    struct list_item$1sVarph* prev;
    struct list_item$1sVarph* next;
};
struct list$1sVarph
{
    struct list_item$1sVarph* head;
    struct list_item$1sVarph* tail;
    int len;
    struct list_item$1sVarph* it;
};
struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    struct sFun* come_fun;
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
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
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
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
    struct map$2charphcharph* module_params;
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
    struct list$1sVarph* match_it_var;
    struct list$1int* sline_stack;
    int sline_top;
    _Bool new_;
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
struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
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
extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;
struct sNothingNode
{
    int sline;
    char* sname;
};
struct sNewNode
{
    int sline;
    char* sname;
    struct sType* type;
    struct list$1tuple2$2charphsNodephph* initializer;
};
struct sImplementsNode
{
    int sline;
    char* sname;
    struct sNode* obj_exp;
    struct sType* inf_type;
};
struct sTrueNode
{
    int sline;
    char* sname;
};
struct sFalseNode
{
    int sline;
    char* sname;
};
struct sSizeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sSizeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sTypeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sTypeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sDynamicTypeOfNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignOfNode2
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignAsNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignAsExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sForceDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDelegateNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sShareNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sBorrowNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sCloneNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDupeNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDummyHeapNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCIncNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCDecNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCDecNoFreeNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sIsHeap
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sIsPointer
{
    int sline;
    char* sname;
    struct sType* type;
};

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
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
unsigned long unsigned  int fread(void* anonymous_var_nameX23, unsigned long unsigned  int anonymous_var_nameX24, unsigned long unsigned  int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);
unsigned long unsigned  int fwrite(const void* anonymous_var_nameX27, unsigned long unsigned  int anonymous_var_nameX28, unsigned long unsigned  int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);
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
int snprintf(char* anonymous_var_nameX51, unsigned long unsigned  int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);
int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);
int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);
int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);
int vsnprintf(char* anonymous_var_nameX62, unsigned long unsigned  int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);
int scanf(const char* anonymous_var_nameX66, ...);
int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);
int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);
int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);
int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);
int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);
void perror(const char* anonymous_var_nameX79);
int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long unsigned  int anonymous_var_nameX83);
void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);
char* tmpnam(char* anonymous_var_nameX86);
struct _IO_FILE* tmpfile();
struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long unsigned  int anonymous_var_nameX88, const char* anonymous_var_nameX89);
struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long unsigned  int* anonymous_var_nameX91);
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
long getdelim(char** anonymous_var_nameX114, unsigned long unsigned  int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);
long getline(char** anonymous_var_nameX118, unsigned long unsigned  int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);
int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);
char* ctermid(char* anonymous_var_nameX125);
char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);
char* cuserid(char* anonymous_var_nameX128);
void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);
void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long unsigned  int anonymous_var_nameX132);
int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);
int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);
int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);
unsigned long unsigned  int fread_unlocked(void* anonymous_var_nameX137, unsigned long unsigned  int anonymous_var_nameX138, unsigned long unsigned  int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);
unsigned long unsigned  int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long unsigned  int anonymous_var_nameX142, unsigned long unsigned  int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);
void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);
int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);
int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);
int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);
int getw(struct _IO_FILE* anonymous_var_nameX149);
int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);
char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long unsigned  int* anonymous_var_nameX153);
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
unsigned long unsigned  int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);
long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);
unsigned long unsigned  long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);
int rand();
void srand(unsigned int anonymous_var_nameX199);
void* malloc(unsigned long unsigned  int anonymous_var_nameX200);
void* calloc(unsigned long unsigned  int anonymous_var_nameX201, unsigned long unsigned  int anonymous_var_nameX202);
void* realloc(void* anonymous_var_nameX203, unsigned long unsigned  int anonymous_var_nameX204);
void free(void* anonymous_var_nameX205);
void* aligned_alloc(unsigned long unsigned  int anonymous_var_nameX206, unsigned long unsigned  int anonymous_var_nameX207);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX208);
void _Exit(int anonymous_var_nameX209);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX210);
char* getenv(const char* anonymous_var_nameX211);
int system(const char* anonymous_var_nameX212);
void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long unsigned  int anonymous_var_nameX215, unsigned long unsigned  int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX219, unsigned long unsigned  int anonymous_var_nameX220, unsigned long unsigned  int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX224);
long labs(long anonymous_var_nameX225);
long long llabs(long  long anonymous_var_nameX226);
struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);
struct anonymous_typeX3 lldiv(long  long anonymous_var_nameX231, long  long anonymous_var_nameX232);
int mblen(const char* anonymous_var_nameX233, unsigned long unsigned  int anonymous_var_nameX234);
int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long unsigned  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);
unsigned long unsigned  int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long unsigned  int anonymous_var_nameX242);
unsigned long unsigned  int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long unsigned  int anonymous_var_nameX245);
unsigned long unsigned  int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX246, unsigned long unsigned  int anonymous_var_nameX247, unsigned long unsigned  int anonymous_var_nameX248);
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
char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long unsigned  int anonymous_var_nameX266);
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
void* alloca(unsigned long unsigned  int anonymous_var_nameX282);
char* mktemp(char* anonymous_var_nameX283);
int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);
int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);
void* valloc(unsigned long unsigned  int anonymous_var_nameX289);
void* memalign(unsigned long unsigned  int anonymous_var_nameX290, unsigned long unsigned  int anonymous_var_nameX291);
int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);
int clearenv();
void* reallocarray(void* anonymous_var_nameX294, unsigned long unsigned  int anonymous_var_nameX295, unsigned long unsigned  int anonymous_var_nameX296);
void qsort_r(void* anonymous_var_nameX297, unsigned long unsigned  int anonymous_var_nameX298, unsigned long unsigned  int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);
int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long unsigned  int anonymous_var_nameX306);
char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);
char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);
char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);
char* secure_getenv(const char* anonymous_var_nameX318);
float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);
double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);
long  double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);
void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long unsigned  int anonymous_var_nameX330);
void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long unsigned  int anonymous_var_nameX333);
void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long unsigned  int anonymous_var_nameX336);
int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long unsigned  int anonymous_var_nameX339);
void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long unsigned  int anonymous_var_nameX342);
char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);
char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long unsigned  int anonymous_var_nameX347);
char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);
char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long unsigned  int anonymous_var_nameX352);
int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);
int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long unsigned  int anonymous_var_nameX357);
int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);
unsigned long unsigned  int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long unsigned  int anonymous_var_nameX362);
char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);
char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);
unsigned long unsigned  int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);
unsigned long unsigned  int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);
char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);
char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);
char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
unsigned long unsigned  int strlen(const char* anonymous_var_nameX377);
char* strerror(int anonymous_var_nameX378);
int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long unsigned  int anonymous_var_nameX381);
void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long unsigned  int anonymous_var_nameX384);
void bzero(void* anonymous_var_nameX385, unsigned long unsigned  int anonymous_var_nameX386);
char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);
char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);
int ffs(int anonymous_var_nameX391);
int ffsl(long anonymous_var_nameX392);
int ffsll(long  long anonymous_var_nameX393);
int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);
int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long unsigned  int anonymous_var_nameX398);
int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);
int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long unsigned  int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);
char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);
int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long unsigned  int anonymous_var_nameX411);
char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);
char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long unsigned  int anonymous_var_nameX416);
unsigned long unsigned  int strnlen(const char* anonymous_var_nameX417, unsigned long unsigned  int anonymous_var_nameX418);
char* strdup(const char* anonymous_var_nameX419);
char* strndup(const char* anonymous_var_nameX420, unsigned long unsigned  int anonymous_var_nameX421);
char* strsignal(int anonymous_var_nameX422);
char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);
int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);
unsigned long unsigned  int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long unsigned  int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);
void* memmem(const void* anonymous_var_nameX432, unsigned long unsigned  int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long unsigned  int anonymous_var_nameX435);
void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long unsigned  int anonymous_var_nameX439);
char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);
unsigned long unsigned  int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long unsigned  int anonymous_var_nameX444);
unsigned long unsigned  int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long unsigned  int anonymous_var_nameX447);
void explicit_bzero(void* anonymous_var_nameX448, unsigned long unsigned  int anonymous_var_nameX449);
int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);
char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long unsigned  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long unsigned  int anonymous_var_nameX461);
char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct lconv* localeconv();
struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);
void freelocale(struct __locale_struct* anonymous_var_nameX465);
struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);
struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);
int* __errno_location();
void __assert_fail(const char* anonymous_var_nameX470, const char* anonymous_var_nameX471, int anonymous_var_nameX472, const char* anonymous_var_nameX473);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void stackframe();
void come_save_stackframe(char* sname, int sline);
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_catch(int self, void* parent, void (*block)(void*));
int int_value(int self, void* parent, void (*block)(void*));
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void* come_calloc(unsigned long unsigned  int count, unsigned long unsigned  int size, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_dynamic_typeof(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
void buffer_force_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long unsigned  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool int_equals(int self, int right);
_Bool short_equals(short short self, short short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, unsigned long unsigned  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long unsigned  int size_t_clone(long self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswascii(unsigned int c);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xisalpha(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_reverse(char* str);
char* string_reverse(char* str);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* string_split_char(char* self, char c);
struct list$1charph* charp_split_char(char* self, char c);
char* xbasename(char* path);
char* xextname(char* path);
char* xnoextname(char* path);
char* bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long unsigned  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short short left, short short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int float_compare(float left, float right);
int double_compare(float left, float right);
int size_t_compare(long left, long right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
int FILE_write(struct _IO_FILE* f, char* str);
char* FILE_read(struct _IO_FILE* f);
int FILE_fclose(struct _IO_FILE* f);
int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
char* string_read(char* file_name);
char* charp_puts(char* self);
char* string_puts(char* self);
int int_printf(int self, char* msg);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
char* charp_print(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
struct integer* integer_initialize(struct integer* self, long value);
struct integer* char_to_integer(char self);
struct integer* short_to_integer(short short self);
struct integer* int_to_integer(int self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
char* integer_to_string(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
int integer_compare(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
int integer_operator_add(struct integer* left, struct integer* right);
int integer_operator_sub(struct integer* left, struct integer* right);
int integer_operator_mult(struct integer* left, struct integer* right);
int integer_operator_div(struct integer* left, struct integer* right);
int integer_operator_mod(struct integer* left, struct integer* right);
int integer_operator_lshift(struct integer* left, struct integer* right);
int integer_operator_rshift(struct integer* left, struct integer* right);
int integer_operator_gteq(struct integer* left, struct integer* right);
int integer_operator_lteq(struct integer* left, struct integer* right);
int integer_operator_lt(struct integer* left, struct integer* right);
int integer_operator_gt(struct integer* left, struct integer* right);
int integer_operator_and(struct integer* left, struct integer* right);
int integer_operator_xor(struct integer* left, struct integer* right);
int integer_operator_or(struct integer* left, struct integer* right);
int assert_v2(int exp);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);
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
void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head3(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head2(struct sInfo* info, const char* msg, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_come_last_code3(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
void free_exception_right_value_objects(struct sInfo* info, _Bool comma);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
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
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
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
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool throw_or_rescue, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);
char* sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);
struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info);
char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self);
_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info);
static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);
char* sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);
struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sForceDeleteNode_kind(struct sForceDeleteNode* self);
_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info);
struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);
char* sDelegateNode_kind(struct sDelegateNode* self);
_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);
struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);
char* sShareNode_kind(struct sShareNode* self);
_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);
char* sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);
char* sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);
char* sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);
char* sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);
char* sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);
char* sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);
char* sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sNewNode_finalize(struct sNewNode* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static void sTrueNode_finalize(struct sTrueNode* self);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static void sFalseNode_finalize(struct sFalseNode* self);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static void sDeleteNode_finalize(struct sDeleteNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static void sForceDeleteNode_finalize(struct sForceDeleteNode* self);
static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self);
static void sBorrowNode_finalize(struct sBorrowNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static void sDelegateNode_finalize(struct sDelegateNode* self);
static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self);
static void sShareNode_finalize(struct sShareNode* self);
static struct sShareNode* sShareNode_clone(struct sShareNode* self);
static void sCloneNode_finalize(struct sCloneNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static void sDupeNode_finalize(struct sDupeNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static void sGCIncNode_finalize(struct sGCIncNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static void sGCDecNode_finalize(struct sGCDecNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static void sIsHeap_finalize(struct sIsHeap* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static void sIsPointer_finalize(struct sIsPointer* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
// uniq global variable
// source head3

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2342, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2349, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2358, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2365, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2372, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2379, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2386, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2686, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2691, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2696, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2701, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2706, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2739, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2741, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2746, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2748, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2753, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2755, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2760, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2762, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2767, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2769, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2774, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2776, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2781, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2783, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2788, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2793, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2798, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2803, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2808, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2813, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2818, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2823, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2828, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2833, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2838, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2843, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2848, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2853, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long unsigned  int charpa_length(char* self, unsigned long unsigned  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long unsigned  int len, char* str){
_Bool result_64;
int i_65;
    result_64=(_Bool)0;
    for(    i_65=0;    i_65<len;    i_65++    ){
        if(        strncmp(self[i_65],str,strlen(self[i_65]))==0) {
            result_64=(_Bool)1;
            break;
        }
    }
    return result_64;
}
static inline unsigned long unsigned  int shortpa_length(short short* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int intpa_length(int* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int longpa_length(long* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int floatpa_length(float* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int doublepa_length(double* self, unsigned long unsigned  int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    __right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    __right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    __right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

// body function









static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj2;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj2=self->memory;
            come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result11__;
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result11__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj4;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj4=self->memory;
            come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1int* __result13__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj6;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj6=self->memory;
            come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1long* __result15__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj8;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj8=self->memory;
            come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1charp* __result18__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result18__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj10;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj10=self->memory;
            come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1float* __result23__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj12;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj12=self->memory;
            come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1double* __result25__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_15;
struct list$1char* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1char_push_back(self,values[i_15]);
    }
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_16;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_17;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_18;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 223, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 233, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 243, "list_item$1char"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result27__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result27__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_19;
struct list_item$1char* prev_it_20;
    it_19=self->head;
    while(it_19!=((void*)0)) {
        prev_it_20=it_19;
        it_19=it_19->next;
        /*i*/come_call_finalizer3(prev_it_20,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_21;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_21=0;    i_21<num_value;    i_21++    ){
        list$1charp_push_back(self,values[i_21]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_22;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_23;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_24;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 223, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 233, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 243, "list_item$1charp"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_25;
struct list_item$1charp* prev_it_26;
    it_25=self->head;
    while(it_25!=((void*)0)) {
        prev_it_26=it_25;
        it_25=it_25->next;
        /*i*/come_call_finalizer3(prev_it_26,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1short_push_back(self,values[i_27]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 223, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 233, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 243, "list_item$1short"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_31;
struct list_item$1short* prev_it_32;
    it_31=self->head;
    while(it_31!=((void*)0)) {
        prev_it_32=it_31;
        it_31=it_31->next;
        /*i*/come_call_finalizer3(prev_it_32,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_33;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_33=0;    i_33<num_value;    i_33++    ){
        list$1int_push_back(self,values[i_33]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_34;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_35;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_36;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 223, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 233, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 243, "list_item$1int"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_37;
struct list_item$1int* prev_it_38;
    it_37=self->head;
    while(it_37!=((void*)0)) {
        prev_it_38=it_37;
        it_37=it_37->next;
        /*i*/come_call_finalizer3(prev_it_38,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1long_push_back(self,values[i_39]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_40;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_41;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_42;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 223, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 233, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 243, "list_item$1long"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_43;
struct list_item$1long* prev_it_44;
    it_43=self->head;
    while(it_43!=((void*)0)) {
        prev_it_44=it_43;
        it_43=it_43->next;
        /*i*/come_call_finalizer3(prev_it_44,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_45;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_45=0;    i_45<num_value;    i_45++    ){
        list$1float_push_back(self,values[i_45]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_46;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_47;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_48;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 223, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 233, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 243, "list_item$1float"))));
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_49;
struct list_item$1float* prev_it_50;
    it_49=self->head;
    while(it_49!=((void*)0)) {
        prev_it_50=it_49;
        it_49=it_49->next;
        /*i*/come_call_finalizer3(prev_it_50,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_51;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_51=0;    i_51<num_value;    i_51++    ){
        list$1double_push_back(self,values[i_51]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_52;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_53;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_54;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 223, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 233, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 243, "list_item$1double"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        litem_54->item=item;
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_55;
struct list_item$1double* prev_it_56;
    it_55=self->head;
    while(it_55!=((void*)0)) {
        prev_it_56=it_55;
        it_55=it_55->next;
        /*i*/come_call_finalizer3(prev_it_56,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value93 = (void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1005, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_57;
    if(    0) {
        for(        i_57=0;        i_57<self->len;        i_57++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1005, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_58;
    if(    0) {
        for(        i_58=0;        i_58<self->len;        i_58++        ){
            self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "./comelang.h", 1005, "short")));
    memcpy(self->items,values,sizeof(short short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_59;
    if(    0) {
        for(        i_59=0;        i_59<self->len;        i_59++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1005, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_60;
    if(    0) {
        for(        i_60=0;        i_60<self->len;        i_60++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1005, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_61;
    if(    0) {
        for(        i_61=0;        i_61<self->len;        i_61++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1005, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_62;
    if(    0) {
        for(        i_62=0;        i_62<self->len;        i_62++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1005, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_63;
    if(    0) {
        for(        i_63=0;        i_63<self->len;        i_63++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}











struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
struct sNothingNode* __result65__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value117=__builtin_string("sNothingNode")));
    __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj15;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj15=self->sname;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
void* __right_value154 = (void*)0;
struct sType* __dec_obj61;
struct list$1tuple2$2charphsNodephph* __dec_obj62;
struct sNewNode* __result85__;
    ((struct sNodeBase*)(__right_value118=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value118,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj61=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj62=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer);
    come_call_finalizer3(__dec_obj62,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__=(void*)0;
void* __right_value155 = (void*)0;
char* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value155=__builtin_string("sNewNode")));
    __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_100;
struct list$1tuple2$2charphsNodephph* initializer_101;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct CVALUE* come_value_102;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct buffer* num_string_103;
struct list$1sNodeph* o2_saved_104;
struct sNode* it_107;
_Bool __result93__;
void* __right_value160 = (void*)0;
struct CVALUE* cvalue_110;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct sType* type2_111;
void* __right_value163 = (void*)0;
char* type_name_114;
void* __right_value164 = (void*)0;
char* type_name2_115;
void* __right_value165 = (void*)0;
char* var_name_117;
void* __right_value166 = (void*)0;
struct sType* type3_118;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct buffer* buf_119;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
char* obj_120;
struct sClass* klass_121;
int i_122;
struct list$1tuple2$2charphsNodephph* o2_saved_123;
struct tuple2$2charphsNodeph* it_126;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* name_129;
struct sNode* exp_130;
_Bool __result101__;
void* __right_value172 = (void*)0;
struct CVALUE* come_value2_131;
struct sType* left_type_132;
struct list$1tuple2$2charphsTypephph* o2_saved_133;
struct tuple2$2charphsTypeph* it2_136;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_139;
struct sType* field_type_140;
void* __right_value173 = (void*)0;
struct sType* __dec_obj72;
_Bool __result108__;
struct sType* right_type_143;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct sType* __dec_obj76;
void* __right_value176 = (void*)0;
char* c_value_144;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
char* __dec_obj77;
void* __right_value180 = (void*)0;
struct sType* __dec_obj78;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
char* __dec_obj82;
void* __right_value186 = (void*)0;
struct sType* __dec_obj83;
_Bool __result110__;
    type_100=self->type;
    initializer_101=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    come_value_102=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 41, "CVALUE"))));
    num_string_103=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 43, "buffer"))));
    buffer_append_str(num_string_103,"1");
    for(    o2_saved_104=(struct list$1sNodeph*)come_increment_ref_count((type_100->mArrayNum)),it_107=list$1sNodeph_begin((o2_saved_104));    !list$1sNodeph_end((o2_saved_104));    it_107=list$1sNodeph_next((o2_saved_104))    ){
        if(        !node_compile(it_107,info)) {
            __result93__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_104,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(initializer_101,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_103,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result93__;
        }
        cvalue_110=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_str(num_string_103,((char*)(__right_value161=xsprintf("*(%s)",cvalue_110->c_value))));
        __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(cvalue_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_104,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    type2_111=(struct sType*)come_increment_ref_count(solve_generics(type_100,info->generics_type,info));
    list$1sNodeph_reset(type2_111->mArrayNum);
    type_name_114=(char*)come_increment_ref_count(make_type_name_string(type2_111,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_115=(char*)come_increment_ref_count(make_come_type_name_string(type2_111,info));
    if(    initializer_101) {
        static int var_num_116=1;
        var_num_116++;
        var_name_117=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_116));
        type3_118=(struct sType*)come_increment_ref_count(sType_clone(type2_111));
        type3_118->mPointerNum++;
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value167=make_define_var(type3_118,var_name_117,(_Bool)0,info))));
        __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buf_119=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 82, "buffer"))));
        buffer_append_str(buf_119,"(");
        obj_120=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_117,type_name_114,type_name_114,((char*)(__right_value170=buffer_to_string(num_string_103))),info->sname,info->sline,type_name2_115));
        __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_119,obj_120);
        buffer_append_str(buf_119,",");
        klass_121=type3_118->mClass;
        i_122=0;
        for(        o2_saved_123=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_101)),it_126=list$1tuple2$2charphsNodephph_begin((o2_saved_123));        !list$1tuple2$2charphsNodephph_end((o2_saved_123));        it_126=list$1tuple2$2charphsNodephph_next((o2_saved_123))        ){
            multiple_assign_var1=it_126;
            name_129=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            exp_130=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            !node_compile(exp_130,info)) {
                __result101__ = (_Bool)0;
                name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_130) { exp_130 = come_decrement_ref_count2(exp_130, ((struct sNode*)exp_130)->finalize, ((struct sNode*)exp_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(o2_saved_123,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_117 = come_decrement_ref_count2(var_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type3_118,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_119,buffer_finalize, 0, 0, 0, 0, (void*)0);
                obj_120 = come_decrement_ref_count2(obj_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(initializer_101,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(num_string_103,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_111,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_114 = come_decrement_ref_count2(type_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_115 = come_decrement_ref_count2(type_name2_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result101__;
            }
            come_value2_131=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            left_type_132=((void*)0);
            for(            o2_saved_133=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_121->mFields)),it2_136=list$1tuple2$2charphsTypephph_begin((o2_saved_133));            !list$1tuple2$2charphsTypephph_end((o2_saved_133));            it2_136=list$1tuple2$2charphsTypephph_next((o2_saved_133))            ){
                multiple_assign_var2=it2_136;
                field_name_139=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                field_type_140=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
                if(                string_operator_equals(name_129,field_name_139)) {
                    __dec_obj72=left_type_132;
                    left_type_132=(struct sType*)come_increment_ref_count(sType_clone(field_type_140));
                    come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name_139 = come_decrement_ref_count2(field_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(field_type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name_139 = come_decrement_ref_count2(field_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_133,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_132==((void*)0)) {
                err_msg(info,"field %s is not defined",name_129);
                __result108__ = (_Bool)0;
                name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_130) { exp_130 = come_decrement_ref_count2(exp_130, ((struct sNode*)exp_130)->finalize, ((struct sNode*)exp_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value2_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_type_132,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(o2_saved_123,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_117 = come_decrement_ref_count2(var_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type3_118,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_119,buffer_finalize, 0, 0, 0, 0, (void*)0);
                obj_120 = come_decrement_ref_count2(obj_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(initializer_101,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(num_string_103,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_111,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_114 = come_decrement_ref_count2(type_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_115 = come_decrement_ref_count2(type_name2_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result108__;
            }
            right_type_143=(struct sType*)come_increment_ref_count(come_value2_131->type);
            check_assign_type(((char*)(__right_value175=xsprintf("\%s is assining to",((char*)(__right_value174=string_to_string(name_129)))))),left_type_132,right_type_143,come_value2_131,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj76=right_type_143;
            right_type_143=(struct sType*)come_increment_ref_count(come_value2_131->type);
            come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_132->mHeap&&right_type_143->mHeap&&left_type_132->mPointerNum>0&&right_type_143->mPointerNum>0) {
                c_value_144=(char*)come_increment_ref_count(increment_ref_count_object(left_type_132,come_value2_131->c_value,info));
                buffer_append_str(buf_119,((char*)(__right_value177=xsprintf("%s->%s = %s",var_name_117,name_129,c_value_144))));
                __right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                buffer_append_str(buf_119,((char*)(__right_value178=xsprintf("%s->%s = %s",var_name_117,name_129,come_value2_131->c_value))));
                __right_value178 = come_decrement_ref_count2(__right_value178, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            buffer_append_str(buf_119,",");
            i_122++;
            name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_130) { exp_130 = come_decrement_ref_count2(exp_130, ((struct sNode*)exp_130)->finalize, ((struct sNode*)exp_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value2_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type_132,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_type_143,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_123,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_119,var_name_117);
        buffer_append_str(buf_119,")");
        __dec_obj77=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_119));
        /*G*/ __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        type2_111->mHeap=(_Bool)1;
        type2_111->mPointerNum++;
        if(        type2_111->mNoSolvedGenericsType->v1) {
            type2_111->mNoSolvedGenericsType->v1->mPointerNum++;
            type2_111->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
        }
        __dec_obj78=come_value_102->type;
        come_value_102->type=(struct sType*)come_increment_ref_count(sType_clone(type2_111));
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_102->var=((void*)0);
        append_object_to_right_values2(come_value_102,(struct sType*)come_increment_ref_count(type2_111),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_102->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
        var_name_117 = come_decrement_ref_count2(var_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type3_118,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_119,buffer_finalize, 0, 0, 0, 0, (void*)0);
        obj_120 = come_decrement_ref_count2(obj_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj82=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_114,type_name_114,((char*)(__right_value184=buffer_to_string(num_string_103))),info->sname,info->sline,type_name2_115));
        /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        type2_111->mHeap=(_Bool)1;
        type2_111->mPointerNum++;
        if(        type2_111->mNoSolvedGenericsType->v1) {
            type2_111->mNoSolvedGenericsType->v1->mPointerNum++;
            type2_111->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
        }
        __dec_obj83=come_value_102->type;
        come_value_102->type=(struct sType*)come_increment_ref_count(sType_clone(type2_111));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_102->var=((void*)0);
        append_object_to_right_values2(come_value_102,(struct sType*)come_increment_ref_count(type2_111),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_102->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
    }
    __result110__ = (_Bool)1;
    /*i*/come_call_finalizer3(initializer_101,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_103,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_111,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_114 = come_decrement_ref_count2(type_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_115 = come_decrement_ref_count2(type_name2_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result110__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result67__;
void* __right_value119 = (void*)0;
struct sType* result_66;
void* __right_value122 = (void*)0;
struct tuple1$1sTypeph* __dec_obj39;
void* __right_value123 = (void*)0;
struct tuple1$1sTypeph* __dec_obj40;
void* __right_value124 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value125 = (void*)0;
char* __dec_obj42;
void* __right_value132 = (void*)0;
struct list$1sTypeph* __dec_obj46;
void* __right_value140 = (void*)0;
struct list$1sNodeph* __dec_obj50;
void* __right_value141 = (void*)0;
struct list$1sTypeph* __dec_obj51;
void* __right_value148 = (void*)0;
struct list$1charph* __dec_obj55;
void* __right_value149 = (void*)0;
struct tuple1$1sTypeph* __dec_obj56;
void* __right_value150 = (void*)0;
struct sNode* __dec_obj57;
void* __right_value151 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value152 = (void*)0;
char* __dec_obj59;
void* __right_value153 = (void*)0;
char* __dec_obj60;
struct sType* __result84__;
    if(    self==(void*)0) {
        __result67__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result67__;
    }
    result_66=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_66->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj39=result_66->mNoSolvedGenericsType;
        result_66->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj40=result_66->mOriginalLoadVarType;
        result_66->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj40,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj41=result_66->mNoExceptionType;
        result_66->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj42=result_66->mGenericsName;
        result_66->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj46=result_66->mGenericsTypes;
        result_66->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj50=result_66->mArrayNum;
        result_66->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_66->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj51=result_66->mParamTypes;
        result_66->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj55=result_66->mParamNames;
        result_66->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj55,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj56=result_66->mResultType;
        result_66->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_66->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj57=result_66->mAlignas;
        result_66->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_66->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_66->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_66->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_66->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_66->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_66->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_66->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_66->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_66->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_66->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_66->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_66->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_66->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_66->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_66->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_66->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_66->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_66->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_66->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_66->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_66->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_66->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_66->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_66->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_66->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_66->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_66->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj58=result_66->mSizeNum;
        result_66->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_66->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_66->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_66->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj59=result_66->mOriginalTypeName;
        result_66->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_66->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_66->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_66->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_66->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_66->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_66->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_66->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_66->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_66->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj60=result_66->mAsmName;
        result_66->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_66->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_66->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_66->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_66->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_66->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_66->mOriginIsArray=self->mOriginIsArray;
    }
    __result84__ = gComeFunResultObject = __result_obj__ = result_66;
    /*i*/come_call_finalizer3(result_66,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result68__;
void* __right_value120 = (void*)0;
struct tuple1$1sTypeph* result_67;
void* __right_value121 = (void*)0;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result69__;
    if(    self==(void*)0) {
        __result68__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_67=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj17=result_67->v1;
        result_67->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result69__ = gComeFunResultObject = __result_obj__ = result_67;
    /*i*/come_call_finalizer3(result_67,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj18;
struct tuple1$1sTypeph* __dec_obj20;
struct tuple1$1sTypeph* __dec_obj22;
char* __dec_obj24;
struct list$1sTypeph* __dec_obj25;
struct list$1sNodeph* __dec_obj27;
struct list$1sTypeph* __dec_obj29;
struct list$1charph* __dec_obj30;
struct tuple1$1sTypeph* __dec_obj32;
struct sNode* __dec_obj34;
struct sNode* __dec_obj35;
char* __dec_obj36;
char* __dec_obj37;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj18=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj18,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj20=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj22=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj24=self->mGenericsName;
            /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj25=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj27=self->mArrayNum;
            come_call_finalizer3(__dec_obj27,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj29=self->mParamTypes;
            come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj30=self->mParamNames;
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj32=self->mResultType;
            come_call_finalizer3(__dec_obj32,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj34=self->mAlignas;
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj35=self->mSizeNum;
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj36=self->mOriginalTypeName;
            /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj37=self->mAsmName;
            /*G*/ __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_68;
struct list_item$1sTypeph* prev_it_69;
    it_68=self->head;
    while(it_68!=((void*)0)) {
        prev_it_69=it_68;
        it_68=it_68->next;
        /*i*/come_call_finalizer3(prev_it_69,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj26;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj26=self->item;
            come_call_finalizer3(__dec_obj26,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_70;
struct list_item$1sTypeph* prev_it_71;
    it_70=self->head;
    while(it_70!=((void*)0)) {
        prev_it_71=it_70;
        it_70=it_70->next;
        /*i*/come_call_finalizer3(prev_it_71,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_72;
struct list_item$1sNodeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_74;
struct list_item$1sNodeph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_76;
struct list_item$1charph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_78;
struct list_item$1charph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*i*/come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj33;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj33=self->v1;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj38;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj38=self->v1;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result70__;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1sTypeph* result_80;
struct list_item$1sTypeph* it_81;
void* __right_value131 = (void*)0;
struct list$1sTypeph* __result73__;
    if(    self==((void*)0)) {
        __result70__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_80=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 139, "list$1sTypeph"))));
    it_81=self->head;
    while(it_81!=((void*)0)) {
        list$1sTypeph_add(result_80,(struct sType*)come_increment_ref_count(sType_clone(it_81->item)));
        it_81=it_81->next;
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_80;
    /*i*/come_call_finalizer3(result_80,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result71__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj43;
void* __right_value129 = (void*)0;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj44;
void* __right_value130 = (void*)0;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj45;
struct list$1sTypeph* __result72__;
    if(    self->len==0) {
        litem_82=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 153, "list_item$1sTypeph"))));
        litem_82->prev=((void*)0);
        litem_82->next=((void*)0);
        __dec_obj43=litem_82->item;
        litem_82->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_82;
        self->head=litem_82;
    }
    else if(    self->len==1) {
        litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value129=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 163, "list_item$1sTypeph"))));
        litem_83->prev=self->head;
        litem_83->next=((void*)0);
        __dec_obj44=litem_83->item;
        litem_83->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_83;
        self->head->next=litem_83;
    }
    else {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 173, "list_item$1sTypeph"))));
        litem_84->prev=self->tail;
        litem_84->next=((void*)0);
        __dec_obj45=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_84;
        self->tail=litem_84;
    }
    self->len++;
    __result72__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result74__;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1sNodeph* result_85;
struct list_item$1sNodeph* it_86;
void* __right_value139 = (void*)0;
struct list$1sNodeph* __result79__;
    if(    self==((void*)0)) {
        __result74__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    result_85=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 139, "list$1sNodeph"))));
    it_86=self->head;
    while(it_86!=((void*)0)) {
        list$1sNodeph_add(result_85,(struct sNode*)come_increment_ref_count(sNode_clone(it_86->item)));
        it_86=it_86->next;
    }
    __result79__ = gComeFunResultObject = __result_obj__ = result_85;
    /*i*/come_call_finalizer3(result_85,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result75__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
struct list_item$1sNodeph* litem_87;
struct sNode* __dec_obj47;
void* __right_value136 = (void*)0;
struct list_item$1sNodeph* litem_88;
struct sNode* __dec_obj48;
void* __right_value137 = (void*)0;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj49;
struct list$1sNodeph* __result76__;
    if(    self->len==0) {
        litem_87=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value135=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 153, "list_item$1sNodeph"))));
        litem_87->prev=((void*)0);
        litem_87->next=((void*)0);
        __dec_obj47=litem_87->item;
        litem_87->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_87;
        self->head=litem_87;
    }
    else if(    self->len==1) {
        litem_88=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value136=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 163, "list_item$1sNodeph"))));
        litem_88->prev=self->head;
        litem_88->next=((void*)0);
        __dec_obj48=litem_88->item;
        litem_88->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_88;
        self->head->next=litem_88;
    }
    else {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value137=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 173, "list_item$1sNodeph"))));
        litem_89->prev=self->tail;
        litem_89->next=((void*)0);
        __dec_obj49=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_89;
        self->tail=litem_89;
    }
    self->len++;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result77__;
void* __right_value138 = (void*)0;
struct sNode* result_90;
struct sNode* __result78__;
    if(    self==(void*)0) {
        __result77__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    result_90=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_90->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_90->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_90->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_90->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_90->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_90->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_90->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_90->kind=self->kind;
    }
    __result78__ = gComeFunResultObject = __result_obj__ = result_90;
    if(result_90) { result_90 = come_decrement_ref_count2(result_90, ((struct sNode*)result_90)->finalize, ((struct sNode*)result_90)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result80__;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct list$1charph* result_91;
struct list_item$1charph* it_92;
void* __right_value147 = (void*)0;
struct list$1charph* __result83__;
    if(    self==((void*)0)) {
        __result80__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    result_91=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 139, "list$1charph"))));
    it_92=self->head;
    while(it_92!=((void*)0)) {
        list$1charph_add(result_91,(char*)come_increment_ref_count(string_clone(it_92->item)));
        it_92=it_92->next;
    }
    __result83__ = gComeFunResultObject = __result_obj__ = result_91;
    /*i*/come_call_finalizer3(result_91,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result81__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
struct list_item$1charph* litem_93;
char* __dec_obj52;
void* __right_value145 = (void*)0;
struct list_item$1charph* litem_94;
char* __dec_obj53;
void* __right_value146 = (void*)0;
struct list_item$1charph* litem_95;
char* __dec_obj54;
struct list$1charph* __result82__;
    if(    self->len==0) {
        litem_93=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 153, "list_item$1charph"))));
        litem_93->prev=((void*)0);
        litem_93->next=((void*)0);
        __dec_obj52=litem_93->item;
        litem_93->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_93;
        self->head=litem_93;
    }
    else if(    self->len==1) {
        litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 163, "list_item$1charph"))));
        litem_94->prev=self->head;
        litem_94->next=((void*)0);
        __dec_obj53=litem_94->item;
        litem_94->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_94;
        self->head->next=litem_94;
    }
    else {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 173, "list_item$1charph"))));
        litem_95->prev=self->tail;
        litem_95->next=((void*)0);
        __dec_obj54=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_95;
        self->tail=litem_95;
    }
    self->len++;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_96;
struct list_item$1tuple2$2charphsNodephph* prev_it_97;
    it_96=self->head;
    while(it_96!=((void*)0)) {
        prev_it_97=it_96;
        it_96=it_96->next;
        /*i*/come_call_finalizer3(prev_it_97,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj63;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj63=self->item;
            come_call_finalizer3(__dec_obj63,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_98;
struct list_item$1tuple2$2charphsNodephph* prev_it_99;
    it_98=self->head;
    while(it_98!=((void*)0)) {
        prev_it_99=it_98;
        it_98=it_98->next;
        /*i*/come_call_finalizer3(prev_it_99,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_105;
struct sNode* __result87__;
struct sNode* __result88__;
struct sNode* result_106;
struct sNode* __result89__;
result_105 = (void*)0;
result_106 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_105,0,sizeof(struct sNode*));
        __result87__ = gComeFunResultObject = __result_obj__ = result_105;
        gComeFunResultObject = (void*)0;
        return __result87__;
    }
    self->it=self->head;
    if(    self->it) {
        __result88__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result88__;
    }
    memset(&result_106,0,sizeof(struct sNode*));
    __result89__ = gComeFunResultObject = __result_obj__ = result_106;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_108;
struct sNode* __result90__;
struct sNode* __result91__;
struct sNode* result_109;
struct sNode* __result92__;
result_108 = (void*)0;
result_109 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_108,0,sizeof(struct sNode*));
        __result90__ = gComeFunResultObject = __result_obj__ = result_108;
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result91__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    memset(&result_109,0,sizeof(struct sNode*));
    __result92__ = gComeFunResultObject = __result_obj__ = result_109;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj69;
struct sType* __dec_obj70;
char* __dec_obj71;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj69=self->c_value;
            /*G*/ __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj70=self->type;
            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj71=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_112;
struct list_item$1sNodeph* prev_it_113;
struct list$1sNodeph* __result94__;
    it_112=self->head;
    while(it_112!=((void*)0)) {
        prev_it_113=it_112;
        it_112=it_112->next;
        /*i*/come_call_finalizer3(prev_it_113,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_124;
struct tuple2$2charphsNodeph* __result95__;
struct tuple2$2charphsNodeph* __result96__;
struct tuple2$2charphsNodeph* result_125;
struct tuple2$2charphsNodeph* __result97__;
result_124 = (void*)0;
result_125 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_124,0,sizeof(struct tuple2$2charphsNodeph*));
        __result95__ = gComeFunResultObject = __result_obj__ = result_124;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    self->it=self->head;
    if(    self->it) {
        __result96__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    memset(&result_125,0,sizeof(struct tuple2$2charphsNodeph*));
    __result97__ = gComeFunResultObject = __result_obj__ = result_125;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_127;
struct tuple2$2charphsNodeph* __result98__;
struct tuple2$2charphsNodeph* __result99__;
struct tuple2$2charphsNodeph* result_128;
struct tuple2$2charphsNodeph* __result100__;
result_127 = (void*)0;
result_128 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_127,0,sizeof(struct tuple2$2charphsNodeph*));
        __result98__ = gComeFunResultObject = __result_obj__ = result_127;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result99__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    memset(&result_128,0,sizeof(struct tuple2$2charphsNodeph*));
    __result100__ = gComeFunResultObject = __result_obj__ = result_128;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_134;
struct tuple2$2charphsTypeph* __result102__;
struct tuple2$2charphsTypeph* __result103__;
struct tuple2$2charphsTypeph* result_135;
struct tuple2$2charphsTypeph* __result104__;
result_134 = (void*)0;
result_135 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_134,0,sizeof(struct tuple2$2charphsTypeph*));
        __result102__ = gComeFunResultObject = __result_obj__ = result_134;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    self->it=self->head;
    if(    self->it) {
        __result103__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    memset(&result_135,0,sizeof(struct tuple2$2charphsTypeph*));
    __result104__ = gComeFunResultObject = __result_obj__ = result_135;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_137;
struct tuple2$2charphsTypeph* __result105__;
struct tuple2$2charphsTypeph* __result106__;
struct tuple2$2charphsTypeph* result_138;
struct tuple2$2charphsTypeph* __result107__;
result_137 = (void*)0;
result_138 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_137,0,sizeof(struct tuple2$2charphsTypeph*));
        __result105__ = gComeFunResultObject = __result_obj__ = result_137;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result106__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    memset(&result_138,0,sizeof(struct tuple2$2charphsTypeph*));
    __result107__ = gComeFunResultObject = __result_obj__ = result_138;
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_141;
struct list_item$1tuple2$2charphsTypephph* prev_it_142;
    it_141=self->head;
    while(it_141!=((void*)0)) {
        prev_it_142=it_141;
        it_141=it_141->next;
        /*i*/come_call_finalizer3(prev_it_142,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj73;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj73=self->item;
            come_call_finalizer3(__dec_obj73,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj74;
struct sType* __dec_obj75;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj74=self->v1;
            /*G*/ __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj75=self->v2;
            come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value181 = (void*)0;
struct list_item$1CVALUEph* litem_145;
struct CVALUE* __dec_obj79;
void* __right_value182 = (void*)0;
struct list_item$1CVALUEph* litem_146;
struct CVALUE* __dec_obj80;
void* __right_value183 = (void*)0;
struct list_item$1CVALUEph* litem_147;
struct CVALUE* __dec_obj81;
struct list$1CVALUEph* __result109__;
    if(    self->len==0) {
        litem_145=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value181=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 223, "list_item$1CVALUEph"))));
        litem_145->prev=((void*)0);
        litem_145->next=((void*)0);
        __dec_obj79=litem_145->item;
        litem_145->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj79,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_145;
        self->head=litem_145;
    }
    else if(    self->len==1) {
        litem_146=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value182=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 233, "list_item$1CVALUEph"))));
        litem_146->prev=self->head;
        litem_146->next=((void*)0);
        __dec_obj80=litem_146->item;
        litem_146->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj80,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_146;
        self->head->next=litem_146;
    }
    else {
        litem_147=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value183=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 243, "list_item$1CVALUEph"))));
        litem_147->prev=self->tail;
        litem_147->next=((void*)0);
        __dec_obj81=litem_147->item;
        litem_147->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_147;
        self->tail=litem_147;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct sNode* __dec_obj84;
void* __right_value189 = (void*)0;
struct sType* __dec_obj85;
struct sImplementsNode* __result111__;
    ((struct sNodeBase*)(__right_value187=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value187,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj85=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
void* __right_value190 = (void*)0;
char* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value190=__builtin_string("sImplementsNode")));
    __right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value191 = (void*)0;
struct sNode* obj_exp_148;
void* __right_value192 = (void*)0;
struct sType* inf_type_149;
_Bool __result113__;
void* __right_value193 = (void*)0;
struct CVALUE* come_value_150;
void* __right_value194 = (void*)0;
struct sType* type_151;
struct sClass* klass_152;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct CVALUE* come_value2_153;
void* __right_value197 = (void*)0;
struct sType* type2_154;
void* __right_value198 = (void*)0;
char* type_name_155;
void* __right_value199 = (void*)0;
char* type_name2_156;
void* __right_value200 = (void*)0;
char* buf_158;
void* __right_value201 = (void*)0;
char* buf2_159;
void* __right_value202 = (void*)0;
struct sType* typeX_160;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
int i_161;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_165;
struct sType* field_type_166;
void* __right_value205 = (void*)0;
char* method_name_167;
struct sFun* fun_168;
struct sClass* klass2_171;
void* __right_value206 = (void*)0;
char* __dec_obj109;
void* __right_value207 = (void*)0;
char* __dec_obj110;
void* __right_value208 = (void*)0;
struct sType* type3_177;
void* __right_value209 = (void*)0;
struct sType* __dec_obj111;
_Bool __result124__;
    obj_exp_148=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
    inf_type_149=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
    if(    !node_compile(obj_exp_148,info)) {
        __result113__ = (_Bool)0;
        if(obj_exp_148) { obj_exp_148 = come_decrement_ref_count2(obj_exp_148, ((struct sNode*)obj_exp_148)->finalize, ((struct sNode*)obj_exp_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(inf_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result113__;
    }
    come_value_150=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_151=(struct sType*)come_increment_ref_count(sType_clone(come_value_150->type));
    type_151->mPointerNum--;
    type_151->mHeap=(_Bool)0;
    klass_152=inf_type_149->mClass;
    come_value2_153=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 218, "CVALUE"))));
    type2_154=(struct sType*)come_increment_ref_count(sType_clone(inf_type_149));
    type_name_155=(char*)come_increment_ref_count(make_type_name_string(inf_type_149,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_156=(char*)come_increment_ref_count(make_type_name_string(type_151,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_157=0;
    buf_158=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_155,++inf_num_157));
    add_come_code_at_function_head(info,buf_158);
    buf2_159=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_156,inf_num_157));
    add_come_code_at_function_head(info,buf2_159);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_157,type_name_155,type_name_155,info->sname,info->sline,type_name_155);
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_157,come_value_150->c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_157,inf_num_157);
    typeX_160=(struct sType*)come_increment_ref_count(sType_clone(type_151));
    typeX_160->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(__right_value203=create_finalizer_automatically(typeX_160,"finalize",info)));
    /*g*/come_call_finalizer3(__right_value203,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    ((struct tuple2$2sFunpcharph*)(__right_value204=create_cloner_automatically(typeX_160,"clone",info)));
    /*g*/come_call_finalizer3(__right_value204,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    i_161=1;    i_161<list$1tuple2$2charphsTypephph_length(klass_152->mFields);    i_161++    ){
        multiple_assign_var3=((struct tuple2$2charphsTypeph*)come_null_check(list$1tuple2$2charphsTypephphp_operator_load_element(klass_152->mFields,i_161), "21obj.c", 243, 0));
        name_165=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_166=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        method_name_167=(char*)come_increment_ref_count(create_method_name(type_151,(_Bool)0,name_165,info,(_Bool)1));
        fun_168=map$2charphsFunph_at(info->funcs,method_name_167,((void*)0));
        if(        fun_168==((void*)0)) {
            klass2_171=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_151->mClass->mName), "21obj.c", 250, 1));
            while(map$2charphsClassphp_operator_load_element(info->classes,klass2_171->mParentClassName)) {
                klass2_171=map$2charphsClassphp_operator_load_element(info->classes,klass2_171->mParentClassName);
                __dec_obj109=method_name_167;
                method_name_167=(char*)come_increment_ref_count(create_method_name_using_class(klass2_171,(_Bool)0,name_165,info,(_Bool)1));
                /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_168=map$2charphsFunph_at(info->funcs,method_name_167,((void*)0));
                if(                fun_168) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_157,name_165,method_name_167);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_157,name_165,method_name_167);
        }
        name_165 = come_decrement_ref_count2(name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_166,sType_finalize, 0, 0, 0, 0, (void*)0);
        method_name_167 = come_decrement_ref_count2(method_name_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj110=come_value2_153->c_value;
    come_value2_153->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_157));
    /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    type3_177=(struct sType*)come_increment_ref_count(sType_clone(inf_type_149));
    type3_177->mPointerNum++;
    type3_177->mHeap=(_Bool)1;
    type2_154->mHeap=(_Bool)1;
    __dec_obj111=come_value2_153->type;
    come_value2_153->type=(struct sType*)come_increment_ref_count(sType_clone(type2_154));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_153->type->mPointerNum++;
    come_value2_153->var=((void*)0);
    append_object_to_right_values2(come_value2_153,(struct sType*)come_increment_ref_count(type3_177),info,(_Bool)0);
    add_come_last_code(info,"%s",come_value2_153->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_153));
    __result124__ = (_Bool)1;
    if(obj_exp_148) { obj_exp_148 = come_decrement_ref_count2(obj_exp_148, ((struct sNode*)obj_exp_148)->finalize, ((struct sNode*)obj_exp_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(inf_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_151,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_154,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_155 = come_decrement_ref_count2(type_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_156 = come_decrement_ref_count2(type_name2_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_158 = come_decrement_ref_count2(buf_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_159 = come_decrement_ref_count2(buf2_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(typeX_160,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result124__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj89;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj89=self->v2;
            /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1tuple2$2charphsTypephph* it_162;
int i_163;
struct tuple2$2charphsTypeph* __result114__;
struct tuple2$2charphsTypeph* default_value_164;
struct tuple2$2charphsTypeph* __result115__;
default_value_164 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_162=self->head;
    i_163=0;
    while(it_162!=((void*)0)) {
        if(        position==i_163) {
            __result114__ = gComeFunResultObject = __result_obj__ = it_162->item;
            gComeFunResultObject = (void*)0;
            return __result114__;
        }
        it_162=it_162->next;
        i_163++;
    }
    memset(&default_value_164,0,sizeof(struct tuple2$2charphsTypeph*));
    __result115__ = gComeFunResultObject = __result_obj__ = default_value_164;
    /*i*/come_call_finalizer3(default_value_164,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_169;
unsigned int it_170;
struct sFun* __result116__;
struct sFun* __result117__;
struct sFun* __result118__;
struct sFun* __result119__;
    hash_169=string_get_hash_key(((char*)key))%self->size;
    it_170=hash_169;
    while((_Bool)1) {
        if(        self->item_existance[it_170]) {
            if(            string_equals(self->keys[it_170],key)) {
                __result116__ = gComeFunResultObject = __result_obj__ = self->items[it_170];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result116__;
            }
            it_170++;
            if(            it_170>=self->size) {
                it_170=0;
            }
            else if(            it_170==hash_169) {
                __result117__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result117__;
            }
        }
        else {
            __result118__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result118__;
        }
    }
    __result119__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj90;
struct sType* __dec_obj91;
struct list$1sTypeph* __dec_obj92;
struct list$1charph* __dec_obj93;
struct list$1charph* __dec_obj94;
struct sType* __dec_obj95;
struct sBlock* __dec_obj96;
struct buffer* __dec_obj99;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
char* __dec_obj103;
char* __dec_obj104;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj90=self->mName;
            /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj91=self->mResultType;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj92=self->mParamTypes;
            come_call_finalizer3(__dec_obj92,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj93=self->mParamNames;
            come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj94=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj95=self->mLambdaType;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj96=self->mBlock;
            come_call_finalizer3(__dec_obj96,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj99=self->mSource;
            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj100=self->mSourceHead;
            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj101=self->mSourceHead2;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj102=self->mSourceDefer;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj103=self->mComeHeader;
            /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj104=self->mDeclareSName;
            /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj97;
struct sVarTable* __dec_obj98;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj97=self->mNodes;
            come_call_finalizer3(__dec_obj97,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj98=self->mVarTable;
            come_call_finalizer3(__dec_obj98,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_172;
unsigned int hash_173;
unsigned int it_174;
struct sClass* __result120__;
struct sClass* __result121__;
struct sClass* __result122__;
struct sClass* __result123__;
default_value_172 = (void*)0;
    memset(&default_value_172,0,sizeof(struct sClass*));
    hash_173=string_get_hash_key(((char*)key))%self->size;
    it_174=hash_173;
    while((_Bool)1) {
        if(        self->item_existance[it_174]) {
            if(            string_equals(self->keys[it_174],key)) {
                __result120__ = gComeFunResultObject = __result_obj__ = self->items[it_174];
                /*i*/come_call_finalizer3(default_value_172,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result120__;
            }
            it_174++;
            if(            it_174>=self->size) {
                it_174=0;
            }
            else if(            it_174==hash_173) {
                __result121__ = gComeFunResultObject = __result_obj__ = default_value_172;
                /*i*/come_call_finalizer3(default_value_172,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result121__;
            }
        }
        else {
            __result122__ = gComeFunResultObject = __result_obj__ = default_value_172;
            /*i*/come_call_finalizer3(default_value_172,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result122__;
        }
    }
    __result123__ = gComeFunResultObject = __result_obj__ = default_value_172;
    /*i*/come_call_finalizer3(default_value_172,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj105;
struct list$1tuple2$2charphsTypephph* __dec_obj106;
char* __dec_obj107;
char* __dec_obj108;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj105=self->mName;
            /*G*/ __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj106=self->mFields;
            come_call_finalizer3(__dec_obj106,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj107=self->mDeclareSName;
            /*G*/ __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj108=self->mParentClassName;
            /*G*/ __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_175;
struct list_item$1tuple2$2charphsTypephph* prev_it_176;
    it_175=self->head;
    while(it_175!=((void*)0)) {
        prev_it_176=it_175;
        it_175=it_175->next;
        /*i*/come_call_finalizer3(prev_it_176,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value210 = (void*)0;
struct sTrueNode* __result125__;
    ((struct sNodeBase*)(__right_value210=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value210,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__=(void*)0;
void* __right_value211 = (void*)0;
char* __result126__;
    __result126__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value211=__builtin_string("sTrueNode")));
    __right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct CVALUE* come_value_178;
void* __right_value214 = (void*)0;
char* __dec_obj113;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct sType* __dec_obj114;
_Bool __result127__;
    come_value_178=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 304, "CVALUE"))));
    __dec_obj113=come_value_178->c_value;
    come_value_178->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=come_value_178->type;
    come_value_178->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 307, "sType")),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_178->var=((void*)0);
    add_come_last_code(info,"%s",come_value_178->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_178));
    __result127__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result127__;
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value221 = (void*)0;
struct sNode* __result130__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 320, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sTrueNode*)(__right_value218=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 320, "sTrueNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result130__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value221=_inf_value1));
    /*g*/come_call_finalizer3(__right_value218,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value221) { __right_value221 = come_decrement_ref_count2(__right_value221, ((struct sNode*)__right_value221)->finalize, ((struct sNode*)__right_value221)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result130__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
struct sFalseNode* __result131__;
    ((struct sNodeBase*)(__right_value222=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value222,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
char* __result132__;
    __result132__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value223=__builtin_string("sFalseNode")));
    __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct CVALUE* come_value_180;
void* __right_value226 = (void*)0;
char* __dec_obj118;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct sType* __dec_obj119;
_Bool __result133__;
    come_value_180=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 337, "CVALUE"))));
    __dec_obj118=come_value_180->c_value;
    come_value_180->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    /*G*/ __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj119=come_value_180->type;
    come_value_180->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 340, "sType")),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_180->var=((void*)0);
    add_come_last_code(info,"%s",come_value_180->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
    __result133__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result133__;
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value233 = (void*)0;
struct sNode* __result136__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 353, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFalseNode*)(__right_value230=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 353, "sFalseNode")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result136__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value233=_inf_value2));
    /*g*/come_call_finalizer3(__right_value230,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value233) { __right_value233 = come_decrement_ref_count2(__right_value233, ((struct sNode*)__right_value233)->finalize, ((struct sNode*)__right_value233)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result136__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* __dec_obj122;
struct sSizeOfNode* __result137__;
    ((struct sNodeBase*)(__right_value234=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value234,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj122=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result137__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value236 = (void*)0;
char* __result138__;
    __result138__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value236=__builtin_string("sSizeOfNode")));
    __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_182;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct CVALUE* come_value_183;
void* __right_value239 = (void*)0;
struct sType* type2_184;
void* __right_value240 = (void*)0;
char* type_name_185;
void* __right_value241 = (void*)0;
char* __dec_obj125;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sType* __dec_obj126;
_Bool __result139__;
    type_182=self->type;
    come_value_183=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 374, "CVALUE"))));
    type2_184=(struct sType*)come_increment_ref_count(solve_generics(type_182,info->generics_type,info));
    type_name_185=(char*)come_increment_ref_count(make_type_name_string(type2_184,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj125=come_value_183->c_value;
    come_value_183->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_185));
    /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj126=come_value_183->type;
    come_value_183->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 381, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_183->type->mUnsigned=(_Bool)1;
    come_value_183->var=((void*)0);
    add_come_last_code(info,"%s",come_value_183->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_183));
    __result139__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_184,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_185 = come_decrement_ref_count2(type_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result139__;
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sNode* __dec_obj127;
struct sSizeOfExpNode* __result140__;
struct sSizeOfExpNode* __result141__;
    ((struct sNodeBase*)(__right_value244=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value244,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj127=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); };
    __result140__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result140__;
    __result141__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result141__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value246 = (void*)0;
char* __result142__;
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=__builtin_string("sSizeOfExpNode")));
    __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_186;
_Bool __result143__;
void* __right_value247 = (void*)0;
struct CVALUE* come_value_187;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct CVALUE* come_value2_188;
void* __right_value250 = (void*)0;
char* __dec_obj130;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct sType* __dec_obj131;
_Bool __result144__;
    exp_186=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_186,info)) {
        __result143__ = (_Bool)0;
        if(exp_186) { exp_186 = come_decrement_ref_count2(exp_186, ((struct sNode*)exp_186)->finalize, ((struct sNode*)exp_186)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result143__;
    }
    come_value_187=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_188=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 420, "CVALUE"))));
    __dec_obj130=come_value2_188->c_value;
    come_value2_188->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_187->c_value));
    /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj131=come_value2_188->type;
    come_value2_188->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 423, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_188->type->mUnsigned=(_Bool)1;
    come_value2_188->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_188->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_188));
    __result144__ = (_Bool)1;
    if(exp_186) { exp_186 = come_decrement_ref_count2(exp_186, ((struct sNode*)exp_186)->finalize, ((struct sNode*)exp_186)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result144__;
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sType* __dec_obj132;
struct sTypeOfNode* __result145__;
    ((struct sNodeBase*)(__right_value253=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value253,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj132=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value255 = (void*)0;
char* __result146__;
    __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value255=__builtin_string("sTypeOfNode")));
    __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_189;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_190;
void* __right_value258 = (void*)0;
struct sType* type2_191;
void* __right_value259 = (void*)0;
char* type_name_192;
void* __right_value260 = (void*)0;
char* __dec_obj135;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sType* __dec_obj136;
_Bool __result147__;
    type_189=self->type;
    come_value_190=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 453, "CVALUE"))));
    type2_191=(struct sType*)come_increment_ref_count(solve_generics(type_189,info->generics_type,info));
    type_name_192=(char*)come_increment_ref_count(make_type_name_string(type2_191,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj135=come_value_190->c_value;
    come_value_190->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_192));
    /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj136=come_value_190->type;
    come_value_190->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 460, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_190->var=((void*)0);
    add_come_last_code(info,"%s",come_value_190->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
    __result147__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_191,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_192 = come_decrement_ref_count2(type_name_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result147__;
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sNode* __dec_obj137;
struct sTypeOfExpNode* __result148__;
    ((struct sNodeBase*)(__right_value263=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value263,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj137=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
    __result148__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result148__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
char* __result149__;
    __result149__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value265=__builtin_string("sTypeOfExpNode")));
    __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_193;
_Bool __result150__;
void* __right_value266 = (void*)0;
struct CVALUE* come_value_194;
void* __right_value267 = (void*)0;
struct sType* type_195;
void* __right_value268 = (void*)0;
struct sType* type2_196;
void* __right_value269 = (void*)0;
char* type_name_197;
void* __right_value270 = (void*)0;
char* __dec_obj140;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct sType* __dec_obj141;
_Bool __result151__;
    exp_193=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_193,info)) {
        __result150__ = (_Bool)0;
        if(exp_193) { exp_193 = come_decrement_ref_count2(exp_193, ((struct sNode*)exp_193)->finalize, ((struct sNode*)exp_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result150__;
    }
    come_value_194=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_195=(struct sType*)come_increment_ref_count(sType_clone(come_value_194->type));
    type2_196=(struct sType*)come_increment_ref_count(solve_generics(type_195,info->generics_type,info));
    type_name_197=(char*)come_increment_ref_count(make_type_name_string(type2_196,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj140=come_value_194->c_value;
    come_value_194->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_197));
    /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj141=come_value_194->type;
    come_value_194->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 503, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_194->var=((void*)0);
    add_come_last_code(info,"%s",come_value_194->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_194));
    __result151__ = (_Bool)1;
    if(exp_193) { exp_193 = come_decrement_ref_count2(exp_193, ((struct sNode*)exp_193)->finalize, ((struct sNode*)exp_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_195,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_196,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result151__;
}

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct sNode* __dec_obj142;
struct sDynamicTypeOfNode* __result152__;
    ((struct sNodeBase*)(__right_value273=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value273,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj142=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
    __result152__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDynamicTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result152__;
}

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value275=__builtin_string("sDynamicTypeOfNode")));
    __right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
struct sNode* exp_198;
_Bool __result154__;
void* __right_value276 = (void*)0;
struct CVALUE* come_value_199;
void* __right_value277 = (void*)0;
struct sType* type_200;
void* __right_value278 = (void*)0;
struct sType* type2_201;
void* __right_value279 = (void*)0;
char* type_name_202;
void* __right_value280 = (void*)0;
char* __dec_obj145;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sType* __dec_obj146;
_Bool __result155__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct CVALUE* come_value2_203;
void* __right_value285 = (void*)0;
char* __dec_obj147;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sType* __dec_obj148;
_Bool __result156__;
    exp_198=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_198,info)) {
        __result154__ = (_Bool)0;
        if(exp_198) { exp_198 = come_decrement_ref_count2(exp_198, ((struct sNode*)exp_198)->finalize, ((struct sNode*)exp_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result154__;
    }
    come_value_199=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !come_value_199->type->mHeap) {
        type_200=(struct sType*)come_increment_ref_count(sType_clone(come_value_199->type));
        type2_201=(struct sType*)come_increment_ref_count(solve_generics(type_200,info->generics_type,info));
        type_name_202=(char*)come_increment_ref_count(make_type_name_string(type2_201,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj145=come_value_199->c_value;
        come_value_199->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_202));
        /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj146=come_value_199->type;
        come_value_199->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 547, "sType")),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_199->var=((void*)0);
        add_come_last_code(info,"%s",come_value_199->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_199));
        __result155__ = (_Bool)1;
        /*i*/come_call_finalizer3(type_200,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_201,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_202 = come_decrement_ref_count2(type_name_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_198) { exp_198 = come_decrement_ref_count2(exp_198, ((struct sNode*)exp_198)->finalize, ((struct sNode*)exp_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result155__;
        /*i*/come_call_finalizer3(type_200,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_201,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_202 = come_decrement_ref_count2(type_name_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_203=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 557, "CVALUE"))));
        __dec_obj147=come_value2_203->c_value;
        come_value2_203->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_199->c_value));
        /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj148=come_value2_203->type;
        come_value2_203->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 560, "sType")),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_203->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_203->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_203));
        /*i*/come_call_finalizer3(come_value2_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result156__ = (_Bool)1;
    if(exp_198) { exp_198 = come_decrement_ref_count2(exp_198, ((struct sNode*)exp_198)->finalize, ((struct sNode*)exp_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
char* __dec_obj143;
struct sNode* __dec_obj144;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj143=self->sname;
            /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj144=self->exp;
            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sType* __dec_obj149;
struct sAlignOfNode* __result157__;
struct sAlignOfNode* __result158__;
    ((struct sNodeBase*)(__right_value288=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value288,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj149=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result157__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result157__;
    __result158__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
char* __result159__;
    __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value290=__builtin_string("sAlignOfNode")));
    __right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_204;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct CVALUE* come_value_205;
void* __right_value293 = (void*)0;
struct sType* type2_206;
void* __right_value294 = (void*)0;
char* type_name_207;
void* __right_value295 = (void*)0;
char* __dec_obj152;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sType* __dec_obj153;
_Bool __result160__;
    type_204=self->type;
    come_value_205=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 592, "CVALUE"))));
    type2_206=(struct sType*)come_increment_ref_count(solve_generics(type_204,info->generics_type,info));
    type_name_207=(char*)come_increment_ref_count(make_type_name_string(type2_206,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj152=come_value_205->c_value;
    come_value_205->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_207));
    /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=come_value_205->type;
    come_value_205->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 599, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_205->type->mUnsigned=(_Bool)1;
    come_value_205->var=((void*)0);
    add_come_last_code(info,"%s",come_value_205->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_205));
    __result160__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_206,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_207 = come_decrement_ref_count2(type_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result160__;
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj154;
struct sAlignOfExpNode* __result161__;
    ((struct sNodeBase*)(__right_value298=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value298,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj154=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result161__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
char* __result162__;
    __result162__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value300=__builtin_string("sAlignOfExpNode")));
    __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_208;
_Bool __result163__;
void* __right_value301 = (void*)0;
struct CVALUE* come_value_209;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct CVALUE* come_value2_210;
void* __right_value304 = (void*)0;
char* __dec_obj157;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* __dec_obj158;
_Bool __result164__;
    exp_208=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_208,info)) {
        __result163__ = (_Bool)0;
        if(exp_208) { exp_208 = come_decrement_ref_count2(exp_208, ((struct sNode*)exp_208)->finalize, ((struct sNode*)exp_208)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result163__;
    }
    come_value_209=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_210=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 636, "CVALUE"))));
    __dec_obj157=come_value2_210->c_value;
    come_value2_210->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_209->c_value));
    /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj158=come_value2_210->type;
    come_value2_210->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 639, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_210->type->mUnsigned=(_Bool)1;
    come_value2_210->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_210->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_210));
    __result164__ = (_Bool)1;
    if(exp_208) { exp_208 = come_decrement_ref_count2(exp_208, ((struct sNode*)exp_208)->finalize, ((struct sNode*)exp_208)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result164__;
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct sType* __dec_obj159;
struct sAlignOfNode2* __result165__;
    ((struct sNodeBase*)(__right_value307=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value307,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj159=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result165__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
char* __result166__;
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value309=__builtin_string("sAlignOfNode2")));
    __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_211;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct CVALUE* come_value_212;
void* __right_value312 = (void*)0;
struct sType* type2_213;
void* __right_value313 = (void*)0;
char* type_name_214;
void* __right_value314 = (void*)0;
char* __dec_obj162;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sType* __dec_obj163;
_Bool __result167__;
    type_211=self->type;
    come_value_212=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 669, "CVALUE"))));
    type2_213=(struct sType*)come_increment_ref_count(solve_generics(type_211,info->generics_type,info));
    type_name_214=(char*)come_increment_ref_count(make_type_name_string(type2_213,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj162=come_value_212->c_value;
    come_value_212->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_214));
    /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj163=come_value_212->type;
    come_value_212->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 676, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_212->type->mUnsigned=(_Bool)1;
    come_value_212->var=((void*)0);
    add_come_last_code(info,"%s",come_value_212->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_212));
    __result167__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_213,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_214 = come_decrement_ref_count2(type_name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result167__;
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sNode* __dec_obj164;
struct sAlignOfExpNode2* __result168__;
    ((struct sNodeBase*)(__right_value317=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value317,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj164=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
    __result168__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result168__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value319=__builtin_string("sAlignOfExpNode2")));
    __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_215;
_Bool __result170__;
void* __right_value320 = (void*)0;
struct CVALUE* come_value_216;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct CVALUE* come_value2_217;
void* __right_value323 = (void*)0;
char* __dec_obj167;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sType* __dec_obj168;
_Bool __result171__;
    exp_215=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_215,info)) {
        __result170__ = (_Bool)0;
        if(exp_215) { exp_215 = come_decrement_ref_count2(exp_215, ((struct sNode*)exp_215)->finalize, ((struct sNode*)exp_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result170__;
    }
    come_value_216=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_217=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 713, "CVALUE"))));
    __dec_obj167=come_value2_217->c_value;
    come_value2_217->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_216->c_value));
    /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj168=come_value2_217->type;
    come_value2_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 716, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_217->type->mUnsigned=(_Bool)1;
    come_value2_217->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_217->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_217));
    __result171__ = (_Bool)1;
    if(exp_215) { exp_215 = come_decrement_ref_count2(exp_215, ((struct sNode*)exp_215)->finalize, ((struct sNode*)exp_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_217,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result171__;
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct sType* __dec_obj169;
struct sAlignAsNode* __result172__;
    ((struct sNodeBase*)(__right_value326=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value326,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj169=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result172__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
char* __result173__;
    __result173__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value328=__builtin_string("sAlignAsNode")));
    __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_218;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct CVALUE* come_value_219;
void* __right_value331 = (void*)0;
struct sType* type2_220;
void* __right_value332 = (void*)0;
char* type_name_221;
void* __right_value333 = (void*)0;
char* __dec_obj172;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sType* __dec_obj173;
_Bool __result174__;
    type_218=self->type;
    come_value_219=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 746, "CVALUE"))));
    type2_220=(struct sType*)come_increment_ref_count(solve_generics(type_218,info->generics_type,info));
    type_name_221=(char*)come_increment_ref_count(make_type_name_string(type2_220,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj172=come_value_219->c_value;
    come_value_219->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_221));
    /*G*/ __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj173=come_value_219->type;
    come_value_219->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 753, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_219->type->mUnsigned=(_Bool)1;
    come_value_219->var=((void*)0);
    add_come_last_code(info,"%s",come_value_219->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_219));
    __result174__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_219,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_220,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_221 = come_decrement_ref_count2(type_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result174__;
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct sNode* __dec_obj174;
struct sAlignAsExpNode* __result175__;
    ((struct sNodeBase*)(__right_value336=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value336,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj174=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
    __result175__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result175__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value338 = (void*)0;
char* __result176__;
    __result176__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value338=__builtin_string("sAlignAsExpNode")));
    __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_222;
_Bool __result177__;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_223;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct CVALUE* come_value2_224;
void* __right_value342 = (void*)0;
char* __dec_obj177;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sType* __dec_obj178;
_Bool __result178__;
    exp_222=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_222,info)) {
        __result177__ = (_Bool)0;
        if(exp_222) { exp_222 = come_decrement_ref_count2(exp_222, ((struct sNode*)exp_222)->finalize, ((struct sNode*)exp_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result177__;
    }
    come_value_223=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_224=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 790, "CVALUE"))));
    __dec_obj177=come_value2_224->c_value;
    come_value2_224->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_223->c_value));
    /*G*/ __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj178=come_value2_224->type;
    come_value2_224->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 793, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_224->type->mUnsigned=(_Bool)1;
    come_value2_224->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_224->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_224));
    __result178__ = (_Bool)1;
    if(exp_222) { exp_222 = come_decrement_ref_count2(exp_222, ((struct sNode*)exp_222)->finalize, ((struct sNode*)exp_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result178__;
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sNode* __dec_obj179;
struct sDeleteNode* __result179__;
    ((struct sNodeBase*)(__right_value345=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value345,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj179=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
    __result179__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result179__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
char* __result180__;
    __result180__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value347=__builtin_string("sDeleteNode")));
    __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_225;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_226;
_Bool __result181__;
    node_225=self->node;
    if(    !node_compile(node_225,info)) {
        return (_Bool)0;
    }
    come_value_226=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_226->type,come_value_226->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result181__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_226,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result181__;
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sNode* __dec_obj182;
struct sForceDeleteNode* __result182__;
    ((struct sNodeBase*)(__right_value349=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value349,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj182=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
    __result182__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result182__;
}

char* sForceDeleteNode_kind(struct sForceDeleteNode* self){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
char* __result183__;
    __result183__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value351=__builtin_string("sForceDeleteNode")));
    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info){
struct sNode* node_227;
void* __right_value352 = (void*)0;
struct CVALUE* come_value_228;
_Bool __result184__;
    node_227=self->node;
    if(    !node_compile(node_227,info)) {
        return (_Bool)0;
    }
    come_value_228=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_228->type,come_value_228->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    __result184__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result184__;
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sNode* __dec_obj185;
struct sDelegateNode* __result185__;
struct sDelegateNode* __result186__;
    ((struct sNodeBase*)(__right_value353=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value353,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj185=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); };
    __result185__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result185__;
    __result186__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result186__;
}

char* sDelegateNode_kind(struct sDelegateNode* self){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
char* __result187__;
    __result187__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value355=__builtin_string("sDelegateNode")));
    __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
struct sNode* node_229;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_230;
_Bool __result188__;
    node_229=self->node;
    if(    !node_compile(node_229,info)) {
        return (_Bool)0;
    }
    come_value_230=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_230->type->mDelegate=(_Bool)1;
    if(    come_value_230->var) {
        come_value_230->var->mType->mDelegate=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_230));
    __result188__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_230,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result188__;
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sNode* __dec_obj188;
struct sShareNode* __result189__;
    ((struct sNodeBase*)(__right_value357=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value357,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj188=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    __result189__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result189__;
}

char* sShareNode_kind(struct sShareNode* self){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
char* __result190__;
    __result190__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value359=__builtin_string("sShareNode")));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
struct sNode* node_231;
void* __right_value360 = (void*)0;
struct CVALUE* come_value_232;
_Bool __result191__;
    node_231=self->node;
    if(    !node_compile(node_231,info)) {
        return (_Bool)0;
    }
    come_value_232=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_232->type->mShare=(_Bool)1;
    if(    come_value_232->var) {
        come_value_232->var->mType->mShare=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_232));
    __result191__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_232,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result191__;
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* __dec_obj191;
struct sBorrowNode* __result192__;
struct sBorrowNode* __result193__;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value361,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj191=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); };
    __result192__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result192__;
    __result193__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result193__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
char* __result194__;
    __result194__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value363=__builtin_string("sBorrowNode")));
    __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_233;
void* __right_value364 = (void*)0;
struct CVALUE* come_value_234;
struct sRightValueObject* right_value_objects_235;
int right_value_id_236;
_Bool __result195__;
    node_233=self->node;
    if(    !node_compile(node_233,info)) {
        return (_Bool)0;
    }
    come_value_234=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_234->type->mHeap=(_Bool)0;
    right_value_objects_235=come_value_234->right_value_objects;
    if(    right_value_objects_235) {
        right_value_id_236=right_value_objects_235->mID;
        if(        right_value_id_236!=-1) {
            remove_object_from_right_values(right_value_id_236,info);
        }
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_234));
    __result195__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_234,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result195__;
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sNode* __dec_obj194;
struct sCloneNode* __result196__;
    ((struct sNodeBase*)(__right_value365=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value365,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj194=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
    __result196__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result196__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
char* __result197__;
    __result197__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value367=__builtin_string("sCloneNode")));
    __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_237;
void* __right_value368 = (void*)0;
struct CVALUE* left_value_238;
void* __right_value369 = (void*)0;
struct sType* left_type_239;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct CVALUE* come_value_240;
void* __right_value372 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* result_type_241;
char* c_value_242;
char* __dec_obj199;
void* __right_value373 = (void*)0;
struct sType* __dec_obj200;
_Bool __result198__;
    node_237=self->node;
    if(    !node_compile(node_237,info)) {
        return (_Bool)0;
    }
    left_value_238=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_value_238->type->mClone=(_Bool)1;
    left_type_239=(struct sType*)come_increment_ref_count(sType_clone(left_value_238->type));
    if(    left_type_239->mPointerNum==1&&string_operator_equals(left_type_239->mClass->mName,"void")&&left_type_239->mHeap==(_Bool)0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_238));
    }
    else if(    left_type_239->mPointerNum==0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_238));
    }
    else if(    left_type_239->mPointerNum>0) {
        come_value_240=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1029, "CVALUE"))));
        multiple_assign_var4=((struct tuple2$2sTypephcharph*)(__right_value372=clone_object(left_type_239,left_value_238->c_value,info)));
        result_type_241=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        c_value_242=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        /*g*/come_call_finalizer3(__right_value372,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj199=come_value_240->c_value;
        come_value_240->c_value=(char*)come_increment_ref_count(c_value_242);
        /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj200=come_value_240->type;
        come_value_240->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_239));
        come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_240->type->mHeap=(_Bool)1;
        come_value_240->type->mClone=(_Bool)1;
        come_value_240->var=((void*)0);
        append_object_to_right_values2(come_value_240,(struct sType*)come_increment_ref_count(left_type_239),info,(_Bool)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_240));
        /*i*/come_call_finalizer3(come_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
        c_value_242 = come_decrement_ref_count2(c_value_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result198__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result198__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj197;
char* __dec_obj198;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj197=self->v1;
            come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj198=self->v2;
            /*G*/ __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sNode* __dec_obj201;
struct sDupeNode* __result199__;
    ((struct sNodeBase*)(__right_value374=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value374,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj201=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); };
    __result199__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result199__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__=(void*)0;
void* __right_value376 = (void*)0;
char* __result200__;
    __result200__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value376=__builtin_string("sDupeNode")));
    __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_243;
void* __right_value377 = (void*)0;
struct CVALUE* left_value_244;
void* __right_value378 = (void*)0;
struct sType* left_type_245;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_246;
void* __right_value381 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var5;
struct sType* result_type_247;
char* c_value_248;
char* __dec_obj204;
void* __right_value382 = (void*)0;
struct sType* __dec_obj205;
_Bool __result201__;
    node_243=self->node;
    if(    !node_compile(node_243,info)) {
        return (_Bool)0;
    }
    left_value_244=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_245=(struct sType*)come_increment_ref_count(sType_clone(left_value_244->type));
    if(    left_type_245->mPointerNum==0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_244));
    }
    else if(    left_type_245->mPointerNum>0&&left_type_245->mHeap==(_Bool)0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_244));
    }
    else if(    left_type_245->mPointerNum>0) {
        come_value_246=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1081, "CVALUE"))));
        multiple_assign_var5=((struct tuple2$2sTypephcharph*)(__right_value381=clone_object(left_type_245,left_value_244->c_value,info)));
        result_type_247=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        c_value_248=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        /*g*/come_call_finalizer3(__right_value381,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj204=come_value_246->c_value;
        come_value_246->c_value=(char*)come_increment_ref_count(c_value_248);
        /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj205=come_value_246->type;
        come_value_246->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_245));
        come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_246->type->mHeap=(_Bool)1;
        come_value_246->var=((void*)0);
        append_object_to_right_values2(come_value_246,(struct sType*)come_increment_ref_count(left_type_245),info,(_Bool)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_246));
        /*i*/come_call_finalizer3(come_value_246,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_247,sType_finalize, 0, 0, 0, 0, (void*)0);
        c_value_248 = come_decrement_ref_count2(c_value_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result201__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result201__;
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sNode* __dec_obj206;
struct sDummyHeapNode* __result202__;
    ((struct sNodeBase*)(__right_value383=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value383,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj206=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result202__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
void* __right_value385 = (void*)0;
char* __result203__;
    __result203__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value385=__builtin_string("sDummyHeapNode")));
    __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_249;
void* __right_value386 = (void*)0;
struct CVALUE* come_value_250;
_Bool __result204__;
    node_249=self->node;
    if(    !node_compile(node_249,info)) {
        return (_Bool)0;
    }
    come_value_250=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_250->type->mHeap=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_250));
    __result204__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_250,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result204__;
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj209;
struct sGCIncNode* __result205__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj209=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
    __result205__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result205__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
char* __result206__;
    __result206__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value389=__builtin_string("sGCIncNode")));
    __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_251;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_252;
struct sType* type_253;
void* __right_value391 = (void*)0;
char* type_name_254;
void* __right_value392 = (void*)0;
char* __dec_obj212;
_Bool __result207__;
    node_251=self->node;
    if(    !node_compile(node_251,info)) {
        return (_Bool)0;
    }
    come_value_252=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_253=come_value_252->type;
    if(    come_value_252->type->mHeap) {
        type_name_254=(char*)come_increment_ref_count(make_type_name_string(type_253,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj212=come_value_252->c_value;
        come_value_252->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_252->type,come_value_252->c_value,info));
        /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_252));
    __result207__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result207__;
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sNode* __dec_obj213;
struct sGCDecNode* __result208__;
    ((struct sNodeBase*)(__right_value393=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value393,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj213=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result208__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
char* __result209__;
    __result209__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value395=__builtin_string("sGCDecNode")));
    __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_255;
void* __right_value396 = (void*)0;
struct CVALUE* come_value_256;
struct sType* type_257;
_Bool __result210__;
    node_255=self->node;
    if(    !node_compile(node_255,info)) {
        return (_Bool)0;
    }
    come_value_256=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_257=come_value_256->type;
    decrement_ref_count_object(type_257,come_value_256->c_value,info,(_Bool)0,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_256));
    __result210__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result210__;
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sNode* __dec_obj216;
struct sGCDecNoFreeNode* __result211__;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj216=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result211__;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
char* __result212__;
    __result212__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value399=__builtin_string("sGCDecNoFreeNode")));
    __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_258;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_259;
struct sType* type_260;
_Bool __result213__;
    node_258=self->node;
    if(    !node_compile(node_258,info)) {
        return (_Bool)0;
    }
    come_value_259=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_260=come_value_259->type;
    decrement_ref_count_object(type_260,come_value_259->c_value,info,(_Bool)0,(_Bool)1);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_259));
    __result213__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_259,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result213__;
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sType* __dec_obj219;
struct sIsHeap* __result214__;
    ((struct sNodeBase*)(__right_value401=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value401,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj219=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
char* __result215__;
    __result215__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value403=__builtin_string("sIsHeap")));
    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_261;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct CVALUE* come_value_262;
void* __right_value406 = (void*)0;
char* __dec_obj222;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sType* __dec_obj223;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_263;
void* __right_value411 = (void*)0;
char* __dec_obj224;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sType* __dec_obj225;
    node_261=self->type;
    if(    self->type->mHeap) {
        come_value_262=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1258, "CVALUE"))));
        __dec_obj222=come_value_262->c_value;
        come_value_262->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        /*G*/ __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj223=come_value_262->type;
        come_value_262->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1261, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_262->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_262));
        add_come_last_code(info,"%s",come_value_262->c_value);
        /*i*/come_call_finalizer3(come_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_263=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1269, "CVALUE"))));
        __dec_obj224=come_value_263->c_value;
        come_value_263->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        /*G*/ __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj225=come_value_263->type;
        come_value_263->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1272, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_263->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_263));
        add_come_last_code(info,"%s",come_value_263->c_value);
        /*i*/come_call_finalizer3(come_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sType* __dec_obj226;
struct sIsPointer* __result216__;
    ((struct sNodeBase*)(__right_value414=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value414,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj226=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
char* __result217__;
    __result217__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value416=__builtin_string("sIsPointer")));
    __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_264;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_265;
void* __right_value419 = (void*)0;
char* __dec_obj229;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sType* __dec_obj230;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct CVALUE* come_value_266;
void* __right_value424 = (void*)0;
char* __dec_obj231;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* __dec_obj232;
    node_264=self->type;
    if(    self->type->mPointerNum>0) {
        come_value_265=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1303, "CVALUE"))));
        __dec_obj229=come_value_265->c_value;
        come_value_265->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj230=come_value_265->type;
        come_value_265->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1306, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_265->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_265));
        add_come_last_code(info,"%s",come_value_265->c_value);
        /*i*/come_call_finalizer3(come_value_265,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_266=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1314, "CVALUE"))));
        __dec_obj231=come_value_266->c_value;
        come_value_266->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj232=come_value_266->type;
        come_value_266->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1317, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_266->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_266));
        add_come_last_code(info,"%s",come_value_266->c_value);
        /*i*/come_call_finalizer3(come_value_266,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value427 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_267;
char* name_268;
_Bool err_269;
void* __right_value428 = (void*)0;
struct sType* inf_type_270;
void* __right_value429 = (void*)0;
struct sNode* node_271;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sNode* _inf_value3;
struct sImplementsNode* _inf_obj_value3;
void* __right_value436 = (void*)0;
struct sNode* __result220__;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value452 = (void*)0;
struct sNode* obj_273;
void* __right_value453 = (void*)0;
char* fun_name_281;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sNode* __result229__;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_282;
void* __right_value458 = (void*)0;
char* word_283;
_Bool no_comma_284;
void* __right_value459 = (void*)0;
struct sNode* exp_285;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* exp_286;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sNode* __result231__;
struct sNode* __result232__;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value471 = (void*)0;
struct sNode* __result235__;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* __right_value478 = (void*)0;
struct sNode* __result238__;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* __right_value483 = (void*)0;
struct sNode* __result241__;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* __right_value488 = (void*)0;
struct sNode* __result244__;
void* __right_value489 = (void*)0;
struct sNode* node_291;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* __right_value495 = (void*)0;
struct sNode* __result247__;
void* __right_value496 = (void*)0;
struct sNode* node_293;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* __right_value502 = (void*)0;
struct sNode* __result250__;
void* __right_value503 = (void*)0;
struct sNode* node_295;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* __right_value509 = (void*)0;
struct sNode* __result253__;
void* __right_value510 = (void*)0;
struct sNode* node_297;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* __right_value516 = (void*)0;
struct sNode* __result256__;
void* __right_value517 = (void*)0;
struct sNode* node_299;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* __right_value523 = (void*)0;
struct sNode* __result259__;
void* __right_value524 = (void*)0;
struct sNode* node_301;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* __right_value530 = (void*)0;
struct sNode* __result262__;
void* __right_value531 = (void*)0;
struct sNode* node_303;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* __right_value537 = (void*)0;
struct sNode* __result265__;
void* __right_value538 = (void*)0;
struct sNode* node_305;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* __right_value544 = (void*)0;
struct sNode* __result268__;
void* __right_value545 = (void*)0;
struct sNode* node_307;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* __right_value551 = (void*)0;
struct sNode* __result271__;
void* __right_value552 = (void*)0;
struct sNode* node_309;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* __right_value558 = (void*)0;
struct sNode* __result274__;
void* __right_value559 = (void*)0;
struct sNode* node_311;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sNode* _inf_value19;
struct sGCDecNoFreeNode* _inf_obj_value19;
void* __right_value565 = (void*)0;
struct sNode* __result277__;
void* __right_value566 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* param_type_313;
char* param_name_314;
_Bool err_315;
void* __right_value567 = (void*)0;
struct sType* type2_316;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sNode* _inf_value20;
struct sIsHeap* _inf_obj_value20;
void* __right_value573 = (void*)0;
struct sNode* __result280__;
void* __right_value574 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* param_type_318;
char* param_name_319;
_Bool err_320;
void* __right_value575 = (void*)0;
struct sType* type2_321;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sNode* _inf_value21;
struct sIsPointer* _inf_obj_value21;
void* __right_value581 = (void*)0;
struct sNode* __result283__;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value22;
struct sNothingNode* _inf_obj_value22;
void* __right_value586 = (void*)0;
struct sNode* __result286__;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sNode* _inf_value23;
struct sNothingNode* _inf_obj_value23;
void* __right_value591 = (void*)0;
struct sNode* __result289__;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sNode* _inf_value24;
struct sNothingNode* _inf_obj_value24;
void* __right_value596 = (void*)0;
struct sNode* __result292__;
_Bool come_c_326;
void* __right_value597 = (void*)0;
struct sNode* node_327;
struct sNode* __result293__;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sNode* _inf_value25;
struct sNothingNode* _inf_obj_value25;
void* __right_value602 = (void*)0;
struct sNode* __result296__;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sNode* _inf_value26;
struct sNothingNode* _inf_obj_value26;
void* __right_value607 = (void*)0;
struct sNode* __result299__;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sNode* _inf_value27;
struct sNothingNode* _inf_obj_value27;
void* __right_value612 = (void*)0;
struct sNode* __result302__;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sNode* _inf_value28;
struct sNothingNode* _inf_obj_value28;
void* __right_value617 = (void*)0;
struct sNode* __result305__;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sNode* _inf_value29;
struct sNothingNode* _inf_obj_value29;
void* __right_value622 = (void*)0;
struct sNode* __result308__;
_Bool paren_333;
_Bool is_type_name_flag_334;
char* p_335;
int sline_336;
void* __right_value623 = (void*)0;
char* word_337;
void* __right_value624 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_338;
char* name_339;
_Bool err_340;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sNode* _inf_value30;
struct sSizeOfNode* _inf_obj_value30;
void* __right_value630 = (void*)0;
struct sNode* __result311__;
void* __right_value631 = (void*)0;
struct sNode* exp_342;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sNode* _inf_value31;
struct sSizeOfExpNode* _inf_obj_value31;
void* __right_value637 = (void*)0;
struct sNode* __result314__;
_Bool paren_344;
_Bool is_type_name_flag_345;
char* p_346;
int sline_347;
void* __right_value638 = (void*)0;
char* word_348;
void* __right_value639 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_349;
char* name_350;
_Bool err_351;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sNode* _inf_value32;
struct sTypeOfNode* _inf_obj_value32;
void* __right_value645 = (void*)0;
struct sNode* __result317__;
void* __right_value646 = (void*)0;
struct sNode* exp_353;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value33;
struct sTypeOfExpNode* _inf_obj_value33;
void* __right_value652 = (void*)0;
struct sNode* __result320__;
_Bool is_type_name_flag_355;
char* p_356;
int sline_357;
void* __right_value653 = (void*)0;
char* word_358;
void* __right_value654 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_359;
char* name_360;
_Bool err_361;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* _inf_value34;
struct sAlignOfNode* _inf_obj_value34;
void* __right_value660 = (void*)0;
struct sNode* __result323__;
void* __right_value661 = (void*)0;
struct sNode* exp_363;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sNode* _inf_value35;
struct sAlignOfExpNode* _inf_obj_value35;
void* __right_value667 = (void*)0;
struct sNode* __result326__;
_Bool is_type_name_flag_365;
char* p_366;
int sline_367;
void* __right_value668 = (void*)0;
char* word_368;
void* __right_value669 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* type_369;
char* name_370;
_Bool err_371;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sNode* _inf_value36;
struct sAlignOfNode2* _inf_obj_value36;
void* __right_value675 = (void*)0;
struct sNode* __result329__;
void* __right_value676 = (void*)0;
struct sNode* exp_373;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sNode* _inf_value37;
struct sAlignOfExpNode2* _inf_obj_value37;
void* __right_value682 = (void*)0;
struct sNode* __result332__;
_Bool is_type_name_flag_375;
char* p_376;
int sline_377;
void* __right_value683 = (void*)0;
char* word_378;
void* __right_value684 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var13;
struct sType* type_379;
char* name_380;
_Bool err_381;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct sNode* _inf_value38;
struct sAlignAsNode* _inf_obj_value38;
void* __right_value690 = (void*)0;
struct sNode* __result335__;
void* __right_value691 = (void*)0;
struct sNode* exp_383;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sNode* _inf_value39;
struct sAlignAsExpNode* _inf_obj_value39;
void* __right_value697 = (void*)0;
struct sNode* __result338__;
void* __right_value698 = (void*)0;
struct sNode* __result339__;
    if(    !gComeC&&(charp_operator_equals(buf,"new")||info->new_)) {
        if(        info->new_) {
            info->p=head;
            info->sline=head_sline;
        }
        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value427=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_267=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        name_268=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_269=multiple_assign_var6->v3;
        /*g*/come_call_finalizer3(__right_value427,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_269) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(        *info->p==40) {
            if(            type_267->mClass->mProtocol) {
                info->p++;
                skip_spaces_and_lf(info);
                inf_type_270=(struct sType*)come_increment_ref_count(sType_clone(type_267));
                node_271=(struct sNode*)come_increment_ref_count(expression_v13(info));
                expected_next_character(41,info);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1354, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sImplementsNode*)(__right_value431=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1354, "sImplementsNode")),(struct sNode*)come_increment_ref_count(node_271),(struct sType*)come_increment_ref_count(inf_type_270),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sImplementsNode_finalize;
                _inf_value3->clone=(void*)sImplementsNode_clone;
                _inf_value3->compile=(void*)sImplementsNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sImplementsNode_kind;
                __result220__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value436=_inf_value3));
                /*i*/come_call_finalizer3(inf_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_271) { node_271 = come_decrement_ref_count2(node_271, ((struct sNode*)node_271)->finalize, ((struct sNode*)node_271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value431,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value436) { __right_value436 = come_decrement_ref_count2(__right_value436, ((struct sNode*)__right_value436)->finalize, ((struct sNode*)__right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result220__;
                /*i*/come_call_finalizer3(inf_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_271) { node_271 = come_decrement_ref_count2(node_271, ((struct sNode*)node_271)->finalize, ((struct sNode*)node_271)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1357, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sNewNode*)(__right_value438=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1357, "sNewNode")),(struct sType*)come_increment_ref_count(type_267),((void*)0),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sNewNode_finalize;
                _inf_value4->clone=(void*)sNewNode_clone;
                _inf_value4->compile=(void*)sNewNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sNewNode_kind;
                obj_273=(struct sNode*)come_increment_ref_count(_inf_value4);
                /*g*/come_call_finalizer3(__right_value438,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name_281=(char*)come_increment_ref_count(__builtin_string("initialize"));
                __result229__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value455=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj_273)),(char*)come_increment_ref_count(fun_name_281),info)));
                if(obj_273) { obj_273 = come_decrement_ref_count2(obj_273, ((struct sNode*)obj_273)->finalize, ((struct sNode*)obj_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_281 = come_decrement_ref_count2(fun_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(__right_value455) { __right_value455 = come_decrement_ref_count2(__right_value455, ((struct sNode*)__right_value455)->finalize, ((struct sNode*)__right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result229__;
                if(obj_273) { obj_273 = come_decrement_ref_count2(obj_273, ((struct sNode*)obj_273)->finalize, ((struct sNode*)obj_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_281 = come_decrement_ref_count2(fun_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_282=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "21obj.c", 1367, "list$1tuple2$2charphsNodephph"))));
            while((_Bool)1) {
                word_283=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_284=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_285=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_284;
                    list$1tuple2$2charphsNodephph_add(initializer_282,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1381, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(word_283),(struct sNode*)come_increment_ref_count(exp_285))));
                    if(exp_285) { exp_285 = come_decrement_ref_count2(exp_285, ((struct sNode*)exp_285)->finalize, ((struct sNode*)exp_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==44) {
                    exp_286=(struct sNode*)come_increment_ref_count(create_load_var(word_283,info));
                    list$1tuple2$2charphsNodephph_add(initializer_282,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1386, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(word_283),(struct sNode*)come_increment_ref_count(exp_286))));
                    if(exp_286) { exp_286 = come_decrement_ref_count2(exp_286, ((struct sNode*)exp_286)->finalize, ((struct sNode*)exp_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"invalid character(21) %c\n",*info->p);
                    __result231__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    word_283 = come_decrement_ref_count2(word_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(initializer_282,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result231__;
                }
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    word_283 = come_decrement_ref_count2(word_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    __result232__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    word_283 = come_decrement_ref_count2(word_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(initializer_282,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result232__;
                }
                word_283 = come_decrement_ref_count2(word_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1407, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(__right_value466=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1407, "sNewNode")),(struct sType*)come_increment_ref_count(type_267),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_282),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result235__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value471=_inf_value5));
            /*i*/come_call_finalizer3(initializer_282,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value466,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value471) { __right_value471 = come_decrement_ref_count2(__right_value471, ((struct sNode*)__right_value471)->finalize, ((struct sNode*)__right_value471)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result235__;
            /*i*/come_call_finalizer3(initializer_282,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1410, "struct sNode");
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(__right_value473=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1410, "sNewNode")),(struct sType*)come_increment_ref_count(type_267),((void*)0),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result238__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value478=_inf_value6));
            /*i*/come_call_finalizer3(type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value473,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value478) { __right_value478 = come_decrement_ref_count2(__right_value478, ((struct sNode*)__right_value478)->finalize, ((struct sNode*)__right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result238__;
        }
        /*i*/come_call_finalizer3(type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"true")) {
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1414, "struct sNode");
        _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(__right_value480=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1414, "sTrueNode")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sTrueNode_finalize;
        _inf_value7->clone=(void*)sTrueNode_clone;
        _inf_value7->compile=(void*)sTrueNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sTrueNode_kind;
        __result241__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value483=_inf_value7));
        /*g*/come_call_finalizer3(__right_value480,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value483) { __right_value483 = come_decrement_ref_count2(__right_value483, ((struct sNode*)__right_value483)->finalize, ((struct sNode*)__right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    else if(    charp_operator_equals(buf,"false")) {
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1417, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(__right_value485=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1417, "sFalseNode")),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFalseNode_finalize;
        _inf_value8->clone=(void*)sFalseNode_clone;
        _inf_value8->compile=(void*)sFalseNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sFalseNode_kind;
        __result244__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value488=_inf_value8));
        /*g*/come_call_finalizer3(__right_value485,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value488) { __right_value488 = come_decrement_ref_count2(__right_value488, ((struct sNode*)__right_value488)->finalize, ((struct sNode*)__right_value488)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    else if(    charp_operator_equals(buf,"delete")) {
        node_291=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1422, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(__right_value491=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1422, "sDeleteNode")),(struct sNode*)come_increment_ref_count(node_291),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sDeleteNode_finalize;
        _inf_value9->clone=(void*)sDeleteNode_clone;
        _inf_value9->compile=(void*)sDeleteNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sDeleteNode_kind;
        __result247__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value495=_inf_value9));
        if(node_291) { node_291 = come_decrement_ref_count2(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value491,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value495) { __right_value495 = come_decrement_ref_count2(__right_value495, ((struct sNode*)__right_value495)->finalize, ((struct sNode*)__right_value495)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result247__;
        if(node_291) { node_291 = come_decrement_ref_count2(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"force_delete")) {
        node_293=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1427, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sForceDeleteNode*)(__right_value498=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count((struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1427, "sForceDeleteNode")),(struct sNode*)come_increment_ref_count(node_293),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
        _inf_value10->clone=(void*)sForceDeleteNode_clone;
        _inf_value10->compile=(void*)sForceDeleteNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sForceDeleteNode_kind;
        __result250__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value502=_inf_value10));
        if(node_293) { node_293 = come_decrement_ref_count2(node_293, ((struct sNode*)node_293)->finalize, ((struct sNode*)node_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value498,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value502) { __right_value502 = come_decrement_ref_count2(__right_value502, ((struct sNode*)__right_value502)->finalize, ((struct sNode*)__right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result250__;
        if(node_293) { node_293 = come_decrement_ref_count2(node_293, ((struct sNode*)node_293)->finalize, ((struct sNode*)node_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"borrow")) {
        node_295=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1433, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sBorrowNode*)(__right_value505=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1433, "sBorrowNode")),(struct sNode*)come_increment_ref_count(node_295),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sBorrowNode_finalize;
        _inf_value11->clone=(void*)sBorrowNode_clone;
        _inf_value11->compile=(void*)sBorrowNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sBorrowNode_kind;
        __result253__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value509=_inf_value11));
        if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value505,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value509) { __right_value509 = come_decrement_ref_count2(__right_value509, ((struct sNode*)__right_value509)->finalize, ((struct sNode*)__right_value509)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result253__;
        if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"delegate")) {
        node_297=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1438, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sDelegateNode*)(__right_value512=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count((struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1438, "sDelegateNode")),(struct sNode*)come_increment_ref_count(node_297),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDelegateNode_finalize;
        _inf_value12->clone=(void*)sDelegateNode_clone;
        _inf_value12->compile=(void*)sDelegateNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDelegateNode_kind;
        __result256__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value516=_inf_value12));
        if(node_297) { node_297 = come_decrement_ref_count2(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value512,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value516) { __right_value516 = come_decrement_ref_count2(__right_value516, ((struct sNode*)__right_value516)->finalize, ((struct sNode*)__right_value516)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result256__;
        if(node_297) { node_297 = come_decrement_ref_count2(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"share")) {
        node_299=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1443, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sShareNode*)(__right_value519=sShareNode_initialize((struct sShareNode*)come_increment_ref_count((struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1443, "sShareNode")),(struct sNode*)come_increment_ref_count(node_299),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sShareNode_finalize;
        _inf_value13->clone=(void*)sShareNode_clone;
        _inf_value13->compile=(void*)sShareNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sShareNode_kind;
        __result259__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value523=_inf_value13));
        if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value519,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value523) { __right_value523 = come_decrement_ref_count2(__right_value523, ((struct sNode*)__right_value523)->finalize, ((struct sNode*)__right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result259__;
        if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"clone")) {
        node_301=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1448, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sCloneNode*)(__right_value526=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1448, "sCloneNode")),(struct sNode*)come_increment_ref_count(node_301),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sCloneNode_finalize;
        _inf_value14->clone=(void*)sCloneNode_clone;
        _inf_value14->compile=(void*)sCloneNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sCloneNode_kind;
        __result262__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value530=_inf_value14));
        if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value526,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value530) { __right_value530 = come_decrement_ref_count2(__right_value530, ((struct sNode*)__right_value530)->finalize, ((struct sNode*)__right_value530)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result262__;
        if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"dupe")) {
        node_303=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1453, "struct sNode");
        _inf_obj_value15=come_increment_ref_count(((struct sDupeNode*)(__right_value533=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1453, "sDupeNode")),(struct sNode*)come_increment_ref_count(node_303),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sDupeNode_finalize;
        _inf_value15->clone=(void*)sDupeNode_clone;
        _inf_value15->compile=(void*)sDupeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sDupeNode_kind;
        __result265__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value537=_inf_value15));
        if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value533,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value537) { __right_value537 = come_decrement_ref_count2(__right_value537, ((struct sNode*)__right_value537)->finalize, ((struct sNode*)__right_value537)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result265__;
        if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"dummy_heap")) {
        node_305=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1458, "struct sNode");
        _inf_obj_value16=come_increment_ref_count(((struct sDummyHeapNode*)(__right_value540=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1458, "sDummyHeapNode")),(struct sNode*)come_increment_ref_count(node_305),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value16->clone=(void*)sDummyHeapNode_clone;
        _inf_value16->compile=(void*)sDummyHeapNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sDummyHeapNode_kind;
        __result268__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value544=_inf_value16));
        if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value540,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value544) { __right_value544 = come_decrement_ref_count2(__right_value544, ((struct sNode*)__right_value544)->finalize, ((struct sNode*)__right_value544)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result268__;
        if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_307=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1468, "struct sNode");
        _inf_obj_value17=come_increment_ref_count(((struct sGCIncNode*)(__right_value547=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1468, "sGCIncNode")),(struct sNode*)come_increment_ref_count(node_307),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sGCIncNode_finalize;
        _inf_value17->clone=(void*)sGCIncNode_clone;
        _inf_value17->compile=(void*)sGCIncNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sGCIncNode_kind;
        __result271__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value551=_inf_value17));
        if(node_307) { node_307 = come_decrement_ref_count2(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value547,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value551) { __right_value551 = come_decrement_ref_count2(__right_value551, ((struct sNode*)__right_value551)->finalize, ((struct sNode*)__right_value551)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result271__;
        if(node_307) { node_307 = come_decrement_ref_count2(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_309=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1478, "struct sNode");
        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNode*)(__right_value554=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1478, "sGCDecNode")),(struct sNode*)come_increment_ref_count(node_309),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sGCDecNode_finalize;
        _inf_value18->clone=(void*)sGCDecNode_clone;
        _inf_value18->compile=(void*)sGCDecNode_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sGCDecNode_kind;
        __result274__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value558=_inf_value18));
        if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value554,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value558) { __right_value558 = come_decrement_ref_count2(__right_value558, ((struct sNode*)__right_value558)->finalize, ((struct sNode*)__right_value558)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result274__;
        if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_311=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1488, "struct sNode");
        _inf_obj_value19=come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value561=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1488, "sGCDecNoFreeNode")),(struct sNode*)come_increment_ref_count(node_311),info))));
        _inf_value19->_protocol_obj=_inf_obj_value19;
        _inf_value19->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value19->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value19->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value19->sline=(void*)sNodeBase_sline;
        _inf_value19->sname=(void*)sNodeBase_sname;
        _inf_value19->terminated=(void*)sNodeBase_terminated;
        _inf_value19->kind=(void*)sGCDecNoFreeNode_kind;
        __result277__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value565=_inf_value19));
        if(node_311) { node_311 = come_decrement_ref_count2(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value561,sGCDecNoFreeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value565) { __right_value565 = come_decrement_ref_count2(__right_value565, ((struct sNode*)__right_value565)->finalize, ((struct sNode*)__right_value565)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result277__;
        if(node_311) { node_311 = come_decrement_ref_count2(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value566=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_313=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        param_name_314=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_315=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value566,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_315) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_316=(struct sType*)come_increment_ref_count(solve_generics(param_type_313,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1504, "struct sNode");
        _inf_obj_value20=come_increment_ref_count(((struct sIsHeap*)(__right_value569=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1504, "sIsHeap")),(struct sType*)come_increment_ref_count(type2_316),info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sIsHeap_finalize;
        _inf_value20->clone=(void*)sIsHeap_clone;
        _inf_value20->compile=(void*)sIsHeap_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sIsHeap_kind;
        __result280__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value573=_inf_value20));
        /*i*/come_call_finalizer3(param_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_314 = come_decrement_ref_count2(param_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_316,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value569,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value573) { __right_value573 = come_decrement_ref_count2(__right_value573, ((struct sNode*)__right_value573)->finalize, ((struct sNode*)__right_value573)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result280__;
        /*i*/come_call_finalizer3(param_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_314 = come_decrement_ref_count2(param_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_316,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value574=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_318=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        param_name_319=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_320=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value574,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_320) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_321=(struct sType*)come_increment_ref_count(solve_generics(param_type_318,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1520, "struct sNode");
        _inf_obj_value21=come_increment_ref_count(((struct sIsPointer*)(__right_value577=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1520, "sIsPointer")),(struct sType*)come_increment_ref_count(type2_321),info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sIsPointer_finalize;
        _inf_value21->clone=(void*)sIsPointer_clone;
        _inf_value21->compile=(void*)sIsPointer_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sIsPointer_kind;
        __result283__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value581=_inf_value21));
        /*i*/come_call_finalizer3(param_type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_319 = come_decrement_ref_count2(param_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_321,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value577,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value581) { __right_value581 = come_decrement_ref_count2(__right_value581, ((struct sNode*)__right_value581)->finalize, ((struct sNode*)__right_value581)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result283__;
        /*i*/come_call_finalizer3(param_type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_319 = come_decrement_ref_count2(param_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_321,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1529, "struct sNode");
            _inf_obj_value22=come_increment_ref_count(((struct sNothingNode*)(__right_value583=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1529, "sNothingNode")),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sNothingNode_finalize;
            _inf_value22->clone=(void*)sNothingNode_clone;
            _inf_value22->compile=(void*)sNothingNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sNothingNode_kind;
            __result286__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value586=_inf_value22));
            /*g*/come_call_finalizer3(__right_value583,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value586) { __right_value586 = come_decrement_ref_count2(__right_value586, ((struct sNode*)__right_value586)->finalize, ((struct sNode*)__right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result286__;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1537, "struct sNode");
            _inf_obj_value23=come_increment_ref_count(((struct sNothingNode*)(__right_value588=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1537, "sNothingNode")),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sNothingNode_finalize;
            _inf_value23->clone=(void*)sNothingNode_clone;
            _inf_value23->compile=(void*)sNothingNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sNothingNode_kind;
            __result289__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value591=_inf_value23));
            /*g*/come_call_finalizer3(__right_value588,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value591) { __right_value591 = come_decrement_ref_count2(__right_value591, ((struct sNode*)__right_value591)->finalize, ((struct sNode*)__right_value591)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result289__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1545, "struct sNode");
            _inf_obj_value24=come_increment_ref_count(((struct sNothingNode*)(__right_value593=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1545, "sNothingNode")),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sNothingNode_finalize;
            _inf_value24->clone=(void*)sNothingNode_clone;
            _inf_value24->compile=(void*)sNothingNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sNothingNode_kind;
            __result292__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value596=_inf_value24));
            /*g*/come_call_finalizer3(__right_value593,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value596) { __right_value596 = come_decrement_ref_count2(__right_value596, ((struct sNode*)__right_value596)->finalize, ((struct sNode*)__right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result292__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_326=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123) {
                node_327=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info));
                gComeC=come_c_326;
                __result293__ = gComeFunResultObject = __result_obj__ = node_327;
                if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 1, 0, (void*)0); } 
                gComeFunResultObject = (void*)0;
                return __result293__;
                if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1562, "struct sNode");
                _inf_obj_value25=come_increment_ref_count(((struct sNothingNode*)(__right_value599=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1562, "sNothingNode")),info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sNothingNode_finalize;
                _inf_value25->clone=(void*)sNothingNode_clone;
                _inf_value25->compile=(void*)sNothingNode_compile;
                _inf_value25->sline=(void*)sNodeBase_sline;
                _inf_value25->sname=(void*)sNodeBase_sname;
                _inf_value25->terminated=(void*)sNodeBase_terminated;
                _inf_value25->kind=(void*)sNothingNode_kind;
                __result296__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value602=_inf_value25));
                /*g*/come_call_finalizer3(__right_value599,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value602) { __right_value602 = come_decrement_ref_count2(__right_value602, ((struct sNode*)__right_value602)->finalize, ((struct sNode*)__right_value602)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result296__;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1569, "struct sNode");
            _inf_obj_value26=come_increment_ref_count(((struct sNothingNode*)(__right_value604=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1569, "sNothingNode")),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sNothingNode_finalize;
            _inf_value26->clone=(void*)sNothingNode_clone;
            _inf_value26->compile=(void*)sNothingNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sNothingNode_kind;
            __result299__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value607=_inf_value26));
            /*g*/come_call_finalizer3(__right_value604,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value607) { __right_value607 = come_decrement_ref_count2(__right_value607, ((struct sNode*)__right_value607)->finalize, ((struct sNode*)__right_value607)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result299__;
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1576, "struct sNode");
            _inf_obj_value27=come_increment_ref_count(((struct sNothingNode*)(__right_value609=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1576, "sNothingNode")),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNothingNode_finalize;
            _inf_value27->clone=(void*)sNothingNode_clone;
            _inf_value27->compile=(void*)sNothingNode_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNothingNode_kind;
            __result302__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value612=_inf_value27));
            /*g*/come_call_finalizer3(__right_value609,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value612) { __right_value612 = come_decrement_ref_count2(__right_value612, ((struct sNode*)__right_value612)->finalize, ((struct sNode*)__right_value612)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result302__;
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1582, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sNothingNode*)(__right_value614=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1582, "sNothingNode")),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNothingNode_finalize;
            _inf_value28->clone=(void*)sNothingNode_clone;
            _inf_value28->compile=(void*)sNothingNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNothingNode_kind;
            __result305__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value617=_inf_value28));
            /*g*/come_call_finalizer3(__right_value614,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value617) { __right_value617 = come_decrement_ref_count2(__right_value617, ((struct sNode*)__right_value617)->finalize, ((struct sNode*)__right_value617)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result305__;
        }
        else if(        parsecmp("no-null-check",info)) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1588, "struct sNode");
            _inf_obj_value29=come_increment_ref_count(((struct sNothingNode*)(__right_value619=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1588, "sNothingNode")),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sNothingNode_finalize;
            _inf_value29->clone=(void*)sNothingNode_clone;
            _inf_value29->compile=(void*)sNothingNode_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sNothingNode_kind;
            __result308__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value622=_inf_value29));
            /*g*/come_call_finalizer3(__right_value619,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value622) { __right_value622 = come_decrement_ref_count2(__right_value622, ((struct sNode*)__right_value622)->finalize, ((struct sNode*)__right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result308__;
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")) {
        paren_333=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_333=(_Bool)1;
        }
        is_type_name_flag_334=(_Bool)0;
        {
            p_335=info->p;
            sline_336=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_337=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_337,info)) {
                    is_type_name_flag_334=(_Bool)1;
                }
                word_337 = come_decrement_ref_count2(word_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_335;
            info->sline=sline_336;
        }
        if(        is_type_name_flag_334) {
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value624=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_338=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_339=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_340=multiple_assign_var9->v3;
            /*g*/come_call_finalizer3(__right_value624,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_340) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_333&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1636, "struct sNode");
            _inf_obj_value30=come_increment_ref_count(((struct sSizeOfNode*)(__right_value626=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1636, "sSizeOfNode")),(struct sType*)come_increment_ref_count(type_338),info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sSizeOfNode_finalize;
            _inf_value30->clone=(void*)sSizeOfNode_clone;
            _inf_value30->compile=(void*)sSizeOfNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sSizeOfNode_kind;
            __result311__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value630=_inf_value30));
            /*i*/come_call_finalizer3(type_338,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_339 = come_decrement_ref_count2(name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value626,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value630) { __right_value630 = come_decrement_ref_count2(__right_value630, ((struct sNode*)__right_value630)->finalize, ((struct sNode*)__right_value630)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result311__;
            /*i*/come_call_finalizer3(type_338,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_339 = come_decrement_ref_count2(name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            exp_342=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(            paren_333&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1648, "struct sNode");
            _inf_obj_value31=come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value633=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1648, "sSizeOfExpNode")),(struct sNode*)come_increment_ref_count(exp_342),info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value31->clone=(void*)sSizeOfExpNode_clone;
            _inf_value31->compile=(void*)sSizeOfExpNode_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sSizeOfExpNode_kind;
            __result314__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value637=_inf_value31));
            if(exp_342) { exp_342 = come_decrement_ref_count2(exp_342, ((struct sNode*)exp_342)->finalize, ((struct sNode*)exp_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value633,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value637) { __right_value637 = come_decrement_ref_count2(__right_value637, ((struct sNode*)__right_value637)->finalize, ((struct sNode*)__right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result314__;
            if(exp_342) { exp_342 = come_decrement_ref_count2(exp_342, ((struct sNode*)exp_342)->finalize, ((struct sNode*)exp_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"typeof")) {
        paren_344=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_344=(_Bool)1;
        }
        is_type_name_flag_345=(_Bool)0;
        {
            p_346=info->p;
            sline_347=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_348=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_348,info)) {
                    is_type_name_flag_345=(_Bool)1;
                }
                word_348 = come_decrement_ref_count2(word_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_346;
            info->sline=sline_347;
        }
        if(        is_type_name_flag_345) {
            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value639=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_349=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_350=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_351=multiple_assign_var10->v3;
            /*g*/come_call_finalizer3(__right_value639,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_351) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_344&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1693, "struct sNode");
            _inf_obj_value32=come_increment_ref_count(((struct sTypeOfNode*)(__right_value641=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1693, "sTypeOfNode")),(struct sType*)come_increment_ref_count(type_349),info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sTypeOfNode_finalize;
            _inf_value32->clone=(void*)sTypeOfNode_clone;
            _inf_value32->compile=(void*)sTypeOfNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sTypeOfNode_kind;
            __result317__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value645=_inf_value32));
            /*i*/come_call_finalizer3(type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_350 = come_decrement_ref_count2(name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value641,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value645) { __right_value645 = come_decrement_ref_count2(__right_value645, ((struct sNode*)__right_value645)->finalize, ((struct sNode*)__right_value645)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result317__;
            /*i*/come_call_finalizer3(type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_350 = come_decrement_ref_count2(name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            exp_353=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(            paren_344&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1705, "struct sNode");
            _inf_obj_value33=come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value648=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1705, "sTypeOfExpNode")),(struct sNode*)come_increment_ref_count(exp_353),info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value33->clone=(void*)sTypeOfExpNode_clone;
            _inf_value33->compile=(void*)sTypeOfExpNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sTypeOfExpNode_kind;
            __result320__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value652=_inf_value33));
            if(exp_353) { exp_353 = come_decrement_ref_count2(exp_353, ((struct sNode*)exp_353)->finalize, ((struct sNode*)exp_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value648,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value652) { __right_value652 = come_decrement_ref_count2(__right_value652, ((struct sNode*)__right_value652)->finalize, ((struct sNode*)__right_value652)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result320__;
            if(exp_353) { exp_353 = come_decrement_ref_count2(exp_353, ((struct sNode*)exp_353)->finalize, ((struct sNode*)exp_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"_Alignof")) {
        expected_next_character(40,info);
        is_type_name_flag_355=(_Bool)0;
        {
            p_356=info->p;
            sline_357=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_358=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_358,info)) {
                    is_type_name_flag_355=(_Bool)1;
                }
                word_358 = come_decrement_ref_count2(word_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_356;
            info->sline=sline_357;
        }
        if(        is_type_name_flag_355) {
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value654=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_359=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_360=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_361=multiple_assign_var11->v3;
            /*g*/come_call_finalizer3(__right_value654,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_361) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1749, "struct sNode");
            _inf_obj_value34=come_increment_ref_count(((struct sAlignOfNode*)(__right_value656=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1749, "sAlignOfNode")),(struct sType*)come_increment_ref_count(type_359),info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAlignOfNode_finalize;
            _inf_value34->clone=(void*)sAlignOfNode_clone;
            _inf_value34->compile=(void*)sAlignOfNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAlignOfNode_kind;
            __result323__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value660=_inf_value34));
            /*i*/come_call_finalizer3(type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_360 = come_decrement_ref_count2(name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value656,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value660) { __right_value660 = come_decrement_ref_count2(__right_value660, ((struct sNode*)__right_value660)->finalize, ((struct sNode*)__right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result323__;
            /*i*/come_call_finalizer3(type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_360 = come_decrement_ref_count2(name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            exp_363=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1756, "struct sNode");
            _inf_obj_value35=come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value663=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1756, "sAlignOfExpNode")),(struct sNode*)come_increment_ref_count(exp_363),info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value35->clone=(void*)sAlignOfExpNode_clone;
            _inf_value35->compile=(void*)sAlignOfExpNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sAlignOfExpNode_kind;
            __result326__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value667=_inf_value35));
            if(exp_363) { exp_363 = come_decrement_ref_count2(exp_363, ((struct sNode*)exp_363)->finalize, ((struct sNode*)exp_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value663,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value667) { __right_value667 = come_decrement_ref_count2(__right_value667, ((struct sNode*)__right_value667)->finalize, ((struct sNode*)__right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result326__;
            if(exp_363) { exp_363 = come_decrement_ref_count2(exp_363, ((struct sNode*)exp_363)->finalize, ((struct sNode*)exp_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")) {
        expected_next_character(40,info);
        is_type_name_flag_365=(_Bool)0;
        {
            p_366=info->p;
            sline_367=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_368=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_368,info)) {
                    is_type_name_flag_365=(_Bool)1;
                }
                word_368 = come_decrement_ref_count2(word_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_366;
            info->sline=sline_367;
        }
        if(        is_type_name_flag_365) {
            multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value669=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_369=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
            name_370=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            err_371=multiple_assign_var12->v3;
            /*g*/come_call_finalizer3(__right_value669,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_371) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1789, "struct sNode");
            _inf_obj_value36=come_increment_ref_count(((struct sAlignOfNode2*)(__right_value671=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1789, "sAlignOfNode2")),(struct sType*)come_increment_ref_count(type_369),info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value36->clone=(void*)sAlignOfNode2_clone;
            _inf_value36->compile=(void*)sAlignOfNode2_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sAlignOfNode2_kind;
            __result329__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value675=_inf_value36));
            /*i*/come_call_finalizer3(type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_370 = come_decrement_ref_count2(name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value671,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value675) { __right_value675 = come_decrement_ref_count2(__right_value675, ((struct sNode*)__right_value675)->finalize, ((struct sNode*)__right_value675)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result329__;
            /*i*/come_call_finalizer3(type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_370 = come_decrement_ref_count2(name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            exp_373=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1796, "struct sNode");
            _inf_obj_value37=come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value678=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1796, "sAlignOfExpNode2")),(struct sNode*)come_increment_ref_count(exp_373),info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value37->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value37->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sAlignOfExpNode2_kind;
            __result332__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value682=_inf_value37));
            if(exp_373) { exp_373 = come_decrement_ref_count2(exp_373, ((struct sNode*)exp_373)->finalize, ((struct sNode*)exp_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value678,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value682) { __right_value682 = come_decrement_ref_count2(__right_value682, ((struct sNode*)__right_value682)->finalize, ((struct sNode*)__right_value682)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result332__;
            if(exp_373) { exp_373 = come_decrement_ref_count2(exp_373, ((struct sNode*)exp_373)->finalize, ((struct sNode*)exp_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")) {
        expected_next_character(40,info);
        is_type_name_flag_375=(_Bool)0;
        {
            p_376=info->p;
            sline_377=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_378=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_378,info)) {
                    is_type_name_flag_375=(_Bool)1;
                }
                word_378 = come_decrement_ref_count2(word_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_376;
            info->sline=sline_377;
        }
        if(        is_type_name_flag_375) {
            multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(__right_value684=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_379=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_380=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_381=multiple_assign_var13->v3;
            /*g*/come_call_finalizer3(__right_value684,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_381) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1829, "struct sNode");
            _inf_obj_value38=come_increment_ref_count(((struct sAlignAsNode*)(__right_value686=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1829, "sAlignAsNode")),(struct sType*)come_increment_ref_count(type_379),info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sAlignAsNode_finalize;
            _inf_value38->clone=(void*)sAlignAsNode_clone;
            _inf_value38->compile=(void*)sAlignAsNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sAlignAsNode_kind;
            __result335__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value690=_inf_value38));
            /*i*/come_call_finalizer3(type_379,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_380 = come_decrement_ref_count2(name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value686,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value690) { __right_value690 = come_decrement_ref_count2(__right_value690, ((struct sNode*)__right_value690)->finalize, ((struct sNode*)__right_value690)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result335__;
            /*i*/come_call_finalizer3(type_379,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_380 = come_decrement_ref_count2(name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            exp_383=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1836, "struct sNode");
            _inf_obj_value39=come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value693=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1836, "sAlignAsExpNode")),(struct sNode*)come_increment_ref_count(exp_383),info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value39->clone=(void*)sAlignAsExpNode_clone;
            _inf_value39->compile=(void*)sAlignAsExpNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAlignAsExpNode_kind;
            __result338__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value697=_inf_value39));
            if(exp_383) { exp_383 = come_decrement_ref_count2(exp_383, ((struct sNode*)exp_383)->finalize, ((struct sNode*)exp_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value693,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value697) { __right_value697 = come_decrement_ref_count2(__right_value697, ((struct sNode*)__right_value697)->finalize, ((struct sNode*)__right_value697)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result338__;
            if(exp_383) { exp_383 = come_decrement_ref_count2(exp_383, ((struct sNode*)exp_383)->finalize, ((struct sNode*)exp_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result339__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value698=string_node_v20(buf,head,head_sline,info)));
    if(__right_value698) { __right_value698 = come_decrement_ref_count2(__right_value698, ((struct sNode*)__right_value698)->finalize, ((struct sNode*)__right_value698)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj233;
char* __dec_obj234;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj233=self->v1;
            come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj234=self->v2;
            /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result222__;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_275;
struct list_item$1tuple2$2charphsNodephph* it_276;
void* __right_value450 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result227__;
    if(    self==((void*)0)) {
        __result222__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_275=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 139, "list$1tuple2$2charphsNodephph"))));
    it_276=self->head;
    while(it_276!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_275,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_276->item)));
        it_276=it_276->next;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_275;
    /*i*/come_call_finalizer3(result_275,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result223__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value444 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_277;
struct tuple2$2charphsNodeph* __dec_obj246;
void* __right_value445 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_278;
struct tuple2$2charphsNodeph* __dec_obj249;
void* __right_value446 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_279;
struct tuple2$2charphsNodeph* __dec_obj252;
struct list$1tuple2$2charphsNodephph* __result224__;
    if(    self->len==0) {
        litem_277=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value444=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 153, "list_item$1tuple2$2charphsNodephph"))));
        litem_277->prev=((void*)0);
        litem_277->next=((void*)0);
        __dec_obj246=litem_277->item;
        litem_277->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj246,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_277;
        self->head=litem_277;
    }
    else if(    self->len==1) {
        litem_278=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value445=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 163, "list_item$1tuple2$2charphsNodephph"))));
        litem_278->prev=self->head;
        litem_278->next=((void*)0);
        __dec_obj249=litem_278->item;
        litem_278->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj249,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_278;
        self->head->next=litem_278;
    }
    else {
        litem_279=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value446=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 173, "list_item$1tuple2$2charphsNodephph"))));
        litem_279->prev=self->tail;
        litem_279->next=((void*)0);
        __dec_obj252=litem_279->item;
        litem_279->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj252,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_279;
        self->tail=litem_279;
    }
    self->len++;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj253;
struct sNode* __dec_obj254;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj253=self->v1;
            /*G*/ __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj254=self->v2;
            if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result225__;
void* __right_value447 = (void*)0;
struct tuple2$2charphsNodeph* result_280;
void* __right_value448 = (void*)0;
char* __dec_obj255;
void* __right_value449 = (void*)0;
struct sNode* __dec_obj256;
struct tuple2$2charphsNodeph* __result226__;
    if(    self==(void*)0) {
        __result225__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_280=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj255=result_280->v1;
        result_280->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj256=result_280->v2;
        result_280->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_280;
    /*i*/come_call_finalizer3(result_280,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj257;
struct sNode* __dec_obj258;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj257=self->v1;
            /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj258=self->v2;
            if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj260;
struct sNode* __dec_obj261;
struct tuple2$2charphsNodeph* __result230__;
    __dec_obj260=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj261=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static void sNewNode_finalize(struct sNewNode* self){
char* __dec_obj268;
struct sType* __dec_obj269;
struct list$1tuple2$2charphsNodephph* __dec_obj270;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj268=self->sname;
            /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj269=self->type;
            come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj270=self->initializer;
            come_call_finalizer3(__dec_obj270,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__=(void*)0;
struct sNewNode* __result236__;
void* __right_value474 = (void*)0;
struct sNewNode* result_288;
void* __right_value475 = (void*)0;
char* __dec_obj271;
void* __right_value476 = (void*)0;
struct sType* __dec_obj272;
void* __right_value477 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj273;
struct sNewNode* __result237__;
    if(    self==(void*)0) {
        __result236__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_288=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "sNewNode"));
    if(    self!=((void*)0)) {
        result_288->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj271=result_288->sname;
        result_288->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj272=result_288->type;
        result_288->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj272,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj273=result_288->initializer;
        result_288->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->initializer));
        come_call_finalizer3(__dec_obj273,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_288;
    /*i*/come_call_finalizer3(result_288,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static void sTrueNode_finalize(struct sTrueNode* self){
char* __dec_obj274;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj274=self->sname;
            /*G*/ __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__=(void*)0;
struct sTrueNode* __result239__;
void* __right_value481 = (void*)0;
struct sTrueNode* result_289;
void* __right_value482 = (void*)0;
char* __dec_obj275;
struct sTrueNode* __result240__;
    if(    self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_289=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "sTrueNode"));
    if(    self!=((void*)0)) {
        result_289->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj275=result_289->sname;
        result_289->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_289;
    /*i*/come_call_finalizer3(result_289,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void sFalseNode_finalize(struct sFalseNode* self){
char* __dec_obj276;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj276=self->sname;
            /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__=(void*)0;
struct sFalseNode* __result242__;
void* __right_value486 = (void*)0;
struct sFalseNode* result_290;
void* __right_value487 = (void*)0;
char* __dec_obj277;
struct sFalseNode* __result243__;
    if(    self==(void*)0) {
        __result242__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_290=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "sFalseNode"));
    if(    self!=((void*)0)) {
        result_290->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj277=result_290->sname;
        result_290->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_290;
    /*i*/come_call_finalizer3(result_290,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
char* __dec_obj278;
struct sNode* __dec_obj279;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj278=self->sname;
            /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj279=self->node;
            if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
struct sDeleteNode* __result245__;
void* __right_value492 = (void*)0;
struct sDeleteNode* result_292;
void* __right_value493 = (void*)0;
char* __dec_obj280;
void* __right_value494 = (void*)0;
struct sNode* __dec_obj281;
struct sDeleteNode* __result246__;
    if(    self==(void*)0) {
        __result245__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    result_292=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "sDeleteNode"));
    if(    self!=((void*)0)) {
        result_292->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj280=result_292->sname;
        result_292->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj281=result_292->node;
        result_292->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_292;
    /*i*/come_call_finalizer3(result_292,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
char* __dec_obj282;
struct sNode* __dec_obj283;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj282=self->sname;
            /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj283=self->node;
            if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__=(void*)0;
struct sForceDeleteNode* __result248__;
void* __right_value499 = (void*)0;
struct sForceDeleteNode* result_294;
void* __right_value500 = (void*)0;
char* __dec_obj284;
void* __right_value501 = (void*)0;
struct sNode* __dec_obj285;
struct sForceDeleteNode* __result249__;
    if(    self==(void*)0) {
        __result248__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_294=(struct sForceDeleteNode*)come_increment_ref_count((struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "sForceDeleteNode"));
    if(    self!=((void*)0)) {
        result_294->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj284=result_294->sname;
        result_294->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj285=result_294->node;
        result_294->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_294;
    /*i*/come_call_finalizer3(result_294,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
char* __dec_obj286;
struct sNode* __dec_obj287;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj286=self->sname;
            /*G*/ __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj287=self->node;
            if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
struct sBorrowNode* __result251__;
void* __right_value506 = (void*)0;
struct sBorrowNode* result_296;
void* __right_value507 = (void*)0;
char* __dec_obj288;
void* __right_value508 = (void*)0;
struct sNode* __dec_obj289;
struct sBorrowNode* __result252__;
    if(    self==(void*)0) {
        __result251__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_296=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "sBorrowNode"));
    if(    self!=((void*)0)) {
        result_296->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj288=result_296->sname;
        result_296->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj289=result_296->node;
        result_296->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_296;
    /*i*/come_call_finalizer3(result_296,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
char* __dec_obj290;
struct sNode* __dec_obj291;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj290=self->sname;
            /*G*/ __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj291=self->node;
            if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__=(void*)0;
struct sDelegateNode* __result254__;
void* __right_value513 = (void*)0;
struct sDelegateNode* result_298;
void* __right_value514 = (void*)0;
char* __dec_obj292;
void* __right_value515 = (void*)0;
struct sNode* __dec_obj293;
struct sDelegateNode* __result255__;
    if(    self==(void*)0) {
        __result254__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_298=(struct sDelegateNode*)come_increment_ref_count((struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "sDelegateNode"));
    if(    self!=((void*)0)) {
        result_298->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj292=result_298->sname;
        result_298->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj293=result_298->node;
        result_298->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_298;
    /*i*/come_call_finalizer3(result_298,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void sShareNode_finalize(struct sShareNode* self){
char* __dec_obj294;
struct sNode* __dec_obj295;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj294=self->sname;
            /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj295=self->node;
            if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__=(void*)0;
struct sShareNode* __result257__;
void* __right_value520 = (void*)0;
struct sShareNode* result_300;
void* __right_value521 = (void*)0;
char* __dec_obj296;
void* __right_value522 = (void*)0;
struct sNode* __dec_obj297;
struct sShareNode* __result258__;
    if(    self==(void*)0) {
        __result257__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    result_300=(struct sShareNode*)come_increment_ref_count((struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "sShareNode"));
    if(    self!=((void*)0)) {
        result_300->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj296=result_300->sname;
        result_300->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj297=result_300->node;
        result_300->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_300;
    /*i*/come_call_finalizer3(result_300,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void sCloneNode_finalize(struct sCloneNode* self){
char* __dec_obj298;
struct sNode* __dec_obj299;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj298=self->sname;
            /*G*/ __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj299=self->node;
            if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__=(void*)0;
struct sCloneNode* __result260__;
void* __right_value527 = (void*)0;
struct sCloneNode* result_302;
void* __right_value528 = (void*)0;
char* __dec_obj300;
void* __right_value529 = (void*)0;
struct sNode* __dec_obj301;
struct sCloneNode* __result261__;
    if(    self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_302=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "sCloneNode"));
    if(    self!=((void*)0)) {
        result_302->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj300=result_302->sname;
        result_302->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj301=result_302->node;
        result_302->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_302;
    /*i*/come_call_finalizer3(result_302,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static void sDupeNode_finalize(struct sDupeNode* self){
char* __dec_obj302;
struct sNode* __dec_obj303;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj302=self->sname;
            /*G*/ __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj303=self->node;
            if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__=(void*)0;
struct sDupeNode* __result263__;
void* __right_value534 = (void*)0;
struct sDupeNode* result_304;
void* __right_value535 = (void*)0;
char* __dec_obj304;
void* __right_value536 = (void*)0;
struct sNode* __dec_obj305;
struct sDupeNode* __result264__;
    if(    self==(void*)0) {
        __result263__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    result_304=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "sDupeNode"));
    if(    self!=((void*)0)) {
        result_304->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj304=result_304->sname;
        result_304->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj305=result_304->node;
        result_304->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result264__ = gComeFunResultObject = __result_obj__ = result_304;
    /*i*/come_call_finalizer3(result_304,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
char* __dec_obj306;
struct sNode* __dec_obj307;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj306=self->sname;
            /*G*/ __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj307=self->node;
            if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
struct sDummyHeapNode* __result266__;
void* __right_value541 = (void*)0;
struct sDummyHeapNode* result_306;
void* __right_value542 = (void*)0;
char* __dec_obj308;
void* __right_value543 = (void*)0;
struct sNode* __dec_obj309;
struct sDummyHeapNode* __result267__;
    if(    self==(void*)0) {
        __result266__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_306=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "sDummyHeapNode"));
    if(    self!=((void*)0)) {
        result_306->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj308=result_306->sname;
        result_306->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj309=result_306->node;
        result_306->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_306;
    /*i*/come_call_finalizer3(result_306,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
char* __dec_obj310;
struct sNode* __dec_obj311;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj310=self->sname;
            /*G*/ __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj311=self->node;
            if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
struct sGCIncNode* __result269__;
void* __right_value548 = (void*)0;
struct sGCIncNode* result_308;
void* __right_value549 = (void*)0;
char* __dec_obj312;
void* __right_value550 = (void*)0;
struct sNode* __dec_obj313;
struct sGCIncNode* __result270__;
    if(    self==(void*)0) {
        __result269__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    result_308=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "sGCIncNode"));
    if(    self!=((void*)0)) {
        result_308->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj312=result_308->sname;
        result_308->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj313=result_308->node;
        result_308->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result270__ = gComeFunResultObject = __result_obj__ = result_308;
    /*i*/come_call_finalizer3(result_308,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
char* __dec_obj314;
struct sNode* __dec_obj315;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj314=self->sname;
            /*G*/ __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj315=self->node;
            if(__dec_obj315) { __dec_obj315 = come_decrement_ref_count2(__dec_obj315, ((struct sNode*)__dec_obj315)->finalize, ((struct sNode*)__dec_obj315)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNode* __result272__;
void* __right_value555 = (void*)0;
struct sGCDecNode* result_310;
void* __right_value556 = (void*)0;
char* __dec_obj316;
void* __right_value557 = (void*)0;
struct sNode* __dec_obj317;
struct sGCDecNode* __result273__;
    if(    self==(void*)0) {
        __result272__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_310=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "sGCDecNode"));
    if(    self!=((void*)0)) {
        result_310->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj316=result_310->sname;
        result_310->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj317=result_310->node;
        result_310->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_310;
    /*i*/come_call_finalizer3(result_310,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
char* __dec_obj318;
struct sNode* __dec_obj319;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj318=self->sname;
            /*G*/ __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj319=self->node;
            if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNoFreeNode* __result275__;
void* __right_value562 = (void*)0;
struct sGCDecNoFreeNode* result_312;
void* __right_value563 = (void*)0;
char* __dec_obj320;
void* __right_value564 = (void*)0;
struct sNode* __dec_obj321;
struct sGCDecNoFreeNode* __result276__;
    if(    self==(void*)0) {
        __result275__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_312=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "sGCDecNoFreeNode"));
    if(    self!=((void*)0)) {
        result_312->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj320=result_312->sname;
        result_312->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj321=result_312->node;
        result_312->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_312;
    /*i*/come_call_finalizer3(result_312,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static void sIsHeap_finalize(struct sIsHeap* self){
char* __dec_obj322;
struct sType* __dec_obj323;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj322=self->sname;
            /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj323=self->type;
            come_call_finalizer3(__dec_obj323,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__=(void*)0;
struct sIsHeap* __result278__;
void* __right_value570 = (void*)0;
struct sIsHeap* result_317;
void* __right_value571 = (void*)0;
char* __dec_obj324;
void* __right_value572 = (void*)0;
struct sType* __dec_obj325;
struct sIsHeap* __result279__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_317=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "sIsHeap"));
    if(    self!=((void*)0)) {
        result_317->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj324=result_317->sname;
        result_317->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj325=result_317->type;
        result_317->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj325,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_317;
    /*i*/come_call_finalizer3(result_317,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static void sIsPointer_finalize(struct sIsPointer* self){
char* __dec_obj326;
struct sType* __dec_obj327;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj326=self->sname;
            /*G*/ __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj327=self->type;
            come_call_finalizer3(__dec_obj327,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__=(void*)0;
struct sIsPointer* __result281__;
void* __right_value578 = (void*)0;
struct sIsPointer* result_322;
void* __right_value579 = (void*)0;
char* __dec_obj328;
void* __right_value580 = (void*)0;
struct sType* __dec_obj329;
struct sIsPointer* __result282__;
    if(    self==(void*)0) {
        __result281__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_322=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "sIsPointer"));
    if(    self!=((void*)0)) {
        result_322->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj328=result_322->sname;
        result_322->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj329=result_322->type;
        result_322->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj329,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_322;
    /*i*/come_call_finalizer3(result_322,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
char* __dec_obj346;
struct sType* __dec_obj347;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj346=self->sname;
            /*G*/ __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj347=self->type;
            come_call_finalizer3(__dec_obj347,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfNode* __result309__;
void* __right_value627 = (void*)0;
struct sSizeOfNode* result_341;
void* __right_value628 = (void*)0;
char* __dec_obj348;
void* __right_value629 = (void*)0;
struct sType* __dec_obj349;
struct sSizeOfNode* __result310__;
    if(    self==(void*)0) {
        __result309__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    result_341=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "sSizeOfNode"));
    if(    self!=((void*)0)) {
        result_341->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj348=result_341->sname;
        result_341->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj349=result_341->type;
        result_341->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj349,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_341;
    /*i*/come_call_finalizer3(result_341,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
char* __dec_obj350;
struct sNode* __dec_obj351;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj350=self->sname;
            /*G*/ __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj351=self->exp;
            if(__dec_obj351) { __dec_obj351 = come_decrement_ref_count2(__dec_obj351, ((struct sNode*)__dec_obj351)->finalize, ((struct sNode*)__dec_obj351)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfExpNode* __result312__;
void* __right_value634 = (void*)0;
struct sSizeOfExpNode* result_343;
void* __right_value635 = (void*)0;
char* __dec_obj352;
void* __right_value636 = (void*)0;
struct sNode* __dec_obj353;
struct sSizeOfExpNode* __result313__;
    if(    self==(void*)0) {
        __result312__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    result_343=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "sSizeOfExpNode"));
    if(    self!=((void*)0)) {
        result_343->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj352=result_343->sname;
        result_343->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj353=result_343->exp;
        result_343->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj353) { __dec_obj353 = come_decrement_ref_count2(__dec_obj353, ((struct sNode*)__dec_obj353)->finalize, ((struct sNode*)__dec_obj353)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result313__ = gComeFunResultObject = __result_obj__ = result_343;
    /*i*/come_call_finalizer3(result_343,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
char* __dec_obj354;
struct sType* __dec_obj355;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj354=self->sname;
            /*G*/ __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj355=self->type;
            come_call_finalizer3(__dec_obj355,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfNode* __result315__;
void* __right_value642 = (void*)0;
struct sTypeOfNode* result_352;
void* __right_value643 = (void*)0;
char* __dec_obj356;
void* __right_value644 = (void*)0;
struct sType* __dec_obj357;
struct sTypeOfNode* __result316__;
    if(    self==(void*)0) {
        __result315__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    result_352=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "sTypeOfNode"));
    if(    self!=((void*)0)) {
        result_352->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj356=result_352->sname;
        result_352->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj357=result_352->type;
        result_352->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj357,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result316__ = gComeFunResultObject = __result_obj__ = result_352;
    /*i*/come_call_finalizer3(result_352,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
char* __dec_obj358;
struct sNode* __dec_obj359;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj358=self->sname;
            /*G*/ __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj359=self->exp;
            if(__dec_obj359) { __dec_obj359 = come_decrement_ref_count2(__dec_obj359, ((struct sNode*)__dec_obj359)->finalize, ((struct sNode*)__dec_obj359)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfExpNode* __result318__;
void* __right_value649 = (void*)0;
struct sTypeOfExpNode* result_354;
void* __right_value650 = (void*)0;
char* __dec_obj360;
void* __right_value651 = (void*)0;
struct sNode* __dec_obj361;
struct sTypeOfExpNode* __result319__;
    if(    self==(void*)0) {
        __result318__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    result_354=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "sTypeOfExpNode"));
    if(    self!=((void*)0)) {
        result_354->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj360=result_354->sname;
        result_354->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj361=result_354->exp;
        result_354->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj361) { __dec_obj361 = come_decrement_ref_count2(__dec_obj361, ((struct sNode*)__dec_obj361)->finalize, ((struct sNode*)__dec_obj361)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result319__ = gComeFunResultObject = __result_obj__ = result_354;
    /*i*/come_call_finalizer3(result_354,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
char* __dec_obj362;
struct sType* __dec_obj363;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj362=self->sname;
            /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj363=self->type;
            come_call_finalizer3(__dec_obj363,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode* __result321__;
void* __right_value657 = (void*)0;
struct sAlignOfNode* result_362;
void* __right_value658 = (void*)0;
char* __dec_obj364;
void* __right_value659 = (void*)0;
struct sType* __dec_obj365;
struct sAlignOfNode* __result322__;
    if(    self==(void*)0) {
        __result321__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    result_362=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "sAlignOfNode"));
    if(    self!=((void*)0)) {
        result_362->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj364=result_362->sname;
        result_362->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj365=result_362->type;
        result_362->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj365,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result322__ = gComeFunResultObject = __result_obj__ = result_362;
    /*i*/come_call_finalizer3(result_362,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
char* __dec_obj366;
struct sNode* __dec_obj367;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj366=self->sname;
            /*G*/ __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj367=self->exp;
            if(__dec_obj367) { __dec_obj367 = come_decrement_ref_count2(__dec_obj367, ((struct sNode*)__dec_obj367)->finalize, ((struct sNode*)__dec_obj367)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode* __result324__;
void* __right_value664 = (void*)0;
struct sAlignOfExpNode* result_364;
void* __right_value665 = (void*)0;
char* __dec_obj368;
void* __right_value666 = (void*)0;
struct sNode* __dec_obj369;
struct sAlignOfExpNode* __result325__;
    if(    self==(void*)0) {
        __result324__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    result_364=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "sAlignOfExpNode"));
    if(    self!=((void*)0)) {
        result_364->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj368=result_364->sname;
        result_364->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj369=result_364->exp;
        result_364->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj369) { __dec_obj369 = come_decrement_ref_count2(__dec_obj369, ((struct sNode*)__dec_obj369)->finalize, ((struct sNode*)__dec_obj369)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result325__ = gComeFunResultObject = __result_obj__ = result_364;
    /*i*/come_call_finalizer3(result_364,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
char* __dec_obj370;
struct sType* __dec_obj371;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj370=self->sname;
            /*G*/ __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj371=self->type;
            come_call_finalizer3(__dec_obj371,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode2* __result327__;
void* __right_value672 = (void*)0;
struct sAlignOfNode2* result_372;
void* __right_value673 = (void*)0;
char* __dec_obj372;
void* __right_value674 = (void*)0;
struct sType* __dec_obj373;
struct sAlignOfNode2* __result328__;
    if(    self==(void*)0) {
        __result327__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    result_372=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "sAlignOfNode2"));
    if(    self!=((void*)0)) {
        result_372->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj372=result_372->sname;
        result_372->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj373=result_372->type;
        result_372->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj373,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result328__ = gComeFunResultObject = __result_obj__ = result_372;
    /*i*/come_call_finalizer3(result_372,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
char* __dec_obj374;
struct sNode* __dec_obj375;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj374=self->sname;
            /*G*/ __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj375=self->exp;
            if(__dec_obj375) { __dec_obj375 = come_decrement_ref_count2(__dec_obj375, ((struct sNode*)__dec_obj375)->finalize, ((struct sNode*)__dec_obj375)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode2* __result330__;
void* __right_value679 = (void*)0;
struct sAlignOfExpNode2* result_374;
void* __right_value680 = (void*)0;
char* __dec_obj376;
void* __right_value681 = (void*)0;
struct sNode* __dec_obj377;
struct sAlignOfExpNode2* __result331__;
    if(    self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_374=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "sAlignOfExpNode2"));
    if(    self!=((void*)0)) {
        result_374->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj376=result_374->sname;
        result_374->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj377=result_374->exp;
        result_374->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj377) { __dec_obj377 = come_decrement_ref_count2(__dec_obj377, ((struct sNode*)__dec_obj377)->finalize, ((struct sNode*)__dec_obj377)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_374;
    /*i*/come_call_finalizer3(result_374,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
char* __dec_obj378;
struct sType* __dec_obj379;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj378=self->sname;
            /*G*/ __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj379=self->type;
            come_call_finalizer3(__dec_obj379,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsNode* __result333__;
void* __right_value687 = (void*)0;
struct sAlignAsNode* result_382;
void* __right_value688 = (void*)0;
char* __dec_obj380;
void* __right_value689 = (void*)0;
struct sType* __dec_obj381;
struct sAlignAsNode* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_382=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "sAlignAsNode"));
    if(    self!=((void*)0)) {
        result_382->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj380=result_382->sname;
        result_382->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj380 = come_decrement_ref_count2(__dec_obj380, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj381=result_382->type;
        result_382->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj381,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_382;
    /*i*/come_call_finalizer3(result_382,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
char* __dec_obj382;
struct sNode* __dec_obj383;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj382=self->sname;
            /*G*/ __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj383=self->exp;
            if(__dec_obj383) { __dec_obj383 = come_decrement_ref_count2(__dec_obj383, ((struct sNode*)__dec_obj383)->finalize, ((struct sNode*)__dec_obj383)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsExpNode* __result336__;
void* __right_value694 = (void*)0;
struct sAlignAsExpNode* result_384;
void* __right_value695 = (void*)0;
char* __dec_obj384;
void* __right_value696 = (void*)0;
struct sNode* __dec_obj385;
struct sAlignAsExpNode* __result337__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_384=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "sAlignAsExpNode"));
    if(    self!=((void*)0)) {
        result_384->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj384=result_384->sname;
        result_384->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj385=result_384->exp;
        result_384->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj385) { __dec_obj385 = come_decrement_ref_count2(__dec_obj385, ((struct sNode*)__dec_obj385)->finalize, ((struct sNode*)__dec_obj385)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_384;
    /*i*/come_call_finalizer3(result_384,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct sNode* _inf_value40;
struct sNothingNode* _inf_obj_value40;
void* __right_value703 = (void*)0;
struct sNode* __result342__;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sNode* _inf_value41;
struct sNothingNode* _inf_obj_value41;
void* __right_value708 = (void*)0;
struct sNode* __result345__;
_Bool come_c_387;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sNode* _inf_value42;
struct sNothingNode* _inf_obj_value42;
void* __right_value713 = (void*)0;
struct sNode* __result348__;
void* __right_value714 = (void*)0;
struct sNode* __result349__;
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
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1858, "struct sNode");
            _inf_obj_value40=come_increment_ref_count(((struct sNothingNode*)(__right_value700=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1858, "sNothingNode")),info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sNothingNode_finalize;
            _inf_value40->clone=(void*)sNothingNode_clone;
            _inf_value40->compile=(void*)sNothingNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sNothingNode_kind;
            __result342__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value703=_inf_value40));
            /*g*/come_call_finalizer3(__right_value700,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value703) { __right_value703 = come_decrement_ref_count2(__right_value703, ((struct sNode*)__right_value703)->finalize, ((struct sNode*)__right_value703)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result342__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1866, "struct sNode");
            _inf_obj_value41=come_increment_ref_count(((struct sNothingNode*)(__right_value705=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1866, "sNothingNode")),info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sNothingNode_finalize;
            _inf_value41->clone=(void*)sNothingNode_clone;
            _inf_value41->compile=(void*)sNothingNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sNothingNode_kind;
            __result345__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value708=_inf_value41));
            /*g*/come_call_finalizer3(__right_value705,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value708) { __right_value708 = come_decrement_ref_count2(__right_value708, ((struct sNode*)__right_value708)->finalize, ((struct sNode*)__right_value708)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result345__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_387=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_387;
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
        _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1904, "struct sNode");
        _inf_obj_value42=come_increment_ref_count(((struct sNothingNode*)(__right_value710=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1904, "sNothingNode")),info))));
        _inf_value42->_protocol_obj=_inf_obj_value42;
        _inf_value42->finalize=(void*)sNothingNode_finalize;
        _inf_value42->clone=(void*)sNothingNode_clone;
        _inf_value42->compile=(void*)sNothingNode_compile;
        _inf_value42->sline=(void*)sNodeBase_sline;
        _inf_value42->sname=(void*)sNodeBase_sname;
        _inf_value42->terminated=(void*)sNodeBase_terminated;
        _inf_value42->kind=(void*)sNothingNode_kind;
        __result348__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value713=_inf_value42));
        /*g*/come_call_finalizer3(__right_value710,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value713) { __right_value713 = come_decrement_ref_count2(__right_value713, ((struct sNode*)__right_value713)->finalize, ((struct sNode*)__right_value713)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value714=top_level_v93(buf,head,head_sline,info)));
    if(__right_value714) { __right_value714 = come_decrement_ref_count2(__right_value714, ((struct sNode*)__right_value714)->finalize, ((struct sNode*)__right_value714)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static void sNothingNode_finalize(struct sNothingNode* self){
char* __dec_obj390;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj390=self->sname;
            /*G*/ __dec_obj390 = come_decrement_ref_count2(__dec_obj390, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__=(void*)0;
struct sNothingNode* __result346__;
void* __right_value711 = (void*)0;
struct sNothingNode* result_388;
void* __right_value712 = (void*)0;
char* __dec_obj391;
struct sNothingNode* __result347__;
    if(    self==(void*)0) {
        __result346__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    result_388=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "sNothingNode"));
    if(    self!=((void*)0)) {
        result_388->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj391=result_388->sname;
        result_388->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj391 = come_decrement_ref_count2(__dec_obj391, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result347__ = gComeFunResultObject = __result_obj__ = result_388;
    /*i*/come_call_finalizer3(result_388,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value715 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var14;
struct sType* type3_389;
char* name2_390;
_Bool err_391;
void* __right_value716 = (void*)0;
struct sType* inf_type_392;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sNode* _inf_value43;
struct sImplementsNode* _inf_obj_value43;
void* __right_value723 = (void*)0;
struct sNode* __result352__;
void* __right_value724 = (void*)0;
struct sNode* __result353__;
    if(    parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(__right_value715=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_389=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
        name2_390=(char*)come_increment_ref_count(multiple_assign_var14->v2);
        err_391=multiple_assign_var14->v3;
        /*g*/come_call_finalizer3(__right_value715,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_391) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_392=(struct sType*)come_increment_ref_count(sType_clone(type3_389));
        _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1924, "struct sNode");
        _inf_obj_value43=come_increment_ref_count(((struct sImplementsNode*)(__right_value718=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1924, "sImplementsNode")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_392),info))));
        _inf_value43->_protocol_obj=_inf_obj_value43;
        _inf_value43->finalize=(void*)sImplementsNode_finalize;
        _inf_value43->clone=(void*)sImplementsNode_clone;
        _inf_value43->compile=(void*)sImplementsNode_compile;
        _inf_value43->sline=(void*)sNodeBase_sline;
        _inf_value43->sname=(void*)sNodeBase_sname;
        _inf_value43->terminated=(void*)sNodeBase_terminated;
        _inf_value43->kind=(void*)sImplementsNode_kind;
        __result352__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value723=_inf_value43));
        /*i*/come_call_finalizer3(type3_389,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_390 = come_decrement_ref_count2(name2_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(inf_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value718,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value723) { __right_value723 = come_decrement_ref_count2(__right_value723, ((struct sNode*)__right_value723)->finalize, ((struct sNode*)__right_value723)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result352__;
        /*i*/come_call_finalizer3(type3_389,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_390 = come_decrement_ref_count2(name2_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(inf_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result353__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value724=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value724) { __right_value724 = come_decrement_ref_count2(__right_value724, ((struct sNode*)__right_value724)->finalize, ((struct sNode*)__right_value724)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
char* __dec_obj392;
struct sNode* __dec_obj393;
struct sType* __dec_obj394;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj392=self->sname;
            /*G*/ __dec_obj392 = come_decrement_ref_count2(__dec_obj392, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj393=self->obj_exp;
            if(__dec_obj393) { __dec_obj393 = come_decrement_ref_count2(__dec_obj393, ((struct sNode*)__dec_obj393)->finalize, ((struct sNode*)__dec_obj393)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        if(        self->inf_type==gComeFunResultObject) {
            __dec_obj394=self->inf_type;
            come_call_finalizer3(__dec_obj394,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
struct sImplementsNode* __result350__;
void* __right_value719 = (void*)0;
struct sImplementsNode* result_393;
void* __right_value720 = (void*)0;
char* __dec_obj395;
void* __right_value721 = (void*)0;
struct sNode* __dec_obj396;
void* __right_value722 = (void*)0;
struct sType* __dec_obj397;
struct sImplementsNode* __result351__;
    if(    self==(void*)0) {
        __result350__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    result_393=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "sImplementsNode"));
    if(    self!=((void*)0)) {
        result_393->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj395=result_393->sname;
        result_393->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj395 = come_decrement_ref_count2(__dec_obj395, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj396=result_393->obj_exp;
        result_393->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
        if(__dec_obj396) { __dec_obj396 = come_decrement_ref_count2(__dec_obj396, ((struct sNode*)__dec_obj396)->finalize, ((struct sNode*)__dec_obj396)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj397=result_393->inf_type;
        result_393->inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
        come_call_finalizer3(__dec_obj397,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result351__ = gComeFunResultObject = __result_obj__ = result_393;
    /*i*/come_call_finalizer3(result_393,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

