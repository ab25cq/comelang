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
struct sStructNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
};
struct sGenericsStructNode
{
    int sline;
    char* sname;
};
struct sClassNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
    _Bool mOutput;
};
struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};
struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_union(char* type_name, struct sInfo* info);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_enum(char* type_name, struct sInfo* info);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);
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
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
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
void output_struct(struct sClass* klass, struct sInfo* info);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
void output_struct_header(struct sClass* klass, struct sInfo* info);
_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);
_Bool sGenericsStructNode_terminated(struct sGenericsStructNode* self);
char* sGenericsStructNode_kind(struct sGenericsStructNode* self);
_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClassp_begin(struct list$1sClassp* self);
static _Bool list$1sClassp_end(struct list$1sClassp* self);
static struct sClass* list$1sClassp_next(struct list$1sClassp* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static void sClassNode_finalize(struct sClassNode* self);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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











char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_66;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
char* __result65__;
void* __right_value118 = (void*)0;
char* __result66__;
    p_66=class_name;
    while(*p_66) {
        if(        *p_66==36) {
            __result65__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value117=string_substring(((char*)(__right_value116=__builtin_string(class_name))),0,p_66-class_name)));
            __right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result65__;
        }
        else {
            p_66++;
        }
    }
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=__builtin_string(class_name)));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct buffer* buf_67;
struct sClass* klass_68;
char* class_name_69;
int i_70;
struct sType* type_71;
void* __right_value121 = (void*)0;
char* type_name_87;
int i_88;
void* __right_value122 = (void*)0;
char* __result69__;
    buf_67=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "buffer"))));
    klass_68=generics_type->mClass;
    class_name_69=klass_68->mName;
    buffer_append_str(buf_67,class_name_69);
    if(    list$1sTypeph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_67,36);
        buffer_append_char(buf_67,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_70=0;        i_70<list$1sTypeph_length(generics_type->mGenericsTypes);        i_70++        ){
            type_71=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_70), "14struct.c", 33, 0));
            type_name_87=(char*)come_increment_ref_count(create_generics_name(type_71,info));
            buffer_append_str(buf_67,type_name_87);
            for(            i_88=0;            i_88<type_71->mPointerNum;            i_88++            ){
                buffer_append_char(buf_67,112);
            }
            if(            type_71->mHeap) {
                buffer_append_str(buf_67,"h");
            }
            type_name_87 = come_decrement_ref_count2(type_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result69__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value122=buffer_to_string(buf_67)));
    /*i*/come_call_finalizer3(buf_67,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_72;
int i_73;
struct sType* __result67__;
struct sType* default_value_74;
struct sType* __result68__;
default_value_74 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_72=self->head;
    i_73=0;
    while(it_72!=((void*)0)) {
        if(        position==i_73) {
            __result67__ = gComeFunResultObject = __result_obj__ = it_72->item;
            gComeFunResultObject = (void*)0;
            return __result67__;
        }
        it_72=it_72->next;
        i_73++;
    }
    memset(&default_value_74,0,sizeof(struct sType*));
    __result68__ = gComeFunResultObject = __result_obj__ = default_value_74;
    /*i*/come_call_finalizer3(default_value_74,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj15;
struct tuple1$1sTypeph* __dec_obj17;
struct tuple1$1sTypeph* __dec_obj19;
char* __dec_obj21;
struct list$1sTypeph* __dec_obj22;
struct list$1sNodeph* __dec_obj24;
struct list$1sTypeph* __dec_obj26;
struct list$1charph* __dec_obj27;
struct tuple1$1sTypeph* __dec_obj29;
struct sNode* __dec_obj31;
struct sNode* __dec_obj32;
char* __dec_obj33;
char* __dec_obj34;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj15=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj15,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj17=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj17,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj19=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj19,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj21=self->mGenericsName;
            /*G*/ __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj22=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj24=self->mArrayNum;
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj26=self->mParamTypes;
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj27=self->mParamNames;
            come_call_finalizer3(__dec_obj27,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj29=self->mResultType;
            come_call_finalizer3(__dec_obj29,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj31=self->mAlignas;
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj32=self->mSizeNum;
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj33=self->mOriginalTypeName;
            /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj34=self->mAsmName;
            /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_75;
struct list_item$1sTypeph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj23;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj23=self->item;
            come_call_finalizer3(__dec_obj23,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_77;
struct list_item$1sTypeph* prev_it_78;
    it_77=self->head;
    while(it_77!=((void*)0)) {
        prev_it_78=it_77;
        it_77=it_77->next;
        /*i*/come_call_finalizer3(prev_it_78,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_79;
struct list_item$1sNodeph* prev_it_80;
    it_79=self->head;
    while(it_79!=((void*)0)) {
        prev_it_80=it_79;
        it_79=it_79->next;
        /*i*/come_call_finalizer3(prev_it_80,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj25;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj25=self->item;
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_81;
struct list_item$1sNodeph* prev_it_82;
    it_81=self->head;
    while(it_81!=((void*)0)) {
        prev_it_82=it_81;
        it_81=it_81->next;
        /*i*/come_call_finalizer3(prev_it_82,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_83;
struct list_item$1charph* prev_it_84;
    it_83=self->head;
    while(it_83!=((void*)0)) {
        prev_it_84=it_83;
        it_83=it_83->next;
        /*i*/come_call_finalizer3(prev_it_84,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_85;
struct list_item$1charph* prev_it_86;
    it_85=self->head;
    while(it_85!=((void*)0)) {
        prev_it_86=it_85;
        it_85=it_85->next;
        /*i*/come_call_finalizer3(prev_it_86,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj30;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj30=self->v1;
            come_call_finalizer3(__dec_obj30,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct buffer* buf_89;
void* __right_value125 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_90;
struct tuple2$2charphsTypeph* it_93;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_96;
struct sType* type_97;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
    if(    !klass->mOutputed) {
        klass->mOutputed=(_Bool)1;
        buf_89=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "buffer"))));
        buffer_append_str(buf_89,((char*)(__right_value125=xsprintf("struct %s\n{\n",klass->mName))));
        __right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        o2_saved_90=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_93=list$1tuple2$2charphsTypephph_begin((o2_saved_90));        !list$1tuple2$2charphsTypephph_end((o2_saved_90));        it_93=list$1tuple2$2charphsTypephph_next((o2_saved_90))        ){
            multiple_assign_var1=it_93;
            name_96=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_97=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            type_97->mStatic=(_Bool)0;
            buffer_append_str(buf_89,"    ");
            buffer_append_str(buf_89,((char*)(__right_value126=make_define_var(type_97,name_96,(_Bool)0,info))));
            __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_89,";\n");
            name_96 = come_decrement_ref_count2(name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_97,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_90,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_89,"};\n");
        if(        info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname)) {
        }
        else {
            add_come_code_at_source_head(info,"%s",((char*)(__right_value127=buffer_to_string(buf_89))));
            __right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(buf_89,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_91;
struct tuple2$2charphsTypeph* __result70__;
struct tuple2$2charphsTypeph* __result71__;
struct tuple2$2charphsTypeph* result_92;
struct tuple2$2charphsTypeph* __result72__;
result_91 = (void*)0;
result_92 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_91,0,sizeof(struct tuple2$2charphsTypeph*));
        __result70__ = gComeFunResultObject = __result_obj__ = result_91;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    self->it=self->head;
    if(    self->it) {
        __result71__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result71__;
    }
    memset(&result_92,0,sizeof(struct tuple2$2charphsTypeph*));
    __result72__ = gComeFunResultObject = __result_obj__ = result_92;
    gComeFunResultObject = (void*)0;
    return __result72__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_94;
struct tuple2$2charphsTypeph* __result73__;
struct tuple2$2charphsTypeph* __result74__;
struct tuple2$2charphsTypeph* result_95;
struct tuple2$2charphsTypeph* __result75__;
result_94 = (void*)0;
result_95 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_94,0,sizeof(struct tuple2$2charphsTypeph*));
        __result73__ = gComeFunResultObject = __result_obj__ = result_94;
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result74__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    memset(&result_95,0,sizeof(struct tuple2$2charphsTypeph*));
    __result75__ = gComeFunResultObject = __result_obj__ = result_95;
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_98;
struct list_item$1tuple2$2charphsTypephph* prev_it_99;
    it_98=self->head;
    while(it_98!=((void*)0)) {
        prev_it_99=it_98;
        it_98=it_98->next;
        /*i*/come_call_finalizer3(prev_it_99,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj35;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj35=self->item;
            come_call_finalizer3(__dec_obj35,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void output_struct_header(struct sClass* klass, struct sInfo* info){
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* buf_100;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_101;
struct tuple2$2charphsTypeph* it_102;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_103;
struct sType* type_104;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
    if(    !klass->mOutputed2) {
        klass->mOutputed2=(_Bool)1;
        buf_100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 98, "buffer"))));
        if(        klass->mParentClassName) {
            buffer_append_str(buf_100,((char*)(__right_value130=xsprintf("struct %s extends %s\n{\n",klass->mName,klass->mParentClassName))));
            __right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(buf_100,((char*)(__right_value131=xsprintf("struct %s\n{\n",klass->mName))));
            __right_value131 = come_decrement_ref_count2(__right_value131, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        for(        o2_saved_101=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_102=list$1tuple2$2charphsTypephph_begin((o2_saved_101));        !list$1tuple2$2charphsTypephph_end((o2_saved_101));        it_102=list$1tuple2$2charphsTypephph_next((o2_saved_101))        ){
            multiple_assign_var2=it_102;
            name_103=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_104=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_104->mStatic=(_Bool)0;
            buffer_append_str(buf_100,"    ");
            buffer_append_str(buf_100,((char*)(__right_value132=make_define_var_no_solved(type_104,name_103,(_Bool)0,(_Bool)0,info))));
            __right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_100,";\n");
            name_103 = come_decrement_ref_count2(name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_104,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_101,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_100,"};\n");
        if(        info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname)) {
        }
        else {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value133=buffer_to_string(buf_100))));
            __right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(buf_100,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_105;
struct sClass* klass_106;
int i_107;
_Bool result_108;
    type2_105=type->mNoSolvedGenericsType->v1;
    if(    type2_105&&is_no_contained_generics_types(type2_105,info)) {
        return (_Bool)0;
    }
    klass_106=type->mClass;
    if(    klass_106->mGenerics) {
        return (_Bool)0;
    }
    if(    klass_106->mMethodGenerics) {
        return (_Bool)0;
    }
    for(    i_107=0;    i_107<list$1sTypeph_length(type->mGenericsTypes);    i_107++    ){
        result_108=is_no_contained_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_107), "14struct.c", 144, 1)),info);
        if(        !result_108) {
            return (_Bool)0;
        }
    }
    return (_Bool)1;
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_109;
struct sClass* klass_110;
int i_111;
_Bool result_112;
    type2_109=type->mNoSolvedGenericsType->v1;
    if(    type2_109&&is_contained_generics_types(type2_109,info)) {
        return (_Bool)1;
    }
    klass_110=type->mClass;
    if(    klass_110->mGenerics) {
        return (_Bool)1;
    }
    for(    i_111=0;    i_111<list$1sTypeph_length(type->mGenericsTypes);    i_111++    ){
        result_112=is_contained_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_111), "14struct.c", 168, 2)),info);
        if(        result_112) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_113;
struct sClass* klass_114;
int i_115;
_Bool result_116;
    type2_113=type->mNoSolvedGenericsType->v1;
    if(    type2_113&&is_contained_method_generics_types(type2_113,info)) {
        return (_Bool)1;
    }
    klass_114=type->mClass;
    if(    klass_114->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_115=0;    i_115<list$1sTypeph_length(type->mGenericsTypes);    i_115++    ){
        result_116=is_contained_method_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_115), "14struct.c", 192, 3)),info);
        if(        result_116) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value134 = (void*)0;
char* new_name_117;
void* __right_value170 = (void*)0;
struct sType* type2_120;
struct sClass* generics_class_139;
_Bool __result98__;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct sClass* new_class_145;
void* __right_value176 = (void*)0;
int i_187;
struct list$1tuple2$2charphsTypephph* o2_saved_188;
struct tuple2$2charphsTypeph* it_189;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_190;
struct sType* type_191;
void* __right_value177 = (void*)0;
struct sType* new_type_192;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct sType* __dec_obj77;
struct sClass* generics_class_198;
_Bool __result123__;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct sClass* new_class_199;
void* __right_value188 = (void*)0;
_Bool existance_method_generics_200;
int i_201;
struct list$1tuple2$2charphsTypephph* o2_saved_202;
struct tuple2$2charphsTypeph* it_203;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_204;
struct sType* type_205;
void* __right_value189 = (void*)0;
struct sType* new_type_206;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sType* __dec_obj78;
void* __right_value195 = (void*)0;
struct sType* __dec_obj79;
_Bool __result124__;
    new_name_117=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_117)) {
        type2_120=(struct sType*)come_increment_ref_count(sType_clone(type));
        generics_class_139=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        if(        generics_class_139==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result98__ = (_Bool)0;
            /*i*/come_call_finalizer3(type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
            new_name_117 = come_decrement_ref_count2(new_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result98__;
        }
        new_class_145=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 216, "sClass")),new_name_117,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_117)),(struct sClass*)come_increment_ref_count(new_class_145));
        i_187=0;
        for(        o2_saved_188=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_139->mFields)),it_189=list$1tuple2$2charphsTypephph_begin((o2_saved_188));        !list$1tuple2$2charphsTypephph_end((o2_saved_188));        it_189=list$1tuple2$2charphsTypephph_next((o2_saved_188))        ){
            multiple_assign_var3=it_189;
            name_190=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_191=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_192=(struct sType*)come_increment_ref_count(solve_generics(type_191,type2_120,info));
            list$1tuple2$2charphsTypephph_push_back(new_class_145->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 226, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(string_clone(name_190)),(struct sType*)come_increment_ref_count(sType_clone(new_type_192)))));
            name_190 = come_decrement_ref_count2(name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_191,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(new_type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_188,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj77=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_145;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_145,info);
        /*i*/come_call_finalizer3(type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(new_class_145,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    !map$2charphsClassph_find(info->classes,new_name_117)) {
        generics_class_198=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        if(        generics_class_198==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result123__ = (_Bool)0;
            new_name_117 = come_decrement_ref_count2(new_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result123__;
        }
        new_class_199=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 244, "sClass")),new_name_117,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_117)),(struct sClass*)come_increment_ref_count(new_class_199));
        existance_method_generics_200=(_Bool)0;
        i_201=0;
        for(        o2_saved_202=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_198->mFields)),it_203=list$1tuple2$2charphsTypephph_begin((o2_saved_202));        !list$1tuple2$2charphsTypephph_end((o2_saved_202));        it_203=list$1tuple2$2charphsTypephph_next((o2_saved_202))        ){
            multiple_assign_var4=it_203;
            name_204=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            type_205=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
            new_type_206=(struct sType*)come_increment_ref_count(solve_generics(type_205,generics_type,info));
            if(            is_contained_method_generics_types(new_type_206,info)) {
                existance_method_generics_200=(_Bool)1;
            }
            list$1tuple2$2charphsTypephph_push_back(new_class_199->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 259, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(string_clone(name_204)),(struct sType*)come_increment_ref_count(sType_clone(new_type_206)))));
            name_204 = come_decrement_ref_count2(name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_205,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(new_type_206,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_202,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj78=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_199;
        list$1sTypeph_reset(type->mGenericsTypes);
        if(        !existance_method_generics_200) {
            output_struct(new_class_199,info);
        }
        /*i*/come_call_finalizer3(new_class_199,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(        type->mNoSolvedGenericsType->v1==((void*)0)) {
            __dec_obj79=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
            come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        }
        type->mClass=map$2charphsClassphp_operator_load_element(info->classes,new_name_117);
        list$1sTypeph_reset(type->mGenericsTypes);
    }
    __result124__ = (_Bool)1;
    new_name_117 = come_decrement_ref_count2(new_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result124__;
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
unsigned int hash_118;
int it_119;
    hash_118=string_get_hash_key(((char*)key))%self->size;
    it_119=hash_118;
    while((_Bool)1) {
        if(        self->item_existance[it_119]) {
            if(            string_equals(self->keys[it_119],key)) {
                return (_Bool)1;
            }
            it_119++;
            if(            it_119>=self->size) {
                it_119=0;
            }
            else if(            it_119==hash_118) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result76__;
void* __right_value135 = (void*)0;
struct sType* result_121;
void* __right_value138 = (void*)0;
struct tuple1$1sTypeph* __dec_obj40;
void* __right_value139 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value140 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value141 = (void*)0;
char* __dec_obj43;
void* __right_value148 = (void*)0;
struct list$1sTypeph* __dec_obj47;
void* __right_value156 = (void*)0;
struct list$1sNodeph* __dec_obj51;
void* __right_value157 = (void*)0;
struct list$1sTypeph* __dec_obj52;
void* __right_value164 = (void*)0;
struct list$1charph* __dec_obj56;
void* __right_value165 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value166 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value167 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value168 = (void*)0;
char* __dec_obj60;
void* __right_value169 = (void*)0;
char* __dec_obj61;
struct sType* __result93__;
    if(    self==(void*)0) {
        __result76__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_121=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_121->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj40=result_121->mNoSolvedGenericsType;
        result_121->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj40,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj41=result_121->mOriginalLoadVarType;
        result_121->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj42=result_121->mNoExceptionType;
        result_121->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj43=result_121->mGenericsName;
        result_121->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj47=result_121->mGenericsTypes;
        result_121->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj51=result_121->mArrayNum;
        result_121->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_121->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj52=result_121->mParamTypes;
        result_121->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj52,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj56=result_121->mParamNames;
        result_121->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj56,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj57=result_121->mResultType;
        result_121->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_121->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj58=result_121->mAlignas;
        result_121->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_121->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_121->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_121->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_121->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_121->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_121->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_121->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_121->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_121->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_121->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_121->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_121->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_121->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_121->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_121->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_121->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_121->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_121->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_121->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_121->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_121->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_121->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_121->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_121->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_121->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_121->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_121->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj59=result_121->mSizeNum;
        result_121->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_121->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_121->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_121->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj60=result_121->mOriginalTypeName;
        result_121->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_121->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_121->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_121->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_121->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_121->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_121->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_121->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_121->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_121->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj61=result_121->mAsmName;
        result_121->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_121->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_121->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_121->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_121->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_121->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_121->mOriginIsArray=self->mOriginIsArray;
    }
    __result93__ = gComeFunResultObject = __result_obj__ = result_121;
    /*i*/come_call_finalizer3(result_121,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result77__;
void* __right_value136 = (void*)0;
struct tuple1$1sTypeph* result_122;
void* __right_value137 = (void*)0;
struct sType* __dec_obj38;
struct tuple1$1sTypeph* __result78__;
    if(    self==(void*)0) {
        __result77__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    result_122=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj38=result_122->v1;
        result_122->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result78__ = gComeFunResultObject = __result_obj__ = result_122;
    /*i*/come_call_finalizer3(result_122,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj39;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj39=self->v1;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result79__;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct list$1sTypeph* result_123;
struct list_item$1sTypeph* it_124;
void* __right_value147 = (void*)0;
struct list$1sTypeph* __result82__;
    if(    self==((void*)0)) {
        __result79__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_123=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 139, "list$1sTypeph"))));
    it_124=self->head;
    while(it_124!=((void*)0)) {
        list$1sTypeph_add(result_123,(struct sType*)come_increment_ref_count(sType_clone(it_124->item)));
        it_124=it_124->next;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = result_123;
    /*i*/come_call_finalizer3(result_123,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result80__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
struct list_item$1sTypeph* litem_125;
struct sType* __dec_obj44;
void* __right_value145 = (void*)0;
struct list_item$1sTypeph* litem_126;
struct sType* __dec_obj45;
void* __right_value146 = (void*)0;
struct list_item$1sTypeph* litem_127;
struct sType* __dec_obj46;
struct list$1sTypeph* __result81__;
    if(    self->len==0) {
        litem_125=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value144=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 153, "list_item$1sTypeph"))));
        litem_125->prev=((void*)0);
        litem_125->next=((void*)0);
        __dec_obj44=litem_125->item;
        litem_125->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_125;
        self->head=litem_125;
    }
    else if(    self->len==1) {
        litem_126=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value145=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 163, "list_item$1sTypeph"))));
        litem_126->prev=self->head;
        litem_126->next=((void*)0);
        __dec_obj45=litem_126->item;
        litem_126->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_126;
        self->head->next=litem_126;
    }
    else {
        litem_127=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value146=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 173, "list_item$1sTypeph"))));
        litem_127->prev=self->tail;
        litem_127->next=((void*)0);
        __dec_obj46=litem_127->item;
        litem_127->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_127;
        self->tail=litem_127;
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result83__;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1sNodeph* result_128;
struct list_item$1sNodeph* it_129;
void* __right_value155 = (void*)0;
struct list$1sNodeph* __result88__;
    if(    self==((void*)0)) {
        __result83__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result83__;
    }
    result_128=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 139, "list$1sNodeph"))));
    it_129=self->head;
    while(it_129!=((void*)0)) {
        list$1sNodeph_add(result_128,(struct sNode*)come_increment_ref_count(sNode_clone(it_129->item)));
        it_129=it_129->next;
    }
    __result88__ = gComeFunResultObject = __result_obj__ = result_128;
    /*i*/come_call_finalizer3(result_128,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
struct list_item$1sNodeph* litem_130;
struct sNode* __dec_obj48;
void* __right_value152 = (void*)0;
struct list_item$1sNodeph* litem_131;
struct sNode* __dec_obj49;
void* __right_value153 = (void*)0;
struct list_item$1sNodeph* litem_132;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result85__;
    if(    self->len==0) {
        litem_130=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value151=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 153, "list_item$1sNodeph"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        __dec_obj48=litem_130->item;
        litem_130->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value152=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 163, "list_item$1sNodeph"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        __dec_obj49=litem_131->item;
        litem_131->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value153=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 173, "list_item$1sNodeph"))));
        litem_132->prev=self->tail;
        litem_132->next=((void*)0);
        __dec_obj50=litem_132->item;
        litem_132->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_132;
        self->tail=litem_132;
    }
    self->len++;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result86__;
