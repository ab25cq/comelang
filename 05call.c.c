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
    keys_147=(char**)come_increment_ref_count(((char**)(__right_value188=(char**)come_calloc(1, sizeof(char*)*(1*(size_146)), "./comelang.h", 1630, "char*%"))));
    items_148=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value189=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_146)), "./comelang.h", 1631, "sClass*%"))));
    item_existance_149=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value190=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_146)), "./comelang.h", 1632, "bool"))));
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

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
struct sCallerFuncNode* __result142__;
    ((struct sNodeBase*)(__right_value223=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value223,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result142__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result143__;
    __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=__builtin_string("sCallerFuncNode")));
    __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct CVALUE* come_value_204;
void* __right_value227 = (void*)0;
char* __dec_obj115;
void* __right_value228 = (void*)0;
char* __dec_obj116;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sType* __dec_obj117;
_Bool __result144__;
    come_value_204=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 254, "CVALUE"))));
    if(    info->caller_fun) {
        __dec_obj115=come_value_204->c_value;
        come_value_204->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        /*G*/ __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj116=come_value_204->c_value;
        come_value_204->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj117=come_value_204->type;
    come_value_204->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 262, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_204->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_204));
    add_come_last_code(info,"%s",come_value_204->c_value);
    __result144__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result144__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
struct sCallerLineNode* __result145__;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value231,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct CVALUE* come_value_205;
void* __right_value234 = (void*)0;
char* __dec_obj119;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sType* __dec_obj120;
_Bool __result146__;
    come_value_205=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 283, "CVALUE"))));
    __dec_obj119=come_value_205->c_value;
    come_value_205->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=come_value_205->type;
    come_value_205->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 286, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_205->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_205));
    add_come_last_code(info,"%s",come_value_205->c_value);
    __result146__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result146__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value237 = (void*)0;
char* __result147__;
    __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value237=__builtin_string("sCallerLineNode")));
    __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value238 = (void*)0;
struct sCallerSNameNode* __result148__;
    ((struct sNodeBase*)(__right_value238=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value238,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result148__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct CVALUE* come_value_206;
void* __right_value241 = (void*)0;
char* __dec_obj122;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sType* __dec_obj123;
_Bool __result149__;
    come_value_206=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 311, "CVALUE"))));
    __dec_obj122=come_value_206->c_value;
    come_value_206->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    /*G*/ __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj123=come_value_206->type;
    come_value_206->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 314, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_206->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
    add_come_last_code(info,"%s",come_value_206->c_value);
    __result149__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result149__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value244 = (void*)0;
char* __result150__;
    __result150__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value244=__builtin_string("sCallerSNameNode")));
    __right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
