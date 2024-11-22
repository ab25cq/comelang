#include "common.h"

class sTypedefNode extends sNodeBase
{
    new(string type_name, sType*% type, list<tup: sType*%, string>*% multiple_declare, sInfo* info)
    {
        self.super();
    
        string self.mTypeName = string(type_name);
        sType*% self.mType = clone type;
        
        string self.mDeclareSName = string(info->sname);
        
        list<tup: sType*%, string>*% self.multiple_declare = clone multiple_declare;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sTypedefNode");
    }
    
    bool compile(sInfo* info)
    {
        string type_name = string(self.mTypeName);
        
        if(type_name === "__darwin_va_list") {
            info.classes.insert(string("__darwin_va_list"), new sClass("__darwin_va_list", number:true));
            
            sType*% type = new sType("__darwin_va_list");
            type->mOriginalTypeName = string("__darwin_va_list");
            
            type->mTypedef = true;
            info.types.insert(string(type_name), clone type);
            
            if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
            }
            else {
                if(info.struct_definition[type_name]?? == null) {
                    info.struct_definition.insert(type_name, "typedef __builtin_va_list __darwin_va_list;\n".to_buffer());
                }
            }
        }
        else if(self.multiple_declare) {
            foreach(it, self.multiple_declare) {
                var type, type_name = it;
            
                if(type_name !== "va_list") {
                    type->mOriginalTypeName = string(type_name);
                }
                
                type->mTypedef = true;
                info.types.insert(string(type_name), clone type);
                
            
                if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
                }
                else {
                    if(info.struct_definition[type_name]?? == null) {
                        info.struct_definition.insert(type_name, xsprintf("typedef %s;\n", make_define_var(type, type_name, in_header:true)).to_buffer());
                    }
                }
            }
        }
        else {
            sType*% type = clone self.mType;
            
            if(type_name !== "va_list") {
                type->mOriginalTypeName = string(type_name);
            }
            
            type->mTypedef = true;
            info.types.insert(string(type_name), clone type);
            
            if(info.output_header_file && self.mDeclareSName !== info->base_sname) {
            }
            else {
                if(info.struct_definition[type_name]?? == null) {
                    info.struct_definition.insert(type_name, xsprintf("typedef %s;\n", make_define_var(type, type_name, in_header:true)).to_buffer());
                }
            }
        }
    
        return true;
    }
};

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 95
{
    char* source_head = info.p;
    
    if(buf === "typedef") {
        bool in_typedef = info.in_typedef;
        info.in_typedef = true;
        var type, type_name,err = parse_type(parse_variable_name:true);
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        info.in_typedef = false;
        info.in_typedef = in_typedef;
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            sType*% base_type = clone type;
            
            list<tup:sType*%, string>*% multiple_declare = new list<tup:sType*%, string>();
            
            tup: sType*%, string variable_name = (base_type, type_name);
            multiple_declare.push_back(variable_name);
            
            tup: sType*%, string variable_name2 = parse_variable_name(base_type, true@first, info);
            multiple_declare.push_back(variable_name2);
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                tup: sType*%, string variable_name = parse_variable_name(base_type, false@first, info);
                
                multiple_declare.push_back(variable_name);
            }
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append_str("typedef ");
            header.append(source_head, source_tail - source_head);
            
            add_come_code_at_come_header(info, "%s", header.to_string());
            
            sNode*% node = new sTypedefNode(type_name, type, multiple_declare, info) implements sNode;
            
            if(!node_compile(node, info)) {
                return null;
            }
            
            return create_nothing_node();
        }
        else {
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append_str("typedef ");
            header.append(source_head, source_tail - source_head);
            
            add_come_code_at_come_header(info, "%s;\n", header.to_string());
            
            sNode*% node = new sTypedefNode(type_name, type, null@multiple_declare, info) implements sNode;
            
            if(!node_compile(node, info)) {
                return null;
            }
            
            return create_nothing_node();
        }
    }
    
    return inherit(buf, head, head_sline, info);
}


sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 17
{
    if(buf === "typedef") {
        bool in_typedef = info.in_typedef;
        info.in_typedef = true;
        var type, type_name,err = parse_type(parse_variable_name:true);
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        info.in_typedef = false;
        info.in_typedef = in_typedef;
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            sType*% base_type = clone type;
            
            list<tup: sType*%, string>*% multiple_declare = new list<tup: sType*%, string>();
            
            tup: sType*%, string variable_name = (base_type, type_name);
            multiple_declare.push_back(variable_name);
            
            tup: sType*%, string variable_name2 = parse_variable_name(base_type, true@first, info);
            multiple_declare.push_back(variable_name2);
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                tup: sType*%, string variable_name = parse_variable_name(base_type, false@first, info);
                
                multiple_declare.push_back(variable_name);
            }
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append_str("typedef ");
            header.append(head, source_tail - head);
            
            add_come_code_at_come_header(info, "%s", header.to_string());
            
            sNode*% node = new sTypedefNode(type_name, type, multiple_declare, info) implements sNode;
            
            if(!node_compile(node, info)) {
                return null;
            }
            
            return create_nothing_node();
        }
        else {
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append_str("typedef ");
            header.append(head, source_tail - head);
            
            add_come_code_at_come_header(info, "%s;\n", header.to_string());
            
            sNode*% node = new sTypedefNode(type_name, type, null@multiple_declare, info) implements sNode;
            
            if(!node_compile(node, info)) {
                return null;
            }
            
            return create_nothing_node();
        }
    }
    
    return inherit(buf, head, head_sline, info);
}
