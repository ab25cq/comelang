#include "common.h"

static sNode* create_if(sNode* if_exp, gc_list<sNode*>* if_nodes, gc_vector<sNode*>* elif_exps, gc_vector<gc_list<sNode*>*>* elif_blocks, gc_list<sNode*>*? else_nodes, sParserInfo* info)
{
    sNode* result = new (GC) sNode;
    
    result.kind = kIf;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.ifValue.if_exp = if_exp;
    result.value.ifValue.if_nodes = if_nodes;
    result.value.ifValue.elif_exps = elif_exps;
    result.value.ifValue.elif_blocks = elif_blocks;
    if(result.value.ifValue.else_nodes == null) {
        result.value.ifValue.else_nodes = null;
    }
    else {
        result.value.ifValue.else_nodes = nonullable else_nodes;
    }
    
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

sNode*? exp_node(sParserInfo* info) version 8
{
    sNode*? result = null;
    
    if(word_cmp(info->p, "if")) {
        info->p += strlen("if");
        skip_spaces_until_eol(info);
        
        sNode* node = NULL;
        if(!expression(&node, info)) {
            fprintf(stderr, "%s %d: invalid if exp\n", info->fname, info->sline);
            return null;
        }
        
        sNode* if_exp = node;
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_until_eol(info);
        }
        else {
            fprintf(stderr, "%s %d: require : for block\n", info->fname, info->sline);
            return null;
        }
        
        gc_list<sNode*>* if_nodes = parse_block(info);
        
        gc_vector<sNode*>* elif_exps = new (GC) gc_vector<sNode*>.initialize();
        gc_vector<gc_list<sNode*>*>* elif_blocks = new (GC) gc_vector<gc_list<sNode*>*>.initialize();
        
        while(word_cmp(info->p, "elif")) {
            info->p += strlen("elif");
            skip_spaces_until_eol(info);
            
            sNode* node = null;
            if(!expression(&node, info)) {
                fprintf(stderr, "%s %d: invalid if exp\n", info->fname, info->sline);
                return null;
            }
            
            elif_exps.push_back(node);
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            else {
                fprintf(stderr, "%s %d: require : for block\n", info->fname, info->sline);
                return null;
            }
            
            gc_list<sNode*>* elif_block = parse_block(info);
            
            elif_blocks.push_back(elif_block);
        }
        
        gc_list<sNode*>*? else_nodes = null;
        
        if(word_cmp(info->p, "else")) {
            info->p += strlen("else");
            skip_spaces_until_eol(info);
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            else {
                fprintf(stderr, "%s %d: require : for block\n", info->fname, info->sline);
                return null;
            }
            
            else_nodes = nullable parse_block(info);
        }
        
        result = nullable create_if(if_exp, if_nodes, elif_exps, elif_blocks, else_nodes, info);
    }
    
    if(result == null) {
        result = inherit(info);
    }
    
    return result;
}


bool compile(sNode* node, gc_buffer* codes, sParserInfo* info) version 8
{
    inherit(node, codes, info);
    
    if(node.kind == kIf) {
        sNode* if_exp = node.value.ifValue.if_exp;
        gc_list<sNode*>* if_nodes = node.value.ifValue.if_nodes;
        gc_vector<sNode*>* elif_exps = node.value.ifValue.elif_exps;
        gc_vector<gc_list<sNode*>*>* elif_blocks = node.value.ifValue.elif_blocks;
        gc_list<sNode*>* else_nodes = node.value.ifValue.else_nodes;
        
        gc_vector<int>* end_points = new (GC) gc_vector<int>.initialize();
        
        if(!compile(if_exp, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_IF);
        int false_jump_point = codes.len;
        codes.append_int(0);
        
        info->stack_num--;
        
        compile_block(codes, if_nodes, info);
        
        codes.append_int(OP_GOTO);
        
        int end_point = codes.len;
        end_points.push_back(end_point);
        codes.append_int(0);
        
        int* p = (int*)(codes.buf + false_jump_point);
        *p = codes.len;
        
        for(int i= 0; i<elif_exps.length(); i++) {
            sNode* elif_exp = elif_exps.item(i, null);
            gc_list<sNode*>* elif_nodes = elif_blocks.item(i, null);
            
            if(!compile(elif_exp, codes, info)) {
                return false;
            }
            
            codes.append_int(OP_IF);
            int false_jump_point = codes.len;
            codes.append_int(0);
            
            info->stack_num--;
            
            compile_block(codes, elif_nodes, info);
            
            codes.append_int(OP_GOTO);
            
            int end_point = codes.len;
            end_points.push_back(end_point);
            codes.append_int(0);
            
            int* p = (int*)(codes.buf + false_jump_point);
            *p = codes.len;
        }
        
        if(else_nodes) {
            compile_block(codes, else_nodes, info);
        }
        
        for(int i=0; i<end_points.length(); i++) {
            int end_point = end_points.item(i, -1);
            
            int* p = (int*)(codes.buf + end_point);
            
            *p = codes.length();
        }
    }
    
    return true;
}

