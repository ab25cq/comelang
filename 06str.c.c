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
struct sStrNode
{
    int sline;
    char* sname;
    char* value;
};
struct sSStringNode
{
    int sline;
    char* sname;
    char* value;
    struct list$1sNodeph* exps;
};
struct sCharNode
{
    int sline;
    char* sname;
    int value;
};
struct sWCharNode
{
    int sline;
    char* sname;
    unsigned int value;
    _Bool quote;
};
struct sWStringNode
{
    int sline;
    char* sname;
    unsigned int* value;
};
struct sRegexNode
{
    int sline;
    char* sname;
    char* str;
    _Bool global;
    _Bool ignore_case;
};
struct sListNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* list_elements;
};
struct sTupleNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};
struct sSomeNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};
struct sNullReturnValue
{
    int sline;
    char* sname;
};
struct sNullReturnValueOfException
{
    int sline;
    char* sname;
};
struct sNullValue
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sNoneNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};
struct sMapNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_none(struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
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











struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
char* __dec_obj16;
struct sStrNode* __result65__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    /*G*/ __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=__builtin_string("sStrNode")));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct CVALUE* come_value_66;
void* __right_value121 = (void*)0;
char* __dec_obj19;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct sType* __dec_obj20;
_Bool __result68__;
    come_value_66=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "CVALUE"))));
    __dec_obj19=come_value_66->c_value;
    come_value_66->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    /*G*/ __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj20=come_value_66->type;
    come_value_66->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_66->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_66));
    add_come_last_code(info,"%s",come_value_66->c_value);
    __result68__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_66,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result68__;
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

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj21;
struct tuple1$1sTypeph* __dec_obj23;
struct tuple1$1sTypeph* __dec_obj25;
char* __dec_obj27;
struct list$1sTypeph* __dec_obj28;
struct list$1sNodeph* __dec_obj30;
struct list$1sTypeph* __dec_obj32;
struct list$1charph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
struct sNode* __dec_obj37;
struct sNode* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj21=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj21,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj23=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj23,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj25=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj25,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj27=self->mGenericsName;
            /*G*/ __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj28=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj28,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj30=self->mArrayNum;
            come_call_finalizer3(__dec_obj30,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj32=self->mParamTypes;
            come_call_finalizer3(__dec_obj32,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj33=self->mParamNames;
            come_call_finalizer3(__dec_obj33,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj35=self->mResultType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj37=self->mAlignas;
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj38=self->mSizeNum;
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj39=self->mOriginalTypeName;
            /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj40=self->mAsmName;
            /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_67;
struct list_item$1sTypeph* prev_it_68;
    it_67=self->head;
    while(it_67!=((void*)0)) {
        prev_it_68=it_67;
        it_67=it_67->next;
        /*i*/come_call_finalizer3(prev_it_68,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj29;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj29=self->item;
            come_call_finalizer3(__dec_obj29,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_69;
struct list_item$1sTypeph* prev_it_70;
    it_69=self->head;
    while(it_69!=((void*)0)) {
        prev_it_70=it_69;
        it_69=it_69->next;
        /*i*/come_call_finalizer3(prev_it_70,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_71;
struct list_item$1sNodeph* prev_it_72;
    it_71=self->head;
    while(it_71!=((void*)0)) {
        prev_it_72=it_71;
        it_71=it_71->next;
        /*i*/come_call_finalizer3(prev_it_72,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj31;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_73;
struct list_item$1sNodeph* prev_it_74;
    it_73=self->head;
    while(it_73!=((void*)0)) {
        prev_it_74=it_73;
        it_73=it_73->next;
        /*i*/come_call_finalizer3(prev_it_74,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_75;
struct list_item$1charph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_77;
struct list_item$1charph* prev_it_78;
    it_77=self->head;
    while(it_77!=((void*)0)) {
        prev_it_78=it_77;
        it_77=it_77->next;
        /*i*/come_call_finalizer3(prev_it_78,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj36;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj36=self->v1;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
struct list_item$1CVALUEph* litem_79;
struct CVALUE* __dec_obj41;
void* __right_value125 = (void*)0;
struct list_item$1CVALUEph* litem_80;
struct CVALUE* __dec_obj45;
void* __right_value126 = (void*)0;
struct list_item$1CVALUEph* litem_81;
struct CVALUE* __dec_obj46;
struct list$1CVALUEph* __result67__;
    if(    self->len==0) {
        litem_79=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value124=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 223, "list_item$1CVALUEph"))));
        litem_79->prev=((void*)0);
        litem_79->next=((void*)0);
        __dec_obj41=litem_79->item;
        litem_79->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_79;
        self->head=litem_79;
    }
    else if(    self->len==1) {
        litem_80=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value125=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 233, "list_item$1CVALUEph"))));
        litem_80->prev=self->head;
        litem_80->next=((void*)0);
        __dec_obj45=litem_80->item;
        litem_80->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_80;
        self->head->next=litem_80;
    }
    else {
        litem_81=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value126=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 243, "list_item$1CVALUEph"))));
        litem_81->prev=self->tail;
        litem_81->next=((void*)0);
        __dec_obj46=litem_81->item;
        litem_81->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_81;
        self->tail=litem_81;
    }
    self->len++;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj42;
struct sType* __dec_obj43;
char* __dec_obj44;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj42=self->c_value;
            /*G*/ __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj43=self->type;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj44=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
char* __dec_obj47;
void* __right_value136 = (void*)0;
struct list$1sNodeph* __dec_obj51;
struct sSStringNode* __result75__;
    ((struct sNodeBase*)(__right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value127,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    /*G*/ __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj51=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(exps));
    come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
char* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value137=__builtin_string("sSStringNode")));
    __right_value137 = come_decrement_ref_count2(__right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct CVALUE* come_value_88;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct buffer* buf_89;
struct list$1sNodeph* o2_saved_90;
struct sNode* it_93;
_Bool __result83__;
void* __right_value142 = (void*)0;
struct CVALUE* come_value_96;
void* __right_value171 = (void*)0;
struct sType* come_value_type_97;
void* __right_value172 = (void*)0;
char* method_name_110;
struct sType* obj_type_113;
struct sType* obj_type2_114;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
char* __dec_obj91;
void* __right_value175 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun2_115;
char* real_fun_name_116;
char* __dec_obj93;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct buffer* buf2_117;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct sType* type_118;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
char* c_value_119;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct sType* type2_120;
void* __right_value184 = (void*)0;
char* __dec_obj94;
void* __right_value185 = (void*)0;
struct sType* __dec_obj95;
_Bool __result100__;
    come_value_88=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 51, "CVALUE"))));
    buf_89=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 53, "buffer"))));
    buffer_append_str(buf_89,"xsprintf(\"");
    buffer_append_str(buf_89,self->value);
    buffer_append_str(buf_89,"\"");
    if(    list$1sNodeph_length(self->exps)>0) {
        for(        o2_saved_90=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_93=list$1sNodeph_begin((o2_saved_90));        !list$1sNodeph_end((o2_saved_90));        it_93=list$1sNodeph_next((o2_saved_90))        ){
            if(            !node_compile(it_93,info)) {
                __result83__ = (_Bool)0;
                /*i*/come_call_finalizer3(o2_saved_90,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_89,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result83__;
            }
            come_value_96=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            come_value_type_97=(struct sType*)come_increment_ref_count(sType_clone(come_value_96->type));
            if(            list$1sNodeph_length(come_value_type_97->mArrayNum)>0) {
                come_value_type_97->mPointerNum+=list$1sNodeph_length(come_value_type_97->mArrayNum);
            }
            method_name_110=(char*)come_increment_ref_count(create_method_name(come_value_type_97,(_Bool)0,"to_string",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_110,((void*)0))==((void*)0)) {
                obj_type_113=come_value_96->type->mNoSolvedGenericsType->v1;
                if(                obj_type_113&&list$1sTypeph_length(obj_type_113->mGenericsTypes)>0) {
                    obj_type2_114=come_value_96->type;
                    __dec_obj91=method_name_110;
                    method_name_110=(char*)come_increment_ref_count(make_generics_function(obj_type2_114,(char*)come_increment_ref_count(__builtin_string("to_string")),info,(_Bool)1));
                    /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value175=create_to_string_automatically(come_value_type_97,"to_string",info)));
                    fun2_115=multiple_assign_var1->v1;
                    real_fun_name_116=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    /*g*/come_call_finalizer3(__right_value175,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    __dec_obj93=method_name_110;
                    method_name_110=(char*)come_increment_ref_count(real_fun_name_116);
                    /*G*/ __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    fun2_115==((void*)0)) {
                        err_msg(info,"require to_string implementation(%s)",come_value_96->type->mClass->mName);
                        exit(1);
                    }
                    real_fun_name_116 = come_decrement_ref_count2(real_fun_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            buf2_117=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 94, "buffer"))));
            buffer_append_str(buf2_117,method_name_110);
            buffer_append_str(buf2_117,"(");
            buffer_append_str(buf2_117,come_value_96->c_value);
            buffer_append_str(buf2_117,")");
            type_118=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 101, "sType")),"char*",(_Bool)0,info));
            type_118->mHeap=(_Bool)1;
            c_value_119=(char*)come_increment_ref_count(append_object_to_right_values(((char*)(__right_value180=buffer_to_string(buf2_117))),(struct sType*)come_increment_ref_count(type_118),info));
            __right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_89,",");
            buffer_append_str(buf_89,c_value_119);
            /*i*/come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_type_97,sType_finalize, 0, 0, 0, 0, (void*)0);
            method_name_110 = come_decrement_ref_count2(method_name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_117,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_118,sType_finalize, 0, 0, 0, 0, (void*)0);
            c_value_119 = come_decrement_ref_count2(c_value_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_90,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_89,")");
    type2_120=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 113, "sType")),"char*",(_Bool)0,info));
    type2_120->mHeap=(_Bool)1;
    __dec_obj94=come_value_88->c_value;
    come_value_88->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_89));
    /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=come_value_88->type;
    come_value_88->type=(struct sType*)come_increment_ref_count(sType_clone(type2_120));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_88->var=((void*)0);
    append_object_to_right_values2(come_value_88,(struct sType*)come_increment_ref_count(type2_120),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_88));
    add_come_last_code(info,"%s",come_value_88->c_value);
    __result100__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_89,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result100__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result69__;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1sNodeph* result_82;
struct list_item$1sNodeph* it_83;
void* __right_value135 = (void*)0;
struct list$1sNodeph* __result74__;
    if(    self==((void*)0)) {
        __result69__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    result_82=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 139, "list$1sNodeph"))));
    it_83=self->head;
    while(it_83!=((void*)0)) {
        list$1sNodeph_add(result_82,(struct sNode*)come_increment_ref_count(sNode_clone(it_83->item)));
        it_83=it_83->next;
    }
    __result74__ = gComeFunResultObject = __result_obj__ = result_82;
    /*i*/come_call_finalizer3(result_82,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result70__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result70__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct list_item$1sNodeph* litem_84;
struct sNode* __dec_obj48;
void* __right_value132 = (void*)0;
struct list_item$1sNodeph* litem_85;
struct sNode* __dec_obj49;
void* __right_value133 = (void*)0;
struct list_item$1sNodeph* litem_86;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result71__;
    if(    self->len==0) {
        litem_84=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value131=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 153, "list_item$1sNodeph"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj48=litem_84->item;
        litem_84->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_84;
        self->head=litem_84;
    }
    else if(    self->len==1) {
        litem_85=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value132=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 163, "list_item$1sNodeph"))));
        litem_85->prev=self->head;
        litem_85->next=((void*)0);
        __dec_obj49=litem_85->item;
        litem_85->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_85;
        self->head->next=litem_85;
    }
    else {
        litem_86=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value133=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 173, "list_item$1sNodeph"))));
        litem_86->prev=self->tail;
        litem_86->next=((void*)0);
        __dec_obj50=litem_86->item;
        litem_86->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_86;
        self->tail=litem_86;
    }
    self->len++;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result72__;
void* __right_value134 = (void*)0;
struct sNode* result_87;
struct sNode* __result73__;
    if(    self==(void*)0) {
        __result72__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_87=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_87->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_87->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_87->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_87->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_87->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_87->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_87->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_87->kind=self->kind;
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_87;
    if(result_87) { result_87 = come_decrement_ref_count2(result_87, ((struct sNode*)result_87)->finalize, ((struct sNode*)result_87)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_91;
struct sNode* __result77__;
struct sNode* __result78__;
struct sNode* result_92;
struct sNode* __result79__;
result_91 = (void*)0;
result_92 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_91,0,sizeof(struct sNode*));
        __result77__ = gComeFunResultObject = __result_obj__ = result_91;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    self->it=self->head;
    if(    self->it) {
        __result78__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    memset(&result_92,0,sizeof(struct sNode*));
    __result79__ = gComeFunResultObject = __result_obj__ = result_92;
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_94;
struct sNode* __result80__;
struct sNode* __result81__;
struct sNode* result_95;
struct sNode* __result82__;
result_94 = (void*)0;
result_95 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_94,0,sizeof(struct sNode*));
        __result80__ = gComeFunResultObject = __result_obj__ = result_94;
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result81__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result81__;
    }
    memset(&result_95,0,sizeof(struct sNode*));
    __result82__ = gComeFunResultObject = __result_obj__ = result_95;
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result84__;
void* __right_value143 = (void*)0;
struct sType* result_98;
void* __right_value146 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value147 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value148 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value149 = (void*)0;
char* __dec_obj60;
void* __right_value156 = (void*)0;
struct list$1sTypeph* __dec_obj64;
void* __right_value157 = (void*)0;
struct list$1sNodeph* __dec_obj65;
void* __right_value158 = (void*)0;
struct list$1sTypeph* __dec_obj66;
void* __right_value165 = (void*)0;
struct list$1charph* __dec_obj70;
void* __right_value166 = (void*)0;
struct tuple1$1sTypeph* __dec_obj71;
void* __right_value167 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value168 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value169 = (void*)0;
char* __dec_obj74;
void* __right_value170 = (void*)0;
char* __dec_obj75;
struct sType* __result95__;
    if(    self==(void*)0) {
        __result84__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    result_98=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_98->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj57=result_98->mNoSolvedGenericsType;
        result_98->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj58=result_98->mOriginalLoadVarType;
        result_98->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj59=result_98->mNoExceptionType;
        result_98->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj60=result_98->mGenericsName;
        result_98->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj64=result_98->mGenericsTypes;
        result_98->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj64,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj65=result_98->mArrayNum;
        result_98->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj65,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_98->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj66=result_98->mParamTypes;
        result_98->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj70=result_98->mParamNames;
        result_98->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj71=result_98->mResultType;
        result_98->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj71,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_98->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj72=result_98->mAlignas;
        result_98->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_98->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_98->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_98->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_98->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_98->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_98->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_98->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_98->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_98->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_98->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_98->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_98->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_98->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_98->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_98->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_98->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_98->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_98->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_98->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_98->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_98->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_98->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_98->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_98->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_98->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_98->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_98->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj73=result_98->mSizeNum;
        result_98->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_98->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_98->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_98->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj74=result_98->mOriginalTypeName;
        result_98->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_98->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_98->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_98->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_98->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_98->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_98->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_98->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_98->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_98->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj75=result_98->mAsmName;
        result_98->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_98->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_98->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_98->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_98->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_98->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_98->mOriginIsArray=self->mOriginIsArray;
    }
    __result95__ = gComeFunResultObject = __result_obj__ = result_98;
    /*i*/come_call_finalizer3(result_98,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result85__;
void* __right_value144 = (void*)0;
struct tuple1$1sTypeph* result_99;
void* __right_value145 = (void*)0;
struct sType* __dec_obj55;
struct tuple1$1sTypeph* __result86__;
    if(    self==(void*)0) {
        __result85__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result85__;
    }
    result_99=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj55=result_99->v1;
        result_99->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result86__ = gComeFunResultObject = __result_obj__ = result_99;
    /*i*/come_call_finalizer3(result_99,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj56;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj56=self->v1;
            come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result87__;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct list$1sTypeph* result_100;
struct list_item$1sTypeph* it_101;
void* __right_value155 = (void*)0;
struct list$1sTypeph* __result90__;
    if(    self==((void*)0)) {
        __result87__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result87__;
    }
    result_100=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 139, "list$1sTypeph"))));
    it_101=self->head;
    while(it_101!=((void*)0)) {
        list$1sTypeph_add(result_100,(struct sType*)come_increment_ref_count(sType_clone(it_101->item)));
        it_101=it_101->next;
    }
    __result90__ = gComeFunResultObject = __result_obj__ = result_100;
    /*i*/come_call_finalizer3(result_100,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value152 = (void*)0;
struct list_item$1sTypeph* litem_102;
struct sType* __dec_obj61;
void* __right_value153 = (void*)0;
struct list_item$1sTypeph* litem_103;
struct sType* __dec_obj62;
void* __right_value154 = (void*)0;
struct list_item$1sTypeph* litem_104;
struct sType* __dec_obj63;
struct list$1sTypeph* __result89__;
    if(    self->len==0) {
        litem_102=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value152=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 153, "list_item$1sTypeph"))));
        litem_102->prev=((void*)0);
        litem_102->next=((void*)0);
        __dec_obj61=litem_102->item;
        litem_102->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_102;
        self->head=litem_102;
    }
    else if(    self->len==1) {
        litem_103=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value153=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 163, "list_item$1sTypeph"))));
        litem_103->prev=self->head;
        litem_103->next=((void*)0);
        __dec_obj62=litem_103->item;
        litem_103->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_103;
        self->head->next=litem_103;
    }
    else {
        litem_104=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value154=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 173, "list_item$1sTypeph"))));
        litem_104->prev=self->tail;
        litem_104->next=((void*)0);
        __dec_obj63=litem_104->item;
        litem_104->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_104;
        self->tail=litem_104;
    }
    self->len++;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result91__;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct list$1charph* result_105;
