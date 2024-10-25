#include "common.h"

class sGlobalVariable extends sNodeBase
{
    new(list<tuple3<sType*%,string,string>*%>*% multiple_declare, sType* type, string name, sNode*% right_node, string array_initializer, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
        string self.name = string(name);
        sNode*% self.right_node = right_node;
        string self.array_initializer = array_initializer;
        
        list<tuple3<sType*%,string,string>*%>*% self.multiple_declare = clone multiple_declare;
        string self.mDeclareSName = string(info->sname);
    }
    
    string kind()
    {
        return string("sGlobalVariable");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = clone self.type;
        string name = clone self.name;
        sNode* right_node = self.right_node;
        string array_initializer = clone self.array_initializer;
        
        if(self.multiple_declare) {
            foreach(it, self.multiple_declare) {
                var type, name,initializer = it;
                
                add_variable_to_global_table(name, clone type, info);
                
                if(info.output_header_file) {
                    if(!type.mStatic) {
                        add_come_code_at_come_header(info, "extern %s;\n", make_define_var_no_solved(type, name, original_type_name:true));
                    }
                }
                else if(type.mUniq) {
                    add_come_code_at_source_head(info, "extern %s;\n", make_define_var(type, name));
                    add_come_code_at_source_head3(info, "%s;\n", make_define_var(type, name));
                }
                else if(initializer) {
                    add_come_code_at_source_head3(info, "%s=%s;\n", make_define_var(type, name), initializer);
                }
                else {
                    add_come_code_at_source_head3(info, "%s;\n", make_define_var(type, name));
                }
            }
        }
        else {
            add_variable_to_global_table(name, clone type, info);
            
            if(array_initializer) {
                if(info.output_header_file) {
                    if(!type.mStatic) {
                        add_come_code_at_come_header(info, "extern %s;\n", make_define_var_no_solved(type, name, original_type_name:true));
                    }
                }
                else if(type.mUniq) {
                    add_come_code_at_source_head(info, "extern %s;\n", make_define_var(type, name));
                    add_come_code_at_source_head3(info, "%s=%s;\n", make_define_var(type, name), array_initializer);
                }
                else {
                    add_come_code_at_source_head3(info, "%s=%s;\n", make_define_var(type, name), array_initializer);
                }
            }
            else if(right_node) {
                if(!node_compile(right_node)) {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                dec_stack_ptr(1, info);
                
                if(info.output_header_file) {
                    if(!type.mStatic) {
                        add_come_code_at_come_header(info, "extern %s;\n", make_define_var_no_solved(type, name, original_type_name:true));
                    }
                }
                else if(type.mUniq) {
                    add_come_code_at_source_head(info, "extern %s;\n", make_define_var(type, name));
                    add_come_code_at_source_head3(info, "%s=%s;\n", make_define_var(type, name), come_value.c_value);
                }
                else {
                    add_come_code_at_source_head3(info, "%s=%s;\n", make_define_var(type, name), come_value.c_value);
                }
            }
            else {
                if(info.output_header_file) {
                    if(!type.mStatic) {
                        add_come_code_at_come_header(info, "extern %s;\n", make_define_var_no_solved(type, name, original_type_name:true));
                    }
                }
                else if(type.mUniq) {
                    add_come_code_at_source_head(info, "extern %s;\n", make_define_var(type, name));
                    add_come_code_at_source_head3(info, "%s;\n", make_define_var(type, name));
                }
                else {
                    add_come_code_at_source_head3(info, "%s;\n", make_define_var(type, name));
                }
            }
        }
        
        return true;
    }
};

class sExternalGlobalVariable extends sNodeBase
{
    new(list<tuple3<sType*%, string,string>*%>*% multiple_declare, sType* type, string name, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
        string self.name = string(name);
        
        list<tuple3<sType*%,string,string>*%>*% self.multiple_declare = clone multiple_declare;
        
        string self.mDeclareSName = string(info->sname);
    }
    
