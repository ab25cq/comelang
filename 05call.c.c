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
struct integer
{
    long value;
};
struct floating
{
    double value;
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
struct sReturnNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sCurrentNode2
{
    int sline;
    char* sname;
};
struct sLineNode
{
    int sline;
    char* sname;
};
struct sSNameNode
{
    int sline;
    char* sname;
};
struct sFuncNode
{
    int sline;
    char* sname;
};
struct sWildCard
{
    int sline;
    char* sname;
};
struct sCallerFuncNode
{
    int sline;
    char* sname;
};
struct sCallerLineNode
{
    int sline;
    char* sname;
};
struct sCallerSNameNode
{
    int sline;
    char* sname;
};
struct sFunCallNode
{
    int sline;
    char* sname;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    struct list$1sTypeph* method_generics_types;
    struct buffer* method_block;
    int method_block_sline;
    _Bool throw_or_rescue;
};
struct sLambdaCall
{
    int sline;
    char* sname;
    struct sNode* node;
    struct list$1tuple2$2charphsNodephph* params;
};
struct sVarArgTypeName
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
_Bool voidp_equals(void* self, void* right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short short self, short short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short short self, short short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(void* self, void* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
_Bool voidp_operator_not_equals(void* self, void* right);
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
struct integer* bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
char* integer_to_string(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
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
struct floating* floating_initialize(struct floating* self, double value);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
double floating_to_double(struct floating* self);
char* floating_to_string(struct floating* self);
_Bool floating_equals(struct floating* self, struct floating* right);
int integer_compare(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
double floating_operator_add(struct floating* left, struct floating* right);
double floating_operator_sub(struct floating* left, struct floating* right);
double floating_operator_mult(struct floating* left, struct floating* right);
double floating_operator_div(struct floating* left, struct floating* right);
double floating_operator_gteq(struct floating* left, struct floating* right);
double floating_operator_lteq(struct floating* left, struct floating* right);
double floating_operator_lt(struct floating* left, struct floating* right);
double floating_operator_gt(struct floating* left, struct floating* right);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
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
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
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
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
static void sFuncNode_finalize(struct sFuncNode* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static void sWildCard_finalize(struct sWildCard* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static void sLineNode_finalize(struct sLineNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static void sSNameNode_finalize(struct sSNameNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
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
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2419, "buffer"))));
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
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2426, "buffer"))));
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
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2435, "buffer"))));
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
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2442, "buffer"))));
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
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2449, "buffer"))));
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
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2456, "buffer"))));
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
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2463, "buffer"))));
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
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2763, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2768, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2773, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2778, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2783, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2816, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2818, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
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
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2823, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2825, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
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
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2830, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2832, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
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
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2837, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2839, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
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
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2844, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2846, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
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
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2851, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2853, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
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
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2858, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2860, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
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
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2865, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2870, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2875, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2880, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2885, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2890, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2895, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2900, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2905, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2910, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2915, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2920, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2925, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2930, "vector$1double")),len,self)));
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1017, "char")));
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1017, "char*")));
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
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "./comelang.h", 1017, "short")));
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1017, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1017, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1017, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1017, "double")));
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











struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
struct sNode* __dec_obj16;
void* __right_value117 = (void*)0;
char* __dec_obj17;
struct sReturnNode* __result65__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj17=self->value_source;
    self->value_source=(char*)come_increment_ref_count(string_clone(value_source));
    /*G*/ __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=__builtin_string("sReturnNode")));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_66;
void* __right_value154 = (void*)0;
struct sType* result_type_67;
void* __right_value155 = (void*)0;
struct sType* result_type2_98;
struct sType* result_type3_99;
void* __right_value156 = (void*)0;
_Bool _if_conditional1;
void* __right_value157 = (void*)0;
struct sNode* __dec_obj65;
_Bool __result85__;
void* __right_value158 = (void*)0;
struct CVALUE* come_value_100;
void* __right_value159 = (void*)0;
struct sType* come_value_type_101;
void* __right_value160 = (void*)0;
struct sType* __dec_obj66;
void* __right_value161 = (void*)0;
char* var_name_103;
int num_result_stack_104;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __if_result__0_105 = (void*)0;
struct list$1sVarph* o2_saved_106;
struct sVar* it_109;
struct list$1sVarph* __dec_obj72;
void* __right_value164 = (void*)0;
struct sFun* come_fun_116;
void* __if_result__1_117 = (void*)0;
struct list$1sVarph* o2_saved_118;
struct sVar* it_119;
struct list$1sVarph* __dec_obj76;
void* __right_value165 = (void*)0;
    if(    self->value) {
        come_fun_66=info->come_fun;
        result_type_67=(struct sType*)come_increment_ref_count(sType_clone(come_fun_66->mResultType));
        result_type2_98=(struct sType*)come_increment_ref_count(solve_generics(result_type_67,info->generics_type,info));
        result_type3_99=result_type2_98->mNoSolvedGenericsType->v1;
        if(        result_type2_98->mNoSolvedGenericsType->v1) {
            result_type3_99=result_type2_98->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_99=result_type2_98;
        }
        if(        result_type_67->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value156=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj65=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        if(        !node_compile(self->value,info)) {
            __result85__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_67,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_98,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result85__;
        }
        come_value_100=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_101=(struct sType*)come_increment_ref_count(solve_generics(come_value_100->type,info->generics_type,info));
        __dec_obj66=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_100->type));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_100->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_66->mBlock,info,come_value_100->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_100->c_value);
        }
        else {
            static int num_result_102=0;
            var_name_103=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_102));
            num_result_stack_104=num_result_102;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_98->mClass->mName)>strlen("tuple")&&memcmp(result_type2_98->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_98,come_value_type_101,come_value_100,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value162=make_define_var(result_type2_98,var_name_103,(_Bool)0,info))));
                __right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_103,come_value_100->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value163=make_define_var(result_type2_98,var_name_103,(_Bool)0,info))));
                __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_103,come_value_100->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_66->mBlock,info,come_value_100->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_106=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_109=list$1sVarph_begin((o2_saved_106));                    !list$1sVarph_end((o2_saved_106));                    it_109=list$1sVarph_next((o2_saved_106))                    ){
                        free_object(it_109->mType,it_109->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_106,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj72=info->match_it_var;
                    __if_result__0_105=(void*)(come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj72,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(__if_result__0_105,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value164=xsprintf("come_heap_final();\n"))));
                __right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_104);
            var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_67,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_98,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_type_101,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_116=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_116->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_118=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_119=list$1sVarph_begin((o2_saved_118));                !list$1sVarph_end((o2_saved_118));                it_119=list$1sVarph_next((o2_saved_118))                ){
                    free_object(it_119->mType,it_119->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                /*i*/come_call_finalizer3(o2_saved_118,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj76=info->match_it_var;
                __if_result__1_117=(void*)(come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj76,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(__if_result__1_117,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value165=xsprintf("come_heap_final();\n"))));
            __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result67__;
void* __right_value119 = (void*)0;
struct sType* result_68;
void* __right_value122 = (void*)0;
struct tuple1$1sTypeph* __dec_obj43;
void* __right_value123 = (void*)0;
struct tuple1$1sTypeph* __dec_obj44;
void* __right_value124 = (void*)0;
struct tuple1$1sTypeph* __dec_obj45;
void* __right_value125 = (void*)0;
char* __dec_obj46;
void* __right_value132 = (void*)0;
struct list$1sTypeph* __dec_obj50;
void* __right_value140 = (void*)0;
struct list$1sNodeph* __dec_obj54;
void* __right_value141 = (void*)0;
struct list$1sTypeph* __dec_obj55;
void* __right_value148 = (void*)0;
struct list$1charph* __dec_obj59;
void* __right_value149 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value150 = (void*)0;
struct sNode* __dec_obj61;
void* __right_value151 = (void*)0;
struct sNode* __dec_obj62;
void* __right_value152 = (void*)0;
char* __dec_obj63;
void* __right_value153 = (void*)0;
char* __dec_obj64;
struct sType* __result84__;
    if(    self==(void*)0) {
        __result67__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result67__;
    }
    result_68=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_68->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj43=result_68->mNoSolvedGenericsType;
        result_68->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj44=result_68->mOriginalLoadVarType;
        result_68->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj44,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj45=result_68->mNoExceptionType;
        result_68->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj45,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj46=result_68->mGenericsName;
        result_68->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj50=result_68->mGenericsTypes;
        result_68->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj54=result_68->mArrayNum;
        result_68->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj54,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj55=result_68->mParamTypes;
        result_68->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj55,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj59=result_68->mParamNames;
        result_68->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj59,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj60=result_68->mResultType;
        result_68->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj61=result_68->mAlignas;
        result_68->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_68->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_68->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_68->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_68->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_68->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_68->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_68->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_68->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_68->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_68->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_68->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_68->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_68->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_68->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_68->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_68->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_68->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_68->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_68->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_68->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj62=result_68->mSizeNum;
        result_68->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_68->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_68->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj63=result_68->mOriginalTypeName;
        result_68->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_68->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_68->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_68->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_68->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_68->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_68->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_68->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj64=result_68->mAsmName;
        result_68->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_68->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_68->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_68->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_68->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_68->mOriginIsArray=self->mOriginIsArray;
    }
    __result84__ = gComeFunResultObject = __result_obj__ = result_68;
    /*i*/come_call_finalizer3(result_68,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result68__;
void* __right_value120 = (void*)0;
struct tuple1$1sTypeph* result_69;
void* __right_value121 = (void*)0;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result69__;
    if(    self==(void*)0) {
        __result68__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_69=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj21=result_69->v1;
        result_69->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result69__ = gComeFunResultObject = __result_obj__ = result_69;
    /*i*/come_call_finalizer3(result_69,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj22;
struct tuple1$1sTypeph* __dec_obj24;
struct tuple1$1sTypeph* __dec_obj26;
char* __dec_obj28;
struct list$1sTypeph* __dec_obj29;
struct list$1sNodeph* __dec_obj31;
struct list$1sTypeph* __dec_obj33;
struct list$1charph* __dec_obj34;
struct tuple1$1sTypeph* __dec_obj36;
struct sNode* __dec_obj38;
struct sNode* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj22=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj24=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj26=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj26,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj28=self->mGenericsName;
            /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj29=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj31=self->mArrayNum;
            come_call_finalizer3(__dec_obj31,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj33=self->mParamTypes;
            come_call_finalizer3(__dec_obj33,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj34=self->mParamNames;
            come_call_finalizer3(__dec_obj34,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj36=self->mResultType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj38=self->mAlignas;
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj39=self->mSizeNum;
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj40=self->mOriginalTypeName;
            /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj41=self->mAsmName;
            /*G*/ __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_70;
struct list_item$1sTypeph* prev_it_71;
    it_70=self->head;
    while(it_70!=((void*)0)) {
        prev_it_71=it_70;
        it_70=it_70->next;
        /*i*/come_call_finalizer3(prev_it_71,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj30;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj30=self->item;
            come_call_finalizer3(__dec_obj30,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_72;
struct list_item$1sTypeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_74;
struct list_item$1sNodeph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj32;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj32=self->item;
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_76;
struct list_item$1sNodeph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_78;
struct list_item$1charph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*i*/come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj35;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj35=self->item;
            /*G*/ __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_80;
struct list_item$1charph* prev_it_81;
    it_80=self->head;
    while(it_80!=((void*)0)) {
        prev_it_81=it_80;
        it_80=it_80->next;
        /*i*/come_call_finalizer3(prev_it_81,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj37;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj37=self->v1;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj42;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj42=self->v1;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct list$1sTypeph* result_82;
struct list_item$1sTypeph* it_83;
void* __right_value131 = (void*)0;
struct list$1sTypeph* __result73__;
    if(    self==((void*)0)) {
        __result70__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_82=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 139, "list$1sTypeph"))));
    it_83=self->head;
    while(it_83!=((void*)0)) {
        list$1sTypeph_add(result_82,(struct sType*)come_increment_ref_count(sType_clone(it_83->item)));
        it_83=it_83->next;
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_82;
    /*i*/come_call_finalizer3(result_82,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj47;
void* __right_value129 = (void*)0;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj48;
void* __right_value130 = (void*)0;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj49;
struct list$1sTypeph* __result72__;
    if(    self->len==0) {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 153, "list_item$1sTypeph"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj47=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_84;
        self->head=litem_84;
    }
    else if(    self->len==1) {
        litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value129=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 163, "list_item$1sTypeph"))));
        litem_85->prev=self->head;
        litem_85->next=((void*)0);
        __dec_obj48=litem_85->item;
        litem_85->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_85;
        self->head->next=litem_85;
    }
    else {
        litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 173, "list_item$1sTypeph"))));
        litem_86->prev=self->tail;
        litem_86->next=((void*)0);
        __dec_obj49=litem_86->item;
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_86;
        self->tail=litem_86;
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
struct list$1sNodeph* result_87;
struct list_item$1sNodeph* it_88;
void* __right_value139 = (void*)0;
struct list$1sNodeph* __result79__;
    if(    self==((void*)0)) {
        __result74__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    result_87=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 139, "list$1sNodeph"))));
    it_88=self->head;
    while(it_88!=((void*)0)) {
        list$1sNodeph_add(result_87,(struct sNode*)come_increment_ref_count(sNode_clone(it_88->item)));
        it_88=it_88->next;
    }
    __result79__ = gComeFunResultObject = __result_obj__ = result_87;
    /*i*/come_call_finalizer3(result_87,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj51;
void* __right_value136 = (void*)0;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj52;
void* __right_value137 = (void*)0;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj53;
struct list$1sNodeph* __result76__;
    if(    self->len==0) {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value135=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 153, "list_item$1sNodeph"))));
        litem_89->prev=((void*)0);
        litem_89->next=((void*)0);
        __dec_obj51=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_89;
        self->head=litem_89;
    }
    else if(    self->len==1) {
        litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value136=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 163, "list_item$1sNodeph"))));
        litem_90->prev=self->head;
        litem_90->next=((void*)0);
        __dec_obj52=litem_90->item;
        litem_90->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_90;
        self->head->next=litem_90;
    }
    else {
        litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value137=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 173, "list_item$1sNodeph"))));
        litem_91->prev=self->tail;
        litem_91->next=((void*)0);
        __dec_obj53=litem_91->item;
        litem_91->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_91;
        self->tail=litem_91;
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
struct sNode* result_92;
struct sNode* __result78__;
    if(    self==(void*)0) {
        __result77__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    result_92=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_92->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_92->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_92->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_92->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_92->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_92->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_92->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_92->kind=self->kind;
    }
    __result78__ = gComeFunResultObject = __result_obj__ = result_92;
    if(result_92) { result_92 = come_decrement_ref_count2(result_92, ((struct sNode*)result_92)->finalize, ((struct sNode*)result_92)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result80__;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct list$1charph* result_93;
struct list_item$1charph* it_94;
void* __right_value147 = (void*)0;
struct list$1charph* __result83__;
    if(    self==((void*)0)) {
        __result80__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    result_93=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 139, "list$1charph"))));
    it_94=self->head;
    while(it_94!=((void*)0)) {
        list$1charph_add(result_93,(char*)come_increment_ref_count(string_clone(it_94->item)));
        it_94=it_94->next;
    }
    __result83__ = gComeFunResultObject = __result_obj__ = result_93;
    /*i*/come_call_finalizer3(result_93,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1charph* litem_95;
char* __dec_obj56;
void* __right_value145 = (void*)0;
struct list_item$1charph* litem_96;
char* __dec_obj57;
void* __right_value146 = (void*)0;
struct list_item$1charph* litem_97;
char* __dec_obj58;
struct list$1charph* __result82__;
    if(    self->len==0) {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 153, "list_item$1charph"))));
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj56=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_95;
        self->head=litem_95;
    }
    else if(    self->len==1) {
        litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 163, "list_item$1charph"))));
        litem_96->prev=self->head;
        litem_96->next=((void*)0);
        __dec_obj57=litem_96->item;
        litem_96->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_96;
        self->head->next=litem_96;
    }
    else {
        litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 173, "list_item$1charph"))));
        litem_97->prev=self->tail;
        litem_97->next=((void*)0);
        __dec_obj58=litem_97->item;
        litem_97->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_97;
        self->tail=litem_97;
    }
    self->len++;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_107;