struct list_item$1charph* it_106;
void* __right_value164 = (void*)0;
struct list$1charph* __result94__;
    if(    self==((void*)0)) {
        __result91__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    result_105=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 139, "list$1charph"))));
    it_106=self->head;
    while(it_106!=((void*)0)) {
        list$1charph_add(result_105,(char*)come_increment_ref_count(string_clone(it_106->item)));
        it_106=it_106->next;
    }
    __result94__ = gComeFunResultObject = __result_obj__ = result_105;
    /*i*/come_call_finalizer3(result_105,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result92__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value161 = (void*)0;
struct list_item$1charph* litem_107;
char* __dec_obj67;
void* __right_value162 = (void*)0;
struct list_item$1charph* litem_108;
char* __dec_obj68;
void* __right_value163 = (void*)0;
struct list_item$1charph* litem_109;
char* __dec_obj69;
struct list$1charph* __result93__;
    if(    self->len==0) {
        litem_107=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 153, "list_item$1charph"))));
        litem_107->prev=((void*)0);
        litem_107->next=((void*)0);
        __dec_obj67=litem_107->item;
        litem_107->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_107;
        self->head=litem_107;
    }
    else if(    self->len==1) {
        litem_108=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value162=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 163, "list_item$1charph"))));
        litem_108->prev=self->head;
        litem_108->next=((void*)0);
        __dec_obj68=litem_108->item;
        litem_108->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_108;
        self->head->next=litem_108;
    }
    else {
        litem_109=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value163=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 173, "list_item$1charph"))));
        litem_109->prev=self->tail;
        litem_109->next=((void*)0);
        __dec_obj69=litem_109->item;
        litem_109->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_109;
        self->tail=litem_109;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_111;
unsigned int it_112;
struct sFun* __result96__;
struct sFun* __result97__;
struct sFun* __result98__;
struct sFun* __result99__;
    hash_111=string_get_hash_key(((char*)key))%self->size;
    it_112=hash_111;
    while((_Bool)1) {
        if(        self->item_existance[it_112]) {
            if(            string_equals(self->keys[it_112],key)) {
                __result96__ = gComeFunResultObject = __result_obj__ = self->items[it_112];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result96__;
            }
            it_112++;
            if(            it_112>=self->size) {
                it_112=0;
            }
            else if(            it_112==hash_111) {
                __result97__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result97__;
            }
        }
        else {
            __result98__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result98__;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj76;
struct sType* __dec_obj77;
struct list$1sTypeph* __dec_obj78;
struct list$1charph* __dec_obj79;
struct list$1charph* __dec_obj80;
struct sType* __dec_obj81;
struct sBlock* __dec_obj82;
struct buffer* __dec_obj85;
struct buffer* __dec_obj86;
struct buffer* __dec_obj87;
struct buffer* __dec_obj88;
char* __dec_obj89;
char* __dec_obj90;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj76=self->mName;
            /*G*/ __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj77=self->mResultType;
            come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj78=self->mParamTypes;
            come_call_finalizer3(__dec_obj78,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj79=self->mParamNames;
            come_call_finalizer3(__dec_obj79,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj80=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj81=self->mLambdaType;
            come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj82=self->mBlock;
            come_call_finalizer3(__dec_obj82,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj85=self->mSource;
            come_call_finalizer3(__dec_obj85,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj86=self->mSourceHead;
            come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj87=self->mSourceHead2;
            come_call_finalizer3(__dec_obj87,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj88=self->mSourceDefer;
            come_call_finalizer3(__dec_obj88,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj89=self->mComeHeader;
            /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj90=self->mDeclareSName;
            /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj83;
struct sVarTable* __dec_obj84;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj83=self->mNodes;
            come_call_finalizer3(__dec_obj83,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj84=self->mVarTable;
            come_call_finalizer3(__dec_obj84,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj92;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj92=self->v2;
            /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
struct sCharNode* __result101__;
    ((struct sNodeBase*)(__right_value186=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value186,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value187 = (void*)0;
char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value187=__builtin_string("sCharNode")));
    __right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct CVALUE* come_value_121;
void* __right_value190 = (void*)0;
char* __dec_obj97;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sType* __dec_obj98;
_Bool __result103__;
    come_value_121=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 146, "CVALUE"))));
    __dec_obj97=come_value_121->c_value;
    come_value_121->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    /*G*/ __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj98=come_value_121->type;
    come_value_121->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 149, "sType")),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_121->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_121));
    add_come_last_code(info,"%s",come_value_121->c_value);
    __result103__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_121,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result103__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value193 = (void*)0;
struct sWCharNode* __result104__;
    ((struct sNodeBase*)(__right_value193=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value193,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
char* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value194=__builtin_string("sWCharNode")));
    __right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct CVALUE* come_value_122;
void* __right_value197 = (void*)0;
char* __dec_obj100;
void* __right_value198 = (void*)0;
char* __dec_obj101;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct sType* __dec_obj102;
_Bool __result106__;
    come_value_122=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 177, "CVALUE"))));
    if(    self->quote) {
        __dec_obj100=come_value_122->c_value;
        come_value_122->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        /*G*/ __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj101=come_value_122->c_value;
        come_value_122->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        /*G*/ __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj102=come_value_122->type;
    come_value_122->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 185, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_122->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_122));
    add_come_last_code(info,"%s",come_value_122->c_value);
    __result106__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_122,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result106__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value201 = (void*)0;
unsigned int* __dec_obj103;
struct sWStringNode* __result107__;
    ((struct sNodeBase*)(__right_value201=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value201,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj103=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value202 = (void*)0;
char* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value202=__builtin_string("sWStringNode")));
    __right_value202 = come_decrement_ref_count2(__right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct CVALUE* come_value_123;
void* __right_value205 = (void*)0;
char* __dec_obj106;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sType* __dec_obj107;
_Bool __result109__;
    come_value_123=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 212, "CVALUE"))));
    __dec_obj106=come_value_123->c_value;
    come_value_123->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj107=come_value_123->type;
    come_value_123->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 215, "sType")),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_123->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
    add_come_last_code(info,"%s",come_value_123->c_value);
    __result109__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result109__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
char* __dec_obj108;
struct sRegexNode* __result110__;
    ((struct sNodeBase*)(__right_value208=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value208,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj108=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    /*G*/ __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value210 = (void*)0;
char* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value210=__builtin_string("sRegexNode")));
    __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct CVALUE* come_value_124;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
