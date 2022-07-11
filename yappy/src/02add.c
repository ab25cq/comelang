#include "common.h"
#include <ctype.h>

static sNode*? create_add_node(sNode*? left, sNode*? right, sParserInfo* info)
{
    sNode*? result = nullable new (GC) sNode;
    
    result!.kind = kOpAdd;
    
    result!.fname = info->fname;
    result!.sline = info->sline;
    result!.value.opValue.left = left!;
    result!.value.opValue.right = right!;
    
    return result;
}

static sNode*? create_sub_node(sNode*? left, sNode*? right, sParserInfo* info)
{
    sNode*? result = nullable new (GC) sNode;
    
    result!.kind = kOpSub;
    
    result!.fname = gc_string(info->fname);
    result!.sline = info->sline;
    result!.value.opValue.left = left!;
    result!.value.opValue.right = right!;
    
    return result;
}

sNode*? op_add_node(sParserInfo* info)
{
    sNode*? result = exp_node(info);
    
    while(*info->p == '+' || *info->p == '-') {
        if(*info->p == '+') {
            info->p++;
            skip_spaces_until_eol(info);
            
            sNode*? right = op_add_node(info);
            
            if(right == null) {
                return null;
            }
            
            result = create_add_node(result, right, info);
        }
        else if(*info->p == '-') {
            info->p++;
            skip_spaces_until_eol(info);
            
            sNode*? right = op_add_node(info);
            
            if(right == null) {
                return null;
            }
            
            result = create_sub_node(result, right, info);
        }
    }
    
    return result;
}

bool expression(sNode** node, sParserInfo* info) version 2
{
    *node = op_add_node(info);
    
    if(*node == null) {
        return false;
    }
    
    return true;
}

bool compile(sNode* node, gc_buffer* codes, sParserInfo* info) version 2
{
    inherit(node, codes, info);
    
    if(node.kind == kOpAdd) {
        sNode* left = node.opValue.left
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.opValue.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_ADD);
        
        info->stack_num -= 2;
        info->stack_num++;
        
    }
    else if(node.kind == kOpSub) {
        sNode* left = node.opValue.left
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.opValue.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_SUB);
        
        info->stack_num -= 2;
        info->stack_num++;
    }
    
    return true;
}