void* __right_value154 = (void*)0;
struct sNode* result_133;
struct sNode* __result87__;
    if(    self==(void*)0) {
        __result86__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    result_133=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_133->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_133->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_133->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_133->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_133->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_133->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_133->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_133->kind=self->kind;
    }
    __result87__ = gComeFunResultObject = __result_obj__ = result_133;
    if(result_133) { result_133 = come_decrement_ref_count2(result_133, ((struct sNode*)result_133)->finalize, ((struct sNode*)result_133)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result89__;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct list$1charph* result_134;
struct list_item$1charph* it_135;
void* __right_value163 = (void*)0;
struct list$1charph* __result92__;
    if(    self==((void*)0)) {
        __result89__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    result_134=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 139, "list$1charph"))));
    it_135=self->head;
    while(it_135!=((void*)0)) {
        list$1charph_add(result_134,(char*)come_increment_ref_count(string_clone(it_135->item)));
        it_135=it_135->next;
    }
    __result92__ = gComeFunResultObject = __result_obj__ = result_134;
    /*i*/come_call_finalizer3(result_134,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value160 = (void*)0;
struct list_item$1charph* litem_136;
char* __dec_obj53;
void* __right_value161 = (void*)0;
struct list_item$1charph* litem_137;
char* __dec_obj54;
void* __right_value162 = (void*)0;
struct list_item$1charph* litem_138;
char* __dec_obj55;
struct list$1charph* __result91__;
    if(    self->len==0) {
        litem_136=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value160=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 153, "list_item$1charph"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        __dec_obj53=litem_136->item;
        litem_136->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 163, "list_item$1charph"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        __dec_obj54=litem_137->item;
        litem_137->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value162=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 173, "list_item$1charph"))));
        litem_138->prev=self->tail;
        litem_138->next=((void*)0);
        __dec_obj55=litem_138->item;
        litem_138->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_138;
        self->tail=litem_138;
    }
    self->len++;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_140;