    string kind()
    {
        return string("sExternalGlobalVariable");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = self.type;
        string name = self.name;
        
        if(self.multiple_declare) {
            foreach(it, self.multiple_declare) {
                var type, name,initializer = it;
                add_variable_to_global_table(name, clone type, info);
                if(info.output_header_file) {
                    if(!type.mStatic) {
                        add_come_code_at_come_header(info, "extern %s;\n", make_define_var_no_solved(type, name, original_type_name:true));
                    }
                }
                else {
                    add_come_code_at_source_head(info, "extern %s;\n", make_define_var(type, name));
                }
            }
        }
        else {
            add_variable_to_global_table(name, clone type, info);
            if(info.output_header_file) {
                if(!type.mStatic) {
                    add_come_code_at_come_header(info, "extern %s;\n", make_define_var_no_solved(type, name, original_type_name:true));
                }
            }
            else {
                add_come_code_at_source_head(info, "extern %s;\n", make_define_var(type, name));
            }
        }
        
        return true;
    }
};

sNode*% parse_global_variable(sInfo* info)
{
    /// backtrace ///
    bool multiple_declare = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            var type, name, err = parse_type();
            
            if(err) {
                var type,name = parse_variable_name(type@base_type_name, true@first, info);
                
                if(*info->p == '=' && *(info->p+1) != '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p == '{') {
                        skip_block();
                    }
                    else {
                        bool no_output_err = info->no_output_err;
                        bool no_comma = info->no_comma;
                        bool no_output_come_code = info->no_output_come_code;
                        
                        info->no_output_err = true;
                        info->no_comma = true;
                        info->no_output_come_code = true;
                        
                        sNode*% exp = expression();
                        
                        info->no_comma = no_comma;
                        info->no_output_err = no_output_err;
                        info->no_output_come_code = no_output_come_code;
                    }
                    
                }
                
                if(!is_type_name(name) && *info->p == ',') {
                    multiple_declare = true;
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(multiple_declare) {
        list<tuple3<sType*%,string,string>*%>*% multiple_declare = new list<tuple3<sType*%,string,string>*%>();
        
        var base_type, name, err = parse_type();
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        parse_sharp();
        var type2, var_name = parse_variable_name(base_type, true@first, info);
        parse_sharp();
        
        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            char* head = info.p;
            
            if(*info->p == '{') {
                skip_block();
            }
            else {
                bool no_output_err = info->no_output_err;
                bool no_comma = info->no_comma;
                bool no_output_come_code = info->no_output_come_code;
                
                info->no_output_err = true;
                info->no_comma = true;
                info->no_output_come_code = true;
                
                sNode*% exp = expression();
                
                info->no_comma = no_comma;
                info->no_output_err = no_output_err;
                info->no_output_come_code = no_output_come_code;
            }
            
            char* tail = info.p;
            
            var buf = new buffer();
            
            buf.append(head, tail - head);
            
            string initializer = buf.to_string();
            
            multiple_declare.push_back((type2, var_name, initializer));
        }
        else {
            multiple_declare.push_back((type2, var_name, null));
        }
        
        while(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            var type2, var_name = parse_variable_name(base_type, false@first, info);
            parse_sharp();
            
            if(*info->p == '=')  {
                info->p++;
                skip_spaces_and_lf();
                
                char* head = info.p;
                
                if(*info->p == '{') {
                    skip_block();
                }
                else {
                    bool no_output_err = info->no_output_err;
                    bool no_comma = info->no_comma;
                    bool no_output_come_code = info->no_output_come_code;
                    
                    info->no_output_err = true;
                    info->no_comma = true;
                    info->no_output_come_code = true;
                    
                    sNode*% exp = expression();
                    
                    info->no_comma = no_comma;
                    info->no_output_err = no_output_err;
                    info->no_output_come_code = no_output_come_code;
                }
                
                char* tail = info.p;
                
                var buf = new buffer();
                
                buf.append(head, tail - head);
                
                string initializer = buf.to_string();
                
                multiple_declare.push_back((type2, var_name, initializer));
            }
            else {
                multiple_declare.push_back((type2, var_name, null));
            }
        }
        
        sNode*% right_node = null;
        string array_initializer = null;
        string var_name2 = string("");
        
        if(base_type->mExtern) {
            if(right_node) {
                err_msg(info, "invalid right value");
                exit(2);
            }
            return new sExternalGlobalVariable(multiple_declare, base_type, var_name2, info) implements sNode;
        }
        else {
            return new sGlobalVariable(multiple_declare, base_type, var_name2, right_node, array_initializer, info) implements sNode;
        }
    }
    else {
        var result_type, var_name,err = parse_type(parse_variable_name:true);
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        sNode*% right_node = null;
        string array_initializer = null;
        
        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == '{') {
                buffer*% buf = new buffer();
                
                buf.append_char(*info->p);
                info->p++;
                
                bool squort = false;
                bool dquort = false;
                int nest = 1;
                while(1) {
                    if(*info->p == '\0') {
                        err_msg(info, "unexpected source end in array initiailizer");
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
                        if(*info->p == '\n') {
                            info->sline++;
                        }
                        buf.append_char(*info->p);
                        info->p++;
                    }
                    else if(*info->p == '{') {
                        nest++;
                        buf.append_char(*info->p);
                        info->p++;
                    }
                    else if(*info->p == '}') {
                        nest--;
                        buf.append_char(*info->p);
                        info->p++;
                        
                        if(nest == 0) {
                            skip_spaces_and_lf();
                            break;
                        }
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
                array_initializer = buf.to_string();
            }
            else {
                parse_sharp();
                right_node = expression();
                parse_sharp();
            }
        }
        
        if(result_type->mExtern) {
            if(right_node) {
                err_msg(info, "invalid right value");
                exit(2);
            }
            return new sExternalGlobalVariable(null@multiple_declare, result_type, var_name, info) implements sNode;
        }
        else {
            return new sGlobalVariable(null@multiple_declare, result_type, var_name, right_node, array_initializer, info) implements sNode;
        }
    }
    
    return (sNode*%)null;
}
