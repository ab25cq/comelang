#include "common.h"

static sNode* create_true(sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kTrue;
    
    result.fname = info->fname;
    result.sline = info->sline;
    
    return result;
}

static sNode* create_false(sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kFalse;
    
    result.fname = info->fname;
    result.sline = info->sline;
    
    return result;
}

static sNode* create_none(sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kNone;
    
    result.fname = info->fname;
    result.sline = info->sline;
    
    return result;
}

static bool word_cmp(char* p, char* word2)
{
    bool result = strstr(p, word2) == p;
    
    char c = p[strlen(word2)];
    
    if(result && (c == '\n' || c == ' ' || c == '\t' || c == '\0' || c == ':')) {
        return true;
    }
    
    return false;
}

sNode*? exp_node(sParserInfo* info) version 7
{
    sNode*? result = null;
    
    if(word_cmp(info->p, "True")) {
        info->p += strlen("True");
        skip_spaces_until_eol(info);
        
        result = nullable create_true(info);
    }
    else if(word_cmp(info->p, "False")) {
        info->p += strlen("False");
        skip_spaces_until_eol(info);
        
        result = nullable create_false(info);
    }
    else if(word_cmp(info->p, "None")) {
        info->p += strlen("None");
        skip_spaces_until_eol(info);
        
        result = nullable create_none(info);
    }
    
    if(result == null) {
        result = inherit(info);
    }
    
    return result;
}

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 7
{
    inherit(node, codes, info);
    
    if(node.kind == kTrue) {
        codes.append_int(OP_BOOL_VALUE);
        
        codes.append_int(1);
        
        info->stack_num++;
    }
    else if(node.kind == kFalse) {
        codes.append_int(OP_BOOL_VALUE);
        
        codes.append_int(0);
        
        info->stack_num++;
    }
    else if(node.kind == kNone) {
        codes.append_int(OP_NONE_VALUE);
        
        info->stack_num++;
    }
    
    return true;
}

