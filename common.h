#ifndef __COMMON_H__
#define __COMMON_H__

#include <comelang.h>

#define FUN_VERSION_MAX 128
#define GENERICS_TYPE_MAX 12
#define METHOD_GENERICS_TYPE_MAX 7

extern bool gComeDebug;
extern bool gComeGC;
extern bool gComeC;
extern bool gComeStr;
extern bool gComePthread;
extern bool gComeNet;
extern bool gComeMalloc;
extern bool gCommonHeader;
extern int gComeDebugStackFrameID;

struct sType;
struct sClass;
struct sInfo;
struct sVar;
struct sRightValueObject;
struct sVarTable;
struct sBlock;

interface sNode 
{
    bool compile(sInfo* info);
    int sline();
    int sline_real();
    string sname();
    bool terminated();
    string kind();
};

uniq class sClass 
{
    bool mStruct;
    bool mFloat;
    bool mUnion;
    bool mGenerics;
    bool mMethodGenerics;
    bool mEnum;
    bool mProtocol;
    bool mNumber;
    bool mUniq;
    
    string mName;
    
    int mGenericsNum;
    int mMethodGenericsNum;
    
    list<tup: string, sType*%>*% mFields;
    
    string mParentClassName;
    
    string mAttribute;
    
    new(string name, bool number=false, bool union_=false, bool generics=false, bool method_generics=false, bool protocol_=false, bool struct_=false, bool float_=false, int generics_num=-1, int method_generics_num=-1, bool enum_=false, bool uniq_=false, sInfo* info=info)
    {
        self.mNumber = number;
        self.mStruct = struct_;
        self.mUnion = union_;
        self.mGenerics = generics;
        self.mMethodGenerics = method_generics;
        self.mEnum = false;
        self.mProtocol = protocol_;
        self.mFloat = float_;
        self.mEnum = enum_;
        self.mUniq = uniq_;
        
        self.mName = string(name);
        
        self.mGenericsNum = generics_num;
        self.mMethodGenericsNum = method_generics_num;
        
        self.mFields = new list<tup: string, sType*%>();
    }
};

uniq class sType
{
    sClass* mClass;
    
    sType*% mOriginalLoadVarType;
    sType*% mChannelType;
    
    list<sType*%>*% mGenericsTypes;
    sType*% mNoSolvedGenericsType;
    
    sNode*% mSizeNum;
    sNode*% mAlignas;
    string mTupleName;
    string mAttribute;
    
    bool mAllocaValue;
    
    bool mUnsigned;
    bool mShort;
    bool mLong;
    bool mLongLong;
    bool mConstant;
    bool mAtomic;
    bool mRegister;
    bool mVolatile;
    bool mStatic;
    bool mUniq;
    bool mRecord;
    bool mExtern;
    bool mRestrict;
    bool mImmutable;
    bool mHeap;
    bool mDefferRightValue;
    bool mChannel;
    bool mNoHeap;
    bool mNoCallingDestructor;
    bool mException;
    
    bool mInline;
    bool mNullValue;
    bool mGuardValue;
    
    string mAsmName;
    
    bool mTypedef;
    
    bool mMultipleTypes;
    bool mOriginIsArray;
    
    list<sNode*%>*% mArrayNum;
    
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    
    string mOriginalTypeName;
    int mOriginalPointerNum;
    
    bool mArrayPointerType;
    
    bool mLambdaArray;
    int mLambdaArrayNum;
    
    //// lambda ///
    list<sType*%>*% mParamTypes;
    list<string>*% mParamNames;
    sType*% mResultType;
    bool mVarArgs;
    
    bool mExceptionGenericsType;
    
    new(string name, bool heap=false, sInfo* info=info)
    {
        int pointer_num = 0;
        char* p = name;
        while(*p) {
            if(xisalpha(*p) || *p == '_') {
                p++;
            }
            else {
                break;
            }
        }
        while(*p == '*') {
            pointer_num++;
            p++;
        }
        
        string name2 = string(name).substring(0, -pointer_num-1);
        
        sClass* klass = info.classes[string(name2)]??;
        sClass* generics_class = info.generics_classes[name2]??;
        
        if(klass == null && generics_class == null) {
            printf("%s %d: class not found(%s)(1)\n", info->sname, info->sline, name2);
        }
        
        if(klass) {
            self.mClass = klass;
        }
        else {
            sClass*% klass2 = new sClass;
            klass2->mName = string(name);
            
            info.classes.insert(string(name), klass2);
            
            self.mClass = info.classes[string(name)]??;
        }
        
        self.mNoSolvedGenericsType = null;
        self.mOriginalLoadVarType = null;
        self.mGenericsTypes = new list<sType*%>();
        self.mArrayNum = new list<sNode*%>();
        self.mParamTypes = new list<sType*%>();
        self.mParamNames = new list<string>();
        self.mVarArgs = false;
        self.mResultType = null;
        self.mUnsigned = false;
        self.mConstant = false;
        self.mRegister = false;
        self.mVolatile = false;
        self.mStatic = false;
        self.mRestrict = false;
        self.mImmutable = false;
        self.mLongLong = false;
        self.mHeap = heap;
        self.mNoHeap = false;
        
        self.mPointerNum = pointer_num;
        self.mSizeNum = null;
        
        self.mOriginalTypeName = string("");
        self.mOriginalPointerNum = 0;
    }
};