struct sVar* __result86__;
struct sVar* __result87__;
struct sVar* result_108;
struct sVar* __result88__;
result_107 = (void*)0;
result_108 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_107,0,sizeof(struct sVar*));
        __result86__ = gComeFunResultObject = __result_obj__ = result_107;
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    self->it=self->head;
    if(    self->it) {
        __result87__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result87__;
    }
    memset(&result_108,0,sizeof(struct sVar*));
    __result88__ = gComeFunResultObject = __result_obj__ = result_108;
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_110;
struct sVar* __result89__;
struct sVar* __result90__;
struct sVar* result_111;
struct sVar* __result91__;
result_110 = (void*)0;
result_111 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_110,0,sizeof(struct sVar*));
        __result89__ = gComeFunResultObject = __result_obj__ = result_110;
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result90__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    memset(&result_111,0,sizeof(struct sVar*));
    __result91__ = gComeFunResultObject = __result_obj__ = result_111;
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_112;
struct list_item$1sVarph* prev_it_113;
    it_112=self->head;
    while(it_112!=((void*)0)) {
        prev_it_113=it_112;
        it_112=it_112->next;
        /*i*/come_call_finalizer3(prev_it_113,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj67;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj67=self->item;
            come_call_finalizer3(__dec_obj67,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj68;
char* __dec_obj69;
struct sType* __dec_obj70;
char* __dec_obj71;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj68=self->mName;
            /*G*/ __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj69=self->mCValueName;
            /*G*/ __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj70=self->mType;
            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj71=self->mFunName;
            /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_114;
struct list_item$1sVarph* prev_it_115;
    it_114=self->head;
    while(it_114!=((void*)0)) {
        prev_it_115=it_114;
        it_114=it_114->next;
        /*i*/come_call_finalizer3(prev_it_115,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj73;
struct sType* __dec_obj74;
char* __dec_obj75;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj73=self->c_value;
            /*G*/ __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj74=self->type;
            come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj75=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value166 = (void*)0;
struct sCurrentNode2* __result92__;
    ((struct sNodeBase*)(__right_value166=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value166,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
char* __result93__;
    __result93__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string(self->sname)));
    __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value168 = (void*)0;
char* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value168=__builtin_string("sCurrentNode")));
    __right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value169 = (void*)0;
char* class_name_120;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sClass* current_stack_121;
struct sVarTable* vtable_122;
struct map$2charphsVarph* o2_saved_123;
char* it_126;
char* key_129;
struct sVar* value_130;
void* __right_value172 = (void*)0;
struct sType* type2_134;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct tuple2$2charphsTypeph* item_135;
void* __right_value176 = (void*)0;
struct sType* type3_136;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct tuple2$2charphsTypeph* item2_139;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct map$2charphsVarph* o2_saved_191;
char* it_192;
char* key_193;
struct sVar* value_194;
void* __right_value191 = (void*)0;
struct sType* type2_195;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct tuple2$2charphsTypeph* item_196;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct CVALUE* come_value_197;
void* __right_value196 = (void*)0;
char* __dec_obj100;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct sType* __dec_obj101;
_Bool __result132__;
    info->current_stack_num++;
    class_name_120=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_121=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 432, "sClass")),class_name_120,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_122=info->lv_table;
    while(vtable_122) {
        for(        o2_saved_123=(struct map$2charphsVarph*)come_increment_ref_count((vtable_122->mVars)),it_126=map$2charphsVarph_begin((o2_saved_123));        !map$2charphsVarph_end((o2_saved_123));        it_126=map$2charphsVarph_next((o2_saved_123))        ){
            key_129=it_126;
            value_130=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_122->mVars,key_129), "common.h", 439, 0));
            type2_134=(struct sType*)come_increment_ref_count(sType_clone(value_130->mType));
            type2_134->mPointerNum++;
            item_135=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 445, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_130->mCValueName)),(struct sType*)come_increment_ref_count(type2_134)));
            if(            value_130->mCValueName!=((void*)0)) {
                if(                strcmp(value_130->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_130->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_130->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_130->mType->mClass->mName,"va_list")||string_operator_equals(value_130->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_134->mArrayNum)==1) {
                    type3_136=(struct sType*)come_increment_ref_count(sType_clone(type2_134));
                    list$1sNodeph_reset(type3_136->mArrayNum);
                    type3_136->mPointerNum++;
                    type3_136->mOriginIsArray=(_Bool)1;
                    item2_139=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 465, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_130->mCValueName)),(struct sType*)come_increment_ref_count(type3_136)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_121->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_139)));
                    value_130->mType->mOriginIsArray=(_Bool)1;
                    /*i*/come_call_finalizer3(type3_136,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(item2_139,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_121->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_135)));
                }
            }
            /*i*/come_call_finalizer3(type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_135,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_123,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_122=vtable_122->mParent;
    }
    output_struct(current_stack_121,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_120),(struct sClass*)come_increment_ref_count(current_stack_121));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_120,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_120);
    vtable_122=info->lv_table;
    while(vtable_122) {
        for(        o2_saved_191=(struct map$2charphsVarph*)come_increment_ref_count((vtable_122->mVars)),it_192=map$2charphsVarph_begin((o2_saved_191));        !map$2charphsVarph_end((o2_saved_191));        it_192=map$2charphsVarph_next((o2_saved_191))        ){
            key_193=it_192;
            value_194=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_122->mVars,key_193), "common.h", 490, 1));
            type2_195=(struct sType*)come_increment_ref_count(sType_clone(value_194->mType));
            item_196=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 494, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_194->mCValueName),(struct sType*)come_increment_ref_count(type2_195)));
            if(            value_194->mCValueName!=((void*)0)) {
                if(                strcmp(value_194->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_194->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_194->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_194->mType->mClass->mName,"va_list")||string_operator_equals(value_194->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_195->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_194->mCValueName,value_194->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_194->mCValueName,value_194->mCValueName);
                    }
                }
            }
            /*i*/come_call_finalizer3(type2_195,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_196,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_191,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_122=vtable_122->mParent;
    }
    come_value_197=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 523, "CVALUE"))));
    __dec_obj100=come_value_197->c_value;
    come_value_197->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    /*G*/ __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj101=come_value_197->type;
    come_value_197->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 526, "sType")),class_name_120,(_Bool)0,info));
    come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_197->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_197->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_197));
    __result132__ = (_Bool)1;
    class_name_120 = come_decrement_ref_count2(class_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(current_stack_121,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result132__;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_124;
char* __result95__;
char* __result96__;
char* result_125;
char* __result97__;
result_124 = (void*)0;
result_125 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_124,0,sizeof(char*));
        __result95__ = gComeFunResultObject = __result_obj__ = result_124;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result96__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    memset(&result_125,0,sizeof(char*));
    __result97__ = gComeFunResultObject = __result_obj__ = result_125;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_127;
char* __result98__;
char* __result99__;
char* result_128;
char* __result100__;
result_127 = (void*)0;
result_128 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_127,0,sizeof(char*));
        __result98__ = gComeFunResultObject = __result_obj__ = result_127;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result99__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    memset(&result_128,0,sizeof(char*));
    __result100__ = gComeFunResultObject = __result_obj__ = result_128;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_131;
unsigned int hash_132;
unsigned int it_133;
struct sVar* __result101__;
struct sVar* __result102__;
struct sVar* __result103__;
struct sVar* __result104__;
default_value_131 = (void*)0;
    memset(&default_value_131,0,sizeof(struct sVar*));
    hash_132=string_get_hash_key(((char*)key))%self->size;
    it_133=hash_132;
    while((_Bool)1) {
        if(        self->item_existance[it_133]) {
            if(            string_equals(self->keys[it_133],key)) {
                __result101__ = gComeFunResultObject = __result_obj__ = self->items[it_133];
                /*i*/come_call_finalizer3(default_value_131,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result101__;
            }
            it_133++;
            if(            it_133>=self->size) {
                it_133=0;
            }
            else if(            it_133==hash_132) {
                __result102__ = gComeFunResultObject = __result_obj__ = default_value_131;
                /*i*/come_call_finalizer3(default_value_131,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result102__;
            }
        }
        else {
            __result103__ = gComeFunResultObject = __result_obj__ = default_value_131;
            /*i*/come_call_finalizer3(default_value_131,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result103__;
        }
    }
    __result104__ = gComeFunResultObject = __result_obj__ = default_value_131;
    /*i*/come_call_finalizer3(default_value_131,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj78;
struct sType* __dec_obj79;
struct tuple2$2charphsTypeph* __result105__;
    __dec_obj78=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj79=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_137;
struct list_item$1sNodeph* prev_it_138;
struct list$1sNodeph* __result106__;
    it_137=self->head;
    while(it_137!=((void*)0)) {
        prev_it_138=it_137;
        it_137=it_137->next;
        /*i*/come_call_finalizer3(prev_it_138,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value180 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_140;
struct tuple2$2charphsTypeph* __dec_obj82;
void* __right_value181 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_141;
struct tuple2$2charphsTypeph* __dec_obj85;
void* __right_value182 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_142;
struct tuple2$2charphsTypeph* __dec_obj88;
struct list$1tuple2$2charphsTypephph* __result107__;
    if(    self->len==0) {
        litem_140=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value180=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 223, "list_item$1tuple2$2charphsTypephph"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        __dec_obj82=litem_140->item;
        litem_140->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value181=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 233, "list_item$1tuple2$2charphsTypephph"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        __dec_obj85=litem_141->item;
        litem_141->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value182=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 243, "list_item$1tuple2$2charphsTypephph"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        __dec_obj88=litem_142->item;
        litem_142->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj89;
struct sType* __dec_obj90;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj89=self->v1;
            /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj90=self->v2;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result108__;
void* __right_value183 = (void*)0;
struct tuple2$2charphsTypeph* result_143;
void* __right_value184 = (void*)0;
char* __dec_obj91;
void* __right_value185 = (void*)0;
struct sType* __dec_obj92;
struct tuple2$2charphsTypeph* __result109__;
    if(    self==(void*)0) {
        __result108__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    result_143=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj91=result_143->v1;
        result_143->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj92=result_143->v2;
        result_143->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result109__ = gComeFunResultObject = __result_obj__ = result_143;
    /*i*/come_call_finalizer3(result_143,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj93;
struct sType* __dec_obj94;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj93=self->v1;
            /*G*/ __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj94=self->v2;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_144;
int i_145;
    for(    i_144=0;    i_144<self->size;    i_144++    ){
        if(        self->item_existance[i_144]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_144],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_145=0;    i_145<self->size;    i_145++    ){
        if(        self->item_existance[i_145]) {
            if(            1) {
                self->keys[i_145] = come_decrement_ref_count2(self->keys[i_145], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_167;
unsigned int it_168;
_Bool same_key_exist_185;
char* it2_188;
struct map$2charphsClassph* __result130__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_167=string_get_hash_key(key)%self->size;
    it_168=hash_167;
    while((_Bool)1) {
        if(        self->item_existance[it_168]) {
            if(            string_equals(self->keys[it_168],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_168]);
                    self->keys[it_168] = come_decrement_ref_count2(self->keys[it_168], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_168]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_168]);
                    self->keys[it_168]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_168],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_168]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_168]=item;
                }
                break;
            }
            it_168++;
            if(            it_168>=self->size) {
                it_168=0;
            }
            else if(            it_168==hash_167) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_168]=(_Bool)1;
            if(            1) {
                self->keys[it_168]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_168]=key;
            }
            if(            1) {
                self->items[it_168]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_168]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_185=(_Bool)0;
    for(    it2_188=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_188=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_188,key)) {
            same_key_exist_185=(_Bool)1;
        }
    }
    if(    !same_key_exist_185) {
        list$1charp_push_back(self->key_list,key);
    }
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_146;
void* __right_value188 = (void*)0;
char** keys_147;
void* __right_value189 = (void*)0;
struct sClass** items_148;
void* __right_value190 = (void*)0;
_Bool* item_existance_149;
int len_150;
char* it_153;
struct sClass* default_value_156;
struct sClass* it2_157;
unsigned int hash_164;
int n_165;
struct sClass* default_value_166;
default_value_156 = (void*)0;
default_value_166 = (void*)0;
    size_146=self->size*10;
    keys_147=(char**)come_increment_ref_count(((char**)(__right_value188=(char**)come_calloc(1, sizeof(char*)*(1*(size_146)), "./comelang.h", 1651, "char*%"))));
    items_148=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value189=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_146)), "./comelang.h", 1652, "sClass*%"))));
    item_existance_149=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value190=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_146)), "./comelang.h", 1653, "bool"))));
    len_150=0;
    for(    it_153=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_153=map$2charphsClassph_next(self)    ){
        memset(&default_value_156,0,sizeof(struct sClass*));
        it2_157=map$2charphsClassph_at(self,it_153,default_value_156);
        hash_164=string_get_hash_key(it_153)%size_146;
        n_165=hash_164;
        while((_Bool)1) {
            if(            item_existance_149[n_165]) {
                n_165++;
                if(                n_165>=size_146) {
                    n_165=0;
                }
                else if(                n_165==hash_164) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_149[n_165]=(_Bool)1;
                keys_147[n_165]=it_153;
                items_148[n_165]=map$2charphsClassph_at(self,it_153,default_value_166);
                len_150++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_147;
    self->items=items_148;
    self->item_existance=item_existance_149;
    self->size=size_146;
    self->len=len_150;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_151;
char* __result110__;
char* __result111__;
char* result_152;
char* __result112__;
result_151 = (void*)0;
result_152 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_151,0,sizeof(char*));
        __result110__ = gComeFunResultObject = __result_obj__ = result_151;
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result111__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    memset(&result_152,0,sizeof(char*));
    __result112__ = gComeFunResultObject = __result_obj__ = result_152;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_154;
char* __result113__;
char* __result114__;
char* result_155;
char* __result115__;
result_154 = (void*)0;
result_155 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_154,0,sizeof(char*));
        __result113__ = gComeFunResultObject = __result_obj__ = result_154;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result114__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    memset(&result_155,0,sizeof(char*));
    __result115__ = gComeFunResultObject = __result_obj__ = result_155;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_158;
unsigned int it_159;
struct sClass* __result116__;
struct sClass* __result117__;
struct sClass* __result118__;
struct sClass* __result119__;
    hash_158=string_get_hash_key(((char*)key))%self->size;
    it_159=hash_158;
    while((_Bool)1) {
        if(        self->item_existance[it_159]) {
            if(            string_equals(self->keys[it_159],key)) {
                __result116__ = gComeFunResultObject = __result_obj__ = self->items[it_159];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result116__;
            }
            it_159++;
            if(            it_159>=self->size) {
                it_159=0;
            }
            else if(            it_159==hash_158) {
                __result117__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result117__;
            }
        }
        else {
            __result118__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result118__;
        }
    }
    __result119__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj95;
struct list$1tuple2$2charphsTypephph* __dec_obj96;
char* __dec_obj98;
char* __dec_obj99;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj95=self->mName;
            /*G*/ __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj96=self->mFields;
            come_call_finalizer3(__dec_obj96,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj98=self->mDeclareSName;
            /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj99=self->mParentClassName;
            /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_160;
struct list_item$1tuple2$2charphsTypephph* prev_it_161;
    it_160=self->head;
    while(it_160!=((void*)0)) {
        prev_it_161=it_160;
        it_160=it_160->next;
        /*i*/come_call_finalizer3(prev_it_161,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj97;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj97=self->item;
            come_call_finalizer3(__dec_obj97,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_162;
struct list_item$1tuple2$2charphsTypephph* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        /*i*/come_call_finalizer3(prev_it_163,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_169;
struct list_item$1charp* it_170;
struct list$1charp* __result123__;
    it2_169=0;
    it_170=self->head;
    while(it_170!=((void*)0)) {
        if(        charp_equals(it_170->item,item)) {
            list$1charp_delete(self,it2_169,it2_169+1);
            break;
        }
        it2_169++;
        it_170=it_170->next;
    }
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_171;
struct list$1charp* __result120__;
struct list_item$1charp* it_174;
int i_175;
struct list_item$1charp* prev_it_176;
struct list_item$1charp* it_177;
int i_178;
struct list_item$1charp* prev_it_179;
struct list_item$1charp* it_180;
struct list_item$1charp* head_prev_it_181;
struct list_item$1charp* tail_it_182;
int i_183;
struct list_item$1charp* prev_it_184;
struct list$1charp* __result122__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_171=tail;
        tail=head;
        head=tmp_171;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result120__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_174=self->head;
        i_175=0;
        while(it_174!=((void*)0)) {
            if(            i_175<tail) {
                prev_it_176=it_174;
                it_174=it_174->next;
                i_175++;
                /*i*/come_call_finalizer3(prev_it_176,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_175==tail) {
                self->head=it_174;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_174=it_174->next;
                i_175++;
            }
        }
    }
    else if(    tail==self->len) {
        it_177=self->head;
        i_178=0;
        while(it_177!=((void*)0)) {
            if(            i_178==head) {
                self->tail=it_177->prev;
                self->tail->next=((void*)0);
            }
            if(            i_178>=head) {
                prev_it_179=it_177;
                it_177=it_177->next;
                i_178++;
                /*i*/come_call_finalizer3(prev_it_179,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_177=it_177->next;
                i_178++;
            }
        }
    }
    else {
        it_180=self->head;
        head_prev_it_181=((void*)0);
        tail_it_182=((void*)0);
        i_183=0;
        while(it_180!=((void*)0)) {
            if(            i_183==head) {
                head_prev_it_181=it_180->prev;
            }
            if(            i_183==tail) {
                tail_it_182=it_180;
            }
            if(            i_183>=head&&i_183<tail) {
                prev_it_184=it_180;
                it_180=it_180->next;
                i_183++;
                /*i*/come_call_finalizer3(prev_it_184,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_180=it_180->next;
                i_183++;
            }
        }
        if(        head_prev_it_181!=((void*)0)) {
            head_prev_it_181->next=tail_it_182;
        }
        if(        tail_it_182!=((void*)0)) {
            tail_it_182->prev=head_prev_it_181;
        }
    }
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_172;
struct list_item$1charp* prev_it_173;
struct list$1charp* __result121__;
    it_172=self->head;
    while(it_172!=((void*)0)) {
        prev_it_173=it_172;
        it_172=it_172->next;
        /*i*/come_call_finalizer3(prev_it_173,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_186;
char* __result124__;
char* __result125__;
char* result_187;
char* __result126__;
result_186 = (void*)0;
result_187 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_186,0,sizeof(char*));
        __result124__ = gComeFunResultObject = __result_obj__ = result_186;
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    self->it=self->head;
    if(    self->it) {
        __result125__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    memset(&result_187,0,sizeof(char*));
    __result126__ = gComeFunResultObject = __result_obj__ = result_187;
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_189;
char* __result127__;
char* __result128__;
char* result_190;
char* __result129__;
result_189 = (void*)0;
result_190 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_189,0,sizeof(char*));
        __result127__ = gComeFunResultObject = __result_obj__ = result_189;
        gComeFunResultObject = (void*)0;
        return __result127__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result128__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result128__;
    }
    memset(&result_190,0,sizeof(char*));
    __result129__ = gComeFunResultObject = __result_obj__ = result_190;
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value199 = (void*)0;
struct list_item$1CVALUEph* litem_198;
struct CVALUE* __dec_obj102;
void* __right_value200 = (void*)0;
struct list_item$1CVALUEph* litem_199;
struct CVALUE* __dec_obj103;
void* __right_value201 = (void*)0;
struct list_item$1CVALUEph* litem_200;
struct CVALUE* __dec_obj104;
struct list$1CVALUEph* __result131__;
    if(    self->len==0) {
        litem_198=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value199=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 223, "list_item$1CVALUEph"))));
        litem_198->prev=((void*)0);
        litem_198->next=((void*)0);
        __dec_obj102=litem_198->item;
        litem_198->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_198;
        self->head=litem_198;
    }
    else if(    self->len==1) {
        litem_199=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value200=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 233, "list_item$1CVALUEph"))));
        litem_199->prev=self->head;
        litem_199->next=((void*)0);
        __dec_obj103=litem_199->item;
        litem_199->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_199;
        self->head->next=litem_199;
    }
    else {
        litem_200=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value201=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 243, "list_item$1CVALUEph"))));
        litem_200->prev=self->tail;
        litem_200->next=((void*)0);
        __dec_obj104=litem_200->item;
        litem_200->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_200;
        self->tail=litem_200;
    }
    self->len++;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value202 = (void*)0;
struct sLineNode* __result133__;
    ((struct sNodeBase*)(__right_value202=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value202,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value203 = (void*)0;
char* __result134__;
    __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value203=__builtin_string("sLineNode")));
    __right_value203 = come_decrement_ref_count2(__right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct CVALUE* come_value_201;
void* __right_value206 = (void*)0;
char* __dec_obj106;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct sType* __dec_obj107;
_Bool __result135__;
    come_value_201=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 169, "CVALUE"))));
    __dec_obj106=come_value_201->c_value;
    come_value_201->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj107=come_value_201->type;
    come_value_201->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 172, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_201->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_201));
    add_come_last_code(info,"%s",come_value_201->c_value);
    __result135__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result135__;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value209 = (void*)0;
struct sSNameNode* __result136__;
    ((struct sNodeBase*)(__right_value209=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value209,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value210 = (void*)0;
char* __result137__;
    __result137__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value210=__builtin_string("sSNameNode")));
    __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct CVALUE* come_value_202;
void* __right_value213 = (void*)0;
char* __dec_obj109;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct sType* __dec_obj110;
_Bool __result138__;
    come_value_202=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 197, "CVALUE"))));
    __dec_obj109=come_value_202->c_value;
    come_value_202->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj110=come_value_202->type;
    come_value_202->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 200, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_202->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_202));
    add_come_last_code(info,"%s",come_value_202->c_value);
    __result138__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result138__;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value216 = (void*)0;
