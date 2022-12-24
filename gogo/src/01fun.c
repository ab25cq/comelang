#include <neo-c.h>
#include "common.h"

struct sParam
{
    string mName;
    sType* mType;
};

sParam* sParam*::initialize(sParam* self, string name, sType* type)
{
    self.mName = name;
    self.mType = type;
    
    return self;
}

struct sFunction {
    string name;
    sType* result_type;
    list<sParam*>* params;
    LLVMValueRef llvm_fun;
};

map<string,sFunction*>* gFuncs;

sFunction* sFunction*::initialize(sFunction* self, string name, sType* result_type, list<sParam*>* params, LLVMValueRef llvm_fun)
{
    self.name = string(name);
    self.result_type = result_type;
    self.params = params;
    self.llvm_fun = llvm_fun;
    
    gFuncs.insert(name, self);
    
    return self;
}

void func_init()
{
    gFuncs = new map<string,sFunction*>();
}

void func_final()
{
}

LLVMValueRef gFunction;

struct sNodeBlock
{
    list<sNode*>* nodes;
    sVarTable* lv_table;
};

sNodeBlock* sNodeBlock*::initialize(sNodeBlock* self)
{
    self.nodes = new list<sNode*>();
    return self;
}

sType*, bool parse_type(sInfo* info) 
{
    string type_name = parse_word(info);
    
    sType* result_type = create_node_type_with_class_name(type_name);
    
    if(result_type == null) {
        compile_err_msg(info, "Invaild type name(%s)\n", type_name);
        
        return (((sType*)null, false));
    }
    
    (result_type, true);
}

list<sParam*>*, bool parse_params(sInfo* info)
{
    auto params = new list<sParam*>();
    
    expect_next_character_with_one_forward("(", info);
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces(info);
            break;
        }
        
        if(*info->p == '\0') {
            compile_err_msg(info, "require function parametors\n");
            break;
        }
        
        string name = parse_word(info);
        
        auto type, err = parse_type(info);
        
        if(!err) {
            break;
        }
        
        sParam* param = new sParam(name, type);
        
        params.push_back(param);
        
        if(*info->p == ',') {
            info->p++
            skip_spaces(info);
        }
        
        if(*info->p == '\0') {
            compile_err_msg(info, "require function parametors\n");
            break;
        }
    }
    
    return ((params, true));
}

sNodeBlock*, bool parse_block(sInfo* info) 
{
    sNodeBlock* node_block = new sNodeBlock();
    
    expect_next_character_with_one_forward("{", info);
    
    sVarTable* lv_table = info.lv_table;
    node_block.lv_table = init_block_vtable(info->lv_table);
    info.lv_table = node_block.lv_table;
    
    while(true) {
        if(*info->p == '}') {
            info->p++;
            skip_spaces(info);
            break;
        }
        
        if(!parse(node_block.nodes, info)) {
            return (((sNodeBlock*)null, false));
        }
        
        while(*info->p == ';') {
            info->p++;
            skip_spaces(info);
        }
    }
    
    info.lv_table = lv_table;
    
    (node_block, true);
}

private struct sFunNode
{
    int id;
    
    string name;
    list<sParam*>* params;
    sType* result_type;
    sNodeBlock* node_block
};

private sFunNode* sFunNode*::initialize(sFunNode* self, string name, list<sParam*>* params, sType* result_type, sNodeBlock* node_block)
{
    self.id = gNodeID++;
    
    self.name = string(name);
    self.params = params;
    self.result_type = result_type;
    self.node_block = node_block;
    
    return self;
}

private unsigned int sFunNode*::id(sFunNode* self)
{
    return self.id;
}

bool compile_block(sNodeBlock* node_block, sInfo* info)
{
    list<sNode*>* nodes = node_block.nodes;
    
    sVarTable* lv_table = info.lv_table;
    info.lv_table = node_block.lv_table;
    
    foreach(it, nodes) {
        if(!it.compile->(info)) {
            return false;
        }
        
        if(info.stack_num > 0) {
            arrange_stack(info, 0);
        }
    }
    
    info.lv_table = lv_table;
    
    return true;
}