unsigned int hash_141;
unsigned int it_142;
struct sClass* __result94__;
struct sClass* __result95__;
struct sClass* __result96__;
struct sClass* __result97__;
default_value_140 = (void*)0;
    memset(&default_value_140,0,sizeof(struct sClass*));
    hash_141=string_get_hash_key(((char*)key))%self->size;
    it_142=hash_141;
    while((_Bool)1) {
        if(        self->item_existance[it_142]) {
            if(            string_equals(self->keys[it_142],key)) {
                __result94__ = gComeFunResultObject = __result_obj__ = self->items[it_142];
                /*i*/come_call_finalizer3(default_value_140,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result94__;
            }
            it_142++;
            if(            it_142>=self->size) {
                it_142=0;
            }
            else if(            it_142==hash_141) {
                __result95__ = gComeFunResultObject = __result_obj__ = default_value_140;
                /*i*/come_call_finalizer3(default_value_140,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result95__;
            }
        }
        else {
            __result96__ = gComeFunResultObject = __result_obj__ = default_value_140;
            /*i*/come_call_finalizer3(default_value_140,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result96__;
        }
    }
    __result97__ = gComeFunResultObject = __result_obj__ = default_value_140;
    /*i*/come_call_finalizer3(default_value_140,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj62;
struct list$1tuple2$2charphsTypephph* __dec_obj63;
char* __dec_obj64;
char* __dec_obj65;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj62=self->mName;
            /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj63=self->mFields;
            come_call_finalizer3(__dec_obj63,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj64=self->mDeclareSName;
            /*G*/ __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj65=self->mParentClassName;
            /*G*/ __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_143;
struct list_item$1tuple2$2charphsTypephph* prev_it_144;
    it_143=self->head;
    while(it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*i*/come_call_finalizer3(prev_it_144,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_163;
unsigned int it_164;
_Bool same_key_exist_181;
char* it2_184;
struct map$2charphsClassph* __result119__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_163=string_get_hash_key(key)%self->size;
    it_164=hash_163;
    while((_Bool)1) {
        if(        self->item_existance[it_164]) {
            if(            string_equals(self->keys[it_164],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_164]);
                    self->keys[it_164] = come_decrement_ref_count2(self->keys[it_164], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_164]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_164]);
                    self->keys[it_164]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_164],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_164]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_164]=item;
                }
                break;
            }
            it_164++;
            if(            it_164>=self->size) {
                it_164=0;
            }
            else if(            it_164==hash_163) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_164]=(_Bool)1;
            if(            1) {
                self->keys[it_164]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_164]=key;
            }
            if(            1) {
                self->items[it_164]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_164]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_181=(_Bool)0;
    for(    it2_184=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_184=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_184,key)) {
            same_key_exist_181=(_Bool)1;
        }
    }
    if(    !same_key_exist_181) {
        list$1charp_push_back(self->key_list,key);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_146;
void* __right_value173 = (void*)0;
char** keys_147;
void* __right_value174 = (void*)0;
struct sClass** items_148;
void* __right_value175 = (void*)0;
_Bool* item_existance_149;
int len_150;
char* it_153;
struct sClass* default_value_156;
struct sClass* it2_157;
unsigned int hash_160;
int n_161;
struct sClass* default_value_162;
default_value_156 = (void*)0;
default_value_162 = (void*)0;
    size_146=self->size*10;
    keys_147=(char**)come_increment_ref_count(((char**)(__right_value173=(char**)come_calloc(1, sizeof(char*)*(1*(size_146)), "./comelang.h", 1651, "char*%"))));
    items_148=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value174=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_146)), "./comelang.h", 1652, "sClass*%"))));
    item_existance_149=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value175=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_146)), "./comelang.h", 1653, "bool"))));
    len_150=0;
    for(    it_153=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_153=map$2charphsClassph_next(self)    ){
        memset(&default_value_156,0,sizeof(struct sClass*));
        it2_157=map$2charphsClassph_at(self,it_153,default_value_156);
        hash_160=string_get_hash_key(it_153)%size_146;
        n_161=hash_160;
        while((_Bool)1) {
            if(            item_existance_149[n_161]) {
                n_161++;
                if(                n_161>=size_146) {
                    n_161=0;
                }
                else if(                n_161==hash_160) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_149[n_161]=(_Bool)1;
                keys_147[n_161]=it_153;
                items_148[n_161]=map$2charphsClassph_at(self,it_153,default_value_162);
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
char* __result99__;
char* __result100__;
char* result_152;
char* __result101__;
result_151 = (void*)0;
result_152 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_151,0,sizeof(char*));
        __result99__ = gComeFunResultObject = __result_obj__ = result_151;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result100__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    memset(&result_152,0,sizeof(char*));
    __result101__ = gComeFunResultObject = __result_obj__ = result_152;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_154;
char* __result102__;
char* __result103__;
char* result_155;
char* __result104__;
result_154 = (void*)0;
result_155 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_154,0,sizeof(char*));
        __result102__ = gComeFunResultObject = __result_obj__ = result_154;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result103__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    memset(&result_155,0,sizeof(char*));
    __result104__ = gComeFunResultObject = __result_obj__ = result_155;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_158;
unsigned int it_159;
struct sClass* __result105__;
struct sClass* __result106__;
struct sClass* __result107__;
struct sClass* __result108__;
    hash_158=string_get_hash_key(((char*)key))%self->size;
    it_159=hash_158;
    while((_Bool)1) {
        if(        self->item_existance[it_159]) {
            if(            string_equals(self->keys[it_159],key)) {
                __result105__ = gComeFunResultObject = __result_obj__ = self->items[it_159];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result105__;
            }
            it_159++;
            if(            it_159>=self->size) {
                it_159=0;
            }
            else if(            it_159==hash_158) {
                __result106__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result106__;
            }
        }
        else {
            __result107__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result107__;
        }
    }
    __result108__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_165;
struct list_item$1charp* it_166;
struct list$1charp* __result112__;
    it2_165=0;
    it_166=self->head;
    while(it_166!=((void*)0)) {
        if(        charp_equals(it_166->item,item)) {
            list$1charp_delete(self,it2_165,it2_165+1);
            break;
        }
        it2_165++;
        it_166=it_166->next;
    }
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_167;
struct list$1charp* __result109__;
struct list_item$1charp* it_170;
int i_171;
struct list_item$1charp* prev_it_172;
struct list_item$1charp* it_173;
int i_174;
struct list_item$1charp* prev_it_175;
struct list_item$1charp* it_176;
struct list_item$1charp* head_prev_it_177;
struct list_item$1charp* tail_it_178;
int i_179;
struct list_item$1charp* prev_it_180;
struct list$1charp* __result111__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_167=tail;
        tail=head;
        head=tmp_167;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result109__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_170=self->head;
        i_171=0;
        while(it_170!=((void*)0)) {
            if(            i_171<tail) {
                prev_it_172=it_170;
                it_170=it_170->next;
                i_171++;
                /*i*/come_call_finalizer3(prev_it_172,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_171==tail) {
                self->head=it_170;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_170=it_170->next;
                i_171++;
            }
        }
    }
    else if(    tail==self->len) {
        it_173=self->head;
        i_174=0;
        while(it_173!=((void*)0)) {
            if(            i_174==head) {
                self->tail=it_173->prev;
                self->tail->next=((void*)0);
            }
            if(            i_174>=head) {
                prev_it_175=it_173;
                it_173=it_173->next;
                i_174++;
                /*i*/come_call_finalizer3(prev_it_175,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_173=it_173->next;
                i_174++;
            }
        }
    }
    else {
        it_176=self->head;
        head_prev_it_177=((void*)0);
        tail_it_178=((void*)0);
        i_179=0;
        while(it_176!=((void*)0)) {
            if(            i_179==head) {
                head_prev_it_177=it_176->prev;
            }
            if(            i_179==tail) {
                tail_it_178=it_176;
            }
            if(            i_179>=head&&i_179<tail) {
                prev_it_180=it_176;
                it_176=it_176->next;
                i_179++;
                /*i*/come_call_finalizer3(prev_it_180,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_176=it_176->next;
                i_179++;
            }
        }
        if(        head_prev_it_177!=((void*)0)) {
            head_prev_it_177->next=tail_it_178;
        }
        if(        tail_it_178!=((void*)0)) {
            tail_it_178->prev=head_prev_it_177;
        }
    }
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_168;
struct list_item$1charp* prev_it_169;
struct list$1charp* __result110__;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        /*i*/come_call_finalizer3(prev_it_169,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_182;
char* __result113__;
char* __result114__;
char* result_183;
char* __result115__;
result_182 = (void*)0;
result_183 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_182,0,sizeof(char*));
        __result113__ = gComeFunResultObject = __result_obj__ = result_182;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    self->it=self->head;
    if(    self->it) {
        __result114__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    memset(&result_183,0,sizeof(char*));
    __result115__ = gComeFunResultObject = __result_obj__ = result_183;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_185;
char* __result116__;
char* __result117__;
char* result_186;
char* __result118__;
result_185 = (void*)0;
result_186 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_185,0,sizeof(char*));
        __result116__ = gComeFunResultObject = __result_obj__ = result_185;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result117__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result117__;
    }
    memset(&result_186,0,sizeof(char*));
    __result118__ = gComeFunResultObject = __result_obj__ = result_186;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value178 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_193;
struct tuple2$2charphsTypeph* __dec_obj66;
void* __right_value179 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_194;
struct tuple2$2charphsTypeph* __dec_obj69;
void* __right_value180 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_195;
struct tuple2$2charphsTypeph* __dec_obj72;
struct list$1tuple2$2charphsTypephph* __result120__;
    if(    self->len==0) {
        litem_193=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value178=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 223, "list_item$1tuple2$2charphsTypephph"))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        __dec_obj66=litem_193->item;
        litem_193->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1) {
        litem_194=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value179=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 233, "list_item$1tuple2$2charphsTypephph"))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        __dec_obj69=litem_194->item;
        litem_194->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value180=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 243, "list_item$1tuple2$2charphsTypephph"))));
        litem_195->prev=self->tail;
        litem_195->next=((void*)0);
        __dec_obj72=litem_195->item;
        litem_195->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_195;
        self->tail=litem_195;
    }
    self->len++;
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj75;
struct sType* __dec_obj76;
struct tuple2$2charphsTypeph* __result121__;
    __dec_obj75=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj76=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_196;
struct list_item$1sTypeph* prev_it_197;
struct list$1sTypeph* __result122__;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        /*i*/come_call_finalizer3(prev_it_197,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result122__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
char* __dec_obj81;
void* __right_value212 = (void*)0;
struct sClass* __dec_obj99;
struct sStructNode* __result133__;
    ((struct sNodeBase*)(__right_value196=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value196,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj81=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    /*G*/ __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj99=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj99,sClass_finalize, 0, 0, 0, 0, (void*)0);
    self->mOutput=output;
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value213 = (void*)0;
char* __result134__;
    __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value213=__builtin_string("sStructNode")));
    __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __right_value214 = (void*)0;
struct sClass* klass_214;
void* __right_value215 = (void*)0;
char* name_215;
void* __right_value216 = (void*)0;
struct sClass* klass2_216;
void* __right_value217 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj103;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sType* type_220;
void* __right_value223 = (void*)0;
_Bool __result150__;
    klass_214=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
    name_215=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    map$2charphsClassph_at(info->classes,name_215,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_215),(struct sClass*)come_increment_ref_count(sClass_clone(klass_214)));
    }
    else if(    list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_215,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_214->mFields)>0) {
        klass2_216=map$2charphsClassph_at(info->classes,name_215,((void*)0));
        __dec_obj103=klass2_216->mFields;
        klass2_216->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(klass_214->mFields));
        come_call_finalizer3(__dec_obj103,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    map$2charphsTypephp_operator_load_element(info->types,name_215)!=((void*)0)&&((struct sType*)come_null_check(map$2charphsTypephp_operator_load_element(info->types,name_215), "14struct.c", 318, 4))->mTypedef) {
    }
    else {
        type_220=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 321, "sType")),name_215,(_Bool)0,info));
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_215),(struct sType*)come_increment_ref_count(sType_clone(type_220)));
        /*i*/come_call_finalizer3(type_220,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self->mOutput) {
        output_struct(klass_214,info);
    }
    __result150__ = (_Bool)1;
    /*i*/come_call_finalizer3(klass_214,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_215 = come_decrement_ref_count2(name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result150__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj80;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj80=self->sname;
            /*G*/ __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result125__;
void* __right_value198 = (void*)0;
struct sClass* result_207;
void* __right_value199 = (void*)0;
char* __dec_obj82;
void* __right_value209 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj96;
void* __right_value210 = (void*)0;
char* __dec_obj97;
void* __right_value211 = (void*)0;
char* __dec_obj98;
struct sClass* __result132__;
    if(    self==(void*)0) {
        __result125__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    result_207=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"));
    if(    self!=((void*)0)) {
        result_207->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_207->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_207->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_207->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_207->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_207->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_207->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_207->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj82=result_207->mName;
        result_207->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_207->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_207->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj96=result_207->mFields;
        result_207->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(self->mFields));
        come_call_finalizer3(__dec_obj96,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_207->mOutputed=self->mOutputed;
    }
    if(    self!=((void*)0)) {
        result_207->mOutputed2=self->mOutputed2;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj97=result_207->mDeclareSName;
        result_207->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_207->mNobodyStruct=self->mNobodyStruct;
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj98=result_207->mParentClassName;
        result_207->mParentClassName=(char*)come_increment_ref_count(string_clone(self->mParentClassName));
        /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result132__ = gComeFunResultObject = __result_obj__ = result_207;
    /*i*/come_call_finalizer3(result_207,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result126__;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1tuple2$2charphsTypephph* result_208;
struct list_item$1tuple2$2charphsTypephph* it_209;
void* __right_value208 = (void*)0;
struct list$1tuple2$2charphsTypephph* __result131__;
    if(    self==((void*)0)) {
        __result126__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    result_208=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang.h", 139, "list$1tuple2$2charphsTypephph"))));
    it_209=self->head;
    while(it_209!=((void*)0)) {
        list$1tuple2$2charphsTypephph_add(result_208,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_209->item)));
        it_209=it_209->next;
    }
    __result131__ = gComeFunResultObject = __result_obj__ = result_208;
    /*i*/come_call_finalizer3(result_208,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result127__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value202 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_210;
struct tuple2$2charphsTypeph* __dec_obj83;
void* __right_value203 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_211;
struct tuple2$2charphsTypeph* __dec_obj86;
void* __right_value204 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_212;
struct tuple2$2charphsTypeph* __dec_obj89;
struct list$1tuple2$2charphsTypephph* __result128__;
    if(    self->len==0) {
        litem_210=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value202=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 153, "list_item$1tuple2$2charphsTypephph"))));
        litem_210->prev=((void*)0);
        litem_210->next=((void*)0);
        __dec_obj83=litem_210->item;
        litem_210->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_210;
        self->head=litem_210;
    }
    else if(    self->len==1) {
        litem_211=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value203=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 163, "list_item$1tuple2$2charphsTypephph"))));
        litem_211->prev=self->head;
        litem_211->next=((void*)0);
        __dec_obj86=litem_211->item;
        litem_211->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_211;
        self->head->next=litem_211;
    }
    else {
        litem_212=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value204=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 173, "list_item$1tuple2$2charphsTypephph"))));
        litem_212->prev=self->tail;
        litem_212->next=((void*)0);
        __dec_obj89=litem_212->item;
        litem_212->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_212;
        self->tail=litem_212;
    }
    self->len++;
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj90;
struct sType* __dec_obj91;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj90=self->v1;
            /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj91=self->v2;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result129__;
