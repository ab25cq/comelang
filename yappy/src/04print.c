#include "common.h"
#include <ctype.h>

static sNode* create_print_node(sNode* exp, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kPrint;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = exp;
    
    return result;
}

static sNode* create_len_node(sNode* exp, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kLen;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = exp;
    
    return result;
}

static sNode* create_str_to_int_node(sNode* exp, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kInt;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = exp;
    
    return result;
}

static sNode* create_str_node(sNode* exp, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kStr;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = exp;
    
    return result;
}

static sNode* create_type_node(sNode* exp, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kType;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = exp;
    
    return result;
}

static sNode* create_exit_node(sNode* exp, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kExit;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = exp;
    
    return result;
}

static sNode* create_return_node(sNode* exp, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kReturn;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.opValue.left = exp;
    
    return result;
}


static bool emb_funcmp(char* p, char* word2)
{
    bool result = strstr(p, word2) == p;
    
    char c = p[strlen(word2)];
    
    if(result && (c == ' ' || c == '\t' || c == '\0' || c == '(' || c == '\n')) {
        return true;
    }
    
    return false;
}

sNode*? exp_node(sParserInfo* info) version 4
{
    sNode*? result = inherit(info);
    
    if(result == null) {
        if(emb_funcmp(info->p, "print")) {
            info->p += strlen("print");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = nullable create_print_node(node, info);
        }
        else if(emb_funcmp(info->p, "len")) {
            info->p += strlen("len");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = nullable create_len_node(node, info);
        }
        else if(emb_funcmp(info->p, "int")) {
            info->p += strlen("int");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = nullable create_str_to_int_node(node, info);
        }
        else if(emb_funcmp(info->p, "str")) {
            info->p += strlen("str");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = nullable create_str_node(node, info);
        }
        else if(emb_funcmp(info->p, "type")) {
            info->p += strlen("type");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = nullable create_type_node(node, info);
        }
        else if(emb_funcmp(info->p, "exit")) {
            info->p += strlen("exit");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = nullable create_exit_node(node, info);
        }
        else if(emb_funcmp(info->p, "return")) {
            info->p += strlen("return");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = nullable create_return_node(node, info);
        }
    }
    
    return result;
}

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 4
{
    inherit(node, codes, info);
    
    if(node.kind == kPrint) {
        sNode* exp = node.opValue.left;
        
        if(!compile(exp, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_PRINT);
    }
    else if(node.kind == kLen) {
        sNode* exp = node.opValue.left;
        
        if(!compile(exp, codes, info)) {
            return false;
        }
        
        info.stack_num--;
        
        codes.append_int(OP_LEN);
        
        info.stack_num++;
    }
    else if(node.kind == kInt) {
        sNode* exp = node.opValue.left;
        
        if(!compile(exp, codes, info)) {
            return false;
        }
        
        info.stack_num--;
        
        codes.append_int(OP_INT);
        info.stack_num++;
    }
    else if(node.kind == kStr) {
        sNode* exp = node.opValue.left;
        
        if(!compile(exp, codes, info)) {
            return false;
        }
        
        info.stack_num--;
        
        codes.append_int(OP_STR);
        info.stack_num++;
    }
    else if(node.kind == kType) {
        sNode* exp = node.opValue.left;
        
        if(!compile(exp, codes, info)) {
            return false;
        }
        
        info.stack_num--;
        
        codes.append_int(OP_TYPE);
        info.stack_num++;
    }
    else if(node.kind == kExit) {
        sNode* exp = node.opValue.left;
        
        if(!compile(exp, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_EXIT);
    }
    else if(node.kind == kReturn) {
        sNode* exp = node.opValue.left;
        
        if(!compile(exp, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_RETURN);
    }
    
    return true;
}

