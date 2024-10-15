#include "common.h"

string get_none_generics_name(char* class_name)
{
    char* p = class_name;
    while(*p) {
        if(*p == '$') {
            return string(class_name).substring(0, p -class_name);
        }
        else {
            p++;
        }
    }
    
    return string(class_name);
}

string create_generics_name(sType* generics_type, sInfo* info)
{
    buffer*% buf = new buffer();
    
    sClass* klass = generics_type->mClass;
    
    char* class_name = klass->mName;
    
    buf.append_str(class_name);
    
    if(generics_type->mGenericsTypes.length() > 0) {
        buf.append_char('$');
        buf.append_char(generics_type->mGenericsTypes.length()+'0');
        
        for(int i=0; i<generics_type->mGenericsTypes.length(); i++) {
            sType* type = generics_type->mGenericsTypes[i];
            string type_name = create_generics_name(type, info);
            
            buf.append_str(type_name);

            for(int i=0; i<type->mPointerNum; i++) {
                buf.append_char('p');
            }
        
            if(type->mHeap) {
                buf.append_str("h");
            }
        }
    }
    
    return buf.to_string();
}

void output_struct(sClass* klass, sInfo* info)
{
/*
    if(info->no_output_come_code) {
        return;
    }
*/
    if(!klass->mOutputed) {
        klass->mOutputed = true;
        
        buffer*% buf = new buffer();
        
//        if(klass.mFields.length() > 0) {
            buf.append_str(xsprintf("struct %s\n{\n", klass.mName));
            
            //klass = info.classes[klass->mName]??;
            foreach(it, klass.mFields) {
                var name, type = it;
                
                type->mStatic = false;
                
                buf.append_str("    ");
                buf.append_str(make_define_var(type, name));
                buf.append_str(";\n");
            }
            
            buf.append_str("};\n");
            
            if(info.output_header_file && klass.mDeclareSName !== info->base_sname) {
            }
            else {
                add_come_code_at_source_head(info, "%s", buf.to_string());
            }
//        }
    }
}

void output_struct_header(sClass* klass, sInfo* info)
{
/*
    if(info->no_output_come_code) {
        return;
    }
*/
    if(!klass->mOutputed2) {
        klass->mOutputed2 = true;
        
        buffer*% buf = new buffer();
        
//        if(klass.mFields.length() > 0) {
            if(klass.mParentClassName) {
                buf.append_str(xsprintf("struct %s extends %s\n{\n", klass.mName, klass.mParentClassName));
            }
            else {
                buf.append_str(xsprintf("struct %s\n{\n", klass.mName));
            }
            foreach(it, klass.mFields) {
                var name, type = it;
                
                type->mStatic = false;
                
                buf.append_str("    ");
                buf.append_str(make_define_var_no_solved(type, name));
                buf.append_str(";\n");
            }
            buf.append_str("};\n");
            
            if(info.output_header_file && klass.mDeclareSName !== info->base_sname) {
            }
            else {
                add_come_code_at_come_header(info, "%s", buf.to_string());
            }
//        }
    }
}

bool is_no_contained_generics_types(sType* type, sInfo* info)
{
    sType* type2 = type->mNoSolvedGenericsType.v1;
    
    if(type2 && is_no_contained_generics_types(type2, info)) {
        return false;
    }
    
    sClass* klass = type->mClass;
    
    if(klass->mGenerics) {
        return false;
    }
    if(klass->mMethodGenerics) {
        return false;
    }
    for(int i=0; i<type->mGenericsTypes.length(); i++) {
        bool result = is_no_contained_generics_types(type->mGenericsTypes[i], info);
        
        if(!result) {
            return false;
        }
    }
    
    return true;
}

