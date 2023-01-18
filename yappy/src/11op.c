#include "common.h"
#include <ctype.h>

static sNode* create_equal_node(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kOpEq;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = left;
    result.value.opValue.right = right;
    
    return result;
}

static sNode* create_not_equal_node(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kOpNotEq;
    
    result.fname = string(info->fname);
    result.sline = info->sline;
    result.value.opValue.left = left;
    result.value.opValue.right = right;
    
    return result;
}

static sNode* create_is_node(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kOpIs;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = left;
    result.value.opValue.right = right;
    
    return result;
}

static sNode* create_is_not_node(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kOpIsNot;
    
    result.fname = string(info->fname);
    result.sline = info->sline;
    result.value.opValue.left = left;
    result.value.opValue.right = right;
    
    return result;
}

static sNode* create_mult_node(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kOpMult;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = left;
    result.value.opValue.right = right;
    
    return result;
}

static sNode* create_div_node(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kOpDiv;
    
    result.fname = string(info->fname);
    result.sline = info->sline;
    result.value.opValue.left = left;
    result.value.opValue.right = right;
    
    return result;
}

static sNode* create_andand_node(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kOpAndAnd;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = left;
    result.value.opValue.right = right;
    
    return result;
}

static sNode* create_oror_node(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kOpOrOr;
    
    result.fname = string(info->fname);
    result.sline = info->sline;
    result.value.opValue.left = left;
    result.value.opValue.right = right;
    
    return result;
}

static sNode*? op_mult_node(sParserInfo* info)
{
    sNode*? result = op_add_node(info);
    
    while(*info->p == '*' || *info->p == '/') {
        if(*info->p == '*') {
            info->p++;
            skip_spaces_until_eol(info);
            
            sNode*? right = op_mult_node(info);
            
            if(right == null) {
                return null;
            }
            
            result = nullable create_mult_node(result!, right!, info);
        }
        else if(*info->p == '/') {
            info->p++;
            skip_spaces_until_eol(info);
            
            sNode*? right = op_mult_node(info);
            
            if(right == null) {
                return null;
            }
            
            result = nullable create_div_node(result!, right!, info);
        }
    }
    
    return result;
}

static sNode*? op_eq_node(sParserInfo* info)
{
    sNode*? result = op_mult_node(info);
    
    while((*info->p == '=' && *(info->p+1) == '=') 
            || (*info->p == '!' && *(info->p+1) == '=')
            || (*info->p == 'i' && *(info->p+1) == 's'))
    {
        if(*info->p == '=' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_until_eol(info);
            
            sNode*? right = op_eq_node(info);
            
            if(right == null) {
                return null;
            }
            
            result = nullable create_equal_node(result!, right!, info);
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_until_eol(info);
            
            sNode*? right = op_eq_node(info);
            
            if(right == null) {
                return null;
            }
            
            result = nullable create_not_equal_node(result!, right!, info);
        }
        else if(*info->p == 'i' && *(info->p+1) == 's') {
            info->p+=2;
            skip_spaces_until_eol(info);
            
            if(memcmp(info->p, "not", 3) == 0) {
                info->p += 3;
                skip_spaces_until_eol(info);
                
                sNode*? right = op_eq_node(info);
                
                if(right == null) {
                    return null;
                }
                
                result = nullable create_is_not_node(result!, right!, info);
            }
            else {
                sNode*? right = op_eq_node(info);
                
                if(right == null) {
                    return null;
                }
                
                result = nullable create_is_node(result!, right!, info);
            }
        }
    }
    
    return result;
}

static sNode*? op_andand_node(sParserInfo* info)
{
    sNode*? result = op_eq_node(info);
    
    while((*info->p == 'a' && *(info->p+1) == 'n' && *(info->p+2) == 'd') || (*info->p == 'o' && *(info->p+1) == 'r')) {
        if(*info->p == 'a' && *(info->p+1) == 'n' && *(info->p+2) == 'd') {
            info->p+=3;
            skip_spaces_until_eol(info);
            
            sNode*? right = op_andand_node(info);
            
            if(right == null) {
                return null;
            }
            
            result = nullable create_andand_node(result!, right!, info);
        }
        else if(*info->p == 'o' && *(info->p+1) == 'r') {
            info->p+=2;
            skip_spaces_until_eol(info);
            
            sNode*? right = op_andand_node(info);
            
            if(right == null) {
                return null;
            }
            
            result = nullable create_oror_node(result!, right!, info);
        }
    }
    
    return result;
}

bool expression(sNode** node, sParserInfo* info) version 11
{
    *node = op_andand_node(info);
    
    if(*node == null) {
        return false;
    }
    
    return true;
}

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 11
{
    inherit(node, codes, info);
    
    if(node.kind == kOpEq) {
        sNode* left = node.opValue.left
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.opValue.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_EQ);
        
        info->stack_num -= 2;
        info->stack_num++;
        
    }
    else if(node.kind == kOpNotEq) {
        sNode* left = node.opValue.left
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.opValue.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_NOT_EQ);
        
        info->stack_num -= 2;
        info->stack_num++;
    }
    else if(node.kind == kOpIs) {
        sNode* left = node.opValue.left
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.opValue.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_IS);
        
        info->stack_num -= 2;
        info->stack_num++;
        
    }
    else if(node.kind == kOpIsNot) {
        sNode* left = node.opValue.left
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.opValue.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_IS_NOT);
        
        info->stack_num -= 2;
        info->stack_num++;
    }
    else if(node.kind == kOpMult) {
        sNode* left = node.opValue.left
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.opValue.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_MULT);
        
        info->stack_num -= 2;
        info->stack_num++;
        
    }
    else if(node.kind == kOpDiv) {
        sNode* left = node.opValue.left
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.opValue.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_DIV);
        
        info->stack_num -= 2;
        info->stack_num++;
    }
    else if(node.kind == kOpOrOr) {
        sNode* left = node.opValue.left
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.opValue.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_OROR);
        
        info->stack_num -= 2;
        info->stack_num++;
    }
    else if(node.kind == kOpAndAnd) {
        sNode* left = node.opValue.left
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.opValue.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_ANDAND);
        
        info->stack_num -= 2;
        info->stack_num++;
    }
    
    return true;
}

