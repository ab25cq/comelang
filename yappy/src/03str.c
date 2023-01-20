#include "common.h"
#include <ctype.h>

class sStrNode(char* str)
{
    wchar_t*% self.stringValue = wstring(str);
    
    bool compile(sStrNode* self, buffer* codes, sParserInfo* info)
    {
        codes.append_int(OP_STRING_VALUE);
        
        wchar_t* str = self.stringValue;
        
        int len = wcslen(str);
        
        codes.append_int(len);
        codes.append((char*)str, sizeof(wchar_t)*len);
        
        info->stack_num++;
        
        return true;
    }
};

sNode* method_node(sNode* node, sParserInfo* info) version 1
{
    return nonullable null;
}

sNode* exp_node(sParserInfo* info) version 3
{
    sNode* result = inherit(info);
    
    if(result == null) {
        if(*info->p == '"') {
            info->p++;
            
            buffer* buf = new buffer.initialize();
            
            while(true) {
                if(*info->p == '\0') {
                    fprintf(stderr, "%s %d: the source end", info->fname, info->sline);
                    return null;
                }
                else if(*info->p == '\\') {
                    buf.append_char(*info->p);
                    info->p++;
                    
                    if(*info->p == '\0') {
                        fprintf(stderr, "%s %d: the source end", info->fname, info->sline);
                        return null;
                    }
                    
                    buf.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '"') {
                    info->p++
                    skip_spaces_until_eol(info);
                    break;
                }
                else {
                    buf.append_char(*info->p);
                    info->p++;
                }
            }
            
            result = new sNode(new sStrNode(buf.to_string()));
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
        }
        else if(*info->p == '\'') {
            info->p++;
            
            buffer* buf = new buffer.initialize();
            
            while(true) {
                if(*info->p == '\0') {
                    fprintf(stderr, "%s %d: the source end", info->fname, info->sline);
                    return null;
                }
                else if(*info->p == '\\') {
                    buf.append_char(*info->p);
                    info->p++;
                    
                    if(*info->p == '\0') {
                        fprintf(stderr, "%s %d: the source end", info->fname, info->sline);
                        return null;
                    }
                    
                    buf.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '\'') {
                    info->p++
                    skip_spaces_until_eol(info);
                    break;
                }
                else {
                    buf.append_char(*info->p);
                    info->p++;
                }
            }
            
            result = new sNode(new sStrNode(buf.to_string()));
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
        }
    }
    
    return result;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 97
{
    switch(*info->p) {
        case OP_STRING_VALUE: {
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            wchar_t* str = (wchar_t*)info->p;
            
            wchar_t* str2 = new wchar_t[len+1];
            memcpy(str2, str, sizeof(wchar_t)*len);
            str2[len] = '\0'
            
            info->p += len;
        
            info->stack[info->stack_num].kind = kStringValue;
            info->stack[info->stack_num].stringValue = str2;
            info->stack_num++;
            }
            break;
            
        default: {
            bool result = inherit(codes, params, info);
            if(!result) {
                return false;
            }
            }
            break;
    }
    
    return true;
}