struct sFuncNode* __result139__;
    ((struct sNodeBase*)(__right_value216=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value216,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result139__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value217 = (void*)0;
char* __result140__;
    __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value217=__builtin_string("sFuncNode")));
    __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct CVALUE* come_value_203;
void* __right_value220 = (void*)0;
char* __dec_obj112;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct sType* __dec_obj113;
_Bool __result141__;
    come_value_203=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 225, "CVALUE"))));
    __dec_obj112=come_value_203->c_value;
    come_value_203->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=come_value_203->type;
    come_value_203->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 228, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_203->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_203));
    add_come_last_code(info,"%s",come_value_203->c_value);
    __result141__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result141__;
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
struct sWildCard* __result142__;
    ((struct sNodeBase*)(__right_value223=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value223,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result142__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result143__;
    __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=__builtin_string("sWildCard")));
    __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sNode* value_node_204;
_Bool __result144__;
_Bool __result145__;
    value_node_204=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value225=xsprintf("Value"))),info));
    __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    !node_compile(value_node_204,info)) {
        __result144__ = (_Bool)0;
        if(value_node_204) { value_node_204 = come_decrement_ref_count2(value_node_204, ((struct sNode*)value_node_204)->finalize, ((struct sNode*)value_node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result144__;
    }
    __result145__ = (_Bool)1;
    if(value_node_204) { value_node_204 = come_decrement_ref_count2(value_node_204, ((struct sNode*)value_node_204)->finalize, ((struct sNode*)value_node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result145__;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value227 = (void*)0;
struct sCallerFuncNode* __result146__;
    ((struct sNodeBase*)(__right_value227=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value227,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result146__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
char* __result147__;
    __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value228=__builtin_string("sCallerFuncNode")));
    __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct CVALUE* come_value_205;
void* __right_value231 = (void*)0;
char* __dec_obj116;
void* __right_value232 = (void*)0;
char* __dec_obj117;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct sType* __dec_obj118;
_Bool __result148__;
    come_value_205=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 277, "CVALUE"))));
    if(    info->caller_fun) {
        __dec_obj116=come_value_205->c_value;
        come_value_205->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj117=come_value_205->c_value;
        come_value_205->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj118=come_value_205->type;
    come_value_205->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 285, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_205->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_205));
    add_come_last_code(info,"%s",come_value_205->c_value);
    __result148__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result148__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
struct sCallerLineNode* __result149__;
    ((struct sNodeBase*)(__right_value235=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value235,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct CVALUE* come_value_206;
void* __right_value238 = (void*)0;
char* __dec_obj120;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sType* __dec_obj121;
_Bool __result150__;
    come_value_206=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 306, "CVALUE"))));
    __dec_obj120=come_value_206->c_value;
    come_value_206->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    /*G*/ __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj121=come_value_206->type;
    come_value_206->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 309, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_206->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
    add_come_last_code(info,"%s",come_value_206->c_value);
    __result150__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result150__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
char* __result151__;
    __result151__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value241=__builtin_string("sCallerLineNode")));
    __right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value242 = (void*)0;
struct sCallerSNameNode* __result152__;
    ((struct sNodeBase*)(__right_value242=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value242,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result152__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct CVALUE* come_value_207;
void* __right_value245 = (void*)0;
char* __dec_obj123;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct sType* __dec_obj124;
_Bool __result153__;
    come_value_207=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 334, "CVALUE"))));
    __dec_obj123=come_value_207->c_value;
    come_value_207->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    /*G*/ __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj124=come_value_207->type;
    come_value_207->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 337, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_207->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_207));
    add_come_last_code(info,"%s",come_value_207->c_value);
    __result153__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value248=__builtin_string("sCallerSNameNode")));
    __right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
