#include "common.h"

bool is_type_name(char* buf, sInfo* info=info)
{
    sClass* klass = info.classes[buf]??;
    sType* type = info.types[buf]??;
    sClass* generics_class = info.generics_classes[buf]??;
    bool generics_type_name = info.generics_type_names.contained(string(buf));
    bool mgenerics_type_name = info.method_generics_type_names.contained(string(buf));
    
    if(gComeC) {
        return (type && type->mTypedef) || buf === "const" || buf === "register" || buf === "uniq" || buf === "static" || buf === "record" || buf === "volatile" || buf === "unsigned" || buf === "signed" || buf === "struct" || buf === "enum" || buf === "union" || buf === "extern" || buf === "inline" || buf === "__inline" || buf === "__always_inline" || buf === "__inline__" || buf === "__extension__" || buf === "_Noreturn" || buf === "__typeof__" || (klass && klass->mNumber) || (klass && klass->mFloat) || buf === "void" || buf === "_Nullable";
    }
    else {
        return generics_class || generics_type_name || mgenerics_type_name || klass || type || buf === "const" || buf === "register" || buf === "uniq" || buf === "static" || buf === "record" || buf === "volatile" || buf === "unsigned" || buf === "signed" || buf === "immutable" || buf === "mutable" || buf === "struct" || buf === "enum" || buf === "union" || buf === "extern" || buf === "inline" || buf === "__inline" || buf === "__always_inline" || buf === "__inline__" || buf === "__extension__" || buf === "_Noreturn" || buf === "__typeof__" || buf === "_Nullable" || buf === "exception" || (buf === "tup" && *info->p == ':');
    }
}

void skip_paren(sInfo* info)
{
    int nest = 0;
    while(true) {
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            nest++;
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            
            nest--;
            if(nest == 0) {
                break;
            }
        }
        else {
            info->p++;
        }
    }
}

