#include "common.h"

void output_union(sClass* klass, sInfo* info)
{
    if(info->no_output_come_code) {
        return;
    }
    if(klass.mFields.length() == 0) {
        return;
    }
    
    string name = klass.mName;
    
    buffer*% buf = new buffer();
    
    buf.append_format("union %s\n{\n", klass.mName);
    
    foreach(it, klass.mFields) {
        var name, type = it;
        
        buf.append_str(make_define_var(type, name));
        buf.append_str(";\n");
    }
    
    if(klass->mAttribute == null) {
        buf.append_str("};\n");
    }
    else {
        buf.append_format("} %s;\n", klass->mAttribute);
    }
    
    if(info.struct_definition[string(name)] == null) {
        info.struct_definition.insert(string(name), buf);
    }
}

class sUnionNode extends sNodeBase
{
    new(string name, sClass* klass, sInfo* info)
    {
        self.super();
    
        string self.name = name;
        sClass* self.klass = klass;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sUnionNode");
    }
    
    bool compile(sInfo* info)
    {
        sClass* klass = self.klass;
        string name = string(self.name);
        
        output_union(klass, info);
    
        return true;
    }
};

sNode*% parse_union(string type_name, sInfo* info)
{
    sClass* klass;
    if(info.classes.at(type_name, null) == null) {
        info.classes.insert(string(type_name), new sClass(name:string(type_name), union_:true));
        
        sType*% type = new sType(type_name);
        
        info.types.insert(type_name, clone type);
        
        klass = info.classes.at(type_name, null);
    }
    else {
        klass = info.classes.at(type_name, null);
        sType* override_ = info.types.at(type_name, null);
        bool typedef_ = false;
        if(override_) {
            typedef_ = override_->mTypedef;
        }
        sType*% type = new sType(type_name);
        if(typedef_) {
            type->mTypedef = true;
        }
        info.types.insert(type_name, clone type);
    }
    parse_sharp();
    
    expected_next_character('{');
    
    while(true) {
        var type2, name, err = parse_type(parse_variable_name:true);
        
        parse_sharp();
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        if(*info->p == ',') {
            parse_sharp();
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                string name2 = parse_word();
                
                klass.mFields.push_back((name2, type2));
            }
            parse_sharp();
            
            expected_next_character(';');
        }
        else {
            parse_sharp();
            expected_next_character(';');
            parse_sharp();
            
            klass.mFields.push_back((name, type2));
        }
        
        parse_sharp();
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
    
        parse_sharp();
    }
    
    string struct_attribute = parse_struct_attribute();
    
    if(struct_attribute === "") {
    }
    else {
        klass->mAttribute = struct_attribute;
    }
    
    sNode*% node = new sUnionNode(type_name, klass, info) implements sNode;
    
    node_compile(node, info).elif {
        return null;
    }
    
    return create_nothing_node();
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 97
{
    if(buf === "union") {
        char* source_head = info.p;
        
        string struct_attribute = parse_struct_attribute();
        
        string type_name = parse_word();
        
        sClass* klass;
        if(info.classes.at(type_name, null) == null) {
            info.classes.insert(string(type_name), new sClass(name:string(type_name), union_:true));
            sType*% type = new sType(type_name);
            info.types.insert(type_name, clone type);
            
            klass = info.classes.at(type_name, null);
        }
        else {
            klass = info.classes.at(type_name, null);
            sType* override_ = info.types.at(type_name, null);
            bool typedef_ = false;
            if(override_) {
                typedef_ = override_->mTypedef;
            }
            sType*% type = new sType(type_name);
            if(typedef_) {
                type->mTypedef = typedef_;
            }
            info.types.insert(type_name, clone type);
        }
        
        expected_next_character('{');
        
        while(true) {
            var type2, name, err = parse_type(parse_variable_name:true);
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            
            parse_sharp();
            
            if(*info->p == ',') {
                while(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    string name2 = parse_word();
                    
                    klass.mFields.push_back((name2, type2));
                }
            
                parse_sharp();
                
                expected_next_character(';');
            
                parse_sharp();
            }
            else {
                parse_sharp();
                expected_next_character(';');
                parse_sharp();
                
                klass.mFields.push_back((name, type2));
            }
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
        }
    
        string struct_attribute2 = parse_struct_attribute();
        
        char* source_tail = info.p;
        
        buffer*% header = new buffer();
        header.append_str("union ");
        header.append(source_head, source_tail - source_head);
        
        string id = string(type_name);
        add_come_code_at_come_struct_header(info, id, "%s;\n", header.to_string());
        
        if(struct_attribute === "" && struct_attribute2 === "") {
        }
        else if(struct_attribute === "") {
            klass->mAttribute = struct_attribute2;
        }
        else if(struct_attribute2 === "") {
            klass->mAttribute = struct_attribute;
        }
        else {
            klass->mAttribute = struct_attribute + " " + struct_attribute2;
        }
        
        sNode*% node = new sUnionNode(type_name, klass, info) implements sNode;
        
        node_compile(node, info).elif {
            return null;
        }
        
        return create_nothing_node();
    }
    
    return inherit(buf, head, head_sline, info);
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 15
{
    /// backtrace ///
    bool define_union = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(buf === "union") {
            string type_name;
            if(*info->p == '_' || xisalpha(*info->p)) {
                type_name = parse_word();
                
                if(*info->p == '{') {
                    skip_block();
                    
                    if(*info->p == ';') {
                        define_union = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(define_union) {
        string type_name = parse_word();
        
        return parse_union(type_name, info);
    }
    
    return inherit(buf, head, head_sline, info);
}
