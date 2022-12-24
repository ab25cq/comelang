#include <neo-c.h>
#include "common.h"

private struct sWhileNode
{
    int id;
    sNode*% while_exp;
    sNodeBlock while_block;
};

private sWhileNode*% sWhileNode*::initialize(sWhileNode*% self, sNode*% while_exp, sNodeBlock while_block)
{
    self.id = gNodeID++;
    self.while_exp = while_exp;
    self.while_block = while_block;
    
    return self;
}

private unsigned int sWhileNode*::id(sWhileNode* self)
{
    return self.id;
}

private bool sWhileNode*::compile(sWhileNode* self, sInfo* info)
{
    sNode* while_exp = self.while_exp;
    sNodeBlock& while_block = self.while_block;
    
    int head = info.codes.len;
    
    int head_before = info.loop_head;
    info.loop_head = head;
    
    vector<int>*? breaks_before = info.breaks;
    info.breaks = nullable new vector<int>();
    
    if(!while_exp.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IF);
    int end_point = info.codes.len;
    info.codes.append_int(0);
    
    info->stack_num--;
    
    if(!compile_block(while_block, info)) {
        return false;
    }
    
    info.codes.append_int(OP_GOTO);
    info.codes.append_int(head);
    
    int* p = (int*)(info.codes.buf + end_point);
    *p = info.codes.len;
    
    for(int i=0; i<info->breaks!.length(); i++) {
        int break_point = info->breaks![i];
        
        int* p = (int*)(info.codes.buf + break_point);
        
        *p = info.codes.length();
    }
    
    info->breaks = dummy_heap breaks_before;
    info->loop_head = head_before;
    
    return true;
}

private struct sBreakNode
{
    int id;
    bool dummy;
};

private sBreakNode*% sBreakNode*::initialize(sBreakNode*% self)
{
    self.id = gNodeID++;
    return self;
}

private unsigned int sBreakNode*::id(sBreakNode* self)
{
    return self.id;
}

private bool sBreakNode*::compile(sBreakNode* self, sInfo* info)
{
    if(info->breaks == null) {
        fprintf(stderr, "not in aloop for break\n");
        return false;
    }
    
    info.codes.append_int(OP_GOTO);
    
    int break_point = info.codes.len;
    info->breaks!.push_back(break_point);
    
    info.codes.append_int(0);
    
    return true;
}
sNode*? exp_node(sInfo* info) version 5
{
    if(is_word("while", info)) {
        info->p += strlen("while");
        skip_spaces(info);
        
        sNode*? node = expression(info);
        
        if(node == null) {
            fprintf(stderr, "require if conditional expression\n");
            exit(2);
        }
        
        sNode*% while_exp = dummy_heap node!;
        
        sNodeBlock? while_block = parse_block(info);
        
        return borrow new sNode(new sWhileNode(while_exp, while_block!));
    }
    else if(is_word("break", info)) {
        info->p += strlen("break");
        skip_spaces(info);
        
        return borrow new sNode(new sBreakNode());
    }
    else {
        return inherit(info);
    }
    
    return null;
}