char* fun_name3_208;
struct list$1sTypeph* method_generics_types_before_209;
struct list$1sTypeph* __dec_obj124;
struct sGenericsFun* generics_fun_210;
void* __right_value246 = (void*)0;
_Bool _if_conditional2;
void* __right_value247 = (void*)0;
char* __result155__;
struct list$1sTypeph* __dec_obj135;
char* __result156__;
    static int num_method_generics_207=0;
    fun_name3_208=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_207++));
    method_generics_types_before_209=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj124=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj124,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_210=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(    generics_fun_210) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_208)),generics_fun_210,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_208);
            __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_208 = come_decrement_ref_count2(fun_name3_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_before_209,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result155__;
        }
    }
    __dec_obj135=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_209);
    come_call_finalizer3(__dec_obj135,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result156__ = gComeFunResultObject = __result_obj__ = fun_name3_208;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_208 = come_decrement_ref_count2(fun_name3_208, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types_before_209,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_211;
unsigned int it_212;
struct sGenericsFun* __result151__;
struct sGenericsFun* __result152__;
struct sGenericsFun* __result153__;
struct sGenericsFun* __result154__;
    hash_211=string_get_hash_key(((char*)key))%self->size;
    it_212=hash_211;
    while((_Bool)1) {
        if(        self->item_existance[it_212]) {
            if(            string_equals(self->keys[it_212],key)) {
                __result151__ = gComeFunResultObject = __result_obj__ = self->items[it_212];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result151__;
            }
            it_212++;
            if(            it_212>=self->size) {
                it_212=0;
            }
            else if(            it_212==hash_211) {
                __result152__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result152__;
            }
        }
        else {
            __result153__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result153__;
        }
    }
    __result154__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj125;
struct list$1charph* __dec_obj126;
struct list$1charph* __dec_obj127;
char* __dec_obj128;
struct sType* __dec_obj129;
struct list$1sTypeph* __dec_obj130;
struct list$1charph* __dec_obj131;
struct list$1charph* __dec_obj132;
char* __dec_obj133;
char* __dec_obj134;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj125=self->mImplType;
            come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj126=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj126,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj127=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj128=self->mName;
            /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj129=self->mResultType;
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj130=self->mParamTypes;
            come_call_finalizer3(__dec_obj130,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj131=self->mParamNames;
            come_call_finalizer3(__dec_obj131,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj132=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj132,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj133=self->mBlock;
            /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj134=self->mGenericsSName;
            /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
char* __dec_obj136;
void* __right_value259 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj153;
struct list$1sTypeph* __dec_obj154;
struct buffer* __dec_obj155;
struct sFunCallNode* __result163__;
    ((struct sNodeBase*)(__right_value248=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value248,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj136=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj153,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj154=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj154,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj155=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj155,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    self->throw_or_rescue=throw_or_rescue;
    __result163__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
char* __result164__;
    __result164__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=__builtin_string("sFunCallNode")));
    __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result164__;
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
char* fun_name_223;
struct list$1tuple2$2charphsNodephph* params_224;
struct buffer* method_block_225;
int method_block_sline_226;
_Bool throw_or_rescue_227;
struct sVar* var__228;
struct sType* lambda_type_229;
_Bool __result165__;
void* __right_value261 = (void*)0;
struct sType* result_type_230;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1CVALUEph* come_params_231;
_Bool __result167__;
int i_234;
struct list$1tuple2$2charphsNodephph* o2_saved_235;
struct tuple2$2charphsNodeph* it_238;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* label_241;
struct sNode* node_242;
_Bool __result174__;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_243;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct buffer* buf_247;
int j_248;
struct list$1CVALUEph* o2_saved_249;
struct CVALUE* it_252;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct CVALUE* come_value_255;
void* __right_value272 = (void*)0;
char* __dec_obj162;
void* __right_value273 = (void*)0;
struct sType* __dec_obj163;
struct sGenericsFun* generics_fun_256;
_Bool method_generics_257;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sTypeph* method_generics_types_258;
void* __right_value276 = (void*)0;
char* generics_fun_name_259;
struct sFun* fun_260;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1CVALUEph* come_params_263;
struct sFun* fun_264;
_Bool no_output_come_code_265;
_Bool __result187__;
struct CVALUE* method_block_node_266;
void* __right_value279 = (void*)0;
struct sType* method_block_lambda_type_270;
void* __right_value280 = (void*)0;
struct sType* method_block_result_type_271;
struct sType* generics_fun_method_block_lambda_type_272;
struct sType* generics_fun_method_block_result_type_273;
int method_generics_num_274;
void* __right_value281 = (void*)0;
int n_283;
struct list$1sTypeph* o2_saved_284;
struct sType* it_287;
int method_generics_num_290;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1CVALUEph* come_params_291;
int i_292;
struct sType* result_type_293;
struct list$1tuple2$2charphsNodephph* o2_saved_294;
struct tuple2$2charphsNodeph* it_295;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_296;
struct sNode* node_297;
_Bool __result200__;
void* __right_value288 = (void*)0;
struct CVALUE* come_value_298;
int method_generics_num_302;
void* __right_value292 = (void*)0;
int n_303;
struct list$1sTypeph* o2_saved_304;
struct sType* it_305;
int method_generics_num_306;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* __dec_obj186;
void* __right_value295 = (void*)0;
char* __dec_obj187;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1CVALUEph* come_params_309;
struct list$1tuple2$2charphsNodephph* o2_saved_310;
struct tuple2$2charphsNodeph* it_311;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_312;
struct sNode* node_313;
_Bool __result203__;
void* __right_value298 = (void*)0;
struct CVALUE* come_value_314;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct buffer* buf_315;
int j_316;
struct list$1CVALUEph* o2_saved_317;
struct CVALUE* it_318;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct CVALUE* come_value_319;
void* __right_value303 = (void*)0;
char* __dec_obj188;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sType* __dec_obj189;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj190;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj191;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj192;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __dec_obj193;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* __dec_obj194;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* __dec_obj195;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* __dec_obj196;
_Bool __result204__;
void* __right_value320 = (void*)0;
char* __dec_obj197;
void* __right_value321 = (void*)0;
char* __dec_obj198;
char* p_320;
int version_321;
char* p2_322;
int i_324;
void* __right_value322 = (void*)0;
char* new_fun_name_325;
void* __right_value323 = (void*)0;
char* __dec_obj199;
void* __right_value324 = (void*)0;
char* new_fun_name_329;
void* __right_value325 = (void*)0;
char* __dec_obj200;
_Bool __result209__;
int i_330;
void* __right_value326 = (void*)0;
char* new_fun_name_331;
void* __right_value327 = (void*)0;
char* __dec_obj201;
struct sFun* fun_332;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct list$1CVALUEph* come_params_333;
int i_334;
struct sType* result_type_335;
struct list$1tuple2$2charphsNodephph* o2_saved_336;
struct tuple2$2charphsNodeph* it_337;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_338;
struct sNode* node_339;
_Bool __result210__;
void* __right_value330 = (void*)0;
struct CVALUE* come_value_340;
struct sType* __dec_obj202;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct buffer* buf_341;
int j_342;
struct list$1CVALUEph* o2_saved_343;
struct CVALUE* it_344;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct CVALUE* come_value_345;
void* __right_value335 = (void*)0;
char* __dec_obj203;
struct sType* __dec_obj204;
_Bool __result211__;
void* __right_value336 = (void*)0;
struct sType* result_type_346;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1sTypeph* param_types_347;
struct list$1sTypeph* o2_saved_348;
struct sType* it_349;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sType* it2_350;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* __dec_obj205;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct list$1CVALUEph* come_params_351;
int i_352;
struct list$1tuple2$2charphsNodephph* o2_saved_353;
struct tuple2$2charphsNodeph* it_354;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_355;
struct sNode* node_356;
_Bool __result212__;
void* __right_value345 = (void*)0;
struct CVALUE* come_value_357;
int n_358;
struct list$1charph* o2_saved_359;
char* it_362;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
int i_370;
struct list$1tuple2$2charphsNodephph* o2_saved_371;
struct tuple2$2charphsNodeph* it_372;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_373;
struct sNode* node_374;
_Bool __result221__;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_375;
_Bool __result222__;
void* __right_value350 = (void*)0;
struct CVALUE* come_value_376;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
char* default_param_377;
char* param_name_381;
struct buffer* source_382;
char* p_383;
char* head_384;
int sline_385;
void* __right_value355 = (void*)0;
struct buffer* __dec_obj207;
void* __right_value356 = (void*)0;
struct sNode* node_386;
_Bool __result225__;
struct buffer* __dec_obj208;
void* __right_value357 = (void*)0;
struct CVALUE* come_value_387;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
_Bool __result226__;
_Bool __result227__;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value365 = (void*)0;
struct sNode* current_stack_frame_node_388;
_Bool __result230__;
void* __right_value366 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct buffer* method_block2_391;
void* __right_value369 = (void*)0;
struct sType* method_block_type_392;
void* __right_value370 = (void*)0;
char* class_name_393;
struct sClass* current_stack_frame_struct_397;
_Bool __result235__;
void* __right_value371 = (void*)0;
struct sType* result_type_398;
void* __right_value372 = (void*)0;
struct list$1sTypeph* param_types_399;
struct list$1charph* param_names_400;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct buffer* all_alhabet_sname_401;
char* p_402;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct list$1sTypeph* o2_saved_403;
struct sType* it_404;
struct sType* param_type_405;
void* __right_value378 = (void*)0;
char* param_name_406;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
char* param_name_407;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
char* param_name_408;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct buffer* source3_409;
char* p_410;
char* head_411;
int sline_412;
struct buffer* __dec_obj211;
void* __right_value388 = (void*)0;
struct sNode* node_413;
_Bool __result236__;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
char* method_block_name_414;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct CVALUE* come_value2_415;
struct sFun* fun2_416;
_Bool __result237__;
struct sType* method_block_type2_417;
void* __right_value393 = (void*)0;
char* __dec_obj212;
void* __right_value394 = (void*)0;
struct sType* __dec_obj213;
struct buffer* __dec_obj214;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct buffer* buf_418;
int j_419;
struct list$1CVALUEph* o2_saved_420;
struct CVALUE* it_421;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value399 = (void*)0;
char* __dec_obj215;
void* __right_value400 = (void*)0;
struct sType* __dec_obj216;
void* __right_value401 = (void*)0;
char* __dec_obj217;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
char* __dec_obj218;
_Bool __result238__;
memset(&i_324, 0, sizeof(int));
    fun_name_223=(char*)come_increment_ref_count(self->fun_name);
    params_224=self->params;
    method_block_225=self->method_block;
    method_block_sline_226=self->method_block_sline;
    throw_or_rescue_227=self->throw_or_rescue;
    var__228=get_variable_from_table(info->lv_table,fun_name_223);
    if(    var__228==((void*)0)) {
        var__228=get_variable_from_table(info->gv_table,fun_name_223);
    }
    if(    var__228) {
        lambda_type_229=var__228->mType;
        if(        string_operator_not_equals(lambda_type_229->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_223);
            __result165__ = (_Bool)0;
            fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result165__;
        }
        result_type_230=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_229->mResultType->v1));
        result_type_230->mStatic=(_Bool)0;
        come_params_231=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 407, "list$1CVALUEph"))));
        if(        list$1sTypeph_length(lambda_type_229->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_224)&&!lambda_type_229->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_223,list$1sTypeph_length(lambda_type_229->mParamTypes),list$1tuple2$2charphsNodephph_length(params_224));
            __result167__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_231,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result167__;
        }
        i_234=0;
        for(        o2_saved_235=(params_224),it_238=list$1tuple2$2charphsNodephph_begin((o2_saved_235));        !list$1tuple2$2charphsNodephph_end((o2_saved_235));        it_238=list$1tuple2$2charphsNodephph_next((o2_saved_235))        ){
            multiple_assign_var1=it_238;
            label_241=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_242=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            !node_compile(node_242,info)) {
                __result174__ = (_Bool)0;
                label_241 = come_decrement_ref_count2(label_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_242) { node_242 = come_decrement_ref_count2(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(result_type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_231,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result174__;
            }
            come_value_243=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            lambda_type_229->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_229->mParamTypes,i_234), "05call.c", 423, 2))==((void*)0)) {
            }
            else {
                check_assign_type(((char*)(__right_value267=xsprintf("\%s calling param #\%s",((char*)(__right_value265=string_to_string(fun_name_223))),((char*)(__right_value266=int_to_string(i_234)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_229->mParamTypes,i_234), "05call.c", 426, 3)),come_value_243->type,come_value_243,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_229->mParamTypes,i_234), "05call.c", 427, 4))->mHeap&&come_value_243->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_229->mParamTypes,i_234), "05call.c", 428, 5)),come_value_243->type,come_value_243,info,(_Bool)1);
                }
            }
            list$1CVALUEph_push_back(come_params_231,(struct CVALUE*)come_increment_ref_count(come_value_243));
            dec_stack_ptr(1,info);
            i_234++;
            label_241 = come_decrement_ref_count2(label_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_242) { node_242 = come_decrement_ref_count2(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_243,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_247=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 439, "buffer"))));
        buffer_append_str(buf_247,var__228->mCValueName);
        buffer_append_str(buf_247,"(");
        j_248=0;
        for(        o2_saved_249=(struct list$1CVALUEph*)come_increment_ref_count((come_params_231)),it_252=list$1CVALUEph_begin((o2_saved_249));        !list$1CVALUEph_end((o2_saved_249));        it_252=list$1CVALUEph_next((o2_saved_249))        ){
            buffer_append_str(buf_247,it_252->c_value);
            if(            j_248!=list$1CVALUEph_length(come_params_231)-1) {
                buffer_append_str(buf_247,",");
            }
            j_248++;
        }
        /*i*/come_call_finalizer3(o2_saved_249,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_247,")");
        come_value_255=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 456, "CVALUE"))));
        __dec_obj162=come_value_255->c_value;
        come_value_255->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_247));
        /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj163=come_value_255->type;
        come_value_255->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_230));
        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_255->type->mStatic=(_Bool)0;
        come_value_255->var=((void*)0);
        if(        lambda_type_229->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_255,(struct sType*)come_increment_ref_count(lambda_type_229->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_255->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_255));
        /*i*/come_call_finalizer3(result_type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_231,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_247,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_256=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_223,((void*)0));
        method_generics_257=(_Bool)0;
        if(        generics_fun_256) {
            method_generics_257=list$1charph_length(generics_fun_256->mMethodGenericsTypeNames)>0;
        }
        if(        list$1sTypeph_length(self->method_generics_types)>0||method_generics_257) {
            if(            list$1sTypeph_length(self->method_generics_types)==0) {
                method_generics_types_258=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 478, "list$1sTypeph"))));
                generics_fun_name_259=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_223),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_258),info));
                fun_260=map$2charphsFunph_at(info->funcs,generics_fun_name_259,((void*)0));
                if(                method_block_225) {
                    come_params_263=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 484, "list$1CVALUEph"))));
                    fun_264=map$2charphsFunph_at(info->funcs,generics_fun_name_259,((void*)0));
                    no_output_come_code_265=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_225,(struct list$1CVALUEph*)come_increment_ref_count(come_params_263),fun_264,fun_name_223,method_block_sline_226,info,(_Bool)1)) {
                        __result187__ = (_Bool)0;
                        /*i*/come_call_finalizer3(come_params_263,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_258,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_259 = come_decrement_ref_count2(generics_fun_name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result187__;
                    }
                    info->no_output_come_code=no_output_come_code_265;
                    method_block_node_266=list$1CVALUEphp_operator_load_element(come_params_263,-1);
                    method_block_lambda_type_270=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_266->type));
                    method_block_result_type_271=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_272=list$1sTypephp_operator_load_element(generics_fun_256->mParamTypes,-1);
                    generics_fun_method_block_result_type_273=generics_fun_method_block_lambda_type_272->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_273->mClass->mMethodGenerics) {
                        method_generics_num_274=generics_fun_method_block_result_type_273->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_258,method_generics_num_274,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_271)));
                    }
                    n_283=0;
                    for(                    o2_saved_284=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_272->mParamTypes)),it_287=list$1sTypeph_begin((o2_saved_284));                    !list$1sTypeph_end((o2_saved_284));                    it_287=list$1sTypeph_next((o2_saved_284))                    ){
                        if(                        it_287->mClass->mMethodGenerics) {
                            method_generics_num_290=it_287->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(method_generics_types_258,method_generics_num_290,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_lambda_type_270->mParamTypes,n_283), "05call.c", 510, 6)))));
                        }
                        n_283++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_284,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_263,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_lambda_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_result_type_271,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_params_291=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 516, "list$1CVALUEph"))));
                i_292=0;
                result_type_293=((void*)0);
                for(                o2_saved_294=(params_224),it_295=list$1tuple2$2charphsNodephph_begin((o2_saved_294));                !list$1tuple2$2charphsNodephph_end((o2_saved_294));                it_295=list$1tuple2$2charphsNodephph_next((o2_saved_294))                ){
                    multiple_assign_var2=it_295;
                    label_296=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                    node_297=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                    if(                    !node_compile(node_297,info)) {
                        __result200__ = (_Bool)0;
                        label_296 = come_decrement_ref_count2(label_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_297) { node_297 = come_decrement_ref_count2(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(method_generics_types_258,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        generics_fun_name_259 = come_decrement_ref_count2(generics_fun_name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_291,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result200__;
                    }
                    come_value_298=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    list$1CVALUEph_add(come_params_291,(struct CVALUE*)come_increment_ref_count(come_value_298));
                    label_296 = come_decrement_ref_count2(label_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_297) { node_297 = come_decrement_ref_count2(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_298,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(                generics_fun_256->mResultType->mClass->mMethodGenerics) {
                    method_generics_num_302=generics_fun_256->mResultType->mClass->mMethodGenericsNum;
                    if(                    info->function_result_type) {
                        list$1sTypephp_operator_store_element(method_generics_types_258,method_generics_num_302,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    }
                }
                n_303=0;
                for(                o2_saved_304=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_256->mParamTypes)),it_305=list$1sTypeph_begin((o2_saved_304));                !list$1sTypeph_end((o2_saved_304));                it_305=list$1sTypeph_next((o2_saved_304))                ){
                    if(                    it_305->mClass->mMethodGenerics) {
                        method_generics_num_306=it_305->mClass->mMethodGenericsNum;
                        if(                        n_303<list$1CVALUEph_length(come_params_291)) {
                            list$1sTypephp_operator_store_element(method_generics_types_258,method_generics_num_306,(struct sType*)come_increment_ref_count(sType_clone(list$1CVALUEphp_operator_load_element(come_params_291,n_303)->type)));
                        }
                    }
                    n_303++;
                }
                /*i*/come_call_finalizer3(o2_saved_304,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                map$2charphsFunph_remove(info->funcs,generics_fun_name_259);
                __dec_obj186=fun_name_223;
                fun_name_223=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_223),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_258),info));
                /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                /*i*/come_call_finalizer3(method_generics_types_258,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                generics_fun_name_259 = come_decrement_ref_count2(generics_fun_name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_291,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_293,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj187=fun_name_223;
                fun_name_223=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_223),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
                /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        if(        string_operator_equals(fun_name_223,"__builtin_memmove")||string_operator_equals(fun_name_223,"__builtin_memset")||string_operator_equals(fun_name_223,"__builtin_ffs")||string_operator_equals(fun_name_223,"__builtin_ffsl")||string_operator_equals(fun_name_223,"__builtin_ffsll")||string_operator_equals(fun_name_223,"__builtin_bswap16")||string_operator_equals(fun_name_223,"__builtin_bswap32")||string_operator_equals(fun_name_223,"__builtin_bswap64")||string_operator_equals(fun_name_223,"__builtin_constant_p")) {
            come_params_309=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 562, "list$1CVALUEph"))));
            for(            o2_saved_310=(params_224),it_311=list$1tuple2$2charphsNodephph_begin((o2_saved_310));            !list$1tuple2$2charphsNodephph_end((o2_saved_310));            it_311=list$1tuple2$2charphsNodephph_next((o2_saved_310))            ){
                multiple_assign_var3=it_311;
                label_312=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_313=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                !node_compile(node_313,info)) {
                    __result203__ = (_Bool)0;
                    label_312 = come_decrement_ref_count2(label_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_309,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result203__;
                }
                come_value_314=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_309,(struct CVALUE*)come_increment_ref_count(come_value_314));
                label_312 = come_decrement_ref_count2(label_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_314,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_315=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 576, "buffer"))));
            buffer_append_str(buf_315,fun_name_223);
            buffer_append_str(buf_315,"(");
            j_316=0;
            for(            o2_saved_317=(struct list$1CVALUEph*)come_increment_ref_count((come_params_309)),it_318=list$1CVALUEph_begin((o2_saved_317));            !list$1CVALUEph_end((o2_saved_317));            it_318=list$1CVALUEph_next((o2_saved_317))            ){
                buffer_append_str(buf_315,it_318->c_value);
                if(                j_316!=list$1CVALUEph_length(come_params_309)-1) {
                    buffer_append_str(buf_315,",");
                }
                j_316++;
            }
            /*i*/come_call_finalizer3(o2_saved_317,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_315,")");
            come_value_319=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 593, "CVALUE"))));
            __dec_obj188=come_value_319->c_value;
            come_value_319->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_315));
            /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(fun_name_223,"__builtin_memmove")||string_operator_equals(fun_name_223,"__builtin_memset")) {
                __dec_obj189=come_value_319->type;
                come_value_319->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 597, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_223,"__builtin_ffs")) {
                __dec_obj190=come_value_319->type;
                come_value_319->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 600, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_223,"__builtin_ffsl")) {
                __dec_obj191=come_value_319->type;
                come_value_319->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 603, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_223,"__builtin_ffsll")) {
                __dec_obj192=come_value_319->type;
                come_value_319->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 606, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_223,"__builtin_bswap16")) {
                __dec_obj193=come_value_319->type;
                come_value_319->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 609, "sType")),"short",(_Bool)0,info));
                come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_223,"__builtin_bswap32")) {
                __dec_obj194=come_value_319->type;
                come_value_319->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 612, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_223,"__builtin_bswap64")) {
                __dec_obj195=come_value_319->type;
                come_value_319->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 615, "sType")),"long",(_Bool)0,info));
                come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_223,"__builtin_constant_p")) {
                __dec_obj196=come_value_319->type;
                come_value_319->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 618, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_value_319->var=((void*)0);
            add_come_last_code(info,"%s",come_value_319->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_319));
            __result204__ = (_Bool)1;
            /*i*/come_call_finalizer3(come_params_309,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_315,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_319,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result204__;
            /*i*/come_call_finalizer3(come_params_309,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_315,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_319,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_223,"string")) {
            __dec_obj197=fun_name_223;
            fun_name_223=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
            /*G*/ __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_223,"wstring")) {
            __dec_obj198=fun_name_223;
            fun_name_223=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
            /*G*/ __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_223,"inherit")) {
            p_320=info->come_fun->mName;
            version_321=0;
            while(*p_320) {
                if(                *p_320==95&&*(p_320+1)==118&&xisdigit(*(p_320+2))) {
                    p2_322=p_320+2;
                    version_321=0;
                    while(xisdigit(*p2_322)) {
                        version_321=version_321*10+(*p2_322-48);
                        p2_322++;
                    }
                    break;
                }
                else {
                    p_320++;
                }
            }
            char real_fun_name_323[2048];
            memset(&real_fun_name_323, 0, sizeof(char)            *(2048)            );
            memcpy(real_fun_name_323,info->come_fun->mName,p_320-info->come_fun->mName);
            real_fun_name_323[p_320-info->come_fun->mName]=0;
            for(            i_324=version_321-1;            i_324>=1;            i_324--            ){
                new_fun_name_325=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_323,i_324));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_325)) {
                    __dec_obj199=fun_name_223;
                    fun_name_223=(char*)come_increment_ref_count(__builtin_string(new_fun_name_325));
                    /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_325 = come_decrement_ref_count2(new_fun_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_325 = come_decrement_ref_count2(new_fun_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_324==0) {
                new_fun_name_329=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_323));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_329)) {
                    __dec_obj200=fun_name_223;
                    fun_name_223=(char*)come_increment_ref_count(__builtin_string(new_fun_name_329));
                    /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(                string_operator_equals(fun_name_223,info->come_fun->mName)) {
                    err_msg(info,"invalid inherit");
                    __result209__ = (_Bool)0;
                    new_fun_name_329 = come_decrement_ref_count2(new_fun_name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result209__;
                }
                new_fun_name_329 = come_decrement_ref_count2(new_fun_name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_330=128;            i_330>=1;            i_330--            ){
                new_fun_name_331=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_223,i_330));
                if(                map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_331)) {
                    __dec_obj201=fun_name_223;
                    fun_name_223=(char*)come_increment_ref_count(__builtin_string(new_fun_name_331));
                    /*G*/ __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_331 = come_decrement_ref_count2(new_fun_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_331 = come_decrement_ref_count2(new_fun_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        fun_332=map$2charphsFunph_at(info->funcs,fun_name_223,((void*)0));
        if(        string_operator_equals(fun_name_223,"__builtin_va_arg")) {
            come_params_333=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 742, "list$1CVALUEph"))));
            i_334=0;
            result_type_335=((void*)0);
            for(            o2_saved_336=(params_224),it_337=list$1tuple2$2charphsNodephph_begin((o2_saved_336));            !list$1tuple2$2charphsNodephph_end((o2_saved_336));            it_337=list$1tuple2$2charphsNodephph_next((o2_saved_336))            ){
                multiple_assign_var4=it_337;
                label_338=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                node_339=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                !node_compile(node_339,info)) {
                    __result210__ = (_Bool)0;
                    label_338 = come_decrement_ref_count2(label_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_333,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_335,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result210__;
                }
                come_value_340=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_333,(struct CVALUE*)come_increment_ref_count(come_value_340));
                __dec_obj202=result_type_335;
                result_type_335=(struct sType*)come_increment_ref_count(come_value_340->type);
                come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
                label_338 = come_decrement_ref_count2(label_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_341=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 761, "buffer"))));
            buffer_append_str(buf_341,fun_name_223);
            buffer_append_str(buf_341,"(");
            j_342=0;
            for(            o2_saved_343=(struct list$1CVALUEph*)come_increment_ref_count((come_params_333)),it_344=list$1CVALUEph_begin((o2_saved_343));            !list$1CVALUEph_end((o2_saved_343));            it_344=list$1CVALUEph_next((o2_saved_343))            ){
                buffer_append_str(buf_341,it_344->c_value);
                if(                j_342!=list$1CVALUEph_length(come_params_333)-1) {
                    buffer_append_str(buf_341,",");
                }
                j_342++;
            }
            /*i*/come_call_finalizer3(o2_saved_343,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_341,")");
            come_value_345=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 778, "CVALUE"))));
            __dec_obj203=come_value_345->c_value;
            come_value_345->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_341));
            /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj204=come_value_345->type;
            come_value_345->type=(struct sType*)come_increment_ref_count(result_type_335);
            come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_345->var=((void*)0);
            add_come_last_code(info,"%s",come_value_345->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_345));
            /*i*/come_call_finalizer3(come_params_333,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_335,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_341,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_345,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_332==((void*)0)) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_223);
            __result211__ = (_Bool)1;
            fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result211__;
        }
        else {
            result_type_346=(struct sType*)come_increment_ref_count(sType_clone(fun_332->mResultType));
            result_type_346->mStatic=(_Bool)0;
            param_types_347=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 795, "list$1sTypeph"))));
            for(            o2_saved_348=(struct list$1sTypeph*)come_increment_ref_count((fun_332->mParamTypes)),it_349=list$1sTypeph_begin((o2_saved_348));            !list$1sTypeph_end((o2_saved_348));            it_349=list$1sTypeph_next((o2_saved_348))            ){
                it2_350=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value339=sType_clone(it_349))),info->generics_type,info));
                /*g*/come_call_finalizer3(__right_value339,sType_finalize, 0, 1, 0, 0, (void*)0);
                list$1sTypeph_push_back(param_types_347,(struct sType*)come_increment_ref_count(sType_clone(it2_350)));
                /*i*/come_call_finalizer3(it2_350,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_348,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj205=result_type_346;
            result_type_346=(struct sType*)come_increment_ref_count(solve_generics(result_type_346,info->generics_type,info));
            come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_params_351=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 804, "list$1CVALUEph"))));
            for(            i_352=0;            i_352<list$1sTypeph_length(fun_332->mParamTypes)-(((method_block_225)?(2):(0)));            i_352++            ){
                list$1CVALUEph_add(come_params_351,((void*)0));
            }
            for(            o2_saved_353=(params_224),it_354=list$1tuple2$2charphsNodephph_begin((o2_saved_353));            !list$1tuple2$2charphsNodephph_end((o2_saved_353));            it_354=list$1tuple2$2charphsNodephph_next((o2_saved_353))            ){
                multiple_assign_var5=it_354;
                label_355=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                node_356=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                fun_332->mVarArgs||string_operator_equals(fun_name_223,"__builtin_va_start")) {
                }
                else if(                label_355) {
                    if(                    !node_compile(node_356,info)) {
                        __result212__ = (_Bool)0;
                        label_355 = come_decrement_ref_count2(label_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result212__;
                    }
                    come_value_357=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    n_358=0;
                    for(                    o2_saved_359=(struct list$1charph*)come_increment_ref_count((fun_332->mParamNames)),it_362=list$1charph_begin((o2_saved_359));                    !list$1charph_end((o2_saved_359));                    it_362=list$1charph_next((o2_saved_359))                    ){
                        if(                        string_operator_equals(label_355,it_362)) {
                            break;
                        }
                        n_358++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_359,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    list$1sTypephp_operator_load_element(param_types_347,n_358)) {
                        check_assign_type(((char*)(__right_value348=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value346=string_to_string(fun_name_223))),((char*)(__right_value347=int_to_string(n_358)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,n_358), "05call.c", 833, 7)),come_value_357->type,come_value_357,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_347,n_358)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,n_358), "05call.c", 835, 8))->mHeap&&come_value_357->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,n_358), "05call.c", 836, 9)),come_value_357->type,come_value_357,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_351,n_358,(struct CVALUE*)come_increment_ref_count(come_value_357));
                    /*i*/come_call_finalizer3(come_value_357,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                label_355 = come_decrement_ref_count2(label_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            i_370=0;
            for(            o2_saved_371=(params_224),it_372=list$1tuple2$2charphsNodephph_begin((o2_saved_371));            !list$1tuple2$2charphsNodephph_end((o2_saved_371));            it_372=list$1tuple2$2charphsNodephph_next((o2_saved_371))            ){
                multiple_assign_var6=it_372;
                label_373=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_374=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                fun_332->mVarArgs||string_operator_equals(fun_name_223,"__builtin_va_start")) {
                    if(                    !node_compile(node_374,info)) {
                        __result221__ = (_Bool)0;
                        label_373 = come_decrement_ref_count2(label_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_374) { node_374 = come_decrement_ref_count2(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result221__;
                    }
                    come_value_375=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_351,i_370)==((void*)0)) {
                            break;
                        }
                        else {
                            i_370++;
                        }
                    }
                    list$1CVALUEph_replace(come_params_351,i_370,(struct CVALUE*)come_increment_ref_count(come_value_375));
                    i_370++;
                    /*i*/come_call_finalizer3(come_value_375,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                label_373) {
                }
                else {
                    if(                    !node_compile(node_374,info)) {
                        __result222__ = (_Bool)0;
                        label_373 = come_decrement_ref_count2(label_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_374) { node_374 = come_decrement_ref_count2(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result222__;
                    }
                    come_value_376=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_351,i_370)==((void*)0)) {
                            break;
                        }
                        else {
                            i_370++;
                        }
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_347,i_370)) {
                        check_assign_type(((char*)(__right_value353=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value351=string_to_string(fun_name_223))),((char*)(__right_value352=int_to_string(i_370)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,i_370), "05call.c", 887, 10)),come_value_376->type,come_value_376,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(                    list$1sTypephp_operator_load_element(param_types_347,i_370)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,i_370), "05call.c", 889, 11))->mHeap&&come_value_376->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,i_370), "05call.c", 890, 12)),come_value_376->type,come_value_376,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_351,i_370,(struct CVALUE*)come_increment_ref_count(come_value_376));
                    i_370++;
                    /*i*/come_call_finalizer3(come_value_376,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                label_373 = come_decrement_ref_count2(label_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_374) { node_374 = come_decrement_ref_count2(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            while((_Bool)1) {
                if(                list$1CVALUEphp_operator_load_element(come_params_351,i_370)==((void*)0)) {
                    break;
                }
                else {
                    i_370++;
                }
            }
            if(            list$1tuple2$2charphsNodephph_length(params_224)<list$1sTypeph_length(fun_332->mParamTypes)) {
                for(                ;                i_370<list$1sTypeph_length(fun_332->mParamTypes)-(((method_block_225)?(2):(0)));                i_370++                ){
                    default_param_377=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(fun_332->mParamDefaultParametors,i_370)));
                    param_name_381=((char*)come_null_check(list$1charphp_operator_load_element(fun_332->mParamNames,i_370), "05call.c", 911, 13));
                    if(                    default_param_377&&string_operator_not_equals(default_param_377,"")&&list$1CVALUEphp_operator_load_element(come_params_351,i_370)==((void*)0)) {
                        source_382=(struct buffer*)come_increment_ref_count(info->source);
                        p_383=info->p;
                        head_384=info->head;
                        sline_385=info->sline;
                        __dec_obj207=info->source;
                        info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(default_param_377));
                        come_call_finalizer3(__dec_obj207,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        info->p=info->source->buf;
                        info->head=info->source->buf;
                        node_386=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        if(                        !node_compile(node_386,info)) {
                            __result225__ = (_Bool)0;
                            /*i*/come_call_finalizer3(source_382,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            default_param_377 = come_decrement_ref_count2(default_param_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result225__;
                        }
                        __dec_obj208=info->source;
                        info->source=(struct buffer*)come_increment_ref_count(source_382);
                        come_call_finalizer3(__dec_obj208,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        info->p=p_383;
                        info->head=head_384;
                        info->sline=sline_385;
                        come_value_387=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        if(                        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,i_370), "05call.c", 935, 14))) {
                            check_assign_type(((char*)(__right_value360=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value358=string_to_string(fun_name_223))),((char*)(__right_value359=int_to_string(i_370)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,i_370), "05call.c", 936, 15)),come_value_387->type,come_value_387,(_Bool)0,(_Bool)1,(_Bool)0,info);
                            __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        if(                        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,i_370), "05call.c", 938, 16))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,i_370), "05call.c", 938, 17))->mHeap&&come_value_387->type->mHeap) {
                            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_347,i_370), "05call.c", 939, 18)),come_value_387->type,come_value_387,info,(_Bool)1);
                        }
                        list$1CVALUEph_replace(come_params_351,i_370,(struct CVALUE*)come_increment_ref_count(come_value_387));
                        dec_stack_ptr(1,info);
                        /*i*/come_call_finalizer3(source_382,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(come_value_387,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(                        list$1CVALUEphp_operator_load_element(come_params_351,i_370)==((void*)0)) {
                            err_msg(info,"require parametor(%s)(1) %d",fun_332->mName,i_370);
                            __result226__ = (_Bool)0;
                            default_param_377 = come_decrement_ref_count2(default_param_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result226__;
                        }
                    }
                    default_param_377 = come_decrement_ref_count2(default_param_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            if(            list$1sTypeph_length(fun_332->mParamTypes)-(((method_block_225)?(2):(0)))!=list$1CVALUEph_length(come_params_351)&&!fun_332->mVarArgs&&string_operator_not_equals(fun_name_223,"__builtin_va_start")&&string_operator_not_equals(fun_name_223,"__builtin_va_end")) {
                err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_223,list$1sTypeph_length(fun_332->mParamTypes),list$1tuple2$2charphsNodephph_length(params_224));
                __result227__ = (_Bool)0;
                /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result227__;
            }
            if(            method_block_225) {
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 960, "struct sNode");
                _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode2*)(__right_value362=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 960, "sCurrentNode2")),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sCurrentNode2_finalize;
                _inf_value1->clone=(void*)sCurrentNode2_clone;
                _inf_value1->compile=(void*)sCurrentNode2_compile;
                _inf_value1->sline=(void*)sCurrentNode2_sline;
                _inf_value1->sname=(void*)sCurrentNode2_sname;
                _inf_value1->terminated=(void*)sNodeBase_terminated;
                _inf_value1->kind=(void*)sCurrentNode2_kind;
                current_stack_frame_node_388=(struct sNode*)come_increment_ref_count(_inf_value1);
                /*g*/come_call_finalizer3(__right_value362,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
                if(                !node_compile(current_stack_frame_node_388,info)) {
                    __result230__ = (_Bool)0;
                    if(current_stack_frame_node_388) { current_stack_frame_node_388 = come_decrement_ref_count2(current_stack_frame_node_388, ((struct sNode*)current_stack_frame_node_388)->finalize, ((struct sNode*)current_stack_frame_node_388)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result230__;
                }
                come_value_390=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                list$1CVALUEph_push_back(come_params_351,(struct CVALUE*)come_increment_ref_count(come_value_390));
                dec_stack_ptr(1,info);
                method_block2_391=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 970, "buffer"))));
                method_block_type_392=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_332->mParamTypes,-1), "05call.c", 971, 19))));
                class_name_393=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_392->mParamTypes,0), "05call.c", 975, 20))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_393);
                current_stack_frame_struct_397=info->current_stack_frame_struct;
                info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_393);
                info->num_method_block++;
                if(                string_operator_not_equals(method_block_type_392->mClass->mName,"lambda")) {
                    err_msg(info,"This function does not have method block(%s)",fun_name_223);
                    __result235__ = (_Bool)0;
                    if(current_stack_frame_node_388) { current_stack_frame_node_388 = come_decrement_ref_count2(current_stack_frame_node_388, ((struct sNode*)current_stack_frame_node_388)->finalize, ((struct sNode*)current_stack_frame_node_388)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_391,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                    class_name_393 = come_decrement_ref_count2(class_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result235__;
                }
                result_type_398=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_392->mResultType->v1));
                result_type_398->mStatic=(_Bool)0;
                param_types_399=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_392->mParamTypes));
                param_names_400=method_block_type_392->mParamNames;
                all_alhabet_sname_401=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 991, "buffer"))));
                {
                    p_402=info->sname;
                    while(*p_402) {
                        if(                        xisalnum(*p_402)) {
                            buffer_append_char(all_alhabet_sname_401,*p_402++);
                        }
                        else {
                            p_402++;
                        }
                    }
                }
                buffer_append_str(method_block2_391,((char*)(__right_value377=xsprintf("%s fun_block%d_%s(",((char*)(__right_value375=make_type_name_string(result_type_398,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value376=buffer_to_string(all_alhabet_sname_401)))))));
                __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_370=0;
                for(                o2_saved_403=(struct list$1sTypeph*)come_increment_ref_count((param_types_399)),it_404=list$1sTypeph_begin((o2_saved_403));                !list$1sTypeph_end((o2_saved_403));                it_404=list$1sTypeph_next((o2_saved_403))                ){
                    param_type_405=it_404;
                    if(                    i_370==0) {
                        param_name_406=(char*)come_increment_ref_count(xsprintf("parent"));
                        buffer_append_str(method_block2_391,((char*)(__right_value380=xsprintf("%s",((char*)(__right_value379=make_define_var(param_type_405,param_name_406,(_Bool)0,info)))))));
                        __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        param_name_406 = come_decrement_ref_count2(param_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else if(                    i_370==1) {
                        param_name_407=(char*)come_increment_ref_count(xsprintf("it"));
                        buffer_append_str(method_block2_391,((char*)(__right_value383=xsprintf("%s",((char*)(__right_value382=make_define_var_no_solved(param_type_405,param_name_407,(_Bool)0,(_Bool)1,info)))))));
                        __right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        param_name_407 = come_decrement_ref_count2(param_name_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_408=(char*)come_increment_ref_count(xsprintf("it%d",i_370));
                        buffer_append_str(method_block2_391,((char*)(__right_value386=xsprintf("%s",((char*)(__right_value385=make_define_var_no_solved(param_type_405,param_name_408,(_Bool)0,(_Bool)1,info)))))));
                        __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        param_name_408 = come_decrement_ref_count2(param_name_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(                    i_370!=list$1sTypeph_length(param_types_399)-1) {
                        buffer_append_str(method_block2_391,",");
                    }
                    i_370++;
                }
                /*i*/come_call_finalizer3(o2_saved_403,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_str(method_block2_391,")\n");
                buffer_append_str(method_block2_391,((char*)(__right_value387=buffer_to_string(method_block_225))));
                __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                source3_409=(struct buffer*)come_increment_ref_count(info->source);
                p_410=info->p;
                head_411=info->head;
                sline_412=info->sline;
                __dec_obj211=info->source;
                info->source=(struct buffer*)come_increment_ref_count(method_block2_391);
                come_call_finalizer3(__dec_obj211,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                info->sline=method_block_sline_226;
                node_413=(struct sNode*)come_increment_ref_count(parse_function(info));
                if(                !node_compile(node_413,info)) {
                    __result236__ = (_Bool)0;
                    if(current_stack_frame_node_388) { current_stack_frame_node_388 = come_decrement_ref_count2(current_stack_frame_node_388, ((struct sNode*)current_stack_frame_node_388)->finalize, ((struct sNode*)current_stack_frame_node_388)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_391,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                    class_name_393 = come_decrement_ref_count2(class_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_399,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_409,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_413) { node_413 = come_decrement_ref_count2(node_413, ((struct sNode*)node_413)->finalize, ((struct sNode*)node_413)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result236__;
                }
                method_block_name_414=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value389=buffer_to_string(all_alhabet_sname_401)))));
                __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_value2_415=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1056, "CVALUE"))));
                fun2_416=map$2charphsFunph_at(info->funcs,method_block_name_414,((void*)0));
                if(                fun2_416==((void*)0)) {
                    err_msg(info,"method block function not found(%s)",method_block_name_414);
                    __result237__ = (_Bool)1;
                    if(current_stack_frame_node_388) { current_stack_frame_node_388 = come_decrement_ref_count2(current_stack_frame_node_388, ((struct sNode*)current_stack_frame_node_388)->finalize, ((struct sNode*)current_stack_frame_node_388)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_391,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                    class_name_393 = come_decrement_ref_count2(class_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_399,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_409,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_413) { node_413 = come_decrement_ref_count2(node_413, ((struct sNode*)node_413)->finalize, ((struct sNode*)node_413)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    method_block_name_414 = come_decrement_ref_count2(method_block_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value2_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result237__;
                }
                method_block_type2_417=fun2_416->mLambdaType;
                __dec_obj212=come_value2_415->c_value;
                come_value2_415->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_414));
                /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj213=come_value2_415->type;
                come_value2_415->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_417));
                come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value2_415->var=((void*)0);
                list$1CVALUEph_push_back(come_params_351,(struct CVALUE*)come_increment_ref_count(come_value2_415));
                __dec_obj214=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source3_409);
                come_call_finalizer3(__dec_obj214,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_410;
                info->head=head_411;
                info->sline=sline_412;
                info->current_stack_frame_struct=current_stack_frame_struct_397;
                if(current_stack_frame_node_388) { current_stack_frame_node_388 = come_decrement_ref_count2(current_stack_frame_node_388, ((struct sNode*)current_stack_frame_node_388)->finalize, ((struct sNode*)current_stack_frame_node_388)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_block2_391,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_block_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_393 = come_decrement_ref_count2(class_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_399,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(all_alhabet_sname_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(source3_409,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_413) { node_413 = come_decrement_ref_count2(node_413, ((struct sNode*)node_413)->finalize, ((struct sNode*)node_413)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_414 = come_decrement_ref_count2(method_block_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value2_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1081, "buffer"))));
            buffer_append_str(buf_418,fun_name_223);
            buffer_append_str(buf_418,"(");
            j_419=0;
            for(            o2_saved_420=(struct list$1CVALUEph*)come_increment_ref_count((come_params_351)),it_421=list$1CVALUEph_begin((o2_saved_420));            !list$1CVALUEph_end((o2_saved_420));            it_421=list$1CVALUEph_next((o2_saved_420))            ){
                buffer_append_str(buf_418,it_421->c_value);
                if(                j_419!=list$1CVALUEph_length(come_params_351)-1) {
                    buffer_append_str(buf_418,",");
                }
                j_419++;
            }
            /*i*/come_call_finalizer3(o2_saved_420,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_418,")");
            come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1098, "CVALUE"))));
            __dec_obj215=come_value_422->c_value;
            come_value_422->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_418));
            /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj216=come_value_422->type;
            come_value_422->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_346));
            come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_422->type->mStatic=(_Bool)0;
            come_value_422->var=((void*)0);
            if(            fun_332->mResultType->mHeap) {
                append_object_to_right_values2(come_value_422,(struct sType*)come_increment_ref_count(result_type_346),info,(_Bool)0);
            }
            if(            string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
                if(                string_operator_not_equals(fun_name_223,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_223,"null_check")&&string_operator_not_equals(fun_name_223,"come_push_stackframe")&&string_operator_not_equals(fun_name_223,"come_pop_stackframe")) {
                    __dec_obj217=come_value_422->c_value;
                    come_value_422->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_422->c_value,come_value_422->type,info));
                    /*G*/ __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            if(            !self->guard_break&&result_type_346->mGuardValue&&result_type_346->mPointerNum>0) {
                __dec_obj218=come_value_422->c_value;
                come_value_422->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value402=make_type_name_string(result_type_346,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_422->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
                /*G*/ __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            add_come_last_code(info,"%s",come_value_422->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
            /*i*/come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_418,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result238__ = (_Bool)1;
    fun_name_223 = come_decrement_ref_count2(fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result238__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result157__;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_215;
struct list_item$1tuple2$2charphsNodephph* it_216;
void* __right_value258 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result162__;
    if(    self==((void*)0)) {
        __result157__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    result_215=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 139, "list$1tuple2$2charphsNodephph"))));
    it_216=self->head;
    while(it_216!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_215,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_216->item)));
        it_216=it_216->next;
    }
    __result162__ = gComeFunResultObject = __result_obj__ = result_215;
    /*i*/come_call_finalizer3(result_215,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result158__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result158__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_213;
struct list_item$1tuple2$2charphsNodephph* prev_it_214;
    it_213=self->head;
    while(it_213!=((void*)0)) {
        prev_it_214=it_213;
        it_213=it_213->next;
        /*i*/come_call_finalizer3(prev_it_214,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj137;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj137=self->item;
            come_call_finalizer3(__dec_obj137,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_217;
struct tuple2$2charphsNodeph* __dec_obj140;
void* __right_value253 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_218;
struct tuple2$2charphsNodeph* __dec_obj143;
void* __right_value254 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_219;
struct tuple2$2charphsNodeph* __dec_obj146;
struct list$1tuple2$2charphsNodephph* __result159__;
    if(    self->len==0) {
        litem_217=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value252=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 153, "list_item$1tuple2$2charphsNodephph"))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        __dec_obj140=litem_217->item;
        litem_217->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj140,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1) {
        litem_218=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value253=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 163, "list_item$1tuple2$2charphsNodephph"))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        __dec_obj143=litem_218->item;
        litem_218->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj143,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value254=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 173, "list_item$1tuple2$2charphsNodephph"))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        __dec_obj146=litem_219->item;
        litem_219->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj146,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result159__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj147;