private bool sFunNode*::compile(sFunNode* self, sInfo* info)
{
    sType* result_type = self.result_type;
    char* fun_name = self.name;
    list<sParam*>* params = self.params;
    int num_params = params.length();
    sNodeBlock* node_block = self.node_block;
    bool static_ = false; //result_type->mStatic;
    bool var_arg = false;
    
    LLVMTypeRef llvm_param_types[PARAMS_MAX];
    
    sVarTable* lv_table = info.lv_table;
    info->lv_table = node_block.lv_table;
    
    int i = 0;
    foreach(it, params) {
        llvm_param_types[i] = create_llvm_type_from_node_type(it.mType);
        info.lv_table.add_variable(it.mName, nullable it.mType);
        
        i++;
    }

    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
    LLVMTypeRef llvm_fun_type;
    if(params.length() == 0) {
        llvm_fun_type = LLVMFunctionType(llvm_result_type, NULL, 0, var_arg);
    }
    else {
        llvm_fun_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
    }

    LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name);
    
    if(llvm_fun == NULL) {
        llvm_fun = LLVMAddFunction(gModule, fun_name, llvm_fun_type);
    }
    
    gFunction = llvm_fun;
    
    sFunction* fun = new sFunction(fun_name, result_type, params, llvm_fun);

    if(static_) {
        LLVMSetLinkage(llvm_fun, LLVMInternalLinkage);
    }

    LLVMBasicBlockRef entry = LLVMAppendBasicBlockInContext(gContext, llvm_fun, "entry");
    llvm_change_block(entry, info);

    bool empty_function = node_block.nodes.length() == 0;

    char* block_text = null;
    
    sVarTable* block_var_table = node_block.lv_table;

    for(i=0; i<num_params; i++) {
        LLVMValueRef param = LLVMGetParam(llvm_fun, i);

        char* name = params[i].mName;
        sType* type_ = params[i].mType;

        sVar*? var_ = get_variable_from_table(block_var_table, name);

        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(type_);

        LVALUE llvm_value;
        llvm_value.value = LLVMBuildAlloca(gBuilder, llvm_type, name);
        llvm_value.type = clone type_;
        llvm_value.address = NULL;
        
        LLVMBuildStore(gBuilder, param, llvm_value.value);

        var_!->llvm_value = llvm_value.value;
    }

    if(!compile_block(node_block, info)) {
        return false;
    }

    if(type_identify_with_class_name(result_type, "void") && result_type->pointer_num == 0) {
        LLVMBuildRet(gBuilder, NULL);
    }
    
    info->lv_table = lv_table;
    
    info->last_expression_is_return = false;
    
    return true;
}

private struct sPackageNode
{
    int id;
    string name;
};

private sPackageNode* sPackageNode*::initialize(sPackageNode* self, char* name)
{
    self.id = gNodeID++;
    self.name = string(name);
    
    return self;
}

private unsigned int sPackageNode*::id(sPackageNode* self)
{
    return self.id;
}

private bool sPackageNode*::compile(sPackageNode* self, sInfo* info)
{
    info->last_expression_is_return = false;
    return true;
}

private struct sReturnNode
{
    int id;
    sNode*? value;
};

private sReturnNode* sReturnNode*::initialize(sReturnNode* self, sNode*? value, sInfo* info)
{
    self.id = gNodeID++;
    self.value = value;

    info->last_expression_is_return = true;
    
    return self;
}

private unsigned int sReturnNode*::id(sReturnNode* self)
{
    return self.id;
}

private bool sReturnNode*::compile(sReturnNode* self, sInfo* info)
{
    if(!self.value!.compile->(info)) {
        return false;
    }
    
    LVALUE* llvm_value = get_value_from_stack(info, -1);
    
    LLVMBuildRet(gBuilder, llvm_value.value);
    
    info->last_expression_is_return = true;
    
    return true;
}

