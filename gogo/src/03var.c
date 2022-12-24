#include <neo-c.h>
#include "common.h"

struct sVar {
    string name;
    sType*? type;
    int index;

    LLVMValueRef llvm_value;
};

sVar* sVar*::initialize(sVar* self, string name, sType*? type, int index)
{
    self.name = string(name);
    self.type = type;
    self.index = index;
    
    self.llvm_value = null;
    
    return self;
}

struct sVarTable {
    map<string, sVar*>* vtable;
    int var_num;

    int block_level;
    
    struct sVarTable*? parent;
};


sVarTable* sVarTable*::initialize(sVarTable* self, sVarTable*? parent)
{
    self.vtable = new map<string, sVar*>();
    self.var_num = 0;
    self.block_level = 0;
    self.parent = parent;
    
    return self;
}

void sVarTable*::add_variable(sVarTable* self, char* name, sType*? type_)
{
    sVar* var_ = new sVar(name, type_, self.var_num);
    self.vtable.insert(name, var_);
    self.var_num++;
}

sVar*? sVarTable*::get_variable_from_index(sVarTable* self, int index)
{
    foreach(it, self.vtable) {
        sVar* it2 = self.vtable[it];
        
        if(it2.index == index) {
            return it2;
        }
    }
    
    return null;
}

sVar*? sVarTable*::get_variable_from_this_table_only(sVarTable* self, char* name)
{
    return self.vtable[name];
}

// result: (null) not found (sVar*) found
sVar*? get_variable_from_table(sVarTable* table, char* name)
{
    sVarTable*? it = table;

    while(it) {
        sVar*? var_ = it!.get_variable_from_this_table_only(name);

        if(var_) {
            return var_;
        }

        it = it!->parent;
    }

    return null;
}

sVarTable* init_block_vtable(sVarTable*? lv_table)
{
    sVarTable* new_table = new sVarTable(lv_table);

    if(lv_table) {
        new_table->block_level = lv_table!->block_level + 1;
        new_table->parent = lv_table!;
    }
    else {
        new_table->block_level = 0;
        new_table->parent = null;
    }

    return new_table;
}

private struct sStoreNode
{
    int id;
    string name;
    sType*? type;
    sNode*? right_node;
    bool alloc;
    
    int sline;
    char* sname;
};

private sStoreNode* sStoreNode*::initialize(sStoreNode* self, string name, sType*? type, sNode*? right_node, bool alloc, sInfo* info)
{
    self.id = gNodeID++;
    self.name = name;
    self.type = type;
    self.right_node = right_node;
    self.alloc = alloc;
    
    if(alloc) {
        info.lv_table.add_variable(self.name, type);
    }
    
    self.sname = info.sname;
    self.sline = info.sline;
    
    return self;
}

private unsigned int sStoreNode*::id(sStoreNode* self)
{
    return self.id;
}

private bool sStoreNode*::compile(sStoreNode* self, sInfo* info)
{
    int sline = self.sline;
    char* sname = self.sname; 
    
    string var_name = self.name;
    
    bool alloc = self.alloc;
    
    sVar*? var_ = get_variable_from_table(info.lv_table, var_name);
    
    if(var_ == null) {
        fprintf(stderr, "%s %d: undeclared variable %s(2)\n", sname, sline, var_name);
        return true;
    }
    
    sVar* var2 = nonullable var_;
    
    sType* left_type = null;
    sType* right_type = null;
    LVALUE rvalue;
    
    if(self.right_node) {
        if(!self.right_node!.compile->(info)) {
            return false;
        }
    
        right_type = clone info->type;
        
        /// type inference ///
        if(var2->type == null) {
            var2->type = clone right_type;
            left_type = clone right_type;
        }
        else {
            left_type = var2->type!;
        }
        
        rvalue = *get_value_from_stack(info, -1);
        
        if(auto_cast_posibility(left_type, right_type)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                fprintf(stderr, "%s %d: Cast failed\n", sname, sline);
                return true;
            }
        }
        
        if(!substitution_posibility(left_type, right_type, rvalue.value, info)) {
            fprintf(stderr, "%s %d: Type error\n", sname, sline);
            return true;
        }
    }
    else {
        memset(&rvalue, 0, sizeof(LVALUE));
        
        if(var2->type == null) {
            fprintf(stderr, "%s %d: Require type\n", sname, sline);
            return true;
        }
        
        left_type = var2->type!;
    }

    bool constant = var2->type!->constant_;
    
    if(alloc) {
        if(right_type == null) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            LLVMBasicBlockRef this_block = LLVMGetInsertBlock(gBuilder);
            LLVMBasicBlockRef entry_block = LLVMGetEntryBasicBlock(gFunction);
            LLVMValueRef inst = LLVMGetFirstInstruction(entry_block);
            if(inst != null) {
                LLVMPositionBuilderBefore(gBuilder, inst);
            }

            LLVMValueRef alloca_value = LLVMBuildAlloca(gBuilder, llvm_type, var_name);

            llvm_change_block(this_block, info);

            var2->llvm_value = alloca_value;
            
            info->type = left_type;
        }
        else if(constant) {
            var2->llvm_value = rvalue.value;

            info->type = left_type;
        }
        else {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            LLVMBasicBlockRef this_block = LLVMGetInsertBlock(gBuilder);
            LLVMBasicBlockRef entry_block = LLVMGetEntryBasicBlock(gFunction);
            LLVMValueRef inst = LLVMGetFirstInstruction(entry_block);
            if(inst != null) {
                LLVMPositionBuilderBefore(gBuilder, inst);
            }

            LLVMValueRef alloca_value = LLVMBuildAlloca(gBuilder, llvm_type, var_name);

            llvm_change_block(this_block, info);

            LLVMBuildStore(gBuilder, rvalue.value, alloca_value);

            var2->llvm_value = alloca_value;
            
            info->type = left_type;
        }
    }
    else if(constant) {
        var2->llvm_value = rvalue.value;

        info->type = left_type;
    }
    else {
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef alloca_value = var2->llvm_value;

        LLVMBuildStore(gBuilder, rvalue.value, alloca_value);

        info->type = left_type;
    }
    
    info->last_expression_is_return = false;

    return true;
}

