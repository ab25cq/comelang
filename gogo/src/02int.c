#include <neo-c.h>
#include "common.h"

private struct sIntNode
{
    int id;
    char* sname;
    int sline;
    int value;
};

private sIntNode* sIntNode*::initialize(sIntNode* self, int value, sInfo* info)
{
    self.id = gNodeID++;
    self.value = value;
    
    self.sline = info.sline;
    self.sname = info.sname;
    
    return self;
}

private unsigned int sIntNode*::id(sIntNode* self)
{
    return self.id;
}

private bool sIntNode*::compile(sIntNode* self, sInfo* info)
{
    int sline = self.sline;
    char* sname = self.sname;
    
    int value = self.value;

    LVALUE llvm_value;

    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

    llvm_value.value = LLVMConstInt(llvm_type, value, true);
    llvm_value.type = create_node_type_with_class_name("int");
    llvm_value.address = null;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("int");
    
    info->last_expression_is_return = false;

    return true;
}

private struct sBoolNode
{
    int id;
    bool value;
    
    int sline;
    char* sname;
};

private sBoolNode* sBoolNode*::initialize(sBoolNode* self, bool value, sInfo* info)
{
    self.id = gNodeID++;
    self.value = value;
    
    self.sline = info.sline;
    self.sname = info.sname;
    
    return self;
}

private unsigned int sBoolNode*::id(sBoolNode* self)
{
    return self.id;
}

private bool sBoolNode*::compile(sBoolNode* self, sInfo* info)
{
    char* sname = self.sname;
    int sline = self.sline;
    
    int value = self.value;

    LVALUE llvm_value;

    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("bool");

    llvm_value.value = LLVMConstInt(llvm_type, value, true);
    llvm_value.type = create_node_type_with_class_name("int");
    llvm_value.address = null;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("bool");
    
    info->last_expression_is_return = false;

    return true;
}

sNode*? word_expression(string word, sInfo* info) version 2
{
    if(word === "true") {
        return new sNode(new sBoolNode(true, info))
    }
    else if(word === "false") {
        return new sNode(new sBoolNode(false, info))
    }
    
    return inherit(word, info);
}

sNode*? expression(sInfo* info) version 3
{
    if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10  + (*info->p - '0');
            info->p++;
        }
        skip_spaces(info);
        
        return new sNode(new sIntNode(n, info));
    }
    
    return inherit(info);
}
