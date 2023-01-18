#include "common.h"
#include <ctype.h>

static sNode* create_import_node(char* name, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kImport;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.importValue.name = string(name);
    
    return result;
}

static sNode* create_method_call(sNode* left, char* fun_name, vector<sNode*>* params, map<char*, sNode*>* named_params, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kMethodCall;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.methodCallValue.name = string(fun_name);
    result.value.methodCallValue.params = params;
    result.value.methodCallValue.named_params = named_params;
    result.value.methodCallValue.left = left;
    
    return result;
}

static sNode* create_store_field(sNode* left, char* field_name, sNode* right, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kStoreField;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.storeField.name = string(field_name);
    result.value.storeField.left = left;
    result.value.storeField.right = right;
    
    return result;
}

static sNode* create_load_field(sNode* left, char* field_name, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kLoadField;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.loadField.name = string(field_name);
    result.value.loadField.left = left;
    
    return result;
}

static bool emb_funcmp(char* p, char* word2)
{
    bool result = strstr(p, word2) == p;
    
    char c = p[strlen(word2)];
    
    if(result && (c == ' ' || c == '\t' || c == '\0' || c == '\n')) {
        return true;
    }
    
    return false;
}

sNode*? method_node(sNode* node, sParserInfo* info)
{
    info->p++;
    skip_spaces_until_eol(info);
    
    if(xisalpha(*info->p) || *info->p == '_') {
        buffer* buf = new  buffer.initialize();
        
        while(xisalnum(*info->p) || *info->p == '_') {
            buf.append_char(*info->p);
            info->p++;
        }
        skip_spaces_until_eol(info);
        
        parse_type(info);
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_until_eol(info);
            
            sNode* right;
            if(!expression(&right, info)) {
                fprintf(stderr, "%s %d: require right value\n", info->fname, info->sline);
                return null;
            }
            
            sNode*? result = nullable create_store_field(node, buf.to_string(), right, info);
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
            
            return result;
        }
        else if(*info->p == '(') {
            info->p++;
            skip_spaces_until_eol(info);
            
            vector<sNode*>* params = new  vector<sNode*>.initialize();
            map<char*, sNode*>* named_params = new  map<char*, sNode*>.initialize();
            
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
                    buffer* buf = new  buffer.initialize();
                    
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
                        
                        named_params.insert(buf.to_string(), node);
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
            
            sNode*? result = nullable create_method_call(node, buf.to_string(), params, named_params, info);
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
            
            return result;
        }
        else {
            sNode*? result = nullable create_load_field(node, buf.to_string(), info);
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
            
            return result;
        }
    }
}

sNode*? exp_node(sParserInfo* info) version 12
{
    sNode*? result = null;
    
    if(emb_funcmp(info->p, "import")) {
        info->p += strlen("import");
        skip_spaces_until_eol(info);
        
        char* word = parse_word(info);
        
        result = nullable create_import_node(word, info);
    }
    
    if(result == null) {
        result = inherit(info);
    }
    
    return result;
}

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 12
{
    inherit(node, codes, info);
    
    if(node.kind == kImport) {
        char* str = string(node.importValue.name);
        
        if(strcmp(str, "sys") != 0 && strcmp(str, "re") != 0) {
            codes.append_int(OP_IMPORT);
            
            int len = strlen(str);
            int offset = (len + 3) & ~3;
            offset /= sizeof(int);
            
            codes.append_int(offset);
            codes.append_int(len);
            codes.append_str(str);
            codes.alignment();
        }
    }
    else if(node.kind == kMethodCall) {
        int stack_num = info.stack_num;
        
        sNode* left = node.value.methodCallValue.left;
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        vector<sNode*>* params = node.value.methodCallValue.params;
        
        foreach(it, params) {
            if(!compile(it, codes, info)) {
                return false;
            }
        }
        map<char*, sNode*>* named_params = node.value.methodCallValue.named_params;
        
        foreach(key, named_params) {
            sNode* item = named_params.at(key, null);
            
            if(!compile(item, codes, info)) {
                return false;
            }
        }
        info.stack_num = stack_num;
        
        codes.append_int(OP_METHOD_CALL);
        
        char* name = node.value.methodCallValue.name;
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
    else if(node.kind == kLoadField) {
        sNode* left = node.value.loadField.left;
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_LOAD_FIELD);
        
        char* name = node.value.loadField.name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
    }
    else if(node.kind == kStoreField) {
        sNode* left = node.value.storeField.left;
        
        if(!compile(left, codes, info)) {
            return false;
        }
        
        sNode* right = node.value.storeField.right;
        
        if(!compile(right, codes, info)) {
            return false;
        }
        
        codes.append_int(OP_STORE_FIELD);
        
        char* name = node.value.loadField.name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        info->stack_num--;
    }
    
    return true;
}

