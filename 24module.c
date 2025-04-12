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
        
        return true;
    }
};

class sStaticAssert extends sNodeBase {
    new(sNode*% exp, sNode*% exp2, sInfo* info=info) {
        self.super();
        
        sNode*% self.exp = exp;
        sNode*% self.exp2 = exp2;
    }

    string kind()
    {
        return string("sStaticAssert");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sNode*% exp2 = self.exp2;
        
        node_compile(exp2).elif {
            return false;
        }
        
        CVALUE*% come_value2 = get_value_from_stack(-1, info);
        
        CVALUE*% come_value3 = new CVALUE();
        
        come_value3.c_value = xsprintf("_Static_assert(%s, %s)", come_value.c_value, come_value2.c_value);
        come_value3.type = new sType(s"void");
        come_value3.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

sNode*% static_assert_node(sNode*% exp, sNode*% exp2, sInfo* info=info)
{
    return new sStaticAssert(exp, exp2, info) implements sNode;
}

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
        
        if(info.output_header_file) {
            buffer*% header = new buffer();
            
            header.append_str(s"module \{type_name}\n");
            header.append_str("{\n");
            header.append(source_head, source_tail - source_head);
            header.append_str("\n}\n");
            
            string id = string(type_name);
            add_come_code_at_come_header(info, id, "%s\n", header.to_string());
        }
        
        sClassModule*% module = new sClassModule(type_name, buf.to_string(), sname, sline);
        
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
        
        static int n = 0;
        string anonymous_name = xsprintf("annymous_header_name_%d", n++);
        
        add_come_code_at_come_struct_header(info, anonymous_name, "%s\n", contents);
        
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
    else if(buf === "no_output" && *info->p == '{') {
        info->p++;
        skip_spaces_and_lf();
        
        bool no_output_come_code = info.no_output_come_code;
        bool no_output_come_code2 = info.no_output_come_code2;
        info.no_output_come_code = true;
        info.no_output_come_code2 = true;
        
        bool block = true;
        
        while(*info->p) {
            parse_sharp();
            
            if(block && *info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            
            char* head = info.p;
            int head_sline = info.sline;
            string buf = parse_word();
            
            parse_sharp();
            
            sNode*% node = top_level(buf, head, head_sline, info);
            parse_sharp();
            
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf();
            }
            parse_sharp();
            
            skip_spaces_and_lf();
            
            if(block && *info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
        
        info->no_output_come_code = no_output_come_code;
        info->no_output_come_code2 = no_output_come_code2;
        
        return new sHeaderNode(s"", info) implements sNode;
    }
    else if(buf === "_Static_assert" || buf === "static_assert") {
        expected_next_character('(');
        
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% exp = expression();
        info->no_comma = no_comma;
        
        expected_next_character(',');
        
        sNode*% exp2 = expression();
        
        expected_next_character(')');
        
        return new sStaticAssert(exp, exp2, info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info);
}