void* __right_value205 = (void*)0;
struct tuple2$2charphsTypeph* result_213;
void* __right_value206 = (void*)0;
char* __dec_obj92;
void* __right_value207 = (void*)0;
struct sType* __dec_obj93;
struct tuple2$2charphsTypeph* __result130__;
    if(    self==(void*)0) {
        __result129__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    result_213=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj92=result_213->v1;
        result_213->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj93=result_213->v2;
        result_213->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result130__ = gComeFunResultObject = __result_obj__ = result_213;
    /*i*/come_call_finalizer3(result_213,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj94;
struct sType* __dec_obj95;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj94=self->v1;
            /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj95=self->v2;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_217;
unsigned int hash_218;
unsigned int it_219;
struct sType* __result135__;
struct sType* __result136__;
struct sType* __result137__;
struct sType* __result138__;
default_value_217 = (void*)0;
    memset(&default_value_217,0,sizeof(struct sType*));
    hash_218=string_get_hash_key(((char*)key))%self->size;
    it_219=hash_218;
    while((_Bool)1) {
        if(        self->item_existance[it_219]) {
            if(            string_equals(self->keys[it_219],key)) {
                __result135__ = gComeFunResultObject = __result_obj__ = self->items[it_219];
                /*i*/come_call_finalizer3(default_value_217,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result135__;
            }
            it_219++;
            if(            it_219>=self->size) {
                it_219=0;
            }
            else if(            it_219==hash_218) {
                __result136__ = gComeFunResultObject = __result_obj__ = default_value_217;
                /*i*/come_call_finalizer3(default_value_217,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result136__;
            }
        }
        else {
            __result137__ = gComeFunResultObject = __result_obj__ = default_value_217;
            /*i*/come_call_finalizer3(default_value_217,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result137__;
        }
    }
    __result138__ = gComeFunResultObject = __result_obj__ = default_value_217;
    /*i*/come_call_finalizer3(default_value_217,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_238;
unsigned int it_239;
_Bool same_key_exist_240;
char* it2_241;
struct map$2charphsTypeph* __result149__;
    if(    self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_238=string_get_hash_key(key)%self->size;
    it_239=hash_238;
    while((_Bool)1) {
        if(        self->item_existance[it_239]) {
            if(            string_equals(self->keys[it_239],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_239]);
                    self->keys[it_239] = come_decrement_ref_count2(self->keys[it_239], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_239]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_239]);
                    self->keys[it_239]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_239],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_239]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_239]=item;
                }
                break;
            }
            it_239++;
            if(            it_239>=self->size) {
                it_239=0;
            }
            else if(            it_239==hash_238) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_239]=(_Bool)1;
            if(            1) {
                self->keys[it_239]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_239]=key;
            }
            if(            1) {
                self->items[it_239]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_239]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_240=(_Bool)0;
    for(    it2_241=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_241=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_241,key)) {
            same_key_exist_240=(_Bool)1;
        }
    }
    if(    !same_key_exist_240) {
        list$1charp_push_back(self->key_list,key);
    }
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_221;
void* __right_value220 = (void*)0;
char** keys_222;
void* __right_value221 = (void*)0;
struct sType** items_223;
void* __right_value222 = (void*)0;
_Bool* item_existance_224;
int len_225;
char* it_228;
struct sType* default_value_231;
struct sType* it2_232;
unsigned int hash_235;
int n_236;
struct sType* default_value_237;
default_value_231 = (void*)0;
default_value_237 = (void*)0;
    size_221=self->size*10;
    keys_222=(char**)come_increment_ref_count(((char**)(__right_value220=(char**)come_calloc(1, sizeof(char*)*(1*(size_221)), "./comelang.h", 1651, "char*%"))));
    items_223=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value221=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_221)), "./comelang.h", 1652, "sType*%"))));
    item_existance_224=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value222=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_221)), "./comelang.h", 1653, "bool"))));
    len_225=0;
    for(    it_228=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_228=map$2charphsTypeph_next(self)    ){
        memset(&default_value_231,0,sizeof(struct sType*));
        it2_232=map$2charphsTypeph_at(self,it_228,default_value_231);
        hash_235=string_get_hash_key(it_228)%size_221;
        n_236=hash_235;
        while((_Bool)1) {
            if(            item_existance_224[n_236]) {
                n_236++;
                if(                n_236>=size_221) {
                    n_236=0;
                }
                else if(                n_236==hash_235) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_224[n_236]=(_Bool)1;
                keys_222[n_236]=it_228;
                items_223[n_236]=map$2charphsTypeph_at(self,it_228,default_value_237);
                len_225++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_222;
    self->items=items_223;
    self->item_existance=item_existance_224;
    self->size=size_221;
    self->len=len_225;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_226;
char* __result139__;
char* __result140__;
char* result_227;
char* __result141__;
result_226 = (void*)0;
result_227 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_226,0,sizeof(char*));
        __result139__ = gComeFunResultObject = __result_obj__ = result_226;
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result140__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    memset(&result_227,0,sizeof(char*));
    __result141__ = gComeFunResultObject = __result_obj__ = result_227;
    gComeFunResultObject = (void*)0;
    return __result141__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_229;
char* __result142__;
char* __result143__;
char* result_230;
char* __result144__;
result_229 = (void*)0;
result_230 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_229,0,sizeof(char*));
        __result142__ = gComeFunResultObject = __result_obj__ = result_229;
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result143__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    memset(&result_230,0,sizeof(char*));
    __result144__ = gComeFunResultObject = __result_obj__ = result_230;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_233;
unsigned int it_234;
struct sType* __result145__;
struct sType* __result146__;
struct sType* __result147__;
struct sType* __result148__;
    hash_233=string_get_hash_key(((char*)key))%self->size;
    it_234=hash_233;
    while((_Bool)1) {
        if(        self->item_existance[it_234]) {
            if(            string_equals(self->keys[it_234],key)) {
                __result145__ = gComeFunResultObject = __result_obj__ = self->items[it_234];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result145__;
            }
            it_234++;
            if(            it_234>=self->size) {
                it_234=0;
            }
            else if(            it_234==hash_233) {
                __result146__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result146__;
            }
        }
        else {
            __result147__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result147__;
        }
    }
    __result148__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
char* __dec_obj104;
void* __right_value226 = (void*)0;
struct sClass* __dec_obj105;
struct sStructNobodyNode* __result151__;
    ((struct sNodeBase*)(__right_value224=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value224,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj104=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj105=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj105,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value227 = (void*)0;
char* __result152__;
    __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string("sStructNobodyNode")));
    __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value228 = (void*)0;
char* name_242;
struct sClass* klass_243;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sType* type_244;
void* __right_value232 = (void*)0;
_Bool __result153__;
    name_242=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_243=self->mClass;
    if(    map$2charphsClassph_at(info->classes,name_242,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_242),(struct sClass*)come_increment_ref_count(sClass_clone(klass_243)));
    }
    type_244=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 362, "sType")),name_242,(_Bool)0,info));
    if(    map$2charphsTypephp_operator_load_element(info->types,name_242)!=((void*)0)&&((struct sType*)come_null_check(map$2charphsTypephp_operator_load_element(info->types,name_242), "14struct.c", 364, 5))->mTypedef) {
    }
    else {
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_242),(struct sType*)come_increment_ref_count(sType_clone(type_244)));
    }
    if(    info->output_header_file&&string_operator_not_equals(klass_243->mDeclareSName,info->base_sname)) {
    }
    else {
        add_come_code_at_source_head(info,"struct %s;\n",name_242);
    }
    __result153__ = (_Bool)1;
    name_242 = come_decrement_ref_count2(name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_244,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value233 = (void*)0;
struct sGenericsStructNode* __result154__;
    ((struct sNodeBase*)(__right_value233=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value233,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result154__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

_Bool sGenericsStructNode_terminated(struct sGenericsStructNode* self){
    return (_Bool)1;
}

char* sGenericsStructNode_kind(struct sGenericsStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value234 = (void*)0;
char* __result155__;
    __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value234=__builtin_string("sGenericsStructNode")));
    __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
    return (_Bool)1;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
char* __dec_obj110;
void* __right_value237 = (void*)0;
struct sClass* __dec_obj111;
struct list$1sNodeph* __dec_obj112;
struct sClassNode* __result156__;
    ((struct sNodeBase*)(__right_value235=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value235,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj110=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj111=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj111,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj112=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj112,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mOutput=output;
    __result156__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value238 = (void*)0;
char* __result157__;
    __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value238=__builtin_string("sClassNode")));
    __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value239 = (void*)0;
struct sClass* klass_245;
void* __right_value240 = (void*)0;
char* name_246;
void* __right_value241 = (void*)0;
struct sClass* klass2_247;
void* __right_value242 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj117;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sType* type_248;
void* __right_value245 = (void*)0;
struct list$1sNodeph* o2_saved_249;
struct sNode* it_252;
_Bool __result164__;
_Bool __result165__;
    klass_245=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
    name_246=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    map$2charphsClassph_at(info->classes,name_246,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_246),(struct sClass*)come_increment_ref_count(sClass_clone(klass_245)));
    }
    else if(    list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_246,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_245->mFields)>0) {
        klass2_247=map$2charphsClassph_at(info->classes,name_246,((void*)0));
        __dec_obj117=klass2_247->mFields;
        klass2_247->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(klass_245->mFields));
        come_call_finalizer3(__dec_obj117,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_248=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 441, "sType")),name_246,(_Bool)0,info));
    if(    map$2charphsTypephp_operator_load_element(info->types,name_246)!=((void*)0)&&((struct sType*)come_null_check(map$2charphsTypephp_operator_load_element(info->types,name_246), "14struct.c", 442, 6))->mTypedef) {
    }
    else {
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_246),(struct sType*)come_increment_ref_count(sType_clone(type_248)));
    }
    if(    self->mOutput) {
        output_struct(klass_245,info);
    }
    for(    o2_saved_249=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_252=list$1sNodeph_begin((o2_saved_249));    !list$1sNodeph_end((o2_saved_249));    it_252=list$1sNodeph_next((o2_saved_249))    ){
        if(        !node_compile(it_252,info)) {
            __result164__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_249,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(klass_245,sClass_finalize, 0, 0, 0, 0, (void*)0);
            name_246 = come_decrement_ref_count2(name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result164__;
        }
    }
    /*i*/come_call_finalizer3(o2_saved_249,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    self->mOutput) {
        output_struct_header(klass_245,info);
    }
    __result165__ = (_Bool)1;
    /*i*/come_call_finalizer3(klass_245,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_246 = come_decrement_ref_count2(name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result165__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_250;
struct sNode* __result158__;
struct sNode* __result159__;
struct sNode* result_251;
struct sNode* __result160__;
result_250 = (void*)0;
result_251 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_250,0,sizeof(struct sNode*));
        __result158__ = gComeFunResultObject = __result_obj__ = result_250;
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    self->it=self->head;
    if(    self->it) {
        __result159__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    memset(&result_251,0,sizeof(struct sNode*));
    __result160__ = gComeFunResultObject = __result_obj__ = result_251;
    gComeFunResultObject = (void*)0;
    return __result160__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_253;
struct sNode* __result161__;
struct sNode* __result162__;
struct sNode* result_254;
struct sNode* __result163__;
result_253 = (void*)0;
result_254 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_253,0,sizeof(struct sNode*));
        __result161__ = gComeFunResultObject = __result_obj__ = result_253;
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result162__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    memset(&result_254,0,sizeof(struct sNode*));
    __result163__ = gComeFunResultObject = __result_obj__ = result_254;
    gComeFunResultObject = (void*)0;
    return __result163__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_255;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sClass* __dec_obj118;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sClass* __dec_obj119;
_Bool output_256;
struct sClass* parent_class_257;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
char* parent_class_name_258;
struct sNode* __result166__;
_Bool multiple_declare_259;
char* p_260;
int sline_261;
void* __right_value253 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_262;
char* name_263;
_Bool err_264;
void* __right_value254 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_265;
char* name_266;
_Bool err_267;
void* __right_value255 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_268;
char* name2_269;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_270;
char* name2_271;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_272;
char* name_273;
_Bool err_274;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
char* __dec_obj124;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* __right_value273 = (void*)0;
struct sNode* __result169__;
klass_255 = (void*)0;
memset(&output_256, 0, sizeof(_Bool));
    if(    map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0)) {
        __dec_obj118=klass_255;
        klass_255=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 471, "sClass")),((char*)(__right_value247=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        come_call_finalizer3(__dec_obj118,sClass_finalize, 0, 0, 0, 0, (void*)0);
        __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_255));
    }
    else {
        __dec_obj119=klass_255;
        klass_255=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__dec_obj119,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    list$1tuple2$2charphsTypephph_length(klass_255->mFields)>0) {
        output_256=(_Bool)0;
    }
    else {
        output_256=(_Bool)1;
    }
    parent_class_257=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value251=parse_word(info)));
        __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_258=(char*)come_increment_ref_count(parse_word(info));
        parent_class_257=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_258);
        if(        parent_class_257==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name_258);
            __result166__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            parent_class_name_258 = come_decrement_ref_count2(parent_class_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(klass_255,sClass_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result166__;
        }
        parent_class_name_258 = come_decrement_ref_count2(parent_class_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        multiple_declare_259=(_Bool)0;
        {
            p_260=info->p;
            sline_261=info->sline;
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value253=backtrace_parse_type((_Bool)1,info)));
            type_262=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_263=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_264=multiple_assign_var5->v3;
            /*g*/come_call_finalizer3(__right_value253,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            err_264&&*info->p==44) {
                multiple_declare_259=(_Bool)1;
            }
            info->p=p_260;
            info->sline=sline_261;
            /*i*/come_call_finalizer3(type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_263 = come_decrement_ref_count2(name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        multiple_declare_259) {
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value254=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_265=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_266=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_267=multiple_assign_var6->v3;
            /*g*/come_call_finalizer3(__right_value254,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value255=parse_variable_name((struct sType*)come_increment_ref_count(base_type_265),(_Bool)1,info)));
            type2_268=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name2_269=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            /*g*/come_call_finalizer3(__right_value255,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            output_256) {
                list$1tuple2$2charphsTypephph_push_back(klass_255->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 524, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_269),(struct sType*)come_increment_ref_count(type2_268))));
            }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value258=parse_variable_name((struct sType*)come_increment_ref_count(base_type_265),(_Bool)0,info)));
                type2_270=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name2_271=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                /*g*/come_call_finalizer3(__right_value258,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                output_256) {
                    list$1tuple2$2charphsTypephph_push_back(klass_255->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 534, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_271),(struct sType*)come_increment_ref_count(type2_270))));
                }
                /*i*/come_call_finalizer3(type2_270,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_271 = come_decrement_ref_count2(name2_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(base_type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_266 = come_decrement_ref_count2(name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_268,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_269 = come_decrement_ref_count2(name2_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value261=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_272=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_273=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_274=multiple_assign_var9->v3;
            /*g*/come_call_finalizer3(__right_value261,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_274) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            if(            output_256) {
                list$1tuple2$2charphsTypephph_push_back(klass_255->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 547, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_273),(struct sType*)come_increment_ref_count(type2_272))));
            }
            /*i*/come_call_finalizer3(type2_272,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_273 = come_decrement_ref_count2(name_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    if(    parent_class_257) {
        __dec_obj124=klass_255->mParentClassName;
        klass_255->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_257->mName));
        /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_255->mName),(struct sClass*)come_increment_ref_count(sClass_clone(klass_255)));
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 569, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(__right_value268=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 569, "sStructNode")),(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_255),output_256,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result169__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value273=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass_255,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value268,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value273) { __right_value273 = come_decrement_ref_count2(__right_value273, ((struct sNode*)__right_value273)->finalize, ((struct sNode*)__right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj120;
char* __dec_obj121;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj120=self->v1;
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj121=self->v2;
            /*G*/ __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj122;
char* __dec_obj123;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj122=self->v1;
            come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj123=self->v2;
            /*G*/ __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_276;
void* __right_value274 = (void*)0;
char* type_name_277;
struct sClass* struct_class_278;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sClass* __dec_obj131;
struct sClass* __dec_obj132;
char* source_tail_279;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct buffer* header_280;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* __right_value287 = (void*)0;
struct sNode* __result172__;
void* __right_value288 = (void*)0;
char* T_284;
void* __right_value292 = (void*)0;
struct sClass* generics_class_288;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sClass* __dec_obj142;
void* __right_value295 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type2_289;
char* name_290;
_Bool err_291;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
char* name2_292;
void* __right_value299 = (void*)0;
struct sType* type3_293;
_Bool no_comma_294;
void* __right_value300 = (void*)0;
struct sNode* node_295;
struct sNode* __dec_obj143;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
char* source_tail_296;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct buffer* header_297;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* __right_value313 = (void*)0;
struct sNode* __result177__;
_Bool output_299;
struct sClass* struct_class_300;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sClass* __dec_obj146;
void* __right_value316 = (void*)0;
struct sClass* __dec_obj147;
struct sClass* parent_class_301;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* parent_class_name_302;
struct sNode* __result178__;
_Bool multiple_declare_303;
char* p_304;
int sline_305;
void* __right_value319 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_306;
char* name_307;
_Bool err_308;
void* __right_value320 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* base_type_309;
char* name_310;
_Bool err_311;
void* __right_value321 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_312;
char* name2_313;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_314;
char* name2_315;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15;
struct sType* type2_316;
char* name_317;
_Bool err_318;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sClass* klass2_319;
char* source_tail_320;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct buffer* header_321;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* __dec_obj148;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* __right_value344 = (void*)0;
struct sNode* __result181__;
char* source_head_323;
void* __right_value345 = (void*)0;
char* type_name_324;
struct sClass* parent_class_325;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* parent_class_name_326;
struct sNode* __result182__;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct list$1sClassp* parent_classes_327;
struct sClass* parent_class2_330;
_Bool output_334;
struct sClass* struct_class_335;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sClass* __dec_obj155;
void* __right_value355 = (void*)0;
struct sClass* __dec_obj156;
struct sClass* defining_class_336;
void* __right_value356 = (void*)0;
char* __dec_obj157;
void* __right_value357 = (void*)0;
void* __right_value363 = (void*)0;
struct list$1sClassp* o2_saved_342;
struct sClass* parent_345;
struct list$1tuple2$2charphsTypephph* o2_saved_348;
struct tuple2$2charphsTypeph* it_349;
void* __right_value364 = (void*)0;
struct sClass* klass2_350;
void* __right_value365 = (void*)0;
char* __dec_obj158;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1sClassp* o2_saved_351;
struct sClass* parent_352;
struct list$1tuple2$2charphsTypephph* o2_saved_353;
struct tuple2$2charphsTypeph* it_354;
void* __right_value368 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_355;
struct tuple2$2charphsTypeph* it_356;
void* __right_value369 = (void*)0;
char* head_357;
char* p_saved_358;
int sline_saved_359;
char* sname_saved_360;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1sNodeph* methods_361;
void* __right_value372 = (void*)0;
char* __dec_obj159;
char* __dec_obj160;
struct map$2charphcharph* __dec_obj161;
_Bool include__364;
_Bool multiple_declare_365;
char* p_366;
int sline_367;
void* __right_value373 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* type_368;
char* name_369;
_Bool err_370;
_Bool define_function_flag_371;
char* p_372;
int sline_373;
_Bool invalid_type_374;
void* __right_value374 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17;
struct sType* result_type_375;
char* fun_name_376;
_Bool err_377;
char* word_378;
void* __right_value375 = (void*)0;
char* __dec_obj162;
void* __right_value376 = (void*)0;
char* __dec_obj163;
char* __dec_obj164;
void* __right_value377 = (void*)0;
char* __dec_obj165;
char* tail_379;
int pointer_num_380;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* __dec_obj166;
void* __right_value380 = (void*)0;
struct sNode* method_381;
struct sType* __dec_obj167;
void* __right_value384 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var18;
struct sType* base_type_385;
char* name_386;
_Bool err_387;
void* __right_value385 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19;
struct sType* type2_388;
char* name2_389;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var20;
struct sType* type2_390;
char* name2_391;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* module_name_392;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1charph* params_393;
void* __right_value395 = (void*)0;
char* word_394;
void* __right_value396 = (void*)0;
char* __dec_obj171;
void* __right_value397 = (void*)0;
char* __dec_obj172;
struct sNode* __result198__;
struct sClassModule* module_398;
void* __right_value398 = (void*)0;
void* __right_value404 = (void*)0;
struct map$2charphcharph* __dec_obj178;
int i_402;
struct list$1charph* o2_saved_403;
char* it_406;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
char* __dec_obj179;
void* __right_value412 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var21;
struct sType* type2_433;
char* name_434;
_Bool err_435;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
char* __dec_obj180;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sNode* _inf_value5;
struct sClassNode* _inf_obj_value5;
void* __right_value425 = (void*)0;
struct sNode* __result223__;
void* __right_value426 = (void*)0;
struct sNode* __result224__;
struct_class_278 = (void*)0;
generics_class_288 = (void*)0;
struct_class_300 = (void*)0;
struct_class_335 = (void*)0;
    if(    charp_operator_equals(buf,"struct")) {
        source_head_276=head;
        type_name_277=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            map$2charphsClassph_at(info->classes,type_name_277,((void*)0))==((void*)0)) {
                __dec_obj131=struct_class_278;
                struct_class_278=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 585, "sClass")),type_name_277,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj131,sClass_finalize, 0, 0, 0, 0, (void*)0);
                struct_class_278->mNobodyStruct=(_Bool)1;
            }
            else {
                __dec_obj132=struct_class_278;
                struct_class_278=(struct sClass*)come_increment_ref_count(map$2charphsClassph_at(info->classes,type_name_277,((void*)0)));
                come_call_finalizer3(__dec_obj132,sClass_finalize, 0, 0, 0, 0, (void*)0);
                struct_class_278->mNobodyStruct=(_Bool)1;
            }
            source_tail_279=info->p;
            header_280=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 595, "buffer"))));
            buffer_append(header_280,source_head_276,source_tail_279-source_head_276);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value279=buffer_to_string(header_280))));
            __right_value279 = come_decrement_ref_count2(__right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 600, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(__right_value282=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 600, "sStructNobodyNode")),(char*)come_increment_ref_count(__builtin_string(type_name_277)),(struct sClass*)come_increment_ref_count(struct_class_278),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result172__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value287=_inf_value2));
            /*i*/come_call_finalizer3(struct_class_278,sClass_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_280,buffer_finalize, 0, 0, 0, 0, (void*)0);
            type_name_277 = come_decrement_ref_count2(type_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value282,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value287) { __right_value287 = come_decrement_ref_count2(__right_value287, ((struct sNode*)__right_value287)->finalize, ((struct sNode*)__right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result172__;
            /*i*/come_call_finalizer3(struct_class_278,sClass_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_280,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            *info->p==60) {
                list$1charph_reset(info->generics_type_names);
                info->p++;
                skip_spaces_and_lf(info);
                while((_Bool)1) {
                    T_284=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(string_clone(T_284)));
                    if(                    *info->p==62) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        T_284 = come_decrement_ref_count2(T_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"invalid generics struct definition");
                        exit(2);
                    }
                    T_284 = come_decrement_ref_count2(T_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                map$2charphsClassph_at(info->generics_classes,type_name_277,((void*)0))!=((void*)0)) {
                    err_msg(info,"redifined generics struct(%s)",type_name_277);
                    exit(2);
                }
                else {
                    __dec_obj142=generics_class_288;
                    generics_class_288=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 634, "sClass")),type_name_277,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj142,sClass_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(                map$2charphsClassph_at(info->generics_classes,type_name_277,((void*)0))==((void*)0)) {
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_277),(struct sClass*)come_increment_ref_count(generics_class_288));
                }
                expected_next_character(123,info);
                while((_Bool)1) {
                    parse_sharp_v5(info);
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value295=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_289=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_290=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_291=multiple_assign_var10->v3;
                    /*g*/come_call_finalizer3(__right_value295,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_291) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(                    *info->p==44) {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_288->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 654, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_290),(struct sType*)come_increment_ref_count(type2_289))));
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_292=(char*)come_increment_ref_count(parse_word(info));
                            type3_293=(struct sType*)come_increment_ref_count(sType_clone(type2_289));
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                no_comma_294=info->no_comma;
                                info->no_comma=(_Bool)1;
                                node_295=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                info->no_comma=no_comma_294;
                                __dec_obj143=type3_293->mSizeNum;
                                type3_293->mSizeNum=(struct sNode*)come_increment_ref_count(node_295);
                                if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
                                if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            list$1tuple2$2charphsTypephph_push_back(generics_class_288->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 676, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_292),(struct sType*)come_increment_ref_count(type3_293))));
                            name2_292 = come_decrement_ref_count2(name2_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(type3_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_288->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 680, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_290),(struct sType*)come_increment_ref_count(type2_289))));
                    }
                    if(                    *info->p==59) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    parse_sharp_v5(info);
                    if(                    *info->p==125) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(type2_289,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_290 = come_decrement_ref_count2(name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    parse_sharp_v5(info);
                    /*i*/come_call_finalizer3(type2_289,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_290 = come_decrement_ref_count2(name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                ((char*)(__right_value305=parse_attribute(info)));
                __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_reset(info->generics_type_names);
                source_tail_296=info->p;
                header_297=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 705, "buffer"))));
                buffer_append_str(header_297,"struct ");
                buffer_append(header_297,source_head_276,source_tail_296-source_head_276);
                add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value308=buffer_to_string(header_297))));
                __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 711, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(__right_value310=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count((struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 711, "sGenericsStructNode")),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result177__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value313=_inf_value3));
                /*i*/come_call_finalizer3(generics_class_288,sClass_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_297,buffer_finalize, 0, 0, 0, 0, (void*)0);
                type_name_277 = come_decrement_ref_count2(type_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value310,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value313) { __right_value313 = come_decrement_ref_count2(__right_value313, ((struct sNode*)__right_value313)->finalize, ((struct sNode*)__right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result177__;
                /*i*/come_call_finalizer3(generics_class_288,sClass_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_297,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                output_299=(_Bool)1;
                if(                map$2charphsClassph_at(info->classes,type_name_277,((void*)0))==((void*)0)) {
                    __dec_obj146=struct_class_300;
                    struct_class_300=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 718, "sClass")),type_name_277,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj146,sClass_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj147=struct_class_300;
                    struct_class_300=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name_277,((void*)0))));
                    come_call_finalizer3(__dec_obj147,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    list$1tuple2$2charphsTypephph_length(struct_class_300->mFields)>0) {
                        output_299=(_Bool)0;
                    }
                }
                parent_class_301=((void*)0);
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value317=parse_word(info)));
                    __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parent_class_name_302=(char*)come_increment_ref_count(parse_word(info));
                    parent_class_301=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_302);
                    if(                    parent_class_301==((void*)0)) {
                        err_msg(info,"invalid class name(%s)",parent_class_name_302);
                        __result178__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                        parent_class_name_302 = come_decrement_ref_count2(parent_class_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(struct_class_300,sClass_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_277 = come_decrement_ref_count2(type_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        gComeFunResultObject = (void*)0;
                        return __result178__;
                    }
                    parent_class_name_302 = come_decrement_ref_count2(parent_class_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(123,info);
                while((_Bool)1) {
                    parse_sharp_v5(info);
                    multiple_declare_303=(_Bool)0;
                    {
                        p_304=info->p;
                        sline_305=info->sline;
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value319=backtrace_parse_type((_Bool)1,info)));
                        type_306=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_307=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_308=multiple_assign_var11->v3;
                        /*g*/come_call_finalizer3(__right_value319,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        err_308&&*info->p==44) {
                            multiple_declare_303=(_Bool)1;
                        }
                        info->p=p_304;
                        info->sline=sline_305;
                        /*i*/come_call_finalizer3(type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_307 = come_decrement_ref_count2(name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(                    multiple_declare_303) {
                        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value320=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_309=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name_310=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        err_311=multiple_assign_var12->v3;
                        /*g*/come_call_finalizer3(__right_value320,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(__right_value321=parse_variable_name((struct sType*)come_increment_ref_count(base_type_309),(_Bool)1,info)));
                        type2_312=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_313=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        /*g*/come_call_finalizer3(__right_value321,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_300->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 766, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_313),(struct sType*)come_increment_ref_count(type2_312))));
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var14=((struct tuple2$2sTypephcharph*)(__right_value324=parse_variable_name((struct sType*)come_increment_ref_count(base_type_309),(_Bool)0,info)));
                            type2_314=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                            name2_315=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                            /*g*/come_call_finalizer3(__right_value324,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_300->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 774, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_315),(struct sType*)come_increment_ref_count(type2_314))));
                            /*i*/come_call_finalizer3(type2_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_315 = come_decrement_ref_count2(name2_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        /*i*/come_call_finalizer3(base_type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_310 = come_decrement_ref_count2(name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(type2_312,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_313 = come_decrement_ref_count2(name2_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value327=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type2_316=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                        name_317=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        err_318=multiple_assign_var15->v3;
                        /*g*/come_call_finalizer3(__right_value327,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_318) {
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            exit(2);
                        }
                        list$1tuple2$2charphsTypephph_push_back(struct_class_300->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 784, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_317),(struct sType*)come_increment_ref_count(type2_316))));
                        /*i*/come_call_finalizer3(type2_316,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_317 = come_decrement_ref_count2(name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(                    *info->p==59) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    parse_sharp_v5(info);
                    if(                    *info->p==125) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                }
                ((char*)(__right_value330=parse_attribute(info)));
                __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_reset(info->generics_type_names);
                klass2_319=map$2charphsClassph_at(info->classes,type_name_277,((void*)0));
                if(                klass2_319==((void*)0)||klass2_319->mNobodyStruct) {
                    if(                    klass2_319) {
                        klass2_319->mNobodyStruct=(_Bool)0;
                    }
                    source_tail_320=info->p;
                    header_321=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 813, "buffer"))));
                    buffer_append(header_321,source_head_276,source_tail_320-source_head_276);
                    add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value333=buffer_to_string(header_321))));
                    __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    /*i*/come_call_finalizer3(header_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(                parent_class_301) {
                    __dec_obj148=struct_class_300->mParentClassName;
                    struct_class_300->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_301->mName));
                    /*G*/ __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_300->mName),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_300)));
                }
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 824, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(__right_value339=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 824, "sStructNode")),(char*)come_increment_ref_count(__builtin_string(type_name_277)),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_300)),output_299,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result181__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value344=_inf_value4));
                /*i*/come_call_finalizer3(struct_class_300,sClass_finalize, 0, 0, 0, 0, (void*)0);
                type_name_277 = come_decrement_ref_count2(type_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value339,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value344) { __right_value344 = come_decrement_ref_count2(__right_value344, ((struct sNode*)__right_value344)->finalize, ((struct sNode*)__right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result181__;
                /*i*/come_call_finalizer3(struct_class_300,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_277 = come_decrement_ref_count2(type_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"class")) {
        source_head_323=head;
        type_name_324=(char*)come_increment_ref_count(parse_word(info));
        add_come_code_at_come_header(info,"struct %s;\n",type_name_324);
        parent_class_325=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value346=parse_word(info)));
            __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parent_class_name_326=(char*)come_increment_ref_count(parse_word(info));
            parent_class_325=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_326);
            if(            parent_class_325==((void*)0)) {
                err_msg(info,"invalid class name(%s)",parent_class_name_326);
                __result182__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                parent_class_name_326 = come_decrement_ref_count2(parent_class_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name_324 = come_decrement_ref_count2(type_name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result182__;
            }
            parent_class_name_326 = come_decrement_ref_count2(parent_class_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        parent_classes_327=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 849, "list$1sClassp"))));
        parent_class2_330=parent_class_325;
        while(parent_class2_330) {
            list$1sClassp_add(parent_classes_327,parent_class2_330);
            if(            parent_class_325->mParentClassName) {
                parent_class2_330=map$2charphsClassphp_operator_load_element(info->classes,parent_class_325->mParentClassName);
            }
            else {
                parent_class2_330=((void*)0);
            }
        }
        output_334=(_Bool)1;
        if(        map$2charphsClassph_at(info->classes,type_name_324,((void*)0))==((void*)0)) {
            __dec_obj155=struct_class_335;
            struct_class_335=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 866, "sClass")),type_name_324,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__dec_obj155,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj156=struct_class_335;
            struct_class_335=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name_324,((void*)0))));
            come_call_finalizer3(__dec_obj156,sClass_finalize, 0, 0, 0, 0, (void*)0);
            if(            list$1tuple2$2charphsTypephph_length(struct_class_335->mFields)>0) {
                output_334=(_Bool)0;
            }
        }
        defining_class_336=info->defining_class;
        info->defining_class=struct_class_335;
        if(        map$2charphsClassph_at(info->classes,type_name_324,((void*)0))==((void*)0)) {
            if(            parent_class_325) {
                __dec_obj157=struct_class_335->mParentClassName;
                struct_class_335->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_325->mName));
                /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_324),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_335)));
            for(            o2_saved_342=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value363=list$1sClassp_reverse(parent_classes_327))))),parent_345=list$1sClassp_begin((o2_saved_342)) ,            /*f*/come_call_finalizer3(__right_value363,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_342));            parent_345=list$1sClassp_next((o2_saved_342))            ){
                for(                o2_saved_348=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_345->mFields)),it_349=list$1tuple2$2charphsTypephph_begin((o2_saved_348));                !list$1tuple2$2charphsTypephph_end((o2_saved_348));                it_349=list$1tuple2$2charphsTypephph_next((o2_saved_348))                ){
                    list$1tuple2$2charphsTypephph_add(struct_class_335->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_349)));
                }
                /*i*/come_call_finalizer3(o2_saved_348,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_342,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,type_name_324,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_335->mFields)>0) {
            klass2_350=map$2charphsClassph_at(info->classes,type_name_324,((void*)0));
            if(            parent_class_325) {
                __dec_obj158=klass2_350->mParentClassName;
                klass2_350->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_325->mName));
                /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_324),(struct sClass*)come_increment_ref_count(sClass_clone(klass2_350)));
            for(            o2_saved_351=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value367=list$1sClassp_reverse(parent_classes_327))))),parent_352=list$1sClassp_begin((o2_saved_351)) ,            /*f*/come_call_finalizer3(__right_value367,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_351));            parent_352=list$1sClassp_next((o2_saved_351))            ){
                for(                o2_saved_353=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_352->mFields)),it_354=list$1tuple2$2charphsTypephph_begin((o2_saved_353));                !list$1tuple2$2charphsTypephph_end((o2_saved_353));                it_354=list$1tuple2$2charphsTypephph_next((o2_saved_353))                ){
                    list$1tuple2$2charphsTypephph_add(klass2_350->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_354)));
                }
                /*i*/come_call_finalizer3(o2_saved_353,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_351,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_355=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_335->mFields)),it_356=list$1tuple2$2charphsTypephph_begin((o2_saved_355));            !list$1tuple2$2charphsTypephph_end((o2_saved_355));            it_356=list$1tuple2$2charphsTypephph_next((o2_saved_355))            ){
                list$1tuple2$2charphsTypephph_add(klass2_350->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_356)));
            }
            /*i*/come_call_finalizer3(o2_saved_355,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        expected_next_character(123,info);
        head_357=info->p;
        p_saved_358=((void*)0);
        sline_saved_359=0;
        sname_saved_360=((void*)0);
        methods_361=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 916, "list$1sNodeph"))));
        while((_Bool)1) {
            if(            p_saved_358) {
                if(                *info->p==0) {
                    info->p=p_saved_358;
                    info->sline=sline_saved_359;
                    __dec_obj159=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_360));
                    /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_358=((void*)0);
                    sline_saved_359=0;
                    __dec_obj160=sname_saved_360;
                    sname_saved_360=((void*)0);
                    /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj161=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj161,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__364=parsecmp("include",info);
            multiple_declare_365=(_Bool)0;
            if(            include__364==(_Bool)0) {
                p_366=info->p;
                sline_367=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value373=backtrace_parse_type((_Bool)1,info)));
                    type_368=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                    name_369=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                    err_370=multiple_assign_var16->v3;
                    /*g*/come_call_finalizer3(__right_value373,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_370&&*info->p==44) {
                        multiple_declare_365=(_Bool)1;
                    }
                    /*i*/come_call_finalizer3(type_368,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_369 = come_decrement_ref_count2(name_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_366;
                info->sline=sline_367;
            }
            define_function_flag_371=(_Bool)0;
            if(            include__364==(_Bool)0) {
                p_372=info->p;
                sline_373=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_371=(_Bool)1;
                }
                else {
                    invalid_type_374=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value374=backtrace_parse_type((_Bool)0,info)));
                        result_type_375=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                        fun_name_376=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                        err_377=multiple_assign_var17->v3;
                        /*g*/come_call_finalizer3(__right_value374,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        /*i*/come_call_finalizer3(result_type_375,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_376 = come_decrement_ref_count2(fun_name_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    word_378=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj162=word_378;
                        word_378=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_378,"extern")) {
                            __dec_obj163=word_378;
                            word_378=(char*)come_increment_ref_count(parse_word(info));
                            /*G*/ __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj164=word_378;
                        word_378=((void*)0);
                        /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_378) {
                        if(                        is_type_name(word_378,info)) {
                            while(*info->p==42) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95) {
                                __dec_obj165=word_378;
                                word_378=(char*)come_increment_ref_count(parse_word(info));
                                /*G*/ __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        if(                        strlen(word_378)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_371=(_Bool)1;
                        }
                    }
                    word_378 = come_decrement_ref_count2(word_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_372;
                info->sline=sline_373;
            }
            if(            define_function_flag_371) {
                tail_379=info->p;
                pointer_num_380=1;
                __dec_obj166=info->impl_type;
                info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1026, "sType")),type_name_324,(_Bool)0,info));
                come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->impl_type->mPointerNum=pointer_num_380;
                info->in_class=(_Bool)1;
                method_381=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj167=info->impl_type;
                info->impl_type=((void*)0);
                come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNodeph_push_back(methods_361,(struct sNode*)come_increment_ref_count(method_381));
                if(method_381) { method_381 = come_decrement_ref_count2(method_381, ((struct sNode*)method_381)->finalize, ((struct sNode*)method_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            multiple_declare_365) {
                multiple_assign_var18=((struct tuple3$3sTypephcharphbool*)(__right_value384=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_385=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name_386=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                err_387=multiple_assign_var18->v3;
                /*g*/come_call_finalizer3(__right_value384,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value385=parse_variable_name((struct sType*)come_increment_ref_count(base_type_385),(_Bool)1,info)));
                type2_388=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                name2_389=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                /*g*/come_call_finalizer3(__right_value385,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(struct_class_335->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1045, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_389),(struct sType*)come_increment_ref_count(type2_388))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var20=((struct tuple2$2sTypephcharph*)(__right_value388=parse_variable_name((struct sType*)come_increment_ref_count(base_type_385),(_Bool)0,info)));
                    type2_390=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                    name2_391=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                    /*g*/come_call_finalizer3(__right_value388,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_335->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1053, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_391),(struct sType*)come_increment_ref_count(type2_390))));
                    /*i*/come_call_finalizer3(type2_390,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_391 = come_decrement_ref_count2(name2_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(59,info);
                /*i*/come_call_finalizer3(base_type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_386 = come_decrement_ref_count2(name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_388,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_389 = come_decrement_ref_count2(name2_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value391=parse_word(info)));
                __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_392=(char*)come_increment_ref_count(parse_word(info));
                params_393=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1062, "list$1charph"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_394=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_393,(char*)come_increment_ref_count(word_394));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            word_394 = come_decrement_ref_count2(word_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_394 = come_decrement_ref_count2(word_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_358=info->p;
                sline_saved_359=info->sline;
                __dec_obj171=sname_saved_360;
                sname_saved_360=(char*)come_increment_ref_count(__builtin_string(info->sname));
                /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj172=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_392));
                /*G*/ __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                map$2charphsClassModulephp_operator_load_element(info->modules,module_name_392)==((void*)0)) {
                    err_msg(info,"module not found");
                    __result198__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_392 = come_decrement_ref_count2(module_name_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(params_393,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_324 = come_decrement_ref_count2(type_name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(parent_classes_327,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(struct_class_335,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    sname_saved_360 = come_decrement_ref_count2(sname_saved_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(methods_361,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result198__;
                }
                module_398=((struct sClassModule*)come_null_check(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_392), "14struct.c", 1109, 7));
                if(                list$1charph_length(module_398->mParams)!=list$1charph_length(params_393)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj178=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1116, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj178,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_402=0;
                for(                o2_saved_403=(struct list$1charph*)come_increment_ref_count((module_398->mParams)),it_406=list$1charph_begin((o2_saved_403));                !list$1charph_end((o2_saved_403));                it_406=list$1charph_next((o2_saved_403))                ){
                    ((char*)(__right_value410=map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_406)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(list$1charphp_operator_load_element(params_393,i_402), "14struct.c", 1120, 8)))))));
                    __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                /*i*/come_call_finalizer3(o2_saved_403,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_398->mText;
                info->sline=module_398->mSLine;
                __dec_obj179=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_398->mSName));
                /*G*/ __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_392 = come_decrement_ref_count2(module_name_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_393,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var21=((struct tuple3$3sTypephcharphbool*)(__right_value412=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_433=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                name_434=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                err_435=multiple_assign_var21->v3;
                /*g*/come_call_finalizer3(__right_value412,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_435) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2charphsTypephph_push_back(struct_class_335->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1134, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_434),(struct sType*)come_increment_ref_count(type2_433))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                /*i*/come_call_finalizer3(type2_433,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_434 = come_decrement_ref_count2(name_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_358) {
            if(            info->p==0) {
                info->p=p_saved_358;
                info->sline=sline_saved_359;
                __dec_obj180=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_360));
                /*G*/ __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_358=((void*)0);
                sline_saved_359=0;
            }
        }
        list$1charph_reset(info->generics_type_names);
        info->defining_class=defining_class_336;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1167, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sClassNode*)(__right_value419=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1167, "sClassNode")),(char*)come_increment_ref_count(__builtin_string(type_name_324)),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_335)),(struct list$1sNodeph*)come_increment_ref_count(methods_361),output_334,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sClassNode_finalize;
        _inf_value5->clone=(void*)sClassNode_clone;
        _inf_value5->compile=(void*)sClassNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sClassNode_terminated;
        _inf_value5->kind=(void*)sClassNode_kind;
        __result223__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value425=_inf_value5));
        type_name_324 = come_decrement_ref_count2(type_name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(parent_classes_327,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(struct_class_335,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_360 = come_decrement_ref_count2(sname_saved_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(methods_361,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value419,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value425) { __right_value425 = come_decrement_ref_count2(__right_value425, ((struct sNode*)__right_value425)->finalize, ((struct sNode*)__right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result223__;
        type_name_324 = come_decrement_ref_count2(type_name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(parent_classes_327,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(struct_class_335,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_360 = come_decrement_ref_count2(sname_saved_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(methods_361,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result224__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value426=top_level_v97(buf,head,head_sline,info)));
    if(__right_value426) { __right_value426 = come_decrement_ref_count2(__right_value426, ((struct sNode*)__right_value426)->finalize, ((struct sNode*)__right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj133;
char* __dec_obj134;
struct sClass* __dec_obj135;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj133=self->sname;
            /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj134=self->mName;
            /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj135=self->mClass;
            come_call_finalizer3(__dec_obj135,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result170__;
void* __right_value283 = (void*)0;
struct sStructNobodyNode* result_281;
void* __right_value284 = (void*)0;
char* __dec_obj136;
void* __right_value285 = (void*)0;
char* __dec_obj137;
void* __right_value286 = (void*)0;
struct sClass* __dec_obj138;
struct sStructNobodyNode* __result171__;
    if(    self==(void*)0) {
        __result170__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    result_281=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"));
    if(    self!=((void*)0)) {
        result_281->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj136=result_281->sname;
        result_281->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj137=result_281->mName;
        result_281->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj138=result_281->mClass;
        result_281->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj138,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result171__ = gComeFunResultObject = __result_obj__ = result_281;
    /*i*/come_call_finalizer3(result_281,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_282;
struct list_item$1charph* prev_it_283;
struct list$1charph* __result173__;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        /*i*/come_call_finalizer3(prev_it_283,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1charph* litem_285;
char* __dec_obj139;
void* __right_value290 = (void*)0;
struct list_item$1charph* litem_286;
char* __dec_obj140;
void* __right_value291 = (void*)0;
struct list_item$1charph* litem_287;
char* __dec_obj141;
struct list$1charph* __result174__;
    if(    self->len==0) {
        litem_285=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value289=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 223, "list_item$1charph"))));
        litem_285->prev=((void*)0);
        litem_285->next=((void*)0);
        __dec_obj139=litem_285->item;
        litem_285->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_285;
        self->head=litem_285;
    }
    else if(    self->len==1) {
        litem_286=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value290=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 233, "list_item$1charph"))));
        litem_286->prev=self->head;
        litem_286->next=((void*)0);
        __dec_obj140=litem_286->item;
        litem_286->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_286;
        self->head->next=litem_286;
    }
    else {
        litem_287=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value291=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 243, "list_item$1charph"))));
        litem_287->prev=self->tail;
        litem_287->next=((void*)0);
        __dec_obj141=litem_287->item;
        litem_287->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_287;
        self->tail=litem_287;
    }
    self->len++;
    __result174__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
char* __dec_obj144;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj144=self->sname;
            /*G*/ __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__=(void*)0;
struct sGenericsStructNode* __result175__;
void* __right_value311 = (void*)0;
struct sGenericsStructNode* result_298;
void* __right_value312 = (void*)0;
char* __dec_obj145;
struct sGenericsStructNode* __result176__;
    if(    self==(void*)0) {
        __result175__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    result_298=(struct sGenericsStructNode*)come_increment_ref_count((struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "sGenericsStructNode"));
    if(    self!=((void*)0)) {
        result_298->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj145=result_298->sname;
        result_298->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result176__ = gComeFunResultObject = __result_obj__ = result_298;
    /*i*/come_call_finalizer3(result_298,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj149;
char* __dec_obj150;
struct sClass* __dec_obj151;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj149=self->sname;
            /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj150=self->mName;
            /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj151=self->mClass;
            come_call_finalizer3(__dec_obj151,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result179__;
void* __right_value340 = (void*)0;
struct sStructNode* result_322;
void* __right_value341 = (void*)0;
char* __dec_obj152;
void* __right_value342 = (void*)0;
char* __dec_obj153;
void* __right_value343 = (void*)0;
struct sClass* __dec_obj154;
struct sStructNode* __result180__;
    if(    self==(void*)0) {
        __result179__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result179__;
    }
    result_322=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"));
    if(    self!=((void*)0)) {
        result_322->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_322->sname;
        result_322->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj153=result_322->mName;
        result_322->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj154=result_322->mClass;
        result_322->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj154,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_322->mOutput=self->mOutput;
    }
    __result180__ = gComeFunResultObject = __result_obj__ = result_322;
    /*i*/come_call_finalizer3(result_322,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct list$1sClassp* __result183__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result183__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_328;
struct list_item$1sClassp* prev_it_329;
    it_328=self->head;
    while(it_328!=((void*)0)) {
        prev_it_329=it_328;
        it_328=it_328->next;
        /*i*/come_call_finalizer3(prev_it_329,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
struct list_item$1sClassp* litem_331;
void* __right_value351 = (void*)0;
struct list_item$1sClassp* litem_332;
void* __right_value352 = (void*)0;
struct list_item$1sClassp* litem_333;
struct list$1sClassp* __result184__;
    if(    self->len==0) {
        litem_331=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value350=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 153, "list_item$1sClassp"))));
        litem_331->prev=((void*)0);
        litem_331->next=((void*)0);
        litem_331->item=item;
        self->tail=litem_331;
        self->head=litem_331;
    }
    else if(    self->len==1) {
        litem_332=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value351=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 163, "list_item$1sClassp"))));
        litem_332->prev=self->head;
        litem_332->next=((void*)0);
        litem_332->item=item;
        self->tail=litem_332;
        self->head->next=litem_332;
    }
    else {
        litem_333=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value352=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 173, "list_item$1sClassp"))));
        litem_333->prev=self->tail;
        litem_333->next=((void*)0);
        litem_333->item=item;
        self->tail->next=litem_333;
        self->tail=litem_333;
    }
    self->len++;
    __result184__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result184__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct list$1sClassp* result_337;
struct list_item$1sClassp* it_338;
struct list$1sClassp* __result186__;
    result_337=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "./comelang.h", 892, "list$1sClassp"))));
    it_338=self->tail;
    while(it_338!=((void*)0)) {
        list$1sClassp_push_back(result_337,it_338->item);
        it_338=it_338->prev;
    }
    __result186__ = gComeFunResultObject = __result_obj__ = result_337;
    /*i*/come_call_finalizer3(result_337,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
struct list_item$1sClassp* litem_339;
void* __right_value361 = (void*)0;
struct list_item$1sClassp* litem_340;
void* __right_value362 = (void*)0;
struct list_item$1sClassp* litem_341;
struct list$1sClassp* __result185__;
    if(    self->len==0) {
        litem_339=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value360=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 223, "list_item$1sClassp"))));
        litem_339->prev=((void*)0);
        litem_339->next=((void*)0);
        litem_339->item=item;
        self->tail=litem_339;
        self->head=litem_339;
    }
    else if(    self->len==1) {
        litem_340=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value361=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 233, "list_item$1sClassp"))));
        litem_340->prev=self->head;
        litem_340->next=((void*)0);
        litem_340->item=item;
        self->tail=litem_340;
        self->head->next=litem_340;
    }
    else {
        litem_341=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value362=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 243, "list_item$1sClassp"))));
        litem_341->prev=self->tail;
        litem_341->next=((void*)0);
        litem_341->item=item;
        self->tail->next=litem_341;
        self->tail=litem_341;
    }
    self->len++;
    __result185__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result185__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_343;
