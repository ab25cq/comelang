#include "common.h"

static sNode* create_while(sNode* while_exp, list<sNode*>* while_nodes, list<sNode*>*? else_nodes, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kWhile;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.whileValue.while_exp = while_exp;
    result.value.whileValue.while_nodes = while_nodes;
    result.value.whileValue.else_nodes = else_nodes!;
    
    return result;
}

static sNode* create_for(char* var_name, list<sNode*>* nodes, sNode* list_node, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kFor;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.forValue.var_name = string(var_name);
    result.value.forValue.for_nodes = nodes;
    result.value.forValue.list_node = list_node;
    
    return result;
}

static sNode* create_continue(sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kContinue;
    
    result.fname = info->fname;
    result.sline = info->sline;
    
    return result;
}

static sNode* create_break(sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kBreak;
    
    result.fname = info->fname;
    result.sline = info->sline;
    
    return result;
}

static bool word_cmp(char* p, char* word2)
{
    int result = strstr(p, word2) == p;
    
    char c = p[strlen(word2)];
    
    if(result && (c == '\n' || c == ' ' || c == '\t' || c == '\0' || c == ':')) {
        return true;
    }
    
    return false;
}

sNode*? exp_node(sParserInfo* info) version 10
{
    sNode*? result = null;
    
    if(word_cmp(info->p, "while")) {
        info->p += strlen("while");
        skip_spaces_until_eol(info);
        
        sNode* node = NULL;
        if(!expression(&node, info)) {
            fprintf(stderr, "%s %d: invalid while exp\n", info->fname, info->sline);
            return null;
        }
        
        sNode* while_exp = node;
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_until_eol(info);
        }
        else {
            fprintf(stderr, "%s %d: require : while block\n", info->fname, info->sline);
            return null;
        }
        
        list<sNode*>* while_nodes = parse_block(info);
        
        list<sNode*>*? else_nodes = null;
        
        if(word_cmp(info->p, "else")) {
            info->p += strlen("else");
            skip_spaces_until_eol(info);
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            else {
                fprintf(stderr, "%s %d: require : while block\n", info->fname, info->sline);
                return null;
            }
            
            else_nodes = nullable parse_block(info);
        }
        
        result = nullable create_while(while_exp, while_nodes, else_nodes, info);
    }
    else if(word_cmp(info->p, "for")) {
        info->p += strlen("for");
        skip_spaces_until_eol(info);
        
        buffer* buf = new  buffer.initialize();
        
        if(xisalpha(*info->p)) {
            while(xisalnum(*info->p)) {
                buf.append_char(*info->p);
                info->p++;
            }
            skip_spaces_until_eol(info);
        }
        
        char* var_name = buf.to_string();
        
        if(memcmp(info->p, "in", strlen("in")) == 0) {
            info->p += strlen("in");
            skip_spaces_until_eol(info);
        }
        
        sNode* node = NULL;
        if(!expression(&node, info)) {
            fprintf(stderr, "%s %d: invalid for exp\n", info->fname, info->sline);
            return null;
        }
        
        sNode* list_node = node;
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_until_eol(info);
        }
        else {
            fprintf(stderr, "%s %d: require : for block\n", info->fname, info->sline);
            return null;
        }
        
        list<sNode*>* for_nodes = parse_block(info);
        
        result = nullable create_for(var_name, for_nodes, list_node, info);
    }
    else if(word_cmp(info->p, "break")) {
        info->p += strlen("break");
        skip_spaces_until_eol(info);
        
        result = nullable create_break(info);
    }
    else if(word_cmp(info->p, "continue")) {
        info->p += strlen("continue");
        skip_spaces_until_eol(info);
        
        result = nullable create_continue(info);
    }
    
    if(result == null) {
        result = inherit(info);
    }
    
    return result;
}

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 10
{
    inherit(node, codes, info);
    
    if(node.kind == kWhile) {
        sNode* while_exp = node.value.whileValue.while_exp;
        list<sNode*>* while_nodes = node.value.whileValue.while_nodes;
        list<sNode*>* else_nodes = node.value.whileValue.else_nodes;
        
        int head = codes.len;
        
        int head_before = info->loop_head;
        info->loop_head = head;
        
        vector<int>* breaks_before = info->breaks;
        info->breaks = new  vector<int>.initialize();
        
        if(!compile(while_exp, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_IF);
        int end_point = codes.len;
        codes.append_int(0);
        
        info->stack_num--;
        
        compile_block(codes, while_nodes, info);
        
        codes.append_int(OP_GOTO);
        codes.append_int(head);
        
        int* p = (int*)(codes.buf + end_point);
        *p = codes.len;
        
        if(else_nodes) {
            compile_block(codes, else_nodes, info);
        }
        
        for(int i=0; i<info->breaks.length(); i++) {
            int break_point = info->breaks.item(i, -1);
            
            int* p = (int*)(codes.buf + break_point);
            
            *p = codes.length();
        }
        
        info->breaks = breaks_before;
        info->loop_head = head_before;
    }
    else if(node.kind == kBreak) {
        if(info->breaks == null) {
            fprintf(stderr, "%s %d: require loop for break\n", info->fname, info->sline);
            return false;
        }
        
        codes.append_int(OP_GOTO);
        
        int break_point = codes.len;
        info->breaks.push_back(break_point);
        
        codes.append_int(0);
    }
    else if(node.kind == kContinue) {
        if(info->loop_head == -1) {
            fprintf(stderr, "%s %d: require loop for continue\n", info->fname, info->sline);
            return false;
        }
        
        codes.append_int(OP_GOTO);
        codes.append_int(info->loop_head);
    }
    else if(node.kind == kFor) {
        sNode* list_node = node.value.forValue.list_node;
        list<sNode*>* for_nodes = node.value.forValue.for_nodes;
        char* var_name = node.value.forValue.var_name;
        
        if(!compile(list_node, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_INIT_GET_ELEMENT);
        
        info->stack_num--;
        
        int head = codes.len;
        
        codes.append_int(OP_GET_ELEMENT);
        
        int end_point = codes.length();
        codes.append_int(0);
        
        int in_global_context = info.in_global_context;
        codes.append_int(in_global_context);
        
        char* name = var_name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        vector<int>* breaks_before = info->breaks;
        info->breaks = new  vector<int>.initialize();
        
        int head2 = codes.length();
        int head_before = info->loop_head;
        info->loop_head = head2;
        
        compile_block(codes, for_nodes, info);
        
        codes.append_int(OP_GOTO);
        codes.append_int(head);
        
        int* p = (int*)(codes.buf + end_point);
        
        *p = codes.length();
        
        for(int i=0; i<info->breaks.length(); i++) {
            int break_point = info->breaks.item(i, -1);
            
            int* p = (int*)(codes.buf + break_point);
            
            *p = codes.length();
        }
        
        info->breaks = breaks_before;
        info->loop_head = head_before;
    }
    
    return true;
}

