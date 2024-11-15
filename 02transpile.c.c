// source head
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
extern _Bool gComePthread;
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
    struct tuple1$1sTypeph* mChannelType;
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
    _Bool mChannel;
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
    _Bool no_output_come_code2;
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
struct map$2charphint
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
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
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
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
struct __current_stack2__
{
    int* n_85;
    char** msg2_73;
    char** p_75;
    char** last_lf_76;
    struct sInfo** info;
    char** msg;
};
struct __current_stack3__
{
    struct sInfo* info_358;
    struct buffer** clang_option_338;
    struct buffer** linker_option_339;
    struct buffer** cpp_option_340;
    struct list$1charph** files_341;
    struct list$1charph** object_files_342;
    _Bool* output_object_file_343;
    _Bool* output_cpp_file_344;
    _Bool* output_source_file_flag_345;
    _Bool* output_object_file_flag_346;
    char** output_file_name_347;
    _Bool* verbose_348;
    _Bool* come_debug_349;
    _Bool* come_malloc_350;
    int* argc;
    char*** argv;
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
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
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
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
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
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
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
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
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
_Bool short_equals(short self, short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
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
unsigned int short_get_hash_key(short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(long self);
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
_Bool sNodeBase_terminated(struct sNodeBase* self);
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
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
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
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
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
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
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
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
void err_msg(struct sInfo* info, char* msg, ...);
static int list$1int_length(struct list$1int* self);
static int list$1int_begin(struct list$1int* self);
static _Bool list$1int_end(struct list$1int* self);
static int list$1int_next(struct list$1int* self);
static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*));
char* method_block2_02transpilec(struct __current_stack2__* parent, char* it);
static char* list$1charph_join(struct list$1charph* self, char* sep);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
int come_main_v2(int argc, char** argv);
static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static struct map$2charphint* map$2charphint_initialize(struct map$2charphint* self);
static void map$2charphintp_finalize(struct map$2charphint* self);
static void map$2charphint_finalize(struct map$2charphint* self);
static void sInfo_finalize(struct sInfo* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list$1int_finalize(struct list$1int* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
void method_block3_02transpilec(struct __current_stack3__* parent);
// uniq global variable
// source head3
_Bool gComeGC=(_Bool)0;
_Bool gComeLink=(_Bool)1;
_Bool gComeC=(_Bool)1;
_Bool gComeStr=(_Bool)0;
_Bool gComeNet=(_Bool)0;
_Bool gComePthread=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
char* CC="clang";
static char* RM="rm -rf";

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2423, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2430, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2439, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2446, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2453, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2460, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2467, "buffer"))));
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
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2767, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2772, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2777, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2782, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2787, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2820, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2822, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2827, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2829, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2834, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2836, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2841, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2843, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2848, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2850, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2855, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2857, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2862, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2864, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2869, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2874, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2879, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2884, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2889, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2894, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2899, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2904, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2909, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2914, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2919, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2924, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2929, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2934, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
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
static inline unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
    self->p=(short*)value->buf;
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
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 227, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 237, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 247, "list_item$1char"))));
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
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 227, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 237, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 247, "list_item$1charp"))));
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


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
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

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 227, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 237, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 247, "list_item$1short"))));
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
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 227, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 237, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 247, "list_item$1int"))));
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
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 227, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 237, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 247, "list_item$1long"))));
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
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 227, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 237, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 247, "list_item$1float"))));
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
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 227, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 237, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 247, "list_item$1double"))));
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1021, "char")));
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1021, "char*")));
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
            /* U13 */self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1021, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1021, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1021, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1021, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1021, "double")));
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











static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
    if(    gComeOriginalSourcePosition) {
        if(        info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value118=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value116=int_to_string(info->sline))),((char*)(__right_value117=string_to_string(info->sname)))))));
            /* U11 */__right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value119 = (void*)0;
char* sname_66;
int sline_67;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
char* __dec_obj15;
_Bool result_68;
void* __right_value122 = (void*)0;
char* __dec_obj16;
_Bool __result65__;
    sname_66=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_67=info->sline;
    __dec_obj15=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value120=node->sname(node->_protocol_obj)))));
    /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value120 = come_decrement_ref_count2(__right_value120, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=node->sline(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_68=node->compile(node->_protocol_obj,info);
    __dec_obj16=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_66));
    /*G*/ __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_67;
    __result65__ = result_68;
    /* U13 */sname_66 = come_decrement_ref_count2(sname_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result65__;
}

_Bool node_condional_compile(struct sNode* node, struct sInfo* info){
void* __right_value123 = (void*)0;
char* sname_69;
int sline_70;
_Bool comma_instead_of_semicolon_71;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
char* __dec_obj17;
_Bool result_72;
void* __right_value126 = (void*)0;
char* __dec_obj18;
_Bool __result66__;
    sname_69=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_70=info->sline;
    comma_instead_of_semicolon_71=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    __dec_obj17=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value124=node->sname(node->_protocol_obj)))));
    /*G*/ __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=node->sline(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_72=node->compile(node->_protocol_obj,info);
    __dec_obj18=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_69));
    /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_70;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_71;
    __result66__ = result_72;
    /* U13 */sname_69 = come_decrement_ref_count2(sname_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result66__;
}

void err_msg(struct sInfo* info, char* msg, ...){
char* msg2_73;
va_list args_74;
char* p_75;
char* last_lf_76;
int col_77;
int col_78;
struct list$1int* o2_saved_79;
int it_82;
int n_85;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
void* __right_value134 = (void*)0;
struct __current_stack2__ __current_stack2__;
void* __right_value139 = (void*)0;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
msg2_73 = (void*)0;
memset(&args_74, 0, sizeof(va_list));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(    !info->no_output_err) {
        __builtin_va_start(args_74,msg);
        vasprintf(&msg2_73,msg,args_74);
        __builtin_va_end(args_74);
        p_75=info->p;
        last_lf_76=((void*)0);
        while(p_75>=info->head) {
            if(            *p_75==10) {
                last_lf_76=p_75;
                break;
            }
            p_75--;
        }
        if(        last_lf_76) {
            col_77=info->p-last_lf_76;
            printf("%s %d(top %d) %d: %s\n",info->sname,info->sline,info->sline_top,col_77,msg2_73);
        }
        else {
            col_78=info->p-info->head;
            printf("%s %d(top %d) %d: %s\n",info->sname,info->sline,info->sline_top,col_78,msg2_73);
        }
        if(        info->sline_stack&&list$1int_length(info->sline_stack)>0) {
            printf("sline_stack ");
            for(            o2_saved_79=(struct list$1int*)come_increment_ref_count((info->sline_stack)),it_82=list$1int_begin((o2_saved_79));            !list$1int_end((o2_saved_79));            it_82=list$1int_next((o2_saved_79))            ){
                printf("%d ",it_82);
            }
            /*i*/come_call_finalizer3(o2_saved_79,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
            puts("");
        }
        info->err_num++;
        stackframe();
        if(        info->come_fun) {
            n_85=info->sline-5;
            __current_stack2__.n_85 = &n_85;
            __current_stack2__.msg2_73 = &msg2_73;
            __current_stack2__.p_75 = &p_75;
            __current_stack2__.last_lf_76 = &last_lf_76;
            __current_stack2__.info = &info;
            __current_stack2__.msg = &msg;
            ((char*)(__right_value144=string_puts(((char*)(__right_value143=list$1charph_join(((struct list$1charph*)(__right_value139=list$1charph_map2(((struct list$1charph*)(__right_value134=list$1charph_sublist(((struct list$1charph*)(__right_value128=string_split_char(((char*)(__right_value127=buffer_to_string(info->original_source))),10))),n_85,n_85+10))),&__current_stack2__,(void*)method_block2_02transpilec))),"\n"))))));
            /* U11 */__right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value128,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value134,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value139,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            /* U11 */__right_value143 = come_decrement_ref_count2(__right_value143, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        free(msg2_73);
        /*i*/come_call_finalizer3((&args_74),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

static int list$1int_length(struct list$1int* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1int_begin(struct list$1int* self){
int result_80;
int result_81;
memset(&result_80, 0, sizeof(int));
memset(&result_81, 0, sizeof(int));
    if(    self==((void*)0)) {
        memset(&result_80,0,sizeof(int));
        return result_80;
    }
    self->it=self->head;
    if(    self->it) {
        return self->it->item;
    }
    memset(&result_81,0,sizeof(int));
    return result_81;
}

static _Bool list$1int_end(struct list$1int* self){
    return self==((void*)0)||self->it==((void*)0);
}

static int list$1int_next(struct list$1int* self){
int result_83;
int result_84;
memset(&result_83, 0, sizeof(int));
memset(&result_84, 0, sizeof(int));
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_83,0,sizeof(int));
        return result_83;
    }
    self->it=self->it->next;
    if(    self->it) {
        return self->it->item;
    }
    memset(&result_84,0,sizeof(int));
    return result_84;
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1charph* result_86;
struct list_item$1charph* it_89;
int i_90;
struct list$1charph* __result69__;
    result_86=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 657, "list$1charph"))));
    if(    begin<0) {
        begin+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    begin<0) {
        begin=0;
    }
    if(    tail>=self->len) {
        tail=self->len;
    }
    it_89=self->head;
    i_90=0;
    while(it_89!=((void*)0)) {
        if(        i_90>=begin&&i_90<tail) {
            list$1charph_push_back(result_86,(char*)come_increment_ref_count(it_89->item));
        }
        it_89=it_89->next;
        i_90++;
    }
    __result69__ = gComeFunResultObject = __result_obj__ = result_86;
    /*i*/come_call_finalizer3(result_86,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result67__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_87;
struct list_item$1charph* prev_it_88;
    it_87=self->head;
    while(it_87!=((void*)0)) {
        prev_it_88=it_87;
        it_87=it_87->next;
        /*i*/come_call_finalizer3(prev_it_88,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj19;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj19=self->item;
            /*G*/ __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct list_item$1charph* litem_91;
char* __dec_obj20;
void* __right_value132 = (void*)0;
struct list_item$1charph* litem_92;
char* __dec_obj21;
void* __right_value133 = (void*)0;
struct list_item$1charph* litem_93;
char* __dec_obj22;
struct list$1charph* __result68__;
    if(    self->len==0) {
        litem_91=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value131=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 227, "list_item$1charph"))));
        litem_91->prev=((void*)0);
        litem_91->next=((void*)0);
        __dec_obj20=litem_91->item;
        litem_91->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_91;
        self->head=litem_91;
    }
    else if(    self->len==1) {
        litem_92=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value132=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 237, "list_item$1charph"))));
        litem_92->prev=self->head;
        litem_92->next=((void*)0);
        __dec_obj21=litem_92->item;
        litem_92->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_92;
        self->head->next=litem_92;
    }
    else {
        litem_93=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value133=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 247, "list_item$1charph"))));
        litem_93->prev=self->tail;
        litem_93->next=((void*)0);
        __dec_obj22=litem_93->item;
        litem_93->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_93;
        self->tail=litem_93;
    }
    self->len++;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct list$1charph* result_100;