struct sClass* __result187__;
struct sClass* __result188__;
struct sClass* result_344;
struct sClass* __result189__;
result_343 = (void*)0;
result_344 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_343,0,sizeof(struct sClass*));
        __result187__ = gComeFunResultObject = __result_obj__ = result_343;
        gComeFunResultObject = (void*)0;
        return __result187__;
    }
    self->it=self->head;
    if(    self->it) {
        __result188__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    memset(&result_344,0,sizeof(struct sClass*));
    __result189__ = gComeFunResultObject = __result_obj__ = result_344;
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_346;
struct sClass* __result190__;
struct sClass* __result191__;
struct sClass* result_347;
struct sClass* __result192__;
result_346 = (void*)0;
result_347 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_346,0,sizeof(struct sClass*));
        __result190__ = gComeFunResultObject = __result_obj__ = result_346;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result191__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    memset(&result_347,0,sizeof(struct sClass*));
    __result192__ = gComeFunResultObject = __result_obj__ = result_347;
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_362;
int i_363;
    for(    i_362=0;    i_362<self->size;    i_362++    ){
        if(        self->item_existance[i_362]) {
            if(            1) {
                self->items[i_362] = come_decrement_ref_count2(self->items[i_362], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_363=0;    i_363<self->size;    i_363++    ){
        if(        self->item_existance[i_363]) {
            if(            1) {
                self->keys[i_363] = come_decrement_ref_count2(self->keys[i_363], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
struct list_item$1sNodeph* litem_382;
struct sNode* __dec_obj168;
void* __right_value382 = (void*)0;
struct list_item$1sNodeph* litem_383;
struct sNode* __dec_obj169;
void* __right_value383 = (void*)0;
struct list_item$1sNodeph* litem_384;
struct sNode* __dec_obj170;
struct list$1sNodeph* __result193__;
    if(    self->len==0) {
        litem_382=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value381=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 223, "list_item$1sNodeph"))));
        litem_382->prev=((void*)0);
        litem_382->next=((void*)0);
        __dec_obj168=litem_382->item;
        litem_382->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_382;
        self->head=litem_382;
    }
    else if(    self->len==1) {
        litem_383=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value382=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 233, "list_item$1sNodeph"))));
        litem_383->prev=self->head;
        litem_383->next=((void*)0);
        __dec_obj169=litem_383->item;
        litem_383->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_383;
        self->head->next=litem_383;
    }
    else {
        litem_384=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value383=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 243, "list_item$1sNodeph"))));
        litem_384->prev=self->tail;
        litem_384->next=((void*)0);
        __dec_obj170=litem_384->item;
        litem_384->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_384;
        self->tail=litem_384;
    }
    self->len++;
    __result193__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_395;