struct sVar 
{
    string mName;
    string mCValueName;
    sType*% mType;

    bool mGlobal;
    bool mAllocaValue;
    bool mNoFree;
    
    bool mComma;
    
    string mFunName;
};

uniq class sFun
{
    string mName;
    
    sType*% mResultType;
    list<sType*%>*% mParamTypes;
    list<string>*% mParamNames;
    list<string>*% mParamDefaultParametors;
    
    sType*% mLambdaType;
    
    sBlock*% mBlock;
    string mTextBlock;
    
    string mTextBlockSName;
    int mTextBlockSline;
    
    buffer*% mSource;
    buffer*% mSourceHead;
    buffer*% mSourceHead2;
    buffer*% mSourceDefer;
    
    bool mStatic;
    bool mInline;
    bool mUniq;
    bool mGenerate;
    bool mExternal;
    bool mVarArgs;
    bool mNoResultType;
    bool mConstFun;
    
    string mAttribute;
    string mFunAttribute;
    
    bool mGenericsFun;
    
    new(string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, list<string>%* param_default_parametors, bool external, bool var_args, sBlock*% block, bool static_, sInfo* info, bool inline_, bool uniq_=false, bool generate_=false, string attribute=s"", string fun_attribute=s"", bool const_fun=false, string text_block=null, string generics_sname=null, int generics_sline=0)
    {
        self.mName = name;
        self.mResultType = result_type;
        self.mParamTypes = param_types;
        self.mParamNames = param_names;
        self.mParamDefaultParametors = param_default_parametors;
        self.mExternal = external;
        self.mVarArgs = var_args;
        self.mStatic = static_;
        self.mInline = inline_;
        self.mUniq = uniq_;
        self.mConstFun = const_fun;
        self.mGenerate = generate_;
        
        self.mLambdaType = new sType(s"lambda");
        
        foreach(it, param_types) {
            self.mLambdaType.mParamTypes.push_back(clone it);
        }
        
        foreach(it, param_names) {
            self.mLambdaType.mParamNames.push_back(clone it);
        }
        
        self.mLambdaType.mResultType = result_type;
        self.mLambdaType.mVarArgs = var_args;
        
        self.mSource = new buffer();
        self.mSourceHead = new buffer();
        self.mSourceHead2 = new buffer();
        self.mSourceDefer = new buffer();
        
        self.mBlock = block;
        self.mTextBlock = text_block;
        
        self.mTextBlockSName = generics_sname;
        self.mTextBlockSline = generics_sline;
        
        if((result_type->mClass->mNumber || result_type->mClass->mName === "double" || result_type->mClass->mName === "float" || result_type->mClass->mStruct) && result_type->mPointerNum == 0) {
            self.mNoResultType = true;
        }
        
        self.mAttribute = attribute;
        self.mFunAttribute = fun_attribute;
    }
};

