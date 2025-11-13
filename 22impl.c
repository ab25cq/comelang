#include "common.h"

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 93
{
    if(!gComeC && buf === "impl") {
        char* source_head = info.p;
        
        var word = parse_word(info);
        
        if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            info.generics_type_names.reset();
            while(true) {
                var generics_name = parse_word();
 
                info.generics_type_names.push_back(clone generics_name);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    err_msg(info, "invalid character on impl (%c)", *info->p);
                    exit(2);
                }
            }
        }
        
        int pointer_num = 0;
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf();
            pointer_num++;
        }
        
        expected_next_character('{', info);
        
        info->impl_type = new sType(word);
        info->impl_type->mPointerNum = pointer_num;
        
        while(*info->p != '}') {
            parse_sharp();
            
            char* head = info.p;
            string buf = parse_word();
            
            parse_sharp(info);
            
            sNode*% node = top_level(buf, head, head_sline, info);
            parse_sharp(info);
            
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf();
            }
            parse_sharp(info);
            
            sType*% impl_type = info->impl_type;
            info->impl_type = null;
            
            if(node != null) {
                node_compile(node).elif {
                    err_msg(info, "compiling is faield(Y)");
                    exit(2);
                }
            }
            parse_sharp(info);
            
            info->impl_type = impl_type;
            
            skip_spaces_and_lf();
        }
        
        expected_next_character('}');
        info.generics_type_names.reset();
        info->impl_type = null;
        
        char* source_tail = info.p;
        
        buffer*% header = new buffer();
        header.append(source_head, source_tail - source_head);
        
        return (sNode*%)null;
    }
    
    return inherit(buf, head, head_sline, info);
}
