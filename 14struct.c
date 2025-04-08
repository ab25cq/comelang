#include "common.h"

void output_struct(sClass* klass, sInfo* info)
{
    if(info->no_output_come_code) {
        return;
    }
    if(klass->mFields.length() == 0) {
        return;
    }
    
    string name = klass.mName;
    
    buffer*% buf = new buffer();
        
    buf.append_format("struct %s\n{\n", klass.mName);
            
    bool existance_generics = false;
    foreach(it, klass.mFields) {
        var name, type = it;
            
        if(is_contained_method_generics_types(type, info) || is_contained_generics_types(type, info)) {
            existance_generics = true;
        }
        
        type->mStatic = false;
        
        buf.append_str("    ");
        buf.append_str(make_define_var(type, name));
        buf.append_str(";\n");
    }
            
    if(klass->mAttribute == null) {
        buf.append_str("};\n");
    }
    else {
        buf.append_format("} %s;\n", klass->mAttribute);
    }
            
    if(info.struct_definition[string(name)]?? == null && !existance_generics) {
        info.struct_definition.insert(string(name), buf);
    }
}

void output_struct_come_header(sClass* klass, sInfo* info)
{
    if(info->no_output_come_code) {
        return;
    }
    buffer*% buf = new buffer();
    
    if(klass.mParentClassName) {
        buf.append_format("struct %s extends %s\n{\n", klass.mName, klass.mParentClassName);
    }
    else {
        buf.append_format("struct %s\n{\n", klass.mName);
    }
    foreach(it, klass.mFields) {
        var name, type = it;
        
        type->mStatic = false;
        
        buf.append_str("    ");
        buf.append_str(make_define_var_no_solved(type, name,original_type_name:true));
        buf.append_str(";\n");
    }
        
    if(klass->mAttribute == null) {
        buf.append_str("};\n");
    }
    else {
        buf.append_format("} %s;\n", klass->mAttribute);
    }
    
    string id = string(klass.mName);
    add_come_code_at_come_struct_header(info, id, "%s", buf.to_string());
}

bool is_contained_generics_types(sType* type, sInfo* info)
{
    sType* type2 = type->mNoSolvedGenericsType;
    
    if(type2 && is_contained_generics_types(type2, info)) {
        return true;
    }
    
    sClass* klass = type->mClass;
    
    if(klass->mGenerics) {
        return true;
    }
    for(int i=0; i<type->mGenericsTypes.length(); i++) {
        bool result = is_contained_generics_types(type->mGenericsTypes[i], info);
        
        if(result) {
            return true;
        }
    }
    
    return false;
}

bool is_contained_method_generics_types(sType* type, sInfo* info)
{
    sType* type2 = type->mNoSolvedGenericsType;
    
    if(type2 && is_contained_method_generics_types(type2, info)) {
        return true;
    }
    
    sClass* klass = type->mClass;
    
    if(klass->mMethodGenerics) {
        return true;
    }
    for(int i=0; i<type->mGenericsTypes.length(); i++) {
        bool result = is_contained_method_generics_types(type->mGenericsTypes[i], info);
        
        if(result) {
            return true;
        }
    }
    
    return false;
}

bool output_generics_struct(sType* type, sType* generics_type, sInfo* info)
{
    string new_name = create_generics_name(type, info);
    
    if(!info.classes.find(new_name)) 
    {
        sClass*% generics_class = info.generics_classes[string(type.mClass.mName)]??;
        
        if(generics_class == null) {
            err_msg(info, "generics_class(%s) is null", type.mClass.mName);
            return false;
        }
        
        info.classes.insert(string(new_name), new sClass(name:new_name, struct_:true));
        
        sClass* new_class = info.classes.at(string(new_name), null);
        
        int i = 0;
        foreach(it, generics_class.mFields) {
            var name, type = it;
            
            sType*% new_type = solve_generics(type, generics_type, info);
            
            new_class.mFields.push_back((clone name, clone new_type));
        }
        
        type->mNoSolvedGenericsType = clone type;
        type->mNoSolvedGenericsType.mPointerNum = type->mPointerNum;
        
        type->mClass = new_class;
        type->mGenericsTypes.reset();
        
        output_struct(new_class, info);
    }
    else { 
        if(type->mNoSolvedGenericsType == null && type->mGenericsTypes.length() > 0) {
            type->mNoSolvedGenericsType = clone type;
            type->mNoSolvedGenericsType.mPointerNum = type->mPointerNum;
        }
        type->mClass = info.classes[string(new_name)]??;
        type->mGenericsTypes.reset();
    }
    
    return true;
}