bool is_contained_generics_types(sType* type, sInfo* info)
{
    sType* type2 = type->mNoSolvedGenericsType.v1;
    
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
    sType* type2 = type->mNoSolvedGenericsType.v1;
    
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
    
    if(is_no_contained_generics_types(type, info) && !info.classes.find(new_name)) {
        sType*% type2 = clone type;
        
        sClass* generics_class = info.generics_classes[type.mClass.mName]??;
        
        if(generics_class == null) {
            err_msg(info, "generics_class(%s) is null", type.mClass.mName);
            return false;
        }
        
        sClass*% new_class = new sClass(name:new_name, struct_:true);
        
        info.classes.insert(string(new_name), new_class);
        
        int i = 0;
        foreach(it, generics_class.mFields) {
            var name, type = it;
            
            sType*% new_type = solve_generics(type, type2, info);
            
            new_class.mFields.push_back((clone name, clone new_type));
        }
        
        type->mNoSolvedGenericsType.v1 = clone type;
        type->mNoSolvedGenericsType.v1.mPointerNum = type->mPointerNum;
        type->mClass = new_class;
        type->mGenericsTypes.reset();
        
        output_struct(new_class, info);
    }
    else if(!info.classes.find(new_name)) {
        sClass* generics_class = info.generics_classes[type.mClass.mName]??;
        
        if(generics_class == null) {
            err_msg(info, "generics_class(%s) is null", type.mClass.mName);
            return false;
        }
        
        sClass*% new_class = new sClass(name:new_name, struct_:true);
        
        info.classes.insert(string(new_name), new_class);
        
        bool existance_method_generics = false;
        int i = 0;
        foreach(it, generics_class.mFields) {
            var name, type = it;
            
            sType*% new_type = solve_generics(type, generics_type, info);
            
            if(is_contained_method_generics_types(new_type, info)) {
                existance_method_generics = true;
            }
            
            new_class.mFields.push_back((clone name, clone new_type));
        }
        
        type->mNoSolvedGenericsType.v1 = clone type;
        type->mNoSolvedGenericsType.v1.mPointerNum = type->mPointerNum;
        type->mClass = new_class;
        type->mGenericsTypes.reset();
        
        if(!existance_method_generics) {
            output_struct(new_class, info);
        }
    }
    else {
        if(type->mNoSolvedGenericsType.v1 == null) {
            type->mNoSolvedGenericsType.v1 = clone type;
            type->mNoSolvedGenericsType.v1.mPointerNum = type->mPointerNum;
        }
        type->mClass = info.classes[new_name]??;
        type->mGenericsTypes.reset();
    }
    
    return true;
}

class sStructNode extends sNodeBase
{
    new(string name, sClass*% klass, bool output, sInfo* info)
    {
        self.super();
    
        string self.mName = string(name);
        sClass*% self.mClass = clone klass;
        
        bool self.mOutput = output;
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
        sClass*% klass = clone self.mClass;
        string name = string(self.mName);
        
        if(info.classes.at(name, null) == null) {
            info.classes.insert(name, clone klass);
        }
        else if(info.classes.at(name, null).mFields.length() == 0 && klass->mFields.length() > 0) {
            sClass* klass2 = info.classes.at(name, null);
            klass2.mFields = clone klass.mFields;
        }
        
        if(info.types[name]?? != null && info.types[name].mTypedef) {
        }
        else {
            sType*% type = new sType(name);
            info.types.insert(name, clone type);
        }
        
        if(self.mOutput) {
            output_struct(klass, info);
        }
    
        return true;
    }
};

class sStructNobodyNode extends sNodeBase
{
    new(string name, sClass*% klass, sInfo* info)
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
        return string("sStructNobodyNode");
    }
    
    bool compile(sInfo* info)
    {
        string name = string(self.mName);
        sClass* klass = self.mClass;
        
        if(info.classes.at(name, null) == null) {
            info.classes.insert(name, clone klass);
        }
        
        sType*% type = new sType(name);
        
        if(info.types[name]?? != null && info.types[name].mTypedef) {
        }
        else {
            info.types.insert(name, clone type);
        }
        
        if(info.output_header_file && klass.mDeclareSName !== info->base_sname) {
        }
        else {
            add_come_code_at_source_head(info, "struct %s;\n", name);
        }
    
        return true;
    }
};

class sGenericsStructNode extends sNodeBase
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
        return string("sGenericsStructNode");
    }
    
    bool compile(sInfo* info)
    {
    
        return true;
    }
};