struct sNode* __dec_obj148;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj147=self->v1;
            /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj148=self->v2;
            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result160__;
void* __right_value255 = (void*)0;
struct tuple2$2charphsNodeph* result_220;
void* __right_value256 = (void*)0;
char* __dec_obj149;
void* __right_value257 = (void*)0;
struct sNode* __dec_obj150;
struct tuple2$2charphsNodeph* __result161__;
    if(    self==(void*)0) {
        __result160__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    result_220=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj149=result_220->v1;
        result_220->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj150=result_220->v2;
        result_220->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result161__ = gComeFunResultObject = __result_obj__ = result_220;
    /*i*/come_call_finalizer3(result_220,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj151;
struct sNode* __dec_obj152;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj151=self->v1;
            /*G*/ __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj152=self->v2;
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_221;
struct list_item$1tuple2$2charphsNodephph* prev_it_222;
    it_221=self->head;
    while(it_221!=((void*)0)) {
        prev_it_222=it_221;
        it_221=it_221->next;
        /*i*/come_call_finalizer3(prev_it_222,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result166__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result166__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_232;
struct list_item$1CVALUEph* prev_it_233;
    it_232=self->head;
    while(it_232!=((void*)0)) {
        prev_it_233=it_232;
        it_232=it_232->next;
        /*i*/come_call_finalizer3(prev_it_233,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj161;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj161=self->item;
            come_call_finalizer3(__dec_obj161,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
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
struct tuple2$2charphsNodeph* result_236;
struct tuple2$2charphsNodeph* __result168__;
struct tuple2$2charphsNodeph* __result169__;
struct tuple2$2charphsNodeph* result_237;
struct tuple2$2charphsNodeph* __result170__;
result_236 = (void*)0;
result_237 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_236,0,sizeof(struct tuple2$2charphsNodeph*));
        __result168__ = gComeFunResultObject = __result_obj__ = result_236;
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    self->it=self->head;
    if(    self->it) {
        __result169__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    memset(&result_237,0,sizeof(struct tuple2$2charphsNodeph*));
    __result170__ = gComeFunResultObject = __result_obj__ = result_237;
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_239;
struct tuple2$2charphsNodeph* __result171__;
struct tuple2$2charphsNodeph* __result172__;
struct tuple2$2charphsNodeph* result_240;
struct tuple2$2charphsNodeph* __result173__;
result_239 = (void*)0;
result_240 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_239,0,sizeof(struct tuple2$2charphsNodeph*));
        __result171__ = gComeFunResultObject = __result_obj__ = result_239;
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result172__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    memset(&result_240,0,sizeof(struct tuple2$2charphsNodeph*));
    __result173__ = gComeFunResultObject = __result_obj__ = result_240;
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_244;
int i_245;
struct sType* __result175__;
struct sType* default_value_246;
struct sType* __result176__;
default_value_246 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_244=self->head;
    i_245=0;
    while(it_244!=((void*)0)) {
        if(        position==i_245) {
            __result175__ = gComeFunResultObject = __result_obj__ = it_244->item;
            gComeFunResultObject = (void*)0;
            return __result175__;
        }
        it_244=it_244->next;
        i_245++;
    }
    memset(&default_value_246,0,sizeof(struct sType*));
    __result176__ = gComeFunResultObject = __result_obj__ = default_value_246;
    /*i*/come_call_finalizer3(default_value_246,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_250;
struct CVALUE* __result177__;
struct CVALUE* __result178__;
struct CVALUE* result_251;
struct CVALUE* __result179__;
result_250 = (void*)0;
result_251 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_250,0,sizeof(struct CVALUE*));
        __result177__ = gComeFunResultObject = __result_obj__ = result_250;
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    self->it=self->head;
    if(    self->it) {
        __result178__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result178__;
    }
    memset(&result_251,0,sizeof(struct CVALUE*));
    __result179__ = gComeFunResultObject = __result_obj__ = result_251;
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_253;
struct CVALUE* __result180__;
struct CVALUE* __result181__;
struct CVALUE* result_254;
struct CVALUE* __result182__;
result_253 = (void*)0;
result_254 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_253,0,sizeof(struct CVALUE*));
        __result180__ = gComeFunResultObject = __result_obj__ = result_253;
        gComeFunResultObject = (void*)0;
        return __result180__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result181__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result181__;
    }
    memset(&result_254,0,sizeof(struct CVALUE*));
    __result182__ = gComeFunResultObject = __result_obj__ = result_254;
    gComeFunResultObject = (void*)0;
    return __result182__;
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
unsigned int hash_261;
unsigned int it_262;
struct sFun* __result183__;
struct sFun* __result184__;
struct sFun* __result185__;
struct sFun* __result186__;
    hash_261=string_get_hash_key(((char*)key))%self->size;
    it_262=hash_261;
    while((_Bool)1) {
        if(        self->item_existance[it_262]) {
            if(            string_equals(self->keys[it_262],key)) {
                __result183__ = gComeFunResultObject = __result_obj__ = self->items[it_262];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result183__;
            }
            it_262++;
            if(            it_262>=self->size) {
                it_262=0;
            }
            else if(            it_262==hash_261) {
                __result184__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result184__;
            }
        }
        else {
            __result185__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result185__;
        }
    }
    __result186__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj164;
struct sType* __dec_obj165;
struct list$1sTypeph* __dec_obj166;
struct list$1charph* __dec_obj167;
struct list$1charph* __dec_obj168;
struct sType* __dec_obj169;
struct sBlock* __dec_obj170;
struct buffer* __dec_obj173;
struct buffer* __dec_obj174;
struct buffer* __dec_obj175;
struct buffer* __dec_obj176;
char* __dec_obj177;
char* __dec_obj178;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj164=self->mName;
            /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj165=self->mResultType;
            come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj166=self->mParamTypes;
            come_call_finalizer3(__dec_obj166,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj167=self->mParamNames;
            come_call_finalizer3(__dec_obj167,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj168=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj168,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj169=self->mLambdaType;
            come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj170=self->mBlock;
            come_call_finalizer3(__dec_obj170,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj173=self->mSource;
            come_call_finalizer3(__dec_obj173,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj174=self->mSourceHead;
            come_call_finalizer3(__dec_obj174,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj175=self->mSourceHead2;
            come_call_finalizer3(__dec_obj175,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj176=self->mSourceDefer;
            come_call_finalizer3(__dec_obj176,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj177=self->mComeHeader;
            /*G*/ __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj178=self->mDeclareSName;
            /*G*/ __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj171;
struct sVarTable* __dec_obj172;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj171=self->mNodes;
            come_call_finalizer3(__dec_obj171,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj172=self->mVarTable;
            come_call_finalizer3(__dec_obj172,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_267;
int i_268;
struct CVALUE* __result188__;
struct CVALUE* default_value_269;
struct CVALUE* __result189__;
default_value_269 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_267=self->head;
    i_268=0;
    while(it_267!=((void*)0)) {
        if(        position==i_268) {
            __result188__ = gComeFunResultObject = __result_obj__ = it_267->item;
            gComeFunResultObject = (void*)0;
            return __result188__;
        }
        it_267=it_267->next;
        i_268++;
    }
    memset(&default_value_269,0,sizeof(struct CVALUE*));
    __result189__ = gComeFunResultObject = __result_obj__ = default_value_269;
    /*i*/come_call_finalizer3(default_value_269,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result193__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result193__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_275;
int i_276;
struct sType* default_value_277;
struct list$1sTypeph* __result191__;
struct list_item$1sTypeph* it_281;
int i_282;
struct sType* __dec_obj182;
struct list$1sTypeph* __result192__;
default_value_277 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_275=self->len;
        for(        i_276=0;        i_276<position-len_275;        i_276++        ){
            memset(&default_value_277,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_277));
            /*i*/come_call_finalizer3(default_value_277,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result191__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    it_281=self->head;
    i_282=0;
    while(it_281!=((void*)0)) {
        if(        position==i_282) {
            __dec_obj182=it_281->item;
            it_281->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_281=it_281->next;
        i_282++;
    }
    __result192__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1sTypeph* litem_278;
struct sType* __dec_obj179;
void* __right_value283 = (void*)0;
struct list_item$1sTypeph* litem_279;
struct sType* __dec_obj180;
void* __right_value284 = (void*)0;
struct list_item$1sTypeph* litem_280;
struct sType* __dec_obj181;
struct list$1sTypeph* __result190__;
    if(    self->len==0) {
        litem_278=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value282=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 223, "list_item$1sTypeph"))));
        litem_278->prev=((void*)0);
        litem_278->next=((void*)0);
        __dec_obj179=litem_278->item;
        litem_278->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_278;
        self->head=litem_278;
    }
    else if(    self->len==1) {
        litem_279=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value283=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 233, "list_item$1sTypeph"))));
        litem_279->prev=self->head;
        litem_279->next=((void*)0);
        __dec_obj180=litem_279->item;
        litem_279->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_279;
        self->head->next=litem_279;
    }
    else {
        litem_280=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value284=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 243, "list_item$1sTypeph"))));
        litem_280->prev=self->tail;
        litem_280->next=((void*)0);
        __dec_obj181=litem_280->item;
        litem_280->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_280;
        self->tail=litem_280;
    }
    self->len++;
    __result190__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_285;
struct sType* __result194__;
struct sType* __result195__;
struct sType* result_286;
struct sType* __result196__;
result_285 = (void*)0;
result_286 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_285,0,sizeof(struct sType*));
        __result194__ = gComeFunResultObject = __result_obj__ = result_285;
        gComeFunResultObject = (void*)0;
        return __result194__;
    }
    self->it=self->head;
    if(    self->it) {
        __result195__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result195__;
    }
    memset(&result_286,0,sizeof(struct sType*));
    __result196__ = gComeFunResultObject = __result_obj__ = result_286;
    gComeFunResultObject = (void*)0;
    return __result196__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_288;
struct sType* __result197__;
struct sType* __result198__;
struct sType* result_289;
struct sType* __result199__;
result_288 = (void*)0;
result_289 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_288,0,sizeof(struct sType*));
        __result197__ = gComeFunResultObject = __result_obj__ = result_288;
        gComeFunResultObject = (void*)0;
        return __result197__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result198__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result198__;
    }
    memset(&result_289,0,sizeof(struct sType*));
    __result199__ = gComeFunResultObject = __result_obj__ = result_289;
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1CVALUEph* litem_299;
struct CVALUE* __dec_obj183;
void* __right_value290 = (void*)0;
struct list_item$1CVALUEph* litem_300;
struct CVALUE* __dec_obj184;
void* __right_value291 = (void*)0;
struct list_item$1CVALUEph* litem_301;
struct CVALUE* __dec_obj185;
struct list$1CVALUEph* __result201__;
    if(    self->len==0) {
        litem_299=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value289=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 153, "list_item$1CVALUEph"))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj183=litem_299->item;
        litem_299->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value290=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 163, "list_item$1CVALUEph"))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj184=litem_300->item;
        litem_300->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value291=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 173, "list_item$1CVALUEph"))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj185=litem_301->item;
        litem_301->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result201__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_307;