char* fun_name3_209;
struct list$1sTypeph* method_generics_types_before_210;
struct list$1sTypeph* __dec_obj125;
struct sGenericsFun* generics_fun_211;
void* __right_value250 = (void*)0;
_Bool _if_conditional2;
void* __right_value251 = (void*)0;
char* __result159__;
struct list$1sTypeph* __dec_obj136;
char* __result160__;
    static int num_method_generics_208=0;
    fun_name3_209=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_208++));
    method_generics_types_before_210=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj125=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj125,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_211=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(    generics_fun_211) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_209)),generics_fun_211,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_209);
            __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_209 = come_decrement_ref_count2(fun_name3_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_before_210,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result159__;
        }
    }
    __dec_obj136=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_210);
    come_call_finalizer3(__dec_obj136,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result160__ = gComeFunResultObject = __result_obj__ = fun_name3_209;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_209 = come_decrement_ref_count2(fun_name3_209, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types_before_210,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_212;
unsigned int it_213;
struct sGenericsFun* __result155__;
struct sGenericsFun* __result156__;
struct sGenericsFun* __result157__;
struct sGenericsFun* __result158__;
    hash_212=string_get_hash_key(((char*)key))%self->size;
    it_213=hash_212;
    while((_Bool)1) {
        if(        self->item_existance[it_213]) {
            if(            string_equals(self->keys[it_213],key)) {
                __result155__ = gComeFunResultObject = __result_obj__ = self->items[it_213];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result155__;
            }
            it_213++;
            if(            it_213>=self->size) {
                it_213=0;
            }
            else if(            it_213==hash_212) {
                __result156__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result156__;
            }
        }
        else {
            __result157__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result157__;
        }
    }
    __result158__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj126;
struct list$1charph* __dec_obj127;
struct list$1charph* __dec_obj128;
char* __dec_obj129;
struct sType* __dec_obj130;
struct list$1sTypeph* __dec_obj131;
struct list$1charph* __dec_obj132;
struct list$1charph* __dec_obj133;
char* __dec_obj134;
char* __dec_obj135;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj126=self->mImplType;
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj127=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj128=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj129=self->mName;
            /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj130=self->mResultType;
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj131=self->mParamTypes;
            come_call_finalizer3(__dec_obj131,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj132=self->mParamNames;
            come_call_finalizer3(__dec_obj132,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj133=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj133,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj134=self->mBlock;
            /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj135=self->mGenericsSName;
            /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
char* __dec_obj137;
void* __right_value263 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj154;
struct list$1sTypeph* __dec_obj155;
struct buffer* __dec_obj156;
struct sFunCallNode* __result167__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj137=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj154=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj154,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj155=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj155,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj156=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj156,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    self->throw_or_rescue=throw_or_rescue;
    __result167__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
char* __result168__;
    __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value264=__builtin_string("sFunCallNode")));
    __right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result168__;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_224;
struct list$1tuple2$2charphsNodephph* params_225;
struct buffer* method_block_226;
int method_block_sline_227;
_Bool throw_or_rescue_228;
struct sVar* var__229;
struct sType* lambda_type_230;
_Bool __result169__;
void* __right_value265 = (void*)0;
struct sType* result_type_231;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1CVALUEph* come_params_232;
_Bool __result171__;
int i_235;
struct list$1tuple2$2charphsNodephph* o2_saved_236;
struct tuple2$2charphsNodeph* it_239;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* label_242;
struct sNode* node_243;
_Bool __result178__;
void* __right_value268 = (void*)0;
struct CVALUE* come_value_244;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct buffer* buf_248;
int j_249;
struct list$1CVALUEph* o2_saved_250;
struct CVALUE* it_253;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct CVALUE* come_value_256;
void* __right_value276 = (void*)0;
char* __dec_obj163;
void* __right_value277 = (void*)0;
struct sType* __dec_obj164;
struct sGenericsFun* generics_fun_257;
_Bool method_generics_258;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1sTypeph* method_generics_types_259;
void* __right_value280 = (void*)0;
char* generics_fun_name_260;
struct sFun* fun_261;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1CVALUEph* come_params_264;
struct sFun* fun_265;
_Bool no_output_come_code_266;
_Bool __result191__;
struct CVALUE* method_block_node_267;
void* __right_value283 = (void*)0;
struct sType* method_block_lambda_type_271;
void* __right_value284 = (void*)0;
struct sType* method_block_result_type_272;
struct sType* generics_fun_method_block_lambda_type_273;
struct sType* generics_fun_method_block_result_type_274;
int method_generics_num_275;
void* __right_value285 = (void*)0;
int n_284;
struct list$1sTypeph* o2_saved_285;
struct sType* it_288;
int method_generics_num_291;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1CVALUEph* come_params_292;
int i_293;
struct sType* result_type_294;
struct list$1tuple2$2charphsNodephph* o2_saved_295;
struct tuple2$2charphsNodeph* it_296;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_297;
struct sNode* node_298;
_Bool __result204__;
void* __right_value292 = (void*)0;
struct CVALUE* come_value_299;
int method_generics_num_303;
void* __right_value296 = (void*)0;
int n_304;
struct list$1sTypeph* o2_saved_305;
struct sType* it_306;
int method_generics_num_307;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
char* __dec_obj187;
void* __right_value299 = (void*)0;
char* __dec_obj188;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1CVALUEph* come_params_310;
struct list$1tuple2$2charphsNodephph* o2_saved_311;
struct tuple2$2charphsNodeph* it_312;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_313;
struct sNode* node_314;
_Bool __result207__;
void* __right_value302 = (void*)0;
struct CVALUE* come_value_315;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct buffer* buf_316;
int j_317;
struct list$1CVALUEph* o2_saved_318;
struct CVALUE* it_319;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_320;
void* __right_value307 = (void*)0;
char* __dec_obj189;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj190;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj191;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __dec_obj192;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* __dec_obj193;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* __dec_obj194;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* __dec_obj195;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* __dec_obj196;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sType* __dec_obj197;
_Bool __result208__;
void* __right_value324 = (void*)0;
char* __dec_obj198;
void* __right_value325 = (void*)0;
char* __dec_obj199;
char* p_321;
int version_322;
char* p2_323;
int i_325;
void* __right_value326 = (void*)0;
char* new_fun_name_326;
void* __right_value327 = (void*)0;
char* __dec_obj200;
void* __right_value328 = (void*)0;
char* new_fun_name_330;
void* __right_value329 = (void*)0;
char* __dec_obj201;
_Bool __result213__;
int i_331;
void* __right_value330 = (void*)0;
char* new_fun_name_332;
void* __right_value331 = (void*)0;
char* __dec_obj202;
struct sFun* fun_333;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1CVALUEph* come_params_334;
int i_335;
struct sType* result_type_336;
struct list$1tuple2$2charphsNodephph* o2_saved_337;
struct tuple2$2charphsNodeph* it_338;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_339;
struct sNode* node_340;
_Bool __result214__;
void* __right_value334 = (void*)0;
struct CVALUE* come_value_341;
struct sType* __dec_obj203;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct buffer* buf_342;
int j_343;
struct list$1CVALUEph* o2_saved_344;
struct CVALUE* it_345;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct CVALUE* come_value_346;
void* __right_value339 = (void*)0;
char* __dec_obj204;
struct sType* __dec_obj205;
_Bool __result215__;
void* __right_value340 = (void*)0;
struct sType* result_type_347;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct list$1sTypeph* param_types_348;
struct list$1sTypeph* o2_saved_349;
struct sType* it_350;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sType* it2_351;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* __dec_obj206;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1CVALUEph* come_params_352;
int i_353;
struct list$1tuple2$2charphsNodephph* o2_saved_354;
struct tuple2$2charphsNodeph* it_355;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_356;
struct sNode* node_357;
_Bool __result216__;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_358;
int n_359;
struct list$1charph* o2_saved_360;
char* it_363;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
int i_371;
struct list$1tuple2$2charphsNodephph* o2_saved_372;
struct tuple2$2charphsNodeph* it_373;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_374;
struct sNode* node_375;
_Bool __result225__;
void* __right_value353 = (void*)0;
struct CVALUE* come_value_376;
_Bool __result226__;
void* __right_value354 = (void*)0;
struct CVALUE* come_value_377;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
char* default_param_378;
char* param_name_382;
struct buffer* source_383;
char* p_384;
char* head_385;
int sline_386;
void* __right_value359 = (void*)0;
struct buffer* __dec_obj208;
void* __right_value360 = (void*)0;
struct sNode* node_387;
_Bool __result229__;
struct buffer* __dec_obj209;
void* __right_value361 = (void*)0;
struct CVALUE* come_value_388;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
_Bool __result230__;
_Bool __result231__;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value369 = (void*)0;
struct sNode* current_stack_frame_node_389;
_Bool __result234__;
void* __right_value370 = (void*)0;
struct CVALUE* come_value_391;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct buffer* method_block2_392;
void* __right_value373 = (void*)0;
struct sType* method_block_type_393;
void* __right_value374 = (void*)0;
char* class_name_394;
struct sClass* current_stack_frame_struct_398;
_Bool __result239__;
void* __right_value375 = (void*)0;
struct sType* result_type_399;
void* __right_value376 = (void*)0;
struct list$1sTypeph* param_types_400;
struct list$1charph* param_names_401;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct buffer* all_alhabet_sname_402;
char* p_403;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct list$1sTypeph* o2_saved_404;
struct sType* it_405;
struct sType* param_type_406;
void* __right_value382 = (void*)0;
char* param_name_407;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
char* param_name_408;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
char* param_name_409;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct buffer* source3_410;
char* p_411;
char* head_412;
int sline_413;
struct buffer* __dec_obj212;
void* __right_value392 = (void*)0;
struct sNode* node_414;
_Bool __result240__;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
char* method_block_name_415;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct CVALUE* come_value2_416;
struct sFun* fun2_417;
_Bool __result241__;
struct sType* method_block_type2_418;
void* __right_value397 = (void*)0;
char* __dec_obj213;
void* __right_value398 = (void*)0;
struct sType* __dec_obj214;
struct buffer* __dec_obj215;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct buffer* buf_419;
int j_420;
struct list$1CVALUEph* o2_saved_421;
struct CVALUE* it_422;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct CVALUE* come_value_423;
void* __right_value403 = (void*)0;
char* __dec_obj216;
void* __right_value404 = (void*)0;
struct sType* __dec_obj217;
void* __right_value405 = (void*)0;
char* __dec_obj218;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* __dec_obj219;
_Bool __result242__;
memset(&i_325, 0, sizeof(int));
    fun_name_224=(char*)come_increment_ref_count(self->fun_name);
    params_225=self->params;
    method_block_226=self->method_block;
    method_block_sline_227=self->method_block_sline;
    throw_or_rescue_228=self->throw_or_rescue;
    var__229=get_variable_from_table(info->lv_table,fun_name_224);
    if(    var__229==((void*)0)) {
        var__229=get_variable_from_table(info->gv_table,fun_name_224);
    }
    if(    var__229) {
        lambda_type_230=var__229->mType;
        if(        string_operator_not_equals(lambda_type_230->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_224);
            __result169__ = (_Bool)0;
            fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result169__;
        }
        result_type_231=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_230->mResultType->v1));
        result_type_231->mStatic=(_Bool)0;
        come_params_232=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 430, "list$1CVALUEph"))));
        if(        list$1sTypeph_length(lambda_type_230->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_225)&&!lambda_type_230->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_224,list$1sTypeph_length(lambda_type_230->mParamTypes),list$1tuple2$2charphsNodephph_length(params_225));
            __result171__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_231,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_232,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result171__;
        }
        i_235=0;
        for(        o2_saved_236=(params_225),it_239=list$1tuple2$2charphsNodephph_begin((o2_saved_236));        !list$1tuple2$2charphsNodephph_end((o2_saved_236));        it_239=list$1tuple2$2charphsNodephph_next((o2_saved_236))        ){
            multiple_assign_var1=it_239;
            label_242=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_243=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            !node_compile(node_243,info)) {
                __result178__ = (_Bool)0;
                label_242 = come_decrement_ref_count2(label_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_243) { node_243 = come_decrement_ref_count2(node_243, ((struct sNode*)node_243)->finalize, ((struct sNode*)node_243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(result_type_231,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_232,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result178__;
            }
            come_value_244=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            lambda_type_230->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_230->mParamTypes,i_235), "05call.c", 446, 2))==((void*)0)) {
            }
            else {
                check_assign_type(((char*)(__right_value271=xsprintf("\%s calling param #\%s",((char*)(__right_value269=string_to_string(fun_name_224))),((char*)(__right_value270=int_to_string(i_235)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_230->mParamTypes,i_235), "05call.c", 449, 3)),come_value_244->type,come_value_244,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_230->mParamTypes,i_235), "05call.c", 450, 4))->mHeap&&come_value_244->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_230->mParamTypes,i_235), "05call.c", 451, 5)),come_value_244->type,come_value_244,info,(_Bool)1);
                }
            }
            list$1CVALUEph_push_back(come_params_232,(struct CVALUE*)come_increment_ref_count(come_value_244));
            dec_stack_ptr(1,info);
            i_235++;
            label_242 = come_decrement_ref_count2(label_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_243) { node_243 = come_decrement_ref_count2(node_243, ((struct sNode*)node_243)->finalize, ((struct sNode*)node_243)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_248=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 462, "buffer"))));
        buffer_append_str(buf_248,var__229->mCValueName);
        buffer_append_str(buf_248,"(");
        j_249=0;
        for(        o2_saved_250=(struct list$1CVALUEph*)come_increment_ref_count((come_params_232)),it_253=list$1CVALUEph_begin((o2_saved_250));        !list$1CVALUEph_end((o2_saved_250));        it_253=list$1CVALUEph_next((o2_saved_250))        ){
            buffer_append_str(buf_248,it_253->c_value);
            if(            j_249!=list$1CVALUEph_length(come_params_232)-1) {
                buffer_append_str(buf_248,",");
            }
            j_249++;
        }
        /*i*/come_call_finalizer3(o2_saved_250,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_248,")");
        come_value_256=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 479, "CVALUE"))));
        __dec_obj163=come_value_256->c_value;
        come_value_256->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_248));
        /*G*/ __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj164=come_value_256->type;
        come_value_256->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_231));
        come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_256->type->mStatic=(_Bool)0;
        come_value_256->var=((void*)0);
        if(        lambda_type_230->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_256,(struct sType*)come_increment_ref_count(lambda_type_230->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_256->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_256));
        /*i*/come_call_finalizer3(result_type_231,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_232,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_248,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_257=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_224,((void*)0));
        method_generics_258=(_Bool)0;
        if(        generics_fun_257) {
            method_generics_258=list$1charph_length(generics_fun_257->mMethodGenericsTypeNames)>0;
        }
        if(        list$1sTypeph_length(self->method_generics_types)>0||method_generics_258) {
            if(            list$1sTypeph_length(self->method_generics_types)==0) {
                method_generics_types_259=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 501, "list$1sTypeph"))));
                generics_fun_name_260=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_224),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_259),info));
                fun_261=map$2charphsFunph_at(info->funcs,generics_fun_name_260,((void*)0));
                if(                method_block_226) {
                    come_params_264=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 507, "list$1CVALUEph"))));
                    fun_265=map$2charphsFunph_at(info->funcs,generics_fun_name_260,((void*)0));
                    no_output_come_code_266=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_226,(struct list$1CVALUEph*)come_increment_ref_count(come_params_264),fun_265,fun_name_224,method_block_sline_227,info,(_Bool)1)) {
                        __result191__ = (_Bool)0;
                        /*i*/come_call_finalizer3(come_params_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_259,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_260 = come_decrement_ref_count2(generics_fun_name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result191__;
                    }
                    info->no_output_come_code=no_output_come_code_266;
                    method_block_node_267=list$1CVALUEphp_operator_load_element(come_params_264,-1);
                    method_block_lambda_type_271=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_267->type));
                    method_block_result_type_272=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_273=list$1sTypephp_operator_load_element(generics_fun_257->mParamTypes,-1);
                    generics_fun_method_block_result_type_274=generics_fun_method_block_lambda_type_273->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_274->mClass->mMethodGenerics) {
                        method_generics_num_275=generics_fun_method_block_result_type_274->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_259,method_generics_num_275,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_272)));
                    }
                    n_284=0;
                    for(                    o2_saved_285=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_273->mParamTypes)),it_288=list$1sTypeph_begin((o2_saved_285));                    !list$1sTypeph_end((o2_saved_285));                    it_288=list$1sTypeph_next((o2_saved_285))                    ){
                        if(                        it_288->mClass->mMethodGenerics) {
                            method_generics_num_291=it_288->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(method_generics_types_259,method_generics_num_291,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_lambda_type_271->mParamTypes,n_284), "05call.c", 533, 6)))));
                        }
                        n_284++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_285,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_lambda_type_271,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_result_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_params_292=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 539, "list$1CVALUEph"))));
                i_293=0;
                result_type_294=((void*)0);
                for(                o2_saved_295=(params_225),it_296=list$1tuple2$2charphsNodephph_begin((o2_saved_295));                !list$1tuple2$2charphsNodephph_end((o2_saved_295));                it_296=list$1tuple2$2charphsNodephph_next((o2_saved_295))                ){
                    multiple_assign_var2=it_296;
                    label_297=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                    node_298=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                    if(                    !node_compile(node_298,info)) {
                        __result204__ = (_Bool)0;
                        label_297 = come_decrement_ref_count2(label_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_298) { node_298 = come_decrement_ref_count2(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(method_generics_types_259,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_260 = come_decrement_ref_count2(generics_fun_name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_292,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_294,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result204__;
                    }
                    come_value_299=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    list$1CVALUEph_add(come_params_292,(struct CVALUE*)come_increment_ref_count(come_value_299));
                    label_297 = come_decrement_ref_count2(label_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_298) { node_298 = come_decrement_ref_count2(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_299,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(                generics_fun_257->mResultType->mClass->mMethodGenerics) {
                    method_generics_num_303=generics_fun_257->mResultType->mClass->mMethodGenericsNum;
                    if(                    info->function_result_type) {
                        list$1sTypephp_operator_store_element(method_generics_types_259,method_generics_num_303,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    }
                }
                n_304=0;
                for(                o2_saved_305=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_257->mParamTypes)),it_306=list$1sTypeph_begin((o2_saved_305));                !list$1sTypeph_end((o2_saved_305));                it_306=list$1sTypeph_next((o2_saved_305))                ){
                    if(                    it_306->mClass->mMethodGenerics) {
                        method_generics_num_307=it_306->mClass->mMethodGenericsNum;
                        if(                        n_304<list$1CVALUEph_length(come_params_292)) {
                            list$1sTypephp_operator_store_element(method_generics_types_259,method_generics_num_307,(struct sType*)come_increment_ref_count(sType_clone(list$1CVALUEphp_operator_load_element(come_params_292,n_304)->type)));
                        }
                    }
                    n_304++;
                }
                /*i*/come_call_finalizer3(o2_saved_305,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                map$2charphsFunph_remove(info->funcs,generics_fun_name_260);
                __dec_obj187=fun_name_224;
                fun_name_224=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_224),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_259),info));
                /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                /*i*/come_call_finalizer3(method_generics_types_259,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                generics_fun_name_260 = come_decrement_ref_count2(generics_fun_name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_292,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_294,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj188=fun_name_224;
                fun_name_224=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_224),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
                /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        if(        string_operator_equals(fun_name_224,"__builtin_memmove")||string_operator_equals(fun_name_224,"__builtin_memset")||string_operator_equals(fun_name_224,"__builtin_ffs")||string_operator_equals(fun_name_224,"__builtin_ffsl")||string_operator_equals(fun_name_224,"__builtin_ffsll")||string_operator_equals(fun_name_224,"__builtin_bswap16")||string_operator_equals(fun_name_224,"__builtin_bswap32")||string_operator_equals(fun_name_224,"__builtin_bswap64")||string_operator_equals(fun_name_224,"__builtin_constant_p")) {
            come_params_310=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 585, "list$1CVALUEph"))));
            for(            o2_saved_311=(params_225),it_312=list$1tuple2$2charphsNodephph_begin((o2_saved_311));            !list$1tuple2$2charphsNodephph_end((o2_saved_311));            it_312=list$1tuple2$2charphsNodephph_next((o2_saved_311))            ){
                multiple_assign_var3=it_312;
                label_313=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_314=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                !node_compile(node_314,info)) {
                    __result207__ = (_Bool)0;
                    label_313 = come_decrement_ref_count2(label_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_310,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result207__;
                }
                come_value_315=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_310,(struct CVALUE*)come_increment_ref_count(come_value_315));
                label_313 = come_decrement_ref_count2(label_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_315,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_316=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 599, "buffer"))));
            buffer_append_str(buf_316,fun_name_224);
            buffer_append_str(buf_316,"(");
            j_317=0;
            for(            o2_saved_318=(struct list$1CVALUEph*)come_increment_ref_count((come_params_310)),it_319=list$1CVALUEph_begin((o2_saved_318));            !list$1CVALUEph_end((o2_saved_318));            it_319=list$1CVALUEph_next((o2_saved_318))            ){
                buffer_append_str(buf_316,it_319->c_value);
                if(                j_317!=list$1CVALUEph_length(come_params_310)-1) {
                    buffer_append_str(buf_316,",");
                }
                j_317++;
            }
            /*i*/come_call_finalizer3(o2_saved_318,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_316,")");
            come_value_320=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 616, "CVALUE"))));
            __dec_obj189=come_value_320->c_value;
            come_value_320->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_316));
            /*G*/ __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(fun_name_224,"__builtin_memmove")||string_operator_equals(fun_name_224,"__builtin_memset")) {
                __dec_obj190=come_value_320->type;
                come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 620, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_224,"__builtin_ffs")) {
                __dec_obj191=come_value_320->type;
                come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 623, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_224,"__builtin_ffsl")) {
                __dec_obj192=come_value_320->type;
                come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 626, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_224,"__builtin_ffsll")) {
                __dec_obj193=come_value_320->type;
                come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 629, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_224,"__builtin_bswap16")) {
                __dec_obj194=come_value_320->type;
                come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 632, "sType")),"short",(_Bool)0,info));
                come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_224,"__builtin_bswap32")) {
                __dec_obj195=come_value_320->type;
                come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 635, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_224,"__builtin_bswap64")) {
                __dec_obj196=come_value_320->type;
                come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 638, "sType")),"long",(_Bool)0,info));
                come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_224,"__builtin_constant_p")) {
                __dec_obj197=come_value_320->type;
                come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 641, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_value_320->var=((void*)0);
            add_come_last_code(info,"%s",come_value_320->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_320));
            __result208__ = (_Bool)1;
            /*i*/come_call_finalizer3(come_params_310,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_316,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_320,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result208__;
            /*i*/come_call_finalizer3(come_params_310,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_316,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_320,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_224,"string")) {
            __dec_obj198=fun_name_224;
            fun_name_224=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
            /*G*/ __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_224,"wstring")) {
            __dec_obj199=fun_name_224;
            fun_name_224=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
            /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_224,"inherit")) {
            p_321=info->come_fun->mName;
            version_322=0;
            while(*p_321) {
                if(                *p_321==95&&*(p_321+1)==118&&xisdigit(*(p_321+2))) {
                    p2_323=p_321+2;
                    version_322=0;
                    while(xisdigit(*p2_323)) {
                        version_322=version_322*10+(*p2_323-48);
                        p2_323++;
                    }
                    break;
                }
                else {
                    p_321++;
                }
            }
            char real_fun_name_324[2048];
            memset(&real_fun_name_324, 0, sizeof(char)            *(2048)            );
            memcpy(real_fun_name_324,info->come_fun->mName,p_321-info->come_fun->mName);
            real_fun_name_324[p_321-info->come_fun->mName]=0;
            for(            i_325=version_322-1;            i_325>=1;            i_325--            ){
                new_fun_name_326=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_324,i_325));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_326)) {
                    __dec_obj200=fun_name_224;
                    fun_name_224=(char*)come_increment_ref_count(__builtin_string(new_fun_name_326));
                    /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_326 = come_decrement_ref_count2(new_fun_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_326 = come_decrement_ref_count2(new_fun_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_325==0) {
                new_fun_name_330=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_324));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_330)) {
                    __dec_obj201=fun_name_224;
                    fun_name_224=(char*)come_increment_ref_count(__builtin_string(new_fun_name_330));
                    /*G*/ __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(                string_operator_equals(fun_name_224,info->come_fun->mName)) {
                    err_msg(info,"invalid inherit");
                    __result213__ = (_Bool)0;
                    new_fun_name_330 = come_decrement_ref_count2(new_fun_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result213__;
                }
                new_fun_name_330 = come_decrement_ref_count2(new_fun_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_331=128;            i_331>=1;            i_331--            ){
                new_fun_name_332=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_224,i_331));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_332)) {
                    __dec_obj202=fun_name_224;
                    fun_name_224=(char*)come_increment_ref_count(__builtin_string(new_fun_name_332));
                    /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_332 = come_decrement_ref_count2(new_fun_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_332 = come_decrement_ref_count2(new_fun_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        fun_333=map$2charphsFunph_at(info->funcs,fun_name_224,((void*)0));
        if(        string_operator_equals(fun_name_224,"__builtin_va_arg")) {
            come_params_334=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 765, "list$1CVALUEph"))));
            i_335=0;
            result_type_336=((void*)0);
            for(            o2_saved_337=(params_225),it_338=list$1tuple2$2charphsNodephph_begin((o2_saved_337));            !list$1tuple2$2charphsNodephph_end((o2_saved_337));            it_338=list$1tuple2$2charphsNodephph_next((o2_saved_337))            ){
                multiple_assign_var4=it_338;
                label_339=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                node_340=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                !node_compile(node_340,info)) {
                    __result214__ = (_Bool)0;
                    label_339 = come_decrement_ref_count2(label_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_340) { node_340 = come_decrement_ref_count2(node_340, ((struct sNode*)node_340)->finalize, ((struct sNode*)node_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result214__;
                }
                come_value_341=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_334,(struct CVALUE*)come_increment_ref_count(come_value_341));
                __dec_obj203=result_type_336;
                result_type_336=(struct sType*)come_increment_ref_count(come_value_341->type);
                come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
                label_339 = come_decrement_ref_count2(label_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_340) { node_340 = come_decrement_ref_count2(node_340, ((struct sNode*)node_340)->finalize, ((struct sNode*)node_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_341,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_342=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 784, "buffer"))));
            buffer_append_str(buf_342,fun_name_224);
            buffer_append_str(buf_342,"(");
            j_343=0;
            for(            o2_saved_344=(struct list$1CVALUEph*)come_increment_ref_count((come_params_334)),it_345=list$1CVALUEph_begin((o2_saved_344));            !list$1CVALUEph_end((o2_saved_344));            it_345=list$1CVALUEph_next((o2_saved_344))            ){
                buffer_append_str(buf_342,it_345->c_value);
                if(                j_343!=list$1CVALUEph_length(come_params_334)-1) {
                    buffer_append_str(buf_342,",");
                }
                j_343++;
            }
            /*i*/come_call_finalizer3(o2_saved_344,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_342,")");
            come_value_346=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 801, "CVALUE"))));
            __dec_obj204=come_value_346->c_value;
            come_value_346->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_342));
            /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj205=come_value_346->type;
            come_value_346->type=(struct sType*)come_increment_ref_count(result_type_336);
            come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_346->var=((void*)0);
            add_come_last_code(info,"%s",come_value_346->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_346));
            /*i*/come_call_finalizer3(come_params_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_342,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_346,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_333==((void*)0)) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_224);
            __result215__ = (_Bool)1;
            fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result215__;
        }
        else {
            result_type_347=(struct sType*)come_increment_ref_count(sType_clone(fun_333->mResultType));
            result_type_347->mStatic=(_Bool)0;
            param_types_348=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 818, "list$1sTypeph"))));
            for(            o2_saved_349=(struct list$1sTypeph*)come_increment_ref_count((fun_333->mParamTypes)),it_350=list$1sTypeph_begin((o2_saved_349));            !list$1sTypeph_end((o2_saved_349));            it_350=list$1sTypeph_next((o2_saved_349))            ){
                it2_351=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value343=sType_clone(it_350))),info->generics_type,info));
                /*g*/come_call_finalizer3(__right_value343,sType_finalize, 0, 1, 0, 0, (void*)0);
                list$1sTypeph_push_back(param_types_348,(struct sType*)come_increment_ref_count(sType_clone(it2_351)));
                /*i*/come_call_finalizer3(it2_351,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj206=result_type_347;
            result_type_347=(struct sType*)come_increment_ref_count(solve_generics(result_type_347,info->generics_type,info));
            come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_params_352=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 827, "list$1CVALUEph"))));
            for(            i_353=0;            i_353<list$1sTypeph_length(fun_333->mParamTypes)-(((method_block_226)?(2):(0)));            i_353++            ){
                list$1CVALUEph_add(come_params_352,((void*)0));
            }
            for(            o2_saved_354=(params_225),it_355=list$1tuple2$2charphsNodephph_begin((o2_saved_354));            !list$1tuple2$2charphsNodephph_end((o2_saved_354));            it_355=list$1tuple2$2charphsNodephph_next((o2_saved_354))            ){
                multiple_assign_var5=it_355;
                label_356=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                node_357=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                fun_333->mVarArgs||string_operator_equals(fun_name_224,"__builtin_va_start")) {
                }
                else if(                label_356) {
                    if(                    !node_compile(node_357,info)) {
                        __result216__ = (_Bool)0;
                        label_356 = come_decrement_ref_count2(label_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result216__;
                    }
                    come_value_358=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    n_359=0;
                    for(                    o2_saved_360=(struct list$1charph*)come_increment_ref_count((fun_333->mParamNames)),it_363=list$1charph_begin((o2_saved_360));                    !list$1charph_end((o2_saved_360));                    it_363=list$1charph_next((o2_saved_360))                    ){
                        if(                        string_operator_equals(label_356,it_363)) {
                            break;
                        }
                        n_359++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_360,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    list$1sTypephp_operator_load_element(param_types_348,n_359)) {
                        check_assign_type(((char*)(__right_value352=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value350=string_to_string(fun_name_224))),((char*)(__right_value351=int_to_string(n_359)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,n_359), "05call.c", 856, 7)),come_value_358->type,come_value_358,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_348,n_359)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,n_359), "05call.c", 858, 8))->mHeap&&come_value_358->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,n_359), "05call.c", 859, 9)),come_value_358->type,come_value_358,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_352,n_359,(struct CVALUE*)come_increment_ref_count(come_value_358));
                    /*i*/come_call_finalizer3(come_value_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                label_356 = come_decrement_ref_count2(label_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            i_371=0;
            for(            o2_saved_372=(params_225),it_373=list$1tuple2$2charphsNodephph_begin((o2_saved_372));            !list$1tuple2$2charphsNodephph_end((o2_saved_372));            it_373=list$1tuple2$2charphsNodephph_next((o2_saved_372))            ){
                multiple_assign_var6=it_373;
                label_374=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_375=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                fun_333->mVarArgs||string_operator_equals(fun_name_224,"__builtin_va_start")) {
                    if(                    !node_compile(node_375,info)) {
                        __result225__ = (_Bool)0;
                        label_374 = come_decrement_ref_count2(label_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result225__;
                    }
                    come_value_376=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_352,i_371)==((void*)0)) {
                            break;
                        }
                        else {
                            i_371++;
                        }
                    }
                    list$1CVALUEph_replace(come_params_352,i_371,(struct CVALUE*)come_increment_ref_count(come_value_376));
                    i_371++;
                    /*i*/come_call_finalizer3(come_value_376,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                label_374) {
                }
                else {
                    if(                    !node_compile(node_375,info)) {
                        __result226__ = (_Bool)0;
                        label_374 = come_decrement_ref_count2(label_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result226__;
                    }
                    come_value_377=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_352,i_371)==((void*)0)) {
                            break;
                        }
                        else {
                            i_371++;
                        }
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_348,i_371)) {
                        check_assign_type(((char*)(__right_value357=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value355=string_to_string(fun_name_224))),((char*)(__right_value356=int_to_string(i_371)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,i_371), "05call.c", 910, 10)),come_value_377->type,come_value_377,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_348,i_371)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,i_371), "05call.c", 912, 11))->mHeap&&come_value_377->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,i_371), "05call.c", 913, 12)),come_value_377->type,come_value_377,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_352,i_371,(struct CVALUE*)come_increment_ref_count(come_value_377));
                    i_371++;
                    /*i*/come_call_finalizer3(come_value_377,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                label_374 = come_decrement_ref_count2(label_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            while((_Bool)1) {
                if(                list$1CVALUEphp_operator_load_element(come_params_352,i_371)==((void*)0)) {
                    break;
                }
                else {
                    i_371++;
                }
            }
            if(            list$1tuple2$2charphsNodephph_length(params_225)<list$1sTypeph_length(fun_333->mParamTypes)) {
                for(                ;                i_371<list$1sTypeph_length(fun_333->mParamTypes)-(((method_block_226)?(2):(0)));                i_371++                ){
                    default_param_378=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(fun_333->mParamDefaultParametors,i_371)));
                    param_name_382=((char*)come_null_check(list$1charphp_operator_load_element(fun_333->mParamNames,i_371), "05call.c", 934, 13));
                    if(                    default_param_378&&string_operator_not_equals(default_param_378,"")&&list$1CVALUEphp_operator_load_element(come_params_352,i_371)==((void*)0)) {
                        source_383=(struct buffer*)come_increment_ref_count(info->source);
                        p_384=info->p;
                        head_385=info->head;
                        sline_386=info->sline;
                        __dec_obj208=info->source;
                        info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(default_param_378));
                        come_call_finalizer3(__dec_obj208,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        info->p=info->source->buf;
                        info->head=info->source->buf;
                        node_387=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        if(                        !node_compile(node_387,info)) {
                            __result229__ = (_Bool)0;
                            /*i*/come_call_finalizer3(source_383,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            if(node_387) { node_387 = come_decrement_ref_count2(node_387, ((struct sNode*)node_387)->finalize, ((struct sNode*)node_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            default_param_378 = come_decrement_ref_count2(default_param_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result229__;
                        }
                        __dec_obj209=info->source;
                        info->source=(struct buffer*)come_increment_ref_count(source_383);
                        come_call_finalizer3(__dec_obj209,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        info->p=p_384;
                        info->head=head_385;
                        info->sline=sline_386;
                        come_value_388=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        if(                        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,i_371), "05call.c", 958, 14))) {
                            check_assign_type(((char*)(__right_value364=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value362=string_to_string(fun_name_224))),((char*)(__right_value363=int_to_string(i_371)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,i_371), "05call.c", 959, 15)),come_value_388->type,come_value_388,(_Bool)0,(_Bool)1,(_Bool)0,info);
                            __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        if(                        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,i_371), "05call.c", 961, 16))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,i_371), "05call.c", 961, 17))->mHeap&&come_value_388->type->mHeap) {
                            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_348,i_371), "05call.c", 962, 18)),come_value_388->type,come_value_388,info,(_Bool)1);
                        }
                        list$1CVALUEph_replace(come_params_352,i_371,(struct CVALUE*)come_increment_ref_count(come_value_388));
                        dec_stack_ptr(1,info);
                        /*i*/come_call_finalizer3(source_383,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_387) { node_387 = come_decrement_ref_count2(node_387, ((struct sNode*)node_387)->finalize, ((struct sNode*)node_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(come_value_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_352,i_371)==((void*)0)) {
                            err_msg(info,"require parametor(%s)(1) %d",fun_333->mName,i_371);
                            __result230__ = (_Bool)0;
                            default_param_378 = come_decrement_ref_count2(default_param_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result230__;
                        }
                    }
                    default_param_378 = come_decrement_ref_count2(default_param_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            if(            list$1sTypeph_length(fun_333->mParamTypes)-(((method_block_226)?(2):(0)))!=list$1CVALUEph_length(come_params_352)&&!fun_333->mVarArgs&&string_operator_not_equals(fun_name_224,"__builtin_va_start")&&string_operator_not_equals(fun_name_224,"__builtin_va_end")) {
                err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_224,list$1sTypeph_length(fun_333->mParamTypes),list$1tuple2$2charphsNodephph_length(params_225));
                __result231__ = (_Bool)0;
                /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result231__;
            }
            if(            method_block_226) {
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 983, "struct sNode");
                _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode2*)(__right_value366=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 983, "sCurrentNode2")),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sCurrentNode2_finalize;
                _inf_value1->clone=(void*)sCurrentNode2_clone;
                _inf_value1->compile=(void*)sCurrentNode2_compile;
                _inf_value1->sline=(void*)sCurrentNode2_sline;
                _inf_value1->sname=(void*)sCurrentNode2_sname;
                _inf_value1->terminated=(void*)sNodeBase_terminated;
                _inf_value1->kind=(void*)sCurrentNode2_kind;
                current_stack_frame_node_389=(struct sNode*)come_increment_ref_count(_inf_value1);
                /*g*/come_call_finalizer3(__right_value366,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
                if(                !node_compile(current_stack_frame_node_389,info)) {
                    __result234__ = (_Bool)0;
                    if(current_stack_frame_node_389) { current_stack_frame_node_389 = come_decrement_ref_count2(current_stack_frame_node_389, ((struct sNode*)current_stack_frame_node_389)->finalize, ((struct sNode*)current_stack_frame_node_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result234__;
                }
                come_value_391=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                list$1CVALUEph_push_back(come_params_352,(struct CVALUE*)come_increment_ref_count(come_value_391));
                dec_stack_ptr(1,info);
                method_block2_392=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 993, "buffer"))));
                method_block_type_393=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_333->mParamTypes,-1), "05call.c", 994, 19))));
                class_name_394=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_393->mParamTypes,0), "05call.c", 998, 20))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_394);
                current_stack_frame_struct_398=info->current_stack_frame_struct;
                info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_394);
                info->num_method_block++;
                if(                string_operator_not_equals(method_block_type_393->mClass->mName,"lambda")) {
                    err_msg(info,"This function does not have method block(%s)",fun_name_224);
                    __result239__ = (_Bool)0;
                    if(current_stack_frame_node_389) { current_stack_frame_node_389 = come_decrement_ref_count2(current_stack_frame_node_389, ((struct sNode*)current_stack_frame_node_389)->finalize, ((struct sNode*)current_stack_frame_node_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_392,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
                    class_name_394 = come_decrement_ref_count2(class_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result239__;
                }
                result_type_399=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_393->mResultType->v1));
                result_type_399->mStatic=(_Bool)0;
                param_types_400=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_393->mParamTypes));
                param_names_401=method_block_type_393->mParamNames;
                all_alhabet_sname_402=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1014, "buffer"))));
                {
                    p_403=info->sname;
                    while(*p_403) {
                        if(                        xisalnum(*p_403)) {
                            buffer_append_char(all_alhabet_sname_402,*p_403++);
                        }
                        else {
                            p_403++;
                        }
                    }
                }
                buffer_append_str(method_block2_392,((char*)(__right_value381=xsprintf("%s fun_block%d_%s(",((char*)(__right_value379=make_type_name_string(result_type_399,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value380=buffer_to_string(all_alhabet_sname_402)))))));
                __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_371=0;
                for(                o2_saved_404=(struct list$1sTypeph*)come_increment_ref_count((param_types_400)),it_405=list$1sTypeph_begin((o2_saved_404));                !list$1sTypeph_end((o2_saved_404));                it_405=list$1sTypeph_next((o2_saved_404))                ){
                    param_type_406=it_405;
                    if(                    i_371==0) {
                        param_name_407=(char*)come_increment_ref_count(xsprintf("parent"));
                        buffer_append_str(method_block2_392,((char*)(__right_value384=xsprintf("%s",((char*)(__right_value383=make_define_var(param_type_406,param_name_407,(_Bool)0,info)))))));
                        __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        param_name_407 = come_decrement_ref_count2(param_name_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else if(                    i_371==1) {
                        param_name_408=(char*)come_increment_ref_count(xsprintf("it"));
                        buffer_append_str(method_block2_392,((char*)(__right_value387=xsprintf("%s",((char*)(__right_value386=make_define_var_no_solved(param_type_406,param_name_408,(_Bool)0,(_Bool)1,info)))))));
                        __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        param_name_408 = come_decrement_ref_count2(param_name_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_409=(char*)come_increment_ref_count(xsprintf("it%d",i_371));
                        buffer_append_str(method_block2_392,((char*)(__right_value390=xsprintf("%s",((char*)(__right_value389=make_define_var_no_solved(param_type_406,param_name_409,(_Bool)0,(_Bool)1,info)))))));
                        __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        param_name_409 = come_decrement_ref_count2(param_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(                    i_371!=list$1sTypeph_length(param_types_400)-1) {
                        buffer_append_str(method_block2_392,",");
                    }
                    i_371++;
                }
                /*i*/come_call_finalizer3(o2_saved_404,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_str(method_block2_392,")\n");
                buffer_append_str(method_block2_392,((char*)(__right_value391=buffer_to_string(method_block_226))));
                __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                source3_410=(struct buffer*)come_increment_ref_count(info->source);
                p_411=info->p;
                head_412=info->head;
                sline_413=info->sline;
                __dec_obj212=info->source;
                info->source=(struct buffer*)come_increment_ref_count(method_block2_392);
                come_call_finalizer3(__dec_obj212,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                info->sline=method_block_sline_227;
                node_414=(struct sNode*)come_increment_ref_count(parse_function(info));
                if(                !node_compile(node_414,info)) {
                    __result240__ = (_Bool)0;
                    if(current_stack_frame_node_389) { current_stack_frame_node_389 = come_decrement_ref_count2(current_stack_frame_node_389, ((struct sNode*)current_stack_frame_node_389)->finalize, ((struct sNode*)current_stack_frame_node_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_392,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
                    class_name_394 = come_decrement_ref_count2(class_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_400,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_402,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_410,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result240__;
                }
                method_block_name_415=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value393=buffer_to_string(all_alhabet_sname_402)))));
                __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_value2_416=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1079, "CVALUE"))));
                fun2_417=map$2charphsFunph_at(info->funcs,method_block_name_415,((void*)0));
                if(                fun2_417==((void*)0)) {
                    err_msg(info,"method block function not found(%s)",method_block_name_415);
                    __result241__ = (_Bool)1;
                    if(current_stack_frame_node_389) { current_stack_frame_node_389 = come_decrement_ref_count2(current_stack_frame_node_389, ((struct sNode*)current_stack_frame_node_389)->finalize, ((struct sNode*)current_stack_frame_node_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_392,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
                    class_name_394 = come_decrement_ref_count2(class_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_400,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_402,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_410,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    method_block_name_415 = come_decrement_ref_count2(method_block_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value2_416,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result241__;
                }
                method_block_type2_418=fun2_417->mLambdaType;
                __dec_obj213=come_value2_416->c_value;
                come_value2_416->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_415));
                /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj214=come_value2_416->type;
                come_value2_416->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_418));
                come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value2_416->var=((void*)0);
                list$1CVALUEph_push_back(come_params_352,(struct CVALUE*)come_increment_ref_count(come_value2_416));
                __dec_obj215=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source3_410);
                come_call_finalizer3(__dec_obj215,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_411;
                info->head=head_412;
                info->sline=sline_413;
                info->current_stack_frame_struct=current_stack_frame_struct_398;
                if(current_stack_frame_node_389) { current_stack_frame_node_389 = come_decrement_ref_count2(current_stack_frame_node_389, ((struct sNode*)current_stack_frame_node_389)->finalize, ((struct sNode*)current_stack_frame_node_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_block2_392,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_block_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_394 = come_decrement_ref_count2(class_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_400,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(all_alhabet_sname_402,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(source3_410,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_415 = come_decrement_ref_count2(method_block_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value2_416,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_419=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1104, "buffer"))));
            buffer_append_str(buf_419,fun_name_224);
            buffer_append_str(buf_419,"(");
            j_420=0;
            for(            o2_saved_421=(struct list$1CVALUEph*)come_increment_ref_count((come_params_352)),it_422=list$1CVALUEph_begin((o2_saved_421));            !list$1CVALUEph_end((o2_saved_421));            it_422=list$1CVALUEph_next((o2_saved_421))            ){
                buffer_append_str(buf_419,it_422->c_value);
                if(                j_420!=list$1CVALUEph_length(come_params_352)-1) {
                    buffer_append_str(buf_419,",");
                }
                j_420++;
            }
            /*i*/come_call_finalizer3(o2_saved_421,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_419,")");
            come_value_423=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1121, "CVALUE"))));
            __dec_obj216=come_value_423->c_value;
            come_value_423->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_419));
            /*G*/ __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj217=come_value_423->type;
            come_value_423->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_347));
            come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_423->type->mStatic=(_Bool)0;
            come_value_423->var=((void*)0);
            if(            fun_333->mResultType->mHeap) {
                append_object_to_right_values2(come_value_423,(struct sType*)come_increment_ref_count(result_type_347),info,(_Bool)0);
            }
            if(            string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
                if(                string_operator_not_equals(fun_name_224,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_224,"null_check")&&string_operator_not_equals(fun_name_224,"come_push_stackframe")&&string_operator_not_equals(fun_name_224,"come_pop_stackframe")) {
                    __dec_obj218=come_value_423->c_value;
                    come_value_423->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_423->c_value,come_value_423->type,info));
                    /*G*/ __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            if(            !self->guard_break&&result_type_347->mGuardValue&&result_type_347->mPointerNum>0) {
                __dec_obj219=come_value_423->c_value;
                come_value_423->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value406=make_type_name_string(result_type_347,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_423->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
                /*G*/ __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            add_come_last_code(info,"%s",come_value_423->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_423));
            /*i*/come_call_finalizer3(result_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_352,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_419,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result242__ = (_Bool)1;
    fun_name_224 = come_decrement_ref_count2(fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result242__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result161__;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_216;
struct list_item$1tuple2$2charphsNodephph* it_217;
void* __right_value262 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result166__;
    if(    self==((void*)0)) {
        __result161__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    result_216=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 139, "list$1tuple2$2charphsNodephph"))));
    it_217=self->head;
    while(it_217!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_216,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_217->item)));
        it_217=it_217->next;
    }
    __result166__ = gComeFunResultObject = __result_obj__ = result_216;
    /*i*/come_call_finalizer3(result_216,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_214;
struct list_item$1tuple2$2charphsNodephph* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        /*i*/come_call_finalizer3(prev_it_215,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj138;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj138=self->item;
            come_call_finalizer3(__dec_obj138,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_218;
struct tuple2$2charphsNodeph* __dec_obj141;
void* __right_value257 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_219;
struct tuple2$2charphsNodeph* __dec_obj144;
void* __right_value258 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_220;
struct tuple2$2charphsNodeph* __dec_obj147;
struct list$1tuple2$2charphsNodephph* __result163__;
    if(    self->len==0) {
        litem_218=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value256=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 153, "list_item$1tuple2$2charphsNodephph"))));
        litem_218->prev=((void*)0);
        litem_218->next=((void*)0);
        __dec_obj141=litem_218->item;
        litem_218->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj141,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_218;
        self->head=litem_218;
    }
    else if(    self->len==1) {
        litem_219=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value257=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 163, "list_item$1tuple2$2charphsNodephph"))));
        litem_219->prev=self->head;
        litem_219->next=((void*)0);
        __dec_obj144=litem_219->item;
        litem_219->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj144,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_219;
        self->head->next=litem_219;
    }
    else {
        litem_220=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value258=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 173, "list_item$1tuple2$2charphsNodephph"))));
        litem_220->prev=self->tail;
        litem_220->next=((void*)0);
        __dec_obj147=litem_220->item;
        litem_220->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj147,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_220;
        self->tail=litem_220;
    }
    self->len++;
    __result163__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj148;