uniq class sGenericsFun
{
    sType*% mImplType;
    list<string>*% mGenericsTypeNames;
    list<string>*% mMethodGenericsTypeNames;
    
    string mName;
    
    sType*% mResultType;
    list<sType*%>*% mParamTypes;
    list<string>*% mParamNames;
    list<string>*% mParamDefaultParametors;
    
    string mBlock;
    int mSLine;
    
    bool mVarArgs;
    bool mGenerate;
    
    string mGenericsSName;
    int mGenericsSLine;
    bool mConstFun;
    
    new(sType*% impl_type, list<string>* generics_type_names, list<string>* method_generics_type_names, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, list<string>*% param_default_parametors, bool var_args, string block, sInfo* info, string generics_sname, int generics_sline, bool const_fun=false)
    {
        self.mGenericsTypeNames = clone generics_type_names;
        self.mMethodGenericsTypeNames = clone method_generics_type_names;
        
        self.mName = name;
        self.mResultType = result_type;
        self.mParamTypes = param_types;
        self.mParamNames = param_names;
        self.mParamDefaultParametors = param_default_parametors;
        self.mVarArgs = var_args;
        
        self.mBlock = block;
        self.mSLine = info.sline;
        
        self.mGenericsSName = string(generics_sname);
        self.mGenericsSLine = generics_sline;
        self.mConstFun = const_fun;
    }
};

uniq class CVALUE 
{
    string c_value;
    sType*% type;
    sVar* var;
    sRightValueObject* right_value_objects;
    string c_value_without_right_value_objects;
    string c_value_without_cast_object_value;
    
    new() {
    }
};

uniq class sModule
{
    buffer*% mSourceHead;
    buffer*% mSource;
    string mLastCode;
    string mLastCode2;
    
    map<string, string>*% mHeader;
    map<string, string>*% mHeaderStructs;
    
    new() {
        self.mSourceHead = new buffer();
        self.mSource = new buffer();
        self.mLastCode = null;
        self.mLastCode2 = null;
        self.mHeader = new map<string, string>();
        self.mHeaderStructs = new map<string, string>();
    }
};

uniq class sVarTable 
{
    map<string, sVar*%>*% mVars;
    bool mGlobal;
    struct sVarTable* mParent;

    new(bool global, sVarTable* parent)
    {
        self.mVars = new map<string, sVar*%>();
        self.mGlobal = global;
        self.mParent = parent;
    }

    void finalize()
    {
        delete self.mVars;
    }
};

uniq class sBlock
{
    list<sNode*%>*% mNodes;
    sVarTable*% mVarTable;
    bool mOmitSemicolon;

    new() {
        self.mNodes = new list<sNode*%>();
    }
};

struct sRightValueObject 
{
    sType*% mType;
    string mVarName;
    string mFunName;
    bool mFreed;
    int mID;
    int mBlockLevel;
    bool mStored;
    bool mDecrementRefCount;
    
    sType*% mObjType;
    string mObjValue;
    bool mNoFree;
};

uniq class sClassModule
{
    string mName;
    string mText;
    list<string>*% mParams;
    string mSName;
    int mSLine;
    
    new(string name, string text, string sname, int sline)
    {
        self.mName = clone name;
        self.mText = clone text;
        self.mParams = new list<string>();
        self.mSName = string(sname);
        self.mSLine = sline;
    }
};

struct sInfo
{
    char* p;
    char* head;
    buffer*% source;
    string sname;
    string sname_at_head;
    string base_sname;
    int sline;
    int err_num;
    string clang_option;
    string cpp_option;
    string linker_option;
    bool no_output_err;
    bool no_output_come_code;
    bool no_output_come_code2;
    
    sFun* come_fun;
    
    sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    
    int block_level;

    map<string, sFun*%>*% funcs;
    map<string, sFun*%>*% uniq_funcs;
    map<string, sGenericsFun*%>*% generics_funcs;
    map<string, sClass*%>*% classes;
    map<string, sClassModule*%>*% modules;
    map<string, sType*%>*% types;
    map<string, sClass*%>*% generics_classes;
    map<string, buffer*%>*% struct_definition;
    map<string, buffer*%>*% previous_struct_definition;
    
    sModule*% module;
    
    sType*% type;
    
    list<sRightValueObject*%>*% right_value_objects;
    
    sType*% generics_type;
    list<sType*%>*% method_generics_types;
    
    list<CVALUE*%>*% stack;
    
    sType*% come_function_result_type;
    sType*% come_method_block_function_result_type;
    
    sVarTable* lv_table;
    sVarTable*% gv_table;
    
    bool comma_instead_of_semicolon;
    bool no_comma;
    bool no_assign;
    bool no_label;
    bool last_statment_is_return;
    
    list<string>*% generics_type_names;
    list<string>*% method_generics_type_names;
    sType*% impl_type;
    sType*% class_type;
    