unsigned int it_308;
struct map$2charphsFunph* __result202__;
    hash_307=string_get_hash_key(((char*)key))%self->size;
    it_308=hash_307;
    while((_Bool)1) {
        if(        self->item_existance[it_308]) {
            if(            string_equals(self->keys[it_308],key)) {
                list$1charp_remove(self->key_list,self->keys[it_308]);
                self->item_existance[it_308]=(_Bool)0;
                if(                1) {
                    self->keys[it_308] = come_decrement_ref_count2(self->keys[it_308], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_308]=((void*)0);
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_308],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_308]=((void*)0);
                self->len--;
                break;
            }
            it_308++;
            if(            it_308>=self->size) {
                it_308=0;
            }
            else if(            it_308==hash_307) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_326;
unsigned int hash_327;
unsigned int it_328;
struct sFun* __result205__;
struct sFun* __result206__;
struct sFun* __result207__;
struct sFun* __result208__;
default_value_326 = (void*)0;
    memset(&default_value_326,0,sizeof(struct sFun*));
    hash_327=string_get_hash_key(((char*)key))%self->size;
    it_328=hash_327;
    while((_Bool)1) {
        if(        self->item_existance[it_328]) {
            if(            string_equals(self->keys[it_328],key)) {
                __result205__ = gComeFunResultObject = __result_obj__ = self->items[it_328];
                /*i*/come_call_finalizer3(default_value_326,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result205__;
            }
            it_328++;
            if(            it_328>=self->size) {
                it_328=0;
            }
            else if(            it_328==hash_327) {
                __result206__ = gComeFunResultObject = __result_obj__ = default_value_326;
                /*i*/come_call_finalizer3(default_value_326,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result206__;
            }
        }
        else {
            __result207__ = gComeFunResultObject = __result_obj__ = default_value_326;
            /*i*/come_call_finalizer3(default_value_326,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result207__;
        }
    }
    __result208__ = gComeFunResultObject = __result_obj__ = default_value_326;
    /*i*/come_call_finalizer3(default_value_326,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_360;
char* __result213__;
char* __result214__;
char* result_361;
char* __result215__;
result_360 = (void*)0;
result_361 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_360,0,sizeof(char*));
        __result213__ = gComeFunResultObject = __result_obj__ = result_360;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    self->it=self->head;
    if(    self->it) {
        __result214__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    memset(&result_361,0,sizeof(char*));
    __result215__ = gComeFunResultObject = __result_obj__ = result_361;
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_363;
char* __result216__;
char* __result217__;
char* result_364;
char* __result218__;
result_363 = (void*)0;
result_364 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_363,0,sizeof(char*));
        __result216__ = gComeFunResultObject = __result_obj__ = result_363;
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result217__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    memset(&result_364,0,sizeof(char*));
    __result218__ = gComeFunResultObject = __result_obj__ = result_364;
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_365;
int i_366;
struct CVALUE* default_value_367;
struct list$1CVALUEph* __result219__;
struct list_item$1CVALUEph* it_368;
int i_369;
struct CVALUE* __dec_obj206;
struct list$1CVALUEph* __result220__;
default_value_367 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_365=self->len;
        for(        i_366=0;        i_366<position-len_365;        i_366++        ){
            memset(&default_value_367,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_367));
            /*i*/come_call_finalizer3(default_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result219__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    it_368=self->head;
    i_369=0;
    while(it_368!=((void*)0)) {
        if(        position==i_369) {
            __dec_obj206=it_368->item;
            it_368->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_368=it_368->next;
        i_369++;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_378;
int i_379;
char* __result223__;
char* default_value_380;
char* __result224__;
default_value_380 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_378=self->head;
    i_379=0;
    while(it_378!=((void*)0)) {
        if(        position==i_379) {
            __result223__ = gComeFunResultObject = __result_obj__ = it_378->item;
            gComeFunResultObject = (void*)0;
            return __result223__;
        }
        it_378=it_378->next;
        i_379++;
    }
    memset(&default_value_380,0,sizeof(char*));
    __result224__ = gComeFunResultObject = __result_obj__ = default_value_380;
    default_value_380 = come_decrement_ref_count2(default_value_380, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj209;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj209=self->sname;
            /*G*/ __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result228__;
void* __right_value363 = (void*)0;
struct sCurrentNode2* result_389;
void* __right_value364 = (void*)0;
char* __dec_obj210;
struct sCurrentNode2* __result229__;
    if(    self==(void*)0) {
        __result228__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_389=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(    self!=((void*)0)) {
        result_389->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj210=result_389->sname;
        result_389->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_389;
    /*i*/come_call_finalizer3(result_389,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_394;
unsigned int hash_395;
unsigned int it_396;
struct sClass* __result231__;
struct sClass* __result232__;
struct sClass* __result233__;
struct sClass* __result234__;
default_value_394 = (void*)0;
    memset(&default_value_394,0,sizeof(struct sClass*));
    hash_395=string_get_hash_key(((char*)key))%self->size;
    it_396=hash_395;
    while((_Bool)1) {
        if(        self->item_existance[it_396]) {
            if(            string_equals(self->keys[it_396],key)) {
                __result231__ = gComeFunResultObject = __result_obj__ = self->items[it_396];
                /*i*/come_call_finalizer3(default_value_394,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
            it_396++;
            if(            it_396>=self->size) {
                it_396=0;
            }
            else if(            it_396==hash_395) {
                __result232__ = gComeFunResultObject = __result_obj__ = default_value_394;
                /*i*/come_call_finalizer3(default_value_394,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result232__;
            }
        }
        else {
            __result233__ = gComeFunResultObject = __result_obj__ = default_value_394;
            /*i*/come_call_finalizer3(default_value_394,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result233__;
        }
    }
    __result234__ = gComeFunResultObject = __result_obj__ = default_value_394;
    /*i*/come_call_finalizer3(default_value_394,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value412 = (void*)0;
struct sNode* __result241__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1132, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunCallNode*)(__right_value405=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1132, "sFunCallNode")),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,throw_or_rescue,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunCallNode_finalize;
    _inf_value2->clone=(void*)sFunCallNode_clone;
    _inf_value2->compile=(void*)sFunCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sFunCallNode_terminated;
    _inf_value2->kind=(void*)sFunCallNode_kind;
    __result241__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value412=_inf_value2));
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value405,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value412) { __right_value412 = come_decrement_ref_count2(__right_value412, ((struct sNode*)__right_value412)->finalize, ((struct sNode*)__right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result241__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value413 = (void*)0;
struct sNode* __dec_obj229;
void* __right_value414 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj230;
struct sLambdaCall* __result242__;
    ((struct sNodeBase*)(__right_value413=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value413,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj229=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj230=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj230,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result242__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value415 = (void*)0;
char* __result243__;
    __result243__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value415=__builtin_string("sLambdaCall")));
    __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_424;
struct list$1tuple2$2charphsNodephph* params_425;
_Bool __result244__;
void* __right_value416 = (void*)0;
struct CVALUE* come_value_426;
struct sType* lambda_type_427;
_Bool __result245__;
void* __right_value417 = (void*)0;
struct sType* result_type_428;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct list$1CVALUEph* come_params_429;
_Bool __result246__;
int i_430;
struct list$1tuple2$2charphsNodephph* o2_saved_431;
struct tuple2$2charphsNodeph* it_432;
struct tuple2$2charphsNodeph* multiple_assign_var7;
char* label_433;
struct sNode* node_434;
_Bool __result247__;
void* __right_value420 = (void*)0;
struct CVALUE* come_value_435;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct buffer* buf_436;
int j_437;
struct list$1CVALUEph* o2_saved_438;
struct CVALUE* it_439;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct CVALUE* come_value2_440;
void* __right_value427 = (void*)0;
char* __dec_obj234;
void* __right_value428 = (void*)0;
struct sType* __dec_obj235;
_Bool __result248__;
    node_424=(struct sNode*)come_increment_ref_count(self->node);
    params_425=self->params;
    if(    !node_compile(node_424,info)) {
        __result244__ = (_Bool)0;
        if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result244__;
    }
    come_value_426=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_427=come_value_426->type;
    if(    lambda_type_427->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result245__ = (_Bool)0;
        if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result245__;
    }
    result_type_428=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_427->mResultType->v1));
    result_type_428->mStatic=(_Bool)0;
    come_params_429=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1172, "list$1CVALUEph"))));
    if(    list$1sTypeph_length(lambda_type_427->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_425)&&!lambda_type_427->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_427->mParamTypes),list$1tuple2$2charphsNodephph_length(params_425));
        __result246__ = (_Bool)0;
        if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_429,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result246__;
    }
    i_430=0;
    for(    o2_saved_431=(params_425),it_432=list$1tuple2$2charphsNodephph_begin((o2_saved_431));    !list$1tuple2$2charphsNodephph_end((o2_saved_431));    it_432=list$1tuple2$2charphsNodephph_next((o2_saved_431))    ){
        multiple_assign_var7=it_432;
        label_433=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_434=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        !node_compile(node_434,info)) {
            __result247__ = (_Bool)0;
            label_433 = come_decrement_ref_count2(label_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_429,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result247__;
        }
        come_value_435=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        lambda_type_427->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_427->mParamTypes,i_430), "05call.c", 1188, 21))==((void*)0)) {
        }
        else {
            check_assign_type(((char*)(__right_value422=xsprintf("calling param #\%s",((char*)(__right_value421=int_to_string(i_430)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_427->mParamTypes,i_430), "05call.c", 1191, 22)),come_value_435->type,come_value_435,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_427->mParamTypes,i_430), "05call.c", 1192, 23))->mHeap&&come_value_435->type->mHeap) {
                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_427->mParamTypes,i_430), "05call.c", 1193, 24)),come_value_435->type,come_value_435,info,(_Bool)1);
            }
        }
        list$1CVALUEph_push_back(come_params_429,(struct CVALUE*)come_increment_ref_count(come_value_435));
        dec_stack_ptr(1,info);
        i_430++;
        label_433 = come_decrement_ref_count2(label_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_436=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1203, "buffer"))));
    buffer_append_str(buf_436,"(");
    buffer_append_str(buf_436,come_value_426->c_value);
    buffer_append_str(buf_436,")");
    buffer_append_str(buf_436,"(");
    j_437=0;
    for(    o2_saved_438=(struct list$1CVALUEph*)come_increment_ref_count((come_params_429)),it_439=list$1CVALUEph_begin((o2_saved_438));    !list$1CVALUEph_end((o2_saved_438));    it_439=list$1CVALUEph_next((o2_saved_438))    ){
        buffer_append_str(buf_436,it_439->c_value);
        if(        j_437!=list$1CVALUEph_length(come_params_429)-1) {
            buffer_append_str(buf_436,",");
        }
        j_437++;
    }
    /*i*/come_call_finalizer3(o2_saved_438,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_436,")");
    come_value2_440=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1222, "CVALUE"))));
    __dec_obj234=come_value2_440->c_value;
    come_value2_440->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_436));
    /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_427->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_440,(struct sType*)come_increment_ref_count(lambda_type_427->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj235=come_value2_440->type;
    come_value2_440->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_428));
    come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_440->type->mStatic=(_Bool)0;
    come_value2_440->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_440->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_440));
    __result248__ = (_Bool)1;
    if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_429,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_436,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_440,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result248__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value429 = (void*)0;