struct list_item$1charph* it_101;
void* __right_value137 = (void*)0;
char* item_102;
struct list$1charph* __result74__;
    result_100=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 883, "list$1charph"))));
    it_101=self->head;
    while(it_101!=((void*)0)) {
        item_102=(char*)come_increment_ref_count(block(parent,it_101->item));
        list$1charph_push_back(result_100,(char*)come_increment_ref_count(item_102));
        it_101=it_101->next;
        /* U13 */item_102 = come_decrement_ref_count2(item_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result74__ = gComeFunResultObject = __result_obj__ = result_100;
    /*i*/come_call_finalizer3(result_100,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

char* method_block2_02transpilec(struct __current_stack2__* parent, char* it){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
char* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value138=xsprintf("%d %s",++(*(parent->n_85)),it)));
    /* U11 */__right_value138 = come_decrement_ref_count2(__right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct buffer* buf_103;
int n_104;
char* it_107;
void* __right_value142 = (void*)0;
char* __result82__;
    buf_103=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 979, "buffer"))));
    n_104=0;
    for(    it_107=list$1charph_begin(self);    !list$1charph_end(self);    it_107=list$1charph_next(self)    ){
        buffer_append_str(buf_103,it_107);
        if(        n_104<list$1charph_length(self)-1) {
            buffer_append_str(buf_103,sep);
        }
        n_104++;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value142=buffer_to_string(buf_103)));
    /*i*/come_call_finalizer3(buf_103,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value142 = come_decrement_ref_count2(__right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_105;
char* __result76__;
char* __result77__;
char* result_106;
char* __result78__;
result_105 = (void*)0;
result_106 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_105,0,sizeof(char*));
        __result76__ = gComeFunResultObject = __result_obj__ = result_105;
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    self->it=self->head;
    if(    self->it) {
        __result77__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    memset(&result_106,0,sizeof(char*));
    __result78__ = gComeFunResultObject = __result_obj__ = result_106;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_108;
char* __result79__;
char* __result80__;
char* result_109;
char* __result81__;
result_108 = (void*)0;
result_109 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_108,0,sizeof(char*));
        __result79__ = gComeFunResultObject = __result_obj__ = result_108;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result80__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    memset(&result_109,0,sizeof(char*));
    __result81__ = gComeFunResultObject = __result_obj__ = result_109;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void va_list_finalize(va_list self){
}

int transpile_v2(struct sInfo* info){
    return 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __right_value145 = (void*)0;
char* output_file_name_110;
void* __right_value146 = (void*)0;
_Bool __result83__;
    output_file_name_110=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    string_write(((char*)(__right_value146=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_110,(_Bool)0);
    /* U11 */__right_value146 = come_decrement_ref_count2(__right_value146, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result83__ = (_Bool)1;
    /* U13 */output_file_name_110 = come_decrement_ref_count2(output_file_name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result83__;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_111;
void* __right_value147 = (void*)0;
    input_file_name_111=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_111!=((void*)0)&&string_operator_not_equals(input_file_name_111,"")) {
        system(((char*)(__right_value147=xsprintf("%s %s.*",RM,input_file_name_111))));
        /* U11 */__right_value147 = come_decrement_ref_count2(__right_value147, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    /* U13 */input_file_name_111 = come_decrement_ref_count2(input_file_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_112;
void* __right_value148 = (void*)0;
    input_file_name_112=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_112!=((void*)0)&&string_operator_not_equals(input_file_name_112,"")) {
        system(((char*)(__right_value148=xsprintf("%s %s.i* %s.c*",RM,input_file_name_112,input_file_name_112))));
        /* U11 */__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    /* U13 */input_file_name_112 = come_decrement_ref_count2(input_file_name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_113;
void* __right_value149 = (void*)0;
    input_file_name_113=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_113!=((void*)0)&&string_operator_not_equals(input_file_name_113,"")) {
        system(((char*)(__right_value149=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_113,input_file_name_113))));
        /* U11 */__right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    /* U13 */input_file_name_113 = come_decrement_ref_count2(input_file_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_114;
char* output_file_name_115;
void* __right_value150 = (void*)0;
char* __dec_obj23;
void* __right_value151 = (void*)0;
char* __dec_obj24;
void* __right_value152 = (void*)0;
char* cmd_116;
_Bool exist_common_h_117;
struct _IO_FILE* f_118;
int rc2_119;
int rc_120;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
char* cmd3_121;
int rc_122;
void* __right_value155 = (void*)0;
char* command2_123;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
char* cmd2_124;
int rc_125;
void* __right_value158 = (void*)0;
char* command2_126;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
char* cmd3_127;
void* __right_value161 = (void*)0;
char* cmd_debian_128;
int rc_debian_129;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
char* __dec_obj25;
int rc_130;
void* __right_value164 = (void*)0;
char* command2_131;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* cmd4_132;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
char* __dec_obj26;
void* __right_value169 = (void*)0;
char* command_133;
void* __right_value170 = (void*)0;
char* command2_134;
_Bool __result84__;
output_file_name_115 = (void*)0;
    input_file_name_114=(char*)come_increment_ref_count(info->sname);
    if(    !info->output_header_file&&info->output_file_name) {
        __dec_obj23=output_file_name_115;
        output_file_name_115=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        /*G*/ __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj24=output_file_name_115;
        output_file_name_115=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    cmd_116=(char*)come_increment_ref_count(xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"));
    exist_common_h_117=(_Bool)0;
    {
        f_118=fopen("common.h","r");
        if(        f_118) {
            exist_common_h_117=(_Bool)1;
        }
        if(        string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_117=(_Bool)0;
        }
        if(        f_118) {
            fclose(f_118);
        }
    }
    if(    !gCommonHeader) {
        exist_common_h_117=(_Bool)0;
    }
    rc2_119=system("uname -a | grep Android 1> /dev/null 2>/dev/null");
    rc_120=system(cmd_116);
    if(    rc2_119==0) {
        cmd3_121=(char*)come_increment_ref_count(xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_117)?(((char*)(__right_value153=__builtin_string(" -include common.h ")))):("")),input_file_name_114,output_file_name_115,output_file_name_115));
        /* U11 */__right_value153 = come_decrement_ref_count2(__right_value153, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd3_121);
        }
        rc_122=system(cmd3_121);
        command2_123=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_115));
        if(        info->verbose) {
            puts(command2_123);
        }
        (void)system(command2_123);
        if(        rc_122!=0) {
            printf("cpp failed\n");
            exit(2);
        }
        /* U13 */cmd3_121 = come_decrement_ref_count2(cmd3_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */command2_123 = come_decrement_ref_count2(command2_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    rc_120==0) {
        cmd2_124=(char*)come_increment_ref_count(xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_117)?(((char*)(__right_value156=__builtin_string(" -include common.h ")))):("")),input_file_name_114,output_file_name_115,output_file_name_115));
        /* U11 */__right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd2_124);
        }
        rc_125=system(cmd2_124);
        if(        rc_125!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_124);
            exit(5);
        }
        command2_126=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_115));
        if(        info->verbose) {
            puts(command2_126);
        }
        (void)system(command2_126);
        /* U13 */cmd2_124 = come_decrement_ref_count2(cmd2_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */command2_126 = come_decrement_ref_count2(command2_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        cmd3_127=(char*)come_increment_ref_count(xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_117)?(((char*)(__right_value159=__builtin_string(" -include common.h ")))):("")),input_file_name_114,output_file_name_115,output_file_name_115));
        /* U11 */__right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        cmd_debian_128=(char*)come_increment_ref_count(xsprintf("uname -a | grep Debian 1> /dev/null 2>/dev/null"));
        rc_debian_129=system(cmd_debian_128);
        if(        rc_debian_129==0) {
            __dec_obj25=cmd3_127;
            cmd3_127=(char*)come_increment_ref_count(xsprintf("cpp -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_117)?(((char*)(__right_value162=__builtin_string(" -include common.h ")))):("")),input_file_name_114,output_file_name_115,output_file_name_115));
            /*G*/ __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U11 */__right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(        info->verbose) {
            puts(cmd3_127);
        }
        rc_130=system(cmd3_127);
        command2_131=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_115));
        if(        info->verbose) {
            puts(command2_131);
        }
        (void)system(command2_131);
        if(        rc_130!=0) {
            cmd4_132=(char*)come_increment_ref_count(xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_117)?(((char*)(__right_value165=__builtin_string(" -include common.h ")))):("")),input_file_name_114,output_file_name_115,output_file_name_115));
            /* U11 */__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            rc_debian_129==0) {
                __dec_obj26=cmd4_132;
                cmd4_132=(char*)come_increment_ref_count(xsprintf("cpp -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_117)?(((char*)(__right_value167=__builtin_string(" -include common.h ")))):("")),input_file_name_114,output_file_name_115,output_file_name_115));
                /*G*/ __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U11 */__right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            command_133=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_115,input_file_name_114,info->clang_option,input_file_name_114));
            if(            info->verbose) {
                puts(cmd4_132);
            }
            rc_130=system(cmd4_132);
            command2_134=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_115));
            if(            info->verbose) {
                puts(command2_134);
            }
            (void)system(command2_134);
            if(            rc_130!=0) {
                printf("failed to cpp(2) (%s)\n",cmd4_132);
                exit(5);
            }
            /* U13 */cmd4_132 = come_decrement_ref_count2(cmd4_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */command_133 = come_decrement_ref_count2(command_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */command2_134 = come_decrement_ref_count2(command2_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /* U13 */cmd3_127 = come_decrement_ref_count2(cmd3_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */cmd_debian_128 = come_decrement_ref_count2(cmd_debian_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */command2_131 = come_decrement_ref_count2(command2_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result84__ = (_Bool)1;
    /* U13 */input_file_name_114 = come_decrement_ref_count2(input_file_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */output_file_name_115 = come_decrement_ref_count2(output_file_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */cmd_116 = come_decrement_ref_count2(cmd_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __right_value171 = (void*)0;
char* input_file_name_135;
char* output_file_name_136;
void* __right_value172 = (void*)0;
char* __dec_obj27;
void* __right_value173 = (void*)0;
char* __dec_obj28;
void* __right_value174 = (void*)0;
char* command_137;
int rc_138;
void* __right_value175 = (void*)0;
char* command2_139;
_Bool __result85__;
void* __right_value179 = (void*)0;
_Bool __result88__;
    input_file_name_135=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    output_file_name_136=((void*)0);
    if(    info->output_file_name&&output_object_file) {
        __dec_obj27=output_file_name_136;
        output_file_name_136=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        /*G*/ __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj28=output_file_name_136;
        output_file_name_136=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_137=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_136,input_file_name_135,info->clang_option,input_file_name_135));
    if(    info->verbose) {
        puts(command_137);
    }
    rc_138=system(command_137);
    command2_139=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out",input_file_name_135));
    if(    info->verbose) {
        puts(command2_139);
    }
    (void)system(command2_139);
    if(    rc_138!=0) {
        printf("%s %d: %s is faild\n",CC,info->sname,info->sline);
        __result85__ = (_Bool)0;
        /* U13 */input_file_name_135 = come_decrement_ref_count2(input_file_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */output_file_name_136 = come_decrement_ref_count2(output_file_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */command_137 = come_decrement_ref_count2(command_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */command2_139 = come_decrement_ref_count2(command2_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result85__;
    }
    if(    !output_object_file) {
        list$1charph_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_136)));
    }
    __result88__ = (_Bool)1;
    /* U13 */input_file_name_135 = come_decrement_ref_count2(input_file_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */output_file_name_136 = come_decrement_ref_count2(output_file_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */command_137 = come_decrement_ref_count2(command_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */command2_139 = come_decrement_ref_count2(command2_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result88__;
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__=(void*)0;
int len_140;
int i_141;
char* default_value_142;
struct list$1charph* __result86__;
void* __right_value176 = (void*)0;
struct list_item$1charph* litem_143;
char* __dec_obj29;
void* __right_value177 = (void*)0;
struct list_item$1charph* litem_144;
char* __dec_obj30;
struct list_item$1charph* it_145;
int i_146;
void* __right_value178 = (void*)0;
struct list_item$1charph* litem_147;
char* __dec_obj31;
struct list$1charph* __result87__;
default_value_142 = (void*)0;
    if(    position<0) {
        position+=self->len+1;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_140=self->len;
        for(        i_141=0;        i_141<position-len_140;        i_141++        ){
            memset(&default_value_142,0,sizeof(char*));
            list$1charph_push_back(self,(char*)come_increment_ref_count(default_value_142));
            /* U13 */default_value_142 = come_decrement_ref_count2(default_value_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1charph_push_back(self,(char*)come_increment_ref_count(item));
        __result86__ = gComeFunResultObject = __result_obj__ = self;
        /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    if(    position==0) {
        litem_143=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value176=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 387, "list_item$1charph"))));
        litem_143->prev=((void*)0);
        litem_143->next=self->head;
        __dec_obj29=litem_143->item;
        litem_143->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->head->prev=litem_143;
        self->head=litem_143;
        self->len++;
    }
    else if(    self->len==1) {
        litem_144=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value177=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 399, "list_item$1charph"))));
        litem_144->prev=self->head;
        litem_144->next=self->tail;
        __dec_obj30=litem_144->item;
        litem_144->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->prev=litem_144;
        self->head->next=litem_144;
        self->len++;
    }
    else {
        it_145=self->head;
        i_146=0;
        while(it_145!=((void*)0)) {
            if(            position==i_146) {
                litem_147=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value178=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 415, "list_item$1charph"))));
                litem_147->prev=it_145->prev;
                litem_147->next=it_145;
                __dec_obj31=litem_147->item;
                litem_147->item=(char*)come_increment_ref_count(item);
                /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                it_145->prev->next=litem_147;
                it_145->prev=litem_147;
                self->len++;
            }
            it_145=it_145->next;
            i_146++;
        }
    }
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
char* output_file_name_148;
void* __right_value180 = (void*)0;
char* __dec_obj32;
void* __right_value181 = (void*)0;
char* __dec_obj33;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct buffer* command_149;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
struct list$1charph* o2_saved_150;
char* it_151;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
char* cmd_152;
int rc_153;
void* __right_value189 = (void*)0;
char* __dec_obj34;
void* __right_value190 = (void*)0;
char* __dec_obj35;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
char* __dec_obj36;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
char* __dec_obj37;
void* __right_value196 = (void*)0;
char* cmd2_154;
void* __right_value197 = (void*)0;
char* cmd3_155;
int rc2_156;
int rc3_157;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
_Bool __result89__;
_Bool __result90__;
    output_file_name_148=((void*)0);
    if(    info->output_file_name) {
        __dec_obj32=output_file_name_148;
        output_file_name_148=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj33=output_file_name_148;
        output_file_name_148=(char*)come_increment_ref_count(xnoextname(info->sname));
        /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_149=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 328, "buffer"))));
    buffer_append_str(command_149,((char*)(__right_value184=xsprintf("%s -o %s ",CC,output_file_name_148))));
    /* U11 */__right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_str(command_149,((char*)(__right_value186=charp_operator_add(" ",((char*)(__right_value185=string_operator_add(info->linker_option," ")))))));
    /* U11 */__right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_150=(object_files),it_151=list$1charph_begin((o2_saved_150));    !list$1charph_end((o2_saved_150));    it_151=list$1charph_next((o2_saved_150))    ){
        buffer_append_str(command_149,((char*)(__right_value187=xsprintf("%s ",it_151))));
        /* U11 */__right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    cmd_152=(char*)come_increment_ref_count(xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"));
    rc_153=system(cmd_152);
    if(    rc_153==0) {
        buffer_append_str(command_149," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    __dec_obj34=cmd_152;
    cmd_152=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    rc_153=system(cmd_152);
    if(    rc_153==0) {
        buffer_append_str(command_149," -L/usr/local/lib ");
    }
    __dec_obj35=cmd_152;
    cmd_152=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    /*G*/ __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    rc_153=system(cmd_152);
    if(    rc_153==0) {
        buffer_append_str(command_149,((char*)(__right_value191=xsprintf(" -L%s/lib ",getenv("HOME")))));
        /* U11 */__right_value191 = come_decrement_ref_count2(__right_value191, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj36=cmd_152;
    cmd_152=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    rc_153=system(cmd_152);
    if(    rc_153==0) {
        buffer_append_str(command_149,((char*)(__right_value193=xsprintf(" -L%s/lib ","/usr/local/"))));
        /* U11 */__right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    buffer_append_str(command_149,((char*)(__right_value194=xsprintf(" %s ",info->clang_option))));
    /* U11 */__right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    gComeStr) {
        if(        gComeGC) {
            buffer_append_str(command_149," -lcomelang-str-gc -lpcre ");
        }
        else {
            buffer_append_str(command_149," -lcomelang-str -lpcre ");
        }
    }
    if(    gComeGC) {
        buffer_append_str(command_149," -lcomelang-gc -lgc ");
    }
    if(    gComePthread) {
        buffer_append_str(command_149," -lcomelang-pthread -lpthread ");
    }
    if(    gComeNet) {
        __dec_obj37=cmd_152;
        cmd_152=(char*)come_increment_ref_count(xsprintf("which apk 1> /dev/null 2>/dev/null"));
        /*G*/ __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        cmd2_154=(char*)come_increment_ref_count(xsprintf("uname -a | grep Debian 1> /dev/null 2>/dev/null"));
        cmd3_155=(char*)come_increment_ref_count(xsprintf("uname -a | grep Android 1>/dev/null 2>/dev/null"));
        rc_153=system(cmd_152);
        rc2_156=system(cmd2_154);
        rc3_157=system(cmd3_155);
        if(        rc3_157==0) {
            if(            gComeGC) {
                buffer_append_str(command_149," -lcomelang-net-gc -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
            }
            else {
                buffer_append_str(command_149," -lcomelang-net -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
            }
        }
        else if(        rc_153==0||rc2_156==0) {
            if(            gComeGC) {
                buffer_append_str(command_149," -lcomelang-net-gc -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
            }
            else {
                buffer_append_str(command_149," -lcomelang-net -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
            }
        }
        else {
            if(            gComeGC) {
                buffer_append_str(command_149," -lcomelang-net-gc -lssl `mysql_config --cflags --libs`");
            }
            else {
                buffer_append_str(command_149," -lcomelang-net -lssl `mysql_config --cflags --libs`");
            }
        }
        /* U13 */cmd2_154 = come_decrement_ref_count2(cmd2_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */cmd3_155 = come_decrement_ref_count2(cmd3_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(command_149," -lcomelang ");
    if(    info->verbose) {
        puts(((char*)(__right_value198=buffer_to_string(command_149))));
        /* U11 */__right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    rc_153=system(((char*)(__right_value199=buffer_to_string(command_149))));
    /* U11 */__right_value199 = come_decrement_ref_count2(__right_value199, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    rc_153!=0) {
        printf("%s %d: %s is faild\n",CC,info->sname,info->sline);
        __result89__ = (_Bool)0;
        /* U13 */output_file_name_148 = come_decrement_ref_count2(output_file_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(command_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */cmd_152 = come_decrement_ref_count2(cmd_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result89__;
    }
    __result90__ = (_Bool)1;
    /* U13 */output_file_name_148 = come_decrement_ref_count2(output_file_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(command_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */cmd_152 = come_decrement_ref_count2(cmd_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result90__;
}

_Bool new_project(int argc, char** argv){
void* __right_value200 = (void*)0;
char* project_name_158;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
char* project_name_debug_159;
void* __right_value204 = (void*)0;
char* cc_160;
void* __right_value205 = (void*)0;
char* install_161;
void* __right_value206 = (void*)0;
char* libs_162;
void* __right_value207 = (void*)0;
char* os_163;
void* __right_value208 = (void*)0;
char* prefix_164;
void* __right_value209 = (void*)0;
char* cflags_165;
void* __right_value210 = (void*)0;
char* cflags_debug_166;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
int r_167;
_Bool __exception_result_var_b1;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
_Bool __result91__;
    project_name_158=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_159=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value201=__builtin_string(argv[2]))),((char*)(__right_value202=__builtin_string("-debug")))));
    /* U11 */__right_value201 = come_decrement_ref_count2(__right_value201, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value202 = come_decrement_ref_count2(__right_value202, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    cc_160=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_161=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_162=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_163=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_164=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_165=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_166=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg "));
    r_167=system(((char*)(__right_value212=xsprintf("mkdir \%s",((char*)(__right_value211=string_to_string(project_name_158)))))));
    /* U11 */__right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    r_167<0) {
        (come_push_stackframe("02transpile.c", 442, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    charp_write(((char*)(__right_value239=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value213=string_to_string(prefix_164))),((char*)(__right_value214=string_to_string(project_name_158))),((char*)(__right_value215=string_to_string(project_name_158))),((char*)(__right_value216=string_to_string(project_name_158))),((char*)(__right_value217=string_to_string(project_name_158))),((char*)(__right_value218=string_to_string(cc_160))),((char*)(__right_value219=string_to_string(install_161))),((char*)(__right_value220=string_to_string(cflags_165))),((char*)(__right_value221=string_to_string(cflags_debug_166))),((char*)(__right_value222=string_to_string(libs_162))),((char*)(__right_value223=string_to_string(os_163))),((char*)(__right_value224=string_to_string(prefix_164))),((char*)(__right_value225=string_to_string(project_name_158))),((char*)(__right_value226=string_to_string(project_name_debug_159))),((char*)(__right_value227=string_to_string(project_name_158))),((char*)(__right_value228=string_to_string(project_name_158))),((char*)(__right_value229=string_to_string(project_name_158))),((char*)(__right_value230=string_to_string(project_name_158))),((char*)(__right_value231=string_to_string(project_name_debug_159))),((char*)(__right_value232=string_to_string(project_name_158))),((char*)(__right_value233=string_to_string(project_name_158))),((char*)(__right_value234=string_to_string(project_name_158))),((char*)(__right_value235=string_to_string(project_name_158))),((char*)(__right_value236=string_to_string(project_name_158))),((char*)(__right_value237=string_to_string(project_name_debug_159))),((char*)(__right_value238=string_to_string(project_name_debug_159)))))),((char*)(__right_value241=xsprintf("\%s/Makefile",((char*)(__right_value240=string_to_string(project_name_158)))))),(_Bool)0);
    /* U11 */__right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result91__ = (_Bool)1;
    /* U13 */project_name_158 = come_decrement_ref_count2(project_name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */project_name_debug_159 = come_decrement_ref_count2(project_name_debug_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */cc_160 = come_decrement_ref_count2(cc_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */install_161 = come_decrement_ref_count2(install_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */libs_162 = come_decrement_ref_count2(libs_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */os_163 = come_decrement_ref_count2(os_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */prefix_164 = come_decrement_ref_count2(prefix_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */cflags_165 = come_decrement_ref_count2(cflags_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */cflags_debug_166 = come_decrement_ref_count2(cflags_debug_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result91__;
}

_Bool run_project(int argc, char** argv){
struct _IO_FILE* f_168;
int r_169;
_Bool __exception_result_var_b2;
int r_170;
_Bool __exception_result_var_b3;
    f_168=fopen("common.h","r");
    if(    f_168==((void*)0)) {
        r_169=system("make header");
        if(        r_169<0) {
            (come_push_stackframe("02transpile.c", 547, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
    }
    else {
        fclose(f_168);
    }
    r_170=system("make run");
    if(    r_170<0) {
        (come_push_stackframe("02transpile.c", 554, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
int r_171;
_Bool __exception_result_var_b4;
    r_171=system("make header");
    if(    r_171<0) {
        (come_push_stackframe("02transpile.c", 562, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct _IO_FILE* f_172;
int r_173;
_Bool __exception_result_var_b5;
int r_174;
_Bool __exception_result_var_b6;
    f_172=fopen("common.h","r");
    if(    f_172==((void*)0)) {
        r_173=system("make header");
        if(        r_173<0) {
            (come_push_stackframe("02transpile.c", 573, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
        }
    }
    else {
        fclose(f_172);
    }
    r_174=system("make compile");
    if(    r_174<0) {
        (come_push_stackframe("02transpile.c", 579, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct _IO_FILE* f_175;
int r_176;
_Bool __exception_result_var_b7;
int r_177;
_Bool __exception_result_var_b8;
    f_175=fopen("common.h","r");
    if(    f_175==((void*)0)) {
        r_176=system("make header");
        if(        r_176<0) {
            (come_push_stackframe("02transpile.c", 590, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
        }
    }
    else {
        fclose(f_175);
    }
    r_177=system("make debug");
    if(    r_177<0) {
        (come_push_stackframe("02transpile.c", 596, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
int r_178;
_Bool __exception_result_var_b9;
    r_178=system("make clean");
    if(    r_178<0) {
        (come_push_stackframe("02transpile.c", 604, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
int r_179;
_Bool __exception_result_var_b10;
    r_179=system(((char*)(__right_value243=xsprintf("make install DESTDIR=\%s",((char*)(__right_value242=charp_to_string(prefix)))))));
    /* U11 */__right_value242 = come_decrement_ref_count2(__right_value242, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    r_179<0) {
        (come_push_stackframe("02transpile.c", 612, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
int i_235;
void* __right_value283 = (void*)0;
char* generics_type_236;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
int i_237;
void* __right_value286 = (void*)0;
char* generics_type_238;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
char* cmd_239;
int rc_240;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
char* type_name_241;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* type_242;
void* __right_value296 = (void*)0;
char* __dec_obj66;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sClass* klass_264;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 619, "sClass")),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 620, "sClass")),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 621, "sClass")),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 622, "sClass")),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 623, "sClass")),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 624, "sClass")),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 625, "sClass")),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 626, "sClass")),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 627, "sClass")),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 628, "sClass")),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 629, "sClass")),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 630, "sClass")),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    for(    i_235=0;    i_235<12;    i_235++    ){
        generics_type_236=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_235));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_236),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 633, "sClass")),generics_type_236,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_235,-1,(_Bool)0,info)));
        /* U13 */generics_type_236 = come_decrement_ref_count2(generics_type_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_237=0;    i_237<7;    i_237++    ){
        generics_type_238=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_237));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_238),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 637, "sClass")),generics_type_238,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_237,(_Bool)0,info)));
        /* U13 */generics_type_238 = come_decrement_ref_count2(generics_type_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    cmd_239=(char*)come_increment_ref_count(xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"));
    rc_240=system(cmd_239);
    if(    rc_240==0) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 644, "sClass")),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
        type_name_241=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_242=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 648, "sType")),"__builtin_va_list",(_Bool)0,info));
        __dec_obj66=type_242->mOriginalTypeName;
        type_242->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        /*G*/ __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_241)),(struct sType*)come_increment_ref_count(type_242));
        /* U13 */type_name_241 = come_decrement_ref_count2(type_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_264=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 656, "sClass")),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        list$1tuple2$2charphsTypephph_push_back(klass_264->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 658, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 658, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_264->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 659, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 659, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_264->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 660, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 660, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_264->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 661, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 661, "sType")),"int",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_264->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 662, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 662, "sType")),"int",(_Bool)0,info)))));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_264));
        /*i*/come_call_finalizer3(klass_264,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    /* U13 */cmd_239 = come_decrement_ref_count2(cmd_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_211;
unsigned int it_212;
_Bool same_key_exist_229;
char* it2_232;
struct map$2charphsClassph* __result112__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_211=string_get_hash_key(key)%self->size;
    it_212=hash_211;
    while((_Bool)1) {
        if(        self->item_existance[it_212]) {
            if(            string_equals(self->keys[it_212],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_212]);
                    /* U13 */self->keys[it_212] = come_decrement_ref_count2(self->keys[it_212], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_212]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_212]);
                    self->keys[it_212]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_212],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_212]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_212]=item;
                }
                break;
            }
            it_212++;
            if(            it_212>=self->size) {
                it_212=0;
            }
            else if(            it_212==hash_211) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_212]=(_Bool)1;
            if(            1) {
                self->keys[it_212]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_212]=key;
            }
            if(            1) {
                self->items[it_212]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_212]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_229=(_Bool)0;
    for(    it2_232=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_232=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_232,key)) {
            same_key_exist_229=(_Bool)1;
        }
    }
    if(    !same_key_exist_229) {
        list$1charp_push_back(self->key_list,key);
    }
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_180;
void* __right_value244 = (void*)0;
char** keys_181;
void* __right_value245 = (void*)0;
struct sClass** items_182;
void* __right_value246 = (void*)0;
_Bool* item_existance_183;
int len_184;
char* it_187;
struct sClass* default_value_190;
struct sClass* it2_191;
unsigned int hash_208;
int n_209;
struct sClass* default_value_210;
default_value_190 = (void*)0;
default_value_210 = (void*)0;
    size_180=self->size*10;
    keys_181=(char**)come_increment_ref_count(((char**)(__right_value244=(char**)come_calloc(1, sizeof(char*)*(1*(size_180)), "./comelang.h", 1655, "char*%"))));
    items_182=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value245=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_180)), "./comelang.h", 1656, "sClass*%"))));
    item_existance_183=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value246=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_180)), "./comelang.h", 1657, "bool"))));
    len_184=0;
    for(    it_187=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_187=map$2charphsClassph_next(self)    ){
        memset(&default_value_190,0,sizeof(struct sClass*));
        it2_191=map$2charphsClassph_at(self,it_187,default_value_190);
        hash_208=string_get_hash_key(it_187)%size_180;
        n_209=hash_208;
        while((_Bool)1) {
            if(            item_existance_183[n_209]) {
                n_209++;
                if(                n_209>=size_180) {
                    n_209=0;
                }
                else if(                n_209==hash_208) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_183[n_209]=(_Bool)1;
                keys_181[n_209]=it_187;
                items_182[n_209]=map$2charphsClassph_at(self,it_187,default_value_210);
                len_184++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_181;
    self->items=items_182;
    self->item_existance=item_existance_183;
    self->size=size_180;
    self->len=len_184;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_185;
char* __result92__;
char* __result93__;
char* result_186;
char* __result94__;
result_185 = (void*)0;
result_186 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_185,0,sizeof(char*));
        __result92__ = gComeFunResultObject = __result_obj__ = result_185;
        gComeFunResultObject = (void*)0;
        return __result92__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result93__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    memset(&result_186,0,sizeof(char*));
    __result94__ = gComeFunResultObject = __result_obj__ = result_186;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_188;
char* __result95__;
char* __result96__;
char* result_189;
char* __result97__;
result_188 = (void*)0;
result_189 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_188,0,sizeof(char*));
        __result95__ = gComeFunResultObject = __result_obj__ = result_188;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result96__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    memset(&result_189,0,sizeof(char*));
    __result97__ = gComeFunResultObject = __result_obj__ = result_189;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_192;
unsigned int it_193;
struct sClass* __result98__;
struct sClass* __result99__;
struct sClass* __result100__;
struct sClass* __result101__;
    hash_192=string_get_hash_key(((char*)key))%self->size;
    it_193=hash_192;
    while((_Bool)1) {
        if(        self->item_existance[it_193]) {
            if(            string_equals(self->keys[it_193],key)) {
                __result98__ = gComeFunResultObject = __result_obj__ = self->items[it_193];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result98__;
            }
            it_193++;
            if(            it_193>=self->size) {
                it_193=0;
            }
            else if(            it_193==hash_192) {
                __result99__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result99__;
            }
        }
        else {
            __result100__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result100__;
        }
    }
    __result101__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj38;
struct list$1tuple2$2charphsTypephph* __dec_obj39;
char* __dec_obj64;
char* __dec_obj65;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj38=self->mName;
            /*G*/ __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj39=self->mFields;
            come_call_finalizer3(__dec_obj39,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
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
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj65=self->mParentClassName;
            /*G*/ __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_194;
struct list_item$1tuple2$2charphsTypephph* prev_it_195;
    it_194=self->head;
    while(it_194!=((void*)0)) {
        prev_it_195=it_194;
        it_194=it_194->next;
        /*i*/come_call_finalizer3(prev_it_195,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            come_call_finalizer3(__dec_obj40,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj43;
struct tuple1$1sTypeph* __dec_obj45;
struct tuple1$1sTypeph* __dec_obj47;
char* __dec_obj49;
struct list$1sTypeph* __dec_obj50;
struct list$1sNodeph* __dec_obj52;
struct list$1sTypeph* __dec_obj54;
struct list$1charph* __dec_obj55;
struct tuple1$1sTypeph* __dec_obj56;
struct sNode* __dec_obj58;
struct tuple1$1sTypeph* __dec_obj59;
struct sNode* __dec_obj61;
char* __dec_obj62;
char* __dec_obj63;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj43=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj43,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj45=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj45,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj47=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj47,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj49=self->mGenericsName;
            /*G*/ __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj50=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj52=self->mArrayNum;
            come_call_finalizer3(__dec_obj52,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj54=self->mParamTypes;
            come_call_finalizer3(__dec_obj54,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj55=self->mParamNames;
            come_call_finalizer3(__dec_obj55,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj56=self->mResultType;
            come_call_finalizer3(__dec_obj56,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj58=self->mAlignas;
            /* U1 */ if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj59=self->mChannelType;
            come_call_finalizer3(__dec_obj59,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj61=self->mSizeNum;
            /* U1 */ if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj62=self->mOriginalTypeName;
            /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj63=self->mAsmName;
            /*G*/ __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_196;
struct list_item$1sTypeph* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        /*i*/come_call_finalizer3(prev_it_197,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj51;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj51=self->item;
            come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_198;
struct list_item$1sTypeph* prev_it_199;
    it_198=self->head;
    while(it_198!=((void*)0)) {
        prev_it_199=it_198;
        it_198=it_198->next;
        /*i*/come_call_finalizer3(prev_it_199,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_200;
struct list_item$1sNodeph* prev_it_201;
    it_200=self->head;
    while(it_200!=((void*)0)) {
        prev_it_201=it_200;
        it_200=it_200->next;
        /*i*/come_call_finalizer3(prev_it_201,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj53;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj53=self->item;
            /* U1 */ if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_202;
struct list_item$1sNodeph* prev_it_203;
    it_202=self->head;
    while(it_202!=((void*)0)) {
        prev_it_203=it_202;
        it_202=it_202->next;
        /*i*/come_call_finalizer3(prev_it_203,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_204;
struct list_item$1charph* prev_it_205;
    it_204=self->head;
    while(it_204!=((void*)0)) {
        prev_it_205=it_204;
        it_204=it_204->next;
        /*i*/come_call_finalizer3(prev_it_205,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj60;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj60=self->v1;
            come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_206;
struct list_item$1tuple2$2charphsTypephph* prev_it_207;
    it_206=self->head;
    while(it_206!=((void*)0)) {
        prev_it_207=it_206;
        it_206=it_206->next;
        /*i*/come_call_finalizer3(prev_it_207,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_213;
struct list_item$1charp* it_214;
struct list$1charp* __result105__;
    it2_213=0;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        if(        charp_equals(it_214->item,item)) {
            list$1charp_delete(self,it2_213,it2_213+1);
            break;
        }
        it2_213++;
        it_214=it_214->next;
    }
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_215;
struct list$1charp* __result102__;
struct list_item$1charp* it_218;
int i_219;
struct list_item$1charp* prev_it_220;
struct list_item$1charp* it_221;
int i_222;
struct list_item$1charp* prev_it_223;
struct list_item$1charp* it_224;
struct list_item$1charp* head_prev_it_225;
struct list_item$1charp* tail_it_226;
int i_227;
struct list_item$1charp* prev_it_228;
struct list$1charp* __result104__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_215=tail;
        tail=head;
        head=tmp_215;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result102__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_218=self->head;
        i_219=0;
        while(it_218!=((void*)0)) {
            if(            i_219<tail) {
                prev_it_220=it_218;
                it_218=it_218->next;
                i_219++;
                /*i*/come_call_finalizer3(prev_it_220,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_219==tail) {
                self->head=it_218;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_218=it_218->next;
                i_219++;
            }
        }
    }
    else if(    tail==self->len) {
        it_221=self->head;
        i_222=0;
        while(it_221!=((void*)0)) {
            if(            i_222==head) {
                self->tail=it_221->prev;
                self->tail->next=((void*)0);
            }
            if(            i_222>=head) {
                prev_it_223=it_221;
                it_221=it_221->next;
                i_222++;
                /*i*/come_call_finalizer3(prev_it_223,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_221=it_221->next;
                i_222++;
            }
        }
    }
    else {
        it_224=self->head;
        head_prev_it_225=((void*)0);
        tail_it_226=((void*)0);
        i_227=0;
        while(it_224!=((void*)0)) {
            if(            i_227==head) {
                head_prev_it_225=it_224->prev;
            }
            if(            i_227==tail) {
                tail_it_226=it_224;
            }
            if(            i_227>=head&&i_227<tail) {
                prev_it_228=it_224;
                it_224=it_224->next;
                i_227++;
                /*i*/come_call_finalizer3(prev_it_228,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_224=it_224->next;
                i_227++;
            }
        }
        if(        head_prev_it_225!=((void*)0)) {
            head_prev_it_225->next=tail_it_226;
        }
        if(        tail_it_226!=((void*)0)) {
            tail_it_226->prev=head_prev_it_225;
        }
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_216;
struct list_item$1charp* prev_it_217;
struct list$1charp* __result103__;
    it_216=self->head;
    while(it_216!=((void*)0)) {
        prev_it_217=it_216;
        it_216=it_216->next;
        /*i*/come_call_finalizer3(prev_it_217,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_230;
char* __result106__;
char* __result107__;
char* result_231;
char* __result108__;
result_230 = (void*)0;
result_231 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_230,0,sizeof(char*));
        __result106__ = gComeFunResultObject = __result_obj__ = result_230;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    self->it=self->head;
    if(    self->it) {
        __result107__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    memset(&result_231,0,sizeof(char*));
    __result108__ = gComeFunResultObject = __result_obj__ = result_231;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_233;
char* __result109__;
char* __result110__;
char* result_234;
char* __result111__;
result_233 = (void*)0;
result_234 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_233,0,sizeof(char*));
        __result109__ = gComeFunResultObject = __result_obj__ = result_233;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result110__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    memset(&result_234,0,sizeof(char*));
    __result111__ = gComeFunResultObject = __result_obj__ = result_234;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_260;
unsigned int it_261;
_Bool same_key_exist_262;
char* it2_263;
struct map$2charphsTypeph* __result123__;
    if(    self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_260=string_get_hash_key(key)%self->size;
    it_261=hash_260;
    while((_Bool)1) {
        if(        self->item_existance[it_261]) {
            if(            string_equals(self->keys[it_261],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_261]);
                    /* U13 */self->keys[it_261] = come_decrement_ref_count2(self->keys[it_261], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_261]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_261]);
                    self->keys[it_261]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_261],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_261]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_261]=item;
                }
                break;
            }
            it_261++;
            if(            it_261>=self->size) {
                it_261=0;
            }
            else if(            it_261==hash_260) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_261]=(_Bool)1;
            if(            1) {
                self->keys[it_261]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_261]=key;
            }
            if(            1) {
                self->items[it_261]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_261]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_262=(_Bool)0;
    for(    it2_263=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_263=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_263,key)) {
            same_key_exist_262=(_Bool)1;
        }
    }
    if(    !same_key_exist_262) {
        list$1charp_push_back(self->key_list,key);
    }
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_243;
void* __right_value297 = (void*)0;
char** keys_244;
void* __right_value298 = (void*)0;
struct sType** items_245;
void* __right_value299 = (void*)0;
_Bool* item_existance_246;
int len_247;
char* it_250;
struct sType* default_value_253;
struct sType* it2_254;
unsigned int hash_257;
int n_258;
struct sType* default_value_259;
default_value_253 = (void*)0;
default_value_259 = (void*)0;
    size_243=self->size*10;
    keys_244=(char**)come_increment_ref_count(((char**)(__right_value297=(char**)come_calloc(1, sizeof(char*)*(1*(size_243)), "./comelang.h", 1655, "char*%"))));
    items_245=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value298=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_243)), "./comelang.h", 1656, "sType*%"))));
    item_existance_246=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value299=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_243)), "./comelang.h", 1657, "bool"))));
    len_247=0;
    for(    it_250=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_250=map$2charphsTypeph_next(self)    ){
        memset(&default_value_253,0,sizeof(struct sType*));
        it2_254=map$2charphsTypeph_at(self,it_250,default_value_253);
        hash_257=string_get_hash_key(it_250)%size_243;
        n_258=hash_257;
        while((_Bool)1) {
            if(            item_existance_246[n_258]) {
                n_258++;
                if(                n_258>=size_243) {
                    n_258=0;
                }
                else if(                n_258==hash_257) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_246[n_258]=(_Bool)1;
                keys_244[n_258]=it_250;
                items_245[n_258]=map$2charphsTypeph_at(self,it_250,default_value_259);
                len_247++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_244;
    self->items=items_245;
    self->item_existance=item_existance_246;
    self->size=size_243;
    self->len=len_247;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_248;
char* __result113__;
char* __result114__;
char* result_249;
char* __result115__;
result_248 = (void*)0;
result_249 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_248,0,sizeof(char*));
        __result113__ = gComeFunResultObject = __result_obj__ = result_248;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result114__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    memset(&result_249,0,sizeof(char*));
    __result115__ = gComeFunResultObject = __result_obj__ = result_249;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_251;
char* __result116__;
char* __result117__;
char* result_252;
char* __result118__;
result_251 = (void*)0;
result_252 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_251,0,sizeof(char*));
        __result116__ = gComeFunResultObject = __result_obj__ = result_251;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result117__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result117__;
    }
    memset(&result_252,0,sizeof(char*));
    __result118__ = gComeFunResultObject = __result_obj__ = result_252;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_255;
unsigned int it_256;
struct sType* __result119__;
struct sType* __result120__;
struct sType* __result121__;
struct sType* __result122__;
    hash_255=string_get_hash_key(((char*)key))%self->size;
    it_256=hash_255;
    while((_Bool)1) {
        if(        self->item_existance[it_256]) {
            if(            string_equals(self->keys[it_256],key)) {
                __result119__ = gComeFunResultObject = __result_obj__ = self->items[it_256];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result119__;
            }
            it_256++;
            if(            it_256>=self->size) {
                it_256=0;
            }
            else if(            it_256==hash_255) {
                __result120__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result120__;
            }
        }
        else {
            __result121__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result121__;
        }
    }
    __result122__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_265;
struct tuple2$2charphsTypeph* __dec_obj67;
void* __right_value304 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_266;
struct tuple2$2charphsTypeph* __dec_obj70;
void* __right_value305 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_267;
struct tuple2$2charphsTypeph* __dec_obj73;
struct list$1tuple2$2charphsTypephph* __result124__;
    if(    self->len==0) {
        litem_265=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value303=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 227, "list_item$1tuple2$2charphsTypephph"))));
        litem_265->prev=((void*)0);
        litem_265->next=((void*)0);
        __dec_obj67=litem_265->item;
        litem_265->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_265;
        self->head=litem_265;
    }
    else if(    self->len==1) {
        litem_266=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value304=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 237, "list_item$1tuple2$2charphsTypephph"))));
        litem_266->prev=self->head;
        litem_266->next=((void*)0);
        __dec_obj70=litem_266->item;
        litem_266->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_266;
        self->head->next=litem_266;
    }
    else {
        litem_267=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value305=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 247, "list_item$1tuple2$2charphsTypephph"))));
        litem_267->prev=self->tail;
        litem_267->next=((void*)0);
        __dec_obj73=litem_267->item;
        litem_267->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_267;
        self->tail=litem_267;
    }
    self->len++;
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
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
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj76;
struct sType* __dec_obj77;
struct tuple2$2charphsTypeph* __result125__;
    __dec_obj76=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj77=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