private struct sLoadNode
{
    int id;
    string name;
    
    int sline;
    char* sname;
};

private sLoadNode* sLoadNode*::initialize(sLoadNode* self, string name, sInfo* info)
{
    self.id = gNodeID++;
    self.name = name;
    
    self.sline = info.sline;
    self.sname = info.sname;
    
    return self;
}

private unsigned int sLoadNode*::id(sLoadNode* self)
{
    return self.id;
}

private bool sLoadNode*::compile(sLoadNode* self, sInfo* info)
{
    char* sname = self.sname;
    int sline = self.sline;
    
    string name = self.name;

    string var_name = self.name;

    sVar*? var_ = get_variable_from_table(info->lv_table, var_name);
    
    if(var_ == null || var_!->type! == null) {
        fprintf(stderr, "%s %d: var(%s) not found\n", var_name);
        return true;
    }
    
    sVar* var2 = nonullable var_;

    bool global = var2->type!->global_;
    bool constant = var2->type!->constant_;

    sType* var_type = clone var2->type!;

    LLVMValueRef var_address = var2->llvm_value;

    if(var_address == null) {
        fprintf(stderr, "%s %d: no variable address(%s)\n", sname, sline, var_name);
        return false;
    }

    LVALUE llvm_value;

    if(constant) {
        llvm_value.value = var_address;

        llvm_value.type = var_type;
        llvm_value.address = var_address;
        llvm_value.var = null;

        push_value_to_stack_ptr(&llvm_value, info);

        info->type = clone var_type;
    }
    else {
        llvm_value.value = LLVMBuildLoad(gBuilder, var_address, var_name);
        llvm_value.type = var_type;
        llvm_value.address = var_address;
        llvm_value.var = var2;

        push_value_to_stack_ptr(&llvm_value, info);

        info->type = clone var_type;
    }
    
    info->last_expression_is_return = false;

    return true;
}

sNode*? word_expression(string word, sInfo* info) version 3
{
    if(word === "var") {
        string name = parse_word(info);
        
        sType*? type;
        if(*info->p == '=' && *(info->p+1) != '=') {
            type = null;
        }
        else {
            bool err;
            type, err = parse_type(info);
            
            if(!err) {
                fprintf(stderr, "%s %d: parse type error\n", info->sname, info->sline);
                return null;
            }
        }
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++
            skip_spaces(info);
            
            sNode*? right_node = expression(info);
            
            if(right_node == null) {
                fprintf(stderr, "%s %d: require right value\n", info->sname, info->sline);
                return null;
            }
            
            return new sNode(new sStoreNode(name, type, right_node, alloc:true, info))
        }
        else {
            return new sNode(new sStoreNode(name, type, null, alloc:true, info))
        }
    }
    else if(get_variable_from_table(info.lv_table, word)) {
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++
            skip_spaces(info);
            
            sNode*? right_node = expression(info);
            
            if(right_node == null) {
                fprintf(stderr, "%s %d: require right value\n", info->sname, info->sline);
                return null;
            }
            
            return new sNode(new sStoreNode(word, null, right_node, alloc:false, info));
        }
        else {
            return new sNode(new sLoadNode(word, info));
        }
    }
    
    return inherit(word, info);
}