struct sType* __dec_obj236;
struct sVarArgTypeName* __result249__;
    ((struct sNodeBase*)(__right_value429=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value429,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj236=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value430 = (void*)0;
char* __result250__;
    __result250__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value430=__builtin_string("sVarArgTypeName")));
    __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_441;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct CVALUE* come_value_442;
void* __right_value433 = (void*)0;
char* __dec_obj239;
struct sType* __dec_obj240;
_Bool __result251__;
    type_441=(struct sType*)come_increment_ref_count(self->type);
    come_value_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1259, "CVALUE"))));
    __dec_obj239=come_value_442->c_value;
    come_value_442->c_value=(char*)come_increment_ref_count(make_type_name_string(type_441,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj240=come_value_442->type;
    come_value_442->type=(struct sType*)come_increment_ref_count(type_441);
    come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_442->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_442));
    __result251__ = (_Bool)1;
    /*i*/come_call_finalizer3(type_441,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result251__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1sTypeph* method_generics_types_443;
void* __right_value436 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_444;
char* name_445;
_Bool err_446;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_447;
_Bool _va_arg_448;
char* p_449;
int sline_450;
_Bool err_flag_451;
void* __right_value440 = (void*)0;
char* label_452;
void* __right_value441 = (void*)0;
char* __dec_obj243;
char* __dec_obj244;
_Bool no_comma_453;
_Bool in_fun_param_454;
void* __right_value442 = (void*)0;
struct sNode* node_455;
void* __right_value443 = (void*)0;
struct sNode* __dec_obj245;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
_Bool guard_break_459;
struct buffer* method_block_460;
int method_block_sline_461;
char* head_462;
void* __right_value449 = (void*)0;
char* tail_463;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct buffer* __dec_obj251;
int len_464;
void* __right_value452 = (void*)0;
char* mem_465;
_Bool throw_or_rescue_466;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value461 = (void*)0;
struct sNode* node_467;
void* __right_value462 = (void*)0;
struct sNode* __dec_obj262;
struct sNode* __result256__;
    method_generics_types_443=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1273, "list$1sTypeph"))));
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
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value436=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_444=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_445=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_446=multiple_assign_var8->v3;
                /*g*/come_call_finalizer3(__right_value436,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_446) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_443,(struct sType*)come_increment_ref_count(sType_clone(type_444)));
                /*i*/come_call_finalizer3(type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_445 = come_decrement_ref_count2(name_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_447=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1311, "list$1tuple2$2charphsNodephph"))));
    _va_arg_448=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_449=info->p;
        sline_450=info->sline;
        err_flag_451=(_Bool)0;
        label_452=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj243=label_452;
            label_452=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_451=(_Bool)1;
        }
        if(        err_flag_451==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj244=label_452;
            label_452=((void*)0);
            /*G*/ __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_449;
            info->sline=sline_450;
        }
        no_comma_453=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_454=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_455=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj245=node_455;
        node_455=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_455),info));
        if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_453;
        info->in_fun_param=in_fun_param_454;
        list$1tuple2$2charphsNodephph_push_back(params_447,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1359, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_452),(struct sNode*)come_increment_ref_count(node_455))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_452 = come_decrement_ref_count2(label_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_455) { node_455 = come_decrement_ref_count2(node_455, ((struct sNode*)node_455)->finalize, ((struct sNode*)node_455)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_452 = come_decrement_ref_count2(label_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_455) { node_455 = come_decrement_ref_count2(node_455, ((struct sNode*)node_455)->finalize, ((struct sNode*)node_455)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_448;
    guard_break_459=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_459=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_460=((void*)0);
    method_block_sline_461=0;
    if(    *info->p==123) {
        head_462=info->p;
        method_block_sline_461=info->sline;
        ((char*)(__right_value449=skip_block(info)));
        __right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_463=info->p;
        __dec_obj251=method_block_460;
        method_block_460=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1396, "buffer"))));
        come_call_finalizer3(__dec_obj251,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_464=tail_463-head_462;
        mem_465=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_464+1)), "05call.c", 1399, "char"));
        memcpy(mem_465,head_462,len_464);
        mem_465[len_464]=0;
        buffer_append_str(method_block_460,mem_465);
        buffer_append_str(method_block_460,"\n");
        mem_465 = come_decrement_ref_count2(mem_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    throw_or_rescue_466=(_Bool)0;
    if(    strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0) {
        throw_or_rescue_466=(_Bool)1;
    }
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1416, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunCallNode*)(__right_value454=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1416, "sFunCallNode")),fun_name,params_447,guard_break_459,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_443),(struct buffer*)come_increment_ref_count(method_block_460),method_block_sline_461,throw_or_rescue_466,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_467=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value454,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj262=node_467;
    node_467=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_467),info));
    if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
    __result256__ = gComeFunResultObject = __result_obj__ = node_467;
    /*i*/come_call_finalizer3(method_generics_types_443,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(params_447,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block_460,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_467) { node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj241;
char* __dec_obj242;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj241=self->v1;
            come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj242=self->v2;
            /*G*/ __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value444 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_456;
struct tuple2$2charphsNodeph* __dec_obj246;
void* __right_value445 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_457;
struct tuple2$2charphsNodeph* __dec_obj247;
void* __right_value446 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_458;
struct tuple2$2charphsNodeph* __dec_obj248;
struct list$1tuple2$2charphsNodephph* __result252__;
    if(    self->len==0) {
        litem_456=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value444=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 223, "list_item$1tuple2$2charphsNodephph"))));
        litem_456->prev=((void*)0);
        litem_456->next=((void*)0);
        __dec_obj246=litem_456->item;
        litem_456->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj246,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_456;
        self->head=litem_456;
    }
    else if(    self->len==1) {
        litem_457=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value445=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 233, "list_item$1tuple2$2charphsNodephph"))));
        litem_457->prev=self->head;
        litem_457->next=((void*)0);
        __dec_obj247=litem_457->item;
        litem_457->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj247,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_457;
        self->head->next=litem_457;
    }
    else {
        litem_458=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value446=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 243, "list_item$1tuple2$2charphsNodephph"))));
        litem_458->prev=self->tail;
        litem_458->next=((void*)0);
        __dec_obj248=litem_458->item;
        litem_458->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj248,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_458;
        self->tail=litem_458;
    }
    self->len++;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj249;