    int current_stack_num;
    int num_method_block;
    sClass* current_stack_frame_struct;
    
    bool define_struct;
    bool in_typedef;
    bool in_loop;
    
    string output_file_name;

    sVarTable* current_loop_vtable;
    bool verbose;
    
    bool output_header_file;
    int num_current_stack;
    
    int num_source_files;
    int max_source_files;
    
    bool without_semicolon;
    bool writing_source_file_position;
    
    sType*% function_result_type;
    bool in_class;
    
    map<string,string>*% module_params;
    
    bool constructor_;
    sClass* defining_class;
    bool array_initializer;
    bool struct_initializer;
    
    bool va_arg;
    bool in_fun_param;
    
    bool inhibits_output_code;
    bool inhibits_output_code2;
    
    bool in_generics_fun;
    bool in_clone_object;
    bool in_conditional_operator;
    string if_result_var_name;
    
    list<sVar*%>*% match_it_var;
    
    int sline_top;
    sFun* calling_fun;
    
    map<string, string>*% uniq_definition;
    bool in_top_level;
    bool remove_comment;
    int sline_real;
    int sline_block;
    bool m5stack_cpp;
    bool pico_cpp;
    bool emb_cpp;
    bool gcc_compiler;
    bool in_method_block;
    
    bool prohibits_output_last_code;
};

uniq class sNodeBase
{
    int sline;
    string sname;
    int sline_real;
    
    new(sInfo* info=info) {
        self.sline = info.sline;
        self.sname = string(info.sname);
        self.sline_real = info.sline_real;
    }
    int sline(sInfo* info=info) {
        return self.sline;
    }
    
    int sline_real(sInfo* info=info) {
        return self.sline_real;
    }
    
    bool terminated() {
        return false;
    }
    
    string sname(sInfo* info=info) {
        return string(self.sname);
    }
};

module sCurrentNodeModule
{
    new(sInfo* info)
    {
        self.super();
    }
    
    int sline(sInfo* info)
    {
        return self.sline;
    }
    
    string sname(sInfo* info)
    {
        return string(self.sname);
    }
    
    string kind()
    {
        return string("sCurrentNode");
    }
    