private struct sFunCall
{
    int id;
    string name;
    list<sNode*>* params;
};

private sFunCall* sFunCall*::initialize(sFunCall* self, string name, list<sNode*>* params)
{
    self.id = gNodeID++;
    self.name = string(name);
    self.params = params
    
    return self;
}

private unsigned int sFunCall*::id(sFunCall* self)
{
    return self.id;
}

private bool sFunCall*::compile(sFunCall* self, sInfo* info)
{
    int num_params = self.params.length();
    
    LLVMValueRef llvm_params[PARAMS_MAX];
    
    int i=0;
    foreach(it, self.params) {
        if(!it.compile->(info)) {
            return false;
        }
        
        llvm_params[i] = get_value_from_stack(info, -1).value;
        
        i++;
    }
    
    sFunction* fun = gFuncs[self.name];
    
    if(fun == null) {
        compile_err_msg(info, "function not found(%s)\n", self.name);
        return false;
    }
    
    LLVMValueRef llvm_fun = fun.llvm_fun; //LLVMGetNamedFunction(gModule, self.name);
    
    if(llvm_fun == null) {
        compile_err_msg(info, "function not found(%s)\n", self.name);
        return false;
    }
    
    sType* result_type = fun.result_type;
    
    if(type_identify_with_class_name(result_type, "void") && result_type->pointer_num == 0)
    {
        LLVMBuildCall(gBuilder, llvm_fun, llvm_params, num_params, "");

        info->type = clone result_type;
    }
    else {
        LVALUE llvm_value;
        llvm_value.value = LLVMBuildCall(gBuilder, llvm_fun, llvm_params, num_params, "fun_result");
        llvm_value.type = clone result_type;
        llvm_value.address = NULL;

        push_value_to_stack_ptr(&llvm_value, info);

        info->type = clone result_type;
    }
    
    return true;
}

list<sNode*>*, bool parse_fun_call_params(sInfo* info)
{
    list<sNode*>* params = new list<sNode*>();
    
    expect_next_character_with_one_forward("(", info);
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces(info);
            break;
        }
        
        if(!parse(params, info)) {
            return (((list<sNode*>*)null, false));
        }
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces(info);
        }
    }
    
    return ((params, true));
}

sNode*? word_expression(string word, sInfo* info)
{
    return null;
}

sNode*? expression(sInfo* info) version 2
{
    if(xisalpha(*info->p)) {
        string word = parse_word(info);
        
        if(word === "package") {
            string name = parse_word(info);
            
            return new sNode(new sPackageNode(name));
        }
        else if(word === "return") {
            sNode*? node = expression(info);
            
            if(node == null) {
                compile_err_msg(info, "require return value");
                return null;
            }
            
            return new sNode(new sReturnNode(node, info));
        }
        else if(word === "func") {
            string name = parse_word(info);
            
            auto params, err = parse_params(info);
            
            if(!err) {
                compile_err_msg(info, "function parametor error");
                return null;
            }
            
            sType* result_type;
            if(*info->p == '{') {
                result_type = create_node_type_with_class_name("void");
            }
            else {
                bool err;
                result_type, err = parse_type(info);
                
                if(!err) {
                    return null;
                }
            }
            
            auto node_block, err2 = parse_block(info);
            
            if(!err2) {
                compile_err_msg(info, "parse block error");
                return null;
            }
            
            return new sNode(new sFunNode(name, params, result_type!, node_block));
        }
        else if(*info->p == '(') {
            string name = string(word);
            
            auto params, err = parse_fun_call_params(info);
            
            if(!err) {
                compile_err_msg(info, "function call parametor error");
                return null;
            }
            
            return new sNode(new sFunCall(name, params));
        }
        else {
            return word_expression(word, info);
        }
    }
    
    return inherit(info);
}
