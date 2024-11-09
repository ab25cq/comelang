
#include "common.h"

class sModuleNode extends sNodeBase {
    new(string name, sClassModule*% module, sInfo* info) {
        self.super();
        
        string self.name = string(name);
        sClassModule*% self.module = clone module;
    }

    string kind()
    {
        return string("sModuleNode");
    }
    
    bool compile(sInfo* info)
    {
        string name = string(self.name);
        sClassModule* module = self.module;
        
        return true;
    }
};

class sHeaderNode extends sNodeBase {
    new(string contents, sInfo* info) {
        self.super();
        
        string self.contents = clone contents;
    }

    string kind()
    {
        return string("sHeaderNode");
    }
    
    bool compile(sInfo* info)
    {
        string contents = self.contents;
        
        //add_come_code_at_come_header(info, "%s\n", contents);
        
        return true;
    }
};

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 91
{
    if(buf === "module") {
        var type_name = parse_word();
        
        string sname = info.sname;
        int sline = info.sline;
        
        list<string>*% params = new list<string>();
        
        if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            while(true) {
                string word = parse_word();
                
                params.add(word);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == '\0') {
                    err_msg(info, "invalid source end");
                    exit(2);
                }
                else if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    err_msg(info, "invalid charactor(%c)", *info->p);
                    exit(2);
                }
            }
        }
        
        expected_next_character('{');
        
        char* source_head = info.p;
        char* source_tail = null;
        
        var buf = new buffer();
        
        bool squort = false;
        bool dquort = false;
        int nest = 1;
        while(1) {
            if(*info->p == '\0') {
                err_msg(info, "unexpected source end in module");
                exit(2);
            }
            else if(*info->p == '\\') {
                buf.append_char(*info->p);
                info->p++;
                
                if(*info->p == '\n') {
                    info->sline++;
                }
                buf.append_char(*info->p);
                info->p++;
            }
            else if(!squort && *info->p == '"') {
                buf.append_char(*info->p);
                info->p++;
                dquort = !dquort;
            }
            else if(!dquort && *info->p == '\'') {
                buf.append_char(*info->p);
                info->p++;
                squort = !squort;
            }
            else if(squort || dquort) {
                buf.append_char(*info->p);
                if(*info->p == '\n') {
                    info->sline++;
                }
                info->p++;
            }
            else if(*info->p == '{') {
                nest++;
                buf.append_char(*info->p);
                info->p++;
            }
            else if(*info->p == '}') {
                nest--;
                
                if(nest == 0) {
                    source_tail = info->p - 1;
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                
                buf.append_char(*info->p);
                info->p++;
            }
            else if(*info->p == '\n') {
                info->sline++;
                buf.append_char(*info->p);
                info->p++;
            }
            else {
                buf.append_char(*info->p);
                info->p++;
            }
        }
        
        buffer*% header = new buffer();
        header.append_str(s"module \{type_name}\n");
        header.append_str("{\n");
        header.append(source_head, source_tail - source_head);
        header.append_str("\n}\n");
        
        add_come_code_at_come_header(info, "%s\n", header.to_string());
        
        sClassModule*% module = new sClassModule(type_name, buf.to_string(), sname, sline, info);
        
        module.mParams = clone params;
        
        info.modules[string(type_name)] = module;
        
        return new sModuleNode(string(type_name), module, info) implements sNode;
    }
    else if(buf === "header" && *info->p == '{') {
        string block_text = skip_block();
        
        char* p = block_text + strlen(block_text);
        
        while(p >= block_text && *p != '}') {
            p--;
        }
        
        string contents = block_text.substring(1, p - (block_text + strlen(block_text))-1);
        
        add_come_code_at_come_header(info, "%s\n", contents);
        
        return new sHeaderNode(contents, info) implements sNode;
    }
    else if(buf === "output" && *info->p == '{') {
        string block_text = skip_block();
        
        char* p = block_text + strlen(block_text);
        
        while(p >= block_text && *p != '}') {
            p--;
        }
        
        string contents = block_text.substring(1, p - (block_text + strlen(block_text))-1);
        
        add_come_code(info, "%s\n", contents);
        
        return new sHeaderNode(contents, info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info);
}
