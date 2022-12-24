#include <neo-c.h>
#include "common.h"

public {
typedef vector<sNode*%>*% sNodeBlock;
}

private struct sIfNode
{
    int id;
    sNode*% if_exp;
    sNodeBlock if_block;
    vector<sNode*%>*% elif_exps;
    vector<sNodeBlock>*% elif_blocks;
    sNodeBlock? else_block;
};

private sIfNode*% sIfNode*::initialize(sIfNode*% self, sNode*% if_exp, sNodeBlock if_block, vector<sNode*%>*% elif_exps
                                , vector<sNodeBlock>*% elif_blocks, sNodeBlock? else_block)
{
    self.id = gNodeID++;
    self.if_exp = if_exp;
    self.if_block = if_block;
    self.elif_exps = elif_exps;
    self.elif_blocks = elif_blocks
    self.else_block = else_block;
    
    return self;
}

private unsigned int sIfNode*::id(sIfNode* self)
{
    return self.id;
}

private struct sTrueNode
{
    int id;
    bool dummy;
};

private sTrueNode*% sTrueNode*::initialize(sTrueNode*% self)
{
    self.id = gNodeID++;
    return self;
}

private unsigned int sTrueNode*::id(sTrueNode* self)
{
    return self.id;
}

private bool sTrueNode*::compile(sTrueNode* self, sInfo* info)
{
    info.codes.append_int(OP_TRUE_VALUE);
    
    info.stack_num++;
    
    return true;
}

private struct sFalseNode
{
    int id;
    bool dummy;
};

private sFalseNode*% sFalseNode*::initialize(sFalseNode*% self)
{
    self.id = gNodeID++;
    return self;
}

private unsigned int sFalseNode*::id(sTrueNode* self)
{
    return self.id;
}

private bool sFalseNode*::compile(sFalseNode* self, sInfo* info)
{
    info.codes.append_int(OP_FALSE_VALUE);
    
    info.stack_num++;
    
    return true;
}

bool compile_block(sNodeBlock& block, sInfo* info)
{
    vector<sNode*%>* v = block;
    foreach(it, v) {
        if(!it.compile->(info)) {
            return false;
        }
        
        arrange_stack(info);
    }
    
    return true;
}

private bool sIfNode*::compile(sIfNode* self, sInfo* info)
{
    sNode* if_exp = self.if_exp;
    sNodeBlock& if_block = self.if_block;
    vector<sNode*%>* elif_exps = self.elif_exps;
    vector<sNodeBlock>* elif_blocks = self.elif_blocks;
    sNodeBlock?& else_block = self.else_block;
    
    vector<int>*% end_points = new vector<int>();
    
    if(!if_exp.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IF);
    int false_jump_point = info.codes.len;
    info.codes.append_int(0);
    
    info->stack_num--;
    
    if(!compile_block(if_block, info)) {
        return false;
    }
    
    info.codes.append_int(OP_GOTO);
    
    int end_point = info.codes.len;
    end_points.push_back(end_point);
    info.codes.append_int(0);
    
    int* p = (int*)(info.codes.buf + false_jump_point);
    *p = info.codes.len;
    
    for(int i= 0; i<elif_exps.length(); i++) {
        sNode* elif_exp = elif_exps[i];
        sNodeBlock& elif_block = elif_blocks[i];
        
        if(!elif_exp.compile->(info)) {
            return false;
        }
        
        info.codes.append_int(OP_IF);
        int false_jump_point = info.codes.len;
        info.codes.append_int(0);
        
        info->stack_num--;
        
        if(!compile_block(elif_block, info)) {
            return false;
        }
        
        info.codes.append_int(OP_GOTO);
        
        int end_point = info.codes.len;
        end_points.push_back(end_point);
        info.codes.append_int(0);
        
        int* p = (int*)(info.codes.buf + false_jump_point);
        *p = info.codes.len;
    }
    
    if(else_block) {
        if(!compile_block(else_block!, info)) {
            return false;
        }
    }
    
    for(int i=0; i<end_points.length(); i++) {
        int end_point = end_points[i];
        
        int* p = (int*)(info.codes.buf + end_point);
        
        *p = info.codes.length();
    }
    
    return true;
}