    bool compile(sInfo* info)
    {
        info->current_stack_num++;
        string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
        sClass*% current_stack = new sClass(name: class_name, struct_:true);
            
        sVarTable* vtable = info->lv_table;
        
        while(vtable) {
            foreach(it, vtable.mVars) {
                char* key = it;
                sVar* value = vtable.mVars[string(key)];
                
                sType*% type2 = clone value.mType;
                
                type2.mPointerNum++;
                
                tup: string, sType*% item = (string(value.mCValueName), type2);
                
                if(value.mCValueName != null) {
                    if(strcmp(value.mCValueName, "__list_values") == 0)
                    {
                    }
                    else if(strcmp(value.mCValueName, "__map_keys") == 0)
                    {
                    }
                    else if(strcmp(value.mCValueName, "__map_element") == 0)
                    {
                    }
                    else if(value.mType.mClass.mName === "va_list" || value.mType.mClass.mName === "__builtin_va_list") 
                    {
                    }
                    else if(type2->mArrayNum.length() == 1) {
                        sType*% type3 = clone type2;
                        type3->mArrayNum.reset();
                        type3->mPointerNum = 1;
                        type3->mOriginIsArray = true;
                        tup: string, sType*% item2 = (string(value.mCValueName), type3);
                        current_stack.mFields.push_back(clone item2);
                        value->mType->mOriginIsArray = true;
                    }
                    else {
                        current_stack.mFields.push_back(clone item);
                    }
                }
            }
            
            vtable = vtable->mParent;
        }
        
        output_struct(current_stack, info);
        
        info.classes.insert(class_name, current_stack);
        
        add_come_code_at_function_head(info, "struct %s __current_stack%d__;\n", class_name, info->current_stack_num);
        add_come_code_at_function_head2(info, "memset(&__current_stack%d__, 0, sizeof(struct %s));\n", info->current_stack_num, class_name);
        
        vtable = info->lv_table;
        
        while(vtable) {
            foreach(it, vtable.mVars) {
                char* key = it;
                sVar* value = vtable.mVars[key];
                
                sType*% type2 = clone value.mType;
                
                tup: string, sType*% item = (value.mCValueName, type2);
                
                if(value.mCValueName != null) {
                    if(strcmp(value.mCValueName, "__list_values") == 0)
                    {
                    }
                    else if(strcmp(value.mCValueName, "__map_keys") == 0)
                    {
                    }
                    else if(strcmp(value.mCValueName, "__map_element") == 0)
                    {
                    }
                    else if(value.mType.mClass.mName === "va_list" || value.mType.mClass.mName === "__builtin_va_list") 
                    {
                    }
                    else {
                        if(value->mFunName === info.come_fun.mName) {
                            if(type2->mClass->mName === "lambda") {
                                add_come_code(info, "__current_stack%d__.%s = %s;\n", info->current_stack_num, value.mCValueName, value.mCValueName);
                            }
                            else {
                                add_come_code(info, "__current_stack%d__.%s = &%s;\n", info->current_stack_num, value.mCValueName, value.mCValueName);
                            }
                        }
                        else {
                            if(type2->mClass->mName === "lambda") {
                                add_come_code(info, "__current_stack%d__.%s = parent->%s;\n", info->current_stack_num, value.mCValueName, value.mCValueName);
                            }
                            else {
                                add_come_code(info, "__current_stack%d__.%s = parent->%s;\n", info->current_stack_num, value.mCValueName, value.mCValueName);
                            }
                        }
                    }
                }
            }
            
            vtable = vtable->mParent;
        }
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("&__current_stack%d__", info->current_stack_num);
        come_value.type = new sType(class_name);
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

/////////////////////////////////////////////////////////////////////
/// 02transpile.c ///
/////////////////////////////////////////////////////////////////////
exception int err_msg(sInfo* info, char* msg, ...);
int expected_next_character(char c, sInfo* info=info);;
bool node_compile(sNode* node, sInfo* info=info);
bool node_condional_compile(sNode* node, sInfo* info=info);
int come_main(int argc, char** argv);
string make_type_name_string(sType* type, bool in_header=false, bool array_cast_pointer=false, bool no_pointer=false, sInfo* info=info, bool no_static=false);
string make_come_type_name_string(sType* type, sInfo* info=info);
string make_come_type_name_string_no_solved(sType* type, bool original_type_name=false, sInfo* info=info);

/////////////////////////////////////////////////////////////////////
/// 03output_code.c ///
/////////////////////////////////////////////////////////////////////
string make_define_var_no_solved(sType* type, char* name, bool in_header=false, bool original_type_name=false, sInfo* info=info);
string header_function(sFun* fun, sInfo* info);
bool output_source_file(sInfo* info);
string make_come_header_function(sFun* fun, string base_fun_name, sType*% impl_type=null, int version_=-1, sInfo* info=info);
void show_type(sType* type, sInfo* info);
string create_generics_name(sType* generics_type, sInfo* info);
void add_last_code_to_source(sInfo* info);
void add_come_code_at_function_head(sInfo* info, char* code, ...);
void add_come_code_at_come_header(sInfo* info, string id, const char* msg, ...);
void add_come_code_at_come_struct_header(sInfo* info, string id, const char* msg, ...);
void add_come_code_at_function_head2(sInfo* info, char* code, ...);
void add_come_code(sInfo* info, const char* msg, ...);
void add_come_last_code(sInfo* info, const char* msg, ...);
void add_come_last_code2(sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(sInfo* info);
void dec_stack_ptr(int value=1, sInfo* info=info);
CVALUE*% get_value_from_stack(int offset, sInfo* info);
string make_define_var(sType* type, char* name, bool in_header=false, sInfo* info=info);
void transpiler_clear_last_code(sInfo* info);
bool output_header_file(sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 04heap.c ///
/////////////////////////////////////////////////////////////////////
sType*% solve_method_generics(sType* type, sInfo* info);
bool existance_free_right_value_objects(sInfo* info);
bool existance_free_objects_on_return(sBlock* current_block, sInfo* info, sVar* ret_value, bool top_block);
void std_move(sType* left_type, sType* right_type, CVALUE* right_value, sInfo* info=info, bool no_delete_from_right_value_objects=false);
string append_stackframe(char* c_value, sType* type, sInfo* info);
bool create_equals_method(sType* type, sInfo* info);
bool create_operator_equals_method(sType* type, sInfo* info);
bool create_operator_not_equals_method(sType* type, sInfo* info);
sType*% solve_generics(sType* type, sType* generics_type, sInfo* info);
sVar* get_variable_from_table(sVarTable* table, char* name);
void free_objects_on_return(sBlock* current_block, sInfo* info, sVar* ret_value, bool top_block);
void free_objects_of_match_lv_tables(sInfo* info);
void free_objects_on_break(sInfo* info);
void free_object(sType* type, char* obj, bool no_decrement, bool no_free, sInfo* info, bool comma=false, bool ret_value=false, bool force_delete_=false);
sType*%, string clone_object(sType* type, char* obj, sInfo* info);
void free_right_value_objects(sInfo* info, bool comma=false);
void free_objects(sVarTable* table, sVar* ret_value, sInfo* info);
void append_object_to_right_values2(CVALUE* come_value, sType*% type, sInfo* info, bool decrement_ref_count=false, sType*% obj_type=null, char* obj_value=null);
        
void remove_object_from_right_values(int right_value_num, sInfo* info);
string increment_ref_count_object(sType* type, char* obj, sInfo* info);
void decrement_ref_count_object(sType* type, char* obj, sInfo* info, bool force_delete_=false, bool no_free=false);

/////////////////////////////////////////////////////////////////////
/// 05function.c ///
/////////////////////////////////////////////////////////////////////
sFun*% compile_uniq_function(sFun* fun, sInfo* info=info);
sNode*% cast_node(sType*% type, sNode*% node, sInfo* info=info);
sNode*% reffence_node(sNode*% value, sInfo* info);
sNode*% craete_fun_call(char* fun_name, list<tup: string,sNode*%>* params, bool guard_break, list<sType*%>*% method_generics_types, buffer*% method_block, int method_block_sline, sInfo* info);
string,sGenericsFun* make_method_generics_function(string fun_name, list<sType*%>*% method_generics_types, sInfo* info);
sNode*% create_return_node(sNode*% value, string value_source, sInfo* info=info);
sNode*% post_position_operator(sNode*% node, sInfo* info);
bool create_method_generics_fun(string fun_name, sGenericsFun* generics_fun, sInfo* info);
bool operator_overload_fun_self(sType* type, char* fun_name, sNode*% node, CVALUE* left_value, sInfo* info);
bool strmemcmp(char* p, char* p2);
void caller_begin(sInfo* info=info);
void caller_end(sInfo* info=info);
sNode*% craete_logical_denial(sNode*% node, sInfo* info);
tup: sType*%,string,bool backtrace_parse_type(bool parse_variable_name=false,sInfo* info=info);
void transpile_toplevel(bool block=false, sInfo* info=info);
void skip_pointer_attribute(sInfo* info=info);
void skip_paren(sInfo* info);
sNode*% parse_normal_block(bool clang=false, bool comma=false, sInfo* info=info, bool if_result=false);
sNode*% parse_comma_block(sInfo* info=info);
bool check_assign_type(char* msg, sType* left_type, sType* right_type, CVALUE* come_value, bool check_no_pointer=false, bool print_err_msg=true, bool pointer_massive=true, sInfo* info=info);
void cast_type(sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info);
string,string parse_attribute(sInfo* info=info,bool parse_function_attribute=false);
sNode*% get_number(bool minus, sInfo* info);
sNode*% get_oct_number(sInfo* info);
sNode*% get_hex_number(bool minus, sInfo* info);
sNode*% create_int_node(int value, sInfo* info);
list<sType*%>*%, list<string>*%, list<string>*%, bool parse_params(sInfo* info, bool in_constructor_=false);
sFun*,string create_pthread_fun(sType* type, char* fun_name, sInfo* info);
sFun*,string create_finalizer_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_to_string_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_cloner_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_equals_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_operator_equals_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_operator_not_equals_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_not_equals_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_get_hash_key_automatically(sType* type, char* fun_name, sInfo* info);
string skip_block(sInfo* info=info, bool return_self_at_last=false);
bool is_contained_generics_class(sType* type, sInfo* info);
bool is_type_name(char* buf, sInfo* info=info);
bool parsecmp(char* str, sInfo* info=info);
string parse_word(sInfo* info=info);
string backtrace_parse_word(sInfo* info=info);
void skip_spaces_and_lf(sInfo* info=info);
string, bool create_generics_fun(string fun_name, sGenericsFun* generics_fun, sType* generics_type, sInfo* info);

sType*%,string,bool parse_type(sInfo* info=info, bool parse_variable_name=false, bool parse_multiple_type=true, bool in_function_parametor=false);
tup: sType*%, string parse_variable_name(sType*% base_type_name, bool first, sInfo* info);
sBlock*% parse_block(sInfo* info=info, bool no_block_level=false, bool return_self_at_last=false, bool in_function=false);
int transpile_block(sBlock* block, list<sType*%>* param_types, list<string>* param_names, sInfo* info, bool no_var_table=false, bool loop_block=false, bool comma=false, bool if_result=false);
void arrange_stack(sInfo* info, int top);
sNode*% parse_function(sInfo* info);

sNode*% expression(sInfo* info=info) version 5;
sNode*% statment(sInfo* info=info);
sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 1;
sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 99;
sNode*% expression_node(sInfo* info=info) version 1;
sNode*% expression_node(sInfo* info=info) version 99;
sNode*% expression_node(sInfo* info=info) version 98;
sNode*% expression_node(sInfo* info=info) version 97;

int transpile(sInfo* info);
void parse_sharp(sInfo* info=info) version 5;
string create_method_name(sType* obj_type, bool no_pointer_name, char* fun_name, sInfo* info, bool array_equal_pointer=true);
string create_method_name_original_obj_type(sType* obj_type, bool no_pointer_name, char* fun_name, sInfo* info, bool array_equal_pointer=true);
string create_non_method_name(sType* obj_type, bool no_pointer_name, char* fun_name, sInfo* info, bool array_equal_pointer=true);
string create_method_name_using_class(sClass* obj_class, bool no_pointer_name, char* fun_name, sInfo* info, bool array_equal_pointer=true);

/////////////////////////////////////////////////////////////////////
/// 06str.c ///
/////////////////////////////////////////////////////////////////////
sNode*% create_null_value(sType*% type, sInfo* info=info);
sNode*% create_null_return_value(sInfo* info=info);
sNode*% create_some(sNode*% exp, sInfo* info);
sNode*% expression_node(sInfo* info=info) version 96;
sNode*% parse_tuple(sInfo* info, bool named_tuple=false);
sNode*% parse_some(sInfo* info);
sNode*% parse_none(sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 07var.c
/////////////////////////////////////////////////////////////////////
bool is_inner_calling(sNode* node, sInfo* info);
sNode*% post_position_operator(sNode*% node, sInfo* info) version 07;
sNode*% expression_node(sInfo* info=info) version 95;
sNode*% store_var(string name, list<string>*% multiple_assign, list<tup: sType*%, string, sNode*%>*% multiple_declare, sType*% type, bool alloc, sNode*% right_value, sInfo* info, bool comma=false);
sNode*% create_load_var(char* var_name, sInfo* info=info);
sNode*% parse_array_initializer(sInfo* info=info);
sNode*% parse_struct_initializer(sInfo* info=info);
sNode*% parse_global_variable(sInfo* info);
sNode*% load_var(string name, sInfo* info);
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 7;
void add_variable_to_table(char* name, sType*% type, sInfo* info, bool function_param, bool comma=false);
void add_variable_to_global_table(char* name, sType*% type, sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, sType*% type, char* c_value, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 08if.c
/////////////////////////////////////////////////////////////////////
sNode*% parse_rescue_method_call(sNode*% expression_node, sInfo* info);
sNode*% parse_expect_method_call(sNode*% expression_node, sInfo* info);
sNode*% parse_match(sNode*% expression_node, sInfo* info);

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 8;
sNode*% parse_if_method_call(sNode*% expression_node, sInfo* info);
sNode*% parse_less_method_call(sNode*% expression_node, sInfo* info);
sNode*% parse_elif_method_call(sNode*% expression_node, sInfo* info);
sNode*% parse_or_statment(sNode*% expression_node, sInfo* info);
sNode*% parse_and_statment(sNode*% expression_node, sInfo* info);
sNode*% parse_rescue_method_call(sNode*% expression_node, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 09while.c
/////////////////////////////////////////////////////////////////////
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 9;

/////////////////////////////////////////////////////////////////////
/// 10do_while.c
/////////////////////////////////////////////////////////////////////
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 10;

/////////////////////////////////////////////////////////////////////
/// 11for.c
/////////////////////////////////////////////////////////////////////
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 11;

/////////////////////////////////////////////////////////////////////
/// 12switch.c
/////////////////////////////////////////////////////////////////////
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 12;

/////////////////////////////////////////////////////////////////////
/// 13op.c
/////////////////////////////////////////////////////////////////////
sNode*% create_less(sNode*% node, sNode*% right, sInfo* info);
sNode*% create_null_node(sInfo* info=info);
sNode*% conditional_node(sNode*% value1, sNode*% value2, sNode*% value3, sInfo* info);
bool operator_overload_fun(sType* type, char* fun_name, sNode*% left_node, sNode*% right_node, CVALUE*% left_value, CVALUE*% right_value, bool break_guard, sInfo* info);
sNode*% expression(sInfo* info=info) version 13;
sNode*% post_op(sNode*% node, sInfo* info) version 13;
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 13;

/////////////////////////////////////////////////////////////////////
/// 14struct.c
/////////////////////////////////////////////////////////////////////
string parse_struct_attribute(sInfo* info=info);
sNode*% create_nothing_node(sInfo* info=info);
bool is_contained_method_generics_types(sType* type, sInfo* info);
bool is_contained_generics_types(sType* type, sInfo* info);
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 14;
sNode*% parse_struct(string type_name, string struct_attribute, sInfo* info);
string get_none_generics_name(char* class_name);
sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 98;
bool output_generics_struct(sType* type, sType* generics_type, sInfo* info);
void output_struct(sClass* klass, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 15union.c
/////////////////////////////////////////////////////////////////////
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 15;
sNode*% parse_union(string type_name, sInfo* info);
sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 97;

/////////////////////////////////////////////////////////////////////
/// 16enum.c
/////////////////////////////////////////////////////////////////////
sNode*% parse_enum(string type_name, sInfo* info);
sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 96;

/////////////////////////////////////////////////////////////////////
/// 17typedef.c
/////////////////////////////////////////////////////////////////////
sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 95;
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 17;

/////////////////////////////////////////////////////////////////////
/// 18field.c
/////////////////////////////////////////////////////////////////////
sNode*% create_nullable_node(sNode* left, sInfo* info=info);
sNode*% load_field(sNode*% left, string name, sInfo* info=info);
sNode*% store_field(sNode* left, sNode*% right, string name, sInfo* info);

sNode*% post_position_operator(sNode*% node, sInfo* info) version 99;
sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 18;

/////////////////////////////////////////////////////////////////////
/// 19eq.c
/////////////////////////////////////////////////////////////////////
sNode*% post_position_operator(sNode*% node, sInfo* info) version 19;

/////////////////////////////////////////////////////////////////////
/// 20method.c
/////////////////////////////////////////////////////////////////////
sNode*% create_method_call(char* fun_name,sNode*% obj, list<tup: string,sNode*%>*% params, buffer* method_block, int method_block_sline, list<sType*%>* method_generics_types, bool guard_break, sInfo* info);
sNode*% create_guard_break_method_call(sNode*% expression_node, sInfo* info);
bool compile_method_block(buffer* method_block, list<CVALUE*%>*% come_params, sFun* fun, char* fun_name, int method_block_sline, sInfo* info, bool no_create_current_stack=false) ;
string,sGenericsFun* make_generics_function(sType* type, string fun_name, sInfo* info, bool array_equal_pointer=true);
 sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 20;
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 20;

/////////////////////////////////////////////////////////////////////
/// 21obj.c
/////////////////////////////////////////////////////////////////////
sNode*% create_implements(sNode*% node, sType*% inf_type, sInfo* info=info);
sNode*% create_object(sType*% type, sInfo* info);
sNode*% create_true_object(sInfo* info);
sNode*% create_false_object(sInfo* info);

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 21;
sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 94;
sNode*% post_position_operator(sNode*% node, sInfo* info) version 21;
string, string, string, string create_vtable(sType*% any_type, sInfo* info=info);

/////////////////////////////////////////////////////////////////////
/// 22impl.c
/////////////////////////////////////////////////////////////////////
sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 93;

/////////////////////////////////////////////////////////////////////
/// 23interface.c
/////////////////////////////////////////////////////////////////////
sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 92;

/////////////////////////////////////////////////////////////////////
/// 24module.c
/////////////////////////////////////////////////////////////////////
sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 91;
sNode*% static_assert_node(sNode*% exp, sNode*% exp2, sInfo* info=info);

#endif