class sStructNode extends sNodeBase
{
    new(string name, sClass* klass, sInfo* info)
    {
        self.super();
    
        string self.mName = string(name);
        sClass*% self.mClass = clone klass;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sStructNode");
    }
    
    bool compile(sInfo* info)
    {
        sClass*% klass = self.mClass;
        string name = string(self.mName);
        
        output_struct(klass, info);
    
        return true;
    }
};

class sStructNobodyNode extends sNodeBase
{
    new(string name, sInfo* info)
    {
        self.super();
    
        string self.mName = name;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sStructNobodyNode");
    }
    
    bool compile(sInfo* info)
    {
        string name = self.mName;
        
        info.previous_struct_definition.insert(string(name), xsprintf("struct %s;\n", name).to_buffer());
    
        return true;
    }
};

class sNothingNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sNothingNode");
    }
    
    bool compile(sInfo* info)
    {
    
        return true;
    }
};

sNode*% create_nothing_node(sInfo* info=info)
{
    return new sNothingNode(info) implements sNode;
}

class sClassNode extends sNodeBase
{
    new(string name, sClass*% klass, list<sNode*%>*% methods, sInfo* info)
    {
        self.super();
    
        string self.mName = string(name);
        sClass*% self.mClass = clone klass;
        
        list<sNode*%>*% self.mMethods = methods;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sClassNode");
    }
    
    bool compile(sInfo* info)
    {
        sClass*% klass = self.mClass;
        string name = string(self.mName);
        
        if(info.classes.at(name, null) == null) {
            info.classes.insert(name, clone klass);
        }
        
        if(info.classes.at(name, null) && info.classes.at(name, null).mFields.length() == 0) {
            sClass*% klass2 = info.classes.at(name, null);
            klass2.mFields = clone klass.mFields;
        }
        
        sType*% type = new sType(name);
        sType* override_ = info.types.at(string(name), null);
        if(override_) {
            if(override_->mTypedef) {
                type->mTypedef = true;
            }
        }
        info.types.insert(string(name), clone type);
        
        output_struct(klass, info);
        
        foreach(it, self.mMethods) {
            node_compile(it).elif {
                return false;
            }
        }
        
        if(info.output_header_file) {
            output_struct_come_header(klass, info);
        }
    
        return true;
    }
};

sNode*% parse_struct(string type_name, string struct_attribute, sInfo* info)
{
    sClass*% klass;
    if(info.classes.at(type_name, null) == null) {
        klass = new sClass(name:string(type_name), struct_:true);
        info.classes.insert(string(type_name), klass);
    }
    else {
        klass = info.classes.at(type_name, null);
        klass.mFields.reset();
    }
    
    sType*% type = new sType(type_name);
    sType* override_ = info.types.at(type_name, null);
    if(override_) {
        if(override_->mTypedef) {
            type->mTypedef = true;
        }
    }
    info.types.insert(type_name, clone type);
    
    sClass* parent_class = null;
    if(parsecmp("extends")) {
        parse_word();
        
        string parent_class_name = parse_word();
        
        parent_class = info.classes[parent_class_name]??;
        
        if(parent_class == null) {
            err_msg(info, "invalid class name(%s)", parent_class_name);
            exit(1);
        }
    }
    
    expected_next_character('{');
    
    while(true) {
        parse_sharp();
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        
        parse_sharp();
        
        bool multiple_declare = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            var type, name, err = backtrace_parse_type(parse_variable_name:true);
            
            if(err && *info->p == ',') {
                multiple_declare = true;
            }
                
            info.p = p;
            info.sline = sline;
        }
        
        if(multiple_declare) {
            var base_type, name, err = parse_type();
            
            var type2, name2 = parse_variable_name(base_type, true@first, info);
            
            klass.mFields.push_back((name2, type2));
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                var type2, name2 = parse_variable_name(base_type, false@first, info);
                
                klass.mFields.push_back((name2, type2));
            }
        }
        else {
            parse_sharp();
            var type2, name, err = parse_type(parse_variable_name:true);
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            
            klass.mFields.push_back((name, type2));
        }
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        parse_sharp();
    }
    
    string struct_attribute2 = parse_struct_attribute();
    
    if(parent_class) {
        klass->mParentClassName = clone parent_class->mName;
        info.classes.insert(string(klass->mName), clone klass);
    }
    
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
    
    sNode*% node = new sStructNode(string(type_name), klass, info) implements sNode;
    
    node_compile(node, info).elif {
        return null;
    }
    
    return new sNothingNode(info) implements sNode;
}