int come_main_v2(int argc, char** argv){
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct buffer* clang_option_268;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct buffer* cpp_option_269;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct buffer* linker_option_270;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1charph* files_271;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1charph* object_files_272;
_Bool output_object_file_273;
_Bool output_cpp_file_274;
_Bool output_source_file_flag_275;
_Bool output_object_file_flag_276;
void* __right_value342 = (void*)0;
char* output_file_name_277;
_Bool verbose_278;
_Bool prohibit_common_header_279;
_Bool come_debug_280;
_Bool come_malloc_281;
int i_282;
void* __right_value343 = (void*)0;
char* __dec_obj78;
char* env_283;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct buffer* __dec_obj79;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
_Bool _elif_conditional1;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
_Bool _elif_conditional2;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
int r_284;
_Bool __exception_result_var_b11;
struct _IO_FILE* f_285;
_Bool __exception_result_var_b12;
void* __right_value363 = (void*)0;
char* tmp_file_286;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sInfo info_287;
void* __right_value368 = (void*)0;
char* __dec_obj80;
void* __right_value369 = (void*)0;
char* __dec_obj81;
void* __right_value370 = (void*)0;
char* __dec_obj82;
void* __right_value371 = (void*)0;
char* __dec_obj83;
void* __right_value372 = (void*)0;
char* __dec_obj84;
void* __right_value373 = (void*)0;
void* __right_value379 = (void*)0;
struct map$2charphsFunph* __dec_obj101;
void* __right_value380 = (void*)0;
void* __right_value386 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj113;
void* __right_value387 = (void*)0;
void* __right_value393 = (void*)0;
struct map$2charphsClassph* __dec_obj115;
void* __right_value394 = (void*)0;
void* __right_value400 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj121;
void* __right_value401 = (void*)0;
void* __right_value407 = (void*)0;
struct map$2charphsTypeph* __dec_obj123;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sModule* __dec_obj124;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj137;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1CVALUEph* __dec_obj142;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sVarTable* __dec_obj143;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sVarTable* lv_table_321;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct list$1charph* __dec_obj144;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct list$1charph* __dec_obj145;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct map$2charphsClassph* __dec_obj146;
void* __right_value424 = (void*)0;
void* __right_value430 = (void*)0;
struct map$2charphint* __dec_obj148;
void* __right_value431 = (void*)0;
char* __dec_obj149;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct buffer* __dec_obj150;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct buffer* __dec_obj151;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct buffer* clang_option_338;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct buffer* linker_option_339;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct buffer* cpp_option_340;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct list$1charph* files_341;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct list$1charph* object_files_342;
_Bool output_object_file_343;
_Bool output_cpp_file_344;
_Bool output_source_file_flag_345;
_Bool output_object_file_flag_346;
char* output_file_name_347;
_Bool verbose_348;
_Bool come_debug_349;
_Bool come_malloc_350;
int i_351;
void* __right_value449 = (void*)0;
char* __dec_obj191;
char* env_352;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct buffer* __dec_obj192;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
_Bool _elif_conditional3;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
_Bool _elif_conditional4;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct list$1charph* o2_saved_353;
char* it_354;
struct sInfo info_355;
struct _IO_FILE* tmp_file_356;
void* __right_value476 = (void*)0;
char* __dec_obj193;
void* __right_value477 = (void*)0;
char* __dec_obj194;
void* __right_value478 = (void*)0;
char* __dec_obj195;
void* __right_value479 = (void*)0;
char* __dec_obj196;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct map$2charphsFunph* __dec_obj197;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj198;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct map$2charphsClassph* __dec_obj199;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj200;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct map$2charphsTypeph* __dec_obj201;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sModule* __dec_obj202;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj203;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct list$1CVALUEph* __dec_obj204;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sVarTable* __dec_obj205;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sVarTable* lv_table_357;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct list$1charph* __dec_obj206;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1charph* __dec_obj207;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct map$2charphsClassph* __dec_obj208;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct map$2charphint* __dec_obj209;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct buffer* __dec_obj210;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct buffer* __dec_obj211;
void* __right_value514 = (void*)0;
char* __dec_obj212;
char* __dec_obj213;
struct sInfo info_358;
void* __right_value515 = (void*)0;
char* __dec_obj214;
void* __right_value516 = (void*)0;
char* __dec_obj215;
void* __right_value517 = (void*)0;
char* __dec_obj216;
void* __right_value518 = (void*)0;
char* __dec_obj217;
char* __dec_obj218;
struct __current_stack3__ __current_stack3__;
memset(&info_287, 0, sizeof(struct sInfo));
memset(&info_355, 0, sizeof(struct sInfo));
memset(&info_358, 0, sizeof(struct sInfo));
memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    if(    charp_operator_equals(argv[1],"header")&&argc>=3) {
        gProgramName=argv[0];
        clang_option_268=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 673, "buffer"))));
        cpp_option_269=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 674, "buffer"))));
        buffer_append_str(cpp_option_269,"-U__GNUC__");
        linker_option_270=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 676, "buffer"))));
        files_271=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 677, "list$1charph"))));
        object_files_272=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 678, "list$1charph"))));
        output_object_file_273=(_Bool)0;
        output_cpp_file_274=(_Bool)0;
        output_source_file_flag_275=(_Bool)0;
        output_object_file_flag_276=(_Bool)1;
        output_file_name_277=(char*)come_increment_ref_count(__builtin_string("common.h"));
        verbose_278=(_Bool)0;
        prohibit_common_header_279=(_Bool)0;
        come_debug_280=(_Bool)0;
        come_malloc_281=(_Bool)0;
        for(        i_282=2;        i_282<argc;        i_282++        ){
            if(            charp_operator_equals(argv[i_282],"-o")&&i_282+1<argc) {
                __dec_obj78=output_file_name_277;
                output_file_name_277=(char*)come_increment_ref_count(__builtin_string(argv[i_282+1]));
                /*G*/ __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_282++;
            }
            else if(            charp_operator_equals(argv[i_282],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_282],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_282],"-pico")) {
                output_source_file_flag_275=(_Bool)1;
                output_object_file_flag_276=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_283=getenv("PICO_SDK_PATH");
                __dec_obj79=cpp_option_269;
                cpp_option_269=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 704, "buffer"))));
                come_call_finalizer3(__dec_obj79,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_str(cpp_option_269,((char*)(__right_value347=xsprintf(" \$(find \%s -type d -name include | sed 's/^/ -I/g') -I build/generated/pico_base/ -D__GNUC__ -D__PICO__",((char*)(__right_value346=charp_to_string(env_283)))))));
                /* U11 */__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_282],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_282],"-gc")) {
                gComeGC=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_282],"-g")) {
                buffer_append_str(clang_option_268,"-g ");
            }
            else if(            charp_operator_equals(argv[i_282],"-cg")) {
                buffer_append_str(clang_option_268,"-g ");
                come_debug_280=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_282],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_282],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional1=(string_operator_equals(((char*)(__right_value348=charp_operator_load_range_element(argv[i_282],0,2))),"-O"))),            /* U10 */ (__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional1) {
                buffer_append_str(clang_option_268,((char*)(__right_value350=xsprintf(" \%s ",((char*)(__right_value349=charp_to_string(argv[i_282])))))));
                /* U11 */__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_debug_280=(_Bool)0;
            }
            else if(            (_elif_conditional2=(string_operator_equals(((char*)(__right_value351=charp_operator_load_range_element(argv[i_282],0,2))),"-D"))),            /* U10 */ (__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional2) {
                buffer_append_str(cpp_option_269,((char*)(__right_value353=xsprintf(" \%s ",((char*)(__right_value352=charp_to_string(argv[i_282])))))));
                /* U11 */__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_268,((char*)(__right_value355=xsprintf(" \%s ",((char*)(__right_value354=charp_to_string(argv[i_282])))))));
                /* U11 */__right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_282],"-v")) {
                buffer_append_str(clang_option_268,"-v ");
                verbose_278=(_Bool)1;
            }
            else if(            strlen(argv[i_282])>=2&&memcmp(argv[i_282],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_269,((char*)(__right_value357=charp_operator_add(" ",((char*)(__right_value356=charp_operator_add(argv[i_282]," ")))))));
                /* U11 */__right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_282],"-gdwarf-4")) {
                buffer_append_str(clang_option_268,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_282],"-s")||charp_operator_equals(argv[i_282],"-S")) {
                output_source_file_flag_275=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_282],"-c")) {
                output_object_file_273=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_282],"-E")) {
                output_cpp_file_274=(_Bool)1;
            }
            else if(            argv[i_282][0]==45) {
                buffer_append_str(clang_option_268,((char*)(__right_value358=charp_operator_add(argv[i_282]," "))));
                /* U11 */__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            strlen(argv[i_282])>2&&memcmp(argv[i_282]+strlen(argv[i_282])-2,".o",2)==0) {
                list$1charph_push_back(object_files_272,(char*)come_increment_ref_count(__builtin_string(argv[i_282])));
            }
            else if(            strlen(argv[i_282])>2&&memcmp(argv[i_282]+strlen(argv[i_282])-2,".a",2)==0) {
                list$1charph_push_back(object_files_272,(char*)come_increment_ref_count(__builtin_string(argv[i_282])));
            }
            else {
                list$1charph_push_back(files_271,(char*)come_increment_ref_count(__builtin_string(argv[i_282])));
            }
        }
        gComeDebug=come_debug_280;
        gComeMalloc=come_malloc_281;
        r_284=system(((char*)(__right_value362=xsprintf("%s %s",RM,output_file_name_277))));
        /* U11 */__right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        r_284<0) {
            (come_push_stackframe("02transpile.c", 772, 10),__exception_result_var_b11=die("rm"), come_pop_stackframe(), __exception_result_var_b11);
        }
        f_285=fopen(output_file_name_277,"w");
        if(        f_285==((void*)0)) {
            (come_push_stackframe("02transpile.c", 776, 11),__exception_result_var_b12=die("fopen"), come_pop_stackframe(), __exception_result_var_b12);
        }
        fclose(f_285);
        tmp_file_286=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        system(((char*)(__right_value367=xsprintf("cat \%s > \%s",((char*)(__right_value365=string_to_string(((char*)(__right_value364=list$1charph_join(files_271," ")))))),((char*)(__right_value366=string_to_string(tmp_file_286)))))));
        /* U11 */__right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        memset(&info_287,0,sizeof(struct sInfo));
        __dec_obj80=info_287.base_sname;
        info_287.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_286));
        /*G*/ __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj81=info_287.sname;
        info_287.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_286));
        /*G*/ __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_287.sline=1;
        info_287.err_num=0;
        __dec_obj82=info_287.clang_option;
        info_287.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_268));
        /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj83=info_287.cpp_option;
        info_287.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_269));
        /*G*/ __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj84=info_287.linker_option;
        info_287.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_270));
        /*G*/ __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_287.no_output_err=(_Bool)0;
        __dec_obj101=info_287.funcs;
        info_287.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 796, "map$2charphsFunph"))));
        come_call_finalizer3(__dec_obj101,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj113=info_287.generics_funcs;
        info_287.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 797, "map$2charphsGenericsFunph"))));
        come_call_finalizer3(__dec_obj113,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj115=info_287.classes;
        info_287.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 798, "map$2charphsClassph"))));
        come_call_finalizer3(__dec_obj115,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj121=info_287.modules;
        info_287.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 799, "map$2charphsClassModuleph"))));
        come_call_finalizer3(__dec_obj121,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj123=info_287.types;
        info_287.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 800, "map$2charphsTypeph"))));
        come_call_finalizer3(__dec_obj123,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj124=info_287.module;
        info_287.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 801, "sModule"))));
        come_call_finalizer3(__dec_obj124,sModule_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj137=info_287.right_value_objects;
        info_287.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 802, "list$1sRightValueObjectph"))));
        come_call_finalizer3(__dec_obj137,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj142=info_287.stack;
        info_287.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 803, "list$1CVALUEph"))));
        come_call_finalizer3(__dec_obj142,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj143=info_287.gv_table;
        info_287.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 804, "sVarTable")),(_Bool)1,((void*)0)));
        come_call_finalizer3(__dec_obj143,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        lv_table_321=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 805, "sVarTable")),(_Bool)0,((void*)0)));
        info_287.lv_table=lv_table_321;
        __dec_obj144=info_287.generics_type_names;
        info_287.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 807, "list$1charph"))));
        come_call_finalizer3(__dec_obj144,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj145=info_287.method_generics_type_names;
        info_287.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 808, "list$1charph"))));
        come_call_finalizer3(__dec_obj145,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj146=info_287.generics_classes;
        info_287.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 809, "map$2charphsClassph"))));
        come_call_finalizer3(__dec_obj146,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        info_287.verbose=verbose_278;
        info_287.output_header_file=(_Bool)1;
        __dec_obj148=info_287.outputed_class;
        info_287.outputed_class=(struct map$2charphint*)come_increment_ref_count(map$2charphint_initialize((struct map$2charphint*)come_increment_ref_count((struct map$2charphint*)come_calloc(1, sizeof(struct map$2charphint)*(1), "02transpile.c", 812, "map$2charphint"))));
        come_call_finalizer3(__dec_obj148,map$2charphint_finalize, 0, 0, 0, 0, (void*)0);
        static int n_327=0;
        info_287.num_source_files=n_327++;
        info_287.max_source_files=list$1charph_length(files_271);
        __dec_obj149=info_287.output_file_name;
        info_287.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_277));
        /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        init_classes(&info_287);
        clear_tmp_file(&info_287);
        if(        !cpp(&info_287)) {
            printf("%s %d: transpile failed\n",info_287.sname,info_287.sline);
            exit(2);
        }
        __dec_obj150=info_287.original_source;
        info_287.original_source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value433=string_read(((char*)(__right_value432=xsprintf("%s",tmp_file_286))))))));
        come_call_finalizer3(__dec_obj150,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj151=info_287.source;
        info_287.source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value436=string_read(((char*)(__right_value435=xsprintf("%s.i",tmp_file_286))))))));
        come_call_finalizer3(__dec_obj151,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        info_287.p=info_287.source->buf;
        info_287.head=info_287.source->buf;
        if(        !output_cpp_file_274) {
            transpile_v5(&info_287);
            if(            !output_header_file(&info_287)) {
                printf("%s %d: output source file faield\n",info_287.sname,info_287.sline);
                exit(2);
            }
        }
        system(((char*)(__right_value438=xsprintf("%s %s*",RM,tmp_file_286))));
        /* U11 */__right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(clang_option_268,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(cpp_option_269,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(linker_option_270,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(files_271,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(object_files_272,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */output_file_name_277 = come_decrement_ref_count2(output_file_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */tmp_file_286 = come_decrement_ref_count2(tmp_file_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3((&info_287),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(lv_table_321,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(argv[1],"new")&&argc==3) {
        if(        !new_project(argc,argv)) {
            return (_Bool)0;
        }
    }
    else if(    charp_operator_equals(argv[1],"run")&&argc==2) {
        if(        !run_project(argc,argv)) {
            return (_Bool)0;
        }
    }
    else if(    charp_operator_equals(argv[1],"header")&&argc==2) {
        if(        !make_header_project(argc,argv)) {
            return (_Bool)0;
        }
    }
    else if(    charp_operator_equals(argv[1],"compile")&&argc==2) {
        if(        !compile_project(argc,argv)) {
            return (_Bool)0;
        }
    }
    else if(    charp_operator_equals(argv[1],"debug")&&argc==2) {
        if(        !debug_run_project(argc,argv)) {
            return (_Bool)0;
        }
    }
    else if(    charp_operator_equals(argv[1],"clean")&&argc==2) {
        if(        !clean_project(argc,argv)) {
            return (_Bool)0;
        }
    }
    else if(    charp_operator_equals(argv[1],"install")&&argc>=2) {
        if(        argc==2) {
            if(            !install_project(argc,argv,"/usr/local")) {
                return (_Bool)0;
            }
        }
        else if(        argc>=3) {
            if(            !install_project(argc,argv,argv[2])) {
                return (_Bool)0;
            }
        }
    }
    else {
        gProgramName=argv[0];
        clang_option_338=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 890, "buffer"))));
        linker_option_339=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 891, "buffer"))));
        cpp_option_340=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 892, "buffer"))));
        buffer_append_str(cpp_option_340,"-U__GNUC__");
        files_341=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 894, "list$1charph"))));
        object_files_342=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 895, "list$1charph"))));
        output_object_file_343=(_Bool)0;
        output_cpp_file_344=(_Bool)0;
        output_source_file_flag_345=(_Bool)0;
        output_object_file_flag_346=(_Bool)1;
        output_file_name_347=((void*)0);
        verbose_348=(_Bool)0;
        come_debug_349=(_Bool)0;
        come_malloc_350=(_Bool)0;
        for(        i_351=1;        i_351<argc;        i_351++        ){
            if(            charp_operator_equals(argv[i_351],"-o")&&i_351+1<argc) {
                __dec_obj191=output_file_name_347;
                output_file_name_347=(char*)come_increment_ref_count(__builtin_string(argv[i_351+1]));
                /*G*/ __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_351++;
            }
            else if(            charp_operator_equals(argv[i_351],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_351],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_351],"-pico")) {
                output_source_file_flag_345=(_Bool)1;
                output_object_file_flag_346=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_352=getenv("PICO_SDK_PATH");
                __dec_obj192=cpp_option_340;
                cpp_option_340=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 920, "buffer"))));
                come_call_finalizer3(__dec_obj192,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_str(cpp_option_340,((char*)(__right_value453=xsprintf(" \$(find \%s -type d -name include | sed 's/^/ -I/g') -I build/generated/pico_base/ -D__GNUC__ -D__PICO__",((char*)(__right_value452=charp_to_string(env_352)))))));
                /* U11 */__right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            i_351+1<argc&&charp_operator_equals(argv[i_351],"-target")) {
                buffer_append_str(clang_option_338,((char*)(__right_value455=xsprintf("-target \%s",((char*)(__right_value454=charp_to_string(argv[i_351+1])))))));
                /* U11 */__right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_351++;
            }
            else if(            i_351+1<argc&&charp_operator_equals(argv[i_351],"-T")) {
                buffer_append_str(clang_option_338,((char*)(__right_value457=xsprintf(" -T \%s ",((char*)(__right_value456=charp_to_string(argv[i_351+1])))))));
                /* U11 */__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_351++;
            }
            else if(            charp_operator_equals(argv[i_351],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_351],"-gc")) {
                gComeGC=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_351],"-cg")) {
                come_debug_349=(_Bool)1;
                buffer_append_str(clang_option_338,"-g ");
            }
            else if(            i_351+1<argc&&charp_operator_equals(argv[i_351],"-target")) {
                buffer_append_str(clang_option_338,((char*)(__right_value459=xsprintf("-target \%s",((char*)(__right_value458=charp_to_string(argv[i_351+1])))))));
                /* U11 */__right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_351++;
            }
            else if(            i_351+1<argc&&charp_operator_equals(argv[i_351],"-T")) {
                buffer_append_str(clang_option_338,((char*)(__right_value461=xsprintf(" -T \%s ",((char*)(__right_value460=charp_to_string(argv[i_351+1])))))));
                /* U11 */__right_value460 = come_decrement_ref_count2(__right_value460, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_351++;
            }
            else if(            charp_operator_equals(argv[i_351],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_351],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional3=(string_operator_equals(((char*)(__right_value462=charp_operator_load_range_element(argv[i_351],0,2))),"-O"))),            /* U10 */ (__right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional3) {
                buffer_append_str(clang_option_338,((char*)(__right_value464=xsprintf(" \%s ",((char*)(__right_value463=charp_to_string(argv[i_351])))))));
                /* U11 */__right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_debug_349=(_Bool)0;
            }
            else if(            (_elif_conditional4=(string_operator_equals(((char*)(__right_value465=charp_operator_load_range_element(argv[i_351],0,2))),"-D"))),            /* U10 */ (__right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional4) {
                buffer_append_str(cpp_option_340,((char*)(__right_value467=xsprintf(" \%s ",((char*)(__right_value466=charp_to_string(argv[i_351])))))));
                /* U11 */__right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_338,((char*)(__right_value469=xsprintf(" \%s ",((char*)(__right_value468=charp_to_string(argv[i_351])))))));
                /* U11 */__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_351],"-g")) {
                buffer_append_str(clang_option_338,"-g ");
            }
            else if(            charp_operator_equals(argv[i_351],"-v")) {
                buffer_append_str(clang_option_338,"-v ");
                verbose_348=(_Bool)1;
            }
            else if(            strlen(argv[i_351])>=2&&memcmp(argv[i_351],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_340,((char*)(__right_value471=charp_operator_add(" ",((char*)(__right_value470=charp_operator_add(argv[i_351]," ")))))));
                /* U11 */__right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_351],"-gdwarf-4")) {
                buffer_append_str(clang_option_338,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_351],"-s")||charp_operator_equals(argv[i_351],"-S")) {
                output_source_file_flag_345=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_351],"-c")) {
                output_object_file_343=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_351],"-E")) {
                output_cpp_file_344=(_Bool)1;
            }
            else if(            argv[i_351][0]==45) {
                buffer_append_str(clang_option_338,((char*)(__right_value472=charp_operator_add(argv[i_351]," "))));
                /* U11 */__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            strlen(argv[i_351])>2&&memcmp(argv[i_351]+strlen(argv[i_351])-2,".o",2)==0) {
                list$1charph_push_back(object_files_342,(char*)come_increment_ref_count(__builtin_string(argv[i_351])));
            }
            else if(            strlen(argv[i_351])>2&&memcmp(argv[i_351]+strlen(argv[i_351])-2,".a",2)==0) {
                list$1charph_push_back(object_files_342,(char*)come_increment_ref_count(__builtin_string(argv[i_351])));
            }
            else {
                list$1charph_push_back(files_341,(char*)come_increment_ref_count(__builtin_string(argv[i_351])));
            }
        }
        gComeDebug=come_debug_349;
        gComeMalloc=come_malloc_350;
        for(        o2_saved_353=(struct list$1charph*)come_increment_ref_count((files_341)),it_354=list$1charph_begin((o2_saved_353));        !list$1charph_end((o2_saved_353));        it_354=list$1charph_next((o2_saved_353))        ){
            memset(&info_355,0,sizeof(struct sInfo));
            tmp_file_356=fopen(it_354,"r");
            if(            tmp_file_356==((void*)0)) {
                /*i*/come_call_finalizer3((&info_355),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                continue;
            }
            else {
                fclose(tmp_file_356);
            }
            __dec_obj193=info_355.sname;
            info_355.sname=(char*)come_increment_ref_count(__builtin_string(it_354));
            /*G*/ __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_355.sline=1;
            info_355.err_num=0;
            __dec_obj194=info_355.clang_option;
            info_355.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_338));
            /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj195=info_355.cpp_option;
            info_355.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_340));
            /*G*/ __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj196=info_355.linker_option;
            info_355.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_339));
            /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_355.no_output_err=(_Bool)0;
            __dec_obj197=info_355.funcs;
            info_355.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 1023, "map$2charphsFunph"))));
            come_call_finalizer3(__dec_obj197,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj198=info_355.generics_funcs;
            info_355.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 1024, "map$2charphsGenericsFunph"))));
            come_call_finalizer3(__dec_obj198,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj199=info_355.classes;
            info_355.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 1025, "map$2charphsClassph"))));
            come_call_finalizer3(__dec_obj199,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj200=info_355.modules;
            info_355.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 1026, "map$2charphsClassModuleph"))));
            come_call_finalizer3(__dec_obj200,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj201=info_355.types;
            info_355.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 1027, "map$2charphsTypeph"))));
            come_call_finalizer3(__dec_obj201,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj202=info_355.module;
            info_355.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 1028, "sModule"))));
            come_call_finalizer3(__dec_obj202,sModule_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj203=info_355.right_value_objects;
            info_355.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 1029, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj203,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj204=info_355.stack;
            info_355.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 1030, "list$1CVALUEph"))));
            come_call_finalizer3(__dec_obj204,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj205=info_355.gv_table;
            info_355.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1031, "sVarTable")),(_Bool)1,((void*)0)));
            come_call_finalizer3(__dec_obj205,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            lv_table_357=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1032, "sVarTable")),(_Bool)0,((void*)0)));
            info_355.lv_table=lv_table_357;
            __dec_obj206=info_355.generics_type_names;
            info_355.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 1034, "list$1charph"))));
            come_call_finalizer3(__dec_obj206,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj207=info_355.method_generics_type_names;
            info_355.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 1035, "list$1charph"))));
            come_call_finalizer3(__dec_obj207,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj208=info_355.generics_classes;
            info_355.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 1036, "map$2charphsClassph"))));
            come_call_finalizer3(__dec_obj208,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
            info_355.verbose=verbose_348;
            __dec_obj209=info_355.outputed_class;
            info_355.outputed_class=(struct map$2charphint*)come_increment_ref_count(map$2charphint_initialize((struct map$2charphint*)come_increment_ref_count((struct map$2charphint*)come_calloc(1, sizeof(struct map$2charphint)*(1), "02transpile.c", 1038, "map$2charphint"))));
            come_call_finalizer3(__dec_obj209,map$2charphint_finalize, 0, 0, 0, 0, (void*)0);
            init_classes(&info_355);
            clear_tmp_file(&info_355);
            if(            !cpp(&info_355)) {
                printf("%s %d: transpile failed\n",info_355.sname,info_355.sline);
                exit(2);
            }
            __dec_obj210=info_355.original_source;
            info_355.original_source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value509=string_read(((char*)(__right_value508=xsprintf("%s",it_354))))))));
            come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U11 */__right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj211=info_355.source;
            info_355.source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value512=string_read(((char*)(__right_value511=xsprintf("%s.i",it_354))))))));
            come_call_finalizer3(__dec_obj211,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U11 */__right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info_355.p=info_355.source->buf;
            info_355.head=info_355.source->buf;
            if(            output_file_name_347) {
                __dec_obj212=info_355.output_file_name;
                info_355.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_347));
                /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj213=info_355.output_file_name;
                info_355.output_file_name=((void*)0);
                /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            !output_cpp_file_344) {
                transpile_v5(&info_355);
                if(                !output_source_file_v3(&info_355)) {
                    printf("%s %d: output source file faield\n",info_355.sname,info_355.sline);
                    exit(2);
                }
                if(                info_355.err_num>0) {
                    printf("transpile error. err num %d\n",info_355.err_num);
                    exit(2);
                }
                else {
                    if(                    output_object_file_flag_346) {
                        if(                        !compile(&info_355,output_object_file_343,object_files_342)) {
                            printf("%s %d: compile faield\n",info_355.sname,info_355.sline);
                            exit(27);
                        }
                    }
                }
            }
            if(            output_cpp_file_344) {
            }
            else if(            info_355.err_num>0) {
            }
            else if(            output_source_file_flag_345) {
                clear_tmp_file_without_object_file_and_ccfile(&info_355);
            }
            else {
                clear_tmp_file_without_object_file(&info_355);
            }
            /*i*/come_call_finalizer3((&info_355),sInfo_finalize, 1, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(lv_table_357,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_353,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_object_file_343&&!output_cpp_file_344&&(list$1charph_length(files_341)>0||list$1charph_length(object_files_342)>0)) {
            memset(&info_358,0,sizeof(struct sInfo));
            __dec_obj214=info_358.sname;
            info_358.sname=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(files_341,0)));
            /*G*/ __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj215=info_358.clang_option;
            info_358.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_338));
            /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj216=info_358.linker_option;
            info_358.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_339));
            /*G*/ __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_358.verbose=verbose_348;
            if(            output_file_name_347) {
                __dec_obj217=info_358.output_file_name;
                info_358.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_347));
                /*G*/ __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj218=info_358.output_file_name;
                info_358.output_file_name=((void*)0);
                /*G*/ __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            output_object_file_flag_346) {
                __current_stack3__.info_358 = &info_358;
                __current_stack3__.clang_option_338 = &clang_option_338;
                __current_stack3__.linker_option_339 = &linker_option_339;
                __current_stack3__.cpp_option_340 = &cpp_option_340;
                __current_stack3__.files_341 = &files_341;
                __current_stack3__.object_files_342 = &object_files_342;
                __current_stack3__.output_object_file_343 = &output_object_file_343;
                __current_stack3__.output_cpp_file_344 = &output_cpp_file_344;
                __current_stack3__.output_source_file_flag_345 = &output_source_file_flag_345;
                __current_stack3__.output_object_file_flag_346 = &output_object_file_flag_346;
                __current_stack3__.output_file_name_347 = &output_file_name_347;
                __current_stack3__.verbose_348 = &verbose_348;
                __current_stack3__.come_debug_349 = &come_debug_349;
                __current_stack3__.come_malloc_350 = &come_malloc_350;
                __current_stack3__.argc = &argc;
                __current_stack3__.argv = &argv;
                bool_expect(linker(&info_358,object_files_342),&__current_stack3__,(void*)method_block3_02transpilec);
            }
            if(            !output_cpp_file_344&&!output_source_file_flag_345) {
                clear_tmp_file(&info_358);
            }
            /*i*/come_call_finalizer3((&info_358),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(clang_option_338,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(linker_option_339,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(cpp_option_340,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(files_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(object_files_342,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */output_file_name_347 = come_decrement_ref_count2(output_file_name_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return 0;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
int i_288;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct list$1charp* __dec_obj85;
struct map$2charphsFunph* __result127__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value374=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1404, "char*%"))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value375=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./comelang.h", 1405, "sFun*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value376=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1406, "bool"))));
    for(    i_288=0;    i_288<128;    i_288++    ){
        self->item_existance[i_288]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj85=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1416, "list$1charp"))));
    come_call_finalizer3(__dec_obj85,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result126__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
int i_289;
int i_290;
    for(    i_289=0;    i_289<self->size;    i_289++    ){
        if(        self->item_existance[i_289]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_289],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_290=0;    i_290<self->size;    i_290++    ){
        if(        self->item_existance[i_290]) {
            if(            1) {
                /* U13 */self->keys[i_290] = come_decrement_ref_count2(self->keys[i_290], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj86;
struct sType* __dec_obj87;
struct list$1sTypeph* __dec_obj88;
struct list$1charph* __dec_obj89;
struct list$1charph* __dec_obj90;
struct sType* __dec_obj91;
struct sBlock* __dec_obj92;
struct buffer* __dec_obj95;
struct buffer* __dec_obj96;
struct buffer* __dec_obj97;
struct buffer* __dec_obj98;
char* __dec_obj99;
char* __dec_obj100;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj86=self->mName;
            /*G*/ __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj87=self->mResultType;
            come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj88=self->mParamTypes;
            come_call_finalizer3(__dec_obj88,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj89=self->mParamNames;
            come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj90=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj90,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj91=self->mLambdaType;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj92=self->mBlock;
            come_call_finalizer3(__dec_obj92,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj95=self->mSource;
            come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj96=self->mSourceHead;
            come_call_finalizer3(__dec_obj96,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj97=self->mSourceHead2;
            come_call_finalizer3(__dec_obj97,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj98=self->mSourceDefer;
            come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj99=self->mComeHeader;
            /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj100=self->mDeclareSName;
            /*G*/ __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj93;
struct sVarTable* __dec_obj94;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj93=self->mNodes;
            come_call_finalizer3(__dec_obj93,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj94=self->mVarTable;
            come_call_finalizer3(__dec_obj94,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
int i_291;
int i_292;
    for(    i_291=0;    i_291<self->size;    i_291++    ){
        if(        self->item_existance[i_291]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_291],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_292=0;    i_292<self->size;    i_292++    ){
        if(        self->item_existance[i_292]) {
            if(            1) {
                /* U13 */self->keys[i_292] = come_decrement_ref_count2(self->keys[i_292], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
int i_293;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1charp* __dec_obj102;
struct map$2charphsGenericsFunph* __result128__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value381=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1404, "char*%"))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value382=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./comelang.h", 1405, "sGenericsFun*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value383=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1406, "bool"))));
    for(    i_293=0;    i_293<128;    i_293++    ){
        self->item_existance[i_293]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj102=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1416, "list$1charp"))));
    come_call_finalizer3(__dec_obj102,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
int i_294;
int i_295;
    for(    i_294=0;    i_294<self->size;    i_294++    ){
        if(        self->item_existance[i_294]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_294],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_295=0;    i_295<self->size;    i_295++    ){
        if(        self->item_existance[i_295]) {
            if(            1) {
                /* U13 */self->keys[i_295] = come_decrement_ref_count2(self->keys[i_295], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj103;
struct list$1charph* __dec_obj104;
struct list$1charph* __dec_obj105;
char* __dec_obj106;
struct sType* __dec_obj107;
struct list$1sTypeph* __dec_obj108;
struct list$1charph* __dec_obj109;
struct list$1charph* __dec_obj110;
char* __dec_obj111;
char* __dec_obj112;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj103=self->mImplType;
            come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj104=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj104,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj105=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj105,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj106=self->mName;
            /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj107=self->mResultType;
            come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj108=self->mParamTypes;
            come_call_finalizer3(__dec_obj108,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj109=self->mParamNames;
            come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj110=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj111=self->mBlock;
            /*G*/ __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj112=self->mGenericsSName;
            /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
int i_296;
int i_297;
    for(    i_296=0;    i_296<self->size;    i_296++    ){
        if(        self->item_existance[i_296]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_296],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_297=0;    i_297<self->size;    i_297++    ){
        if(        self->item_existance[i_297]) {
            if(            1) {
                /* U13 */self->keys[i_297] = come_decrement_ref_count2(self->keys[i_297], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
int i_298;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1charp* __dec_obj114;
struct map$2charphsClassph* __result129__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value388=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1404, "char*%"))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value389=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./comelang.h", 1405, "sClass*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value390=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1406, "bool"))));
    for(    i_298=0;    i_298<128;    i_298++    ){
        self->item_existance[i_298]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj114=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1416, "list$1charp"))));
    come_call_finalizer3(__dec_obj114,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
int i_299;
int i_300;
    for(    i_299=0;    i_299<self->size;    i_299++    ){
        if(        self->item_existance[i_299]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_299],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_300=0;    i_300<self->size;    i_300++    ){
        if(        self->item_existance[i_300]) {
            if(            1) {
                /* U13 */self->keys[i_300] = come_decrement_ref_count2(self->keys[i_300], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
int i_301;
int i_302;
    for(    i_301=0;    i_301<self->size;    i_301++    ){
        if(        self->item_existance[i_301]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_301],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_302=0;    i_302<self->size;    i_302++    ){
        if(        self->item_existance[i_302]) {
            if(            1) {
                /* U13 */self->keys[i_302] = come_decrement_ref_count2(self->keys[i_302], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
int i_303;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1charp* __dec_obj116;
struct map$2charphsClassModuleph* __result130__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value395=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1404, "char*%"))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value396=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./comelang.h", 1405, "sClassModule*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value397=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1406, "bool"))));
    for(    i_303=0;    i_303<128;    i_303++    ){
        self->item_existance[i_303]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj116=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1416, "list$1charp"))));
    come_call_finalizer3(__dec_obj116,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
int i_304;
int i_305;
    for(    i_304=0;    i_304<self->size;    i_304++    ){
        if(        self->item_existance[i_304]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_304],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_305=0;    i_305<self->size;    i_305++    ){
        if(        self->item_existance[i_305]) {
            if(            1) {
                /* U13 */self->keys[i_305] = come_decrement_ref_count2(self->keys[i_305], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj117;
char* __dec_obj118;
struct list$1charph* __dec_obj119;
char* __dec_obj120;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj117=self->mName;
            /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj118=self->mText;
            /*G*/ __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj119=self->mParams;
            come_call_finalizer3(__dec_obj119,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj120=self->mSName;
            /*G*/ __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
int i_306;
int i_307;
    for(    i_306=0;    i_306<self->size;    i_306++    ){
        if(        self->item_existance[i_306]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_306],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_307=0;    i_307<self->size;    i_307++    ){
        if(        self->item_existance[i_307]) {
            if(            1) {
                /* U13 */self->keys[i_307] = come_decrement_ref_count2(self->keys[i_307], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
int i_308;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct list$1charp* __dec_obj122;
struct map$2charphsTypeph* __result131__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value402=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1404, "char*%"))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value403=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./comelang.h", 1405, "sType*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value404=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1406, "bool"))));
    for(    i_308=0;    i_308<128;    i_308++    ){
        self->item_existance[i_308]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj122=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1416, "list$1charp"))));
    come_call_finalizer3(__dec_obj122,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
int i_309;
int i_310;
    for(    i_309=0;    i_309<self->size;    i_309++    ){
        if(        self->item_existance[i_309]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_309],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_310=0;    i_310<self->size;    i_310++    ){
        if(        self->item_existance[i_310]) {
            if(            1) {
                /* U13 */self->keys[i_310] = come_decrement_ref_count2(self->keys[i_310], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
int i_311;
int i_312;
    for(    i_311=0;    i_311<self->size;    i_311++    ){
        if(        self->item_existance[i_311]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_311],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_312=0;    i_312<self->size;    i_312++    ){
        if(        self->item_existance[i_312]) {
            if(            1) {
                /* U13 */self->keys[i_312] = come_decrement_ref_count2(self->keys[i_312], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj125;
struct buffer* __dec_obj126;
struct buffer* __dec_obj127;
struct buffer* __dec_obj128;
char* __dec_obj129;
char* __dec_obj130;
char* __dec_obj131;
struct buffer* __dec_obj132;
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj125=self->mSourceHead;
            come_call_finalizer3(__dec_obj125,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj126=self->mSourceHead2;
            come_call_finalizer3(__dec_obj126,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead3!=((void*)0)) {
        if(        self->mSourceHead3==gComeFunResultObject) {
            __dec_obj127=self->mSourceHead3;
            come_call_finalizer3(__dec_obj127,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead3,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj128=self->mSource;
            come_call_finalizer3(__dec_obj128,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(        self->mLastCode==gComeFunResultObject) {
            __dec_obj129=self->mLastCode;
            /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(        self->mLastCode2==gComeFunResultObject) {
            __dec_obj130=self->mLastCode2;
            /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode3!=((void*)0)) {
        if(        self->mLastCode3==gComeFunResultObject) {
            __dec_obj131=self->mLastCode3;
            /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(        self->mHeader==gComeFunResultObject) {
            __dec_obj132=self->mHeader;
            come_call_finalizer3(__dec_obj132,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result132__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_313;
struct list_item$1sRightValueObjectph* prev_it_314;
    it_313=self->head;
    while(it_313!=((void*)0)) {
        prev_it_314=it_313;
        it_313=it_313->next;
        /*i*/come_call_finalizer3(prev_it_314,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj133;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj133=self->item;
            come_call_finalizer3(__dec_obj133,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj134;
char* __dec_obj135;
char* __dec_obj136;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj134=self->mType;
            come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj135=self->mVarName;
            /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj136=self->mFunName;
            /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_315;
struct list_item$1sRightValueObjectph* prev_it_316;
    it_315=self->head;
    while(it_315!=((void*)0)) {
        prev_it_316=it_315;
        it_315=it_315->next;
        /*i*/come_call_finalizer3(prev_it_316,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result133__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_317;
struct list_item$1CVALUEph* prev_it_318;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        /*i*/come_call_finalizer3(prev_it_318,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj138;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj138=self->item;
            come_call_finalizer3(__dec_obj138,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj139;
struct sType* __dec_obj140;
char* __dec_obj141;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj139=self->c_value;
            /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj140=self->type;
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj141=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_319;
struct list_item$1CVALUEph* prev_it_320;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        /*i*/come_call_finalizer3(prev_it_320,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphint* map$2charphint_initialize(struct map$2charphint* self){
void* __result_obj__=(void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
int i_322;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct list$1charp* __dec_obj147;
struct map$2charphint* __result134__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value425=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1404, "char*%"))));
    self->items=(int*)come_increment_ref_count(((int*)(__right_value426=(int*)come_calloc(1, sizeof(int)*(1*(128)), "./comelang.h", 1405, "int"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value427=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1406, "bool"))));
    for(    i_322=0;    i_322<128;    i_322++    ){
        self->item_existance[i_322]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj147=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1416, "list$1charp"))));
    come_call_finalizer3(__dec_obj147,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result134__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphintp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

static void map$2charphintp_finalize(struct map$2charphint* self){
int i_323;
int i_324;
    for(    i_323=0;    i_323<self->size;    i_323++    ){
        if(        self->item_existance[i_323]) {
            if(            0) {
            }
        }
    }
    come_free((char*)self->items);
    for(    i_324=0;    i_324<self->size;    i_324++    ){
        if(        self->item_existance[i_324]) {
            if(            1) {
                /* U13 */self->keys[i_324] = come_decrement_ref_count2(self->keys[i_324], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphint_finalize(struct map$2charphint* self){
int i_325;
int i_326;
    for(    i_325=0;    i_325<self->size;    i_325++    ){
        if(        self->item_existance[i_325]) {
            if(            0) {
            }
        }
    }
    come_free((char*)self->items);
    for(    i_326=0;    i_326<self->size;    i_326++    ){
        if(        self->item_existance[i_326]) {
            if(            1) {
                /* U13 */self->keys[i_326] = come_decrement_ref_count2(self->keys[i_326], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sInfo_finalize(struct sInfo* self){
struct buffer* __dec_obj152;
struct buffer* __dec_obj153;
char* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
struct map$2charphsFunph* __dec_obj161;
struct map$2charphsGenericsFunph* __dec_obj162;
struct map$2charphsClassph* __dec_obj163;
struct map$2charphsClassModuleph* __dec_obj164;
struct map$2charphsTypeph* __dec_obj165;
struct map$2charphsClassph* __dec_obj166;
struct sModule* __dec_obj167;
struct sType* __dec_obj168;
struct list$1sRightValueObjectph* __dec_obj169;
struct sType* __dec_obj170;
struct list$1sTypeph* __dec_obj171;
struct list$1CVALUEph* __dec_obj172;
struct sType* __dec_obj173;
struct sType* __dec_obj174;
struct sVarTable* __dec_obj175;
struct list$1charph* __dec_obj176;
struct list$1charph* __dec_obj177;
struct sType* __dec_obj178;
char* __dec_obj179;
struct sType* __dec_obj180;
struct map$2charphcharph* __dec_obj181;
char* __dec_obj182;
struct list$1sVarph* __dec_obj183;
struct list$1int* __dec_obj189;
struct map$2charphint* __dec_obj190;
    if(    self!=((void*)0)&&self->original_source!=((void*)0)) {
        if(        self->original_source==gComeFunResultObject) {
            __dec_obj152=self->original_source;
            come_call_finalizer3(__dec_obj152,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj153=self->source;
            come_call_finalizer3(__dec_obj153,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj154=self->sname;
            /*G*/ __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->base_sname!=((void*)0)) {
        if(        self->base_sname==gComeFunResultObject) {
            __dec_obj155=self->base_sname;
            /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->err_line!=((void*)0)) {
        if(        self->err_line==gComeFunResultObject) {
            __dec_obj156=self->err_line;
            /*G*/ __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->clang_option!=((void*)0)) {
        if(        self->clang_option==gComeFunResultObject) {
            __dec_obj157=self->clang_option;
            /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        if(        self->cpp_option==gComeFunResultObject) {
            __dec_obj158=self->cpp_option;
            /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->linker_option!=((void*)0)) {
        if(        self->linker_option==gComeFunResultObject) {
            __dec_obj159=self->linker_option;
            /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->linker_option = come_decrement_ref_count2(self->linker_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_fun_name!=((void*)0)) {
        if(        self->come_fun_name==gComeFunResultObject) {
            __dec_obj160=self->come_fun_name;
            /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->funcs!=((void*)0)) {
        if(        self->funcs==gComeFunResultObject) {
            __dec_obj161=self->funcs;
            come_call_finalizer3(__dec_obj161,map$2charphsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        if(        self->generics_funcs==gComeFunResultObject) {
            __dec_obj162=self->generics_funcs;
            come_call_finalizer3(__dec_obj162,map$2charphsGenericsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->classes!=((void*)0)) {
        if(        self->classes==gComeFunResultObject) {
            __dec_obj163=self->classes;
            come_call_finalizer3(__dec_obj163,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->modules!=((void*)0)) {
        if(        self->modules==gComeFunResultObject) {
            __dec_obj164=self->modules;
            come_call_finalizer3(__dec_obj164,map$2charphsClassModuleph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->types!=((void*)0)) {
        if(        self->types==gComeFunResultObject) {
            __dec_obj165=self->types;
            come_call_finalizer3(__dec_obj165,map$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        if(        self->generics_classes==gComeFunResultObject) {
            __dec_obj166=self->generics_classes;
            come_call_finalizer3(__dec_obj166,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->module!=((void*)0)) {
        if(        self->module==gComeFunResultObject) {
            __dec_obj167=self->module;
            come_call_finalizer3(__dec_obj167,sModule_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj168=self->type;
            come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        if(        self->right_value_objects==gComeFunResultObject) {
            __dec_obj169=self->right_value_objects;
            come_call_finalizer3(__dec_obj169,list$1sRightValueObjectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_type!=((void*)0)) {
        if(        self->generics_type==gComeFunResultObject) {
            __dec_obj170=self->generics_type;
            come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj171=self->method_generics_types;
            come_call_finalizer3(__dec_obj171,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->stack!=((void*)0)) {
        if(        self->stack==gComeFunResultObject) {
            __dec_obj172=self->stack;
            come_call_finalizer3(__dec_obj172,list$1CVALUEph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        if(        self->come_function_result_type==gComeFunResultObject) {
            __dec_obj173=self->come_function_result_type;
            come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)) {
        if(        self->come_method_block_function_result_type==gComeFunResultObject) {
            __dec_obj174=self->come_method_block_function_result_type;
            come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->come_method_block_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->gv_table!=((void*)0)) {
        if(        self->gv_table==gComeFunResultObject) {
            __dec_obj175=self->gv_table;
            come_call_finalizer3(__dec_obj175,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        if(        self->generics_type_names==gComeFunResultObject) {
            __dec_obj176=self->generics_type_names;
            come_call_finalizer3(__dec_obj176,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        if(        self->method_generics_type_names==gComeFunResultObject) {
            __dec_obj177=self->method_generics_type_names;
            come_call_finalizer3(__dec_obj177,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->impl_type!=((void*)0)) {
        if(        self->impl_type==gComeFunResultObject) {
            __dec_obj178=self->impl_type;
            come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        if(        self->output_file_name==gComeFunResultObject) {
            __dec_obj179=self->output_file_name;
            /*G*/ __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        if(        self->function_result_type==gComeFunResultObject) {
            __dec_obj180=self->function_result_type;
            come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->module_params!=((void*)0)) {
        if(        self->module_params==gComeFunResultObject) {
            __dec_obj181=self->module_params;
            come_call_finalizer3(__dec_obj181,map$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->if_result_var_name!=((void*)0)) {
        if(        self->if_result_var_name==gComeFunResultObject) {
            __dec_obj182=self->if_result_var_name;
            /*G*/ __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->if_result_var_name = come_decrement_ref_count2(self->if_result_var_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->match_it_var!=((void*)0)) {
        if(        self->match_it_var==gComeFunResultObject) {
            __dec_obj183=self->match_it_var;
            come_call_finalizer3(__dec_obj183,list$1sVarph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->match_it_var,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->sline_stack!=((void*)0)) {
        if(        self->sline_stack==gComeFunResultObject) {
            __dec_obj189=self->sline_stack;
            come_call_finalizer3(__dec_obj189,list$1int_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->sline_stack,list$1intp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->outputed_class!=((void*)0)) {
        if(        self->outputed_class==gComeFunResultObject) {
            __dec_obj190=self->outputed_class;
            come_call_finalizer3(__dec_obj190,map$2charphint_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->outputed_class,map$2charphintp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_328;
int i_329;
    for(    i_328=0;    i_328<self->size;    i_328++    ){
        if(        self->item_existance[i_328]) {
            if(            1) {
                /* U13 */self->items[i_328] = come_decrement_ref_count2(self->items[i_328], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_329=0;    i_329<self->size;    i_329++    ){
        if(        self->item_existance[i_329]) {
            if(            1) {
                /* U13 */self->keys[i_329] = come_decrement_ref_count2(self->keys[i_329], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_330;
int i_331;
    for(    i_330=0;    i_330<self->size;    i_330++    ){
        if(        self->item_existance[i_330]) {
            if(            1) {
                /* U13 */self->items[i_330] = come_decrement_ref_count2(self->items[i_330], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_331=0;    i_331<self->size;    i_331++    ){
        if(        self->item_existance[i_331]) {
            if(            1) {
                /* U13 */self->keys[i_331] = come_decrement_ref_count2(self->keys[i_331], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_332;
struct list_item$1sVarph* prev_it_333;
    it_332=self->head;
    while(it_332!=((void*)0)) {
        prev_it_333=it_332;
        it_332=it_332->next;
        /*i*/come_call_finalizer3(prev_it_333,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj184;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj184=self->item;
            come_call_finalizer3(__dec_obj184,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj185;
char* __dec_obj186;
struct sType* __dec_obj187;
char* __dec_obj188;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj185=self->mName;
            /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj186=self->mCValueName;
            /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj187=self->mType;
            come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj188=self->mFunName;
            /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_334;
struct list_item$1sVarph* prev_it_335;
    it_334=self->head;
    while(it_334!=((void*)0)) {
        prev_it_335=it_334;
        it_334=it_334->next;
        /*i*/come_call_finalizer3(prev_it_335,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1int_finalize(struct list$1int* self){
struct list_item$1int* it_336;
struct list_item$1int* prev_it_337;
    it_336=self->head;
    while(it_336!=((void*)0)) {
        prev_it_337=it_336;
        it_336=it_336->next;
        /*i*/come_call_finalizer3(prev_it_337,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_359;
int i_360;
char* __result135__;
char* default_value_361;
char* __result136__;
default_value_361 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_359=self->head;
    i_360=0;
    while(it_359!=((void*)0)) {
        if(        position==i_360) {
            __result135__ = gComeFunResultObject = __result_obj__ = it_359->item;
            gComeFunResultObject = (void*)0;
            return __result135__;
        }
        it_359=it_359->next;
        i_360++;
    }
    memset(&default_value_361,0,sizeof(char*));
    __result136__ = gComeFunResultObject = __result_obj__ = default_value_361;
    /* U13 */default_value_361 = come_decrement_ref_count2(default_value_361, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

void method_block3_02transpilec(struct __current_stack3__* parent){
    printf("%s %d: linker faield\n",(*(parent->info_358)).sname,(*(parent->info_358)).sline);
    exit(13);
}

