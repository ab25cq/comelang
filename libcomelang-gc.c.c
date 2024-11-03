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
struct anonymous_typeX4
{
    long  long __ll;
    long  double __ld;
};
typedef struct anonymous_typeX4 max_align_t;
typedef long ptrdiff_t;
typedef void* GC_PTR;
typedef unsigned long unsigned  int GC_word;
typedef long GC_signed_word;
extern unsigned long unsigned  int GC_gc_no;
typedef void* (*GC_oom_func)(unsigned long unsigned  int);
extern void* (*GC_oom_fn)(unsigned long unsigned  int);
typedef void (*GC_on_heap_resize_proc)(unsigned long unsigned  int);
extern void (*GC_on_heap_resize)(unsigned long unsigned  int);
enum anonymous_typeY5 { GC_EVENT_START
,GC_EVENT_MARK_START
,GC_EVENT_MARK_END
,GC_EVENT_RECLAIM_START
,GC_EVENT_RECLAIM_END
,GC_EVENT_END
,GC_EVENT_PRE_STOP_WORLD
,GC_EVENT_POST_STOP_WORLD
,GC_EVENT_PRE_START_WORLD
,GC_EVENT_POST_START_WORLD
,GC_EVENT_THREAD_SUSPENDED
,GC_EVENT_THREAD_UNSUSPENDED
};
typedef enum anonymous_typeY5 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY5);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();
extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long unsigned  int GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long unsigned  int GC_free_space_divisor;
extern unsigned long unsigned  int GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long unsigned  int GC_time_limit;
struct GC_timeval_s
{
    unsigned long unsigned  int tv_ms;
    unsigned long unsigned  int tv_nsec;
};
typedef int (*GC_stop_func)();
struct GC_prof_stats_s
{
    unsigned long unsigned  int heapsize_full;
    unsigned long unsigned  int free_bytes_full;
    unsigned long unsigned  int unmapped_bytes;
    unsigned long unsigned  int bytes_allocd_since_gc;
    unsigned long unsigned  int allocd_bytes_before_gc;
    unsigned long unsigned  int non_gc_bytes;
    unsigned long unsigned  int gc_no;
    unsigned long unsigned  int markers_m1;
    unsigned long unsigned  int bytes_reclaimed_since_gc;
    unsigned long unsigned  int reclaimed_bytes_before_gc;
    unsigned long unsigned  int expl_freed_bytes_since_gc;
    unsigned long unsigned  int obtained_from_os_bytes;
};
typedef void (*GC_finalization_proc)(void*,void*);
enum anonymous_typeY6 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY6 GC_ToggleRefStatus;
typedef enum anonymous_typeY6 (*GC_toggleref_func)(void*);
typedef void (*GC_await_finalize_proc)(void*);
typedef void (*GC_warn_proc)(char*,unsigned long unsigned  int);
typedef void (*GC_abort_func)(const char*);
typedef unsigned long unsigned  int GC_hidden_pointer;
typedef void* (*GC_fn_type)(void*);
struct GC_stack_base
{
    void* mem_base;
};
typedef void* (*GC_stack_base_func)(struct GC_stack_base*,void*);
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long unsigned  int);
struct sMemHeaderTiny
{
    unsigned long unsigned  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    unsigned long unsigned  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};
struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

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
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
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
unsigned int GC_get_version();
unsigned long unsigned  int GC_get_gc_no();
void GC_set_oom_fn(void* (*anonymous_var_nameX514)(unsigned long unsigned  int));
void* (*GC_get_oom_fn())(unsigned long unsigned  int);
void GC_set_on_heap_resize(void (*anonymous_var_nameX516)(unsigned long unsigned  int));
void (*GC_get_on_heap_resize())(unsigned long unsigned  int);
void GC_set_on_collection_event(void (*anonymous_var_nameX518)(enum anonymous_typeY5));
void (*GC_get_on_collection_event())(enum anonymous_typeY5);
void GC_set_find_leak(int anonymous_var_nameX519);
int GC_get_find_leak();
void GC_set_all_interior_pointers(int anonymous_var_nameX520);
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int anonymous_var_nameX521);
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int anonymous_var_nameX522);
int GC_get_java_finalization();
void GC_set_finalizer_notifier(void (*anonymous_var_nameX523)());
void (*GC_get_finalizer_notifier())();
void GC_set_dont_expand(int anonymous_var_nameX524);
int GC_get_dont_expand();
void GC_set_full_freq(int anonymous_var_nameX525);
int GC_get_full_freq();
void GC_set_non_gc_bytes(unsigned long unsigned  int anonymous_var_nameX526);
unsigned long unsigned  int GC_get_non_gc_bytes();
void GC_set_no_dls(int anonymous_var_nameX527);
int GC_get_no_dls();
void GC_set_free_space_divisor(unsigned long unsigned  int anonymous_var_nameX528);
unsigned long unsigned  int GC_get_free_space_divisor();
void GC_set_max_retries(unsigned long unsigned  int anonymous_var_nameX529);
unsigned long unsigned  int GC_get_max_retries();
void GC_set_dont_precollect(int anonymous_var_nameX530);
int GC_get_dont_precollect();
void GC_set_time_limit(unsigned long unsigned  int anonymous_var_nameX531);
unsigned long unsigned  int GC_get_time_limit();
void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX532);
struct GC_timeval_s GC_get_time_limit_tv();
void GC_set_allocd_bytes_per_finalizer(unsigned long unsigned  int anonymous_var_nameX533);
unsigned long unsigned  int GC_get_allocd_bytes_per_finalizer();
void GC_start_performance_measurement();
unsigned long unsigned  int GC_get_full_gc_total_time();
void GC_set_pages_executable(int anonymous_var_nameX534);
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(unsigned long unsigned  int anonymous_var_nameX535);
unsigned long unsigned  int GC_get_min_bytes_allocd();
void GC_set_rate(int anonymous_var_nameX536);
int GC_get_rate();
void GC_set_max_prior_attempts(int anonymous_var_nameX537);
int GC_get_max_prior_attempts();
void GC_set_disable_automatic_collection(int anonymous_var_nameX538);
int GC_get_disable_automatic_collection();
void GC_set_handle_fork(int anonymous_var_nameX539);
void GC_atfork_prepare();
void GC_atfork_parent();
void GC_atfork_child();
void GC_init();
int GC_is_init_called();
void GC_deinit();
void* GC_malloc(unsigned long unsigned  int anonymous_var_nameX540);
void* GC_malloc_atomic(unsigned long unsigned  int anonymous_var_nameX541);
char* GC_strdup(const char* anonymous_var_nameX542);
char* GC_strndup(const char* anonymous_var_nameX543, unsigned long unsigned  int anonymous_var_nameX544);
void* GC_malloc_uncollectable(unsigned long unsigned  int anonymous_var_nameX545);
void* GC_malloc_stubborn(unsigned long unsigned  int anonymous_var_nameX546);
void* GC_memalign(unsigned long unsigned  int anonymous_var_nameX547, unsigned long unsigned  int anonymous_var_nameX548);
int GC_posix_memalign(void** anonymous_var_nameX549, unsigned long unsigned  int anonymous_var_nameX550, unsigned long unsigned  int anonymous_var_nameX551);
void GC_free(void* anonymous_var_nameX552);
void GC_change_stubborn(const void* anonymous_var_nameX553);
void GC_end_stubborn_change(const void* anonymous_var_nameX554);
void* GC_base(void* anonymous_var_nameX555);
int GC_is_heap_ptr(const void* anonymous_var_nameX556);
unsigned long unsigned  int GC_size(const void* anonymous_var_nameX557);
void* GC_realloc(void* anonymous_var_nameX558, unsigned long unsigned  int anonymous_var_nameX559);
int GC_expand_hp(unsigned long unsigned  int anonymous_var_nameX560);
void GC_set_max_heap_size(unsigned long unsigned  int anonymous_var_nameX561);
void GC_exclude_static_roots(void* anonymous_var_nameX562, void* anonymous_var_nameX563);
void GC_clear_exclusion_table();
void GC_clear_roots();
void GC_add_roots(void* anonymous_var_nameX564, void* anonymous_var_nameX565);
void GC_remove_roots(void* anonymous_var_nameX566, void* anonymous_var_nameX567);
void GC_register_displacement(unsigned long unsigned  int anonymous_var_nameX568);
void GC_debug_register_displacement(unsigned long unsigned  int anonymous_var_nameX569);
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(int (*anonymous_var_nameX570)());
void GC_set_stop_func(int (*anonymous_var_nameX571)());
int (*GC_get_stop_func())();
unsigned long unsigned  int GC_get_heap_size();
unsigned long unsigned  int GC_get_free_bytes();
unsigned long unsigned  int GC_get_unmapped_bytes();
unsigned long unsigned  int GC_get_bytes_since_gc();
unsigned long unsigned  int GC_get_expl_freed_bytes_since_gc();
unsigned long unsigned  int GC_get_total_bytes();
unsigned long unsigned  int GC_get_obtained_from_os_bytes();
void GC_get_heap_usage_safe(unsigned long unsigned  int* anonymous_var_nameX572, unsigned long unsigned  int* anonymous_var_nameX573, unsigned long unsigned  int* anonymous_var_nameX574, unsigned long unsigned  int* anonymous_var_nameX575, unsigned long unsigned  int* anonymous_var_nameX576);
unsigned long unsigned  int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX577, unsigned long unsigned  int anonymous_var_nameX578);
unsigned long unsigned  int GC_get_size_map_at(int i);
unsigned long unsigned  int GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int anonymous_var_nameX579);
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
void GC_start_incremental_collection();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX580);
void* GC_malloc_atomic_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX581);
void* GC_malloc_atomic_uncollectable(unsigned long unsigned  int anonymous_var_nameX582);
void* GC_debug_malloc_atomic_uncollectable(unsigned long unsigned  int anonymous_var_nameX583, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc(unsigned long unsigned  int anonymous_var_nameX584, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc_atomic(unsigned long unsigned  int anonymous_var_nameX585, unsigned long unsigned  int ra, const char* s, int i);
char* GC_debug_strdup(const char* anonymous_var_nameX586, unsigned long unsigned  int ra, const char* s, int i);
char* GC_debug_strndup(const char* anonymous_var_nameX587, unsigned long unsigned  int anonymous_var_nameX588, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc_uncollectable(unsigned long unsigned  int anonymous_var_nameX589, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc_stubborn(unsigned long unsigned  int anonymous_var_nameX590, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX591, unsigned long unsigned  int ra, const char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(unsigned long unsigned  int anonymous_var_nameX592, unsigned long unsigned  int ra, const char* s, int i);
void GC_debug_free(void* anonymous_var_nameX593);
void* GC_debug_realloc(void* anonymous_var_nameX594, unsigned long unsigned  int anonymous_var_nameX595, unsigned long unsigned  int ra, const char* s, int i);
void GC_debug_change_stubborn(const void* anonymous_var_nameX596);
void GC_debug_end_stubborn_change(const void* anonymous_var_nameX597);
void* GC_debug_malloc_replacement(unsigned long unsigned  int anonymous_var_nameX598);
void* GC_debug_realloc_replacement(void* anonymous_var_nameX599, unsigned long unsigned  int anonymous_var_nameX600);
void GC_register_finalizer(void* anonymous_var_nameX603, void (*anonymous_var_nameX604)(void*,void*), void* anonymous_var_nameX605, void (*anonymous_var_nameX606)(void*,void*), void** anonymous_var_nameX607);
void GC_debug_register_finalizer(void* anonymous_var_nameX608, void (*anonymous_var_nameX609)(void*,void*), void* anonymous_var_nameX610, void (*anonymous_var_nameX611)(void*,void*), void** anonymous_var_nameX612);
void GC_register_finalizer_ignore_self(void* anonymous_var_nameX613, void (*anonymous_var_nameX614)(void*,void*), void* anonymous_var_nameX615, void (*anonymous_var_nameX616)(void*,void*), void** anonymous_var_nameX617);
void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX618, void (*anonymous_var_nameX619)(void*,void*), void* anonymous_var_nameX620, void (*anonymous_var_nameX621)(void*,void*), void** anonymous_var_nameX622);
void GC_register_finalizer_no_order(void* anonymous_var_nameX623, void (*anonymous_var_nameX624)(void*,void*), void* anonymous_var_nameX625, void (*anonymous_var_nameX626)(void*,void*), void** anonymous_var_nameX627);
void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX628, void (*anonymous_var_nameX629)(void*,void*), void* anonymous_var_nameX630, void (*anonymous_var_nameX631)(void*,void*), void** anonymous_var_nameX632);
void GC_register_finalizer_unreachable(void* anonymous_var_nameX633, void (*anonymous_var_nameX634)(void*,void*), void* anonymous_var_nameX635, void (*anonymous_var_nameX636)(void*,void*), void** anonymous_var_nameX637);
void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX638, void (*anonymous_var_nameX639)(void*,void*), void* anonymous_var_nameX640, void (*anonymous_var_nameX641)(void*,void*), void** anonymous_var_nameX642);
int GC_register_disappearing_link(void** anonymous_var_nameX643);
int GC_general_register_disappearing_link(void** anonymous_var_nameX644, const void* anonymous_var_nameX645);
int GC_move_disappearing_link(void** anonymous_var_nameX646, void** anonymous_var_nameX647);
int GC_unregister_disappearing_link(void** anonymous_var_nameX648);
int GC_register_long_link(void** anonymous_var_nameX649, const void* anonymous_var_nameX650);
int GC_move_long_link(void** anonymous_var_nameX651, void** anonymous_var_nameX652);
int GC_unregister_long_link(void** anonymous_var_nameX653);
void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX655)(void*));
enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);
int GC_toggleref_add(void* anonymous_var_nameX656, int anonymous_var_nameX657);
void GC_set_await_finalize_proc(void (*anonymous_var_nameX659)(void*));
void (*GC_get_await_finalize_proc())(void*);
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(unsigned long unsigned  int anonymous_var_nameX660);
void GC_set_warn_proc(void (*anonymous_var_nameX663)(char*,unsigned long unsigned  int));
void (*GC_get_warn_proc())(char*,unsigned long unsigned  int);
void GC_ignore_warn_proc(char* anonymous_var_nameX664, unsigned long unsigned  int anonymous_var_nameX665);
void GC_set_log_fd(int anonymous_var_nameX666);
void GC_set_abort_func(void (*anonymous_var_nameX668)(const char*));
void (*GC_get_abort_func())(const char*);
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX670)(void*), void* anonymous_var_nameX671);
void* GC_call_with_stack_base(void* (*anonymous_var_nameX674)(struct GC_stack_base*,void*), void* anonymous_var_nameX675);
void GC_start_mark_threads();
void* GC_do_blocking(void* (*anonymous_var_nameX676)(void*), void* anonymous_var_nameX677);
void* GC_call_with_gc_active(void* (*anonymous_var_nameX678)(void*), void* anonymous_var_nameX679);
int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX680);
void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX681);
void GC_set_stackbottom(void* anonymous_var_nameX682, const struct GC_stack_base* anonymous_var_nameX683);
void* GC_same_obj(void* anonymous_var_nameX684, void* anonymous_var_nameX685);
void* GC_pre_incr(void** anonymous_var_nameX686, long anonymous_var_nameX687);
void* GC_post_incr(void** anonymous_var_nameX688, long anonymous_var_nameX689);
void* GC_is_visible(void* anonymous_var_nameX690);
void* GC_is_valid_displacement(void* anonymous_var_nameX691);
void GC_dump();
void GC_dump_named(const char* anonymous_var_nameX692);
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* anonymous_var_nameX693, const void* anonymous_var_nameX694);
void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX695, const void* anonymous_var_nameX696);
void* GC_malloc_many(unsigned long unsigned  int anonymous_var_nameX717);
void GC_register_has_static_roots_callback(int (*anonymous_var_nameX721)(const char*,void*,unsigned long unsigned  int));
void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX722);
int GC_get_force_unmap_on_gcollect();
void GC_win32_free_heap();
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
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
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
static void* alloc_from_pages(unsigned long unsigned  int size);
static void* come_alloc_mem_from_heap_pool(unsigned long unsigned  int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long unsigned  int count, unsigned long unsigned  int size, char* sname, int sline, char* class_name);
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
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
void buffer_force_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long unsigned  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short short self, short short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long unsigned  int self, unsigned long unsigned  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
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
_Bool string_equals(char* self, char* right);
_Bool charp_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
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
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long unsigned  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long unsigned  int size_t_clone(unsigned long unsigned  int self);
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
char* string_reverse(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
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
int size_t_compare(unsigned long unsigned  int left, unsigned long unsigned  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* FILE_read(struct _IO_FILE* f);
int FILE_write(struct _IO_FILE* f, char* str);
int FILE_fclose(struct _IO_FILE* f);
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* string_read(char* file_name);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
char* string_puts(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
struct integer* integer_initialize(struct integer* self, long value);
int integer_to_int(struct integer* self);
struct integer* bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_compare(struct integer* left, struct integer* right);
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
char* integer_to_string(struct integer* self);
struct floating* floating_initialize(struct floating* self, double value);
double floating_to_double(struct floating* self);
int floating_compare(struct floating* left, struct floating* right);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
_Bool floating_equals(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
int floating_operator_add(struct floating* left, struct floating* right);
int floating_operator_sub(struct floating* left, struct floating* right);
int floating_operator_mult(struct floating* left, struct floating* right);
int floating_operator_div(struct floating* left, struct floating* right);
int floating_operator_gteq(struct floating* left, struct floating* right);
int floating_operator_lteq(struct floating* left, struct floating* right);
int floating_operator_lt(struct floating* left, struct floating* right);
int floating_operator_gt(struct floating* left, struct floating* right);
char* floating_to_string(struct floating* self);
// uniq global variable
// source head3
char* gComeStackFrameSName[128];
int gComeStackFrameSLine[128];
int gComeStackFrameID[128];
int gNumComeStackFrame=0;
void* gComeFunResultObject=((void*)0);
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
static int gNumAlloc=0;
static int gNumFree=0;
struct sMemHeader* gAllocMem;
struct sHeapPage gHeapPages;

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2419, "buffer"));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2426, "buffer"));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2435, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(short short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2442, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2449, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2456, "buffer"));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2463, "buffer"));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2763, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2768, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2773, "smart_pointer$1short"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2778, "smart_pointer$1int"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2783, "smart_pointer$1long"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_8;
struct smart_pointer$1char* __result17__;
    buf_8=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2816, "buffer"));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2818, "smart_pointer$1char"),buf_8);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_9;
