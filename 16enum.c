#include "common.h"

class sEnumNode extends sNodeBase
{
    new(string type_name, list<tup: string,sNode*%,string>* elements, sType*% type_elements = null, string attribute = s"", sInfo* info)
    {
        self.super();
    
        string self.mTypeName = string(type_name);
        list<tup: string, sNode*%,string>*% self.mElements = clone elements;
        
        sType*% self.mTypeElements = type_elements;
        string self.mAttribute = attribute;
    
        return self;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sEnumNode");
    }
    
    bool compile(sInfo* info)
    {
        string type_name = self.mTypeName;
        list<tup: string, sNode*%,string>* elements = self.mElements;
        string attribute = self.mAttribute;
        
        buffer*% buf = new buffer();
        
        if(type_name === "") {
            if(self.mTypeElements) {
                buf.append_format("enum :%s { ", make_type_name_string(self.mTypeElements));
            }
            else {
                buf.append_str("enum { ");
            }
        }
        else if(self.mTypeElements) {
            buf.append_format("enum %s %s:%s { ", attribute, type_name, make_type_name_string(self.mTypeElements));
        }
        else {
            buf.append_format("enum %s %s { ", attribute, type_name);
        }
        
        int i = 0;
        int n = 0;
        string right_c_value = null;
        bool output = true;
        foreach(it, elements) {
            var name, value, attribute = it;
            
            if(info.gv_table.mVars.at(string(name), null) != null) {
                output = false;
            }
            
            if(value == null) {
                buf.append_str(name);
                buf.append_str(" ");
                buf.append_str(attribute);
                buf.append_str("\n");
                
                if(i != elements.length()-1) {
                    buf.append_str(",");
                }
                
                string c_value;
                if(right_c_value) {
                    c_value = xsprintf("(%s+%d)", right_c_value, n);
                }
                else {
                    c_value = xsprintf("(%d)", n);
                }
                
                add_variable_to_global_table_with_int_value(name, new sType(s"int"), c_value, info);
            }
            else {
                node_compile(value).elif {
                    return false;
                }
                
                CVALUE*% right_value = get_value_from_stack(-1, info);
                
                string c_value = xsprintf("(%s)", right_value.c_value);
                
                add_variable_to_global_table_with_int_value(name, new sType(s"int"), c_value, info);
                
                buf.append_format("%s=(%s)", name, right_value.c_value);
                
                if(i != elements.length()-1) {
                    buf.append_str(",");
                }
                
                buf.append_str("\n");
                
                right_c_value = clone right_value.c_value;
                n = 0;
            }
            
            i++;
            n++;
        }
        buf.append_format("};\n");
        
        if(output) {
            if(info.struct_definition[string(type_name)]?? == null || type_name === "") {
                if(type_name === "") {
                    static int type_name_num = 0;
                    type_name_num++;
                    type_name = xsprintf("__enum_type_name_X%d", type_name_num);
                    if(!info->no_output_come_code2) {
                        info.struct_definition.insert(string(type_name), buf);
                    }
                }
                else {
                    if(!info->no_output_come_code2) {
                        info.struct_definition.insert(string(type_name), buf);
                    }
                }
            }
        }
    
        return true;
    }
};

sNode*% parse_enum(string type_name, string attribute, sInfo* info)
{
    sClass*% klass;
    if(info.classes.at(type_name, null) == null) {
        klass = new sClass(name:string(type_name), enum_:true);
        info.classes.insert(string(type_name), klass);
    }
    else {
        klass = info.classes.at(type_name, null);
    }
    
    sType*% type_elements = null;
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf();
        
        var type,name,err = parse_type();
        
        type_elements = type;
    }
    
    expected_next_character('{');
    
    parse_struct_attribute();
    
    list<tup: string,sNode*%,string>*% elements = new list<tup: string,sNode*%,string>();
    
    while(true) {
        parse_struct_attribute();

        string element_name = parse_word();

        string attribute = parse_struct_attribute();
        
        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_struct_attribute();
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            sNode*% element_value = expression();
                
            info.no_comma = no_comma;
            
            elements.push_back((element_name, element_value, attribute));
        }
        else {
            elements.push_back((element_name, (sNode*%)null, attribute));
        }

        parse_struct_attribute();
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }

        parse_struct_attribute();
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
    }
    
    string attribute2 = parse_struct_attribute() + " " + attribute;
    
    return new sEnumNode(type_name, elements, type_elements, attribute2, info) implements sNode;
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 96
{
    if(buf === "enum") {
        char* source_head = info.p;
        
        string type_name = null;
        sType*% type_elements = null;
        
        string attribute = parse_struct_attribute();
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_and_lf();
            
            var type,name,err = parse_type();
            
            type_elements = type;
            parse_struct_attribute();
        }
        if(*info->p == '{') {
            type_name = string("");
        }
        else {
            parse_struct_attribute();
            
            type_name = parse_word();
            
            info.classes.insert(string(type_name), new sClass(name:string(type_name), enum_:true));
            
            parse_struct_attribute();
            if(*info->p == ':') {
                info->p++;
                skip_spaces_and_lf();
                
                var type,name,err = parse_type();
                
                type_elements = type;
            }
        }
        parse_struct_attribute();
        
        expected_next_character('{');
        parse_struct_attribute();
        
        list<tup: string,sNode*%,string>*% elements = new list<tup: string,sNode*%, string>();
        
        while(true) {
            parse_struct_attribute();
            string element_name = parse_word();
            string attribute = parse_struct_attribute();

            if(*info->p == '=') {
                info->p++;
                skip_spaces_and_lf();

                bool no_comma = info.no_comma;
                info.no_comma = true;
                sNode*% element_value = expression();
                
                info.no_comma = no_comma;
                
                elements.push_back((element_name, element_value,attribute));
            }
            else {
                elements.push_back((element_name, (sNode*%)null,attribute));
            }
            parse_struct_attribute();

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
            }
            parse_struct_attribute();

            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
        }
        
        char* source_tail = info.p;
        
        buffer*% header = new buffer();
        header.append_str("enum ");
        header.append(source_head, source_tail - source_head);
        
        return new sEnumNode(type_name, elements, type_elements, attribute, info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info);
}