struct sNode* __dec_obj149;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj148=self->v1;
            /*G*/ __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj149=self->v2;
            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result164__;
void* __right_value259 = (void*)0;
struct tuple2$2charphsNodeph* result_221;
void* __right_value260 = (void*)0;
char* __dec_obj150;
void* __right_value261 = (void*)0;
struct sNode* __dec_obj151;
struct tuple2$2charphsNodeph* __result165__;
    if(    self==(void*)0) {
        __result164__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    result_221=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj150=result_221->v1;
        result_221->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj151=result_221->v2;
        result_221->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result165__ = gComeFunResultObject = __result_obj__ = result_221;
    /*i*/come_call_finalizer3(result_221,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj152;
struct sNode* __dec_obj153;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj152=self->v1;
            /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj153=self->v2;
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_222;
struct list_item$1tuple2$2charphsNodephph* prev_it_223;
    it_222=self->head;
    while(it_222!=((void*)0)) {
        prev_it_223=it_222;
        it_222=it_222->next;
        /*i*/come_call_finalizer3(prev_it_223,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result170__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result170__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_233;
struct list_item$1CVALUEph* prev_it_234;
    it_233=self->head;
    while(it_233!=((void*)0)) {
        prev_it_234=it_233;
        it_233=it_233->next;
        /*i*/come_call_finalizer3(prev_it_234,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj162;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj162=self->item;
            come_call_finalizer3(__dec_obj162,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_237;
struct tuple2$2charphsNodeph* __result172__;
struct tuple2$2charphsNodeph* __result173__;
struct tuple2$2charphsNodeph* result_238;
struct tuple2$2charphsNodeph* __result174__;
result_237 = (void*)0;
result_238 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_237,0,sizeof(struct tuple2$2charphsNodeph*));
        __result172__ = gComeFunResultObject = __result_obj__ = result_237;
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    self->it=self->head;
    if(    self->it) {
        __result173__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result173__;
    }
    memset(&result_238,0,sizeof(struct tuple2$2charphsNodeph*));
    __result174__ = gComeFunResultObject = __result_obj__ = result_238;
    gComeFunResultObject = (void*)0;
    return __result174__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_240;
struct tuple2$2charphsNodeph* __result175__;
struct tuple2$2charphsNodeph* __result176__;
struct tuple2$2charphsNodeph* result_241;
struct tuple2$2charphsNodeph* __result177__;
result_240 = (void*)0;
result_241 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_240,0,sizeof(struct tuple2$2charphsNodeph*));
        __result175__ = gComeFunResultObject = __result_obj__ = result_240;
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result176__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result176__;
    }
    memset(&result_241,0,sizeof(struct tuple2$2charphsNodeph*));
    __result177__ = gComeFunResultObject = __result_obj__ = result_241;
    gComeFunResultObject = (void*)0;
    return __result177__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_245;
int i_246;
struct sType* __result179__;
struct sType* default_value_247;
struct sType* __result180__;
default_value_247 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_245=self->head;
    i_246=0;
    while(it_245!=((void*)0)) {
        if(        position==i_246) {
            __result179__ = gComeFunResultObject = __result_obj__ = it_245->item;
            gComeFunResultObject = (void*)0;
            return __result179__;
        }
        it_245=it_245->next;
        i_246++;
    }
    memset(&default_value_247,0,sizeof(struct sType*));
    __result180__ = gComeFunResultObject = __result_obj__ = default_value_247;
    /*i*/come_call_finalizer3(default_value_247,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_251;
struct CVALUE* __result181__;
struct CVALUE* __result182__;
struct CVALUE* result_252;
struct CVALUE* __result183__;
result_251 = (void*)0;
result_252 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_251,0,sizeof(struct CVALUE*));
        __result181__ = gComeFunResultObject = __result_obj__ = result_251;
        gComeFunResultObject = (void*)0;
        return __result181__;
    }
    self->it=self->head;
    if(    self->it) {
        __result182__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    memset(&result_252,0,sizeof(struct CVALUE*));
    __result183__ = gComeFunResultObject = __result_obj__ = result_252;
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_254;
struct CVALUE* __result184__;
struct CVALUE* __result185__;
struct CVALUE* result_255;
struct CVALUE* __result186__;
result_254 = (void*)0;
result_255 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_254,0,sizeof(struct CVALUE*));
        __result184__ = gComeFunResultObject = __result_obj__ = result_254;
        gComeFunResultObject = (void*)0;
        return __result184__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result185__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    memset(&result_255,0,sizeof(struct CVALUE*));
    __result186__ = gComeFunResultObject = __result_obj__ = result_255;
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_262;
unsigned int it_263;
struct sFun* __result187__;
struct sFun* __result188__;
struct sFun* __result189__;
struct sFun* __result190__;
    hash_262=string_get_hash_key(((char*)key))%self->size;
    it_263=hash_262;
    while((_Bool)1) {
        if(        self->item_existance[it_263]) {
            if(            string_equals(self->keys[it_263],key)) {
                __result187__ = gComeFunResultObject = __result_obj__ = self->items[it_263];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result187__;
            }
            it_263++;
            if(            it_263>=self->size) {
                it_263=0;
            }
            else if(            it_263==hash_262) {
                __result188__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result188__;
            }
        }
        else {
            __result189__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result189__;
        }
    }
    __result190__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj165;
struct sType* __dec_obj166;
struct list$1sTypeph* __dec_obj167;
struct list$1charph* __dec_obj168;
struct list$1charph* __dec_obj169;
struct sType* __dec_obj170;
struct sBlock* __dec_obj171;
struct buffer* __dec_obj174;
struct buffer* __dec_obj175;
struct buffer* __dec_obj176;
struct buffer* __dec_obj177;
char* __dec_obj178;
char* __dec_obj179;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj165=self->mName;
            /*G*/ __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj166=self->mResultType;
            come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj167=self->mParamTypes;
            come_call_finalizer3(__dec_obj167,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj168=self->mParamNames;
            come_call_finalizer3(__dec_obj168,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj169=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj169,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj170=self->mLambdaType;
            come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj171=self->mBlock;
            come_call_finalizer3(__dec_obj171,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj174=self->mSource;
            come_call_finalizer3(__dec_obj174,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj175=self->mSourceHead;
            come_call_finalizer3(__dec_obj175,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj176=self->mSourceHead2;
            come_call_finalizer3(__dec_obj176,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj177=self->mSourceDefer;
            come_call_finalizer3(__dec_obj177,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj178=self->mComeHeader;
            /*G*/ __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj179=self->mDeclareSName;
            /*G*/ __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj172;
struct sVarTable* __dec_obj173;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj172=self->mNodes;
            come_call_finalizer3(__dec_obj172,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj173=self->mVarTable;
            come_call_finalizer3(__dec_obj173,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_268;
int i_269;
struct CVALUE* __result192__;
struct CVALUE* default_value_270;
struct CVALUE* __result193__;
default_value_270 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_268=self->head;
    i_269=0;
    while(it_268!=((void*)0)) {
        if(        position==i_269) {
            __result192__ = gComeFunResultObject = __result_obj__ = it_268->item;
            gComeFunResultObject = (void*)0;
            return __result192__;
        }
        it_268=it_268->next;
        i_269++;
    }
    memset(&default_value_270,0,sizeof(struct CVALUE*));
    __result193__ = gComeFunResultObject = __result_obj__ = default_value_270;
    /*i*/come_call_finalizer3(default_value_270,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result197__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result197__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_276;
int i_277;
struct sType* default_value_278;
struct list$1sTypeph* __result195__;
struct list_item$1sTypeph* it_282;
int i_283;
struct sType* __dec_obj183;
struct list$1sTypeph* __result196__;
default_value_278 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_276=self->len;
        for(        i_277=0;        i_277<position-len_276;        i_277++        ){
            memset(&default_value_278,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_278));
            /*i*/come_call_finalizer3(default_value_278,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result195__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result195__;
    }
    it_282=self->head;
    i_283=0;
    while(it_282!=((void*)0)) {
        if(        position==i_283) {
            __dec_obj183=it_282->item;
            it_282->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_282=it_282->next;
        i_283++;
    }
    __result196__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result196__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value286 = (void*)0;
struct list_item$1sTypeph* litem_279;
struct sType* __dec_obj180;
void* __right_value287 = (void*)0;
struct list_item$1sTypeph* litem_280;
struct sType* __dec_obj181;
void* __right_value288 = (void*)0;
struct list_item$1sTypeph* litem_281;
struct sType* __dec_obj182;
struct list$1sTypeph* __result194__;
    if(    self->len==0) {
        litem_279=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value286=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 223, "list_item$1sTypeph"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj180=litem_279->item;
        litem_279->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1) {
        litem_280=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value287=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 233, "list_item$1sTypeph"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        __dec_obj181=litem_280->item;
        litem_280->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value288=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 243, "list_item$1sTypeph"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        __dec_obj182=litem_281->item;
        litem_281->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result194__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_286;
struct sType* __result198__;
struct sType* __result199__;
struct sType* result_287;
struct sType* __result200__;
result_286 = (void*)0;
result_287 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_286,0,sizeof(struct sType*));
        __result198__ = gComeFunResultObject = __result_obj__ = result_286;
        gComeFunResultObject = (void*)0;
        return __result198__;
    }
    self->it=self->head;
    if(    self->it) {
        __result199__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result199__;
    }
    memset(&result_287,0,sizeof(struct sType*));
    __result200__ = gComeFunResultObject = __result_obj__ = result_287;
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_289;
struct sType* __result201__;
struct sType* __result202__;
struct sType* result_290;
struct sType* __result203__;
result_289 = (void*)0;
result_290 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_289,0,sizeof(struct sType*));
        __result201__ = gComeFunResultObject = __result_obj__ = result_289;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result202__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    memset(&result_290,0,sizeof(struct sType*));
    __result203__ = gComeFunResultObject = __result_obj__ = result_290;
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
struct list_item$1CVALUEph* litem_300;
struct CVALUE* __dec_obj184;
void* __right_value294 = (void*)0;
struct list_item$1CVALUEph* litem_301;
struct CVALUE* __dec_obj185;
void* __right_value295 = (void*)0;
struct list_item$1CVALUEph* litem_302;
struct CVALUE* __dec_obj186;
struct list$1CVALUEph* __result205__;
    if(    self->len==0) {
        litem_300=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value293=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 153, "list_item$1CVALUEph"))));
        litem_300->prev=((void*)0);
        litem_300->next=((void*)0);
        __dec_obj184=litem_300->item;
        litem_300->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_300;
        self->head=litem_300;
    }
    else if(    self->len==1) {
        litem_301=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value294=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 163, "list_item$1CVALUEph"))));
        litem_301->prev=self->head;
        litem_301->next=((void*)0);
        __dec_obj185=litem_301->item;
        litem_301->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_301;
        self->head->next=litem_301;
    }
    else {
        litem_302=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value295=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 173, "list_item$1CVALUEph"))));
        litem_302->prev=self->tail;
        litem_302->next=((void*)0);
        __dec_obj186=litem_302->item;
        litem_302->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_302;
        self->tail=litem_302;
    }
    self->len++;
    __result205__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_308;