struct sNode* __dec_obj250;
struct tuple2$2charphsNodeph* __result253__;
    __dec_obj249=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj250=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj252;
char* __dec_obj253;
struct list$1tuple2$2charphsNodephph* __dec_obj254;
struct list$1sTypeph* __dec_obj255;
struct buffer* __dec_obj256;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj252=self->sname;
            /*G*/ __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj253=self->fun_name;
            /*G*/ __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj254=self->params;
            come_call_finalizer3(__dec_obj254,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj255=self->method_generics_types;
            come_call_finalizer3(__dec_obj255,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj256=self->method_block;
            come_call_finalizer3(__dec_obj256,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result254__;
void* __right_value455 = (void*)0;
struct sFunCallNode* result_468;
void* __right_value456 = (void*)0;
char* __dec_obj257;
void* __right_value457 = (void*)0;
char* __dec_obj258;
void* __right_value458 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj259;
void* __right_value459 = (void*)0;
struct list$1sTypeph* __dec_obj260;
void* __right_value460 = (void*)0;
struct buffer* __dec_obj261;
struct sFunCallNode* __result255__;
    if(    self==(void*)0) {
        __result254__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_468=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(    self!=((void*)0)) {
        result_468->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj257=result_468->sname;
        result_468->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj258=result_468->fun_name;
        result_468->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj259=result_468->params;
        result_468->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj259,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_468->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj260=result_468->method_generics_types;
        result_468->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj260,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj261=result_468->method_block;
        result_468->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj261,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_468->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)) {
        result_468->throw_or_rescue=self->throw_or_rescue;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_468;
    /*i*/come_call_finalizer3(result_468,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result257__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result257__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sNode* _inf_value4;
struct sReturnNode* _inf_obj_value4;
void* __right_value469 = (void*)0;
struct sNode* __result260__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1437, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sReturnNode*)(__right_value464=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1437, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sReturnNode_finalize;
    _inf_value4->clone=(void*)sReturnNode_clone;
    _inf_value4->compile=(void*)sReturnNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sReturnNode_kind;
    __result260__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value469=_inf_value4));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value464,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value469) { __right_value469 = come_decrement_ref_count2(__right_value469, ((struct sNode*)__right_value469)->finalize, ((struct sNode*)__right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result260__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value477 = (void*)0;
struct sNode* __result263__;
char* head_471;
void* __right_value478 = (void*)0;
struct sNode* value_472;
char* tail_473;
void* __right_value479 = (void*)0;
struct sNode* __dec_obj275;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value487 = (void*)0;
struct sNode* __result266__;
char* head_476;
int head_sline_477;
void* __right_value488 = (void*)0;
char* buf_478;
_Bool is_type_name__479;
_Bool is_special_word_481;
_Bool define_function_pointer_flag_482;
void* __right_value489 = (void*)0;
_Bool lambda_flag_483;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
char* word2_484;
_Bool fun_name_with_type_name_485;
void* __right_value492 = (void*)0;
char* word2_486;
_Bool call_method_generics_fun_call_487;
void* __right_value493 = (void*)0;
char* __dec_obj282;
int nest_488;
_Bool new__489;
void* __right_value494 = (void*)0;
char* __dec_obj283;
struct sClass* klass_490;
struct sClass* generics_class_491;
int nest_492;
void* __right_value495 = (void*)0;
char* __dec_obj284;
void* __right_value496 = (void*)0;
struct sNode* node_493;
struct sNode* __result267__;
void* __right_value497 = (void*)0;
struct sNode* node_494;
struct sNode* __result268__;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sNode* _inf_value7;
struct sFuncNode* _inf_obj_value7;
void* __right_value502 = (void*)0;
struct sNode* __result271__;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* _inf_value8;
struct sLineNode* _inf_obj_value8;
void* __right_value507 = (void*)0;
struct sNode* __result274__;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sNode* _inf_value9;
struct sSNameNode* _inf_obj_value9;
void* __right_value512 = (void*)0;
struct sNode* __result277__;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sNode* _inf_value10;
struct sCallerFuncNode* _inf_obj_value10;
void* __right_value517 = (void*)0;
struct sNode* __result280__;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* _inf_value11;
struct sCallerLineNode* _inf_obj_value11;
void* __right_value522 = (void*)0;
struct sNode* __result283__;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sNode* _inf_value12;
struct sCallerSNameNode* _inf_obj_value12;
void* __right_value527 = (void*)0;
struct sNode* __result286__;
void* __right_value528 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_501;
char* name_502;
_Bool err_503;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sNode* _inf_value13;
struct sVarArgTypeName* _inf_obj_value13;
void* __right_value534 = (void*)0;
struct sNode* __result289__;
void* __right_value535 = (void*)0;
struct sNode* node_505;
struct sNode* __result290__;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct buffer* fun_name_506;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* type_507;
void* __right_value540 = (void*)0;
struct sClass* klass_511;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj301;
void* __right_value543 = (void*)0;
char* buf2_512;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sNode* node_513;
struct sNode* __result295__;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct buffer* fun_name_514;
void* __right_value548 = (void*)0;
char* buf2_515;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sNode* node_516;
struct sNode* __result296__;
void* __right_value551 = (void*)0;
struct sNode* node_517;
struct sNode* __result297__;
void* __right_value552 = (void*)0;
struct sNode* node_518;
struct sNode* __result298__;
void* __right_value553 = (void*)0;
struct sNode* node_519;
struct sNode* __result299__;
void* __right_value554 = (void*)0;
struct sNode* node_520;
struct sNode* __result300__;
struct sNode* __result301__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1450, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sReturnNode*)(__right_value472=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1450, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sReturnNode_finalize;
            _inf_value5->clone=(void*)sReturnNode_clone;
            _inf_value5->compile=(void*)sReturnNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sReturnNode_kind;
            __result263__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value477=_inf_value5));
            /*g*/come_call_finalizer3(__right_value472,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value477) { __right_value477 = come_decrement_ref_count2(__right_value477, ((struct sNode*)__right_value477)->finalize, ((struct sNode*)__right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result263__;
        }
        else {
            head_471=info->p;
            value_472=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_473=info->p;
            __dec_obj275=value_472;
            value_472=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_472),info));
            if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_474[tail_473-head_471+1];
            memset(&buf_474, 0, sizeof(char)            *(tail_473-head_471+1)            );
            memcpy(buf_474,head_471,tail_473-head_471);
            buf_474[tail_473-head_471]=0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1462, "struct sNode");
            _inf_obj_value6=come_increment_ref_count(((struct sReturnNode*)(__right_value482=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1462, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_472),(char*)come_increment_ref_count(__builtin_string(buf_474)),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result266__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value487=_inf_value6));
            if(value_472) { value_472 = come_decrement_ref_count2(value_472, ((struct sNode*)value_472)->finalize, ((struct sNode*)value_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value482,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value487) { __right_value487 = come_decrement_ref_count2(__right_value487, ((struct sNode*)__right_value487)->finalize, ((struct sNode*)__right_value487)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result266__;
            if(value_472) { value_472 = come_decrement_ref_count2(value_472, ((struct sNode*)value_472)->finalize, ((struct sNode*)value_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
        head_476=info->p;
        head_sline_477=info->sline;
        buf_478=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__479=is_type_name(buf_478,info);
        static char* is_special_word_array_480[18]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__"};
        is_special_word_481=charppa_contained(is_special_word_array_480,18,buf_478);
        define_function_pointer_flag_482=(_Bool)0;
        if(        !is_special_word_481&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value489=backtrace_parse_type((_Bool)0,info)));
            /*g*/come_call_finalizer3(__right_value489,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_482=(_Bool)1;
                }
            }
            info->p=head_476;
            info->sline=head_sline_477;
        }
        lambda_flag_483=(_Bool)0;
        if(        !is_special_word_481&&is_type_name__479) {
            info->p=head_476;
            info->sline=head_sline_477;
            ((struct tuple3$3sTypephcharphbool*)(__right_value490=backtrace_parse_type((_Bool)0,info)));
            /*g*/come_call_finalizer3(__right_value490,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_484=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_484,"lambda")) {
                lambda_flag_483=(_Bool)1;
            }
            info->p=head_476;
            info->sline=head_sline_477;
            word2_484 = come_decrement_ref_count2(word2_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_485=(_Bool)0;
        if(        !is_special_word_481) {
            info->p=head_476;
            info->sline=head_sline_477;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_486=(char*)come_increment_ref_count(parse_word(info));
                word2_486 = come_decrement_ref_count2(word2_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_485=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_476;
            info->sline=head_sline_477;
        }
        call_method_generics_fun_call_487=(_Bool)0;
        {
            info->p=head_476;
            info->sline=head_sline_477;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj282=buf_478;
                buf_478=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            !is_type_name(buf_478,info)&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_478)==((void*)0)&&map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_478)==((void*)0)&&*info->p==60) {
                nest_488=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_488++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_488==0) {
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
                    call_method_generics_fun_call_487=(_Bool)1;
                }
            }
            info->p=head_476;
            info->sline=head_sline_477;
        }
        new__489=(_Bool)0;
        if(        !is_special_word_481) {
            info->p=head_476;
            info->sline=head_sline_477;
            __dec_obj283=buf_478;
            buf_478=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_490=map$2charphsClassphp_operator_load_element(info->classes,buf_478);
            if(            klass_490&&*info->p==123) {
                new__489=(_Bool)1;
            }
            generics_class_491=map$2charphsClassphp_operator_load_element(info->generics_classes,buf_478);
            if(            generics_class_491&&*info->p==60) {
                nest_492=0;
                while((_Bool)1) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_492++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        nest_492--;
                        if(                        nest_492==0) {
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
                    new__489=(_Bool)1;
                }
            }
            info->p=head_476;
            info->sline=head_sline_477;
        }
        parse_sharp_v5(info);
        __dec_obj284=buf_478;
        buf_478=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_483) {
            info->p=head_476;
            info->sline=head_sline_477;
            node_493=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result267__ = gComeFunResultObject = __result_obj__ = node_493;
            if(node_493) { node_493 = come_decrement_ref_count2(node_493, ((struct sNode*)node_493)->finalize, ((struct sNode*)node_493)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result267__;
            if(node_493) { node_493 = come_decrement_ref_count2(node_493, ((struct sNode*)node_493)->finalize, ((struct sNode*)node_493)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_478,"string")||string_operator_equals(buf_478,"wstring"))&&*info->p==40) {
            node_494=(struct sNode*)come_increment_ref_count(parse_function_call(buf_478,info));
            __result268__ = gComeFunResultObject = __result_obj__ = node_494;
            if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result268__;
            if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_478,"__func__")||string_operator_equals(buf_478,"__FUNCTION__")) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1658, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sFuncNode*)(__right_value499=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 1658, "sFuncNode")),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFuncNode_finalize;
            _inf_value7->clone=(void*)sFuncNode_clone;
            _inf_value7->compile=(void*)sFuncNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFuncNode_kind;
            __result271__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value502=_inf_value7));
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value499,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value502) { __right_value502 = come_decrement_ref_count2(__right_value502, ((struct sNode*)__right_value502)->finalize, ((struct sNode*)__right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result271__;
        }
        else if(        string_operator_equals(buf_478,"__line__")||string_operator_equals(buf_478,"__LINE__")) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1661, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sLineNode*)(__right_value504=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 1661, "sLineNode")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLineNode_finalize;
            _inf_value8->clone=(void*)sLineNode_clone;
            _inf_value8->compile=(void*)sLineNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sLineNode_kind;
            __result274__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value507=_inf_value8));
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value504,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value507) { __right_value507 = come_decrement_ref_count2(__right_value507, ((struct sNode*)__right_value507)->finalize, ((struct sNode*)__right_value507)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result274__;
        }
        else if(        string_operator_equals(buf_478,"__sname__")) {
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1664, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sSNameNode*)(__right_value509=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 1664, "sSNameNode")),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sSNameNode_finalize;
            _inf_value9->clone=(void*)sSNameNode_clone;
            _inf_value9->compile=(void*)sSNameNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sSNameNode_kind;
            __result277__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value512=_inf_value9));
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value509,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value512) { __right_value512 = come_decrement_ref_count2(__right_value512, ((struct sNode*)__right_value512)->finalize, ((struct sNode*)__right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result277__;
        }
        else if(        string_operator_equals(buf_478,"__caller_func__")) {
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1667, "struct sNode");
            _inf_obj_value10=come_increment_ref_count(((struct sCallerFuncNode*)(__right_value514=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 1667, "sCallerFuncNode")),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value10->clone=(void*)sCallerFuncNode_clone;
            _inf_value10->compile=(void*)sCallerFuncNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCallerFuncNode_kind;
            __result280__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value517=_inf_value10));
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value514,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value517) { __right_value517 = come_decrement_ref_count2(__right_value517, ((struct sNode*)__right_value517)->finalize, ((struct sNode*)__right_value517)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result280__;
        }
        else if(        string_operator_equals(buf_478,"__caller_line__")) {
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1670, "struct sNode");
            _inf_obj_value11=come_increment_ref_count(((struct sCallerLineNode*)(__right_value519=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 1670, "sCallerLineNode")),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sCallerLineNode_finalize;
            _inf_value11->clone=(void*)sCallerLineNode_clone;
            _inf_value11->compile=(void*)sCallerLineNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sCallerLineNode_kind;
            __result283__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value522=_inf_value11));
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value519,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value522) { __right_value522 = come_decrement_ref_count2(__right_value522, ((struct sNode*)__right_value522)->finalize, ((struct sNode*)__right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result283__;
        }
        else if(        string_operator_equals(buf_478,"__caller_sname__")) {
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1673, "struct sNode");
            _inf_obj_value12=come_increment_ref_count(((struct sCallerSNameNode*)(__right_value524=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 1673, "sCallerSNameNode")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value12->clone=(void*)sCallerSNameNode_clone;
            _inf_value12->compile=(void*)sCallerSNameNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sCallerSNameNode_kind;
            __result286__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value527=_inf_value12));
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value524,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value527) { __right_value527 = come_decrement_ref_count2(__right_value527, ((struct sNode*)__right_value527)->finalize, ((struct sNode*)__right_value527)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result286__;
        }
        else if(        info->va_arg&&is_type_name(buf_478,info)) {
            info->p=head_476;
            info->sline=head_sline_477;
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value528=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_501=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_502=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_503=multiple_assign_var9->v3;
            /*g*/come_call_finalizer3(__right_value528,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1681, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sVarArgTypeName*)(__right_value530=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 1681, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_501),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value13->clone=(void*)sVarArgTypeName_clone;
            _inf_value13->compile=(void*)sVarArgTypeName_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sVarArgTypeName_kind;
            __result289__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value534=_inf_value13));
            /*i*/come_call_finalizer3(type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_502 = come_decrement_ref_count2(name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value530,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value534) { __right_value534 = come_decrement_ref_count2(__right_value534, ((struct sNode*)__right_value534)->finalize, ((struct sNode*)__right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result289__;
            /*i*/come_call_finalizer3(type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_502 = come_decrement_ref_count2(name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        new__489||(string_operator_equals(buf_478,"sizeof")||string_operator_equals(buf_478,"_Alignof")||string_operator_equals(buf_478,"_Alignas")||string_operator_equals(buf_478,"__alignof__"))&&*info->p==40) {
            info->new_=new__489;
            node_505=(struct sNode*)come_increment_ref_count(string_node_v21(buf_478,head_476,head_sline_477,info));
            info->new_=(_Bool)0;
            __result290__ = gComeFunResultObject = __result_obj__ = node_505;
            if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result290__;
            if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        fun_name_with_type_name_485) {
            fun_name_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1691, "buffer"))));
            buffer_append_str(fun_name_506,buf_478);
            type_507=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value538=buffer_to_string(fun_name_506))))));
            __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            type_507==((void*)0)) {
                klass_511=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value540=buffer_to_string(fun_name_506))));
                __right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                klass_511) {
                    __dec_obj301=type_507;
                    type_507=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1701, "sType")),buf_478,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj301,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_478);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_507->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_506,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_506,"_");
            buf2_512=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_506,buf2_512);
            node_513=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value544=buffer_to_string(fun_name_506))),info));
            __right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result295__ = gComeFunResultObject = __result_obj__ = node_513;
            /*i*/come_call_finalizer3(fun_name_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_507,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_512 = come_decrement_ref_count2(buf2_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_513) { node_513 = come_decrement_ref_count2(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result295__;
            /*i*/come_call_finalizer3(fun_name_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_507,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_512 = come_decrement_ref_count2(buf2_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_513) { node_513 = come_decrement_ref_count2(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_514=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1735, "buffer"))));
            buffer_append_str(fun_name_514,buf_478);
            buffer_append_str(fun_name_514,"_");
            buf2_515=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_514,buf2_515);
            node_516=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value549=buffer_to_string(fun_name_514))),info));
            __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result296__ = gComeFunResultObject = __result_obj__ = node_516;
            /*i*/come_call_finalizer3(fun_name_514,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_515 = come_decrement_ref_count2(buf2_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_516) { node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result296__;
            /*i*/come_call_finalizer3(fun_name_514,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_515 = come_decrement_ref_count2(buf2_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_516) { node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_487) {
            node_517=(struct sNode*)come_increment_ref_count(parse_function_call(buf_478,info));
            __result297__ = gComeFunResultObject = __result_obj__ = node_517;
            if(node_517) { node_517 = come_decrement_ref_count2(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result297__;
            if(node_517) { node_517 = come_decrement_ref_count2(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_481&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__479)) {
            node_518=(struct sNode*)come_increment_ref_count(parse_function_call(buf_478,info));
            __result298__ = gComeFunResultObject = __result_obj__ = node_518;
            if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result298__;
            if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            info->new_=new__489;
            node_519=(struct sNode*)come_increment_ref_count(string_node_v21(buf_478,head_476,head_sline_477,info));
            info->new_=(_Bool)0;
            __result299__ = gComeFunResultObject = __result_obj__ = node_519;
            if(node_519) { node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result299__;
            if(node_519) { node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_478 = come_decrement_ref_count2(buf_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_520=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result300__ = gComeFunResultObject = __result_obj__ = node_520;
        if(node_520) { node_520 = come_decrement_ref_count2(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result300__;
        if(node_520) { node_520 = come_decrement_ref_count2(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result301__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj276;
struct sNode* __dec_obj277;
char* __dec_obj278;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj276=self->sname;
            /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj277=self->value;
            if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj278=self->value_source;
            /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result264__;
void* __right_value483 = (void*)0;
struct sReturnNode* result_475;
void* __right_value484 = (void*)0;
char* __dec_obj279;
void* __right_value485 = (void*)0;
struct sNode* __dec_obj280;
void* __right_value486 = (void*)0;
char* __dec_obj281;
struct sReturnNode* __result265__;
    if(    self==(void*)0) {
        __result264__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    result_475=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(    self!=((void*)0)) {
        result_475->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj279=result_475->sname;
        result_475->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj280=result_475->value;
        result_475->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj281=result_475->value_source;
        result_475->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        /*G*/ __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_475;
    /*i*/come_call_finalizer3(result_475,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj285;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj285=self->sname;
            /*G*/ __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result269__;
void* __right_value500 = (void*)0;
struct sFuncNode* result_495;
void* __right_value501 = (void*)0;
char* __dec_obj286;
struct sFuncNode* __result270__;
    if(    self==(void*)0) {
        __result269__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    result_495=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(    self!=((void*)0)) {
        result_495->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj286=result_495->sname;
        result_495->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result270__ = gComeFunResultObject = __result_obj__ = result_495;
    /*i*/come_call_finalizer3(result_495,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj287;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj287=self->sname;
            /*G*/ __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result272__;
void* __right_value505 = (void*)0;
struct sLineNode* result_496;
void* __right_value506 = (void*)0;
char* __dec_obj288;
struct sLineNode* __result273__;
    if(    self==(void*)0) {
        __result272__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_496=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(    self!=((void*)0)) {
        result_496->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj288=result_496->sname;
        result_496->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_496;
    /*i*/come_call_finalizer3(result_496,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj289;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj289=self->sname;
            /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result275__;
void* __right_value510 = (void*)0;
struct sSNameNode* result_497;
void* __right_value511 = (void*)0;
char* __dec_obj290;
struct sSNameNode* __result276__;
    if(    self==(void*)0) {
        __result275__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_497=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(    self!=((void*)0)) {
        result_497->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj290=result_497->sname;
        result_497->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_497;
    /*i*/come_call_finalizer3(result_497,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj291;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj291=self->sname;
            /*G*/ __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result278__;
void* __right_value515 = (void*)0;
struct sCallerFuncNode* result_498;
void* __right_value516 = (void*)0;
char* __dec_obj292;
struct sCallerFuncNode* __result279__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_498=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(    self!=((void*)0)) {
        result_498->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj292=result_498->sname;
        result_498->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_498;
    /*i*/come_call_finalizer3(result_498,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj293;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj293=self->sname;
            /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result281__;
void* __right_value520 = (void*)0;
struct sCallerLineNode* result_499;
void* __right_value521 = (void*)0;
char* __dec_obj294;
struct sCallerLineNode* __result282__;
    if(    self==(void*)0) {
        __result281__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_499=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(    self!=((void*)0)) {
        result_499->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj294=result_499->sname;
        result_499->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_499;
    /*i*/come_call_finalizer3(result_499,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj295;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj295=self->sname;
            /*G*/ __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result284__;
void* __right_value525 = (void*)0;
struct sCallerSNameNode* result_500;
void* __right_value526 = (void*)0;
char* __dec_obj296;
struct sCallerSNameNode* __result285__;
    if(    self==(void*)0) {
        __result284__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    result_500=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(    self!=((void*)0)) {
        result_500->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj296=result_500->sname;
        result_500->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result285__ = gComeFunResultObject = __result_obj__ = result_500;
    /*i*/come_call_finalizer3(result_500,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj297;
struct sType* __dec_obj298;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj297=self->sname;
            /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj298=self->type;
            come_call_finalizer3(__dec_obj298,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result287__;
void* __right_value531 = (void*)0;
struct sVarArgTypeName* result_504;
void* __right_value532 = (void*)0;
char* __dec_obj299;
void* __right_value533 = (void*)0;
struct sType* __dec_obj300;
struct sVarArgTypeName* __result288__;
    if(    self==(void*)0) {
        __result287__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    result_504=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(    self!=((void*)0)) {
        result_504->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_504->sname;
        result_504->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj300=result_504->type;
        result_504->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj300,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_504;
    /*i*/come_call_finalizer3(result_504,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_508;
unsigned int hash_509;
unsigned int it_510;
struct sType* __result291__;
struct sType* __result292__;
struct sType* __result293__;
struct sType* __result294__;
default_value_508 = (void*)0;
    memset(&default_value_508,0,sizeof(struct sType*));
    hash_509=string_get_hash_key(((char*)key))%self->size;
    it_510=hash_509;
    while((_Bool)1) {
        if(        self->item_existance[it_510]) {
            if(            string_equals(self->keys[it_510],key)) {
                __result291__ = gComeFunResultObject = __result_obj__ = self->items[it_510];
                /*i*/come_call_finalizer3(default_value_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result291__;
            }
            it_510++;
            if(            it_510>=self->size) {
                it_510=0;
            }
            else if(            it_510==hash_509) {
                __result292__ = gComeFunResultObject = __result_obj__ = default_value_508;
                /*i*/come_call_finalizer3(default_value_508,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result292__;
            }
        }
        else {
            __result293__ = gComeFunResultObject = __result_obj__ = default_value_508;
            /*i*/come_call_finalizer3(default_value_508,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result293__;
        }
    }
    __result294__ = gComeFunResultObject = __result_obj__ = default_value_508;
    /*i*/come_call_finalizer3(default_value_508,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value555 = (void*)0;
struct sNode* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value555=expression_node_v99(info)));
    if(__right_value555) { __right_value555 = come_decrement_ref_count2(__right_value555, ((struct sNode*)__right_value555)->finalize, ((struct sNode*)__right_value555)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sNode* __dec_obj302;
struct sNode* __result303__;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sNode* __dec_obj303;
struct sNode* __result304__;
struct sNode* __result305__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj302=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
        __result303__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj303=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
        __result304__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    __result305__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result305__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value560 = (void*)0;
struct sNode* node_521;
void* __right_value561 = (void*)0;
struct sNode* __dec_obj304;
struct sNode* __result306__;
    node_521=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj304=node_521;
    node_521=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_521),info));
    if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
    __result306__ = gComeFunResultObject = __result_obj__ = node_521;
    if(node_521) { node_521 = come_decrement_ref_count2(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result306__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_522;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct buffer* buf_523;
void* __right_value564 = (void*)0;
char* __dec_obj305;
int i_524;
void* __right_value565 = (void*)0;
char* __dec_obj306;
void* __right_value566 = (void*)0;
char* __dec_obj307;
int i_525;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
char* __result307__;
struct_name_522 = (void*)0;
    buf_523=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1819, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj305=struct_name_522;
        struct_name_522=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        /*G*/ __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_524=0;            i_524<obj_type->mOriginalTypeNamePointerNum;            i_524++            ){
                buffer_append_str(buf_523,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj306=struct_name_522;
        struct_name_522=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        /*G*/ __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj307=struct_name_522;
        struct_name_522=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_525=0;        i_525<obj_type->mPointerNum;        i_525++        ){
            buffer_append_str(buf_523,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_523,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_523,"pa");
    }
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value568=xsprintf("%s%s_%s",struct_name_522,((char*)(__right_value567=buffer_to_string(buf_523))),fun_name)));
    struct_name_522 = come_decrement_ref_count2(struct_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_523,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_526;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct buffer* buf_527;
void* __right_value571 = (void*)0;
char* __dec_obj308;
int i_528;
void* __right_value572 = (void*)0;
char* __dec_obj309;
void* __right_value573 = (void*)0;
char* __dec_obj310;
int i_529;
void* __right_value574 = (void*)0;
int len_531;
void* __right_value575 = (void*)0;
char* __result308__;
struct_name_526 = (void*)0;
    buf_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1854, "buffer"))));
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
    char none_method_name_530[charp_length(fun_name)+1];
    memset(&none_method_name_530, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_531=string_length(struct_name_526)+string_length(((char*)(__right_value574=buffer_to_string(buf_527))));
    __right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_530,fun_name+len_531+1,charp_length(fun_name)-len_531-1);
    none_method_name_530[charp_length(fun_name)-len_531-1]=0;
    __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value575=__builtin_string(none_method_name_530)));
    struct_name_526 = come_decrement_ref_count2(struct_name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_527,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value576 = (void*)0;
char* struct_name_532;
void* __right_value577 = (void*)0;
char* __result309__;
    struct_name_532=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value577=xsprintf("%s_%s",struct_name_532,fun_name)));
    struct_name_532 = come_decrement_ref_count2(struct_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result310__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result310__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_533;
char* p_534;
int sline_535;
_Bool err_flag_536;
void* __right_value580 = (void*)0;
char* label_537;
void* __right_value581 = (void*)0;
char* __dec_obj311;
char* __dec_obj312;
_Bool no_comma_538;
_Bool in_fun_param_539;
void* __right_value582 = (void*)0;
struct sNode* node_540;
void* __right_value583 = (void*)0;
struct sNode* __dec_obj313;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sNode* _inf_value14;
struct sLambdaCall* _inf_obj_value14;
void* __right_value592 = (void*)0;
struct sNode* __result313__;
struct sNode* __result314__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_533=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1918, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_534=info->p;
            sline_535=info->sline;
            err_flag_536=(_Bool)0;
            label_537=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj311=label_537;
                label_537=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_536=(_Bool)1;
            }
            if(            err_flag_536==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj312=label_537;
                label_537=((void*)0);
                /*G*/ __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_534;
                info->sline=sline_535;
            }
            no_comma_538=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_539=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_540=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj313=node_540;
            node_540=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_540),info));
            if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_538;
            info->in_fun_param=in_fun_param_539;
            list$1tuple2$2charphsNodephph_push_back(params_533,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1961, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_537),(struct sNode*)come_increment_ref_count(node_540))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_537 = come_decrement_ref_count2(label_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_540) { node_540 = come_decrement_ref_count2(node_540, ((struct sNode*)node_540)->finalize, ((struct sNode*)node_540)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_537 = come_decrement_ref_count2(label_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_540) { node_540 = come_decrement_ref_count2(node_540, ((struct sNode*)node_540)->finalize, ((struct sNode*)node_540)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1979, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sLambdaCall*)(__right_value587=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 1979, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_533,info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sLambdaCall_finalize;
        _inf_value14->clone=(void*)sLambdaCall_clone;
        _inf_value14->compile=(void*)sLambdaCall_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sLambdaCall_kind;
        __result313__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value592=_inf_value14));
        /*i*/come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value587,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value592) { __right_value592 = come_decrement_ref_count2(__right_value592, ((struct sNode*)__right_value592)->finalize, ((struct sNode*)__right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result313__;
        /*i*/come_call_finalizer3(params_533,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result314__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj314;
struct sNode* __dec_obj315;
struct list$1tuple2$2charphsNodephph* __dec_obj316;
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
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj316=self->params;
            come_call_finalizer3(__dec_obj316,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result311__;
void* __right_value588 = (void*)0;
struct sLambdaCall* result_541;
void* __right_value589 = (void*)0;
char* __dec_obj317;
void* __right_value590 = (void*)0;
struct sNode* __dec_obj318;
void* __right_value591 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj319;
struct sLambdaCall* __result312__;
    if(    self==(void*)0) {
        __result311__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    result_541=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(    self!=((void*)0)) {
        result_541->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj317=result_541->sname;
        result_541->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj318=result_541->node;
        result_541->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj319=result_541->params;
        result_541->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj319,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result312__ = gComeFunResultObject = __result_obj__ = result_541;
    /*i*/come_call_finalizer3(result_541,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