class sClassNode extends sNodeBase
{
    new(string name, sClass*% klass, list<sNode*%>*% methods, bool output, sInfo* info)
    {
        self.super();
    
        string self.mName = string(name);
        sClass*% self.mClass = clone klass;
        
        list<sNode*%>*% self.mMethods = methods;
        
        bool self.mOutput = output;
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
        sClass*% klass = clone self.mClass;
        string name = string(self.mName);
        
        if(info.classes.at(name, null) == null) {
            info.classes.insert(name, clone klass);
        }
        else if(info.classes.at(name, null).mFields.length() == 0 && klass->mFields.length() > 0) {
            sClass* klass2 = info.classes.at(name, null);
            klass2.mFields = clone klass.mFields;
        }
        
        sType*% type = new sType(name);
        if(info.types[name]?? != null && info.types[name].mTypedef) {
        }
        else {
            info.types.insert(name, clone type);
        }
        
        if(self.mOutput) {
            output_struct(klass, info);
        }
        
        foreach(it, self.mMethods) {
            if(!node_compile(it)) {
                return false;
            }
        }
        
        if(self.mOutput) {
            output_struct_header(klass, info);
        }
        
    
        return true;
    }
};

sNode*% parse_struct(string type_name, sInfo* info)
{
    sClass*% klass;
    if(info.classes.at(type_name, null) == null) {
        klass = new sClass(name:string(type_name), struct_:true);
        info.classes.insert(string(type_name), klass);
    }
    else {
        klass = clone info.classes.at(type_name, null);
    }
    
    bool output;
    if(klass->mFields.length() > 0) {
        output = false;
    }
    else {
        output = true;
    }
    
    sClass* parent_class = null;
    if(parsecmp("extends")) {
        parse_word();
        
        string parent_class_name = parse_word();
        
        parent_class = info.classes[parent_class_name]??;
        
        if(parent_class == null) {
            err_msg(info, "invalid class name(%s)", parent_class_name);
            return null;
        }
    }
    
    expected_next_character('{');
    
    while(true) {
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
            
            if(output) {
                klass.mFields.push_back((name2, type2));
            }
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                var type2, name2 = parse_variable_name(base_type, false@first, info);
                
                if(output) {
                    klass.mFields.push_back((name2, type2));
                }
            }
        }
        else {
            parse_sharp();
            var type2, name, err = parse_type(parse_variable_name:true);
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            
            if(output) {
                klass.mFields.push_back((name, type2));
            }
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
    if(parent_class) {
        klass->mParentClassName = clone parent_class->mName;
        info.classes.insert(klass->mName, clone klass);
    }
    
    return new sStructNode(string(type_name), klass, output, info) implements sNode;
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 98
{
    if(buf === "struct") {
        char* source_head = head;
        
        string type_name = parse_word();
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
            
            sClass*% struct_class;
            if(info.classes.at(type_name, null) == null) {
                struct_class = new sClass(name:type_name, struct_:true);
                struct_class->mNobodyStruct = true;
            }
            else {
                struct_class = dummy_heap info.classes.at(type_name, null);
                struct_class->mNobodyStruct = true;
            }
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append(source_head, source_tail - source_head);
            
            add_come_code_at_come_header(info, "%s", header.to_string());
            
            return new sStructNobodyNode(string(type_name), struct_class, info) implements sNode;
        }
        else {
            if(*info->p == '<') {
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
                
                sClass*% generics_class;
                if(info.generics_classes.at(type_name, null) != null) {
                    err_msg(info, "redifined generics struct(%s)", type_name);
                    exit(2);
                }
                else {
                    generics_class = new sClass(name:type_name, struct_:true);
                }
                
                if(info.generics_classes.at(type_name, null) == null) {
                    info.generics_classes.insert(type_name, generics_class);
                }
                
                expected_next_character('{') ;
                
                while(true) {
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
                    //expected_next_character(';') ;
                    
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
                
                add_come_code_at_come_header(info, "%s;\n", header.to_string());
                
                return new sGenericsStructNode(info) implements sNode;
            }
            else {
                bool output = true;
                
                sClass*% struct_class;
                if(info.classes.at(type_name, null) == null) {
                    struct_class = new sClass(name:type_name, struct_:true);
                }
                else {
                    struct_class = clone info.classes.at(type_name, null);
                    if(struct_class->mFields.length() > 0) {
                        output = false;
                    }
                }
                
                sClass* parent_class = null;
                if(parsecmp("extends")) {
                    parse_word();
                    
                    string parent_class_name = parse_word();
                    
                    parent_class = info.classes[parent_class_name]??;
                    
                    if(parent_class == null) {
                        err_msg(info, "invalid class name(%s)", parent_class_name);
                        return null;
                    }
                }
                
                expected_next_character('{') ;
               
                while(true) {
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
                
                parse_attribute();
                
                info.generics_type_names.reset();
                
                sClass* klass2 = info.classes.at(type_name, null);
                
                if(klass2 == null || klass2->mNobodyStruct) {
                    if(klass2) klass2->mNobodyStruct = false;
                    char* source_tail = info.p;
                    
                    buffer*% header = new buffer();
                    header.append(source_head, source_tail - source_head);
                    
                    add_come_code_at_come_header(info, "%s;\n", header.to_string());
                }
                
                if(parent_class) {
                    struct_class->mParentClassName = clone parent_class->mName;
                    info.classes.insert(struct_class->mName, clone struct_class);
                }
                
                return new sStructNode(string(type_name), clone struct_class, output, info) implements sNode;
            }
        }
    }
    else if(buf === "class") {
        char* source_head = head;
        
        string type_name = parse_word();
        
        add_come_code_at_come_header(info, "struct %s;\n", type_name);
        
        sClass* parent_class = null;
        if(parsecmp("extends")) {
            parse_word();
            
            string parent_class_name = parse_word();
            
            parent_class = info.classes[parent_class_name]??;
            
            if(parent_class == null) {
                err_msg(info, "invalid class name(%s)", parent_class_name);
                return null;
            }
        }
        
        list<sClass*>*% parent_classes = new list<sClass*>();
        
        sClass* parent_class2 = parent_class;
        while(parent_class2) {
            parent_classes.add(parent_class2);
            if(parent_class->mParentClassName) {
                parent_class2 = info.classes[parent_class->mParentClassName]??;
            }
            else {
                parent_class2 = null;
            }
        }
        
        bool output = true;
        
        sClass*% struct_class;
        if(info.classes.at(type_name, null) == null) {
            struct_class = new sClass(name:type_name, struct_:true);
        }
        else {
            struct_class = clone info.classes.at(type_name, null);
            if(struct_class->mFields.length() > 0) {
                output = false;
            }
        }
        
        sClass* defining_class = info.defining_class;
        info.defining_class = struct_class;
        
        if(info.classes.at(type_name, null) == null) {
            if(parent_class) {
                struct_class->mParentClassName = clone parent_class->mName;
            }
            info.classes.insert(type_name, clone struct_class);
            
            foreach(parent, parent_classes.reverse()) {
                foreach(it, parent.mFields) {
                    struct_class->mFields.add(clone it);
                }
            }
        }
        else if(info.classes.at(type_name, null).mFields.length() == 0 && struct_class->mFields.length() > 0) {
            sClass* klass2 = info.classes.at(type_name, null);
            
            if(parent_class) {
                klass2->mParentClassName = clone parent_class->mName;
            }
            info.classes.insert(type_name, clone klass2);
            
            foreach(parent, parent_classes.reverse()) {
                foreach(it, parent.mFields) {
                    klass2->mFields.add(clone it);
                }
            }
            foreach(it, struct_class.mFields) {
                klass2.mFields.add(clone it);
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
        
                info->impl_type = new sType(type_name);
                info->impl_type->mPointerNum = pointer_num;
                
                //output_struct_header(struct_class, info);
                
                info->in_class = true;
                
                sNode*% method = parse_function(info);
                
                info->impl_type = null;
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
                
                if(info.modules[module_name]?? == null) {
                    err_msg(info, "module not found");
                    return null;
                }
                
                sClassModule* module = info.modules[module_name];
                
                if(module.mParams.length() != params.length()) {
                    err_msg(info, "invalid parametor number");
                    exit(1);
                }
                
                info->module_params = new map<string,string>();
                
                int i = 0;
                foreach(it, module->mParams) {
                    info->module_params[string(it)] = string(params[i]);
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
        
        return new sClassNode(string(type_name), clone struct_class, methods, output, info) implements sNode;
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
        string type_name = parse_word();
        
        return parse_struct(type_name, info);
    }
    
    return inherit(buf, head, head_sline, info);
}