unsigned int it_309;
struct map$2charphsFunph* __result206__;
    hash_308=string_get_hash_key(((char*)key))%self->size;
    it_309=hash_308;
    while((_Bool)1) {
        if(        self->item_existance[it_309]) {
            if(            string_equals(self->keys[it_309],key)) {
                list$1charp_remove(self->key_list,self->keys[it_309]);
                self->item_existance[it_309]=(_Bool)0;
                if(                1) {
                    self->keys[it_309] = come_decrement_ref_count2(self->keys[it_309], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_309]=((void*)0);
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_309],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_309]=((void*)0);
                self->len--;
                break;
            }
            it_309++;
            if(            it_309>=self->size) {
                it_309=0;
            }
            else if(            it_309==hash_308) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result206__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_327;
unsigned int hash_328;
unsigned int it_329;
struct sFun* __result209__;
struct sFun* __result210__;
struct sFun* __result211__;
struct sFun* __result212__;
default_value_327 = (void*)0;
    memset(&default_value_327,0,sizeof(struct sFun*));
    hash_328=string_get_hash_key(((char*)key))%self->size;
    it_329=hash_328;
    while((_Bool)1) {
        if(        self->item_existance[it_329]) {
            if(            string_equals(self->keys[it_329],key)) {
                __result209__ = gComeFunResultObject = __result_obj__ = self->items[it_329];
                /*i*/come_call_finalizer3(default_value_327,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result209__;
            }
            it_329++;
            if(            it_329>=self->size) {
                it_329=0;
            }
            else if(            it_329==hash_328) {
                __result210__ = gComeFunResultObject = __result_obj__ = default_value_327;
                /*i*/come_call_finalizer3(default_value_327,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result210__;
            }
        }
        else {
            __result211__ = gComeFunResultObject = __result_obj__ = default_value_327;
            /*i*/come_call_finalizer3(default_value_327,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result211__;
        }
    }
    __result212__ = gComeFunResultObject = __result_obj__ = default_value_327;
    /*i*/come_call_finalizer3(default_value_327,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_361;
char* __result217__;
char* __result218__;
char* result_362;
char* __result219__;
result_361 = (void*)0;
result_362 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_361,0,sizeof(char*));
        __result217__ = gComeFunResultObject = __result_obj__ = result_361;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    self->it=self->head;
    if(    self->it) {
        __result218__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    memset(&result_362,0,sizeof(char*));
    __result219__ = gComeFunResultObject = __result_obj__ = result_362;
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_364;
char* __result220__;
char* __result221__;
char* result_365;
char* __result222__;
result_364 = (void*)0;
result_365 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_364,0,sizeof(char*));
        __result220__ = gComeFunResultObject = __result_obj__ = result_364;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result221__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    memset(&result_365,0,sizeof(char*));
    __result222__ = gComeFunResultObject = __result_obj__ = result_365;
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_366;
int i_367;
struct CVALUE* default_value_368;
struct list$1CVALUEph* __result223__;
struct list_item$1CVALUEph* it_369;
int i_370;
struct CVALUE* __dec_obj207;
struct list$1CVALUEph* __result224__;
default_value_368 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_366=self->len;
        for(        i_367=0;        i_367<position-len_366;        i_367++        ){
            memset(&default_value_368,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_368));
            /*i*/come_call_finalizer3(default_value_368,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result223__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    it_369=self->head;
    i_370=0;
    while(it_369!=((void*)0)) {
        if(        position==i_370) {
            __dec_obj207=it_369->item;
            it_369->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_369=it_369->next;
        i_370++;
    }
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_379;
int i_380;
char* __result227__;
char* default_value_381;
char* __result228__;
default_value_381 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_379=self->head;
    i_380=0;
    while(it_379!=((void*)0)) {
        if(        position==i_380) {
            __result227__ = gComeFunResultObject = __result_obj__ = it_379->item;
            gComeFunResultObject = (void*)0;
            return __result227__;
        }
        it_379=it_379->next;
        i_380++;
    }
    memset(&default_value_381,0,sizeof(char*));
    __result228__ = gComeFunResultObject = __result_obj__ = default_value_381;
    default_value_381 = come_decrement_ref_count2(default_value_381, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj210;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj210=self->sname;
            /*G*/ __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result232__;
void* __right_value367 = (void*)0;
struct sCurrentNode2* result_390;
void* __right_value368 = (void*)0;
char* __dec_obj211;
struct sCurrentNode2* __result233__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_390=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(    self!=((void*)0)) {
        result_390->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj211=result_390->sname;
        result_390->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_390;
    /*i*/come_call_finalizer3(result_390,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_395;
unsigned int hash_396;
unsigned int it_397;
struct sClass* __result235__;
struct sClass* __result236__;
struct sClass* __result237__;
struct sClass* __result238__;
default_value_395 = (void*)0;
    memset(&default_value_395,0,sizeof(struct sClass*));
    hash_396=string_get_hash_key(((char*)key))%self->size;
    it_397=hash_396;
    while((_Bool)1) {
        if(        self->item_existance[it_397]) {
            if(            string_equals(self->keys[it_397],key)) {
                __result235__ = gComeFunResultObject = __result_obj__ = self->items[it_397];
                /*i*/come_call_finalizer3(default_value_395,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
            it_397++;
            if(            it_397>=self->size) {
                it_397=0;
            }
            else if(            it_397==hash_396) {
                __result236__ = gComeFunResultObject = __result_obj__ = default_value_395;
                /*i*/come_call_finalizer3(default_value_395,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result236__;
            }
        }
        else {
            __result237__ = gComeFunResultObject = __result_obj__ = default_value_395;
            /*i*/come_call_finalizer3(default_value_395,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result237__;
        }
    }
    __result238__ = gComeFunResultObject = __result_obj__ = default_value_395;
    /*i*/come_call_finalizer3(default_value_395,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value416 = (void*)0;
struct sNode* __result245__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1155, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunCallNode*)(__right_value409=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1155, "sFunCallNode")),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,throw_or_rescue,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunCallNode_finalize;
    _inf_value2->clone=(void*)sFunCallNode_clone;
    _inf_value2->compile=(void*)sFunCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sFunCallNode_terminated;
    _inf_value2->kind=(void*)sFunCallNode_kind;
    __result245__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value416=_inf_value2));
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value409,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value416) { __right_value416 = come_decrement_ref_count2(__right_value416, ((struct sNode*)__right_value416)->finalize, ((struct sNode*)__right_value416)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result245__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj230;
void* __right_value418 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj231;
struct sLambdaCall* __result246__;
    ((struct sNodeBase*)(__right_value417=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value417,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj230=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj231=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj231,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result246__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
char* __result247__;
    __result247__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value419=__builtin_string("sLambdaCall")));
    __right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_425;
struct list$1tuple2$2charphsNodephph* params_426;
_Bool __result248__;
void* __right_value420 = (void*)0;
struct CVALUE* come_value_427;
struct sType* lambda_type_428;
_Bool __result249__;
void* __right_value421 = (void*)0;
struct sType* result_type_429;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1CVALUEph* come_params_430;
_Bool __result250__;
int i_431;
struct list$1tuple2$2charphsNodephph* o2_saved_432;
struct tuple2$2charphsNodeph* it_433;
struct tuple2$2charphsNodeph* multiple_assign_var7;
char* label_434;
struct sNode* node_435;
_Bool __result251__;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_436;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct buffer* buf_437;
int j_438;
struct list$1CVALUEph* o2_saved_439;
struct CVALUE* it_440;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct CVALUE* come_value2_441;
void* __right_value431 = (void*)0;
char* __dec_obj235;
void* __right_value432 = (void*)0;
struct sType* __dec_obj236;
_Bool __result252__;
    node_425=(struct sNode*)come_increment_ref_count(self->node);
    params_426=self->params;
    if(    !node_compile(node_425,info)) {
        __result248__ = (_Bool)0;
        if(node_425) { node_425 = come_decrement_ref_count2(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result248__;
    }
    come_value_427=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_428=come_value_427->type;
    if(    lambda_type_428->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result249__ = (_Bool)0;
        if(node_425) { node_425 = come_decrement_ref_count2(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result249__;
    }
    result_type_429=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_428->mResultType->v1));
    result_type_429->mStatic=(_Bool)0;
    come_params_430=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1195, "list$1CVALUEph"))));
    if(    list$1sTypeph_length(lambda_type_428->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_426)&&!lambda_type_428->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_428->mParamTypes),list$1tuple2$2charphsNodephph_length(params_426));
        __result250__ = (_Bool)0;
        if(node_425) { node_425 = come_decrement_ref_count2(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_429,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result250__;
    }
    i_431=0;
    for(    o2_saved_432=(params_426),it_433=list$1tuple2$2charphsNodephph_begin((o2_saved_432));    !list$1tuple2$2charphsNodephph_end((o2_saved_432));    it_433=list$1tuple2$2charphsNodephph_next((o2_saved_432))    ){
        multiple_assign_var7=it_433;
        label_434=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_435=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        !node_compile(node_435,info)) {
            __result251__ = (_Bool)0;
            label_434 = come_decrement_ref_count2(label_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_435) { node_435 = come_decrement_ref_count2(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_425) { node_425 = come_decrement_ref_count2(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_429,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result251__;
        }
        come_value_436=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        lambda_type_428->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_428->mParamTypes,i_431), "05call.c", 1211, 21))==((void*)0)) {
        }
        else {
            check_assign_type(((char*)(__right_value426=xsprintf("calling param #\%s",((char*)(__right_value425=int_to_string(i_431)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_428->mParamTypes,i_431), "05call.c", 1214, 22)),come_value_436->type,come_value_436,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_428->mParamTypes,i_431), "05call.c", 1215, 23))->mHeap&&come_value_436->type->mHeap) {
                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_428->mParamTypes,i_431), "05call.c", 1216, 24)),come_value_436->type,come_value_436,info,(_Bool)1);
            }
        }
        list$1CVALUEph_push_back(come_params_430,(struct CVALUE*)come_increment_ref_count(come_value_436));
        dec_stack_ptr(1,info);
        i_431++;
        label_434 = come_decrement_ref_count2(label_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_435) { node_435 = come_decrement_ref_count2(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_437=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1226, "buffer"))));
    buffer_append_str(buf_437,"(");
    buffer_append_str(buf_437,come_value_427->c_value);
    buffer_append_str(buf_437,")");
    buffer_append_str(buf_437,"(");
    j_438=0;
    for(    o2_saved_439=(struct list$1CVALUEph*)come_increment_ref_count((come_params_430)),it_440=list$1CVALUEph_begin((o2_saved_439));    !list$1CVALUEph_end((o2_saved_439));    it_440=list$1CVALUEph_next((o2_saved_439))    ){
        buffer_append_str(buf_437,it_440->c_value);
        if(        j_438!=list$1CVALUEph_length(come_params_430)-1) {
            buffer_append_str(buf_437,",");
        }
        j_438++;
    }
    /*i*/come_call_finalizer3(o2_saved_439,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_437,")");
    come_value2_441=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1245, "CVALUE"))));
    __dec_obj235=come_value2_441->c_value;
    come_value2_441->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_437));
    /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_428->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_441,(struct sType*)come_increment_ref_count(lambda_type_428->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj236=come_value2_441->type;
    come_value2_441->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_429));
    come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_441->type->mStatic=(_Bool)0;
    come_value2_441->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_441->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_441));
    __result252__ = (_Bool)1;
    if(node_425) { node_425 = come_decrement_ref_count2(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_430,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_437,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result252__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
struct sType* __dec_obj237;
struct sVarArgTypeName* __result253__;
    ((struct sNodeBase*)(__right_value433=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value433,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj237=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
char* __result254__;
    __result254__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value434=__builtin_string("sVarArgTypeName")));
    __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_442;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value437 = (void*)0;
char* __dec_obj240;
struct sType* __dec_obj241;
_Bool __result255__;
    type_442=(struct sType*)come_increment_ref_count(self->type);
    come_value_443=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1282, "CVALUE"))));
    __dec_obj240=come_value_443->c_value;
    come_value_443->c_value=(char*)come_increment_ref_count(make_type_name_string(type_442,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    /*G*/ __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj241=come_value_443->type;
    come_value_443->type=(struct sType*)come_increment_ref_count(type_442);
    come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_443->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_443));
    __result255__ = (_Bool)1;
    /*i*/come_call_finalizer3(type_442,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result255__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct list$1sTypeph* method_generics_types_444;
void* __right_value440 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_445;
char* name_446;
_Bool err_447;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_448;
_Bool _va_arg_449;
char* p_450;
int sline_451;
_Bool err_flag_452;
void* __right_value444 = (void*)0;
char* label_453;
void* __right_value445 = (void*)0;
char* __dec_obj244;
char* __dec_obj245;
_Bool no_comma_454;
_Bool in_fun_param_455;
void* __right_value446 = (void*)0;
struct sNode* node_456;
void* __right_value447 = (void*)0;
struct sNode* __dec_obj246;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
_Bool guard_break_460;
struct buffer* method_block_461;
int method_block_sline_462;
char* head_463;
void* __right_value453 = (void*)0;
char* tail_464;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct buffer* __dec_obj252;
int len_465;
void* __right_value456 = (void*)0;
char* mem_466;
_Bool throw_or_rescue_467;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value465 = (void*)0;
struct sNode* node_468;
void* __right_value466 = (void*)0;
struct sNode* __dec_obj263;
struct sNode* __result260__;
    method_generics_types_444=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1296, "list$1sTypeph"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
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
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value440=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_445=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_446=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_447=multiple_assign_var8->v3;
                /*g*/come_call_finalizer3(__right_value440,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_447) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_444,(struct sType*)come_increment_ref_count(sType_clone(type_445)));
                /*i*/come_call_finalizer3(type_445,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_446 = come_decrement_ref_count2(name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_448=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1334, "list$1tuple2$2charphsNodephph"))));
    _va_arg_449=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_450=info->p;
        sline_451=info->sline;
        err_flag_452=(_Bool)0;
        label_453=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj244=label_453;
            label_453=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_452=(_Bool)1;
        }
        if(        err_flag_452==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj245=label_453;
            label_453=((void*)0);
            /*G*/ __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_450;
            info->sline=sline_451;
        }
        no_comma_454=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_455=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_456=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj246=node_456;
        node_456=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_456),info));
        if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_454;
        info->in_fun_param=in_fun_param_455;
        list$1tuple2$2charphsNodephph_push_back(params_448,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1382, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_453),(struct sNode*)come_increment_ref_count(node_456))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_453 = come_decrement_ref_count2(label_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_456) { node_456 = come_decrement_ref_count2(node_456, ((struct sNode*)node_456)->finalize, ((struct sNode*)node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_453 = come_decrement_ref_count2(label_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_456) { node_456 = come_decrement_ref_count2(node_456, ((struct sNode*)node_456)->finalize, ((struct sNode*)node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_449;
    guard_break_460=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_460=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_461=((void*)0);
    method_block_sline_462=0;
    if(    *info->p==123) {
        head_463=info->p;
        method_block_sline_462=info->sline;
        ((char*)(__right_value453=skip_block(info)));
        __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_464=info->p;
        __dec_obj252=method_block_461;
        method_block_461=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1419, "buffer"))));
        come_call_finalizer3(__dec_obj252,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_465=tail_464-head_463;
        mem_466=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_465+1)), "05call.c", 1422, "char"));
        memcpy(mem_466,head_463,len_465);
        mem_466[len_465]=0;
        buffer_append_str(method_block_461,mem_466);
        buffer_append_str(method_block_461,"\n");
        mem_466 = come_decrement_ref_count2(mem_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    throw_or_rescue_467=(_Bool)0;
    if(    strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0) {
        throw_or_rescue_467=(_Bool)1;
    }
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1439, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunCallNode*)(__right_value458=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1439, "sFunCallNode")),fun_name,params_448,guard_break_460,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_444),(struct buffer*)come_increment_ref_count(method_block_461),method_block_sline_462,throw_or_rescue_467,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_468=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value458,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj263=node_468;
    node_468=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_468),info));
    if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
    __result260__ = gComeFunResultObject = __result_obj__ = node_468;
    /*i*/come_call_finalizer3(method_generics_types_444,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(params_448,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block_461,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_468) { node_468 = come_decrement_ref_count2(node_468, ((struct sNode*)node_468)->finalize, ((struct sNode*)node_468)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj242;
char* __dec_obj243;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj242=self->v1;
            come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj243=self->v2;
            /*G*/ __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value448 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_457;
struct tuple2$2charphsNodeph* __dec_obj247;
void* __right_value449 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_458;
struct tuple2$2charphsNodeph* __dec_obj248;
void* __right_value450 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_459;
struct tuple2$2charphsNodeph* __dec_obj249;
struct list$1tuple2$2charphsNodephph* __result256__;
    if(    self->len==0) {
        litem_457=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value448=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 223, "list_item$1tuple2$2charphsNodephph"))));
        litem_457->prev=((void*)0);
        litem_457->next=((void*)0);
        __dec_obj247=litem_457->item;
        litem_457->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj247,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_457;
        self->head=litem_457;
    }
    else if(    self->len==1) {
        litem_458=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value449=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 233, "list_item$1tuple2$2charphsNodephph"))));
        litem_458->prev=self->head;
        litem_458->next=((void*)0);
        __dec_obj248=litem_458->item;
        litem_458->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj248,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_458;
        self->head->next=litem_458;
    }
    else {
        litem_459=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value450=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 243, "list_item$1tuple2$2charphsNodephph"))));
        litem_459->prev=self->tail;
        litem_459->next=((void*)0);
        __dec_obj249=litem_459->item;
        litem_459->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj249,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_459;
        self->tail=litem_459;
    }
    self->len++;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj250;