unsigned int hash_396;
unsigned int it_397;
struct sClassModule* __result194__;
struct sClassModule* __result195__;
struct sClassModule* __result196__;
struct sClassModule* __result197__;
default_value_395 = (void*)0;
    memset(&default_value_395,0,sizeof(struct sClassModule*));
    hash_396=string_get_hash_key(((char*)key))%self->size;
    it_397=hash_396;
    while((_Bool)1) {
        if(        self->item_existance[it_397]) {
            if(            string_equals(self->keys[it_397],key)) {
                __result194__ = gComeFunResultObject = __result_obj__ = self->items[it_397];
                /*i*/come_call_finalizer3(default_value_395,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result194__;
            }
            it_397++;
            if(            it_397>=self->size) {
                it_397=0;
            }
            else if(            it_397==hash_396) {
                __result195__ = gComeFunResultObject = __result_obj__ = default_value_395;
                /*i*/come_call_finalizer3(default_value_395,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result195__;
            }
        }
        else {
            __result196__ = gComeFunResultObject = __result_obj__ = default_value_395;
            /*i*/come_call_finalizer3(default_value_395,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result196__;
        }
    }
    __result197__ = gComeFunResultObject = __result_obj__ = default_value_395;
    /*i*/come_call_finalizer3(default_value_395,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj173;
char* __dec_obj174;
struct list$1charph* __dec_obj175;
char* __dec_obj176;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj173=self->mName;
            /*G*/ __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj174=self->mText;
            /*G*/ __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj175=self->mParams;
            come_call_finalizer3(__dec_obj175,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj176=self->mSName;
            /*G*/ __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
int i_399;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1charp* __dec_obj177;
struct map$2charphcharph* __result200__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value399=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1400, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value400=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1401, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value401=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1402, "bool"))));
    for(    i_399=0;    i_399<128;    i_399++    ){
        self->item_existance[i_399]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj177=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1412, "list$1charp"))));
    come_call_finalizer3(__dec_obj177,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result199__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result199__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_400;
int i_401;
    for(    i_400=0;    i_400<self->size;    i_400++    ){
        if(        self->item_existance[i_400]) {
            if(            1) {
                self->items[i_400] = come_decrement_ref_count2(self->items[i_400], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_401=0;    i_401<self->size;    i_401++    ){
        if(        self->item_existance[i_401]) {
            if(            1) {
                self->keys[i_401] = come_decrement_ref_count2(self->keys[i_401], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_404;
char* __result201__;
char* __result202__;
char* result_405;
char* __result203__;
result_404 = (void*)0;
result_405 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_404,0,sizeof(char*));
        __result201__ = gComeFunResultObject = __result_obj__ = result_404;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    self->it=self->head;
    if(    self->it) {
        __result202__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    memset(&result_405,0,sizeof(char*));
    __result203__ = gComeFunResultObject = __result_obj__ = result_405;
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_407;
char* __result204__;
char* __result205__;
char* result_408;
char* __result206__;
result_407 = (void*)0;
result_408 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_407,0,sizeof(char*));
        __result204__ = gComeFunResultObject = __result_obj__ = result_407;
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result205__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    memset(&result_408,0,sizeof(char*));
    __result206__ = gComeFunResultObject = __result_obj__ = result_408;
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_409;
int i_410;
char* __result207__;
char* default_value_411;
char* __result208__;
default_value_411 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_409=self->head;
    i_410=0;
    while(it_409!=((void*)0)) {
        if(        position==i_410) {
            __result207__ = gComeFunResultObject = __result_obj__ = it_409->item;
            gComeFunResultObject = (void*)0;
            return __result207__;
        }
        it_409=it_409->next;
        i_410++;
    }
    memset(&default_value_411,0,sizeof(char*));
    __result208__ = gComeFunResultObject = __result_obj__ = default_value_411;
    default_value_411 = come_decrement_ref_count2(default_value_411, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
char* __result220__;
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    __result220__ = gComeFunResultObject = __result_obj__ = item;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_429;
unsigned int it_430;
_Bool same_key_exist_431;
char* it2_432;
struct map$2charphcharph* __result219__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_429=string_get_hash_key(key)%self->size;
    it_430=hash_429;
    while((_Bool)1) {
        if(        self->item_existance[it_430]) {
            if(            string_equals(self->keys[it_430],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_430]);
                    self->keys[it_430] = come_decrement_ref_count2(self->keys[it_430], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_430]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_430]);
                    self->keys[it_430]=key;
                }
                if(                1) {
                    self->items[it_430] = come_decrement_ref_count2(self->items[it_430], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_430]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_430]=item;
                }
                break;
            }
            it_430++;
            if(            it_430>=self->size) {
                it_430=0;
            }
            else if(            it_430==hash_429) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_430]=(_Bool)1;
            if(            1) {
                self->keys[it_430]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_430]=key;
            }
            if(            1) {
                self->items[it_430]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_430]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_431=(_Bool)0;
    for(    it2_432=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_432=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_432,key)) {
            same_key_exist_431=(_Bool)1;
        }
    }
    if(    !same_key_exist_431) {
        list$1charp_push_back(self->key_list,key);
    }
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_412;
void* __right_value407 = (void*)0;
char** keys_413;
void* __right_value408 = (void*)0;
char** items_414;
void* __right_value409 = (void*)0;
_Bool* item_existance_415;
int len_416;
char* it_419;
char* default_value_422;
char* it2_423;
unsigned int hash_426;
int n_427;
char* default_value_428;
default_value_422 = (void*)0;
default_value_428 = (void*)0;
    size_412=self->size*10;
    keys_413=(char**)come_increment_ref_count(((char**)(__right_value407=(char**)come_calloc(1, sizeof(char*)*(1*(size_412)), "./comelang.h", 1651, "char*%"))));
    items_414=(char**)come_increment_ref_count(((char**)(__right_value408=(char**)come_calloc(1, sizeof(char*)*(1*(size_412)), "./comelang.h", 1652, "char*%"))));
    item_existance_415=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value409=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_412)), "./comelang.h", 1653, "bool"))));
    len_416=0;
    for(    it_419=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_419=map$2charphcharph_next(self)    ){
        memset(&default_value_422,0,sizeof(char*));
        it2_423=map$2charphcharph_at(self,it_419,default_value_422);
        hash_426=string_get_hash_key(it_419)%size_412;
        n_427=hash_426;
        while((_Bool)1) {
            if(            item_existance_415[n_427]) {
                n_427++;
                if(                n_427>=size_412) {
                    n_427=0;
                }
                else if(                n_427==hash_426) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_415[n_427]=(_Bool)1;
                keys_413[n_427]=it_419;
                items_414[n_427]=map$2charphcharph_at(self,it_419,default_value_428);
                len_416++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_413;
    self->items=items_414;
    self->item_existance=item_existance_415;
    self->size=size_412;
    self->len=len_416;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_417;
char* __result209__;
char* __result210__;
char* result_418;
char* __result211__;
result_417 = (void*)0;
result_418 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_417,0,sizeof(char*));
        __result209__ = gComeFunResultObject = __result_obj__ = result_417;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result210__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    memset(&result_418,0,sizeof(char*));
    __result211__ = gComeFunResultObject = __result_obj__ = result_418;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_420;
char* __result212__;
char* __result213__;
char* result_421;
char* __result214__;
result_420 = (void*)0;
result_421 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_420,0,sizeof(char*));
        __result212__ = gComeFunResultObject = __result_obj__ = result_420;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result213__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    memset(&result_421,0,sizeof(char*));
    __result214__ = gComeFunResultObject = __result_obj__ = result_421;
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_424;
unsigned int it_425;
char* __result215__;
char* __result216__;
char* __result217__;
char* __result218__;
    hash_424=string_get_hash_key(((char*)key))%self->size;
    it_425=hash_424;
    while((_Bool)1) {
        if(        self->item_existance[it_425]) {
            if(            string_equals(self->keys[it_425],key)) {
                __result215__ = gComeFunResultObject = __result_obj__ = self->items[it_425];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result215__;
            }
            it_425++;
            if(            it_425>=self->size) {
                it_425=0;
            }
            else if(            it_425==hash_424) {
                __result216__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result216__;
            }
        }
        else {
            __result217__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result217__;
        }
    }
    __result218__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj181;
char* __dec_obj182;
struct sClass* __dec_obj183;
struct list$1sNodeph* __dec_obj184;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj181=self->sname;
            /*G*/ __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj182=self->mName;
            /*G*/ __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj183=self->mClass;
            come_call_finalizer3(__dec_obj183,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(        self->mMethods==gComeFunResultObject) {
            __dec_obj184=self->mMethods;
            come_call_finalizer3(__dec_obj184,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result221__;
void* __right_value420 = (void*)0;
struct sClassNode* result_436;
void* __right_value421 = (void*)0;
char* __dec_obj185;
void* __right_value422 = (void*)0;
char* __dec_obj186;
void* __right_value423 = (void*)0;
struct sClass* __dec_obj187;
void* __right_value424 = (void*)0;
struct list$1sNodeph* __dec_obj188;
struct sClassNode* __result222__;
    if(    self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_436=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"));
    if(    self!=((void*)0)) {
        result_436->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj185=result_436->sname;
        result_436->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj186=result_436->mName;
        result_436->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj187=result_436->mClass;
        result_436->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj187,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj188=result_436->mMethods;
        result_436->mMethods=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mMethods));
        come_call_finalizer3(__dec_obj188,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_436->mOutput=self->mOutput;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_436;
    /*i*/come_call_finalizer3(result_436,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_437;
char* p_438;
int sline_439;
void* __right_value427 = (void*)0;
char* type_name_440;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
char* type_name_441;
void* __right_value432 = (void*)0;
struct sNode* __result225__;
void* __right_value433 = (void*)0;
struct sNode* __result226__;
    define_struct_437=(_Bool)0;
    {
        p_438=info->p;
        sline_439=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_440=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value428=parse_word(info)));
                    __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((char*)(__right_value429=parse_word(info)));
                    __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==123) {
                    ((char*)(__right_value430=skip_block(info)));
                    __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        define_struct_437=(_Bool)1;
                    }
                }
                type_name_440 = come_decrement_ref_count2(type_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_438;
        info->sline=sline_439;
    }
    if(    define_struct_437) {
        type_name_441=(char*)come_increment_ref_count(parse_word(info));
        __result225__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value432=parse_struct((char*)come_increment_ref_count(type_name_441),info)));
        type_name_441 = come_decrement_ref_count2(type_name_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(__right_value432) { __right_value432 = come_decrement_ref_count2(__right_value432, ((struct sNode*)__right_value432)->finalize, ((struct sNode*)__right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result225__;
        type_name_441 = come_decrement_ref_count2(type_name_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result226__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value433=string_node_v13(buf,head,head_sline,info)));
    if(__right_value433) { __right_value433 = come_decrement_ref_count2(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result226__;
}