bool vm(sInfo* info) version 4
{
    inherit(info);
    
    switch(*info->op) {
        case OP_GOTO: {
            info->op++;
            
            int value = *info->op;
            info->op++;
            
            info->op = (int*)((char*)info->head + value);
            }
            break;
            
        case OP_IF: {
            info->op++;
            
            int value = *info->op;
            info->op++;
            
            ZVALUE*? conditional = nullable info.stack[-1];
            
            if(conditional!.kind == kBoolValue) {
                bool exp = conditional!.boolValue;
                
                if(!exp) {
                    info.op = (int*)((char*)info->head + value);
                }
                
                info.stack.delete_back();
            }
            else {
                fprintf(stderr, "invalid conditional type\n");
                exit(2);
            }
            }
            break;
            
        case OP_TRUE_VALUE: {
            info->op++;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:true));
            }
            break;
            
        case OP_FALSE_VALUE: {
            info->op++;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:false));
            }
            break;
    }
    
    return true;
}

sNodeBlock? parse_block(sInfo* info)
{
    vector<sNode*%>*% result = new vector<sNode*%>();
    
    if(*info->p != '{') {
        fprintf(stderr, "reuire {\n");
        exit(1);
    }
    
    info->p++;
    skip_spaces(info);
    
    while(true) {
        sNode*? node = expression(info);
        
        if(node == null) {
            fprintf(stderr, "require if block expression\n");
            exit(1);
        }
        
        result.push_back(clone node!);
        
        delete node!;
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces(info);
        }
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces(info);
            break;
        }
    }
    
    return nullable result;
}

bool is_word(char* str, sInfo* info)
{
    return strlen(info->p) >= strlen(str) && memcmp(info->p, str, strlen(str)) == 0 && (strlen(info->p) == strlen(str) || !xisalnum(*(info->p + strlen(str))));
}

sNode*? exp_node(sInfo* info) version 4
{
    if(is_word("true", info)) {
        info->p += strlen("true");
        skip_spaces(info);
        
        return borrow new sNode(new sTrueNode());
    }
    else if(is_word("false", info)) {
        info->p += strlen("false");
        skip_spaces(info);
        
        return borrow new sNode(new sFalseNode());
    }
    else if(is_word("if", info)) {
        info->p += strlen("if");
        skip_spaces(info);
        
        sNode*? node = expression(info);
        
        if(node == null) {
            fprintf(stderr, "require if conditional expression\n");
            exit(2);
        }
        
        sNode*% if_exp = dummy_heap node!;
        
        sNodeBlock? if_block = parse_block(info);
        
        vector<sNode*%>*% elif_exps = new vector<sNode*%>();
        vector<sNodeBlock>*% elif_blocks = new vector<sNodeBlock>();
        
        if(memcmp(info->p, "elif", 4) == 0 && !xisalnum(*(info->p+4))) {
            info->p += strlen("elif");
            skip_spaces(info);
            
            sNode*? node = expression(info);
            
            if(node == null) {
                fprintf(stderr, "reuire elif conditional expression\n");
                exit(2);
            }
            
            elif_exps.push_back(dummy_heap node!);
            
            sNodeBlock? elif_block = parse_block(info);
            
            elif_blocks.push_back(elif_block!);
        }
        
        sNodeBlock? else_block = null;
        
        if(memcmp(info->p, "else", 4) == 0 && !xisalnum(*(info->p+4))) {
            info->p += strlen("else");
            skip_spaces(info);
            
            else_block = parse_block(info);
        }
        
        return borrow new sNode(new sIfNode(if_exp, if_block!, elif_exps, elif_blocks, else_block));
    }
    else {
        return inherit(info);
    }
    
    return null;
}