struct sNode* __dec_obj251;
struct tuple2$2charphsNodeph* __result257__;
    __dec_obj250=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj251=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj253;
char* __dec_obj254;
struct list$1tuple2$2charphsNodephph* __dec_obj255;
struct list$1sTypeph* __dec_obj256;
struct buffer* __dec_obj257;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj253=self->sname;
            /*G*/ __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj254=self->fun_name;
            /*G*/ __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj255=self->params;
            come_call_finalizer3(__dec_obj255,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj256=self->method_generics_types;
            come_call_finalizer3(__dec_obj256,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj257=self->method_block;
            come_call_finalizer3(__dec_obj257,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result258__;
void* __right_value459 = (void*)0;
struct sFunCallNode* result_469;
void* __right_value460 = (void*)0;
char* __dec_obj258;
void* __right_value461 = (void*)0;
char* __dec_obj259;
void* __right_value462 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj260;
void* __right_value463 = (void*)0;
struct list$1sTypeph* __dec_obj261;
void* __right_value464 = (void*)0;
struct buffer* __dec_obj262;
struct sFunCallNode* __result259__;
    if(    self==(void*)0) {
        __result258__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    result_469=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(    self!=((void*)0)) {
        result_469->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj258=result_469->sname;
        result_469->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj259=result_469->fun_name;
        result_469->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        /*G*/ __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj260=result_469->params;
        result_469->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj260,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_469->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj261=result_469->method_generics_types;
        result_469->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj261,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj262=result_469->method_block;
        result_469->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj262,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_469->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)) {
        result_469->throw_or_rescue=self->throw_or_rescue;
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_469;
    /*i*/come_call_finalizer3(result_469,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result261__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result261__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sNode* _inf_value4;
struct sReturnNode* _inf_obj_value4;
void* __right_value473 = (void*)0;
struct sNode* __result264__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1460, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sReturnNode*)(__right_value468=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1460, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sReturnNode_finalize;
    _inf_value4->clone=(void*)sReturnNode_clone;
    _inf_value4->compile=(void*)sReturnNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sReturnNode_kind;
    __result264__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value473=_inf_value4));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value468,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value473) { __right_value473 = come_decrement_ref_count2(__right_value473, ((struct sNode*)__right_value473)->finalize, ((struct sNode*)__right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result264__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value481 = (void*)0;
struct sNode* __result267__;
char* head_472;
void* __right_value482 = (void*)0;
struct sNode* value_473;
char* tail_474;
void* __right_value483 = (void*)0;
struct sNode* __dec_obj276;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value491 = (void*)0;
struct sNode* __result270__;
char* head_477;
int head_sline_478;
void* __right_value492 = (void*)0;
char* buf_479;
_Bool is_type_name__480;
_Bool is_special_word_482;
_Bool define_function_pointer_flag_483;
void* __right_value493 = (void*)0;
_Bool lambda_flag_484;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
char* word2_485;
_Bool fun_name_with_type_name_486;
void* __right_value496 = (void*)0;
char* word2_487;
_Bool call_method_generics_fun_call_488;
void* __right_value497 = (void*)0;
char* __dec_obj283;
int nest_489;
_Bool new__490;
void* __right_value498 = (void*)0;
char* __dec_obj284;
struct sClass* klass_491;
struct sClass* generics_class_492;
int nest_493;
void* __right_value499 = (void*)0;
char* __dec_obj285;
void* __right_value500 = (void*)0;
struct sNode* node_494;
struct sNode* __result271__;
void* __right_value501 = (void*)0;
struct sNode* node_495;
struct sNode* __result272__;
void* __right_value502 = (void*)0;
struct sNode* node_496;
struct sNode* __result273__;
void* __right_value503 = (void*)0;
struct sNode* node_497;
struct sNode* __result274__;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* _inf_value7;
struct sFuncNode* _inf_obj_value7;
void* __right_value508 = (void*)0;
struct sNode* __result277__;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sNode* _inf_value8;
struct sWildCard* _inf_obj_value8;
void* __right_value513 = (void*)0;
struct sNode* __result280__;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sNode* _inf_value9;
struct sLineNode* _inf_obj_value9;
void* __right_value518 = (void*)0;
struct sNode* __result283__;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sNode* _inf_value10;
struct sSNameNode* _inf_obj_value10;
void* __right_value523 = (void*)0;
struct sNode* __result286__;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sNode* _inf_value11;
struct sCallerFuncNode* _inf_obj_value11;
void* __right_value528 = (void*)0;
struct sNode* __result289__;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sNode* _inf_value12;
struct sCallerLineNode* _inf_obj_value12;
void* __right_value533 = (void*)0;
struct sNode* __result292__;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sNode* _inf_value13;
struct sCallerSNameNode* _inf_obj_value13;
void* __right_value538 = (void*)0;
struct sNode* __result295__;
void* __right_value539 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_505;
char* name_506;
_Bool err_507;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sNode* _inf_value14;
struct sVarArgTypeName* _inf_obj_value14;
void* __right_value545 = (void*)0;
struct sNode* __result298__;
void* __right_value546 = (void*)0;
struct sNode* node_509;
struct sNode* __result299__;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct buffer* fun_name_510;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sType* type_511;
void* __right_value551 = (void*)0;
struct sClass* klass_515;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj304;
void* __right_value554 = (void*)0;
char* buf2_516;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* node_517;
struct sNode* __result304__;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct buffer* fun_name_518;
void* __right_value559 = (void*)0;
char* buf2_519;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sNode* node_520;
struct sNode* __result305__;
void* __right_value562 = (void*)0;
struct sNode* node_521;
struct sNode* __result306__;
void* __right_value563 = (void*)0;
struct sNode* node_522;
struct sNode* __result307__;
void* __right_value564 = (void*)0;
struct sNode* node_523;
struct sNode* __result308__;
void* __right_value565 = (void*)0;
struct sNode* node_524;
struct sNode* __result309__;
struct sNode* __result310__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1473, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sReturnNode*)(__right_value476=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1473, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sReturnNode_finalize;
            _inf_value5->clone=(void*)sReturnNode_clone;
            _inf_value5->compile=(void*)sReturnNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sReturnNode_kind;
            __result267__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value481=_inf_value5));
            /*g*/come_call_finalizer3(__right_value476,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value481) { __right_value481 = come_decrement_ref_count2(__right_value481, ((struct sNode*)__right_value481)->finalize, ((struct sNode*)__right_value481)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
        else {
            head_472=info->p;
            value_473=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_474=info->p;
            __dec_obj276=value_473;
            value_473=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_473),info));
            if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_475[tail_474-head_472+1];
            memset(&buf_475, 0, sizeof(char)            *(tail_474-head_472+1)            );
            memcpy(buf_475,head_472,tail_474-head_472);
            buf_475[tail_474-head_472]=0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1485, "struct sNode");
            _inf_obj_value6=come_increment_ref_count(((struct sReturnNode*)(__right_value486=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1485, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_473),(char*)come_increment_ref_count(__builtin_string(buf_475)),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result270__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value491=_inf_value6));
            if(value_473) { value_473 = come_decrement_ref_count2(value_473, ((struct sNode*)value_473)->finalize, ((struct sNode*)value_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value486,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value491) { __right_value491 = come_decrement_ref_count2(__right_value491, ((struct sNode*)__right_value491)->finalize, ((struct sNode*)__right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result270__;
            if(value_473) { value_473 = come_decrement_ref_count2(value_473, ((struct sNode*)value_473)->finalize, ((struct sNode*)value_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
        head_477=info->p;
        head_sline_478=info->sline;
        buf_479=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__480=is_type_name(buf_479,info);
        static char* is_special_word_array_481[18]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__"};
        is_special_word_482=charppa_contained(is_special_word_array_481,18,buf_479);
        define_function_pointer_flag_483=(_Bool)0;
        if(        !is_special_word_482&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value493=backtrace_parse_type((_Bool)0,info)));
            /*g*/come_call_finalizer3(__right_value493,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_483=(_Bool)1;
                }
            }
            info->p=head_477;
            info->sline=head_sline_478;
        }
        lambda_flag_484=(_Bool)0;
        if(        !is_special_word_482&&is_type_name__480) {
            info->p=head_477;
            info->sline=head_sline_478;
            ((struct tuple3$3sTypephcharphbool*)(__right_value494=backtrace_parse_type((_Bool)0,info)));
            /*g*/come_call_finalizer3(__right_value494,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_485=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_485,"lambda")) {
                lambda_flag_484=(_Bool)1;
            }
            info->p=head_477;
            info->sline=head_sline_478;
            word2_485 = come_decrement_ref_count2(word2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_486=(_Bool)0;
        if(        !is_special_word_482) {
            info->p=head_477;
            info->sline=head_sline_478;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_487=(char*)come_increment_ref_count(parse_word(info));
                word2_487 = come_decrement_ref_count2(word2_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_486=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_477;
            info->sline=head_sline_478;
        }
        call_method_generics_fun_call_488=(_Bool)0;
        {
            info->p=head_477;
            info->sline=head_sline_478;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj283=buf_479;
                buf_479=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            !is_type_name(buf_479,info)&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_479)==((void*)0)&&map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_479)==((void*)0)&&*info->p==60) {
                nest_489=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_489++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_489==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40) {
                    call_method_generics_fun_call_488=(_Bool)1;
                }
            }
            info->p=head_477;
            info->sline=head_sline_478;
        }
        new__490=(_Bool)0;
        if(        !is_special_word_482) {
            info->p=head_477;
            info->sline=head_sline_478;
            __dec_obj284=buf_479;
            buf_479=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_491=map$2charphsClassphp_operator_load_element(info->classes,buf_479);
            if(            klass_491&&*info->p==123) {
                new__490=(_Bool)1;
            }
            generics_class_492=map$2charphsClassphp_operator_load_element(info->generics_classes,buf_479);
            if(            generics_class_492&&*info->p==60) {
                nest_493=0;
                while((_Bool)1) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_493++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        nest_493--;
                        if(                        nest_493==0) {
                            skip_spaces_and_lf(info);
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==123) {
                    new__490=(_Bool)1;
                }
            }
            info->p=head_477;
            info->sline=head_sline_478;
        }
        parse_sharp_v5(info);
        __dec_obj285=buf_479;
        buf_479=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_484) {
            info->p=head_477;
            info->sline=head_sline_478;
            node_494=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result271__ = gComeFunResultObject = __result_obj__ = node_494;
            if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result271__;
            if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_479,"string")||string_operator_equals(buf_479,"wstring"))&&*info->p==40) {
            node_495=(struct sNode*)come_increment_ref_count(parse_function_call(buf_479,info));
            __result272__ = gComeFunResultObject = __result_obj__ = node_495;
            if(node_495) { node_495 = come_decrement_ref_count2(node_495, ((struct sNode*)node_495)->finalize, ((struct sNode*)node_495)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result272__;
            if(node_495) { node_495 = come_decrement_ref_count2(node_495, ((struct sNode*)node_495)->finalize, ((struct sNode*)node_495)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_479,"none")&&*info->p==40) {
            node_496=(struct sNode*)come_increment_ref_count(parse_none(info));
            __result273__ = gComeFunResultObject = __result_obj__ = node_496;
            if(node_496) { node_496 = come_decrement_ref_count2(node_496, ((struct sNode*)node_496)->finalize, ((struct sNode*)node_496)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result273__;
            if(node_496) { node_496 = come_decrement_ref_count2(node_496, ((struct sNode*)node_496)->finalize, ((struct sNode*)node_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_479,"some")&&*info->p==40) {
            node_497=(struct sNode*)come_increment_ref_count(parse_some(info));
            __result274__ = gComeFunResultObject = __result_obj__ = node_497;
            if(node_497) { node_497 = come_decrement_ref_count2(node_497, ((struct sNode*)node_497)->finalize, ((struct sNode*)node_497)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result274__;
            if(node_497) { node_497 = come_decrement_ref_count2(node_497, ((struct sNode*)node_497)->finalize, ((struct sNode*)node_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_479,"__func__")||string_operator_equals(buf_479,"__FUNCTION__")) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1691, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sFuncNode*)(__right_value505=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 1691, "sFuncNode")),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFuncNode_finalize;
            _inf_value7->clone=(void*)sFuncNode_clone;
            _inf_value7->compile=(void*)sFuncNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFuncNode_kind;
            __result277__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value508=_inf_value7));
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value505,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value508) { __right_value508 = come_decrement_ref_count2(__right_value508, ((struct sNode*)__right_value508)->finalize, ((struct sNode*)__right_value508)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result277__;
        }
        else if(        string_operator_equals(buf_479,"wildcard")) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1694, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sWildCard*)(__right_value510=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 1694, "sWildCard")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sWildCard_finalize;
            _inf_value8->clone=(void*)sWildCard_clone;
            _inf_value8->compile=(void*)sWildCard_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sWildCard_kind;
            __result280__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value513=_inf_value8));
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value510,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value513) { __right_value513 = come_decrement_ref_count2(__right_value513, ((struct sNode*)__right_value513)->finalize, ((struct sNode*)__right_value513)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result280__;
        }
        else if(        string_operator_equals(buf_479,"__line__")||string_operator_equals(buf_479,"__LINE__")) {
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1697, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sLineNode*)(__right_value515=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 1697, "sLineNode")),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sLineNode_finalize;
            _inf_value9->clone=(void*)sLineNode_clone;
            _inf_value9->compile=(void*)sLineNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sLineNode_kind;
            __result283__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value518=_inf_value9));
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value515,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value518) { __right_value518 = come_decrement_ref_count2(__right_value518, ((struct sNode*)__right_value518)->finalize, ((struct sNode*)__right_value518)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result283__;
        }
        else if(        string_operator_equals(buf_479,"__sname__")) {
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1700, "struct sNode");
            _inf_obj_value10=come_increment_ref_count(((struct sSNameNode*)(__right_value520=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 1700, "sSNameNode")),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSNameNode_finalize;
            _inf_value10->clone=(void*)sSNameNode_clone;
            _inf_value10->compile=(void*)sSNameNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSNameNode_kind;
            __result286__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value523=_inf_value10));
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value520,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value523) { __right_value523 = come_decrement_ref_count2(__right_value523, ((struct sNode*)__right_value523)->finalize, ((struct sNode*)__right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result286__;
        }
        else if(        string_operator_equals(buf_479,"__caller_func__")) {
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1703, "struct sNode");
            _inf_obj_value11=come_increment_ref_count(((struct sCallerFuncNode*)(__right_value525=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 1703, "sCallerFuncNode")),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value11->clone=(void*)sCallerFuncNode_clone;
            _inf_value11->compile=(void*)sCallerFuncNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sCallerFuncNode_kind;
            __result289__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value528=_inf_value11));
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value525,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value528) { __right_value528 = come_decrement_ref_count2(__right_value528, ((struct sNode*)__right_value528)->finalize, ((struct sNode*)__right_value528)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result289__;
        }
        else if(        string_operator_equals(buf_479,"__caller_line__")) {
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1706, "struct sNode");
            _inf_obj_value12=come_increment_ref_count(((struct sCallerLineNode*)(__right_value530=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 1706, "sCallerLineNode")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sCallerLineNode_finalize;
            _inf_value12->clone=(void*)sCallerLineNode_clone;
            _inf_value12->compile=(void*)sCallerLineNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sCallerLineNode_kind;
            __result292__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value533=_inf_value12));
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value530,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value533) { __right_value533 = come_decrement_ref_count2(__right_value533, ((struct sNode*)__right_value533)->finalize, ((struct sNode*)__right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result292__;
        }
        else if(        string_operator_equals(buf_479,"__caller_sname__")) {
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1709, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sCallerSNameNode*)(__right_value535=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 1709, "sCallerSNameNode")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value13->clone=(void*)sCallerSNameNode_clone;
            _inf_value13->compile=(void*)sCallerSNameNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sCallerSNameNode_kind;
            __result295__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value538=_inf_value13));
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value535,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value538) { __right_value538 = come_decrement_ref_count2(__right_value538, ((struct sNode*)__right_value538)->finalize, ((struct sNode*)__right_value538)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result295__;
        }
        else if(        info->va_arg&&is_type_name(buf_479,info)) {
            info->p=head_477;
            info->sline=head_sline_478;
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value539=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_505=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_506=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_507=multiple_assign_var9->v3;
            /*g*/come_call_finalizer3(__right_value539,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1717, "struct sNode");
            _inf_obj_value14=come_increment_ref_count(((struct sVarArgTypeName*)(__right_value541=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 1717, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_505),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value14->clone=(void*)sVarArgTypeName_clone;
            _inf_value14->compile=(void*)sVarArgTypeName_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sVarArgTypeName_kind;
            __result298__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value545=_inf_value14));
            /*i*/come_call_finalizer3(type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_506 = come_decrement_ref_count2(name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value541,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value545) { __right_value545 = come_decrement_ref_count2(__right_value545, ((struct sNode*)__right_value545)->finalize, ((struct sNode*)__right_value545)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result298__;
            /*i*/come_call_finalizer3(type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_506 = come_decrement_ref_count2(name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        new__490||(string_operator_equals(buf_479,"sizeof")||string_operator_equals(buf_479,"_Alignof")||string_operator_equals(buf_479,"_Alignas")||string_operator_equals(buf_479,"__alignof__"))&&*info->p==40) {
            info->new_=new__490;
            node_509=(struct sNode*)come_increment_ref_count(string_node_v21(buf_479,head_477,head_sline_478,info));
            info->new_=(_Bool)0;
            __result299__ = gComeFunResultObject = __result_obj__ = node_509;
            if(node_509) { node_509 = come_decrement_ref_count2(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result299__;
            if(node_509) { node_509 = come_decrement_ref_count2(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        fun_name_with_type_name_486) {
            fun_name_510=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1727, "buffer"))));
            buffer_append_str(fun_name_510,buf_479);
            type_511=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value549=buffer_to_string(fun_name_510))))));
            __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            type_511==((void*)0)) {
                klass_515=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value551=buffer_to_string(fun_name_510))));
                __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                klass_515) {
                    __dec_obj304=type_511;
                    type_511=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1737, "sType")),buf_479,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj304,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_479);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_511->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_510,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_510,"_");
            buf2_516=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_510,buf2_516);
            node_517=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value555=buffer_to_string(fun_name_510))),info));
            __right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result304__ = gComeFunResultObject = __result_obj__ = node_517;
            /*i*/come_call_finalizer3(fun_name_510,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_511,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_516 = come_decrement_ref_count2(buf2_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_517) { node_517 = come_decrement_ref_count2(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result304__;
            /*i*/come_call_finalizer3(fun_name_510,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_511,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_516 = come_decrement_ref_count2(buf2_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_517) { node_517 = come_decrement_ref_count2(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_518=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1771, "buffer"))));
            buffer_append_str(fun_name_518,buf_479);
            buffer_append_str(fun_name_518,"_");
            buf2_519=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_518,buf2_519);
            node_520=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value560=buffer_to_string(fun_name_518))),info));
            __right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result305__ = gComeFunResultObject = __result_obj__ = node_520;
            /*i*/come_call_finalizer3(fun_name_518,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_519 = come_decrement_ref_count2(buf2_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_520) { node_520 = come_decrement_ref_count2(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result305__;
            /*i*/come_call_finalizer3(fun_name_518,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_519 = come_decrement_ref_count2(buf2_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_520) { node_520 = come_decrement_ref_count2(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_488) {
            node_521=(struct sNode*)come_increment_ref_count(parse_function_call(buf_479,info));
            __result306__ = gComeFunResultObject = __result_obj__ = node_521;
            if(node_521) { node_521 = come_decrement_ref_count2(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result306__;
            if(node_521) { node_521 = come_decrement_ref_count2(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_482&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__480)) {
            node_522=(struct sNode*)come_increment_ref_count(parse_function_call(buf_479,info));
            __result307__ = gComeFunResultObject = __result_obj__ = node_522;
            if(node_522) { node_522 = come_decrement_ref_count2(node_522, ((struct sNode*)node_522)->finalize, ((struct sNode*)node_522)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result307__;
            if(node_522) { node_522 = come_decrement_ref_count2(node_522, ((struct sNode*)node_522)->finalize, ((struct sNode*)node_522)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            info->new_=new__490;
            node_523=(struct sNode*)come_increment_ref_count(string_node_v21(buf_479,head_477,head_sline_478,info));
            info->new_=(_Bool)0;
            __result308__ = gComeFunResultObject = __result_obj__ = node_523;
            if(node_523) { node_523 = come_decrement_ref_count2(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result308__;
            if(node_523) { node_523 = come_decrement_ref_count2(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_479 = come_decrement_ref_count2(buf_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_524=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result309__ = gComeFunResultObject = __result_obj__ = node_524;
        if(node_524) { node_524 = come_decrement_ref_count2(node_524, ((struct sNode*)node_524)->finalize, ((struct sNode*)node_524)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result309__;
        if(node_524) { node_524 = come_decrement_ref_count2(node_524, ((struct sNode*)node_524)->finalize, ((struct sNode*)node_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result310__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj277;
struct sNode* __dec_obj278;
char* __dec_obj279;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj277=self->sname;
            /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj278=self->value;
            if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj279=self->value_source;
            /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result268__;
void* __right_value487 = (void*)0;
struct sReturnNode* result_476;
void* __right_value488 = (void*)0;
char* __dec_obj280;
void* __right_value489 = (void*)0;
struct sNode* __dec_obj281;
void* __right_value490 = (void*)0;
char* __dec_obj282;
struct sReturnNode* __result269__;
    if(    self==(void*)0) {
        __result268__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    result_476=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(    self!=((void*)0)) {
        result_476->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj280=result_476->sname;
        result_476->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj281=result_476->value;
        result_476->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj282=result_476->value_source;
        result_476->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result269__ = gComeFunResultObject = __result_obj__ = result_476;
    /*i*/come_call_finalizer3(result_476,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj286;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj286=self->sname;
            /*G*/ __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result275__;
void* __right_value506 = (void*)0;
struct sFuncNode* result_498;
void* __right_value507 = (void*)0;
char* __dec_obj287;
struct sFuncNode* __result276__;
    if(    self==(void*)0) {
        __result275__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_498=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(    self!=((void*)0)) {
        result_498->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj287=result_498->sname;
        result_498->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_498;
    /*i*/come_call_finalizer3(result_498,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj288;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj288=self->sname;
            /*G*/ __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result278__;
void* __right_value511 = (void*)0;
struct sWildCard* result_499;
void* __right_value512 = (void*)0;
char* __dec_obj289;
struct sWildCard* __result279__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_499=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "sWildCard"));
    if(    self!=((void*)0)) {
        result_499->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj289=result_499->sname;
        result_499->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_499;
    /*i*/come_call_finalizer3(result_499,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj290;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj290=self->sname;
            /*G*/ __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result281__;
void* __right_value516 = (void*)0;
struct sLineNode* result_500;
void* __right_value517 = (void*)0;
char* __dec_obj291;
struct sLineNode* __result282__;
    if(    self==(void*)0) {
        __result281__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_500=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(    self!=((void*)0)) {
        result_500->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj291=result_500->sname;
        result_500->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_500;
    /*i*/come_call_finalizer3(result_500,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj292;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj292=self->sname;
            /*G*/ __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result284__;
void* __right_value521 = (void*)0;
struct sSNameNode* result_501;
void* __right_value522 = (void*)0;
char* __dec_obj293;
struct sSNameNode* __result285__;
    if(    self==(void*)0) {
        __result284__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    result_501=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(    self!=((void*)0)) {
        result_501->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj293=result_501->sname;
        result_501->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result285__ = gComeFunResultObject = __result_obj__ = result_501;
    /*i*/come_call_finalizer3(result_501,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj294;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj294=self->sname;
            /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result287__;
void* __right_value526 = (void*)0;
struct sCallerFuncNode* result_502;
void* __right_value527 = (void*)0;
char* __dec_obj295;
struct sCallerFuncNode* __result288__;
    if(    self==(void*)0) {
        __result287__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    result_502=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(    self!=((void*)0)) {
        result_502->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj295=result_502->sname;
        result_502->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_502;
    /*i*/come_call_finalizer3(result_502,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj296;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj296=self->sname;
            /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result290__;
void* __right_value531 = (void*)0;
struct sCallerLineNode* result_503;
void* __right_value532 = (void*)0;
char* __dec_obj297;
struct sCallerLineNode* __result291__;
    if(    self==(void*)0) {
        __result290__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    result_503=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(    self!=((void*)0)) {
        result_503->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj297=result_503->sname;
        result_503->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result291__ = gComeFunResultObject = __result_obj__ = result_503;
    /*i*/come_call_finalizer3(result_503,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj298;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj298=self->sname;
            /*G*/ __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result293__;
void* __right_value536 = (void*)0;
struct sCallerSNameNode* result_504;
void* __right_value537 = (void*)0;
char* __dec_obj299;
struct sCallerSNameNode* __result294__;
    if(    self==(void*)0) {
        __result293__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    result_504=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(    self!=((void*)0)) {
        result_504->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_504->sname;
        result_504->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result294__ = gComeFunResultObject = __result_obj__ = result_504;
    /*i*/come_call_finalizer3(result_504,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj300;
struct sType* __dec_obj301;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj300=self->sname;
            /*G*/ __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj301=self->type;
            come_call_finalizer3(__dec_obj301,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result296__;
void* __right_value542 = (void*)0;
struct sVarArgTypeName* result_508;
void* __right_value543 = (void*)0;
char* __dec_obj302;
void* __right_value544 = (void*)0;
struct sType* __dec_obj303;
struct sVarArgTypeName* __result297__;
    if(    self==(void*)0) {
        __result296__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    result_508=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(    self!=((void*)0)) {
        result_508->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj302=result_508->sname;
        result_508->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj303=result_508->type;
        result_508->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj303,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_508;
    /*i*/come_call_finalizer3(result_508,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_512;
unsigned int hash_513;
unsigned int it_514;
struct sType* __result300__;
struct sType* __result301__;
struct sType* __result302__;
struct sType* __result303__;
default_value_512 = (void*)0;
    memset(&default_value_512,0,sizeof(struct sType*));
    hash_513=string_get_hash_key(((char*)key))%self->size;
    it_514=hash_513;
    while((_Bool)1) {
        if(        self->item_existance[it_514]) {
            if(            string_equals(self->keys[it_514],key)) {
                __result300__ = gComeFunResultObject = __result_obj__ = self->items[it_514];
                /*i*/come_call_finalizer3(default_value_512,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result300__;
            }
            it_514++;
            if(            it_514>=self->size) {
                it_514=0;
            }
            else if(            it_514==hash_513) {
                __result301__ = gComeFunResultObject = __result_obj__ = default_value_512;
                /*i*/come_call_finalizer3(default_value_512,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result301__;
            }
        }
        else {
            __result302__ = gComeFunResultObject = __result_obj__ = default_value_512;
            /*i*/come_call_finalizer3(default_value_512,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result302__;
        }
    }
    __result303__ = gComeFunResultObject = __result_obj__ = default_value_512;
    /*i*/come_call_finalizer3(default_value_512,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value566 = (void*)0;
struct sNode* __result311__;
    __result311__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value566=expression_node_v99(info)));
    if(__right_value566) { __right_value566 = come_decrement_ref_count2(__right_value566, ((struct sNode*)__right_value566)->finalize, ((struct sNode*)__right_value566)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sNode* __dec_obj305;
struct sNode* __result312__;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sNode* __dec_obj306;
struct sNode* __result313__;
struct sNode* __result314__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj305=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
        __result312__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj306=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
        __result313__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    __result314__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result314__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value571 = (void*)0;
struct sNode* node_525;
void* __right_value572 = (void*)0;
struct sNode* __dec_obj307;
struct sNode* __result315__;
    node_525=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj307=node_525;
    node_525=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_525),info));
    if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
    __result315__ = gComeFunResultObject = __result_obj__ = node_525;
    if(node_525) { node_525 = come_decrement_ref_count2(node_525, ((struct sNode*)node_525)->finalize, ((struct sNode*)node_525)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result315__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_526;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct buffer* buf_527;
void* __right_value575 = (void*)0;
char* __dec_obj308;
int i_528;
void* __right_value576 = (void*)0;
char* __dec_obj309;
void* __right_value577 = (void*)0;
char* __dec_obj310;
int i_529;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
char* __result316__;
struct_name_526 = (void*)0;
    buf_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1855, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj308=struct_name_526;
        struct_name_526=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_528=0;            i_528<obj_type->mOriginalTypeNamePointerNum;            i_528++            ){
                buffer_append_str(buf_527,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj309=struct_name_526;
        struct_name_526=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj310=struct_name_526;
        struct_name_526=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        /*G*/ __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_529=0;        i_529<obj_type->mPointerNum;        i_529++        ){
            buffer_append_str(buf_527,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_527,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_527,"pa");
    }
    __result316__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value579=xsprintf("%s%s_%s",struct_name_526,((char*)(__right_value578=buffer_to_string(buf_527))),fun_name)));
    struct_name_526 = come_decrement_ref_count2(struct_name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_527,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_530;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct buffer* buf_531;
void* __right_value582 = (void*)0;
char* __dec_obj311;
int i_532;
void* __right_value583 = (void*)0;
char* __dec_obj312;
void* __right_value584 = (void*)0;
char* __dec_obj313;
int i_533;
void* __right_value585 = (void*)0;
int len_535;
void* __right_value586 = (void*)0;
char* __result317__;
struct_name_530 = (void*)0;
    buf_531=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1890, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj311=struct_name_530;
        struct_name_530=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_532=0;            i_532<obj_type->mOriginalTypeNamePointerNum;            i_532++            ){
                buffer_append_str(buf_531,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj312=struct_name_530;
        struct_name_530=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        /*G*/ __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj313=struct_name_530;
        struct_name_530=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        /*G*/ __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_533=0;        i_533<obj_type->mPointerNum;        i_533++        ){
            buffer_append_str(buf_531,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_531,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_531,"pa");
    }
    char none_method_name_534[charp_length(fun_name)+1];
    memset(&none_method_name_534, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_535=string_length(struct_name_530)+string_length(((char*)(__right_value585=buffer_to_string(buf_531))));
    __right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_534,fun_name+len_535+1,charp_length(fun_name)-len_535-1);
    none_method_name_534[charp_length(fun_name)-len_535-1]=0;
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value586=__builtin_string(none_method_name_534)));
    struct_name_530 = come_decrement_ref_count2(struct_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value587 = (void*)0;
char* struct_name_536;
void* __right_value588 = (void*)0;
char* __result318__;
    struct_name_536=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value588=xsprintf("%s_%s",struct_name_536,fun_name)));
    struct_name_536 = come_decrement_ref_count2(struct_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result319__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result319__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_537;
char* p_538;
int sline_539;
_Bool err_flag_540;
void* __right_value591 = (void*)0;
char* label_541;
void* __right_value592 = (void*)0;
char* __dec_obj314;
char* __dec_obj315;
_Bool no_comma_542;
_Bool in_fun_param_543;
void* __right_value593 = (void*)0;
struct sNode* node_544;
void* __right_value594 = (void*)0;
struct sNode* __dec_obj316;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sNode* _inf_value15;
struct sLambdaCall* _inf_obj_value15;
void* __right_value603 = (void*)0;
struct sNode* __result322__;
struct sNode* __result323__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_537=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1954, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_538=info->p;
            sline_539=info->sline;
            err_flag_540=(_Bool)0;
            label_541=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj314=label_541;
                label_541=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_540=(_Bool)1;
            }
            if(            err_flag_540==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj315=label_541;
                label_541=((void*)0);
                /*G*/ __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_538;
                info->sline=sline_539;
            }
            no_comma_542=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_543=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_544=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj316=node_544;
            node_544=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_544),info));
            if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_542;
            info->in_fun_param=in_fun_param_543;
            list$1tuple2$2charphsNodephph_push_back(params_537,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1997, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_541),(struct sNode*)come_increment_ref_count(node_544))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_541 = come_decrement_ref_count2(label_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_544) { node_544 = come_decrement_ref_count2(node_544, ((struct sNode*)node_544)->finalize, ((struct sNode*)node_544)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_541 = come_decrement_ref_count2(label_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_544) { node_544 = come_decrement_ref_count2(node_544, ((struct sNode*)node_544)->finalize, ((struct sNode*)node_544)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2015, "struct sNode");
        _inf_obj_value15=come_increment_ref_count(((struct sLambdaCall*)(__right_value598=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2015, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_537,info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sLambdaCall_finalize;
        _inf_value15->clone=(void*)sLambdaCall_clone;
        _inf_value15->compile=(void*)sLambdaCall_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sLambdaCall_kind;
        __result322__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value603=_inf_value15));
        /*i*/come_call_finalizer3(params_537,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value598,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value603) { __right_value603 = come_decrement_ref_count2(__right_value603, ((struct sNode*)__right_value603)->finalize, ((struct sNode*)__right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result322__;
        /*i*/come_call_finalizer3(params_537,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result323__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj317;
struct sNode* __dec_obj318;
struct list$1tuple2$2charphsNodephph* __dec_obj319;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj317=self->sname;
            /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj318=self->node;
            if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj319=self->params;
            come_call_finalizer3(__dec_obj319,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result320__;
void* __right_value599 = (void*)0;
struct sLambdaCall* result_545;
void* __right_value600 = (void*)0;
char* __dec_obj320;
void* __right_value601 = (void*)0;
struct sNode* __dec_obj321;
void* __right_value602 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj322;
struct sLambdaCall* __result321__;
    if(    self==(void*)0) {
        __result320__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    result_545=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(    self!=((void*)0)) {
        result_545->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj320=result_545->sname;
        result_545->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj321=result_545->node;
        result_545->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj322=result_545->params;
        result_545->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj322,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result321__ = gComeFunResultObject = __result_obj__ = result_545;
    /*i*/come_call_finalizer3(result_545,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