string parse_struct_attribute(sInfo* info=info)
{
    parse_sharp();
    buffer*% result = new buffer();
    while(1) {
        if(memcmp(info->p, "__attribute__", strlen("__attribute__")) == 0) {
            char* head = info.p;
            
            info->p += strlen("__attribute__");
            skip_spaces_and_lf();
            skip_paren(info);
            
            char* tail = info->p;
            
            result.append(head, tail-head);
        }
        else {
            break;
        }
    }
    parse_sharp();
    
    return result.to_string();
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 98
{
    if(buf === "struct") {
        char* source_head = head;
        
        string struct_attribute = parse_struct_attribute();
        
        string type_name = parse_word();
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
            
            sClass*% struct_class;
            if(info.classes.at(type_name, null) == null) {
                struct_class = new sClass(name:string(type_name), struct_:true);
                
                info.classes.insert(type_name, new sClass(name:type_name, struct_:true));
            }
            else {
                struct_class = info.classes.at(type_name, null);
            }
            sType*% type = new sType(type_name);
            sType* override_ = info.types.at(type_name, null);
            if(override_) {
                if(override_->mTypedef) {
                    type->mTypedef = true;
                }
            }
            info.types.insert(type_name, type);
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append(source_head, source_tail - source_head);
            
            string id = string(type_name) + ";";
            add_come_code_at_come_struct_header(info, id, "%s", header.to_string());
            
            return new sStructNobodyNode(string(type_name), info) implements sNode;
        }
        else if(*info->p == '<') {
            info.generics_type_names.reset();
            
            info->p++;
            skip_spaces_and_lf();
            
            while(true) {
                var T = parse_word() ;
                info.generics_type_names.push_back(clone T);
                
                if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else {
                    err_msg(info, "invalid generics struct definition");
                    exit(2);
                }
            }
            
            if(info.generics_classes.at(string(type_name), null) != null) {
                err_msg(info, "redefined generics struct(%s)", type_name);
                exit(2);
            }
            
            sClass*% generics_class = new sClass(name:type_name, struct_:true);
            
            info.generics_classes.insert(string(type_name), generics_class);
            
            expected_next_character('{') ;
            
            while(true) {
                parse_sharp();
                
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
        
                parse_sharp();
                
                var type2, name, err = parse_type(parse_variable_name:true);
                
                if(!err) {
                    printf("%s %d: parse_type failed\n", info->sname, info->sline);
                    exit(2);
                }
                
                if(*info->p == ',') {
                    generics_class.mFields.push_back((name, type2));
                    
                    while(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        string name2 = parse_word();
                        
                        var type3 = clone type2;
                        
                        if(*info->p == ':') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            bool no_comma = info->no_comma;
                            info->no_comma = true;
                            sNode*% node = expression();
                            info->no_comma = no_comma;
                            
                            type3->mSizeNum = node;
                        }
                        
                        generics_class.mFields.push_back((name2, type3));
                    }
                }
                else {
                    generics_class.mFields.push_back((name, type2));
                }
                
                if(*info->p == ';') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                
                parse_sharp();
                
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                parse_sharp();
            }
            
            parse_attribute();
            
            info.generics_type_names.reset();
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append_str("struct ");
            header.append(source_head, source_tail - source_head);
            
            string id = string(type_name);
            add_come_code_at_come_struct_header(info, id, "%s;\n", header.to_string());
            
            return new sNothingNode(info) implements sNode;
        }
        else {
            sClass*% struct_class;
            if(info.classes.at(type_name, null) == null) {
                struct_class = new sClass(name:string(type_name), struct_:true);
                info.classes.insert(string(type_name), struct_class);
            }
            else {
                struct_class = info.classes.at(type_name, null);
                struct_class.mFields.reset();
            }
            
            sType*% type = new sType(type_name);
            sType* override_ = info.types.at(type_name, null);
            if(override_) {
                if(override_->mTypedef) {
                    type->mTypedef = true;
                }
            }
            info.types.insert(type_name, type);
            
            sClass* parent_class = null;
            if(parsecmp("extends")) {
                parse_word();
                
                string parent_class_name = parse_word();
                
                parent_class = info.classes[parent_class_name]??;
                
                if(parent_class == null) {
                    err_msg(info, "invalid class name(%s)", parent_class_name);
                    exit(1);
                }
            }
            
            expected_next_character('{') ;
           
            while(true) {
                parse_sharp();
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                parse_sharp();
                    
                bool multiple_declare = false;
                {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    var type, name, err = backtrace_parse_type(parse_variable_name:true);
                    
                    if(err && *info->p == ',') {
                        multiple_declare = true;
                    }
                        
                    info.p = p;
                    info.sline = sline;
                }
                
                if(multiple_declare) {
                    var base_type, name, err = parse_type();
                    
                    var type2,name2 = parse_variable_name(base_type, true@first, info);
                    
                    struct_class.mFields.push_back((name2, type2));
                    
                    while(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        var type2, name2 = parse_variable_name(base_type, false@first, info);
                        
                        struct_class.mFields.push_back((name2, type2));
                    }
                }
                else {
                    var type2, name, err = parse_type(parse_variable_name:true);
                    if(!err) {
                        printf("%s %d: parse_type failed\n", info->sname, info->sline);
                        exit(2);
                    }
                    
                    struct_class.mFields.push_back((name, type2));
                }
                
                if(*info->p == ';') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                //expected_next_character(';') ;
                
                parse_sharp();
                
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                parse_sharp();
            }
            
            string struct_attribute2 = parse_struct_attribute();
            
            info.generics_type_names.reset();
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append(source_head, source_tail - source_head);
            
            string id = string(type_name);
            add_come_code_at_come_struct_header(info, id, "%s;\n", header.to_string());
            
            if(struct_attribute === "" && struct_attribute2 === "") {
            }
            else if(struct_attribute === "") {
                struct_class->mAttribute = struct_attribute2;
            }
            else if(struct_attribute2 === "") {
                struct_class->mAttribute = struct_attribute;
            }
            else {
                struct_class->mAttribute = struct_attribute + " " + struct_attribute2;
            }
            
            return new sStructNode(string(type_name), struct_class, info) implements sNode;
        }
    }
    else if(!gComeC && ((buf === "uniq" && info.p.substring(0, strlen("class")) === "class")
        || buf === "class") )
    {
        bool uniq_class = false;
        if(buf === "uniq")  {
            parse_word();
            uniq_class = true;
        }
        
        char* source_head = head;
        
        string type_name = parse_word();
        
        string id = string(type_name);
        add_come_code_at_come_struct_header(info, id, "struct %s;\n", type_name);
        
        sClass* parent_class = null;
        if(parsecmp("extends")) {
            parse_word();
            
            string parent_class_name = parse_word();
            
            parent_class = info.classes[parent_class_name]??;
            
            if(parent_class == null) {
                err_msg(info, "invalid class name(%s)", parent_class_name);
                exit(1);
            }
        }
        
        list<sClass*>*% parent_classes = new list<sClass*>();
        
        sClass* parent_class2 = parent_class;
        while(parent_class2) {
            parent_classes.add(parent_class2);
            if(parent_class->mParentClassName) {
                parent_class2 = info.classes[string(parent_class->mParentClassName)]??;
            }
            else {
                parent_class2 = null;
            }
        }
        
        sClass*% struct_class = new sClass(name:type_name, struct_:true, uniq_:uniq_class);
        
        if(parent_class) {
            struct_class->mParentClassName = clone parent_class->mName;
        }
        
        sClass* defining_class = info.defining_class;
        info.defining_class = struct_class;
        
        if(info.classes.at(type_name, null) == null) {
            info.classes.insert(type_name, clone struct_class);
        }
        else {
            info.classes[type_name].mUniq = uniq_class;
        }
        foreach(parent, parent_classes.reverse()) {
            foreach(it, parent.mFields) {
                struct_class->mFields.add(clone it);
            }
        }
        
        expected_next_character('{') ;
        
        char* head = info.p;
       
        char* p_saved = null;
        int sline_saved = 0;
        string sname_saved = null;
        
        list<sNode*%>*% methods = new list<sNode*%>();
        while(true) {
            if(p_saved) {
                if(*info.p == '\0') {
                    info.p = p_saved;
                    info.sline = sline_saved;
                    info.sname = string(sname_saved);
                    
                    p_saved = null;
                    sline_saved = 0;
                    sname_saved = null;
                    info->module_params = null;
                }
            }
            
            parse_sharp();
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            parse_sharp();
            
            bool include_ = parsecmp("include");
                
            bool multiple_declare = false;
            if(include_ == false)
            {
                char* p = info.p;
                int sline = info.sline;
                
                if(memcmp(info.p, "new(", 4) != 0) {
                    var type, name, err = backtrace_parse_type(parse_variable_name:true);
                    
                    if(err && *info->p == ',') {
                        multiple_declare = true;
                    }
                }
                    
                info.p = p;
                info.sline = sline;
            }
            bool define_function_flag = false;
            if(include_ == false)
            {
                char* p = info.p;
                int sline = info.sline;
                
                if(memcmp(info.p, "new(", 4) == 0) {
                    define_function_flag = true;
                }
                else {
                    bool invalid_type = false;
                    if(xisalpha(*info->p) || *info->p == '_') {
                        var result_type, fun_name, err = backtrace_parse_type();
                    }
                    
                    string word = null;
                    if(xisalnum(*info.p) || *info->p == '_') {
                        word = parse_word();
                        
                        if(word === "extern") {
                            word = parse_word();
                        }
                    }
                    else {
                        word = null;
                    }
                    info.no_output_err = false;
                    
                    if(word) {
                        if(is_type_name(word)) {
                            while(*info->p == '*') {
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            if(*info->p == '[' && *(info->p+1) == ']') {
                                info->p += 2;
                                skip_spaces_and_lf();
                            }
                            if(*info->p == ':') {
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            if(*info->p == ':') {
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            if(xisalnum(*info.p) || *info->p == '_') {
                                word = parse_word();
                            }
                        }
                        
                        /// fun name ///
                        if(strlen(word) > 0 && (*info->p == '(' || (*info->p == ':' && *(info->p+1) == ':'))) {
                            define_function_flag = true;
                        }
                    }
                }
                
                info.p = p;
                info.sline = sline;
            }
            
            if(define_function_flag) {
                char* tail = info.p;
                
                int pointer_num = 1;
        
                info->class_type = new sType(type_name);
                info->class_type->mPointerNum = pointer_num;
                
                info->in_class = true;
                
                sNode*% method = parse_function(info);
                
                info->class_type = null;
                info->in_class = false;
                
                methods.push_back(method);
            }
            else if(multiple_declare) {
                var base_type, name, err = parse_type();
                
                var type2,name2 = parse_variable_name(base_type, true@first, info);
                
                struct_class.mFields.push_back((name2, type2));
                
                while(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    var type2, name2 = parse_variable_name(base_type, false@first, info);
                    
                    struct_class.mFields.push_back((name2, type2));
                }
                expected_next_character(';') ;
            }
            else if(parsecmp("include")) {
                parse_word();
                
                string module_name = parse_word();
                
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
                
                if(*info->p == ';') { info->p++; }
                
                skip_spaces_and_lf();
                
                p_saved = info.p;
                sline_saved = info.sline;
                sname_saved = string(info.sname);
                
                info.sname = string(module_name);
                info.sline = 0;
                
                if(info.modules[string(module_name)]?? == null) {
                    err_msg(info, "module not found");
                    exit(1);
                }
                
                sClassModule* module = info.modules[string(module_name)]??;
                
                if(module.mParams.length() != params.length()) {
                    err_msg(info, "invalid parametor number");
                    exit(1);
                }
                
                info->module_params = new map<string,string>();
                
                int i = 0;
                foreach(it, module->mParams) {
                    info->module_params[string(it)] = string(params[i]);
                    i++;
                }
                
                info.p = module.mText;
                info.sline = module.mSLine;
                info.sname = string(module.mSName);
            }
            else {
                var type2, name, err = parse_type(parse_variable_name:true);
                if(!err) {
                    printf("%s %d: parse_type failed\n", info->sname, info->sline);
                    exit(2);
                }
                
                struct_class.mFields.push_back((name, type2));
                
                if(*info->p == ';') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                //expected_next_character(';') ;
            }
            
            parse_sharp();
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            parse_sharp();
        }
        
        if(p_saved) {
            if(info.p == '\0') {
                info.p = p_saved;
                info.sline = sline_saved;
                info.sname = string(sname_saved);
                
                p_saved = null;
                sline_saved = 0;
            }
        }
        
        info.generics_type_names.reset();
        
        info.defining_class = defining_class;
        
        return new sClassNode(string(type_name), struct_class, methods, info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info) ;
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 14
{
    /// backtrace ///
    bool define_struct = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(buf === "struct") {
            if(xisalpha(*info->p) || *info->p == '_') {
                string type_name = parse_word();
                
                if(parsecmp("extends")) {
                    parse_word();
                    parse_word();
                }
                
                if(*info->p == '{') {
                    skip_block();
                    
                    if(*info->p == ';') {
                        define_struct = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(define_struct) {
        string struct_attribute = parse_struct_attribute();
        
        string type_name = parse_word();
        
        return parse_struct(type_name, struct_attribute, info);
    }
    
    return inherit(buf, head, head_sline, info);
}