void parse_sharp(sInfo* info=info) version 5
{
    while(strmemcmp(info.p, "__attribute__")) {
        info->p += strlen("__attribute__");
        skip_spaces_and_lf();
        skip_paren(info);
    }
    while(strmemcmp(info.p, "__extension__")) {
        info->p += strlen("__extension__");
        skip_spaces_and_lf();
    }
/*
    while(strmemcmp(info.p, "__asm")) {
        if(strmemcmp(info.p, "__asm__")) {
            break;
        }
        else {
            info->p += strlen("__asm");
            skip_spaces_and_lf();
            skip_paren(info);
        }
    }
*/

    while(*info->p == '#') {
        skip_spaces_and_lf();
    
        info->p++;
        skip_spaces_and_lf();
        
        if(strmemcmp(info->p, "pragma")) {
            while(*info->p) {
                if(*info->p == '\n') {
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(xisdigit(*info->p)) {
            int line = 0;
            buffer*% fname = new buffer();

            while(xisdigit(*info->p)) {
                line = line * 10 + (*info->p - '0');
                info->p++;
            }
            skip_spaces_and_lf();

            if(*info->p == '"') {
                info->p++;

                while(*info->p != '"') {
                    fname.append_char(*info->p);
                    info->p++;
                }

                while(*info->p != '\n') {
                    info->p++;
                }
                info->p++;
            }

            info->sline = line;
            info->sname = fname.to_string();

            skip_spaces_and_lf();
        }
        else if(*info->p == '"') {
            info->p++;

            while(*info->p != '"') {
                info->p++;
            }

            while(*info->p != '\n') {
                info->p++;
            }
            info->p++;
        }
    
        skip_spaces_and_lf();
    }
    
    while(strmemcmp(info.p, "__attribute__")) {
        info->p += strlen("__attribute__");
        skip_spaces_and_lf();
        skip_paren(info);
    }
    while(strmemcmp(info.p, "__extension__")) {
        info->p += strlen("__extension__");
        skip_spaces_and_lf();
    }
/*
    while(strmemcmp(info.p, "__asm")) {
        if(strmemcmp(info.p, "__asm__")) {
            break;
        }
        else {
            info->p += strlen("__asm");
            skip_spaces_and_lf();
            skip_paren(info);
        }
    }
*/
}

bool parsecmp(char* str, sInfo* info=info) 
{
    char c = *(info->p+strlen(str));
    return strmemcmp(info.p, str) && (c == ';' || c == ' ' || c == '\t' || c == '\n' || c == '\n' || c == '(');
}

string parse_word(sInfo* info=info)
{
    var buf = new buffer();
    parse_sharp();
    
    while((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p >= '0' && *info->p <= '9') || (*info->p == '$'))
    {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_and_lf();
    
    if(buf.to_string().length() == 0) {
        err_msg(info, "unexpected character(%c). expected word character", *info->p);
        return string("");
    }
    
    string result = buf.to_string();
    
    if(info->module_params && info->module_params[result]??) {
        return string(info->module_params[result]);
    }
    
    return result;
}

string backtrace_parse_word(sInfo* info=info)
{
    char* p = info.p;
    int sline = info.sline;
    
    string buf;
    if(xisalpha(*info->p) || *info->p == '_') {
        buf = parse_word();
    }
    else {
        buf = string("");
    }
    
    info.p = p;
    info.sline = sline;
    
    return buf;
}

void skip_spaces_and_lf(sInfo* info=info)
{
    while(true) {
        if(*info->p == ' ' || *info->p == '\t') {
            info->p++;
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

bool is_contained_generics_class(sType* type, sInfo* info)
{
    foreach(it, type->mGenericsTypes) {
        if(is_contained_generics_class(it, info)) {
            return true;
        }
    }
    
    if(type->mClass->mGenerics) {
        return true;
    }
    if(type->mClass->mMethodGenerics) {
        return true;
    }
    
    return false;
}

list<sType*%>*%, list<string>*%, list<string>*%, bool parse_params(sInfo* info, bool in_constructor_=false)
{
    var param_types = new list<sType*%>();
    var param_names = new list<string>();
    var param_default_parametors = new list<string>();
    bool var_args = false;
    
    if(in_constructor_) {
        param_names.add(s"self");
        sType*% type_ = clone info->impl_type;
        type_->mHeap = true;
        param_types.add(type_);
        param_default_parametors.add(null);
    }
    else if(info.in_class) {
        param_names.add(s"self");
        param_types.add(clone info->impl_type);
        param_default_parametors.add(null);
    }
    
    expected_next_character('(');
    
    /// backtrace ///
    bool void_param = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(strmemcmp(info.p, "void")) {
            info.p += strlen("void");
            skip_spaces_and_lf();
            
            if(*info->p == ')') {
                void_param = true;
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(void_param) {
        if(strmemcmp(info.p, "void")) {
            info.p += strlen("void");
            skip_spaces_and_lf();
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
        }
    }
    else {
        while(true) {
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            
            parse_sharp();
            
            var param_type, param_name, err = parse_type(parse_variable_name:true, parse_multiple_type:false, in_function_parametor:true);
            
            if(!err) {
                printf("%s %d: failed to function parametor\n", info->sname, info->sline);
                return ((list<sType*%>*)null, (list<string>*)null, (list<string>*)null, false);
            }
            
            var param_type2 = solve_generics(param_type, info->generics_type, info);
            
            param_type2->mFunctionParam = true;
            
            param_types.push_back(clone param_type2);
            param_names.push_back(clone param_name);
            
            if(*info->p == '=' && *(info->p+1) != '>') {
                info->p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                
                char* p = info->p;
                
                bool no_comma = info.no_comma;
                info.no_comma = true;
                
                sNode*% node = expression();
                
                info.no_comma = no_comma;
                
                char* p2 = info->p;
                
                char buf[p2 -p +1];
                memcpy(buf, p, p2 -p);
                buf[p2-p] = '\0';
                
                param_default_parametors.push_back(string(buf));
            }
            else {
                param_default_parametors.push_back(null);
            }
            
            parse_sharp();
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                if(strmemcmp(info->p, "...")) {
                    info->p += strlen("...");
                    skip_spaces_and_lf();
                    var_args = true;
                    
                    expected_next_character(')');
                    break;
                }
            }
            else if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
        }
    }
    
    return (param_types, param_names, param_default_parametors, var_args);
}

bool check_assign_type(char* msg, sType* left_type, sType* right_type, CVALUE* come_value, bool check_no_pointer=false, bool print_err_msg=true, bool pointer_massive=false, sInfo* info=info)
{
    sType*% right_type2 = clone right_type;
    
    sType* left_no_solved_generics_type = left_type->mNoSolvedGenericsType.v1;
    sType* right_no_solved_generics_type = right_type2->mNoSolvedGenericsType.v1;
    
    sClass* left_class = left_type->mClass;
    sClass* right_class = right_type2->mClass;
    
    bool parent_class = false;
    if(left_class->mName !== right_class->mName) {
        while(left_class && right_class) {
            if(left_class->mName === right_class->mName) {
                parent_class = true;
            }
            if(right_class->mParentClassName) {
                right_class = info.classes[right_class->mParentClassName]??;
            }
            else {
                right_class = null;
            }
        }
    }
    
    if(pointer_massive) {
        if(left_type->mPointerNum > 0 && right_type->mPointerNum == 0) {
            if(print_err_msg) {
                err_msg(info, "poinetr num err");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
        }
        else if(right_type->mPointerNum > 0 && left_type->mPointerNum == 0) {
            if(print_err_msg) {
                err_msg(info, "poinetr num err");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
        }
        else if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0) {
            if(left_type->mClass->mName === "void") {
            }
            else if(left_type->mClass->mName !== right_type->mClass->mName) {
                if(print_err_msg) {
                    err_msg(info, "poinetr num err");
                    printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                    exit(2);
                }
            }
        }
    }
    
    if(left_no_solved_generics_type && right_no_solved_generics_type) {
        if(right_type->mPointerNum == 0 && left_type->mPointerNum > 0) {
        }
        else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type->mNumber && left_type->mPointerNum == 0) {
            if(pointer_massive) {
                if(print_err_msg) {
                    err_msg(info, "poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                    exit(2);
                }
            }
            else {
                string left_type_name = make_type_name_string(left_type);
                come_value.c_value = xsprintf("(%s)%s", left_type_name, come_value.c_value);
                come_value.type = clone left_type;
                come_value.var = null;
                
                right_type2 = clone left_type;
            }
        }
        else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type->mFloat && left_type->mPointerNum == 0) {
            if(pointer_massive) {
                if(print_err_msg) {
                    err_msg(info, "poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                    exit(2);
                }
            }
            else {
                string left_type_name = make_type_name_string(left_type);
                come_value.c_value = xsprintf("(%s)(long)%s", left_type_name, come_value.c_value);
                come_value.type = clone left_type;
                come_value.var = null;
                
                right_type2 = clone left_type;
            }
        }
        else if(left_type->mClass->mName === right_type2->mClass->mName && left_type->mPointerNum == right_type2->mPointerNum) {
        }
        else if(left_type->mClass->mName === right_type2->mClass->mName && (left_type->mPointerNum != right_type2->mPointerNum || left_type->mHeap != right_type2->mHeap)) {
            err_msg(info, "poinetr num err");
            printf("left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
            exit(2);
        }
        else if(left_no_solved_generics_type->mGenericsTypes.length() > 0) {
            if((left_no_solved_generics_type->mClass->mName === "void" && left_no_solved_generics_type->mPointerNum > 0 && right_no_solved_generics_type->mPointerNum > 0) || (right_no_solved_generics_type->mClass->mName === "void" && right_no_solved_generics_type->mPointerNum > 0 && left_no_solved_generics_type->mPointerNum > 0)) 
            {
            }
            else {
                if(left_no_solved_generics_type->mGenericsTypes.length() != right_no_solved_generics_type->mGenericsTypes.length()) 
                {
                    if(print_err_msg) {
                        err_msg(info, "generics type parametor number error");
                        printf("left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                        exit(2);
                    }
                    
                    return false;
                }
                
                for(int i=0; i<left_no_solved_generics_type->mGenericsTypes.length(); i++) {
                    check_assign_type(msg, left_no_solved_generics_type->mGenericsTypes[i], right_no_solved_generics_type->mGenericsTypes[i], come_value, check_no_pointer:false);
                }
                
                check_assign_type(msg, left_no_solved_generics_type, right_no_solved_generics_type, come_value);
            }
        }
    }
    else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type->mNumber && left_type->mPointerNum == 0) {
        if(pointer_massive) {
            if(print_err_msg) {
                err_msg(info, "poinetr num err");
                printf("left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                exit(2);
            }
        }
        else {
            string left_type_name = make_type_name_string(left_type);
            come_value.c_value = xsprintf("(%s)%s", left_type_name, come_value.c_value);
            come_value.type = clone left_type;
            come_value.var = null;
            
            right_type2 = clone left_type;
        }
    }
    else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type->mFloat && left_type->mPointerNum == 0) {
        if(pointer_massive) {
            if(print_err_msg) {
                err_msg(info, "poinetr num err");
                printf("left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                exit(2);
            }
        }
        else {
            string left_type_name = make_type_name_string(left_type);
            come_value.c_value = xsprintf("(%s)(long)%s", left_type_name, come_value.c_value);
            come_value.type = clone left_type;
            come_value.var = null;
            
            right_type2 = clone left_type;
        }
    }
    else if(left_type->mHeap && !right_type2->mHeap && left_type->mPointerNum > 0 && right_type2->mPointerNum > 0 && right_type2->mClass->mName !== "void" && !info.in_generics_fun && !left_type->mMultipleTypes && !right_type->mMultipleTypes)
    {
        err_msg(info, "%s", msg);
        err_msg(info, "type error heap");
        printf("left type is %s pointer num %d heap %d\n", left_type->mClass->mName, left_type->mPointerNum, left_type->mHeap);
        printf("right type is %s pointer num %d heap %d\n", right_type2->mClass->mName, right_type2->mPointerNum, right_type2->mHeap);
        exit(2);
    }
    else if(parent_class && left_type->mPointerNum == 1 && right_type->mPointerNum == 1) {
        come_value.c_value = xsprintf("(struct %s*)%s", left_type->mClass->mName, come_value.c_value);
        come_value.type = clone left_type;
        come_value.var = null;
        
        right_type2 = clone left_type;
    }
    else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type->mNumber && left_type->mPointerNum == 0) {
        if(pointer_massive) {
            if(print_err_msg) {
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
        }
        else {
            string left_type_name = make_type_name_string(left_type);
            come_value.c_value = xsprintf("(%s)%s", left_type_name, come_value.c_value);
            come_value.type = clone left_type;
            come_value.var = null;
            
            right_type2 = clone left_type;
        }
    }
    else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type->mFloat && left_type->mPointerNum == 0) {
        if(pointer_massive) {
            if(print_err_msg) {
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
        }
        else {
            string left_type_name = make_type_name_string(left_type);
            come_value.c_value = xsprintf("(%s)(long)%s", left_type_name, come_value.c_value);
            come_value.type = clone left_type;
            come_value.var = null;
            
            right_type2 = clone left_type;
        }
    }
    else if(check_no_pointer) {
        if(left_type->mPointerNum > 0) {
            if(right_type2->mPointerNum > 0) {
                if(left_type->mClass->mName === "void" || right_type2->mClass->mName === "void") {
                }
                else if(left_type->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
                }
                else if(left_type->mClass->mName !== right_type2->mClass->mName) {
                    if(print_err_msg) {
                        err_msg(info, "type error1");
                        printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                        exit(2);
                    }
                    return false;
                }
            }
            else if(right_type->mPointerNum == 0) {
            }
            else {
                if(print_err_msg) {
                    err_msg(info, "type error2");
                    printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                    exit(2);
                }
                
                return false;
            }
        }
        else if(left_type->mPointerNum == 0 && right_type2->mPointerNum > 0) {
            if(print_err_msg) {
                err_msg(info, "type error3");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
        else if(left_type->mPointerNum > 0 && right_type2->mPointerNum == 0 && right_type2->mClass->mName === "lambda" && left_type->mClass->mName === "lambda") {
        }
        else if(left_type->mClass->mName !== right_type2->mClass->mName) {
            if(print_err_msg) {
                err_msg(info, "type error4");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
    }
    else if(!left_type->mNullValue && right_type2->mNullValue) {
        if(left_type->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(right_type2->mClass->mName === "void" && right_type2->mPointerNum == 0) {
            if(print_err_msg) {
                err_msg(info, "type error6");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
        else {
            var buf2 = new buffer();
            
            buf2.append_str(s"come_null_check(\{come_value.c_value}, \"\{info->sname}\", \{info->sline}, \{gComeDebugStackFrameID++})");
            
            come_value.c_value = buf2.to_string();
            come_value.type = clone left_type;
            come_value.var = null;
            
            right_type2 = clone left_type;
        }
    }
    else if(left_type->mClass.mName === "integer" && left_type->mPointerNum == 1) {
        if(right_type2->mClass.mName === "integer" && right_type2->mPointerNum == 1) {
        }
        else if(left_type->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(right_type2->mClass->mName === "lambda") {
            if(print_err_msg) {
                err_msg(info, "type error7");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
        else if(right_type2->mClass->mName === "void" && right_type2->mPointerNum > 0) {
        }
        else if(right_type2->mClass->mName === "void") {
            if(print_err_msg) {
                err_msg(info, "type error8");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
        else if(left_type->mClass->mName === "lambda" && right_type2->mClass->mName === "lambda") {
        }
        else if(right_type2->mPointerNum > 0) {
            if(print_err_msg) {
                err_msg(info, "type error9");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
        else {
            string method_name = create_method_name(right_type2, false@no_pointer_name, "to_integer", info);
            
            if(info.funcs.at(method_name, null) == null) {
                sType* obj_type = right_type2.mNoSolvedGenericsType.v1;
                if(obj_type && obj_type.mGenericsTypes.length() > 0) {
                    sType* obj_type2 = right_type2;
                    method_name = make_generics_function(obj_type2, string("to_integer"), info);
                }
                else {
                    if(print_err_msg) {
                        err_msg(info, "require to_integer implementation(%s)", right_type2.mClass.mName);
                        exit(2);
                    }
                    return false;
                }
            }
            
            var buf2 = new buffer();
            
            buf2.append_str(method_name);
            buf2.append_str("(");
            buf2.append_str(come_value.c_value);
            buf2.append_str(")");
            
            sType*% type = new sType("integer");
            type->mHeap = true;
            type->mPointerNum = 1;
            come_value.c_value = buf2.to_string();
            come_value.type = clone type;
            come_value.var = null;
            
            append_object_to_right_values2(come_value, type, info);
            
            right_type2 = clone type;
        }
    }
    else if(left_type->mClass.mName === "floating" && left_type->mPointerNum == 1) {
        if(right_type2->mClass.mName === "floating" && right_type2->mPointerNum == 1) {
        }
        else if(left_type->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(right_type2->mClass->mName === "lambda") {
            if(print_err_msg) {
                err_msg(info, "type error7");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
        else if(right_type2->mClass->mName === "void" && right_type2->mPointerNum > 0) {
        }
        else if(right_type2->mClass->mName === "void") {
            if(print_err_msg) {
                err_msg(info, "type error8");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
        else if(left_type->mClass->mName === "lambda" && right_type2->mClass->mName === "lambda") {
        }
        else if(right_type2->mPointerNum > 0) {
            if(print_err_msg) {
                err_msg(info, "type error9");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
        else {
            string method_name = create_method_name(right_type2, false@no_pointer_name, "to_floating", info);
            
            if(info.funcs.at(method_name, null) == null) {
                sType* obj_type = right_type2.mNoSolvedGenericsType.v1;
                if(obj_type && obj_type.mGenericsTypes.length() > 0) {
                    sType* obj_type2 = right_type2;
                    method_name = make_generics_function(obj_type2, string("to_floating"), info);
                }
                else {
                    if(print_err_msg) {
                        err_msg(info, "require to_floating implementation(%s)", right_type2.mClass.mName);
                        exit(2);
                    }
                    return false;
                }
            }
            
            var buf2 = new buffer();
            
            buf2.append_str(method_name);
            buf2.append_str("(");
            buf2.append_str(come_value.c_value);
            buf2.append_str(")");
            
            sType*% type = new sType("floating");
            type->mHeap = true;
            type->mPointerNum = 1;
            come_value.c_value = buf2.to_string();
            come_value.type = clone type;
            come_value.var = null;
            
            append_object_to_right_values2(come_value, type, info);
            
            right_type2 = clone type;
        }
    }
    else if(left_type->mClass.mName === "int" && (right_type->mClass->mName === "integer" && right_type->mPointerNum == 1)) {
        string method_name = create_method_name(right_type2, false@no_pointer_name, "to_int", info);
        
        if(info.funcs.at(method_name, null) == null) {
            sType* obj_type = right_type2.mNoSolvedGenericsType.v1;
            if(obj_type && obj_type.mGenericsTypes.length() > 0) {
                sType* obj_type2 = right_type2;
                method_name = make_generics_function(obj_type2, string("to_int"), info);
            }
            else {
                if(print_err_msg) {
                    err_msg(info, "require to_string implementation(%s)", right_type2.mClass.mName);
                    exit(1);
                }
                return false;
            }
        }
        
        var buf2 = new buffer();
        
        buf2.append_str(method_name);
        buf2.append_str("(");
        buf2.append_str(come_value.c_value);
        buf2.append_str(")");
        
        sType*% type = new sType("int");
        
        come_value.c_value = buf2.to_string();
        come_value.type = clone type;
        come_value.var = null;
        
        right_type2 = clone type;
    }
    else if(left_type->mClass.mName === "double" && (right_type->mClass->mName === "floating" && right_type->mPointerNum == 1)) {
        string method_name = create_method_name(right_type2, false@no_pointer_name, "to_double", info);
        
        if(info.funcs.at(method_name, null) == null) {
            sType* obj_type = right_type2.mNoSolvedGenericsType.v1;
            if(obj_type && obj_type.mGenericsTypes.length() > 0) {
                sType* obj_type2 = right_type2;
                method_name = make_generics_function(obj_type2, string("to_double"), info);
            }
            else {
                if(print_err_msg) {
                    err_msg(info, "require to_double implementation(%s)", right_type2.mClass.mName);
                    exit(1);
                }
                return false;
            }
        }
        
        var buf2 = new buffer();
        
        buf2.append_str(method_name);
        buf2.append_str("(");
        buf2.append_str(come_value.c_value);
        buf2.append_str(")");
        
        sType*% type = new sType("double");
        
        come_value.c_value = buf2.to_string();
        come_value.type = clone type;
        come_value.var = null;
        
        right_type2 = clone type;
    }
    else if(left_type->mClass.mName === "char" && left_type->mPointerNum == 1) {
        if(right_type2->mClass.mName === "char" && right_type2->mPointerNum == 1) {
        }
        else if(left_type->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(right_type2->mClass->mName === "lambda") {
            if(print_err_msg) {
                err_msg(info, "type error10");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            
            return false;
        }
        else if(right_type2->mClass->mName === "void" && right_type2->mPointerNum > 0) {
        }
        else if(right_type2->mClass->mName === "void") {
            if(print_err_msg) {
                err_msg(info, "type error11");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
        else if(left_type->mClass->mName !== right_type2->mClass->mName && !(left_type->mPointerNum > 0 && right_type2->mPointerNum == 0)) {
            if(print_err_msg) {
                err_msg(info, "type error12");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
    }
    else if(left_type->mClass.mName === "void" && left_type->mPointerNum == 1) {
        if(right_type2->mClass.mName === "void" && right_type2->mPointerNum == 1) {
        }
        else if(left_type->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(right_type2->mClass->mName === "lambda") {
        }
        else if(right_type2->mClass->mName === "void" && right_type2->mPointerNum > 0) {
        }
        else if(right_type2->mClass->mName === "void") {
            if(print_err_msg) {
                err_msg(info, "type error13");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
        }
        else if(right_type2->mPointerNum == 0) {
            if(pointer_massive) {
                if(print_err_msg) {
                    printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                    exit(2);
                }
            }
            else {
                string tmp = xsprintf("/*a*/(void*)%s", come_value.c_value);
                come_value.c_value = clone tmp;
                come_value.type = clone left_type;
                come_value.var = null;
                
                right_type2 = clone left_type;
            }
        }
    }
    else if(left_type->mPointerNum > 0 || (left_type->mPointerNum == 0 && left_type->mClass->mStruct)) {
        if(right_type2->mPointerNum > 0 || (right_type2->mPointerNum == 0 && right_type2->mClass->mStruct)) {
            if(left_type->mClass->mName === "void" || right_type2->mClass->mName === "void") {
            }
            else if(left_type->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
            }
            else if(left_type->mClass->mName !== right_type2->mClass->mName) {
                if(print_err_msg) {
                    err_msg(info, "type error14");
                    printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                    exit(2);
                }
                return false;
            }
            else if(left_type->mPointerNum !== right_type2->mPointerNum) {
                printf("%s %d: warning invalid pointer number\n", info->sname, info->sline);
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
            }
            else if(right_type2->mArrayNum.length() > 0) {
                printf("%s %d: warning invalid pointer number\n", info->sname, info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n", left_type->mClass->mName, left_type->mPointerNum, left_type->mArrayNum.length());
                printf("right type is %s pointer num %d array dimetion num %d\n", right_type2->mClass->mName, right_type2->mPointerNum, right_type2->mArrayNum.length());
            }
        }
        else if(left_type->mClass->mName === "void" || right_type2->mClass->mName === "void") {
        }
        else if(left_type->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(left_type->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type->mClass->mName === "lambda" && right_type2->mClass->mName === "lambda") {
        }
        else if(left_type->mPointerNum > 0 && right_type2->mPointerNum == 0 && right_type2->mClass->mName === "lambda" && left_type->mClass->mName === "lambda") {
            if(print_err_msg) {
                err_msg(info, "type error15");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            
            return false;
        }
        else if(left_type->mPointerNum > 0 && !(right_type2->mClass->mName === "lambda" && left_type->mClass->mName === "lambda") && right_type2->mPointerNum == 0) {
/*
            if(print_err_msg) {
                err_msg(info, "type error16");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            return false;
*/
            string tmp = xsprintf("/*b*/(void*)%s", come_value.c_value);
            come_value.c_value = clone tmp;
            come_value.type = clone left_type;
            return true;
        }
        
        if(left_type->mGenericsTypes.length() > 0) {
            if(left_type->mGenericsTypes.length() != right_type2->mGenericsTypes.length()) {
                err_msg(info, "generics type number error");
                printf("left type is %s pointer num %d\n", left_type->mClass->mName, left_type->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                exit(2);
            }
            for(int i=0; i<left_type->mGenericsTypes.length(); i++) {
                check_assign_type(msg, left_type->mGenericsTypes[i], right_type2->mGenericsTypes[i], come_value, check_no_pointer:false);
            }
        }
    }
    
    return true;
}

void cast_type(sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info)
{
    sType*% right_type2 = clone right_type;
    if(left_type->mClass.mName === "integer" && left_type->mPointerNum == 1) {
        if(right_type2->mClass.mName === "integer" && right_type2->mPointerNum == 1) {
        }
        else if(left_type->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(right_type2->mClass->mName === "lambda") {
        }
        else if(right_type2->mClass->mName === "void" && right_type2->mPointerNum > 0) {
        }
        else if(right_type2->mClass->mName === "void") {
        }
        else if(left_type->mPointerNum > 0 && right_type2->mPointerNum == 0 && right_type2->mClass->mName === "lambda" && left_type->mClass->mName === "lambda") {
        }
        else if(right_type->mPointerNum > 0) {
        }
        else {
            string method_name = create_method_name(right_type2, false@no_pointer_name, "to_integer", info);
            
            if(info.funcs.at(method_name, null) == null) {
                sType* obj_type = right_type2.mNoSolvedGenericsType.v1;
                if(obj_type && obj_type.mGenericsTypes.length() > 0) {
                    sType* obj_type2 = right_type2;
                    method_name = make_generics_function(obj_type2, string("to_integer"), info);
                }
                else {
                    err_msg(info, "require to_string implementation(%s)", right_type2.mClass.mName);
                    exit(1);
                }
            }
            
            var buf2 = new buffer();
            
            buf2.append_str(method_name);
            buf2.append_str("(");
            buf2.append_str(come_value.c_value);
            buf2.append_str(")");
            
            sType*% type = new sType("integer");
            type->mHeap = true;
            type->mPointerNum = 1;
            come_value.c_value = buf2.to_string();
            come_value.type = clone type;
            come_value.var = null;
            
            append_object_to_right_values2(come_value, type, info);
            
            right_type2 = clone type;
        }
    }
    else if(left_type->mClass.mName === "int" && (right_type->mClass->mName === "integer" && right_type->mPointerNum == 1)) {
        string method_name = create_method_name(right_type2, false@no_pointer_name, "to_int", info);
        
        if(info.funcs.at(method_name, null) == null) {
            sType* obj_type = right_type2.mNoSolvedGenericsType.v1;
            if(obj_type && obj_type.mGenericsTypes.length() > 0) {
                sType* obj_type2 = right_type2;
                method_name = make_generics_function(obj_type2, string("to_int"), info);
            }
            else {
                err_msg(info, "require to_string implementation(%s)", right_type2.mClass.mName);
                exit(1);
            }
        }
        
        var buf2 = new buffer();
        
        buf2.append_str(method_name);
        buf2.append_str("(");
        buf2.append_str(come_value.c_value);
        buf2.append_str(")");
        
        sType*% type = new sType("int");
        
        come_value.c_value = buf2.to_string();
        come_value.type = clone type;
        come_value.var = null;
        
        right_type2 = clone type;
    }
    else if(left_type->mClass.mName === "floating" && left_type->mPointerNum == 1) {
        if(right_type2->mClass.mName === "floating" && right_type2->mPointerNum == 1) {
        }
        else if(left_type->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(right_type2->mClass->mName === "lambda") {
        }
        else if(right_type2->mClass->mName === "void" && right_type2->mPointerNum > 0) {
        }
        else if(right_type2->mClass->mName === "void") {
        }
        else if(left_type->mPointerNum > 0 && right_type2->mPointerNum == 0 && right_type2->mClass->mName === "lambda" && left_type->mClass->mName === "lambda") {
        }
        else if(right_type->mPointerNum > 0) {
        }
        else {
            string method_name = create_method_name(right_type2, false@no_pointer_name, "to_floating", info);
            
            if(info.funcs.at(method_name, null) == null) {
                sType* obj_type = right_type2.mNoSolvedGenericsType.v1;
                if(obj_type && obj_type.mGenericsTypes.length() > 0) {
                    sType* obj_type2 = right_type2;
                    method_name = make_generics_function(obj_type2, string("to_floating"), info);
                }
                else {
                    err_msg(info, "require to_string implementation(%s)", right_type2.mClass.mName);
                    exit(1);
                }
            }
            
            var buf2 = new buffer();
            
            buf2.append_str(method_name);
            buf2.append_str("(");
            buf2.append_str(come_value.c_value);
            buf2.append_str(")");
            
            sType*% type = new sType("floating");
            type->mHeap = true;
            type->mPointerNum = 1;
            come_value.c_value = buf2.to_string();
            come_value.type = clone type;
            come_value.var = null;
            
            append_object_to_right_values2(come_value, type, info);
            
            right_type2 = clone type;
        }
    }
    else if(left_type->mClass.mName === "double" && (right_type->mClass->mName === "floating" && right_type->mPointerNum == 1)) {
        string method_name = create_method_name(right_type2, false@no_pointer_name, "to_floating", info);
        
        if(info.funcs.at(method_name, null) == null) {
            sType* obj_type = right_type2.mNoSolvedGenericsType.v1;
            if(obj_type && obj_type.mGenericsTypes.length() > 0) {
                sType* obj_type2 = right_type2;
                method_name = make_generics_function(obj_type2, string("to_floating"), info);
            }
            else {
                err_msg(info, "require to_string implementation(%s)", right_type2.mClass.mName);
                exit(1);
            }
        }
        
        var buf2 = new buffer();
        
        buf2.append_str(method_name);
        buf2.append_str("(");
        buf2.append_str(come_value.c_value);
        buf2.append_str(")");
        
        sType*% type = new sType("double");
        
        come_value.c_value = buf2.to_string();
        come_value.type = clone type;
        come_value.var = null;
        
        right_type2 = clone type;
    }
}

sType*%, string parse_variable_name(sType*% base_type_name, bool first, sInfo* info)
{
    sType*% result_type = clone base_type_name;
    if(!first) {
        result_type->mPointerNum = result_type->mTypedefOriginalPointerNum;
    }
    string var_name = null;
    
    {
        char* p = info.p;
        int sline = info.sline;
    
        if(xisalpha(*info->p) || *info->p == '_') {
            string word = parse_word();
            
            if(word === "const" || word === "__restrict" || word === "restrict" || word === "__user" || word === "volatile" || word === "_Nonnull" || word === "_Nullable" || word === "_Null_unspecified" || word === "__user" || word === "_Addr") {
            }
            else {
                info.p = p;
                info.sline = sline;
            }
        }
        else {
            info.p = p;
            info.sline = sline;
        }
    }
    
    bool between_brace = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(is_type_name(word)) {
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p != '(') {
                        between_brace = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    parse_sharp();
    while(*info->p == '*') {
        info->p++;
        skip_spaces_and_lf();
        
        {
            char* p = info.p;
            int sline = info.sline;
        
            if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(word === "const" || word === "__restrict" || word === "restrict" || word === "__user" || word === "volatile" || word === "_Nonnull" || word === "_Nullable" || word === "_Null_unspecified" || word === "__user" || word === "_Addr") {
                }
                else {
                    info.p = p;
                    info.sline = sline;
                }
            }
            else {
                info.p = p;
                info.sline = sline;
            }
        }
        
        result_type->mPointerNum++;
    }
    parse_sharp();
    
    if(between_brace && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    if(xisalnum(*info.p) || *info->p == '_') {
        var_name = parse_word();
    }
    else {
        static int num_anonymous_var_name = 0;
        num_anonymous_var_name++;
        var_name = xsprintf("anonymous_var_nameYYY%d", num_anonymous_var_name);
    }
    
    if(between_brace && *info->p == ')') {
        info->p++;
        skip_spaces_and_lf();
    }
    
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf();
        
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% node = expression();
        info->no_comma = no_comma;
        
        result_type->mSizeNum = node;
    }
    
    while(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf();
        parse_sharp();
        
        {
            char* p = info.p;
            int sline = info.sline;
        
            if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(word === "const" || word === "__restrict" || word === "restrict" || word === "__user" || word === "volatile" || word === "_Nonnull" || word === "_Nullable" || word === "_Null_unspecified" || word === "__user" || word === "_Addr") {
                }
                else {
                    info.p = p;
                    info.sline = sline;
                }
            }
            else {
                info.p = p;
                info.sline = sline;
            }
        }
        
        if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf();
            
            result_type->mArrayPointerType = true;
            result_type->mPointerNum++;
            break;
        }
        parse_sharp();
        
        sNode*% node = expression();
        result_type.mArrayNum.push_back(node);
        parse_sharp();
        
        result_type.mOriginIsArray = true;
        
        expected_next_character(']');
    }
    
    parse_attribute();
    
    return (result_type, var_name);
}

void skip_pointer_attribute(sInfo* info=info)
{
    char* p = info.p;
    int sline = info.sline;

    if(xisalpha(*info->p) || *info->p == '_') {
        string word = parse_word();
        
        if(word === "const" || word === "__restrict" || word === "restrict" || word === "__user" || word === "volatile" || word === "_Nonnull" || word === "_Nullable" || word === "_Null_unspecified" || word === "__user" || word === "_Addr") {
        }
        else {
            info.p = p;
            info.sline = sline;
        }
    }
    else {
        info.p = p;
        info.sline = sline;
    }
}

sType*%,string,bool backtrace_parse_type(bool parse_variable_name=false,sInfo* info=info)
{
    bool no_output_err = info.no_output_err;
    info.no_output_err = true;
    var type, name, err = parse_type(parse_variable_name:parse_variable_name);
    info.no_output_err = false;
    info.no_output_err = no_output_err;
    
    return (type, name, err);
}

sType*%,string,bool parse_type(sInfo* info=info, bool parse_variable_name=false, bool parse_multiple_type=true, bool in_function_parametor=false)
{
    char* head = info.p;
    int head_sline = info.sline;
    info.define_struct = false;
    
    string type_name = parse_word();
    while(type_name === "__extension__") {
        type_name = parse_word();
    }
    
    bool record_ = false;
    bool exception_ = false;
    bool constant = false;
    bool static_ = false;
    bool volatile_ = false;
    bool register_ = false;
    bool unsigned_ = false;
    bool long_ = false;
    bool long_long = false;
    bool short_ = false;
    bool restrict_ = false;
    bool struct_ = false;
    bool union_ = false;
    bool enum_ = false;
    bool no_heap = false;
    bool extern_ = false;
    bool inline_ = false;
    bool come_mem_core_ = false;
    bool uniq_ = false;
    
    sNode*% alignas_ = null;;
    
    bool anonymous_type = false;
    bool anonymous_name = false;
    while(true) {
        if(type_name === "struct") {
            struct_ = true;
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    anonymous_name = true;
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                } 
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }

            parse_sharp();
            
            if(*info->p != '>') {
                type_name = parse_word();
                
                parse_sharp();
                
                if(*info->p == '<') {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    info->p++;
                    skip_spaces_and_lf();
                    
                    while(true) {
                        if(*info->p == '>') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            if(*info->p == '{') {
                            }
                            else {
                                info.p = p;
                                info.sline = sline;
                            }
                            break;
                        }
                        else if(*info->p == '\0') {
                            err_msg(info, "invalid struct definition");
                            return ((sType*%)null, (string)null, false);
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                
                if(*info->p == '{') {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    skip_block(info);
                    
                    if(strlen(info->p) >= strlen("__attribute__") && memcmp(info->p, "__attribute__", strlen("__attribute__")) == 0) {
                        parse_attribute();
                    }
                    
                    if(*info->p == ';') {
                        info.p = head;
                        info.sline = head_sline;
                        info.define_struct = true;
                        return ((sType*%)null, (string)null, false);
                    }
                    else {
                        info.p = p;
                        info.sline = sline;
                        
                        //info.p = head;
                        //info.sline = head_sline;
                        
                        sNode*% node = parse_struct(type_name, info);
                        
                        if(!node_compile(node)) {
                            return ((sType*%)null, (string)null, false);
                        }
                        //anonymous_type = true;
                        break;
                    }
                }
            }
        }
        else if(type_name === "union") {
            union_ = true;
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(strlen(info->p) >= strlen("__attribute__") && memcmp(info->p, "__attribute__", strlen("__attribute__")) == 0) {
                    parse_attribute();
                }
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    //info.define_struct = true;
                    info.define_struct = false;
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }

            parse_sharp();
            
            type_name = parse_word();

            parse_sharp();
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    return ((sType*%)null, (string)null, false);
                } 
                else {
                    anonymous_type = true;
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
        }
        else if(type_name === "enum") {
            enum_ = true;

            parse_sharp();
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_and_lf();
                
                var type,name,err = parse_type();
            }

            parse_sharp();
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(strlen(info->p) >= strlen("__attribute__") && memcmp(info->p, "__attribute__", strlen("__attribute__")) == 0) {
                    parse_attribute();
                }
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    return ((sType*%)null, (string)null, false);
                }
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }

            parse_sharp();
            
            type_name = parse_word();

            parse_sharp();
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_and_lf();
                
                var type,name,err = parse_type();
            }

            parse_sharp();
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    return ((sType*%)null, (string)null, false);
                }
                else {
                    anonymous_type = true;
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
        }
        else if(type_name === "_Alignas") {
            expected_next_character('(');
            
            sNode*% exp = expression();
            
            alignas_ = exp;
            
            expected_next_character(')');
            
            type_name = parse_word();
        }
        else if(type_name === "const") {
            constant = true;
            
            type_name = parse_word();
        }
        else if(type_name === "static") {
            static_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "uniq") {
            uniq_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "_Nullable") {
            
            type_name = parse_word();
        }
        else if(type_name === "record") {
            record_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "exception") {
            exception_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "come_mem_core") {
            come_mem_core_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "extern") {
            extern_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "_Noreturn") {
            type_name = parse_word();
        }
        else if(type_name === "inline" || type_name === "__inline" || type_name === "__inline__" || type_name === "__always_inline") {
            inline_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "volatile") {
            volatile_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "long") {
            /// backtrace ///
            {
                char* p = info.p;
                int sline = info.sline;
                
                if(!xisalpha(*info->p)) {
                    info.p = p;
                    info.sline = sline;
                    
                    type_name = string("long");
                    break;
                }
                else {
                    type_name = parse_word();
                    
                    if(type_name === "unsigned") {
                        type_name = parse_word();
                        
                        if(type_name === "int") {
                            long_ = true;
                            unsigned_ = true;
                            break;
                        }
                    }
                    else if(type_name === "long") {
                        p = info.p;
                        sline = info.sline;
                        if(xisalpha(*info->p)) {
                            long_long = true;
                            type_name = parse_word();
                        }
                        else {
                            long_ = true;
                            break;
                        }
                        
                        if(type_name === "int") {
                            long_long = true;
                            break;
                        }
                        else if(!is_type_name(type_name)) {
                            type_name = string("long");
                            long_long = true;
                            info.p = p;
                            info.sline = sline;
                            break;
                        }
                    }
                    else if(is_type_name(type_name)) {
                        if(long_) {
                            long_long = true;
                            long_ = false;
                        }
                        else {
                            long_ = true;
                        }
                        break;
                    }
                    else {
                        info.p = p;
                        info.sline = sline;
                        
                        type_name = string("long");
                        break;
                    }
                }
            }
        }
        else if(type_name === "unsigned") {
            unsigned_ = true;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                char* p = info.p;
                int sline = info.sline;
                
                type_name = parse_word();
                
                if(type_name === "short") {
                    if(xisalpha(*info->p) || *info->p == '_') {
                        char* p = info.p;
                        int sline = info.sline;
                        
                        type_name = parse_word();
                        
                        if(is_type_name(type_name)) {
                            short_ = true;
                        }
                        else {
                            short_ = true;
                            type_name = string("int");
                            
                            info.p = p;
                            info.sline = sline;
                        }
                    }
                    else {
                        short_ = true;
                        type_name = string("int");
                        break;
                    }
                }
                else if(type_name === "long") {
                    if(xisalpha(*info->p) || *info->p == '_') {
                        char* p = info.p;
                        int sline = info.sline;
                        
                        type_name = parse_word();
                        
                        if(is_type_name(type_name)) {
                            long_ = true;
                        }
                        else {
                            long_ = true;
                            type_name = string("int");
                            
                            info.p = p;
                            info.sline = sline;
                        }
                    }
                    else {
                        long_ = true;
                        type_name = string("int");
                        break;
                    }
                }
                else if(!is_type_name(type_name)) {
                    type_name = string("int");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            else {
                type_name = string("int");
                break;
            }
        }
        else if(type_name === "signed" || type_name === "__signed__") {
            unsigned_ = false;
            
            type_name = parse_word();
        }
        else if(type_name === "register") {
            register_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "restrict") {
            restrict_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "_Addr") {
            type_name = parse_word();
        }
        else if(type_name === "__restrict") {
            restrict_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "tup") {
            expected_next_character(':');
            
            type_name = parse_word();
            
            parse_multiple_type = true;
        }
        else if(type_name === "short") {
            short_ = false;
            
            if(*info->p == ':') {
                break;
            }
            else if(xisalnum(*info.p)) {
                char* p = info.p;
                int sline = info.sline;
                type_name = parse_word();
                
                if(type_name === "int") {
                    short_ = true;
                    break;
                }
                else if(type_name === "short") {
                    short_ = true;
                    break;
                }
                else if(is_type_name(type_name)) {
                    info.p = p;
                    info.sline = sline;
                }
                else {
                    type_name = string("short");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    
    skip_pointer_attribute();
    
    int pointer_num = 0;
    while(*info->p == '*') {
        info->p++;
        skip_spaces_and_lf();
        
        skip_pointer_attribute();
        
        pointer_num++;
    }
    
    bool heap = false;
    if(*info->p == '%') {
        info->p++;
        skip_spaces_and_lf();
        
        heap = true;
    }
    bool channel = false;
    if(gComePthread && *info->p == '@') {
        info->p++;
        skip_spaces_and_lf();
        
        channel = true;
    }
    
    bool lambda_flag = false;
    {
        char* pX = info.p;
        int slineX = info.sline;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            (void)parse_word();
            
            if(*info->p == '(' && info.in_typedef) {
                lambda_flag = true;
            }
        }
        
        info.p = pX;
        info.sline = slineX;
    }
    
    sType*% type;
    string var_name;
    
    bool function_pointer_flag = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        
            skip_pointer_attribute();
            
            if(*info->p == '*' || *info->p == '^') {
                function_pointer_flag = true;
            }
            else if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p == '(') {
                        function_pointer_flag = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    bool var_name_between_brace = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        
            skip_pointer_attribute();
            
            if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(is_type_name(word)) {
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p != '(') {
                        var_name_between_brace = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
/*
    if(gComeC && in_function_parametor) {
        char* p = info.p;
        int sline = info.sline;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            string word = parse_word();
            
            if(is_type_name(word)) {
            }
            else {
                type_name = s"int";
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
*/
    
    if(anonymous_type && *info->p == '{') {
        static int anonymous_num = 0;
        if(struct_) {
            if(type_name === "") {
                type_name = xsprintf("anonymous_typeX%d", ++anonymous_num);
            }
            
            sNode*% node = parse_struct(type_name, info);
            
            if(!node_compile(node)) {
                err_msg(info, "parse_struct is failed");
                return ((sType*%)null, (string)null, false);
            }
            
            int pointer_num = 0;
            while(*info->p == '*') {
                info->p++
                skip_spaces_and_lf(info);
                pointer_num++;
            }
            
            type = new sType(type_name);
            
            type->mPointerNum = pointer_num;
        }
        else if(enum_) {
            if(type_name === "") {
                type_name = xsprintf("anonymous_typeY%d", ++anonymous_num);
            }
            
            sNode*% node = parse_enum(type_name, info);
            
            if(!info.no_output_err) {
                if(!node_compile(node)) {
                    printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                    return ((sType*%)null, (string)null, false);
                }
            }
            
            type = new sType(type_name);
        }
        else if(union_) {
            if(type_name === "") {
                type_name = xsprintf("anonymous_typeZ%d", ++anonymous_num);
            }
            
            sNode*% node = parse_union(type_name, info);
            
//            if(!info.no_output_err) {
                if(!node_compile(node)) {
                    printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                    return ((sType*%)null, (string)null, false);
                }
//            }
            
            int pointer_num = 0;
            while(*info->p == '*') {
                info->p++
                skip_spaces_and_lf(info);
                pointer_num++;
            }
            
            type = new sType(type_name);
            
            type->mPointerNum = pointer_num;
        }
        else {
            err_msg(info, "unexpected { character");
            return ((sType*%)null, (string)null, false);
        }
        
        if(parse_variable_name) {
            parse_sharp();
            if(var_name_between_brace && *info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            if(*info->p == ':') {
                var_name = string("");
            }
            else if(anonymous_name) {
                static int num_anonymous_var_name = 0;
                num_anonymous_var_name++;
                var_name = xsprintf("anonymous_var_nameXYZ%d", num_anonymous_var_name);
            }
            else if(xisalnum(*info.p) || *info->p == '_') {
                var_name = parse_word();
            }
            else {
                static int num_anonymous_var_name = 0;
                num_anonymous_var_name++;
                var_name = xsprintf("anonymous_var_nameY%d", num_anonymous_var_name);
            }
            
            if(var_name_between_brace && *info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_and_lf();
                
                bool no_comma = info->no_comma;
                info->no_comma = true;
                sNode*% node = expression();
                info->no_comma = no_comma;
                
                type->mSizeNum = node;
            }
        }
    }
    else if(lambda_flag) {
        sType*% result_type;
        if(info.types[type_name]??) {
            result_type = clone info.types[type_name]??;
            result_type->mClass = info.classes[result_type->mClass->mName];
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("generics_type%d", i));
                }
            }
        }
        else if(info.method_generics_type_names.contained(type_name)) {
            for(int i=0; i<info.method_generics_type_names.length(); i++) {
                if(info.method_generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("mgenerics_type%d", i));
                }
            }
        }
        else {
            result_type = new sType(type_name);
        }
        
        result_type->mConstant = result_type->mConstant || constant;
        result_type->mAlignas = alignas_;
        result_type->mComeMemCore = result_type->mComeMemCore || come_mem_core_;
        result_type->mRegister = register_;
        result_type->mUnsigned = result_type->mUnsigned || unsigned_;
        result_type->mVolatile = volatile_;
        result_type->mRecord = result_type->mStatic || static_;
        result_type->mUniq = result_type->mUniq || uniq_;
        result_type->mStatic = result_type->mRecord || record_;
        result_type->mException = result_type->mException || exception_;
        result_type->mExtern = result_type->mExtern || extern_;
        result_type->mInline = result_type->mInline || inline_;
        result_type->mRestrict = result_type->mRestrict || restrict_;
        result_type->mLongLong = result_type->mLongLong || long_long;
        result_type->mLong = result_type->mLong || long_;
        result_type->mShort = result_type->mShort || short_;
        result_type->mPointerNum = pointer_num;
        result_type->mHeap = result_type->mHeap || heap;
        result_type->mChannel = result_type->mChannel || channel;
        
        var_name = parse_word();
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        type = new sType("lambda");
        
        type->mResultType = new tuple1<sType*%>(result_type);
        type->mParamTypes = param_types;
        type->mParamNames = param_names;
        type->mVarArgs = var_args;
        type->mExtern = extern_;
    }
    else if(function_pointer_flag) {
        info->p++;
        skip_spaces_and_lf();
        
        skip_pointer_attribute();
        
        int function_pointer_num = 0;
        while(*info->p == '*' || *info->p == '^') {
            info->p++;
            skip_spaces_and_lf();
            function_pointer_num++;
        }
        
        skip_pointer_attribute();
        
        sType*% result_type;
        if(info.types[type_name]??) {
            result_type = clone info.types[type_name]??;
            result_type->mClass = info.classes[result_type->mClass->mName];
            //type.mOriginalTypeName = string(type_name);
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("generics_type%d", i));
                }
            }
        }
        else if(info.method_generics_type_names.contained(type_name)) {
            for(int i=0; i<info.method_generics_type_names.length(); i++) {
                if(info.method_generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("mgenerics_type%d", i));
                }
            }
        }
        else {
            result_type = new sType(type_name);
        }
        
        result_type->mConstant = result_type->mConstant || constant;
        result_type->mAlignas = alignas_;
        result_type->mComeMemCore = result_type->mComeMemCore || come_mem_core_;
        result_type->mRegister = register_;
        result_type->mUnsigned = result_type->mUnsigned || unsigned_;
        result_type->mVolatile = volatile_;
        result_type->mStatic = result_type->mStatic || static_;
        result_type->mUniq = result_type->mUniq || uniq_;
        result_type->mRecord = result_type->mRecord || record_;
        result_type->mException = result_type->mException || exception_;
        result_type->mExtern = result_type->mExtern || extern_;
        result_type->mInline = result_type->mInline || inline_;
        result_type->mRestrict = result_type->mRestrict || restrict_;
        result_type->mLongLong = result_type->mLongLong || long_long;
        result_type->mLong = result_type->mLong || long_;
        result_type->mShort = result_type->mShort || short_;
        result_type->mPointerNum += pointer_num;
        result_type->mHeap = result_type->mHeap || heap;
        result_type->mChannel = result_type->mChannel || channel;
        
        if(xisalnum(*info.p) || *info->p == '_') {
            var_name = parse_word();
            if(*info->p == '(') { // function pointer result function
                return (result_type,var_name, false);
            }
        }
        else {
            static int num_anonymous_var_name = 0;
            num_anonymous_var_name++;
            var_name = xsprintf("anonymous_lambda_var_nameZ%d", num_anonymous_var_name);
        }
        bool function_pointer_array = false;
        if(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf();
            if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf();
                function_pointer_array = true;
            }
        }
        expected_next_character(')');
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        type = new sType("lambda");
        
        type->mResultType = new tuple1<sType*%>(clone result_type);
        type->mParamTypes = param_types;
        type->mParamNames = param_names;
        type->mVarArgs = var_args;
        type->mExtern = extern_;
        if(function_pointer_array) {
            type->mLambdaArray = true;
        }
        
        type->mFunctionPointerNum = function_pointer_num;
    }
    else if(type_name === "__typeof__" && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        sNode*% exp = expression();
        
        expected_next_character(')');
        
        if(!node_compile(exp)) {
            err_msg(info, "invalid __typeof__ expression");
            return ((sType*)null,(string)null,false);
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        type = clone come_value.type;

        if(parse_variable_name) {
            parse_sharp();
            
            if(var_name_between_brace && *info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            if(*info->p == ':') {
                var_name = string("");
            }
            else if(anonymous_name) {
                static int num_anonymous_var_name = 0;
                num_anonymous_var_name++;
                var_name = xsprintf("anonymous_var_nameXYZL%d", num_anonymous_var_name);
            }
            else if(xisalnum(*info.p) || *info->p == '_') {
                var_name = parse_word();
            }
            else {
                static int num_anonymous_var_name = 0;
                num_anonymous_var_name++;
                var_name = xsprintf("anonymous_var_nameX%d", num_anonymous_var_name);
            }
            
            if(var_name_between_brace && *info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_and_lf();
                
                bool no_comma = info->no_comma;
                info->no_comma = true;
                sNode*% node = expression();
                info->no_comma = no_comma;
                
                type->mSizeNum = node;
            }
        }
    }
    else {
        if(info.types[type_name]??) {
            type = clone info.types[type_name]??;
            type->mTypedefOriginalPointerNum = type->mPointerNum;
            type->mClass = info.classes[type->mClass->mName];
            type.mOriginalTypeName = string(type_name);
            type.mOriginalTypeNamePointerNum = pointer_num;
            type.mOriginalTypeNameHeap = heap;
            
            type->mConstant = type->mConstant || constant;
            type->mAlignas = alignas_;
            type->mComeMemCore = type->mComeMemCore || come_mem_core_;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mStatic = type->mStatic || static_;
            type->mUniq = type->mUniq || uniq_;
            type->mRecord = type->mRecord || record_;
            type->mException = type->mException || exception_;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    type = new sType(xsprintf("generics_type%d", i));
                }
            }
            
            type->mConstant = type->mConstant || constant;
            type->mAlignas = alignas_;
            type->mComeMemCore = type->mComeMemCore || come_mem_core_;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mStatic = type->mStatic || static_;
            type->mUniq = type->mUniq || uniq_;
            type->mRecord = type->mRecord || record_;
            type->mException = type->mException || exception_;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
        }
        else if(info.method_generics_type_names.contained(type_name)) {
            for(int i=0; i<info.method_generics_type_names.length(); i++) {
                if(info.method_generics_type_names[i] === type_name) {
                    type = new sType(xsprintf("mgenerics_type%d", i));
                }
            }
            
            type->mConstant = type->mConstant || constant;
            type->mAlignas = alignas_;
            type->mComeMemCore = type->mComeMemCore || come_mem_core_;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mStatic = type->mStatic || static_;
            type->mUniq = type->mUniq || uniq_;
            type->mRecord = type->mRecord || record_;
            type->mException = type->mException || exception_;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
        }
        else if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            if(info.generics_classes[type_name]?? == null)
            {
                return ((sType*%)null, (string)null, false);
            }
            
            type = new sType(type_name);
            
            while(true) {
                var generics_type, var_name, err = parse_type(parse_multiple_type:false);
                
                if(!err) {
                    return ((sType*%)null, (string)null, false);
                }
                
                type->mGenericsTypes.push_back(generics_type);
                
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
                    err_msg(info, "invalid generics type\n");
                    return ((sType*%)null, (string)null, false);
                }
            }
            
            if(is_contained_generics_class(type, info)) {
                type = solve_generics(type, info.generics_type, info);
            }
            else {
                if(!output_generics_struct(type, type, info))
                {
                    string new_name = create_generics_name(type, info);
                    printf("%s %d: output generics is failed(%s)\n", info->sname, info->sline, new_name);
                    exit(7);
                }
            }
            
            type->mConstant = type->mConstant || constant;
            type->mAlignas = alignas_;
            type->mComeMemCore = type->mComeMemCore || come_mem_core_;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mStatic = type->mStatic || static_;
            type->mUniq = type->mUniq || uniq_;
            type->mRecord = type->mRecord || record_;
            type->mException = type->mException || exception_;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
        }
        else {
            if(struct_) {
                sClass* klass = info.classes[type_name]??;
                
                if(klass == null && *info->p != '<') {
                    info.classes.insert(type_name, new sClass(name:type_name, struct_:true));
                }
            }
            if(union_) {
                sClass* klass = info.classes[type_name]??;
                
                if(klass == null && *info->p != '<') {
                    info.classes.insert(type_name, new sClass(name:type_name, union_:true));
                }
            }
            
            type = new sType(type_name);
            
            type->mConstant = type->mConstant || constant;
            type->mAlignas = alignas_;
            type->mComeMemCore = type->mComeMemCore || come_mem_core_;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mStatic = type->mStatic || static_;
            type->mUniq = type->mUniq || uniq_;
            type->mRecord = type->mRecord || record_;
            type->mException = type->mException || exception_;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
            type->mPointerNum += pointer_num;
            type->mHeap = type->mHeap || heap;
            type->mChannel = type->mChannel || channel;
        }
        
        skip_pointer_attribute();
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf();
            
            skip_pointer_attribute();
            
            type->mPointerNum++;
            if(type->mNoSolvedGenericsType.v1) {
                type->mNoSolvedGenericsType.v1.mPointerNum++;
            }
        }
        
        if(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mHeap = true;
            if(type->mNoSolvedGenericsType.v1) {
                type->mNoSolvedGenericsType.v1.mHeap = true;
            }
        }
        
        if(*info->p == '&') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mNoHeap = true;
            
            if(type->mNoSolvedGenericsType.v1) {
                type->mNoSolvedGenericsType.v1.mHeap = false;
            }
        }
        
        if(*info->p == '?') {
            info->p++;
            
            if(*info->p == '?') {
                info->p++;
                type->mGuardValue = true;
            }
            else {
                type->mNullValue = true;
            }
            
            skip_spaces_and_lf();
        }
        if(*info->p == '`') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mNoCallingDestructor = true;
        }
        
        skip_pointer_attribute();
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf();
        
            skip_pointer_attribute();
            
            type->mPointerNum++;
            
            if(type->mNoSolvedGenericsType.v1) {
                type->mNoSolvedGenericsType.v1.mPointerNum++;
            }
        }
        
        if(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mHeap = true;
            if(type->mNoSolvedGenericsType.v1) {
                type->mNoSolvedGenericsType.v1.mHeap = true;
            }
        }
        
        if(gComePthread && *info->p == '@') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mChannel = true;
            if(type->mNoSolvedGenericsType.v1) {
                type->mNoSolvedGenericsType.v1.mChannel = true;
            }
        }
        
        if(parse_multiple_type && *info->p == ',') {
            list<sType*%>*% types = new list<sType*%>();
            
            types.push_back(clone type);
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                var type2, name, err = parse_type(parse_multiple_type:false);
                
                if(!err) {
                    return ((sType*%)null, (string)null, false);
                }
                    
                types.push_back(clone type2);
            }
            
            int num_tuples = types.length();
            
            type = new sType(xsprintf("tuple%d", num_tuples));
            type->mPointerNum++;
            type->mHeap = true;
            
            foreach(it, types) {
                type->mGenericsTypes.push_back(clone it);
            }
            
            if(is_contained_generics_class(type, info)) {
                type = solve_generics(type, info.generics_type, info);
            }
            else {
                if(!output_generics_struct(type, type, info))
                {
                    string new_name = create_generics_name(type, info);
                    printf("output generics is failed(%s)\n", new_name);
                    exit(9);
                }
            }
            type->mMultipleTypes = true;
        }

        if(parse_variable_name) {
            parse_sharp();
            
            if(var_name_between_brace && *info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            if(*info->p == ':') {
                var_name = string("");
            }
            else if(anonymous_name) {
                static int num_anonymous_var_name = 0;
                num_anonymous_var_name++;
                var_name = xsprintf("anonymous_var_nameXYZLO%d", num_anonymous_var_name);
            }
            else if(xisalnum(*info.p) || *info->p == '_') {
                var_name = parse_word();
            }
            else {
                static int num_anonymous_var_name = 0;
                num_anonymous_var_name++;
                var_name = xsprintf("anonymous_var_nameX%d", num_anonymous_var_name);
            }
            
            if(var_name_between_brace && *info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_and_lf();
                
                bool no_comma = info->no_comma;
                info->no_comma = true;
                sNode*% node = expression();
                info->no_comma = no_comma;
                
                type->mSizeNum = node;
            }
        }
    }
    parse_sharp();
    
    while(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf();
        parse_sharp();
        
        skip_pointer_attribute();
        
        if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf();
            
            type->mArrayPointerType = true;
            type->mPointerNum++;
            break;
        }
        parse_sharp();
        
        sNode*% node = expression();
        type.mArrayNum.push_back(node);
        parse_sharp();
        
        expected_next_character(']');
    }
    string asm_name = parse_attribute();
    
    type->mAsmName = asm_name;
    
    parse_sharp();
    
    if(type->mChannel) {
        sType*% type_before = clone type;
        type = new sType("int");
        type->mArrayNum = [ create_int_node(2@value, info) ];
        type->mChannelType = new tuple1<sType*%>;
        type->mChannelType.v1 = type_before;
        type->mChannel = true;
    }
    else if(type->mException) {
        sType*% type2 = new sType("tuple2");
        type2->mGenericsTypes[0] = new sType("generics_type0");
        type2->mGenericsTypes[1] = new sType("generics_type1");
        type2->mPointerNum = 1;
        type2->mHeap = true;
        
        sType*% type3 = new sType("tuple2");
        type3->mGenericsTypes[0] = type;
        type3->mGenericsTypes[1] = new sType("char*");
        type3->mGenericsTypes[1].mHeap = true;
        
        sType*% type4 = solve_generics(type2,  type3, info);
        
        type4->mException = true;
        type4->mNoExceptionType.v1 = clone type;
        
        return (type4, var_name, true);
    }
    
    return (type, var_name, true);
}