struct smart_pointer$1charp* __result19__;
    buf_9=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2823, "buffer"));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2825, "smart_pointer$1charp"),buf_9);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_10;
struct smart_pointer$1short* __result20__;
    buf_10=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2830, "buffer"));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2832, "smart_pointer$1short"),buf_10);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_11;
struct smart_pointer$1int* __result21__;
    buf_11=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2837, "buffer"));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2839, "smart_pointer$1int"),buf_11);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_12;
struct smart_pointer$1long* __result22__;
    buf_12=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2844, "buffer"));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2846, "smart_pointer$1long"),buf_12);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_13;
struct smart_pointer$1float* __result24__;
    buf_13=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2851, "buffer"));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2853, "smart_pointer$1float"),buf_13);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_14;
struct smart_pointer$1double* __result26__;
    buf_14=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2858, "buffer"));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2860, "smart_pointer$1double"),buf_14);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2865, "list$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = list$1charp_initialize_with_values((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2870, "list$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2875, "list$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2880, "list$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2885, "list$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2890, "list$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2895, "list$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = vector$1char_initialize_with_values((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2900, "vector$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = vector$1charp_initialize_with_values((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2905, "vector$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = vector$1short_initialize_with_values((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2910, "vector$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = vector$1int_initialize_with_values((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2915, "vector$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = vector$1long_initialize_with_values((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2920, "vector$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = vector$1float_initialize_with_values((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2925, "vector$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = vector$1double_initialize_with_values((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2930, "vector$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long unsigned  int charpa_length(char* self, unsigned long unsigned  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long unsigned  int len, char* str){
_Bool result_43;
int i_44;
    result_43=(_Bool)0;
    for(    i_44=0;    i_44<len;    i_44++    ){
        if(        strncmp(self[i_44],str,strlen(self[i_44]))==0) {
            result_43=(_Bool)1;
            break;
        }
    }
    return result_43;
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
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

// body function









static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result8__;
    self->memory=value;
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result8__;
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result11__;
    self->memory=value;
    self->p=(short short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result11__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result13__;
    self->memory=value;
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result13__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result15__;
    self->memory=value;
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result15__;
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1charp* __result18__;
    self->memory=value;
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result18__;
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result23__;
    self->memory=value;
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result23__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result25__;
    self->memory=value;
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result25__;
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
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
struct list_item$1char* litem_16;
struct list_item$1char* litem_17;
struct list_item$1char* litem_18;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 223, "list_item$1char");
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 233, "list_item$1char");
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 243, "list_item$1char");
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


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_19;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_19=0;    i_19<num_value;    i_19++    ){
        list$1charp_push_back(self,values[i_19]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charp* litem_20;
struct list_item$1charp* litem_21;
struct list_item$1charp* litem_22;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_20=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 223, "list_item$1charp");
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head=litem_20;
    }
    else if(    self->len==1) {
        litem_21=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 233, "list_item$1charp");
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 243, "list_item$1charp");
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
int i_23;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1short_push_back(self,values[i_23]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__=(void*)0;
struct list_item$1short* litem_24;
struct list_item$1short* litem_25;
struct list_item$1short* litem_26;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_24=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 223, "list_item$1short");
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 233, "list_item$1short");
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 243, "list_item$1short");
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        litem_26->item=item;
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1int_push_back(self,values[i_27]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
struct list_item$1int* litem_28;
struct list_item$1int* litem_29;
struct list_item$1int* litem_30;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_28=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 223, "list_item$1int");
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 233, "list_item$1int");
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 243, "list_item$1int");
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_31;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_31=0;    i_31<num_value;    i_31++    ){
        list$1long_push_back(self,values[i_31]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
struct list_item$1long* litem_32;
struct list_item$1long* litem_33;
struct list_item$1long* litem_34;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_32=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 223, "list_item$1long");
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1) {
        litem_33=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 233, "list_item$1long");
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 243, "list_item$1long");
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_35;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_35=0;    i_35<num_value;    i_35++    ){
        list$1float_push_back(self,values[i_35]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
struct list_item$1float* litem_36;
struct list_item$1float* litem_37;
struct list_item$1float* litem_38;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_36=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 223, "list_item$1float");
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else if(    self->len==1) {
        litem_37=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 233, "list_item$1float");
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        litem_38=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 243, "list_item$1float");
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1double_push_back(self,values[i_39]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
struct list_item$1double* litem_40;
struct list_item$1double* litem_41;
struct list_item$1double* litem_42;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_40=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 223, "list_item$1double");
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 233, "list_item$1double");
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 243, "list_item$1double");
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1017, "char");
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result48__;
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1017, "char*");
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result50__;
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "./comelang.h", 1017, "short");
    memcpy(self->items,values,sizeof(short short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result52__;
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1017, "int");
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result54__;
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1017, "long");
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result56__;
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1017, "float");
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result58__;
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1017, "double");
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result60__;
}











void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
struct buffer* buf_45;
int i_46;
    buf_45=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 49, "buffer"));
    buffer_append_str(buf_45,xsprintf("%s %d\n",sname,sline));
    for(    i_46=gNumComeStackFrame-2;    i_46>=0;    i_46--    ){
        buffer_append_str(buf_45,xsprintf("%s %d #%d\n",gComeStackFrameSName[i_46],gComeStackFrameSLine[i_46],gComeStackFrameID[i_46]));
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(buffer_to_string(buf_45));
}

void stackframe(){
int i_47;
    for(    i_47=gNumComeStackFrame-1;    i_47>=0;    i_47--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_47],gComeStackFrameSLine[i_47],gComeStackFrameID[i_47]);
    }
}

