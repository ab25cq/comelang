#include "common.h"

static sNode* create_fun(char* fun_name, gc_buffer* codes, gc_vector<char*>* param_names, sParserInfo* info)
{
    sNode* result = new (GC) sNode;
    
    result.kind = kFun;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.funValue.name = gc_string(fun_name);
    result.value.funValue.codes = codes;
    result.value.funValue.param_names = param_names;
    
    return result;
}

static sNode* create_class(char* class_name, gc_buffer* codes, sParserInfo* info)
{
    sNode* result = new (GC) sNode;
    
    result.kind = kClass;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.funValue.name = gc_string(class_name);
    result.value.funValue.codes = codes;
    result.value.funValue.param_names = null;
    
    return result;
}

static sNode* create_fun_call(char* fun_name, gc_vector<sNode*>* params, gc_map<char*, sNode*>* named_params, sParserInfo* info)
{
    sNode* result = new (GC) sNode;
    
    result.kind = kFunCall;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.funCallValue.name = gc_string(fun_name);
    result.value.funCallValue.params = params;
    result.value.funCallValue.named_params = named_params;
    
    return result;
}

sNode*? def_node(sParserInfo* info) version 6
{
    gc_buffer* buf = new (GC) gc_buffer.initialize();
    
    while(xisalnum(*info->p) || *info->p == '_') {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_until_eol(info);
    
    char* fun_name = buf.to_gc_string();
    
    if(*info->p != '(') {
        fprintf(stderr, "%s %d: require (\n", info->fname, info->sline);
        exit(2);
    }
    
    info->p++;
    skip_spaces_until_eol(info);
    
    gc_vector<char*>* param_names = new (GC) gc_vector<char*>.initialize();
    
    gc_buffer* buf2 = new (GC) gc_buffer.initialize();
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_until_eol(info);
            
            parse_type(info);
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_until_eol(info);
                break;
            }
            else {
                fprintf(stderr, "%s %d: require :\n", info->fname, info->sline);
                exit(2);
            }
        }
        else if(xisalpha(*info->p)) {
            while(xisalnum(*info->p) || *info->p == '_') {
                buf2.append_char(*info->p);
                info->p++;
            }
            
            parse_type(info);
            
            param_names.push_back(buf2.to_gc_string());
            
            buf2 = new (GC) gc_buffer.initialize();
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_until_eol(info);
            }
        }
        else {
            fprintf(stderr, "%s %d: require parametor name or )\n", info->fname, info->sline);
            exit(2);
        }
    }
    
    bool in_global_context = info.in_global_context;
    info.in_global_context = false;
    
    gc_list<sNode*>* nodes = parse_block(info);
    
    info.in_global_context = in_global_context;
    gc_buffer* codes = compile_nodes(nodes, info);
    
    return nullable create_fun(fun_name, codes, param_names, info);
}

sNode*? fun_node(char* fun_name, sParserInfo* info) version 6
{
    info->p++;
    skip_spaces_until_eol(info);
    
    gc_vector<sNode*>* params = new (GC) gc_vector<sNode*>.initialize();
    gc_map<char*, sNode*>* named_params = new (GC) gc_map<char*, sNode*>.initialize();
    
    bool in_fun_call = info->in_fun_call;
    info->in_fun_call = true;
    
    while(*info->p) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_until_eol(info);
            break;
        }
        
        char* p = info->p;
        int sline = info->sline;
        
        bool named_param_flag = false;
        
        if(xisalpha(*info->p)) {
            gc_buffer* buf = new (GC) gc_buffer.initialize();
            
            while(xisalnum(*info->p)) {
                buf.append_char(*info->p);
                info->p++;
            }
            skip_spaces_until_eol(info);
            
            if(*info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_until_eol(info);
                named_param_flag = true;
                
                sNode* node = null;
                if(!expression(&node, info)) {
                    fprintf(stderr, "%s %d: unexpected character (%c)\n", info->fname, info->sline, *info->p);
                    exit(1);
                }
                
                named_params.insert(buf.to_gc_string(), node);
            }
            else {
                info->p = p;
                info->sline = sline;
            }
        }
        
        if(named_param_flag == false) {
            sNode* node = null;
            if(!expression(&node, info)) {
                fprintf(stderr, "%s %d: unexpected character (%c)\n", info->fname, info->sline, *info->p);
                exit(1);
            }
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            params.push_back(node);
        }
    }
    
    info->in_fun_call = in_fun_call;
    
    return nullable create_fun_call(fun_name, params, named_params, info);
}

sNode*? class_node(sParserInfo* info) version 6
{
    gc_buffer* buf = new (GC) gc_buffer.initialize();
    
    while(xisalnum(*info->p) || *info->p == '_') {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_until_eol(info);
    
    if(*info->p == ':') {
        info->p++;
        skip_spaces_until_eol(info);
    }
    
    char* class_name = buf.to_gc_string();
    
    gc_list<sNode*>* nodes = parse_block(info);
    gc_buffer* codes = compile_nodes(nodes, info);
    
    return nullable create_class(class_name, codes, info);
}

bool compile(sNode* node, gc_buffer* codes, sParserInfo* info) version 6
{
    inherit(node, codes, info);
    
    if(node.kind == kFun) {
        codes.append_int(OP_FUN);
        
        char* name = node.value.funValue.name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        gc_buffer* codes2 = node.value.funValue.codes;
        
        codes.append_int(codes2.len);
        
        codes.append(codes2.buf, codes2.len);
        
        gc_vector<char*>* param_names = node.value.funValue.param_names;
        
        codes.append_int(param_names.length());
        
        foreach(it, param_names) {
            char* name = it;
            
            int len = strlen(name);
            int offset = (len + 3) & ~3;
            offset /= sizeof(int);
            
            codes.append_int(offset);
            codes.append_int(len);
            
            codes.append_str(name);
            codes.alignment();
        }
    }
    else if(node.kind == kClass) {
        codes.append_int(OP_CLASS);
        
        char* name = node.value.funValue.name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        gc_buffer* codes2 = node.value.funValue.codes;
        
        codes.append_int(codes2.len);
        
        codes.append(codes2.buf, codes2.len);
    }
    else if(node.kind == kFunCall) {
        int stack_num = info.stack_num;
        
        gc_vector<sNode*>* params = node.value.funCallValue.params;
        
        foreach(it, params) {
            if(!compile(it, codes, info)) {
                return false;
            }
        }
        
        gc_map<char*, sNode*>* named_params = node.value.funCallValue.named_params;
        
        foreach(key, named_params) {
            sNode* item = named_params.at(key, null);
            
            if(!compile(item, codes, info)) {
                return false;
            }
        }
        info.stack_num = stack_num;
        
        codes.append_int(OP_FUNCALL);
        
        char* name = node.value.funCallValue.name;
        int num_params = params.length();
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        codes.append_int(num_params);
        
        int num_named_params = named_params.length();
        
        codes.append_int(num_named_params);
        
        foreach(key, named_params) {
            int len = strlen(key);
            int offset = (len + 3) & ~3;
            offset /= sizeof(int);
            
            codes.append_int(offset);
            codes.append_int(len);
            
            codes.append_str(key);
            codes.alignment();
        }
        
        info.stack_num++;
    }
    
    return true;
}