char* __dec_obj111;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sType* __dec_obj112;
_Bool __result112__;
    come_value_124=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 244, "CVALUE"))));
    __dec_obj111=come_value_124->c_value;
    come_value_124->c_value=(char*)come_increment_ref_count(xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,((self->ignore_case)?(((char*)(__right_value213=__builtin_string("1")))):(((char*)(__right_value214=__builtin_string("0"))))),((self->global)?(((char*)(__right_value215=__builtin_string("1")))):(((char*)(__right_value216=__builtin_string("0")))))));
    /*G*/ __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj112=come_value_124->type;
    come_value_124->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 247, "sType")),"come_regex",(_Bool)0,info));
    come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_124->type->mPointerNum=1;
    come_value_124->type->mHeap=(_Bool)1;
    come_value_124->var=((void*)0);
    append_object_to_right_values2(come_value_124,(struct sType*)come_increment_ref_count(come_value_124->type),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
    add_come_last_code(info,"%s",come_value_124->c_value);
    __result112__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result112__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj109;
char* __dec_obj110;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj109=self->sname;
            /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj110=self->str;
            /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
struct list$1sNodeph* __dec_obj113;
struct sListNode* __result113__;
    ((struct sNodeBase*)(__right_value220=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value220,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj113=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj113,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=__builtin_string("sListNode")));
    __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_125;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct list$1CVALUEph* params_126;
struct sType* list_element_type_129;
struct list$1sNodeph* o2_saved_130;
struct sNode* it_131;
_Bool __result116__;
void* __right_value224 = (void*)0;
struct CVALUE* come_value_132;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sType* __dec_obj117;
void* __right_value227 = (void*)0;
struct sType* type_values_133;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
char* var_name_138;
void* __right_value233 = (void*)0;
struct sVar* var__139;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct buffer* source_140;
int i_141;
struct list$1CVALUEph* o2_saved_142;
struct CVALUE* it_145;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sType* list_type_151;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sType* obj_type_155;
char* fun_name_156;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
char* generics_fun_name_157;
struct sFun* fun_158;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj124;
_Bool __result127__;
void* __right_value251 = (void*)0;
struct sType* result_type_159;
struct sType* type_160;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct CVALUE* obj_value_161;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct buffer* num_string_162;
void* __right_value256 = (void*)0;
struct sType* type2_163;
void* __right_value257 = (void*)0;
char* type_name_164;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
char* __dec_obj125;
void* __right_value260 = (void*)0;
struct sType* type3_165;
void* __right_value261 = (void*)0;
struct sType* __dec_obj126;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1CVALUEph* come_params_166;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct CVALUE* come_value2_170;
void* __right_value266 = (void*)0;
char* __dec_obj127;
struct sType* __dec_obj128;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct CVALUE* come_value3_171;
void* __right_value269 = (void*)0;
char* __dec_obj129;
struct sType* __dec_obj130;
int j_172;
struct list$1CVALUEph* o2_saved_173;
struct CVALUE* it_174;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct CVALUE* come_value4_175;
void* __right_value272 = (void*)0;
char* __dec_obj131;
void* __right_value273 = (void*)0;
struct sType* __dec_obj132;
_Bool __result130__;
    list_elements_125=self->list_elements;
    params_126=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 279, "list$1CVALUEph"))));
    list_element_type_129=((void*)0);
    for(    o2_saved_130=(list_elements_125),it_131=list$1sNodeph_begin((o2_saved_130));    !list$1sNodeph_end((o2_saved_130));    it_131=list$1sNodeph_next((o2_saved_130))    ){
        if(        !node_compile(it_131,info)) {
            __result116__ = (_Bool)0;
            /*i*/come_call_finalizer3(params_126,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_element_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result116__;
        }
        come_value_132=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_129) {
            check_assign_type(((char*)(__right_value225=xsprintf("invalid list element type"))),list_element_type_129,come_value_132->type,come_value_132,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(params_126,(struct CVALUE*)come_increment_ref_count(come_value_132));
        __dec_obj117=list_element_type_129;
        list_element_type_129=(struct sType*)come_increment_ref_count(sType_clone(come_value_132->type));
        come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_133=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_129));
    list$1sNodeph_push_back(type_values_133->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(params_126),info)));
    type_values_133->mHeap=(_Bool)0;
    static int list_value_num_137=0;
    var_name_138=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_137));
    add_variable_to_table(var_name_138,(struct sType*)come_increment_ref_count(sType_clone(type_values_133)),info);
    var__139=get_variable_from_table(info->lv_table,var_name_138);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value234=make_define_var(type_values_133,var__139->mCValueName,(_Bool)0,info))));
    __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_140=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 312, "buffer"))));
    buffer_append_str(source_140,"(");
    i_141=0;
    for(    o2_saved_142=(struct list$1CVALUEph*)come_increment_ref_count((params_126)),it_145=list$1CVALUEph_begin((o2_saved_142));    !list$1CVALUEph_end((o2_saved_142));    it_145=list$1CVALUEph_next((o2_saved_142))    ){
        if(        list_element_type_129->mHeap) {
            buffer_append_str(source_140,((char*)(__right_value237=xsprintf("%s[%d]=come_increment_ref_count(%s),\n",var__139->mCValueName,i_141,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_126,i_141), "06str.c", 319, 0))->c_value))));
            __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_140,((char*)(__right_value238=xsprintf("%s[%d]=%s,\n",var__139->mCValueName,i_141,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_126,i_141), "06str.c", 322, 1))->c_value))));
            __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        i_141++;
    }
    /*i*/come_call_finalizer3(o2_saved_142,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_151=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 331, "sType")),"list",(_Bool)0,info));
    list$1sTypeph_push_back(list_type_151->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(list_element_type_129)));
    obj_type_155=(struct sType*)come_increment_ref_count(sType_clone(list_type_151));
    fun_name_156="initialize_with_values";
    generics_fun_name_157=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value247=make_generics_function(obj_type_155,(char*)come_increment_ref_count(__builtin_string(fun_name_156)),info,(_Bool)1)))));
    __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_158=map$2charphsFunph_at(info->funcs,generics_fun_name_157,((void*)0));
    if(    fun_158==((void*)0)) {
        __dec_obj124=generics_fun_name_157;
        generics_fun_name_157=(char*)come_increment_ref_count(create_method_name(obj_type_155,(_Bool)0,((char*)(__right_value249=__builtin_string(fun_name_156))),info,(_Bool)1));
        /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_158=map$2charphsFunph_at(info->funcs,generics_fun_name_157,((void*)0));
        if(        fun_158==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_157,info->come_fun->mName);
            __result127__ = (_Bool)1;
            /*i*/come_call_finalizer3(params_126,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_element_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_values_133,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_138 = come_decrement_ref_count2(var_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(source_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_type_151,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_155,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_157 = come_decrement_ref_count2(generics_fun_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result127__;
        }
    }
    result_type_159=(struct sType*)come_increment_ref_count(sType_clone(fun_158->mResultType));
    result_type_159->mStatic=(_Bool)0;
    type_160=list_type_151;
    obj_value_161=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 357, "CVALUE"))));
    num_string_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 359, "buffer"))));
    buffer_append_str(num_string_162,"1");
    type2_163=(struct sType*)come_increment_ref_count(solve_generics(type_160,type_160,info));
    type_name_164=(char*)come_increment_ref_count(make_type_name_string(type2_163,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj125=obj_value_161->c_value;
    obj_value_161->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_164,type_name_164,((char*)(__right_value258=buffer_to_string(num_string_162))),info->sname,info->sline,type_name_164));
    /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_165=(struct sType*)come_increment_ref_count(sType_clone(type2_163));
    type3_165->mPointerNum++;
    type3_165->mHeap=(_Bool)1;
    type2_163->mHeap=(_Bool)1;
    __dec_obj126=obj_value_161->type;
    obj_value_161->type=(struct sType*)come_increment_ref_count(sType_clone(type2_163));
    come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_161->type->mPointerNum++;
    obj_value_161->var=((void*)0);
    append_object_to_right_values2(obj_value_161,(struct sType*)come_increment_ref_count(type3_165),info,(_Bool)0);
    come_params_166=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 379, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_158->mParamTypes,0), "06str.c", 381, 2))->mHeap&&obj_value_161->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_158->mParamTypes,0), "06str.c", 382, 3)),obj_value_161->type,obj_value_161,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_166,(struct CVALUE*)come_increment_ref_count(obj_value_161));
    come_value2_170=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 386, "CVALUE"))));
    __dec_obj127=come_value2_170->c_value;
    come_value2_170->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(params_126)));
    /*G*/ __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj128=come_value2_170->type;
    come_value2_170->type=((void*)0);
    come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_170->var=((void*)0);
    list$1CVALUEph_push_back(come_params_166,(struct CVALUE*)come_increment_ref_count(come_value2_170));
    come_value3_171=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 394, "CVALUE"))));
    __dec_obj129=come_value3_171->c_value;
    come_value3_171->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__139->mCValueName));
    /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value3_171->type;
    come_value3_171->type=((void*)0);
    come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_171->var=((void*)0);
    list$1CVALUEph_push_back(come_params_166,(struct CVALUE*)come_increment_ref_count(come_value3_171));
    buffer_append_str(source_140,generics_fun_name_157);
    buffer_append_str(source_140,"(");
    j_172=0;
    for(    o2_saved_173=(struct list$1CVALUEph*)come_increment_ref_count((come_params_166)),it_174=list$1CVALUEph_begin((o2_saved_173));    !list$1CVALUEph_end((o2_saved_173));    it_174=list$1CVALUEph_next((o2_saved_173))    ){
        buffer_append_str(source_140,it_174->c_value);
        if(        j_172!=list$1CVALUEph_length(come_params_166)-1) {
            buffer_append_str(source_140,",");
        }
        j_172++;
    }
    /*i*/come_call_finalizer3(o2_saved_173,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_140,")");
    buffer_append_str(source_140,")");
    come_value4_175=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 420, "CVALUE"))));
    __dec_obj131=come_value4_175->c_value;
    come_value4_175->c_value=(char*)come_increment_ref_count(buffer_to_string(source_140));
    /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj132=come_value4_175->type;
    come_value4_175->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_159));
    come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_175->type->mStatic=(_Bool)0;
    come_value4_175->var=((void*)0);
    if(    result_type_159->mHeap) {
        append_object_to_right_values2(come_value4_175,(struct sType*)come_increment_ref_count(result_type_159),info,(_Bool)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_175));
    add_come_last_code(info,"%s",come_value4_175->c_value);
    __result130__ = (_Bool)1;
    /*i*/come_call_finalizer3(params_126,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(list_element_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_values_133,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_138 = come_decrement_ref_count2(var_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(list_type_151,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_155,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_157 = come_decrement_ref_count2(generics_fun_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_159,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_162,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_163,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_164 = come_decrement_ref_count2(type_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_165,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_166,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value3_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value4_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result130__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result115__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_127;
struct list_item$1CVALUEph* prev_it_128;
    it_127=self->head;
    while(it_127!=((void*)0)) {
        prev_it_128=it_127;
        it_127=it_127->next;
        /*i*/come_call_finalizer3(prev_it_128,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj116;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj116=self->item;
            come_call_finalizer3(__dec_obj116,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
struct list_item$1sNodeph* litem_134;
struct sNode* __dec_obj118;
void* __right_value229 = (void*)0;
struct list_item$1sNodeph* litem_135;
struct sNode* __dec_obj119;
void* __right_value230 = (void*)0;
struct list_item$1sNodeph* litem_136;
struct sNode* __dec_obj120;
struct list$1sNodeph* __result117__;
    if(    self->len==0) {
        litem_134=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value228=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 223, "list_item$1sNodeph"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        __dec_obj118=litem_134->item;
        litem_134->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value229=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 233, "list_item$1sNodeph"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        __dec_obj119=litem_135->item;
        litem_135->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value230=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 243, "list_item$1sNodeph"))));
        litem_136->prev=self->tail;
        litem_136->next=((void*)0);
        __dec_obj120=litem_136->item;
        litem_136->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_136;
        self->tail=litem_136;
    }
    self->len++;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_143;
struct CVALUE* __result118__;
struct CVALUE* __result119__;
struct CVALUE* result_144;
struct CVALUE* __result120__;
result_143 = (void*)0;
result_144 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_143,0,sizeof(struct CVALUE*));
        __result118__ = gComeFunResultObject = __result_obj__ = result_143;
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    self->it=self->head;
    if(    self->it) {
        __result119__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    memset(&result_144,0,sizeof(struct CVALUE*));
    __result120__ = gComeFunResultObject = __result_obj__ = result_144;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_146;
struct CVALUE* __result121__;
struct CVALUE* __result122__;
struct CVALUE* result_147;
struct CVALUE* __result123__;
result_146 = (void*)0;
result_147 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_146,0,sizeof(struct CVALUE*));
        __result121__ = gComeFunResultObject = __result_obj__ = result_146;
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result122__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    memset(&result_147,0,sizeof(struct CVALUE*));
    __result123__ = gComeFunResultObject = __result_obj__ = result_147;
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_148;
int i_149;
struct CVALUE* __result124__;
struct CVALUE* default_value_150;
struct CVALUE* __result125__;
default_value_150 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_148=self->head;
    i_149=0;
    while(it_148!=((void*)0)) {
        if(        position==i_149) {
            __result124__ = gComeFunResultObject = __result_obj__ = it_148->item;
            gComeFunResultObject = (void*)0;
            return __result124__;
        }
        it_148=it_148->next;
        i_149++;
    }
    memset(&default_value_150,0,sizeof(struct CVALUE*));
    __result125__ = gComeFunResultObject = __result_obj__ = default_value_150;
    /*i*/come_call_finalizer3(default_value_150,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
struct list_item$1sTypeph* litem_152;
struct sType* __dec_obj121;
void* __right_value242 = (void*)0;
struct list_item$1sTypeph* litem_153;
struct sType* __dec_obj122;
void* __right_value243 = (void*)0;
struct list_item$1sTypeph* litem_154;
struct sType* __dec_obj123;
struct list$1sTypeph* __result126__;
    if(    self->len==0) {
        litem_152=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value241=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 223, "list_item$1sTypeph"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        __dec_obj121=litem_152->item;
        litem_152->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value242=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 233, "list_item$1sTypeph"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        __dec_obj122=litem_153->item;
        litem_153->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value243=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 243, "list_item$1sTypeph"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        __dec_obj123=litem_154->item;
        litem_154->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_167;
int i_168;
struct sType* __result128__;
struct sType* default_value_169;
struct sType* __result129__;
default_value_169 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_167=self->head;
    i_168=0;
    while(it_167!=((void*)0)) {
        if(        position==i_168) {
            __result128__ = gComeFunResultObject = __result_obj__ = it_167->item;
            gComeFunResultObject = (void*)0;
            return __result128__;
        }
        it_167=it_167->next;
        i_168++;
    }
    memset(&default_value_169,0,sizeof(struct sType*));
    __result129__ = gComeFunResultObject = __result_obj__ = default_value_169;
    /*i*/come_call_finalizer3(default_value_169,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __dec_obj133;
struct sTupleNode* __result131__;
    ((struct sNodeBase*)(__right_value274=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value274,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj133=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj133,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
char* __result132__;
    __result132__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value275=__builtin_string("sTupleNode")));
    __right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_176;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1sTypeph* tuple_types_177;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1CVALUEph* tuple_values_178;
struct list$1sNodeph* o2_saved_179;
struct sNode* it_180;
_Bool __result133__;
void* __right_value280 = (void*)0;
struct CVALUE* come_value_181;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sType* type_183;
struct list$1sTypeph* o2_saved_184;
struct sType* it_187;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct CVALUE* obj_value_190;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct buffer* num_string_191;
void* __right_value295 = (void*)0;
struct sType* type2_192;
void* __right_value296 = (void*)0;
char* type_name_193;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
char* __dec_obj139;
void* __right_value299 = (void*)0;
struct sType* type3_194;
void* __right_value300 = (void*)0;
struct sType* __dec_obj140;
void* __right_value301 = (void*)0;
struct sType* obj_type_195;
char* fun_name_196;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
char* generics_fun_name_197;
struct sFun* fun_198;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
char* __dec_obj141;
_Bool __result142__;
void* __right_value307 = (void*)0;
struct sType* result_type_199;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1CVALUEph* come_params_200;
int i_201;
struct list$1CVALUEph* o2_saved_202;
struct CVALUE* it_203;
void* __right_value310 = (void*)0;
struct CVALUE* come_value_204;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct buffer* buf_205;
int j_206;
struct list$1CVALUEph* o2_saved_207;
struct CVALUE* it_208;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct CVALUE* come_value2_209;
void* __right_value315 = (void*)0;
char* __dec_obj142;
void* __right_value316 = (void*)0;
struct sType* __dec_obj143;
_Bool __result143__;
    tuple_elements_176=self->tuple_elements;
    tuple_types_177=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 457, "list$1sTypeph"))));
    tuple_values_178=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 458, "list$1CVALUEph"))));
    for(    o2_saved_179=(tuple_elements_176),it_180=list$1sNodeph_begin((o2_saved_179));    !list$1sNodeph_end((o2_saved_179));    it_180=list$1sNodeph_next((o2_saved_179))    ){
        if(        !node_compile(it_180,info)) {
            __result133__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_177,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_178,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result133__;
        }
        come_value_181=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_178,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_181)));
        list$1sTypeph_push_back(tuple_types_177,(struct sType*)come_increment_ref_count(sType_clone(come_value_181->type)));
        /*i*/come_call_finalizer3(come_value_181,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_183=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 472, "sType")),((char*)(__right_value288=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_177)))),(_Bool)0,info));
    __right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_184=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_177)),it_187=list$1sTypeph_begin((o2_saved_184));    !list$1sTypeph_end((o2_saved_184));    it_187=list$1sTypeph_next((o2_saved_184))    ){
        list$1sTypeph_push_back(type_183->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_187)));
    }
    /*i*/come_call_finalizer3(o2_saved_184,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_190=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 478, "CVALUE"))));
    num_string_191=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 480, "buffer"))));
    buffer_append_str(num_string_191,"1");
    type2_192=(struct sType*)come_increment_ref_count(solve_generics(type_183,type_183,info));
    type_name_193=(char*)come_increment_ref_count(make_type_name_string(type2_192,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj139=obj_value_190->c_value;
    obj_value_190->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_193,type_name_193,((char*)(__right_value297=buffer_to_string(num_string_191))),info->sname,info->sline,type_name_193));
    /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_194=(struct sType*)come_increment_ref_count(sType_clone(type2_192));
    type3_194->mPointerNum++;
    type3_194->mHeap=(_Bool)1;
    type2_192->mHeap=(_Bool)1;
    __dec_obj140=obj_value_190->type;
    obj_value_190->type=(struct sType*)come_increment_ref_count(sType_clone(type2_192));
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_190->type->mPointerNum++;
    obj_value_190->var=((void*)0);
    append_object_to_right_values2(obj_value_190,(struct sType*)come_increment_ref_count(type3_194),info,(_Bool)0);
    obj_type_195=(struct sType*)come_increment_ref_count(sType_clone(type2_192));
    fun_name_196="initialize";
    generics_fun_name_197=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value303=make_generics_function(obj_type_195,(char*)come_increment_ref_count(__builtin_string(fun_name_196)),info,(_Bool)1)))));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_198=map$2charphsFunph_at(info->funcs,generics_fun_name_197,((void*)0));
    if(    fun_198==((void*)0)) {
        __dec_obj141=generics_fun_name_197;
        generics_fun_name_197=(char*)come_increment_ref_count(create_method_name(obj_type_195,(_Bool)0,((char*)(__right_value305=__builtin_string(fun_name_196))),info,(_Bool)1));
        /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_198=map$2charphsFunph_at(info->funcs,generics_fun_name_197,((void*)0));
        if(        fun_198==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_197,info->come_fun->mName);
            __result142__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_177,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_178,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_191,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_192,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_193 = come_decrement_ref_count2(type_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_195,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_197 = come_decrement_ref_count2(generics_fun_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result142__;
        }
    }
    result_type_199=(struct sType*)come_increment_ref_count(sType_clone(fun_198->mResultType));
    result_type_199->mStatic=(_Bool)0;
    come_params_200=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 521, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_198->mParamTypes,0), "06str.c", 523, 4))->mHeap&&obj_value_190->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_198->mParamTypes,0), "06str.c", 524, 5)),obj_value_190->type,obj_value_190,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(obj_value_190));
    i_201=1;
    for(    o2_saved_202=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_178)),it_203=list$1CVALUEph_begin((o2_saved_202));    !list$1CVALUEph_end((o2_saved_202));    it_203=list$1CVALUEph_next((o2_saved_202))    ){
        come_value_204=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_203));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_198->mParamTypes,i_201), "06str.c", 532, 6))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_198->mParamTypes,i_201), "06str.c", 532, 7))->mHeap&&come_value_204->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_198->mParamTypes,i_201), "06str.c", 533, 8)),come_value_204->type,come_value_204,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(come_value_204));
        i_201++;
        /*i*/come_call_finalizer3(come_value_204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_205=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 540, "buffer"))));
    buffer_append_str(buf_205,generics_fun_name_197);
    buffer_append_str(buf_205,"(");
    j_206=0;
    for(    o2_saved_207=(struct list$1CVALUEph*)come_increment_ref_count((come_params_200)),it_208=list$1CVALUEph_begin((o2_saved_207));    !list$1CVALUEph_end((o2_saved_207));    it_208=list$1CVALUEph_next((o2_saved_207))    ){
        buffer_append_str(buf_205,it_208->c_value);
        if(        j_206!=list$1CVALUEph_length(come_params_200)-1) {
            buffer_append_str(buf_205,",");
        }
        j_206++;
    }
    /*i*/come_call_finalizer3(o2_saved_207,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_205,")");
    come_value2_209=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 557, "CVALUE"))));
    __dec_obj142=come_value2_209->c_value;
    come_value2_209->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_205));
    /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj143=come_value2_209->type;
    come_value2_209->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_199));
    come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_209->type->mStatic=(_Bool)0;
    come_value2_209->var=((void*)0);
    if(    result_type_199->mHeap) {
        append_object_to_right_values2(come_value2_209,(struct sType*)come_increment_ref_count(result_type_199),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_209->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_209));
    __result143__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_177,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_178,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_191,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_192,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_193 = come_decrement_ref_count2(type_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_194,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_195,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_197 = come_decrement_ref_count2(generics_fun_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_199,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_200,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_205,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result143__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result134__;
void* __right_value281 = (void*)0;
struct CVALUE* result_182;
void* __right_value282 = (void*)0;
char* __dec_obj136;
void* __right_value283 = (void*)0;
struct sType* __dec_obj137;
void* __right_value284 = (void*)0;
char* __dec_obj138;
struct CVALUE* __result135__;
    if(    self==(void*)0) {
        __result134__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    result_182=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj136=result_182->c_value;
        result_182->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj137=result_182->type;
        result_182->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_182->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_182->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj138=result_182->c_value_without_right_value_objects;
        result_182->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result135__ = gComeFunResultObject = __result_obj__ = result_182;
    /*i*/come_call_finalizer3(result_182,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_185;
struct sType* __result136__;
struct sType* __result137__;
struct sType* result_186;
struct sType* __result138__;
result_185 = (void*)0;
result_186 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_185,0,sizeof(struct sType*));
        __result136__ = gComeFunResultObject = __result_obj__ = result_185;
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    self->it=self->head;
    if(    self->it) {
        __result137__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    memset(&result_186,0,sizeof(struct sType*));
    __result138__ = gComeFunResultObject = __result_obj__ = result_186;
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_188;
struct sType* __result139__;
struct sType* __result140__;
struct sType* result_189;
struct sType* __result141__;
result_188 = (void*)0;
result_189 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_188,0,sizeof(struct sType*));
        __result139__ = gComeFunResultObject = __result_obj__ = result_188;
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result140__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    memset(&result_189,0,sizeof(struct sType*));
    __result141__ = gComeFunResultObject = __result_obj__ = result_189;
    gComeFunResultObject = (void*)0;
    return __result141__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
struct list$1sNodeph* __dec_obj144;
struct sSomeNode* __result144__;
    ((struct sNodeBase*)(__right_value317=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value317,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj144=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj144,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
char* __result145__;
    __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value318=__builtin_string("sSomeNode")));
    __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_210;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1sTypeph* tuple_types_211;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1CVALUEph* tuple_values_212;
struct list$1sNodeph* o2_saved_213;
struct sNode* it_214;
_Bool __result146__;
void* __right_value323 = (void*)0;
struct CVALUE* come_value_215;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* type_216;
struct list$1sTypeph* o2_saved_217;
struct sType* it_218;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct CVALUE* obj_value_219;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct buffer* num_string_220;
void* __right_value334 = (void*)0;
struct sType* type2_221;
void* __right_value335 = (void*)0;
char* type_name_222;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
char* __dec_obj147;
void* __right_value338 = (void*)0;
struct sType* type3_223;
void* __right_value339 = (void*)0;
struct sType* __dec_obj148;
void* __right_value340 = (void*)0;
struct sType* obj_type_224;
char* fun_name_225;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
char* generics_fun_name_226;
struct sFun* fun_227;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* __dec_obj149;
_Bool __result147__;
void* __right_value346 = (void*)0;
struct sType* result_type_228;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1CVALUEph* come_params_229;
int i_230;
struct list$1CVALUEph* o2_saved_231;
struct CVALUE* it_232;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_233;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct buffer* buf_234;
int j_235;
struct list$1CVALUEph* o2_saved_236;
struct CVALUE* it_237;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct CVALUE* come_value2_238;
void* __right_value354 = (void*)0;
char* __dec_obj150;
void* __right_value355 = (void*)0;
struct sType* __dec_obj151;
_Bool __result148__;
    tuple_elements_210=self->tuple_elements;
    tuple_types_211=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 594, "list$1sTypeph"))));
    tuple_values_212=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 595, "list$1CVALUEph"))));
    for(    o2_saved_213=(tuple_elements_210),it_214=list$1sNodeph_begin((o2_saved_213));    !list$1sNodeph_end((o2_saved_213));    it_214=list$1sNodeph_next((o2_saved_213))    ){
        if(        !node_compile(it_214,info)) {
            __result146__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_211,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_212,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result146__;
        }
        come_value_215=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_212,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_215)));
        list$1sTypeph_push_back(tuple_types_211,(struct sType*)come_increment_ref_count(sType_clone(come_value_215->type)));
        /*i*/come_call_finalizer3(come_value_215,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_216=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 609, "sType")),((char*)(__right_value327=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_211)))),(_Bool)0,info));
    __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_217=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_211)),it_218=list$1sTypeph_begin((o2_saved_217));    !list$1sTypeph_end((o2_saved_217));    it_218=list$1sTypeph_next((o2_saved_217))    ){
        list$1sTypeph_push_back(type_216->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_218)));
    }
    /*i*/come_call_finalizer3(o2_saved_217,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_219=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 615, "CVALUE"))));
    num_string_220=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 617, "buffer"))));
    buffer_append_str(num_string_220,"1");
    type2_221=(struct sType*)come_increment_ref_count(solve_generics(type_216,type_216,info));
    type_name_222=(char*)come_increment_ref_count(make_type_name_string(type2_221,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj147=obj_value_219->c_value;
    obj_value_219->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_222,type_name_222,((char*)(__right_value336=buffer_to_string(num_string_220))),info->sname,info->sline,type_name_222));
    /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_223=(struct sType*)come_increment_ref_count(sType_clone(type2_221));
    type3_223->mPointerNum++;
    type3_223->mHeap=(_Bool)1;
    type2_221->mHeap=(_Bool)1;
    __dec_obj148=obj_value_219->type;
    obj_value_219->type=(struct sType*)come_increment_ref_count(sType_clone(type2_221));
    come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_219->type->mPointerNum++;
    obj_value_219->var=((void*)0);
    append_object_to_right_values2(obj_value_219,(struct sType*)come_increment_ref_count(type3_223),info,(_Bool)0);
    obj_type_224=(struct sType*)come_increment_ref_count(sType_clone(type2_221));
    fun_name_225="initialize";
    generics_fun_name_226=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value342=make_generics_function(obj_type_224,(char*)come_increment_ref_count(__builtin_string(fun_name_225)),info,(_Bool)1)))));
    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_227=map$2charphsFunph_at(info->funcs,generics_fun_name_226,((void*)0));
    if(    fun_227==((void*)0)) {
        __dec_obj149=generics_fun_name_226;
        generics_fun_name_226=(char*)come_increment_ref_count(create_method_name(obj_type_224,(_Bool)0,((char*)(__right_value344=__builtin_string(fun_name_225))),info,(_Bool)1));
        /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_227=map$2charphsFunph_at(info->funcs,generics_fun_name_226,((void*)0));
        if(        fun_227==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_226,info->come_fun->mName);
            __result147__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_211,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_212,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_219,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_220,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_221,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_222 = come_decrement_ref_count2(type_name_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_223,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result147__;
        }
    }
    result_type_228=(struct sType*)come_increment_ref_count(sType_clone(fun_227->mResultType));
    result_type_228->mStatic=(_Bool)0;
    come_params_229=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 658, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_227->mParamTypes,0), "06str.c", 660, 9))->mHeap&&obj_value_219->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_227->mParamTypes,0), "06str.c", 661, 10)),obj_value_219->type,obj_value_219,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_229,(struct CVALUE*)come_increment_ref_count(obj_value_219));
    i_230=1;
    for(    o2_saved_231=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_212)),it_232=list$1CVALUEph_begin((o2_saved_231));    !list$1CVALUEph_end((o2_saved_231));    it_232=list$1CVALUEph_next((o2_saved_231))    ){
        come_value_233=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_232));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_227->mParamTypes,i_230), "06str.c", 669, 11))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_227->mParamTypes,i_230), "06str.c", 669, 12))->mHeap&&come_value_233->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_227->mParamTypes,i_230), "06str.c", 670, 13)),come_value_233->type,come_value_233,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_229,(struct CVALUE*)come_increment_ref_count(come_value_233));
        i_230++;
        /*i*/come_call_finalizer3(come_value_233,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_231,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_234=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 677, "buffer"))));
    buffer_append_str(buf_234,generics_fun_name_226);
    buffer_append_str(buf_234,"(");
    j_235=0;
    for(    o2_saved_236=(struct list$1CVALUEph*)come_increment_ref_count((come_params_229)),it_237=list$1CVALUEph_begin((o2_saved_236));    !list$1CVALUEph_end((o2_saved_236));    it_237=list$1CVALUEph_next((o2_saved_236))    ){
        buffer_append_str(buf_234,it_237->c_value);
        if(        j_235!=list$1CVALUEph_length(come_params_229)-1) {
            buffer_append_str(buf_234,",");
        }
        j_235++;
    }
    /*i*/come_call_finalizer3(o2_saved_236,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_234,")");
    come_value2_238=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 694, "CVALUE"))));
    __dec_obj150=come_value2_238->c_value;
    come_value2_238->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_234));
    /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj151=come_value2_238->type;
    come_value2_238->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_228));
    come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_238->type->mStatic=(_Bool)0;
    come_value2_238->var=((void*)0);
    if(    result_type_228->mHeap) {
        append_object_to_right_values2(come_value2_238,(struct sType*)come_increment_ref_count(result_type_228),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_238->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_238));
    __result148__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_211,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_212,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_219,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_221,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_222 = come_decrement_ref_count2(type_name_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_223,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_228,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_229,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_234,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result148__;
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
struct sNullReturnValue* __result149__;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value356,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __result150__;
    __result150__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value357=__builtin_string("sNullReturnValue")));
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_239;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct buffer* buf_240;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
char* var_name_242;
void* __right_value364 = (void*)0;
struct sType* result_type_243;
void* __right_value365 = (void*)0;
struct sType* result_type2_244;
struct sType* left_type_245;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value2_246;
char* __dec_obj153;
struct sType* __dec_obj154;
    if(    info->come_fun) {
        come_value_239=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 729, "CVALUE"))));
        buf_240=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 731, "buffer"))));
        static int num_241=0;
        num_241++;
        var_name_242=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value362=int_to_string(num_241)))));
        __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_243=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_244=(struct sType*)come_increment_ref_count(solve_generics(result_type_243,info->generics_type,info));
        left_type_245=(struct sType*)come_increment_ref_count(result_type2_244);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value366=make_define_var(left_type_245,var_name_242,(_Bool)0,info))));
        __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_242,((char*)(__right_value367=make_type_name_string(left_type_245,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_246=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 747, "CVALUE"))));
        __dec_obj153=come_value2_246->c_value;
        come_value2_246->c_value=(char*)come_increment_ref_count(var_name_242);
        /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj154=come_value2_246->type;
        come_value2_246->type=(struct sType*)come_increment_ref_count(result_type2_244);
        come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_246->type->mStatic=(_Bool)0;
        come_value2_246->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_246));
        /*i*/come_call_finalizer3(come_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_240,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_244,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_246,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sNode* _inf_value1;
struct sNullReturnValue* _inf_obj_value1;
void* __right_value374 = (void*)0;
struct sNode* __result153__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 764, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullReturnValue*)(__right_value371=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 764, "sNullReturnValue")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullReturnValue_finalize;
    _inf_value1->clone=(void*)sNullReturnValue_clone;
    _inf_value1->compile=(void*)sNullReturnValue_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullReturnValue_kind;
    __result153__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value374=_inf_value1));
    /*g*/come_call_finalizer3(__right_value371,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value374) { __right_value374 = come_decrement_ref_count2(__right_value374, ((struct sNode*)__right_value374)->finalize, ((struct sNode*)__right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result153__;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj155;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj155=self->sname;
            /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result151__;
void* __right_value372 = (void*)0;
struct sNullReturnValue* result_247;
void* __right_value373 = (void*)0;
char* __dec_obj156;
struct sNullReturnValue* __result152__;
    if(    self==(void*)0) {
        __result151__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    result_247=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "sNullReturnValue"));
    if(    self!=((void*)0)) {
        result_247->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj156=result_247->sname;
        result_247->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result152__ = gComeFunResultObject = __result_obj__ = result_247;
    /*i*/come_call_finalizer3(result_247,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value375 = (void*)0;
struct sNullReturnValueOfException* __result154__;
    ((struct sNodeBase*)(__right_value375=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value375,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result154__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value376 = (void*)0;
char* __result155__;
    __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value376=__builtin_string("sNullReturnValue")));
    __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct CVALUE* come_value_248;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct buffer* buf_249;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
char* var_name_251;
void* __right_value383 = (void*)0;
struct sType* result_type_252;
void* __right_value384 = (void*)0;
struct sType* result_type2_253;
struct sType* __dec_obj158;
void* __right_value385 = (void*)0;
struct sType* left_type_254;
_Bool __result156__;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct CVALUE* come_value2_255;
char* __dec_obj159;
struct sType* __dec_obj160;
    if(    info->come_fun) {
        come_value_248=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 782, "CVALUE"))));
        buf_249=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 784, "buffer"))));
        static int num_250=0;
        num_250++;
        var_name_251=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value381=int_to_string(num_250)))));
        __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_252=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_253=(struct sType*)come_increment_ref_count(solve_generics(result_type_252,info->generics_type,info));
        if(        result_type2_253->mNoSolvedGenericsType->v1) {
            __dec_obj158=result_type2_253;
            result_type2_253=(struct sType*)come_increment_ref_count(result_type2_253->mNoSolvedGenericsType->v1);
            come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_254=(struct sType*)come_increment_ref_count(sType_clone(list$1sTypephp_operator_load_element(result_type2_253->mGenericsTypes,0)));
        if(        left_type_254==((void*)0)||string_operator_not_equals(result_type2_253->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result156__ = (_Bool)0;
            /*i*/come_call_finalizer3(come_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_249,buffer_finalize, 0, 0, 0, 0, (void*)0);
            var_name_251 = come_decrement_ref_count2(var_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_252,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_253,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type_254,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result156__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value386=make_define_var(left_type_254,var_name_251,(_Bool)0,info))));
        __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_251,((char*)(__right_value387=make_type_name_string(left_type_254,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_255=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 809, "CVALUE"))));
        __dec_obj159=come_value2_255->c_value;
        come_value2_255->c_value=(char*)come_increment_ref_count(var_name_251);
        /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj160=come_value2_255->type;
        come_value2_255->type=(struct sType*)come_increment_ref_count(left_type_254);
        come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_255->type->mStatic=(_Bool)0;
        come_value2_255->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_255));
        /*i*/come_call_finalizer3(come_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_249,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_251 = come_decrement_ref_count2(var_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_252,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_253,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_254,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValueOfException* _inf_obj_value2;
void* __right_value394 = (void*)0;
struct sNode* __result159__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 826, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value391=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 826, "sNullReturnValueOfException")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value2->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value2->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValueOfException_kind;
    __result159__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value394=_inf_value2));
    /*g*/come_call_finalizer3(__right_value391,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value394) { __right_value394 = come_decrement_ref_count2(__right_value394, ((struct sNode*)__right_value394)->finalize, ((struct sNode*)__right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj161;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj161=self->sname;
            /*G*/ __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result157__;
void* __right_value392 = (void*)0;
struct sNullReturnValueOfException* result_256;
void* __right_value393 = (void*)0;
char* __dec_obj162;
struct sNullReturnValueOfException* __result158__;
    if(    self==(void*)0) {
        __result157__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    result_256=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "sNullReturnValueOfException"));
    if(    self!=((void*)0)) {
        result_256->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_256->sname;
        result_256->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result158__ = gComeFunResultObject = __result_obj__ = result_256;
    /*i*/come_call_finalizer3(result_256,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
struct sType* __dec_obj163;
struct sNullValue* __result160__;
    ((struct sNodeBase*)(__right_value395=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value395,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj163=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result160__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value396 = (void*)0;
char* __result161__;
    __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value396=__builtin_string("sNullValue")));
    __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct CVALUE* come_value_257;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct buffer* buf_258;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
char* var_name_260;
struct sType* left_type_261;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct CVALUE* come_value2_262;
char* __dec_obj166;
struct sType* __dec_obj167;
_Bool __result162__;
    come_value_257=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 845, "CVALUE"))));
    buf_258=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 847, "buffer"))));
    static int num_259=0;
    num_259++;
    var_name_260=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value401=int_to_string(num_259)))));
    __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    left_type_261=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value403=make_define_var(left_type_261,var_name_260,(_Bool)0,info))));
    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_260,((char*)(__right_value404=make_type_name_string(left_type_261,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_262=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 859, "CVALUE"))));
    __dec_obj166=come_value2_262->c_value;
    come_value2_262->c_value=(char*)come_increment_ref_count(var_name_260);
    /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=come_value2_262->type;
    come_value2_262->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_262->type->mStatic=(_Bool)0;
    come_value2_262->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_262));
    __result162__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_258,buffer_finalize, 0, 0, 0, 0, (void*)0);
    var_name_260 = come_decrement_ref_count2(var_name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result162__;
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sNode* _inf_value3;
struct sNullValue* _inf_obj_value3;
void* __right_value412 = (void*)0;
struct sNode* __result165__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 875, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sNullValue*)(__right_value408=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 875, "sNullValue")),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullValue_finalize;
    _inf_value3->clone=(void*)sNullValue_clone;
    _inf_value3->compile=(void*)sNullValue_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullValue_kind;
    __result165__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value412=_inf_value3));
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value408,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value412) { __right_value412 = come_decrement_ref_count2(__right_value412, ((struct sNode*)__right_value412)->finalize, ((struct sNode*)__right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj168;
struct sType* __dec_obj169;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj168=self->sname;
            /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj169=self->type;
            come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result163__;
void* __right_value409 = (void*)0;
struct sNullValue* result_263;
void* __right_value410 = (void*)0;
char* __dec_obj170;
void* __right_value411 = (void*)0;
struct sType* __dec_obj171;
struct sNullValue* __result164__;
    if(    self==(void*)0) {
        __result163__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_263=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "sNullValue"));
    if(    self!=((void*)0)) {
        result_263->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj170=result_263->sname;
        result_263->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj171=result_263->type;
        result_263->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result164__ = gComeFunResultObject = __result_obj__ = result_263;
    /*i*/come_call_finalizer3(result_263,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value413 = (void*)0;
struct list$1sNodeph* __dec_obj172;
struct sNoneNode* __result166__;
    ((struct sNodeBase*)(__right_value413=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value413,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj172=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj172,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result166__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value414 = (void*)0;
char* __result167__;
    __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value414=__builtin_string("sNoneNode")));
    __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_264;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct list$1sTypeph* tuple_types_265;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1CVALUEph* tuple_values_266;
int i_267;
struct list$1sNodeph* o2_saved_268;
struct sNode* it_269;
_Bool __result168__;
void* __right_value419 = (void*)0;
struct CVALUE* come_value_270;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sType* string_type_271;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sType* type_272;
struct list$1sTypeph* o2_saved_273;
struct sType* it_274;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct CVALUE* obj_value_275;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct buffer* num_string_276;
void* __right_value433 = (void*)0;
struct sType* type2_277;
void* __right_value434 = (void*)0;
char* type_name_278;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* __dec_obj175;
void* __right_value437 = (void*)0;
struct sType* type3_279;
void* __right_value438 = (void*)0;
struct sType* __dec_obj176;
void* __right_value439 = (void*)0;
struct sType* obj_type_280;
char* fun_name_281;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
char* generics_fun_name_282;
struct sFun* fun_283;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
char* __dec_obj177;
_Bool __result169__;
void* __right_value445 = (void*)0;
struct sType* result_type_284;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1CVALUEph* come_params_285;
struct list$1CVALUEph* o2_saved_286;
struct CVALUE* it_287;
void* __right_value448 = (void*)0;
struct CVALUE* come_value_288;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct buffer* buf_289;
int j_290;
struct list$1CVALUEph* o2_saved_291;
struct CVALUE* it_292;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct CVALUE* come_value2_293;
void* __right_value453 = (void*)0;
char* __dec_obj178;
void* __right_value454 = (void*)0;
struct sType* __dec_obj179;
_Bool __result170__;
    tuple_elements_264=self->tuple_elements;
    tuple_types_265=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 895, "list$1sTypeph"))));
    tuple_values_266=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 896, "list$1CVALUEph"))));
    i_267=0;
    for(    o2_saved_268=(tuple_elements_264),it_269=list$1sNodeph_begin((o2_saved_268));    !list$1sNodeph_end((o2_saved_268));    it_269=list$1sNodeph_next((o2_saved_268))    ){
        if(        !node_compile(it_269,info)) {
            __result168__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_265,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_266,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result168__;
        }
        come_value_270=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_266,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_270)));
        list$1sTypeph_push_back(tuple_types_265,(struct sType*)come_increment_ref_count(sType_clone(come_value_270->type)));
        if(        i_267==1) {
            string_type_271=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 911, "sType")),"char*",(_Bool)0,info));
            string_type_271->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value424=xsprintf("invalid none type"))),string_type_271,come_value_270->type,come_value_270,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(string_type_271,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_267++;
        /*i*/come_call_finalizer3(come_value_270,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_272=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 919, "sType")),((char*)(__right_value426=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_265)))),(_Bool)0,info));
    __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_273=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_265)),it_274=list$1sTypeph_begin((o2_saved_273));    !list$1sTypeph_end((o2_saved_273));    it_274=list$1sTypeph_next((o2_saved_273))    ){
        list$1sTypeph_push_back(type_272->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_274)));
    }
    /*i*/come_call_finalizer3(o2_saved_273,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_275=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 925, "CVALUE"))));
    num_string_276=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 927, "buffer"))));
    buffer_append_str(num_string_276,"1");
    type2_277=(struct sType*)come_increment_ref_count(solve_generics(type_272,type_272,info));
    type_name_278=(char*)come_increment_ref_count(make_type_name_string(type2_277,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj175=obj_value_275->c_value;
    obj_value_275->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_278,type_name_278,((char*)(__right_value435=buffer_to_string(num_string_276))),info->sname,info->sline,type_name_278));
    /*G*/ __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_279=(struct sType*)come_increment_ref_count(sType_clone(type2_277));
    type3_279->mPointerNum++;
    type3_279->mHeap=(_Bool)1;
    type2_277->mHeap=(_Bool)1;
    __dec_obj176=obj_value_275->type;
    obj_value_275->type=(struct sType*)come_increment_ref_count(sType_clone(type2_277));
    come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_275->type->mPointerNum++;
    obj_value_275->var=((void*)0);
    append_object_to_right_values2(obj_value_275,(struct sType*)come_increment_ref_count(type3_279),info,(_Bool)0);
    obj_type_280=(struct sType*)come_increment_ref_count(sType_clone(type2_277));
    fun_name_281="initialize";
    generics_fun_name_282=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value441=make_generics_function(obj_type_280,(char*)come_increment_ref_count(__builtin_string(fun_name_281)),info,(_Bool)1)))));
    __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_283=map$2charphsFunph_at(info->funcs,generics_fun_name_282,((void*)0));
    if(    fun_283==((void*)0)) {
        __dec_obj177=generics_fun_name_282;
        generics_fun_name_282=(char*)come_increment_ref_count(create_method_name(obj_type_280,(_Bool)0,((char*)(__right_value443=__builtin_string(fun_name_281))),info,(_Bool)1));
        /*G*/ __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_283=map$2charphsFunph_at(info->funcs,generics_fun_name_282,((void*)0));
        if(        fun_283==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_282,info->come_fun->mName);
            __result169__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_265,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_266,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_276,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_278 = come_decrement_ref_count2(type_name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_279,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_280,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_282 = come_decrement_ref_count2(generics_fun_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result169__;
        }
    }
    result_type_284=(struct sType*)come_increment_ref_count(sType_clone(fun_283->mResultType));
    result_type_284->mStatic=(_Bool)0;
    come_params_285=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 968, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_283->mParamTypes,0), "06str.c", 970, 14))->mHeap&&obj_value_275->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_283->mParamTypes,0), "06str.c", 971, 15)),obj_value_275->type,obj_value_275,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_285,(struct CVALUE*)come_increment_ref_count(obj_value_275));
    i_267=1;
    for(    o2_saved_286=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_266)),it_287=list$1CVALUEph_begin((o2_saved_286));    !list$1CVALUEph_end((o2_saved_286));    it_287=list$1CVALUEph_next((o2_saved_286))    ){
        come_value_288=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_287));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_283->mParamTypes,i_267), "06str.c", 979, 16))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_283->mParamTypes,i_267), "06str.c", 979, 17))->mHeap&&come_value_288->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_283->mParamTypes,i_267), "06str.c", 980, 18)),come_value_288->type,come_value_288,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_285,(struct CVALUE*)come_increment_ref_count(come_value_288));
        i_267++;
        /*i*/come_call_finalizer3(come_value_288,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_286,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_289=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 987, "buffer"))));
    buffer_append_str(buf_289,generics_fun_name_282);
    buffer_append_str(buf_289,"(");
    j_290=0;
    for(    o2_saved_291=(struct list$1CVALUEph*)come_increment_ref_count((come_params_285)),it_292=list$1CVALUEph_begin((o2_saved_291));    !list$1CVALUEph_end((o2_saved_291));    it_292=list$1CVALUEph_next((o2_saved_291))    ){
        buffer_append_str(buf_289,it_292->c_value);
        if(        j_290!=list$1CVALUEph_length(come_params_285)-1) {
            buffer_append_str(buf_289,",");
        }
        j_290++;
    }
    /*i*/come_call_finalizer3(o2_saved_291,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_289,")");
    come_value2_293=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1004, "CVALUE"))));
    __dec_obj178=come_value2_293->c_value;
    come_value2_293->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_289));
    /*G*/ __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj179=come_value2_293->type;
    come_value2_293->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_284));
    come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_293->type->mStatic=(_Bool)0;
    come_value2_293->var=((void*)0);
    if(    result_type_284->mHeap) {
        append_object_to_right_values2(come_value2_293,(struct sType*)come_increment_ref_count(result_type_284),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_293->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_293));
    __result170__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_265,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_266,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_276,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_278 = come_decrement_ref_count2(type_name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_279,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_280,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_282 = come_decrement_ref_count2(generics_fun_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_284,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_285,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_289,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result170__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value455 = (void*)0;
struct list$1sNodeph* __dec_obj180;
struct list$1sNodeph* __dec_obj181;
struct sMapNode* __result171__;
    ((struct sNodeBase*)(__right_value455=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value455,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj180=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj180,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj181=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj181,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value456 = (void*)0;
char* __result172__;
    __result172__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value456=__builtin_string("sMapNode")));
    __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_294;
struct list$1sNodeph* map_elements_295;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1CVALUEph* key_params_296;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1CVALUEph* element_params_297;
struct sType* map_key_type_298;
struct sType* map_element_type_299;
int i_300;
struct sNode* key_elements_301;
struct sNode* elements_305;
_Bool __result175__;
void* __right_value461 = (void*)0;
struct CVALUE* come_value_306;
void* __right_value462 = (void*)0;
_Bool __result176__;
void* __right_value463 = (void*)0;
struct CVALUE* come_value2_307;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* __dec_obj185;
void* __right_value466 = (void*)0;
struct sType* __dec_obj186;
void* __right_value467 = (void*)0;
struct sType* key_type_values_309;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
char* var_name_310;
void* __right_value470 = (void*)0;
struct sVar* var__311;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sType* element_type_values_312;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
char* var_name2_313;
void* __right_value475 = (void*)0;
struct sVar* var2__314;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct buffer* source_315;
int i_316;
struct CVALUE* key_param_317;
struct CVALUE* element_param_318;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* map_type_319;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* obj_type_320;
char* fun_name_321;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
char* generics_fun_name_322;
struct sFun* fun_323;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
char* __dec_obj187;
_Bool __result177__;
void* __right_value493 = (void*)0;
struct sType* result_type_324;
struct sType* type_325;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct CVALUE* obj_value_326;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct buffer* num_string_327;
void* __right_value498 = (void*)0;
struct sType* type2_328;
void* __right_value499 = (void*)0;
char* type_name_329;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
char* __dec_obj188;
void* __right_value502 = (void*)0;
struct sType* type3_330;
void* __right_value503 = (void*)0;
struct sType* __dec_obj189;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1CVALUEph* come_params_331;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct CVALUE* come_value2_332;
void* __right_value508 = (void*)0;
char* __dec_obj190;
struct sType* __dec_obj191;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct CVALUE* come_value3_333;
void* __right_value511 = (void*)0;
char* __dec_obj192;
struct sType* __dec_obj193;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct CVALUE* come_value4_334;
void* __right_value514 = (void*)0;
char* __dec_obj194;
struct sType* __dec_obj195;
int j_335;
struct list$1CVALUEph* o2_saved_336;
struct CVALUE* it_337;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct CVALUE* come_value5_338;
void* __right_value517 = (void*)0;
char* __dec_obj196;
void* __right_value518 = (void*)0;
struct sType* __dec_obj197;
_Bool __result178__;
    map_key_elements_294=self->map_key_elements;
    map_elements_295=self->map_elements;
    key_params_296=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1044, "list$1CVALUEph"))));
    element_params_297=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1045, "list$1CVALUEph"))));
    map_key_type_298=((void*)0);
    map_element_type_299=((void*)0);
    for(    i_300=0;    i_300<list$1sNodeph_length(map_key_elements_294);    i_300++    ){
        key_elements_301=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_key_elements_294,i_300), "06str.c", 1050, 19));
        elements_305=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_elements_295,i_300), "06str.c", 1051, 20));
        if(        !node_compile(key_elements_301,info)) {
            __result175__ = (_Bool)0;
            /*i*/come_call_finalizer3(key_params_296,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_params_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_key_type_298,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_element_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result175__;
        }
        come_value_306=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        map_key_type_298) {
            check_assign_type(((char*)(__right_value462=xsprintf("invalid map key type"))),map_key_type_298,come_value_306->type,come_value_306,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(key_params_296,(struct CVALUE*)come_increment_ref_count(come_value_306));
        if(        !node_compile(elements_305,info)) {
            __result176__ = (_Bool)0;
            /*i*/come_call_finalizer3(come_value_306,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(key_params_296,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_params_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_key_type_298,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_element_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result176__;
        }
        come_value2_307=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        map_element_type_299) {
            check_assign_type(((char*)(__right_value464=xsprintf("invalid map element type"))),map_element_type_299,come_value2_307->type,come_value2_307,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(element_params_297,(struct CVALUE*)come_increment_ref_count(come_value2_307));
        __dec_obj185=map_key_type_298;
        map_key_type_298=(struct sType*)come_increment_ref_count(sType_clone(come_value_306->type));
        come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj186=map_element_type_299;
        map_element_type_299=(struct sType*)come_increment_ref_count(sType_clone(come_value2_307->type));
        come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_306,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_307,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    static int map_value_num_308=0;
    key_type_values_309=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_298));
    list$1sNodeph_push_back(key_type_values_309->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(key_params_296),info)));
    key_type_values_309->mHeap=(_Bool)0;
    var_name_310=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_308));
    add_variable_to_table(var_name_310,(struct sType*)come_increment_ref_count(sType_clone(key_type_values_309)),info);
    var__311=get_variable_from_table(info->lv_table,var_name_310);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value471=make_define_var(key_type_values_309,var__311->mCValueName,(_Bool)0,info))));
    __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_312=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_299));
    list$1sNodeph_push_back(element_type_values_312->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(element_params_297),info)));
    element_type_values_312->mHeap=(_Bool)0;
    var_name2_313=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_308));
    add_variable_to_table(var_name2_313,(struct sType*)come_increment_ref_count(sType_clone(element_type_values_312)),info);
    var2__314=get_variable_from_table(info->lv_table,var_name2_313);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value476=make_define_var(element_type_values_312,var2__314->mCValueName,(_Bool)0,info))));
    __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_315=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1109, "buffer"))));
    buffer_append_str(source_315,"(");
    for(    i_316=0;    i_316<list$1CVALUEph_length(key_params_296);    i_316++    ){
        key_param_317=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(key_params_296,i_316), "06str.c", 1114, 21));
        element_param_318=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(element_params_297,i_316), "06str.c", 1115, 22));
        if(        map_key_type_298->mHeap) {
            buffer_append_str(source_315,((char*)(__right_value479=xsprintf("%s[%d]=come_increment_ref_count(%s),\n",var__311->mCValueName,i_316,key_param_317->c_value))));
            __right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_315,((char*)(__right_value480=xsprintf("%s[%d]=%s,\n",var__311->mCValueName,i_316,key_param_317->c_value))));
            __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(        map_element_type_299->mHeap) {
            buffer_append_str(source_315,((char*)(__right_value481=xsprintf("%s[%d]=come_increment_ref_count(%s),\n",var2__314->mCValueName,i_316,element_param_318->c_value))));
            __right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_315,((char*)(__right_value482=xsprintf("%s[%d]=%s,\n",var2__314->mCValueName,i_316,element_param_318->c_value))));
            __right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    map_type_319=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1136, "sType")),"map",(_Bool)0,info));
    list$1sTypeph_push_back(map_type_319->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(map_key_type_298)));
    list$1sTypeph_push_back(map_type_319->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(map_element_type_299)));
    obj_type_320=(struct sType*)come_increment_ref_count(sType_clone(map_type_319));
    fun_name_321="initialize_with_values";
    generics_fun_name_322=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value489=make_generics_function(obj_type_320,(char*)come_increment_ref_count(__builtin_string(fun_name_321)),info,(_Bool)1)))));
    __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_323=map$2charphsFunph_at(info->funcs,generics_fun_name_322,((void*)0));
    if(    fun_323==((void*)0)) {
        __dec_obj187=generics_fun_name_322;
        generics_fun_name_322=(char*)come_increment_ref_count(create_method_name(obj_type_320,(_Bool)0,((char*)(__right_value491=__builtin_string(fun_name_321))),info,(_Bool)1));
        /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_323=map$2charphsFunph_at(info->funcs,generics_fun_name_322,((void*)0));
        if(        fun_323==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_322,info->come_fun->mName);
            __result177__ = (_Bool)1;
            /*i*/come_call_finalizer3(key_params_296,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_params_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_key_type_298,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_element_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(key_type_values_309,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_310 = come_decrement_ref_count2(var_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_type_values_312,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_313 = come_decrement_ref_count2(var_name2_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(source_315,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_320,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_322 = come_decrement_ref_count2(generics_fun_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result177__;
        }
    }
    result_type_324=(struct sType*)come_increment_ref_count(sType_clone(fun_323->mResultType));
    result_type_324->mStatic=(_Bool)0;
    type_325=map_type_319;
    obj_value_326=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1163, "CVALUE"))));
    num_string_327=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1165, "buffer"))));
    buffer_append_str(num_string_327,"1");
    type2_328=(struct sType*)come_increment_ref_count(solve_generics(type_325,type_325,info));
    type_name_329=(char*)come_increment_ref_count(make_type_name_string(type2_328,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj188=obj_value_326->c_value;
    obj_value_326->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_329,type_name_329,((char*)(__right_value500=buffer_to_string(num_string_327))),info->sname,info->sline,type_name_329));
    /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_330=(struct sType*)come_increment_ref_count(sType_clone(type2_328));
    type3_330->mPointerNum++;
    type3_330->mHeap=(_Bool)1;
    type2_328->mHeap=(_Bool)1;
    __dec_obj189=obj_value_326->type;
    obj_value_326->type=(struct sType*)come_increment_ref_count(sType_clone(type2_328));
    come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_326->type->mPointerNum++;
    obj_value_326->var=((void*)0);
    append_object_to_right_values2(obj_value_326,(struct sType*)come_increment_ref_count(type3_330),info,(_Bool)0);
    come_params_331=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1185, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_323->mParamTypes,0), "06str.c", 1187, 23))->mHeap&&obj_value_326->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_323->mParamTypes,0), "06str.c", 1188, 24)),obj_value_326->type,obj_value_326,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_331,(struct CVALUE*)come_increment_ref_count(obj_value_326));
    come_value2_332=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1192, "CVALUE"))));
    __dec_obj190=come_value2_332->c_value;
    come_value2_332->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(key_params_296)));
    /*G*/ __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj191=come_value2_332->type;
    come_value2_332->type=((void*)0);
    come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_332->var=((void*)0);
    list$1CVALUEph_push_back(come_params_331,(struct CVALUE*)come_increment_ref_count(come_value2_332));
    come_value3_333=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1200, "CVALUE"))));
    __dec_obj192=come_value3_333->c_value;
    come_value3_333->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__311->mCValueName));
    /*G*/ __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj193=come_value3_333->type;
    come_value3_333->type=((void*)0);
    come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_333->var=((void*)0);
    list$1CVALUEph_push_back(come_params_331,(struct CVALUE*)come_increment_ref_count(come_value3_333));
    come_value4_334=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1208, "CVALUE"))));
    __dec_obj194=come_value4_334->c_value;
    come_value4_334->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__314->mCValueName));
    /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj195=come_value4_334->type;
    come_value4_334->type=((void*)0);
    come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_334->var=((void*)0);
    list$1CVALUEph_push_back(come_params_331,(struct CVALUE*)come_increment_ref_count(come_value4_334));
    buffer_append_str(source_315,generics_fun_name_322);
    buffer_append_str(source_315,"(");
    j_335=0;
    for(    o2_saved_336=(struct list$1CVALUEph*)come_increment_ref_count((come_params_331)),it_337=list$1CVALUEph_begin((o2_saved_336));    !list$1CVALUEph_end((o2_saved_336));    it_337=list$1CVALUEph_next((o2_saved_336))    ){
        buffer_append_str(source_315,it_337->c_value);
        if(        j_335!=list$1CVALUEph_length(come_params_331)-1) {
            buffer_append_str(source_315,",");
        }
        j_335++;
    }
    /*i*/come_call_finalizer3(o2_saved_336,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_315,")");
    buffer_append_str(source_315,")");
    come_value5_338=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1234, "CVALUE"))));
    __dec_obj196=come_value5_338->c_value;
    come_value5_338->c_value=(char*)come_increment_ref_count(buffer_to_string(source_315));
    /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj197=come_value5_338->type;
    come_value5_338->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_324));
    come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_338->type->mStatic=(_Bool)0;
    come_value5_338->var=((void*)0);
    if(    result_type_324->mHeap) {
        append_object_to_right_values2(come_value5_338,(struct sType*)come_increment_ref_count(result_type_324),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_338->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_338));
    __result178__ = (_Bool)1;
    /*i*/come_call_finalizer3(key_params_296,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_params_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_key_type_298,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_element_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(key_type_values_309,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_310 = come_decrement_ref_count2(var_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_type_values_312,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_313 = come_decrement_ref_count2(var_name2_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_315,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_320,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_322 = come_decrement_ref_count2(generics_fun_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_324,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_326,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_327,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_328,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_329 = come_decrement_ref_count2(type_name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_330,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_331,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value3_333,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value4_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value5_338,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result178__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_302;
int i_303;
struct sNode* __result173__;
struct sNode* default_value_304;
struct sNode* __result174__;
default_value_304 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_302=self->head;
    i_303=0;
    while(it_302!=((void*)0)) {
        if(        position==i_303) {
            __result173__ = gComeFunResultObject = __result_obj__ = it_302->item;
            gComeFunResultObject = (void*)0;
            return __result173__;
        }
        it_302=it_302->next;
        i_303++;
    }
    memset(&default_value_304,0,sizeof(struct sNode*));
    __result174__ = gComeFunResultObject = __result_obj__ = default_value_304;
    if(default_value_304) { default_value_304 = come_decrement_ref_count2(default_value_304, ((struct sNode*)default_value_304)->finalize, ((struct sNode*)default_value_304)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result174__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_339;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct list$1sNodeph* exps_340;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct buffer* value_341;
char* head_of_last_line_342;
int len_343;
void* __right_value523 = (void*)0;
struct sNode* exp_344;
int sline2_345;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sNode* _inf_value4;
struct sSStringNode* _inf_obj_value4;
void* __right_value531 = (void*)0;
struct sNode* __result181__;
int sline_347;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct buffer* value_348;
char* p_349;
int sline_350;
int sline2_351;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sNode* _inf_value5;
struct sStrNode* _inf_obj_value5;
void* __right_value540 = (void*)0;
struct sNode* __result184__;
int sline_353;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct buffer* buf_354;
_Bool global_355;
_Bool ignore_case_356;
_Bool throw_or_rescue_357;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value549 = (void*)0;
struct sNode* obj_358;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_360;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct buffer* method_block_366;
int method_block_sline_367;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1sTypeph* method_generics_types_368;
void* __right_value594 = (void*)0;
struct sNode* __result190__;
int c_369;
int n_370;
int n_371;
unsigned long long int n_374;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sNode* _inf_value7;
struct sCharNode* _inf_obj_value7;
void* __right_value599 = (void*)0;
struct sNode* __result193__;
unsigned int c_376;
_Bool quote_377;
int n_378;
int n_379;
unsigned long long int n_382;
unsigned char p2_383;
int size_384;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sNode* _inf_value8;
struct sWCharNode* _inf_obj_value8;
void* __right_value604 = (void*)0;
struct sNode* __result196__;
int sline_387;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct buffer* value_388;
char* p_389;
int sline_390;
int len_391;
int n_392;
unsigned long unsigned  int lont_395;
int n_396;
int sline2_397;
int len_398;
void* __right_value607 = (void*)0;
unsigned int* wstr_399;
char* str_400;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sNode* _inf_value9;
struct sWStringNode* _inf_obj_value9;
void* __right_value613 = (void*)0;
struct sNode* __result199__;
int sline_402;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct list$1sNodeph* exps_403;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct buffer* value_404;
char* p_405;
int sline_406;
void* __right_value618 = (void*)0;
struct sNode* exp_407;
char* p_408;
int len_409;
void* __right_value619 = (void*)0;
struct sNode* exp_410;
int sline2_411;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sNode* _inf_value10;
struct sSStringNode* _inf_obj_value10;
void* __right_value627 = (void*)0;
struct sNode* __result202__;
char* p_413;
_Bool no_comma_414;
void* __right_value628 = (void*)0;
struct sNode* node_415;
char* p2_416;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct buffer* first_element_source_417;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct list$1sNodeph* list_elements_418;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct list$1sNodeph* map_keys_419;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct list$1sNodeph* map_elements_420;
_Bool no_comma_421;
void* __right_value637 = (void*)0;
struct sNode* node2_422;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sNode* _inf_value11;
struct sMapNode* _inf_obj_value11;
void* __right_value644 = (void*)0;
struct sNode* __result205__;
_Bool no_comma_424;
void* __right_value645 = (void*)0;
struct sNode* node2_425;
void* __right_value646 = (void*)0;
struct sNode* node3_426;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value12;
struct sMapNode* _inf_obj_value12;
void* __right_value653 = (void*)0;
struct sNode* __result208__;
_Bool no_comma_428;
void* __right_value654 = (void*)0;
struct sNode* node2_429;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* _inf_value13;
struct sListNode* _inf_obj_value13;
void* __right_value660 = (void*)0;
struct sNode* __result211__;
void* __right_value661 = (void*)0;
struct sNode* __result212__;
memset(&c_369, 0, sizeof(int));
memset(&c_376, 0, sizeof(unsigned int));
memset(&quote_377, 0, sizeof(_Bool));
memset(&size_384, 0, sizeof(int));
memset(&lont_395, 0, sizeof(unsigned long unsigned  int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        info->p+=4;
        info->sline++;
        sline_339=info->sline;
        exps_340=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1262, "list$1sNodeph"))));
        value_341=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1263, "buffer"))));
        head_of_last_line_342=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_342) {
                    buffer_trim(value_341,info->p-head_of_last_line_342);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_341,37);
                buffer_append_char(value_341,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_341,92);
                buffer_append_char(value_341,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_341,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_343=0;
                    while(xisdigit(*info->p)&&len_343<3) {
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        len_343++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_341,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_344=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_340,(struct sNode*)come_increment_ref_count(exp_344));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_341,"%s");
                    if(exp_344) { exp_344 = come_decrement_ref_count2(exp_344, ((struct sNode*)exp_344)->finalize, ((struct sNode*)exp_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_341,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_345=info->sline;
                info->sline=sline_339;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_341,92);
                    buffer_append_char(value_341,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_342=info->p;
                }
                else {
                    buffer_append_char(value_341,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1412, "struct sNode");
        _inf_obj_value4=come_increment_ref_count(((struct sSStringNode*)(__right_value526=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1412, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_341)),(struct list$1sNodeph*)come_increment_ref_count(exps_340),sline_339,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sSStringNode_finalize;
        _inf_value4->clone=(void*)sSStringNode_clone;
        _inf_value4->compile=(void*)sSStringNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sSStringNode_kind;
        __result181__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value531=_inf_value4));
        /*i*/come_call_finalizer3(exps_340,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_341,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value526,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value531) { __right_value531 = come_decrement_ref_count2(__right_value531, ((struct sNode*)__right_value531)->finalize, ((struct sNode*)__right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result181__;
        /*i*/come_call_finalizer3(exps_340,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_341,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        info->p++;
        sline_347=info->sline;
        value_348=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1420, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_349=info->p;
                sline_350=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_349;
                    info->sline=sline_350;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_348,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_348,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_348,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_351=info->sline;
                info->sline=sline_347;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_351;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_348,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1472, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sStrNode*)(__right_value536=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1472, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(value_348)),sline_347,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sStrNode_finalize;
        _inf_value5->clone=(void*)sStrNode_clone;
        _inf_value5->compile=(void*)sStrNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sStrNode_kind;
        __result184__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value540=_inf_value5));
        /*i*/come_call_finalizer3(value_348,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value536,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value540) { __right_value540 = come_decrement_ref_count2(__right_value540, ((struct sNode*)__right_value540)->finalize, ((struct sNode*)__right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result184__;
        /*i*/come_call_finalizer3(value_348,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47) {
        info->p++;
        sline_353=info->sline;
        buf_354=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1479, "buffer"))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_354,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf_354,*info->p);
                info->p++;
            }
        }
        global_355=(_Bool)0;
        ignore_case_356=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_355=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_356=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        throw_or_rescue_357=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0) {
            throw_or_rescue_357=(_Bool)1;
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1523, "struct sNode");
        _inf_obj_value6=come_increment_ref_count(((struct sStrNode*)(__right_value545=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1523, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(buf_354)),sline_353,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        obj_358=(struct sNode*)come_increment_ref_count(_inf_value6);
        /*g*/come_call_finalizer3(__right_value545,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_360=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1525, "list$1tuple2$2charphsNodephph"))));
        list$1tuple2$2charphsNodephph_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1527, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_358))));
        list$1tuple2$2charphsNodephph_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1528, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_356)?(((struct sNode*)(__right_value559=create_int_node(1,info)))):(((struct sNode*)(__right_value560=create_int_node(0,info)))))))));
        if(__right_value559) { __right_value559 = come_decrement_ref_count2(__right_value559, ((struct sNode*)__right_value559)->finalize, ((struct sNode*)__right_value559)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value560) { __right_value560 = come_decrement_ref_count2(__right_value560, ((struct sNode*)__right_value560)->finalize, ((struct sNode*)__right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1529, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1530, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_355)?(((struct sNode*)(__right_value568=create_int_node(1,info)))):(((struct sNode*)(__right_value569=create_int_node(0,info)))))))));
        if(__right_value568) { __right_value568 = come_decrement_ref_count2(__right_value568, ((struct sNode*)__right_value568)->finalize, ((struct sNode*)__right_value568)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value569) { __right_value569 = come_decrement_ref_count2(__right_value569, ((struct sNode*)__right_value569)->finalize, ((struct sNode*)__right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1531, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1532, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1533, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1534, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_360,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1535, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_366=((void*)0);
        method_block_sline_367=info->sline;
        method_generics_types_368=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1541, "list$1sTypeph"))));
        __result190__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value594=create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_358),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_360),method_block_366,method_block_sline_367,method_generics_types_368,throw_or_rescue_357,info)));
        /*i*/come_call_finalizer3(buf_354,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_358) { obj_358 = come_decrement_ref_count2(obj_358, ((struct sNode*)obj_358)->finalize, ((struct sNode*)obj_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_360,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_368,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(__right_value594) { __right_value594 = come_decrement_ref_count2(__right_value594, ((struct sNode*)__right_value594)->finalize, ((struct sNode*)__right_value594)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result190__;
        /*i*/come_call_finalizer3(buf_354,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_358) { obj_358 = come_decrement_ref_count2(obj_358, ((struct sNode*)obj_358)->finalize, ((struct sNode*)obj_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_360,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_368,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==39) {
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_370=0;
                while(xisdigit(*info->p)) {
                    n_370=n_370*8+*info->p-48;
                    info->p++;
                }
                c_369=n_370;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_369=10;
                    info->p++;
                    break;
                    case 116:
                    c_369=9;
                    info->p++;
                    break;
                    case 114:
                    c_369=13;
                    info->p++;
                    break;
                    case 97:
                    c_369=7;
                    info->p++;
                    break;
                    case 102:
                    c_369=12;
                    info->p++;
                    break;
                    case 118:
                    c_369=11;
                    info->p++;
                    break;
                    case 98:
                    c_369=8;
                    info->p++;
                    break;
                    case 92:
                    c_369=92;
                    info->p++;
                    break;
                    case 48:
                    c_369=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_371=0;
                        while(xisdigit(*info->p)) {
                            n_371=n_371*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_369=n_371;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_372[128];
                        memset(&buf_372, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_372,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_373[2];
                            memset(&buf2_373, 0, sizeof(char)                            *(2)                            );
                            buf2_373[0]=*info->p;
                            buf2_373[1]=0;
                            info->p++;
                            strncat(buf_372,buf2_373,128);
                        }
                        n_374=strtoll(buf_372,((void*)0),0);
                        c_369=n_374;
                    }
                    break;
                    default:
                    c_369=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_369=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1662, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sCharNode*)(__right_value596=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1662, "sCharNode")),c_369,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sCharNode_finalize;
            _inf_value7->clone=(void*)sCharNode_clone;
            _inf_value7->compile=(void*)sCharNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sCharNode_kind;
            __result193__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value599=_inf_value7));
            /*g*/come_call_finalizer3(__right_value596,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value599) { __right_value599 = come_decrement_ref_count2(__right_value599, ((struct sNode*)__right_value599)->finalize, ((struct sNode*)__right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result193__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        info->p+=2;
        if(        *info->p==92) {
            quote_377=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_378=0;
                while(xisdigit(*info->p)) {
                    n_378=n_378*8+*info->p-48;
                    info->p++;
                }
                c_376=n_378;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_376=10;
                    info->p++;
                    break;
                    case 116:
                    c_376=9;
                    info->p++;
                    break;
                    case 114:
                    c_376=13;
                    info->p++;
                    break;
                    case 97:
                    c_376=7;
                    info->p++;
                    break;
                    case 92:
                    c_376=92;
                    info->p++;
                    break;
                    case 48:
                    c_376=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_379=0;
                        while(xisdigit(*info->p)) {
                            n_379=n_379*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_376=n_379;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_380[128];
                        memset(&buf_380, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_380,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_381[2];
                            memset(&buf2_381, 0, sizeof(char)                            *(2)                            );
                            buf2_381[0]=*info->p;
                            buf2_381[1]=0;
                            info->p++;
                            strncat(buf_380,buf2_381,128);
                        }
                        n_382=strtoll(buf_380,((void*)0),0);
                        c_376=n_382;
                    }
                    break;
                    default:
                    c_376=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_377=(_Bool)0;
            p2_383=*(unsigned char*)info->p;
            if(            p2_383>127) {
                char str_385[4+1];
                memset(&str_385, 0, sizeof(char)                *(4+1)                );
                size_384=((p2_383&128)>>7)+((p2_383&64)>>6)+((p2_383&32)>>5)+((p2_383&16)>>4);
                if(                size_384>4) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_385,info->p,size_384);
                    str_385[size_384]=0;
                    if(                    mbtowc(&c_376,str_385,size_384)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_384;
                    }
                }
            }
            else {
                c_376=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1801, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sWCharNode*)(__right_value601=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1801, "sWCharNode")),c_376,quote_377,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sWCharNode_finalize;
            _inf_value8->clone=(void*)sWCharNode_clone;
            _inf_value8->compile=(void*)sWCharNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sWCharNode_kind;
            __result196__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value604=_inf_value8));
            /*g*/come_call_finalizer3(__right_value601,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value604) { __right_value604 = come_decrement_ref_count2(__right_value604, ((struct sNode*)__right_value604)->finalize, ((struct sNode*)__right_value604)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result196__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        info->p+=2;
        sline_387=info->sline;
        value_388=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1810, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_389=info->p;
                sline_390=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_389;
                    info->sline=sline_390;
                    break;
                }
            }
            else if(            *info->p==92) {
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_391=0;
                    n_392=0;
                    while(xisdigit(*info->p)&&len_391<3) {
                        n_392=n_392*8+*info->p-48;
                        info->p++;
                        len_391++;
                    }
                    buffer_append_char(value_388,n_392);
                }
                else if(                *info->p==120||*info->p==88) {
                    info->p++;
                    char buf_393[128];
                    memset(&buf_393, 0, sizeof(char)                    *(128)                    );
                    strncpy(buf_393,"0x",128);
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        char buf2_394[2];
                        memset(&buf2_394, 0, sizeof(char)                        *(2)                        );
                        buf2_394[0]=*info->p;
                        buf2_394[1]=0;
                        info->p++;
                        strncat(buf_393,buf2_394,128);
                    }
                    n_396=strtoll(buf_393,((void*)0),0);
                    buffer_append_char(value_388,(char)n_396);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_388,0);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_388,10);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_388,9);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_388,13);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_388,11);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_388,12);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_388,7);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_388,8);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_388,92);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_388,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_397=info->sline;
                info->sline=sline_387;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_388,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_398=value_388->len;
        wstr_399=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_398+1)), "06str.c", 1933, "int"));
        str_400=value_388->buf;
        if(        mbstowcs(wstr_399,str_400,len_398+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_399[len_398]=0;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1944, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sWStringNode*)(__right_value609=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1944, "sWStringNode")),(unsigned int*)come_increment_ref_count(wstr_399),sline_387,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sWStringNode_finalize;
        _inf_value9->clone=(void*)sWStringNode_clone;
        _inf_value9->compile=(void*)sWStringNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sWStringNode_kind;
        __result199__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value613=_inf_value9));
        /*i*/come_call_finalizer3(value_388,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_399 = come_decrement_ref_count2(wstr_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value609,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value613) { __right_value613 = come_decrement_ref_count2(__right_value613, ((struct sNode*)__right_value613)->finalize, ((struct sNode*)__right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result199__;
        /*i*/come_call_finalizer3(value_388,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_399 = come_decrement_ref_count2(wstr_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        info->p+=2;
        sline_402=info->sline;
        exps_403=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1952, "list$1sNodeph"))));
        value_404=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1953, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_405=info->p;
                sline_406=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_405;
                    info->sline=sline_406;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_404,37);
                buffer_append_char(value_404,37);
                info->p++;
            }
            else if(            *info->p==36) {
                info->p++;
                exp_407=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_add(exps_403,(struct sNode*)come_increment_ref_count(exp_407));
                buffer_append_str(value_404,"%s");
                p_408=info->p-1;
                while(*p_408==32||*p_408==9) {
                    p_408--;
                }
                info->p=p_408+1;
                if(exp_407) { exp_407 = come_decrement_ref_count2(exp_407, ((struct sNode*)exp_407)->finalize, ((struct sNode*)exp_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            *info->p==92) {
                buffer_append_char(value_404,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_409=0;
                    while(xisdigit(*info->p)&&len_409<3) {
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        len_409++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_404,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_410=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_403,(struct sNode*)come_increment_ref_count(exp_410));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_404,"%s");
                    if(exp_410) { exp_410 = come_decrement_ref_count2(exp_410, ((struct sNode*)exp_410)->finalize, ((struct sNode*)exp_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_404,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_411=info->sline;
                info->sline=sline_402;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_404,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2098, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sSStringNode*)(__right_value622=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2098, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_404)),(struct list$1sNodeph*)come_increment_ref_count(exps_403),sline_402,info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sSStringNode_finalize;
        _inf_value10->clone=(void*)sSStringNode_clone;
        _inf_value10->compile=(void*)sSStringNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sSStringNode_kind;
        __result202__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value627=_inf_value10));
        /*i*/come_call_finalizer3(exps_403,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_404,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value622,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value627) { __right_value627 = come_decrement_ref_count2(__right_value627, ((struct sNode*)__right_value627)->finalize, ((struct sNode*)__right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result202__;
        /*i*/come_call_finalizer3(exps_403,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_404,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        p_413=info->p;
        no_comma_414=info->no_comma;
        info->no_comma=(_Bool)1;
        node_415=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_414;
        p2_416=info->p;
        first_element_source_417=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2115, "buffer"))));
        buffer_append(first_element_source_417,p_413,p2_416-p_413);
        buffer_append_char(first_element_source_417,0);
        list_elements_418=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2120, "list$1sNodeph"))));
        map_keys_419=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2122, "list$1sNodeph"))));
        map_elements_420=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2123, "list$1sNodeph"))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(map_keys_419,(struct sNode*)come_increment_ref_count(node_415));
            no_comma_421=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_422=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_421;
            list$1sNodeph_push_back(map_elements_420,(struct sNode*)come_increment_ref_count(node2_422));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2145, "struct sNode");
                _inf_obj_value11=come_increment_ref_count(((struct sMapNode*)(__right_value639=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2145, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_419),(struct list$1sNodeph*)come_increment_ref_count(map_elements_420),info))));
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sMapNode_finalize;
                _inf_value11->clone=(void*)sMapNode_clone;
                _inf_value11->compile=(void*)sMapNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sMapNode_kind;
                __result205__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value644=_inf_value11));
                if(node2_422) { node2_422 = come_decrement_ref_count2(node2_422, ((struct sNode*)node2_422)->finalize, ((struct sNode*)node2_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_415) { node_415 = come_decrement_ref_count2(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(first_element_source_417,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_elements_418,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_keys_419,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_elements_420,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value639,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value644) { __right_value644 = come_decrement_ref_count2(__right_value644, ((struct sNode*)__right_value644)->finalize, ((struct sNode*)__right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result205__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_424=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_425=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_424;
                    list$1sNodeph_push_back(map_keys_419,(struct sNode*)come_increment_ref_count(node2_425));
                    expected_next_character(58,info);
                    no_comma_424=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_426=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_424;
                    list$1sNodeph_push_back(map_elements_420,(struct sNode*)come_increment_ref_count(node3_426));
                    if(                    *info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(node2_425) { node2_425 = come_decrement_ref_count2(node2_425, ((struct sNode*)node2_425)->finalize, ((struct sNode*)node2_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node3_426) { node3_426 = come_decrement_ref_count2(node3_426, ((struct sNode*)node3_426)->finalize, ((struct sNode*)node3_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    if(node2_425) { node2_425 = come_decrement_ref_count2(node2_425, ((struct sNode*)node2_425)->finalize, ((struct sNode*)node2_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node3_426) { node3_426 = come_decrement_ref_count2(node3_426, ((struct sNode*)node3_426)->finalize, ((struct sNode*)node3_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2190, "struct sNode");
                _inf_obj_value12=come_increment_ref_count(((struct sMapNode*)(__right_value648=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2190, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_419),(struct list$1sNodeph*)come_increment_ref_count(map_elements_420),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sMapNode_finalize;
                _inf_value12->clone=(void*)sMapNode_clone;
                _inf_value12->compile=(void*)sMapNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sNodeBase_terminated;
                _inf_value12->kind=(void*)sMapNode_kind;
                __result208__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value653=_inf_value12));
                if(node2_422) { node2_422 = come_decrement_ref_count2(node2_422, ((struct sNode*)node2_422)->finalize, ((struct sNode*)node2_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_415) { node_415 = come_decrement_ref_count2(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(first_element_source_417,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_elements_418,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_keys_419,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_elements_420,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value648,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value653) { __right_value653 = come_decrement_ref_count2(__right_value653, ((struct sNode*)__right_value653)->finalize, ((struct sNode*)__right_value653)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result208__;
            }
            if(node2_422) { node2_422 = come_decrement_ref_count2(node2_422, ((struct sNode*)node2_422)->finalize, ((struct sNode*)node2_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_418,(struct sNode*)come_increment_ref_count(node_415));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_418,(struct sNode*)come_increment_ref_count(node_415));
            while((_Bool)1) {
                no_comma_428=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_429=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_428;
                list$1sNodeph_push_back(list_elements_418,(struct sNode*)come_increment_ref_count(node2_429));
                if(                *info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node2_429) { node2_429 = come_decrement_ref_count2(node2_429, ((struct sNode*)node2_429)->finalize, ((struct sNode*)node2_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                if(node2_429) { node2_429 = come_decrement_ref_count2(node2_429, ((struct sNode*)node2_429)->finalize, ((struct sNode*)node2_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodeph_length(list_elements_418)>0) {
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2241, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sListNode*)(__right_value656=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2241, "sListNode")),(struct list$1sNodeph*)come_increment_ref_count(list_elements_418),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sListNode_finalize;
            _inf_value13->clone=(void*)sListNode_clone;
            _inf_value13->compile=(void*)sListNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sListNode_kind;
            __result211__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value660=_inf_value13));
            if(node_415) { node_415 = come_decrement_ref_count2(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(first_element_source_417,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_elements_418,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_keys_419,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_elements_420,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value656,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value660) { __right_value660 = come_decrement_ref_count2(__right_value660, ((struct sNode*)__right_value660)->finalize, ((struct sNode*)__right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result211__;
        }
        else {
        }
        if(node_415) { node_415 = come_decrement_ref_count2(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(first_element_source_417,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(list_elements_418,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(map_keys_419,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(map_elements_420,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        ((struct sNode*)(__right_value661=expression_node_v1(info)));
        if(__right_value661) { __right_value661 = come_decrement_ref_count2(__right_value661, ((struct sNode*)__right_value661)->finalize, ((struct sNode*)__right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    }
    __result212__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj208;
char* __dec_obj209;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj208=self->sname;
            /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj209=self->value;
            /*G*/ __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result185__;
void* __right_value546 = (void*)0;
struct sStrNode* result_359;
void* __right_value547 = (void*)0;
char* __dec_obj210;
void* __right_value548 = (void*)0;
char* __dec_obj211;
struct sStrNode* __result186__;
    if(    self==(void*)0) {
        __result185__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    result_359=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"));
    if(    self!=((void*)0)) {
        result_359->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj210=result_359->sname;
        result_359->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj211=result_359->value;
        result_359->value=(char*)come_increment_ref_count(string_clone(self->value));
        /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result186__ = gComeFunResultObject = __result_obj__ = result_359;
    /*i*/come_call_finalizer3(result_359,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result187__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result187__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_361;
struct list_item$1tuple2$2charphsNodephph* prev_it_362;
    it_361=self->head;
    while(it_361!=((void*)0)) {
        prev_it_362=it_361;
        it_361=it_361->next;
        /*i*/come_call_finalizer3(prev_it_362,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj212;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj212=self->item;
            come_call_finalizer3(__dec_obj212,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value552 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_363;
struct tuple2$2charphsNodeph* __dec_obj215;
void* __right_value553 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_364;
struct tuple2$2charphsNodeph* __dec_obj218;
void* __right_value554 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_365;
struct tuple2$2charphsNodeph* __dec_obj221;
struct list$1tuple2$2charphsNodephph* __result188__;
    if(    self->len==0) {
        litem_363=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value552=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 153, "list_item$1tuple2$2charphsNodephph"))));
        litem_363->prev=((void*)0);
        litem_363->next=((void*)0);
        __dec_obj215=litem_363->item;
        litem_363->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj215,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_363;
        self->head=litem_363;
    }
    else if(    self->len==1) {
        litem_364=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value553=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 163, "list_item$1tuple2$2charphsNodephph"))));
        litem_364->prev=self->head;
        litem_364->next=((void*)0);
        __dec_obj218=litem_364->item;
        litem_364->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj218,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_364;
        self->head->next=litem_364;
    }
    else {
        litem_365=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value554=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 173, "list_item$1tuple2$2charphsNodephph"))));
        litem_365->prev=self->tail;
        litem_365->next=((void*)0);
        __dec_obj221=litem_365->item;
        litem_365->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj221,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_365;
        self->tail=litem_365;
    }
    self->len++;
    __result188__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result188__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj222;
struct sNode* __dec_obj223;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj222=self->v1;
            /*G*/ __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj223=self->v2;
            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj224;
struct sNode* __dec_obj225;
struct tuple2$2charphsNodeph* __result189__;
    __dec_obj224=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj225=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
    __result189__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj226;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj226=self->sname;
            /*G*/ __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result191__;
void* __right_value597 = (void*)0;
struct sCharNode* result_375;
void* __right_value598 = (void*)0;
char* __dec_obj227;
struct sCharNode* __result192__;
    if(    self==(void*)0) {
        __result191__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    result_375=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"));
    if(    self!=((void*)0)) {
        result_375->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj227=result_375->sname;
        result_375->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->value=self->value;
    }
    __result192__ = gComeFunResultObject = __result_obj__ = result_375;
    /*i*/come_call_finalizer3(result_375,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj228;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj228=self->sname;
            /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result194__;
void* __right_value602 = (void*)0;
struct sWCharNode* result_386;
void* __right_value603 = (void*)0;
char* __dec_obj229;
struct sWCharNode* __result195__;
    if(    self==(void*)0) {
        __result194__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result194__;
    }
    result_386=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"));
    if(    self!=((void*)0)) {
        result_386->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj229=result_386->sname;
        result_386->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_386->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_386->quote=self->quote;
    }
    __result195__ = gComeFunResultObject = __result_obj__ = result_386;
    /*i*/come_call_finalizer3(result_386,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj230;
unsigned int* __dec_obj231;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj230=self->sname;
            /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj231=self->value;
            /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result197__;
void* __right_value610 = (void*)0;
struct sWStringNode* result_401;
void* __right_value611 = (void*)0;
char* __dec_obj232;
void* __right_value612 = (void*)0;
unsigned int* __dec_obj233;
struct sWStringNode* __result198__;
    if(    self==(void*)0) {
        __result197__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result197__;
    }
    result_401=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"));
    if(    self!=((void*)0)) {
        result_401->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj232=result_401->sname;
        result_401->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj233=result_401->value;
        result_401->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 6, "unsigned int*"));
        /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result198__ = gComeFunResultObject = __result_obj__ = result_401;
    /*i*/come_call_finalizer3(result_401,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj234;
char* __dec_obj235;
struct list$1sNodeph* __dec_obj236;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj234=self->sname;
            /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj235=self->value;
            /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj236=self->exps;
            come_call_finalizer3(__dec_obj236,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result200__;
void* __right_value623 = (void*)0;
struct sSStringNode* result_412;
void* __right_value624 = (void*)0;
char* __dec_obj237;
void* __right_value625 = (void*)0;
char* __dec_obj238;
void* __right_value626 = (void*)0;
struct list$1sNodeph* __dec_obj239;
struct sSStringNode* __result201__;
    if(    self==(void*)0) {
        __result200__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    result_412=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"));
    if(    self!=((void*)0)) {
        result_412->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj237=result_412->sname;
        result_412->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj238=result_412->value;
        result_412->value=(char*)come_increment_ref_count(string_clone(self->value));
        /*G*/ __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj239=result_412->exps;
        result_412->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj239,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result201__ = gComeFunResultObject = __result_obj__ = result_412;
    /*i*/come_call_finalizer3(result_412,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj246;
struct list$1sNodeph* __dec_obj247;
struct list$1sNodeph* __dec_obj248;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj246=self->sname;
            /*G*/ __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj247=self->map_key_elements;
            come_call_finalizer3(__dec_obj247,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj248=self->map_elements;
            come_call_finalizer3(__dec_obj248,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result206__;
void* __right_value649 = (void*)0;
struct sMapNode* result_427;
void* __right_value650 = (void*)0;
char* __dec_obj249;
void* __right_value651 = (void*)0;
struct list$1sNodeph* __dec_obj250;
void* __right_value652 = (void*)0;
struct list$1sNodeph* __dec_obj251;
struct sMapNode* __result207__;
    if(    self==(void*)0) {
        __result206__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    result_427=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"));
    if(    self!=((void*)0)) {
        result_427->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj249=result_427->sname;
        result_427->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj250=result_427->map_key_elements;
        result_427->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_key_elements));
        come_call_finalizer3(__dec_obj250,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj251=result_427->map_elements;
        result_427->map_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_elements));
        come_call_finalizer3(__dec_obj251,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result207__ = gComeFunResultObject = __result_obj__ = result_427;
    /*i*/come_call_finalizer3(result_427,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj252;
struct list$1sNodeph* __dec_obj253;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj252=self->sname;
            /*G*/ __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj253=self->list_elements;
            come_call_finalizer3(__dec_obj253,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result209__;
void* __right_value657 = (void*)0;
struct sListNode* result_430;
void* __right_value658 = (void*)0;
char* __dec_obj254;
void* __right_value659 = (void*)0;
struct list$1sNodeph* __dec_obj255;
struct sListNode* __result210__;
    if(    self==(void*)0) {
        __result209__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    result_430=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"));
    if(    self!=((void*)0)) {
        result_430->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj254=result_430->sname;
        result_430->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj255=result_430->list_elements;
        result_430->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->list_elements));
        come_call_finalizer3(__dec_obj255,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result210__ = gComeFunResultObject = __result_obj__ = result_430;
    /*i*/come_call_finalizer3(result_430,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1sNodeph* tuple_elements_431;
char* p_432;
_Bool no_comma_433;
void* __right_value664 = (void*)0;
struct sNode* node_434;
void* __right_value665 = (void*)0;
struct sNode* __dec_obj256;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sNode* _inf_value14;
struct sTupleNode* _inf_obj_value14;
void* __right_value671 = (void*)0;
struct sNode* __result215__;
    tuple_elements_431=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2255, "list$1sNodeph"))));
    while((_Bool)1) {
        p_432=info->p;
        no_comma_433=info->no_comma;
        info->no_comma=(_Bool)1;
        node_434=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj256=node_434;
        node_434=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_434),info));
        if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_433;
        list$1sNodeph_push_back(tuple_elements_431,(struct sNode*)come_increment_ref_count(node_434));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2284, "struct sNode");
    _inf_obj_value14=come_increment_ref_count(((struct sTupleNode*)(__right_value667=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2284, "sTupleNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_431),info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sTupleNode_finalize;
    _inf_value14->clone=(void*)sTupleNode_clone;
    _inf_value14->compile=(void*)sTupleNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sNodeBase_terminated;
    _inf_value14->kind=(void*)sTupleNode_kind;
    __result215__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value671=_inf_value14));
    /*i*/come_call_finalizer3(tuple_elements_431,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value667,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value671) { __right_value671 = come_decrement_ref_count2(__right_value671, ((struct sNode*)__right_value671)->finalize, ((struct sNode*)__right_value671)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj257;
struct list$1sNodeph* __dec_obj258;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj257=self->sname;
            /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj258=self->tuple_elements;
            come_call_finalizer3(__dec_obj258,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result213__;
void* __right_value668 = (void*)0;
struct sTupleNode* result_435;
void* __right_value669 = (void*)0;
char* __dec_obj259;
void* __right_value670 = (void*)0;
struct list$1sNodeph* __dec_obj260;
struct sTupleNode* __result214__;
    if(    self==(void*)0) {
        __result213__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    result_435=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"));
    if(    self!=((void*)0)) {
        result_435->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj259=result_435->sname;
        result_435->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj260=result_435->tuple_elements;
        result_435->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj260,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result214__ = gComeFunResultObject = __result_obj__ = result_435;
    /*i*/come_call_finalizer3(result_435,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct list$1sNodeph* tuple_elements_436;
struct sNode* node_437;
void* __right_value674 = (void*)0;
struct sNode* node2_438;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* _inf_value15;
struct sSomeNode* _inf_obj_value15;
void* __right_value680 = (void*)0;
struct sNode* __result218__;
    tuple_elements_436=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2289, "list$1sNodeph"))));
    node_437=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodeph_push_back(tuple_elements_436,(struct sNode*)come_increment_ref_count(node_437));
    node2_438=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_436,(struct sNode*)come_increment_ref_count(node2_438));
    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2299, "struct sNode");
    _inf_obj_value15=come_increment_ref_count(((struct sSomeNode*)(__right_value676=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2299, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_436),info))));
    _inf_value15->_protocol_obj=_inf_obj_value15;
    _inf_value15->finalize=(void*)sSomeNode_finalize;
    _inf_value15->clone=(void*)sSomeNode_clone;
    _inf_value15->compile=(void*)sSomeNode_compile;
    _inf_value15->sline=(void*)sNodeBase_sline;
    _inf_value15->sname=(void*)sNodeBase_sname;
    _inf_value15->terminated=(void*)sNodeBase_terminated;
    _inf_value15->kind=(void*)sSomeNode_kind;
    __result218__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value680=_inf_value15));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(tuple_elements_436,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_438) { node2_438 = come_decrement_ref_count2(node2_438, ((struct sNode*)node2_438)->finalize, ((struct sNode*)node2_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value676,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value680) { __right_value680 = come_decrement_ref_count2(__right_value680, ((struct sNode*)__right_value680)->finalize, ((struct sNode*)__right_value680)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result218__;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct list$1sNodeph* tuple_elements_440;
void* __right_value683 = (void*)0;
struct sNode* node_441;
void* __right_value684 = (void*)0;
struct sNode* __dec_obj265;
void* __right_value685 = (void*)0;
struct sNode* node2_442;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sNode* _inf_value16;
struct sSomeNode* _inf_obj_value16;
void* __right_value691 = (void*)0;
struct sNode* __result221__;
    tuple_elements_440=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2304, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_441=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj265=node_441;
    node_441=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_441),info));
    if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodeph_push_back(tuple_elements_440,(struct sNode*)come_increment_ref_count(node_441));
    node2_442=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_440,(struct sNode*)come_increment_ref_count(node2_442));
    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2317, "struct sNode");
    _inf_obj_value16=come_increment_ref_count(((struct sSomeNode*)(__right_value687=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2317, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_440),info))));
    _inf_value16->_protocol_obj=_inf_obj_value16;
    _inf_value16->finalize=(void*)sSomeNode_finalize;
    _inf_value16->clone=(void*)sSomeNode_clone;
    _inf_value16->compile=(void*)sSomeNode_compile;
    _inf_value16->sline=(void*)sNodeBase_sline;
    _inf_value16->sname=(void*)sNodeBase_sname;
    _inf_value16->terminated=(void*)sNodeBase_terminated;
    _inf_value16->kind=(void*)sSomeNode_kind;
    __result221__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value691=_inf_value16));
    /*i*/come_call_finalizer3(tuple_elements_440,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_441) { node_441 = come_decrement_ref_count2(node_441, ((struct sNode*)node_441)->finalize, ((struct sNode*)node_441)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_442) { node2_442 = come_decrement_ref_count2(node2_442, ((struct sNode*)node2_442)->finalize, ((struct sNode*)node2_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value687,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value691) { __right_value691 = come_decrement_ref_count2(__right_value691, ((struct sNode*)__right_value691)->finalize, ((struct sNode*)__right_value691)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj266;
struct list$1sNodeph* __dec_obj267;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj266=self->sname;
            /*G*/ __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj267=self->tuple_elements;
            come_call_finalizer3(__dec_obj267,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result219__;
void* __right_value688 = (void*)0;
struct sSomeNode* result_443;
void* __right_value689 = (void*)0;
char* __dec_obj268;
void* __right_value690 = (void*)0;
struct list$1sNodeph* __dec_obj269;
struct sSomeNode* __result220__;
    if(    self==(void*)0) {
        __result219__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_443=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "sSomeNode"));
    if(    self!=((void*)0)) {
        result_443->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj268=result_443->sname;
        result_443->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj269=result_443->tuple_elements;
        result_443->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj269,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_443;
    /*i*/come_call_finalizer3(result_443,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct list$1sNodeph* tuple_elements_444;
void* __right_value694 = (void*)0;
struct sNode* node_445;
void* __right_value695 = (void*)0;
struct sNode* __dec_obj270;
void* __right_value696 = (void*)0;
struct sNode* node2_446;
struct sNode* node3_447;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sNode* _inf_value17;
struct sNoneNode* _inf_obj_value17;
void* __right_value702 = (void*)0;
struct sNode* __result224__;
    tuple_elements_444=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2322, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_445=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj270=node_445;
    node_445=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_445),info));
    if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_446=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodeph_push_back(tuple_elements_444,(struct sNode*)come_increment_ref_count(node2_446));
    node3_447=(struct sNode*)come_increment_ref_count(node_445);
    list$1sNodeph_push_back(tuple_elements_444,(struct sNode*)come_increment_ref_count(node3_447));
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2337, "struct sNode");
    _inf_obj_value17=come_increment_ref_count(((struct sNoneNode*)(__right_value698=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2337, "sNoneNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_444),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sNoneNode_finalize;
    _inf_value17->clone=(void*)sNoneNode_clone;
    _inf_value17->compile=(void*)sNoneNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sNoneNode_kind;
    __result224__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value702=_inf_value17));
    /*i*/come_call_finalizer3(tuple_elements_444,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_445) { node_445 = come_decrement_ref_count2(node_445, ((struct sNode*)node_445)->finalize, ((struct sNode*)node_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_446) { node2_446 = come_decrement_ref_count2(node2_446, ((struct sNode*)node2_446)->finalize, ((struct sNode*)node2_446)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node3_447) { node3_447 = come_decrement_ref_count2(node3_447, ((struct sNode*)node3_447)->finalize, ((struct sNode*)node3_447)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value698,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value702) { __right_value702 = come_decrement_ref_count2(__right_value702, ((struct sNode*)__right_value702)->finalize, ((struct sNode*)__right_value702)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj271;
struct list$1sNodeph* __dec_obj272;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj271=self->sname;
            /*G*/ __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj272=self->tuple_elements;
            come_call_finalizer3(__dec_obj272,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result222__;
void* __right_value699 = (void*)0;
struct sNoneNode* result_448;
void* __right_value700 = (void*)0;
char* __dec_obj273;
void* __right_value701 = (void*)0;
struct list$1sNodeph* __dec_obj274;
struct sNoneNode* __result223__;
    if(    self==(void*)0) {
        __result222__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_448=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "sNoneNode"));
    if(    self!=((void*)0)) {
        result_448->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj273=result_448->sname;
        result_448->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj274=result_448->tuple_elements;
        result_448->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj274,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_448;
    /*i*/come_call_finalizer3(result_448,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