char* come_get_stackframe(){
void* __result_obj__=(void*)0;
char* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = __builtin_string(gComeStackFrameBuffer);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result66__;
    if(    mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result66__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result66__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result67__;
    if(    mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result67__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result67__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool bool_value(_Bool self){
    return self;
}

int int_catch(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

int int_expect(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

int int_value(int self){
    return self;
}

int int_except(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_48;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    if(    gComeGCLib) {
        GC_init();
        GC_set_warn_proc(GC_ignore_warn_proc);
        GC_enable_incremental();
    }
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_48=0;    i_48<gHeapPages.mSizePages;    i_48++    ){
        gHeapPages.mPages[i_48]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_49;
int n_50;
_Bool flag_51;
int i_52;
struct sMemHeaderTiny* it_53;
int n_54;
int i_55;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_49=gAllocMem;
        n_50=0;
        while(it_49) {
            n_50++;
            flag_51=(_Bool)0;
            printf("#%d ",n_50);
            if(            it_49->class_name) {
                printf("%p (%s): ",(char*)it_49+sizeof(struct sMemHeader)+sizeof(unsigned long unsigned  int)+sizeof(unsigned long unsigned  int),it_49->class_name);
            }
            for(            i_52=0;            i_52<16;            i_52++            ){
                if(                it_49->sname[i_52]) {
                    printf("%s %d #%d, ",it_49->sname[i_52],it_49->sline[i_52],it_49->id[i_52]);
                    flag_51=(_Bool)1;
                }
            }
            if(            flag_51) {
                puts("");
            }
            it_49=it_49->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_50,gNumAlloc,gNumFree);
    }
    else {
        it_53=(struct sMemHeaderTiny*)gAllocMem;
        n_54=0;
        while(it_53) {
            n_54++;
            it_53=it_53->next;
        }
        if(        n_54>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_54,gNumAlloc,gNumFree);
        }
    }
    for(    i_55=0;    i_55<gHeapPages.mSizePages;    i_55++    ){
        free(gHeapPages.mPages[i_55]);
    }
    free(gHeapPages.mPages);
}

static void* alloc_from_pages(unsigned long unsigned  int size){
void* __result_obj__=(void*)0;
void* result_56;
unsigned long unsigned  int free_area_57;
int new_size_pages_58;
void** new_pages_59;
int i_60;
void* __result68__;
    result_56=((void*)0);
    if(    size<2048*2) {
        if(        gHeapPages.mFreeMem[size]) {
            result_56=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_56,0,size);
        }
        if(        result_56==((void*)0)) {
            free_area_57=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(            size>=free_area_57) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_58=gHeapPages.mSizePages*2;
                    new_pages_59=calloc(1,sizeof(char*)*new_size_pages_58);
                    i_60=0;
                    for(                    ;                    i_60<gHeapPages.mSizePages;                    i_60++                    ){
                        new_pages_59[i_60]=gHeapPages.mPages[i_60];
                    }
                    for(                    ;                    i_60<new_size_pages_58;                    i_60++                    ){
                        new_pages_59[i_60]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_59;
                    gHeapPages.mSizePages=new_size_pages_58;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_56=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_56=calloc(1,size);
    }
    __result68__ = gComeFunResultObject = __result_obj__ = result_56;
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void* come_alloc_mem_from_heap_pool(unsigned long unsigned  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* result_61;
struct sMemHeader* it_62;
void* __result69__;
void* result_63;
struct sMemHeaderTiny* it_64;
void* __result70__;
    if(    gComeDebugLib) {
        result_61=GC_malloc(size+sizeof(struct sMemHeader));
        memset(result_61,0,size+sizeof(struct sMemHeader));
        it_62=result_61;
        it_62->allocated=177783;
        it_62->size=size+sizeof(struct sMemHeader);
        it_62->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            memcpy(it_62->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_62->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_62->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_62->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_62->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_62->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_62->next=gAllocMem;
        it_62->prev=((void*)0);
        if(        class_name) {
            it_62->class_name=strdup(class_name);
        }
        else {
            it_62->class_name=((void*)0);
        }
        if(        gAllocMem) {
            gAllocMem->prev=it_62;
        }
        gAllocMem=it_62;
        gNumAlloc++;
        __result69__ = gComeFunResultObject = __result_obj__ = (char*)result_61+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    else {
        result_63=GC_malloc(size+sizeof(struct sMemHeaderTiny));
        memset(result_63,0,size+sizeof(struct sMemHeaderTiny));
        it_64=result_63;
        it_64->allocated=177783;
        it_64->size=size+sizeof(struct sMemHeaderTiny);
        it_64->free_next=((void*)0);
        it_64->next=(struct sMemHeaderTiny*)gAllocMem;
        it_64->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_64;
        }
        gAllocMem=(struct sMemHeader*)it_64;
        gNumAlloc++;
        __result70__ = gComeFunResultObject = __result_obj__ = (char*)result_63+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_65;
struct sMemHeader* prev_it_66;
struct sMemHeader* next_it_67;
unsigned long unsigned  int size_68;
struct sMemHeaderTiny* it_69;
struct sMemHeaderTiny* prev_it_70;
struct sMemHeaderTiny* next_it_71;
unsigned long unsigned  int size_72;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_65=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_65->allocated!=177783) {
                return;
            }
            it_65->allocated=0;
            prev_it_66=it_65->prev;
            next_it_67=it_65->next;
            if(            it_65->class_name) {
                free(it_65->class_name);
            }
            if(            gAllocMem==it_65) {
                gAllocMem=next_it_67;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_66) {
                    prev_it_66->next=next_it_67;
                }
                if(                next_it_67) {
                    next_it_67->prev=prev_it_66;
                }
            }
            size_68=it_65->size;
            if(            size_68<2048*2) {
                if(                gHeapPages.mFreeMem[size_68]==((void*)0)) {
                    it_65->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_68]=(struct sMemHeaderTiny*)it_65;
                }
                else {
                    it_65->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_68];
                    gHeapPages.mFreeMem[size_68]=(struct sMemHeaderTiny*)it_65;
                }
            }
            else {
                free(it_65);
            }
            gNumFree++;
        }
        else {
            it_69=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_69->allocated!=177783) {
                return;
            }
            it_69->allocated=0;
            prev_it_70=it_69->prev;
            next_it_71=it_69->next;
            if(            gAllocMem==it_69) {
                gAllocMem=(struct sMemHeader*)next_it_71;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_70) {
                    prev_it_70->next=next_it_71;
                }
                if(                next_it_71) {
                    next_it_71->prev=prev_it_70;
                }
            }
            size_72=it_69->size;
            if(            size_72<2048*2) {
                if(                gHeapPages.mFreeMem[size_72]==((void*)0)) {
                    it_69->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_72]=it_69;
                }
                else {
                    it_69->free_next=gHeapPages.mFreeMem[size_72];
                    gHeapPages.mFreeMem[size_72]=it_69;
                }
            }
            else {
                free(it_69);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_73;
char* __result71__;
    it_73=(struct sMemHeader*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int)-sizeof(struct sMemHeaderTiny));
    if(    it_73->allocated!=177783) {
        printf("invalid heap object(%p)\n",it_73);
        exit(2);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = it_73->class_name;
    gComeFunResultObject = (void*)0;
    return __result71__;
}

void* come_calloc(unsigned long unsigned  int count, unsigned long unsigned  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
char* mem_74;
unsigned long unsigned  int* ref_count_75;
unsigned long unsigned  int* size2_76;
void* __result72__;
    mem_74=come_alloc_mem_from_heap_pool(sizeof(unsigned long unsigned  int)+sizeof(unsigned long unsigned  int)+count*size,sname,sline,class_name);
    ref_count_75=(unsigned long unsigned  int*)mem_74;
    *ref_count_75=0;
    size2_76=(unsigned long unsigned  int*)(mem_74+sizeof(unsigned long unsigned  int));
    *size2_76=size*count+sizeof(unsigned long unsigned  int)+sizeof(unsigned long unsigned  int);
    __result72__ = gComeFunResultObject = __result_obj__ = mem_74+sizeof(unsigned long unsigned  int)+sizeof(unsigned long unsigned  int);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

void come_free_object(void* mem){
unsigned long unsigned  int* ref_count_77;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_77=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    come_free_mem_of_heap_pool((char*)ref_count_77);
}

void come_free(void* mem){
unsigned long unsigned  int* ref_count_78;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_78=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    come_free_mem_of_heap_pool((char*)ref_count_78);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result73__;
char* mem_79;
unsigned long unsigned  int* size_p_80;
unsigned long unsigned  int size_81;
void* result_82;
void* __result74__;
    if(    !block) {
        __result73__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    mem_79=(char*)block-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int);
    size_p_80=(unsigned long unsigned  int*)(mem_79+sizeof(unsigned long unsigned  int));
    size_81=*size_p_80-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int);
    result_82=come_calloc(1,size_81,sname,sline,class_name);
    memcpy(result_82,block,size_81);
    __result74__ = gComeFunResultObject = __result_obj__ = result_82;
    gComeFunResultObject = (void*)0;
    return __result74__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result75__;
unsigned long unsigned  int* ref_count_83;
void* __result76__;
    if(    mem==((void*)0)) {
        __result75__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    ref_count_83=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    (*ref_count_83)++;
    __result76__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result76__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result77__;
unsigned long unsigned  int* ref_count_84;
void* __result78__;
    if(    mem==((void*)0)) {
        __result77__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    ref_count_84=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    printf("ref_count %ld\n",*ref_count_84);
    __result78__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result79__;
unsigned long unsigned  int* ref_count_85;
unsigned long unsigned  int count_86;
void (*finalizer_87)(void*);
void* __result80__;
void* __result81__;
memset(&finalizer_87, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result79__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    ref_count_85=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    if(    !no_decrement) {
        (*ref_count_85)--;
    }
    count_86=*ref_count_85;
    if(    !no_free&&(count_86<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_87=protocol_fun;
            finalizer_87(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result80__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__=(void*)0;
void* __result82__;
void* __result83__;
unsigned long unsigned  int* ref_count_88;
unsigned long unsigned  int count_89;
void (*finalizer_90)(void*);
void* __result84__;
void* __result85__;
memset(&finalizer_90, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result82__ = gComeFunResultObject = __result_obj__ = mem;
            gComeFunResultObject = (void*)0;
            return __result82__;
        }
    }
    if(    mem==((void*)0)) {
        __result83__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result83__;
    }
    ref_count_88=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
    if(    !no_decrement) {
        (*ref_count_88)--;
    }
    count_89=*ref_count_88;
    if(    !no_free&&(count_89<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_90=protocol_fun;
            finalizer_90(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result84__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    __result85__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result85__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void (*finalizer_91)(void*);
void (*finalizer_92)(void*);
unsigned long unsigned  int* ref_count_93;
unsigned long unsigned  int count_94;
void (*finalizer_95)(void*);
void (*finalizer_96)(void*);
memset(&finalizer_91, 0, sizeof(void (*)(void*)));
memset(&finalizer_92, 0, sizeof(void (*)(void*)));
memset(&finalizer_95, 0, sizeof(void (*)(void*)));
memset(&finalizer_96, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_91=protocol_fun;
                finalizer_91(protocol_obj);
            }
            finalizer_92=fun;
            finalizer_92(mem);
        }
    }
    else {
        ref_count_93=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
        if(        !no_decrement) {
            (*ref_count_93)--;
        }
        count_94=*ref_count_93;
        if(        !no_free&&(count_94<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_95=protocol_fun;
                    finalizer_95(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_96=fun;
                    finalizer_96(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_97)(void*);
void (*finalizer_98)(void*);
unsigned long unsigned  int* ref_count_99;
unsigned long unsigned  int count_100;
void (*finalizer_101)(void*);
void (*finalizer_102)(void*);
memset(&finalizer_97, 0, sizeof(void (*)(void*)));
memset(&finalizer_98, 0, sizeof(void (*)(void*)));
memset(&finalizer_101, 0, sizeof(void (*)(void*)));
memset(&finalizer_102, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_97=protocol_fun;
                finalizer_97(protocol_obj);
            }
            finalizer_98=fun;
            finalizer_98(mem);
        }
    }
    else {
        ref_count_99=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
        if(        !no_decrement) {
            (*ref_count_99)--;
        }
        count_100=*ref_count_99;
        if(        !no_free&&(count_100<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_101=protocol_fun;
                    finalizer_101(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_102=fun;
                    finalizer_102(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_103)(void*);
unsigned long unsigned  int* ref_count_104;
unsigned long unsigned  int count_105;
void (*finalizer_106)(void*);
memset(&finalizer_103, 0, sizeof(void (*)(void*)));
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            finalizer_103=fun;
            finalizer_103(mem);
        }
    }
    else {
        ref_count_104=(unsigned long unsigned  int*)((char*)mem-sizeof(unsigned long unsigned  int)-sizeof(unsigned long unsigned  int));
        if(        !no_decrement) {
            (*ref_count_104)--;
        }
        count_105=*ref_count_104;
        if(        !no_free&&(count_105<=0||force_delete_)) {
            if(            mem) {
                if(                fun) {
                    finalizer_106=fun;
                    finalizer_106(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result86__;
int len_107;
char* result_108;
char* __result87__;
    if(    str==((void*)0)) {
        __result86__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    len_107=strlen(str)+1;
    result_108=(char*)come_calloc(1, sizeof(char)*(1*(len_107)), "libcomelang-gc.c", 944, "char");
    strncpy(result_108,str,len_107);
    __result87__ = gComeFunResultObject = __result_obj__ = result_108;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_109;
int i_110;
    found_109=(_Bool)0;
    for(    i_110=0;    i_110<len;    i_110++    ){
        if(        array[i_110]==element) {
            found_109=(_Bool)1;
            break;
        }
    }
    return found_109;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result88__;
    self->size=128;
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 969, "char");
    self->buf[0]=0;
    self->len=0;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result88__;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf) {
    }
}

void buffer_force_finalize(struct buffer* self){
    if(    self&&self->buf) {
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result89__;
struct buffer* result_111;
struct buffer* __result90__;
    if(    self==((void*)0)) {
        __result89__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    result_111=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 991, "buffer");
    result_111->size=self->size;
    result_111->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 994, "char");
    result_111->len=self->len;
    memcpy(result_111->buf,self->buf,self->len);
    __result90__ = gComeFunResultObject = __result_obj__ = result_111;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long unsigned  int size){
void* __result_obj__=(void*)0;
struct buffer* __result91__;
char* old_buf_112;
int old_len_113;
int new_size_114;
struct buffer* __result92__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result91__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_112=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1033, "char");
        memcpy(old_buf_112,self->buf,self->size);
        old_len_113=self->len;
        new_size_114=(self->size+size+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_114)), "libcomelang-gc.c", 1037, "char");
        memcpy(self->buf,old_buf_112,old_len_113);
        self->buf[old_len_113]=0;
        self->size=new_size_114;
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result93__;
char* old_buf_115;
int old_len_116;
int new_size_117;
struct buffer* __result94__;
    if(    self==((void*)0)) {
        __result93__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_115=charp_clone(self->buf);
        old_len_116=self->len;
        new_size_117=(self->size+10+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_117)), "libcomelang-gc.c", 1060, "char");
        memcpy(self->buf,old_buf_115,old_len_116);
        self->buf[old_len_116]=0;
        self->size=new_size_117;
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result95__;
int size_118;
char* old_buf_119;
int old_len_120;
int new_size_121;
struct buffer* __result96__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result95__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    size_118=strlen(mem);
    if(    self->len+size_118+1+1>=self->size) {
        old_buf_119=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1082, "char");
        memcpy(old_buf_119,self->buf,self->size);
        old_len_120=self->len;
        new_size_121=(self->size+size_118+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_121)), "libcomelang-gc.c", 1086, "char");
        memcpy(self->buf,old_buf_119,old_len_120);
        self->buf[old_len_120]=0;
        self->size=new_size_121;
    }
    memcpy(self->buf+self->len,mem,size_118);
    self->len+=size_118;
    self->buf[self->len]=0;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result97__;
int size_122;
char* old_buf_123;
int old_len_124;
int new_size_125;
struct buffer* __result98__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result97__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    size_122=strlen(mem)+1;
    if(    self->len+size_122+1+1+1>=self->size) {
        old_buf_123=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1106, "char");
        memcpy(old_buf_123,self->buf,self->size);
        old_len_124=self->len;
        new_size_125=(self->size+size_122+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_125)), "libcomelang-gc.c", 1110, "char");
        memcpy(self->buf,old_buf_123,old_len_124);
        self->buf[old_len_124]=0;
        self->size=new_size_125;
    }
    memcpy(self->buf+self->len,mem,size_122);
    self->len+=size_122;
    self->buf[self->len]=0;
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result99__;
int* mem_126;
int size_127;
char* old_buf_128;
int old_len_129;
int new_size_130;
struct buffer* __result100__;
    if(    self==((void*)0)) {
        __result99__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    mem_126=&value;
    size_127=sizeof(int);
    if(    self->len+size_127+1+1>=self->size) {
        old_buf_128=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1133, "char");
        memcpy(old_buf_128,self->buf,self->size);
        old_len_129=self->len;
        new_size_130=(self->size+size_127+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_130)), "libcomelang-gc.c", 1137, "char");
        memcpy(self->buf,old_buf_128,old_len_129);
        self->buf[old_len_129]=0;
        self->size=new_size_130;
    }
    memcpy(self->buf+self->len,mem_126,size_127);
    self->len+=size_127;
    self->buf[self->len]=0;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_131;
int size_132;
char* old_buf_133;
int old_len_134;
int new_size_135;
struct buffer* __result101__;
    mem_131=&value;
    size_132=sizeof(long);
    if(    self->len+size_132+1+1>=self->size) {
        old_buf_133=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1156, "char");
        memcpy(old_buf_133,self->buf,self->size);
        old_len_134=self->len;
        new_size_135=(self->size+size_132+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_135)), "libcomelang-gc.c", 1160, "char");
        memcpy(self->buf,old_buf_133,old_len_134);
        self->buf[old_len_134]=0;
        self->size=new_size_135;
    }
    memcpy(self->buf+self->len,mem_131,size_132);
    self->len+=size_132;
    self->buf[self->len]=0;
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__=(void*)0;
struct buffer* __result102__;
short short* mem_136;
int size_137;
char* old_buf_138;
int old_len_139;
int new_size_140;
struct buffer* __result103__;
    if(    self==((void*)0)) {
        __result102__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    mem_136=&value;
    size_137=sizeof(short short);
    if(    self->len+size_137+1+1>=self->size) {
        old_buf_138=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1183, "char");
        memcpy(old_buf_138,self->buf,self->size);
        old_len_139=self->len;
        new_size_140=(self->size+size_137+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_140)), "libcomelang-gc.c", 1187, "char");
        memcpy(self->buf,old_buf_138,old_len_139);
        self->buf[old_len_139]=0;
        self->size=new_size_140;
    }
    memcpy(self->buf+self->len,mem_136,size_137);
    self->len+=size_137;
    self->buf[self->len]=0;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result104__;
int len_141;
int new_size_142;
int i_143;
struct buffer* __result105__;
    if(    self==((void*)0)) {
        __result104__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    len_141=self->len;
    len_141=(len_141+3)&~3;
    if(    len_141>=self->size) {
        new_size_142=(self->size+1+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_142)), "libcomelang-gc.c", 1211, "char");
        self->size=new_size_142;
    }
    for(    i_143=self->len;    i_143<len_141;    i_143++    ){
        self->buf[i_143]=0;
    }
    self->len=len_141;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__=(void*)0;
struct buffer* result_144;
struct buffer* __result106__;
struct buffer* __result107__;
    result_144=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 1241, "buffer"));
    if(    self==((void*)0)) {
        __result106__ = gComeFunResultObject = __result_obj__ = result_144;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    buffer_append_str(result_144,self);
    __result107__ = gComeFunResultObject = __result_obj__ = result_144;
    gComeFunResultObject = (void*)0;
    return __result107__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
struct buffer* result_145;
struct buffer* __result108__;
struct buffer* __result109__;
    result_145=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 1254, "buffer"));
    if(    self==((void*)0)) {
        __result108__ = gComeFunResultObject = __result_obj__ = result_145;
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    buffer_append_str(result_145,self);
    __result109__ = gComeFunResultObject = __result_obj__ = result_145;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
char* __result110__;
char* __result111__;
    if(    self==((void*)0)) {
        __result110__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    __result111__ = gComeFunResultObject = __result_obj__ = __builtin_string(self->buf);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short short self, short short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long unsigned  int self, unsigned long unsigned  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short short self, short short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short short self, short short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
char* __result112__;
int len_146;
char* result_147;
char* __result113__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result112__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    len_146=strlen(self)+strlen(right);
    result_147=(char*)come_calloc(1, sizeof(char)*(1*(len_146+1)), "libcomelang-gc.c", 1481, "char");
    strncpy(result_147,self,len_146+1);
    strncat(result_147,right,len_146+1);
    __result113__ = gComeFunResultObject = __result_obj__ = result_147;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
char* __result114__;
int len_148;
char* result_149;
char* __result115__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result114__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    len_148=strlen(self)+strlen(right);
    result_149=(char*)come_calloc(1, sizeof(char)*(1*(len_148+1)), "libcomelang-gc.c", 1496, "char");
    strncpy(result_149,self,len_148+1);
    strncat(result_149,right,len_148+1);
    __result115__ = gComeFunResultObject = __result_obj__ = result_149;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
char* __result116__;
struct buffer* buf_150;
int i_151;
char* __result117__;
    if(    self==((void*)0)) {
        __result116__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    buf_150=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 1509, "buffer"));
    for(    i_151=0;    i_151<right;    i_151++    ){
        buffer_append_str(buf_150,self);
    }
    __result117__ = gComeFunResultObject = __result_obj__ = buffer_to_string(buf_150);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
char* __result118__;
struct buffer* buf_152;
int i_153;
char* __result119__;
    if(    self==((void*)0)) {
        __result118__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    buf_152=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 1523, "buffer"));
    for(    i_153=0;    i_153<right;    i_153++    ){
        buffer_append_str(buf_152,self);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = buffer_to_string(buf_152);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long unsigned  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int string_get_hash_key(char* value){
int result_154;
char* p_155;
    if(    value==((void*)0)) {
        return 0;
    }
    result_154=0;
    p_155=value;
    while(*p_155) {
        result_154+=(*p_155);
        p_155++;
    }
    return result_154;
}

unsigned int charp_get_hash_key(char* value){
int result_156;
char* p_157;
    if(    value==((void*)0)) {
        return 0;
    }
    result_156=0;
    p_157=value;
    while(*p_157) {
        result_156+=(*p_157);
        p_157++;
    }
    return result_156;
}

_Bool bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long unsigned  int size_t_clone(unsigned long unsigned  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

char* charp_clone(char* self){
void* __result_obj__=(void*)0;
char* __result120__;
char* __result121__;
    if(    self==((void*)0)) {
        __result120__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    __result121__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result122__;
char* __result123__;
    if(    self==((void*)0)) {
        __result122__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    __result123__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

_Bool xiswalpha(unsigned int c){
_Bool result_158;
    result_158=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_158;
}

_Bool xiswblank(unsigned int c){
    return c==32||c==9;
}

_Bool xiswdigit(unsigned int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(unsigned int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_159;
    result_159=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_159;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_160;
    result_160=(c>=32&&c<=126);
    return result_160;
}

_Bool xiswascii(unsigned int c){
_Bool result_161;
    result_161=(c>=32&&c<=126);
    return result_161;
}

int string_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* string_reverse(char* str){
void* __result_obj__=(void*)0;
char* __result124__;
int len_162;
char* result_163;
int i_164;
char* __result125__;
    if(    str==((void*)0)) {
        __result124__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    len_162=strlen(str);
    result_163=(char*)come_calloc(1, sizeof(char)*(1*(len_162+1)), "libcomelang-gc.c", 1740, "char");
    for(    i_164=0;    i_164<len_162;    i_164++    ){
        result_163[i_164]=str[len_162-i_164-1];
    }
    result_163[len_162]=0;
    __result125__ = gComeFunResultObject = __result_obj__ = result_163;
    gComeFunResultObject = (void*)0;
    return __result125__;
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
char* __result126__;
int len_165;
char* result_166;
int i_167;
char* __result127__;
    if(    str==((void*)0)) {
        __result126__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    len_165=strlen(str);
    result_166=(char*)come_calloc(1, sizeof(char)*(1*(len_165+1)), "libcomelang-gc.c", 1757, "char");
    for(    i_167=0;    i_167<len_165;    i_167++    ){
        result_166[i_167]=str[len_165-i_167-1];
    }
    result_166[len_165]=0;
    __result127__ = gComeFunResultObject = __result_obj__ = result_166;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result128__;
int len_168;
char* __result129__;
char* __result130__;
char* __result131__;
char* result_169;
char* __result132__;
    if(    str==((void*)0)) {
        __result128__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result128__;
    }
    len_168=strlen(str);
    if(    head<0) {
        head+=len_168;
    }
    if(    tail<0) {
        tail+=len_168+1;
    }
    if(    head>tail) {
        __result129__ = gComeFunResultObject = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_168) {
        tail=len_168;
    }
    if(    head==tail) {
        __result130__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    if(    tail-head+1<1) {
        __result131__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    result_169=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang-gc.c", 1802, "char");
    memcpy(result_169,str+head,tail-head);
    result_169[tail-head]=0;
    __result132__ = gComeFunResultObject = __result_obj__ = result_169;
    gComeFunResultObject = (void*)0;
    return __result132__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result133__;
int len_170;
char* __result134__;
char* __result135__;
char* __result136__;
char* result_171;
char* __result137__;
    if(    str==((void*)0)) {
        __result133__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    len_170=strlen(str);
    if(    head<0) {
        head+=len_170;
    }
    if(    tail<0) {
        tail+=len_170+1;
    }
    if(    head>tail) {
        __result134__ = gComeFunResultObject = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_170) {
        tail=len_170;
    }
    if(    head==tail) {
        __result135__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    if(    tail-head+1<1) {
        __result136__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    result_171=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang-gc.c", 1845, "char");
    memcpy(result_171,str+head,tail-head);
    result_171[tail-head]=0;
    __result137__ = gComeFunResultObject = __result_obj__ = result_171;
    gComeFunResultObject = (void*)0;
    return __result137__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result138__;
int len_172;
char* __result139__;
char* __result140__;
char* __result141__;
char* result_173;
char* __result142__;
    if(    str==((void*)0)) {
        __result138__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result138__;
    }
    len_172=strlen(str);
    if(    head<0) {
        head+=len_172;
    }
    if(    tail<0) {
        tail+=len_172+1;
    }
    if(    head>tail) {
        __result139__ = gComeFunResultObject = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_172) {
        tail=len_172;
    }
    if(    head==tail) {
        __result140__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    if(    tail-head+1<1) {
        __result141__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    result_173=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang-gc.c", 1888, "char");
    memcpy(result_173,str+head,tail-head);
    result_173[tail-head]=0;
    __result142__ = gComeFunResultObject = __result_obj__ = result_173;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result143__;
int len_174;
char* __result144__;
char* __result145__;
char* __result146__;
char* result_175;
char* __result147__;
    if(    str==((void*)0)) {
        __result143__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    len_174=strlen(str);
    if(    head<0) {
        head+=len_174;
    }
    if(    tail<0) {
        tail+=len_174+1;
    }
    if(    head>tail) {
        __result144__ = gComeFunResultObject = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_174) {
        tail=len_174;
    }
    if(    head==tail) {
        __result145__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    if(    tail-head+1<1) {
        __result146__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    result_175=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang-gc.c", 1931, "char");
    memcpy(result_175,str+head,tail-head);
    result_175[tail-head]=0;
    __result147__ = gComeFunResultObject = __result_obj__ = result_175;
    gComeFunResultObject = (void*)0;
    return __result147__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
char* __result148__;
va_list args_176;
char* result_177;
int len_178;
char* __result149__;
char* result2_179;
char* __result150__;
memset(&args_176, 0, sizeof(va_list));
result_177 = (void*)0;
    if(    msg==((void*)0)) {
        __result148__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    __builtin_va_start(args_176,msg);
    len_178=vasprintf(&result_177,msg,args_176);
    __builtin_va_end(args_176);
    if(    len_178<0) {
        __result149__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    result2_179=__builtin_string(result_177);
    free(result_177);
    __result150__ = gComeFunResultObject = __result_obj__ = result2_179;
    gComeFunResultObject = (void*)0;
    return __result150__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result151__;
int len_180;
char* __result152__;
char* __result153__;
char* sub_str_181;
char* __result154__;
    if(    str==((void*)0)) {
        __result151__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    len_180=strlen(str);
    if(    strcmp(str,"")==0) {
        __result152__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    if(    head<0) {
        head+=len_180;
    }
    if(    tail<0) {
        tail+=len_180+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result153__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    if(    tail>=len_180) {
        tail=len_180;
    }
    sub_str_181=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_181,string_length(sub_str_181)+1);
    __result154__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result155__;
int len_182;
char* __result156__;
char* __result157__;
char* sub_str_183;
char* __result158__;
    if(    str==((void*)0)) {
        __result155__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    len_182=strlen(str);
    if(    strcmp(str,"")==0) {
        __result156__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    if(    head<0) {
        head+=len_182;
    }
    if(    tail<0) {
        tail+=len_182+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result157__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    if(    tail>=len_182) {
        tail=len_182;
    }
    sub_str_183=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_183,string_length(sub_str_183)+1);
    __result158__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
struct list$1charph* __result160__;
struct list$1charph* result_184;
struct buffer* str_185;
int i_186;
struct list$1charph* __result162__;
    if(    self==((void*)0)) {
        __result160__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-gc.c", 2042, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    result_184=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-gc.c", 2045, "list$1charph"));
    str_185=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 2047, "buffer"));
    for(    i_186=0;    i_186<charp_length(self);    i_186++    ){
        if(        self[i_186]==c) {
            list$1charph_push_back(result_184,__builtin_string(str_185->buf));
            buffer_reset(str_185);
        }
        else {
            buffer_append_char(str_185,self[i_186]);
        }
    }
    if(    buffer_length(str_185)!=0) {
        list$1charph_push_back(result_184,__builtin_string(str_185->buf));
    }
    __result162__ = gComeFunResultObject = __result_obj__ = result_184;
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result159__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result159__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charph* litem_187;
struct list_item$1charph* litem_188;
struct list_item$1charph* litem_189;
struct list$1charph* __result161__;
    if(    self->len==0) {
        litem_187=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 223, "list_item$1charph");
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1) {
        litem_188=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 233, "list_item$1charph");
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 243, "list_item$1charph");
        litem_189->prev=self->tail;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail->next=litem_189;
        self->tail=litem_189;
    }
    self->len++;
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result161__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__=(void*)0;
struct list$1charph* __result163__;
struct list$1charph* result_190;
struct buffer* str_191;
int i_192;
struct list$1charph* __result164__;
    if(    self==((void*)0)) {
        __result163__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-gc.c", 2068, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_190=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-gc.c", 2071, "list$1charph"));
    str_191=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 2073, "buffer"));
    for(    i_192=0;    i_192<charp_length(self);    i_192++    ){
        if(        self[i_192]==c) {
            list$1charph_push_back(result_190,__builtin_string(str_191->buf));
            buffer_reset(str_191);
        }
        else {
            buffer_append_char(str_191,self[i_192]);
        }
    }
    if(    buffer_length(str_191)!=0) {
        list$1charph_push_back(result_190,__builtin_string(str_191->buf));
    }
    __result164__ = gComeFunResultObject = __result_obj__ = result_190;
    gComeFunResultObject = (void*)0;
    return __result164__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
char* __result165__;
char* p_193;
char* __result166__;
char* __result167__;
char* __result168__;
    if(    path==((void*)0)) {
        __result165__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    p_193=path+strlen(path);
    while(p_193>=path) {
        if(        *p_193==47) {
            break;
        }
        else {
            p_193--;
        }
    }
    if(    p_193<path) {
        __result166__ = gComeFunResultObject = __result_obj__ = __builtin_string(path);
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    else {
        __result167__ = gComeFunResultObject = __result_obj__ = __builtin_string(p_193+1);
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    __result168__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
    gComeFunResultObject = (void*)0;
    return __result168__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
char* __result169__;
char* path2_194;
char* p_195;
char* __result170__;
char* __result171__;
char* __result172__;
    if(    path==((void*)0)) {
        __result169__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    path2_194=xbasename(path);
    p_195=path2_194+strlen(path2_194);
    while(p_195>=path2_194) {
        if(        *p_195==46) {
            break;
        }
        else {
            p_195--;
        }
    }
    if(    p_195<path2_194) {
        __result170__ = gComeFunResultObject = __result_obj__ = __builtin_string(path2_194);
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    else {
        __result171__ = gComeFunResultObject = __result_obj__ = string_substring(path2_194,0,p_195-path2_194);
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    __result172__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
    gComeFunResultObject = (void*)0;
    return __result172__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
char* __result173__;
char* p_196;
char* __result174__;
char* __result175__;
char* __result176__;
    if(    path==((void*)0)) {
        __result173__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result173__;
    }
    p_196=path+strlen(path);
    while(p_196>=path) {
        if(        *p_196==46) {
            break;
        }
        else {
            p_196--;
        }
    }
    if(    p_196<path) {
        __result174__ = gComeFunResultObject = __result_obj__ = __builtin_string(path);
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    else {
        __result175__ = gComeFunResultObject = __result_obj__ = __builtin_string(p_196+1);
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    __result176__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
    gComeFunResultObject = (void*)0;
    return __result176__;
}

char* bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
char* __result177__;
char* __result178__;
    if(    self) {
        __result177__ = gComeFunResultObject = __result_obj__ = __builtin_string("true");
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    else {
        __result178__ = gComeFunResultObject = __result_obj__ = __builtin_string("false");
        gComeFunResultObject = (void*)0;
        return __result178__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
char* __result179__;
    __result179__ = gComeFunResultObject = __result_obj__ = xsprintf("%c",self);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

char* short_to_string(short short self){
void* __result_obj__=(void*)0;
char* __result180__;
    __result180__ = gComeFunResultObject = __result_obj__ = xsprintf("%d",self);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
char* __result181__;
    __result181__ = gComeFunResultObject = __result_obj__ = xsprintf("%d",self);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
char* __result182__;
    __result182__ = gComeFunResultObject = __result_obj__ = xsprintf("%ld",self);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

char* size_t_to_string(unsigned long unsigned  int self){
void* __result_obj__=(void*)0;
char* __result183__;
    __result183__ = gComeFunResultObject = __result_obj__ = xsprintf("%ld",self);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
char* __result184__;
    __result184__ = gComeFunResultObject = __result_obj__ = xsprintf("%f",self);
    gComeFunResultObject = (void*)0;
    return __result184__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
char* __result185__;
    __result185__ = gComeFunResultObject = __result_obj__ = xsprintf("%lf",self);
    gComeFunResultObject = (void*)0;
    return __result185__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
char* __result186__;
char* __result187__;
    if(    self==((void*)0)) {
        __result186__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result186__;
    }
    __result187__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
char* __result188__;
char* __result189__;
    if(    self==((void*)0)) {
        __result188__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    __result189__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right) {
        return -1;
    }
    else if(    left&&right) {
        return 0;
    }
    else if(    !left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short short left, short short right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long unsigned  int left, unsigned long unsigned  int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
char* __result190__;
struct buffer* buf_197;
int size_199;
char* __result191__;
    if(    f==((void*)0)) {
        __result190__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    buf_197=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 2403, "buffer"));
    while(1) {
        char buf2_198[1024];
        memset(&buf2_198, 0, sizeof(char)        *(1024)        );
        size_199=fread(buf2_198,1,1024,f);
        buffer_append(buf_197,buf2_198,size_199);
        if(        size_199<1024) {
            break;
        }
    }
    __result191__ = gComeFunResultObject = __result_obj__ = buffer_to_string(buf_197);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

int FILE_write(struct _IO_FILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct _IO_FILE* f){
int result_200;
    if(    f==((void*)0)) {
        return -1;
    }
    result_200=fclose(f);
    if(    result_200<0) {
        return result_200;
    }
    return result_200;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct _IO_FILE* __result192__;
va_list args_202;
int result_203;
struct _IO_FILE* __result193__;
struct _IO_FILE* __result194__;
memset(&args_202, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result192__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    char msg2_201[1024*2*2*2];
    memset(&msg2_201, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_202,msg);
    vsnprintf(msg2_201,1024*2*2*2,msg,args_202);
    __builtin_va_end(args_202);
    result_203=fprintf(f,"%s",msg2_201);
    if(    result_203<0) {
        __result193__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    __result194__ = gComeFunResultObject = __result_obj__ = f;
    gComeFunResultObject = (void*)0;
    return __result194__;
}

int string_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_204;
int result_205;
int result2_206;
f_204 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_204=fopen(file_name,"a");
    }
    else {
        f_204=fopen(file_name,"w");
    }
    if(    f_204==((void*)0)) {
        return -1;
    }
    result_205=fwrite(self,strlen(self),1,f_204);
    if(    result_205<0) {
        return result_205;
    }
    result2_206=fclose(f_204);
    if(    result2_206<0) {
        return result2_206;
    }
    return result_205;
}

int charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_207;
int result_208;
int result2_209;
f_207 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_207=fopen(file_name,"a");
    }
    else {
        f_207=fopen(file_name,"w");
    }
    if(    f_207==((void*)0)) {
        return -1;
    }
    result_208=fwrite(self,strlen(self),1,f_207);
    if(    result_208<0) {
        return result_208;
    }
    result2_209=fclose(f_207);
    if(    result2_209<0) {
        return result2_209;
    }
    return result_208;
}

char* string_read(char* file_name){
void* __result_obj__=(void*)0;
char* __result195__;
struct _IO_FILE* f_210;
char* __result196__;
struct buffer* buf_211;
int size_213;
char* result_214;
int result2_215;
char* __result197__;
char* __result198__;
    if(    file_name==((void*)0)) {
        __result195__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result195__;
    }
    f_210=fopen(file_name,"r");
    if(    f_210==((void*)0)) {
        __result196__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result196__;
    }
    buf_211=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 2543, "buffer"));
    while(1) {
        char buf2_212[1024];
        memset(&buf2_212, 0, sizeof(char)        *(1024)        );
        size_213=fread(buf2_212,1,1024,f_210);
        buffer_append(buf_211,buf2_212,size_213);
        if(        size_213<1024) {
            break;
        }
    }
    result_214=buffer_to_string(buf_211);
    result2_215=fclose(f_210);
    if(    result2_215<0) {
        __result197__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result197__;
    }
    __result198__ = gComeFunResultObject = __result_obj__ = result_214;
    gComeFunResultObject = (void*)0;
    return __result198__;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
char* __result199__;
struct _IO_FILE* f_216;
char* __result200__;
struct buffer* buf_217;
int size_219;
char* result_220;
int result2_221;
char* __result201__;
char* __result202__;
    if(    file_name==((void*)0)) {
        __result199__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result199__;
    }
    f_216=fopen(file_name,"r");
    if(    f_216==((void*)0)) {
        __result200__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    buf_217=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 2580, "buffer"));
    while(1) {
        char buf2_218[1024];
        memset(&buf2_218, 0, sizeof(char)        *(1024)        );
        size_219=fread(buf2_218,1,1024,f_216);
        buffer_append(buf_217,buf2_218,size_219);
        if(        size_219<1024) {
            break;
        }
    }
    result_220=buffer_to_string(buf_217);
    result2_221=fclose(f_216);
    if(    result2_221<0) {
        __result201__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    __result202__ = gComeFunResultObject = __result_obj__ = result_220;
    gComeFunResultObject = (void*)0;
    return __result202__;
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
struct list$1charph* result_222;
struct list$1charph* __result203__;
struct list$1charph* __result204__;
    result_222=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-gc.c", 2607, "list$1charph"));
    if(    f==((void*)0)) {
        __result203__ = gComeFunResultObject = __result_obj__ = result_222;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    while(1) {
        char buf_223[1024];
        memset(&buf_223, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_223,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_222,__builtin_string(buf_223));
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_222;
    gComeFunResultObject = (void*)0;
    return __result204__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
struct _IO_FILE* f_224;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_224=fopen(path,mode);
    if(    f_224) {
        block(parent,f_224);
        fclose(f_224);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
char* __result205__;
char* __result206__;
    if(    self==((void*)0)) {
        __result205__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    puts(self);
    __result206__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
char* __result207__;
char* __result208__;
    if(    self==((void*)0)) {
        __result207__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    printf("%s",self);
    __result208__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

char* string_printf(char* self, ...){
void* __result_obj__=(void*)0;
char* __result209__;
char* msg2_225;
va_list args_226;
char* __result210__;
msg2_225 = (void*)0;
memset(&args_226, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result209__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    __builtin_va_start(args_226,self);
    vasprintf(&msg2_225,self,args_226);
    __builtin_va_end(args_226);
    printf("%s",msg2_225);
    free(msg2_225);
    __result210__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
char* __result211__;
char* msg2_227;
va_list args_228;
char* __result212__;
msg2_227 = (void*)0;
memset(&args_228, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result211__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    __builtin_va_start(args_228,self);
    vasprintf(&msg2_227,self,args_228);
    __builtin_va_end(args_228);
    printf("%s",msg2_227);
    free(msg2_227);
    __result212__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

char* string_puts(char* self){
void* __result_obj__=(void*)0;
char* __result213__;
char* __result214__;
    if(    self==((void*)0)) {
        __result213__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    puts(self);
    __result214__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_229;
    for(    i_229=0;    i_229<self;    i_229++    ){
        block(parent,i_229);
    }
}

int assert_v2(int exp){
    if(    exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__=(void*)0;
struct integer* __result215__;
    self->value=value;
    __result215__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result215__;
}

int integer_to_int(struct integer* self){
    return self->value;
}

struct integer* bool_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result216__;
    __result216__ = gComeFunResultObject = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang-gc.c", 2762, "integer"),self);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

struct integer* char_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result217__;
    __result217__ = gComeFunResultObject = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang-gc.c", 2767, "integer"),self);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

struct integer* short_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result218__;
    __result218__ = gComeFunResultObject = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang-gc.c", 2772, "integer"),self);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

struct integer* int_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result219__;
    __result219__ = gComeFunResultObject = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang-gc.c", 2777, "integer"),self);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

struct integer* long_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang-gc.c", 2782, "integer"),self);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

int integer_compare(struct integer* left, struct integer* right){
    if(    left->value<right->value) {
        return -1;
    }
    else if(    left->value>right->value) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

_Bool integer_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
    return !integer_operator_equals(self,right);
}

int integer_operator_add(struct integer* left, struct integer* right){
    return left->value+right->value;
}

int integer_operator_sub(struct integer* left, struct integer* right){
    return left->value-right->value;
}

int integer_operator_mult(struct integer* left, struct integer* right){
    return left->value*right->value;
}

int integer_operator_div(struct integer* left, struct integer* right){
    return left->value/right->value;
}

int integer_operator_mod(struct integer* left, struct integer* right){
    return left->value%right->value;
}

int integer_operator_lshift(struct integer* left, struct integer* right){
    return left->value<<right->value;
}

int integer_operator_rshift(struct integer* left, struct integer* right){
    return left->value>>right->value;
}

int integer_operator_gteq(struct integer* left, struct integer* right){
    return left->value>=right->value;
}

int integer_operator_lteq(struct integer* left, struct integer* right){
    return left->value<=right->value;
}

int integer_operator_lt(struct integer* left, struct integer* right){
    return left->value<right->value;
}

int integer_operator_gt(struct integer* left, struct integer* right){
    return left->value>right->value;
}

int integer_operator_and(struct integer* left, struct integer* right){
    return left->value&right->value;
}

int integer_operator_xor(struct integer* left, struct integer* right){
    return left->value^right->value;
}

int integer_operator_or(struct integer* left, struct integer* right){
    return left->value|right->value;
}

char* integer_to_string(struct integer* self){
void* __result_obj__=(void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = long_to_string(self->value);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

struct floating* floating_initialize(struct floating* self, double value){
void* __result_obj__=(void*)0;
struct floating* __result222__;
    self->value=value;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result222__;
}

double floating_to_double(struct floating* self){
    return self->value;
}

int floating_compare(struct floating* left, struct floating* right){
    if(    left->value<right->value) {
        return -1;
    }
    else if(    left->value>right->value) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

struct floating* float_to_floating(float self){
void* __result_obj__=(void*)0;
struct floating* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = floating_initialize((struct floating*)come_calloc(1, sizeof(struct floating)*(1), "libcomelang-gc.c", 2922, "floating"),self);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

struct floating* double_to_floating(double self){
void* __result_obj__=(void*)0;
struct floating* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = floating_initialize((struct floating*)come_calloc(1, sizeof(struct floating)*(1), "libcomelang-gc.c", 2927, "floating"),self);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

_Bool floating_equals(struct floating* self, struct floating* right){
    return self->value==right->value;
}

_Bool floating_operator_equals(struct floating* self, struct floating* right){
    return self->value==right->value;
}

_Bool floating_operator_not_equals(struct floating* self, struct floating* right){
    return !floating_operator_equals(self,right);
}

int floating_operator_add(struct floating* left, struct floating* right){
    return left->value+right->value;
}

int floating_operator_sub(struct floating* left, struct floating* right){
    return left->value-right->value;
}

int floating_operator_mult(struct floating* left, struct floating* right){
    return left->value*right->value;
}

int floating_operator_div(struct floating* left, struct floating* right){
    return left->value/right->value;
}

int floating_operator_gteq(struct floating* left, struct floating* right){
    return left->value>=right->value;
}

int floating_operator_lteq(struct floating* left, struct floating* right){
    return left->value<=right->value;
}

int floating_operator_lt(struct floating* left, struct floating* right){
    return left->value<right->value;
}

int floating_operator_gt(struct floating* left, struct floating* right){
    return left->value>right->value;
}

char* floating_to_string(struct floating* self){
void* __result_obj__=(void*)0;
char* __result225__;
    __result225__ = gComeFunResultObject = __result_obj__ = double_to_string(self->value);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

