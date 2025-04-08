#include "common.h"

bool is_type_name(char* buf, sInfo* info=info)
{
    sClass* klass = info.classes[buf]??;
    sType* type = info.types[buf]??;
    sClass* generics_class = info.generics_classes[string(buf)]??;
    bool generics_type_name = info.generics_type_names.contained(string(buf));
    bool mgenerics_type_name = info.method_generics_type_names.contained(string(buf));
    
    if(gComeC) {
        return (type && type->mTypedef) 
            || (klass && klass->mNumber) 
            || (klass && klass->mFloat) 
            || buf === "const" || buf === "register" || buf === "static" || buf === "volatile" || buf === "unsigned" 
            || buf === "signed" || buf === "struct" || buf === "enum" || buf === "union" || buf === "extern" 
            || info->in_top_level && (buf === "inline" || buf === "__inline" || buf === "__always_inline" || buf === "__inline__" || buf === "__forceinline" )
            || buf === "__extension__" 
            || buf === "_Noreturn" 
            || buf === "__noreturn" 
            || buf === "_noreturn" 
            || buf === "__typeof__" 
            || buf === "_Nullable" 
            || buf === "__declspec" 
            || buf === "_Alignas"
            || buf === "_Atomic"
            || ((buf === "__attribute" || buf === "__attribute__") && *info->p == '(' )
            || buf === "void" ;
    }
    else {
        return generics_class || generics_type_name || mgenerics_type_name || klass || type 
        || buf === "const" || buf === "register" || buf === "static" || buf === "volatile" || buf === "unsigned" 
        || buf === "signed" || buf === "struct" || buf === "enum" || buf === "union" || buf === "extern" 
        || info->in_top_level && (buf === "inline" || buf === "__inline" || buf === "__always_inline" || buf === "__inline__" || buf === "__forceinline")
        || buf === "__extension__" 
        || (info->in_top_level && buf === "_Noreturn")
        || (info->in_top_level && buf === "__noreturn")
        || (info->in_top_level && buf === "_noreturn")
        || buf === "__typeof__" 
        || buf === "_Nullable" 
        || buf === "__declspec" 
        || buf === "_Alignas"
        || buf === "_Atomic"
        || ((buf === "__attribute" || buf === "__attribute__") && *info->p == '(')
        || (buf === "immutable")
        || (buf === "mutable")
        || (buf === "tup" && (*info->p == ':' || *info->p == '('))
        || (info.in_top_level && buf === "exception") 
        || (info.in_top_level && buf === "record") 
        || (info.in_top_level && buf === "uniq") ;
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
        sType*% type_ = clone info->class_type;
        type_->mHeap = true;
        param_types.add(type_);
        param_default_parametors.add(null);
    }
    else if(info.in_class) {
        param_names.add(s"self");
        param_types.add(clone info->class_type);
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
                return ((list<sType*%>*%)null, (list<string>*%)null, (list<string>*%)null, false);
            }
            
            var param_type2 = solve_generics(param_type, info->generics_type, info);
            
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

bool check_assign_type(char* msg, sType* left_type, sType* right_type, CVALUE* come_value, bool check_no_pointer=false, bool print_err_msg=true, bool pointer_massive=true, sInfo* info=info)
{
    sType*% left_type2 = clone left_type;
    sType*% right_type2 = clone right_type;
    
    sType* left_no_solved_generics_type = null;
    if(left_type2->mNoSolvedGenericsType) {
        left_no_solved_generics_type = left_type2->mNoSolvedGenericsType;
    }
    sType* right_no_solved_generics_type = null;
    if(right_type2->mNoSolvedGenericsType) {
        right_no_solved_generics_type = right_type2->mNoSolvedGenericsType;
    }
    
    sClass* left_class = left_type2->mClass;
    sClass* right_class = right_type2->mClass;
    
/*
    if(left_type->mImmutable)  {
        if(!right_type->mImmutable) {
            err_msg(info, "Require right type to immutable");
            return false;
        }
    }
*/
    
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
        if(left_type2->mPointerNum > 0 && right_type->mPointerNum == 0) {
            if(left_type2->mClass->mName === "lambda") {
            }
            else if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                
                info->err_num++;
                
                return false;
            }
        }
        else if(left_type2->mPointerNum == 0 && right_type->mPointerNum > 0) {
            if(left_type2->mArrayNum.length() > 0) {
            }
            else if(left_type2->mClass->mName === "lambda" || right_type->mClass->mName === "void") {
            }
            else if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                
                info->err_num++;
                
                return false;
            }
        }
        else if(left_type2->mPointerNum > 0 && right_type->mPointerNum > 0) {
            sClass* klass = right_type->mClass;
            bool flag_ = false;
            while(klass) {
                if(klass->mName === left_type2->mClass->mName) {
                    flag_ = true;
                }
                if(klass->mParentClassName) {
                    klass = info.classes[klass->mParentClassName]??;
                }
                else {
                    klass = null;
                }
            }
            if(left_type2->mClass->mName === "void") {
            }
            else if(left_type2->mClass->mName === "lambda") {
            }
            else if(left_type2->mException) {
            }
            else if(left_no_solved_generics_type && right_no_solved_generics_type && (left_no_solved_generics_type.mGenericsTypes.length() > 0 || right_no_solved_generics_type->mGenericsTypes.length() > 0))
            {
            }
            else if(strlen(left_type2->mClass->mName) >= strlen("tuple") 
                && memcmp(left_type2->mClass->mName, "tuple", strlen("tuple")) == 0
                && (strlen(right_type->mClass->mName) >= strlen("tuple") ))
            {
            }
            else if(right_type->mClass->mName === "void") {
            }
            else if(left_type2->mClass->mName !== right_type->mClass->mName && !flag_) {
                if(print_err_msg) {
                    printf("%s %d %s\n", info->sname, info->sline, msg);
                    
                    printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                
                    info->err_num++;
                    
                    return false;
                }
            }
        }
    }
    
    if(left_no_solved_generics_type && right_no_solved_generics_type) {
        if(strlen(left_type2->mClass->mName) >= strlen("tuple") 
            && memcmp(left_type2->mClass->mName, "tuple", strlen("tuple")) == 0
            && !(strlen(right_type->mClass->mName) >= strlen("tuple") 
            && memcmp(right_type->mClass->mName, "tuple", strlen("tuple")) == 0)
            && (right_type->mClass->mName !== "void" && right_type->mPointerNum >= 1))
        {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is tuple, right type is none tuple\n");
            
                info->err_num++;
                
                return false;
            }
        } 
        else if(right_type->mPointerNum == 0 && left_type2->mPointerNum > 0) {
        }
        else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type2->mClass->mNumber && left_type2->mPointerNum == 0) {
            if(pointer_massive) {
                if(print_err_msg) {
                    printf("%s %d %s\n", info->sname, info->sline, msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type2->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                    
                    info->err_num++;
                    
                    return false;
                }
            }
            else {
                string left_type3 = make_type_name_string(left_type2);
                come_value.c_value = xsprintf("(%s)%s", left_type3, come_value.c_value);
                come_value.type = clone left_type2;
                come_value.var = null;
                
                right_type2 = clone left_type2;
            }
        }
        else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type2->mClass->mFloat && left_type2->mPointerNum == 0) {
            if(pointer_massive) {
                if(print_err_msg) {
                    printf("%s %d %s\n", info->sname, info->sline, msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type2->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                    
                    info->err_num++;
                    
                    return false;
                }
            }
            else {
                string left_type3 = make_type_name_string(left_type2);
                come_value.c_value = xsprintf("(%s)(long)%s", left_type3, come_value.c_value);
                come_value.type = clone left_type2;
                come_value.var = null;
                
                right_type2 = clone left_type2;
            }
        }
        else if(left_type2->mClass->mName === right_type2->mClass->mName && left_type2->mPointerNum == right_type2->mPointerNum) {
        }
        else if(left_type2->mClass->mName === "void" && left_type2->mPointerNum > 0 && left_type2->mClass->mName === right_type2->mClass->mName && (left_type2->mPointerNum != right_type2->mPointerNum || left_type2->mHeap != right_type2->mHeap)) {
        }
        else if(left_type2->mClass->mName === right_type2->mClass->mName && (left_type2->mPointerNum != right_type2->mPointerNum || left_type2->mHeap != right_type2->mHeap)) {
            printf("%s %d %s\n", info->sname, info->sline, msg);
            printf("left type class_name %s\n", left_type2->mClass->mName);
            printf("right type class_name %s\n", right_type2->mClass->mName);
            printf("left type pointernum %d\n", left_type2->mPointerNum);
            printf("right type pointernum %d\n", right_type->mPointerNum);
            printf("left type heap %d\n", left_type2->mHeap);
            printf("right type heap %d\n", right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type2->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                    
            info->err_num++;
            
            return false;
        }
        else if(left_no_solved_generics_type->mGenericsTypes.length() > 0) {
            if((left_no_solved_generics_type->mClass->mName === "void" && left_no_solved_generics_type->mPointerNum > 0 && right_no_solved_generics_type->mPointerNum > 0) || (right_no_solved_generics_type->mClass->mName === "void" && right_no_solved_generics_type->mPointerNum > 0 && left_no_solved_generics_type->mPointerNum > 0)) 
            {
            }
            else {
                if(left_no_solved_generics_type->mGenericsTypes.length() != right_no_solved_generics_type->mGenericsTypes.length()) 
                {
                    if(print_err_msg) {
                        printf("%s %d %s\n", info->sname, info->sline, msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type2->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                                
                        info->err_num++;
                        
                        return false;
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
    else if(strlen(left_type2->mClass->mName) >= strlen("tuple") 
        && memcmp(left_type2->mClass->mName, "tuple", strlen("tuple")) == 0
        && !(strlen(right_type->mClass->mName) >= strlen("tuple") 
        && memcmp(right_type->mClass->mName, "tuple", strlen("tuple")) == 0)
        && (right_type->mClass->mName !== "void" && right_type->mPointerNum >= 1))
    {
        if(print_err_msg) {
            printf("%s %d %s\n", info->sname, info->sline, msg);
            printf("left type is tuple, right type is none tuple\n");
                    
            info->err_num++;
            
            return false;
        }
    } 
    else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type2->mClass->mNumber && left_type2->mPointerNum == 0) {
        if(pointer_massive) {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type2->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                        
                info->err_num++;
                
                return false;
            }
        }
        else {
            string left_type3 = make_type_name_string(left_type2);
            come_value.c_value = xsprintf("(%s)%s", left_type3, come_value.c_value);
            come_value.type = clone left_type2;
            come_value.var = null;
            
            right_type2 = clone left_type2;
        }
    }
    else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type2->mClass->mFloat && left_type2->mPointerNum == 0) {
        if(pointer_massive) {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n", left_no_solved_generics_type->mGenericsTypes.length(), left_no_solved_generics_type->mClass->mName, left_type2->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n", right_no_solved_generics_type->mGenericsTypes.length(), right_no_solved_generics_type->mClass->mName, right_type2->mClass->mName);
                        
                info->err_num++;
                
                return false;
            }
        }
        else {
            string left_type3 = make_type_name_string(left_type2);
            come_value.c_value = xsprintf("(%s)(long)%s", left_type3, come_value.c_value);
            come_value.type = clone left_type2;
            come_value.var = null;
            
            right_type2 = clone left_type2;
        }
    }
    else if(left_type2->mHeap && !right_type2->mHeap && left_type2->mPointerNum > 0 && right_type2->mPointerNum > 0 && right_type2->mClass->mName !== "void" && !info.in_generics_fun && !left_type2->mMultipleTypes && !right_type->mMultipleTypes)
    {
        printf("%s %d %s\n", info->sname, info->sline, msg);
        printf("left type is %s pointer num %d heap %d\n", left_type2->mClass->mName, left_type2->mPointerNum, left_type2->mHeap);
        printf("right type is %s pointer num %d heap %d\n", right_type2->mClass->mName, right_type2->mPointerNum, right_type2->mHeap);
                
        info->err_num++;
        
        return false;
    }
    else if(parent_class && left_type2->mPointerNum == 1 && right_type->mPointerNum == 1) {
        come_value.c_value = xsprintf("(struct %s*)%s", left_type2->mClass->mName, come_value.c_value);
        come_value.type = clone left_type2;
        come_value.var = null;
        
        right_type2 = clone left_type2;
    }
    else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type2->mClass->mNumber && left_type2->mPointerNum == 0) {
        if(pointer_massive) {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                        
                info->err_num++;
                
                return false;
            }
        }
        else {
            string left_type3 = make_type_name_string(left_type2);
            come_value.c_value = xsprintf("(%s)%s", left_type3, come_value.c_value);
            come_value.type = clone left_type2;
            come_value.var = null;
            
            right_type2 = clone left_type2;
        }
    }
    else if(right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type2->mClass->mFloat && left_type2->mPointerNum == 0) {
        if(pointer_massive) {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                        
                info->err_num++;
                
                return false;
            }
        }
        else {
            string left_type3 = make_type_name_string(left_type2);
            come_value.c_value = xsprintf("(%s)(long)%s", left_type3, come_value.c_value);
            come_value.type = clone left_type2;
            come_value.var = null;
            
            right_type2 = clone left_type2;
        }
    }
    else if(left_type2->mClass->mName === right_type2->mClass->mName && left_type2->mPointerNum > 0 && right_type2->mPointerNum > 0 && !right_type2->mAllocaValue)
    {
        if(left_type2->mHeap && !right_type2->mHeap) {
            printf("%s %d %s\n", info->sname, info->sline, msg);
            printf("left type is %s pointer num %d heap %d\n", left_type2->mClass->mName, left_type2->mPointerNum, left_type2->mHeap);
            printf("right type is %s pointer num %d heap %d\n", right_type2->mClass->mName, right_type2->mPointerNum, right_type2->mHeap);
                    
            info->err_num++;
            
            return false;
        }
    }
    else if(check_no_pointer) {
        if(left_type2->mPointerNum > 0) {
            if(right_type2->mPointerNum > 0) {
                if(left_type2->mClass->mName === "void" || right_type2->mClass->mName === "void") {
                }
                else if(left_type2->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
                }
                else if(left_type2->mClass->mName !== right_type2->mClass->mName) {
                    if(print_err_msg) {
                        printf("%s %d %s\n", info->sname, info->sline, msg);
                        printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                        printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                        info->err_num++;
                        return false;
                    }
                    return false;
                }
            }
            else if(right_type->mPointerNum == 0) {
            }
            else {
                if(print_err_msg) {
                    printf("%s %d %s\n", info->sname, info->sline, msg);
                    printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                    info->err_num++;
                    return false;
                }
                
                return false;
            }
        }
        else if(left_type2->mPointerNum == 0 && right_type2->mPointerNum > 0) {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                info->err_num++;
                return false;
            }
            return false;
        }
        else if(left_type2->mPointerNum > 0 && right_type2->mPointerNum == 0 && right_type2->mClass->mName === "lambda" && left_type2->mClass->mName === "lambda") {
        }
        else if(left_type2->mClass->mName !== right_type2->mClass->mName) {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                info->err_num++;
                return false;
            }
            return false;
        }
    }
    else if(left_type2->mClass.mName === "char" && left_type2->mPointerNum == 1) {
        if(right_type2->mClass.mName === "char" && right_type2->mPointerNum == 1) {
        }
        else if(left_type2->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type2->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(right_type2->mClass->mName === "lambda") {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                info->err_num++;
                return false;
            }
            
            return false;
        }
        else if(right_type2->mClass->mName === "void" && right_type2->mPointerNum > 0) {
        }
        else if(right_type2->mClass->mName === "void") {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                info->err_num++;
                return false;
            }
            return false;
        }
        else if(left_type2->mClass->mName !== right_type2->mClass->mName && !(left_type2->mPointerNum > 0 && right_type2->mPointerNum == 0)) {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                info->err_num++;
                return false;
            }
            return false;
        }
    }
    else if(left_type2->mClass.mName === "void" && left_type2->mPointerNum == 1) {
        if(right_type2->mClass.mName === "void" && right_type2->mPointerNum == 1) {
        }
        else if(left_type2->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type2->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(right_type2->mClass->mName === "lambda") {
        }
        else if(right_type2->mClass->mName === "void" && right_type2->mPointerNum > 0) {
        }
        else if(right_type2->mClass->mName === "void") {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                info->err_num++;
                return false;
            }
            return false;
        }
        else if(right_type2->mPointerNum == 0) {
            if(pointer_massive) {
                if(print_err_msg) {
                    printf("%s %d %s\n", info->sname, info->sline, msg);
                    printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                    info->err_num++;
                    return false;
                }
            }
            else {
                string tmp = xsprintf("/*a*/(void*)%s", come_value.c_value);
                come_value.c_value = clone tmp;
                come_value.type = clone left_type2;
                come_value.var = null;
                
                right_type2 = clone left_type2;
            }
        }
    }
    else if(left_type2->mPointerNum > 0 || (left_type2->mPointerNum == 0 && left_type2->mClass->mStruct)) {
        if(right_type2->mPointerNum > 0 || (right_type2->mPointerNum == 0 && right_type2->mClass->mStruct)) {
            if(left_type2->mClass->mName === "void" || right_type2->mClass->mName === "void") {
            }
            else if(left_type2->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
            }
            else if(left_type2->mClass->mName !== right_type2->mClass->mName) {
                if(print_err_msg) {
                    printf("%s %d %s\n", info->sname, info->sline, msg);
                    printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                    info->err_num++;
                    return false;
                }
                return false;
            }
            else if(left_type2->mPointerNum !== right_type2->mPointerNum) {
                printf("%s %d: warning invalid pointer number\n", info->sname, info->sline);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
            }
            else if(right_type2->mArrayNum.length() > 0) {
                printf("%s %d: warning invalid pointer number\n", info->sname, info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n", left_type2->mClass->mName, left_type2->mPointerNum, left_type2->mArrayNum.length());
                printf("right type is %s pointer num %d array dimetion num %d\n", right_type2->mClass->mName, right_type2->mPointerNum, right_type2->mArrayNum.length());
            }
        }
        else if(left_type2->mClass->mName === "void" || right_type2->mClass->mName === "void") {
        }
        else if(left_type2->mClass->mName === "va_list" || right_type2->mClass->mName === "va_list") {
        }
        else if(left_type2->mClass->mName === "__builtin_va_list" || right_type2->mClass->mName === "__builtin_va_list") {
        }
        else if(left_type2->mClass->mName === "lambda" && right_type2->mClass->mName === "lambda") {
        }
        else if(left_type2->mPointerNum > 0 && right_type2->mPointerNum == 0 && right_type2->mClass->mName === "lambda" && left_type2->mClass->mName === "lambda") {
            if(print_err_msg) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                info->err_num++;
                return false;
            }
            
            return false;
        }
        else if(left_type2->mPointerNum > 0 && !(right_type2->mClass->mName === "lambda" && left_type2->mClass->mName === "lambda") && right_type2->mPointerNum == 0) {
            string tmp = xsprintf("/*b*/(void*)%s", come_value.c_value);
            come_value.c_value = clone tmp;
            come_value.type = clone left_type2;
            return true;
        }
        
        if(left_type2->mGenericsTypes.length() > 0) {
            if(left_type2->mGenericsTypes.length() != right_type2->mGenericsTypes.length()) {
                printf("%s %d %s\n", info->sname, info->sline, msg);
                printf("left type is %s pointer num %d\n", left_type2->mClass->mName, left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n", right_type2->mClass->mName, right_type2->mPointerNum);
                
                info->err_num++;
                return false;
            }
            for(int i=0; i<left_type2->mGenericsTypes.length(); i++) {
                check_assign_type(msg, left_type2->mGenericsTypes[i], right_type2->mGenericsTypes[i], come_value, check_no_pointer:false);
            }
        }
    }
    
    return true;
}

void cast_type(sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info)
{
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
        
        skip_pointer_attribute();
        
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
    
    string attribute = parse_struct_attribute();
    if(attribute !== "") {
        if(result_type->mAttribute) {
            result_type->mAttribute = result_type->mAttribute + " " + attribute;
        }
        else {
            result_type->mAttribute = attribute;
        }
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
        
        if((word === "__attribute" || word === "__attribute__") && *info->p == '(') {
            int nest = 0;
            while(1) {
                if(*info->p == '(') {
                    info->p++;
                    skip_spaces_and_lf();
                    nest++;
                }
                else if(*info->p == ')') {
                    info->p++
                    skip_spaces_and_lf();
                    
                    nest--;
                    if(nest == 0) {
                        break;
                    }
                }
                else if(*info->p == '\0') {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(word === "const" || word === "__restrict" || word === "restrict" || word === "__user" || word === "volatile" || word === "_Nonnull" || word === "_Nullable" || word === "__nonnull" || word === "_Null_unspecified" || word === "__user" || word === "_Addr" || word === "__noreturn" || word === "_noreturn" || word === "_Noreturn") {
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
    bool uniq_ = false;
    bool tuple_ = false;
    bool immutable_ = false;
    
    sNode*% alignas_ = null;
    
    bool anonymous_type = false;
    bool anonymous_name = false;
    bool atomic_ = false;
    bool object_interface = false;
    while(true) {
        if(type_name === "object" && *info->p == ':') {
            info->p ++;
            skip_spaces_and_lf();
            
            skip_pointer_attribute();
            
            object_interface = true;
            
            type_name = parse_word();
        }
        else if(type_name === "_Atomic") {
            expected_next_character('(');
            type_name = parse_word();
            atomic_ = true;
        }
        else if(type_name === "__extension__") {
            type_name = parse_word();
        }
        else if(type_name === "__attribute__") {
            if(*info->p == '(') {
                int brace_num = 0;
                while(*info->p) {
                    if(*info->p == '(') {
                        info->p++;
                        brace_num++;
                    }
                    else if(*info->p == ')') {
                        info->p++;
                        brace_num--;
    
                        if(brace_num == 0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
    
            skip_spaces_and_lf();
            
            type_name = parse_word();
        }
        else if(type_name === "__declspec") {
            if(*info->p == '(') {
                int brace_num = 0;
                while(*info->p) {
                    if(*info->p == '(') {
                        info->p++;
                        brace_num++;
                    }
                    else if(*info->p == ')') {
                        info->p++;
                        brace_num--;
    
                        if(brace_num == 0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
    
            skip_spaces_and_lf();
            
            type_name = parse_word();
        }
        else if(type_name === "_Noreturn") {
            type_name = parse_word();
        }
        else if(type_name === "__noreturn") {
            type_name = parse_word();
        }
        else if(type_name === "_Nullable") {
            type_name = parse_word();
        }
        else if(type_name === "_noreturn") {
            type_name = parse_word();
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
        else if(type_name === "immutable") {
            immutable_ = true;
            
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
        else if(type_name === "record") {
            record_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "exception") {
            exception_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "extern") {
            extern_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "inline" || type_name === "__inline" || type_name === "__inline__" || type_name === "__always_inline" || type_name === "__forceinline") 
        {
            inline_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "volatile") {
            volatile_ = true;
            
            type_name = parse_word();
        }
        else if(type_name === "struct") {
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
                (void)parse_struct_attribute();
                
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
                    
                    (void)parse_struct_attribute();
                    
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
                        
                        sNode*% node = parse_struct(type_name, s"", info);
                        
                        node_compile(node).elif {
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
        else if(type_name === "long") {
            /// backtrace ///
            {
                char* p = info.p;
                int sline = info.sline;
                
                if(!(xisalpha(*info->p) || *info->p == '_')) {
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
                    else if(type_name === "signed") {
                        type_name = parse_word();
                        
                        if(type_name === "int") {
                            long_ = true;
                            unsigned_ = false;
                            break;
                        }
                    }
                    else if(type_name === "long") {
                        p = info.p;
                        sline = info.sline;
                        if(xisalpha(*info->p) || *info->p == '_') {
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
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                expected_next_character(':');
            }
            
            type_name = parse_word();
            
            parse_multiple_type = true;
            tuple_ = true;
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
    
    string attribute = parse_struct_attribute();
    
    skip_pointer_attribute();
    
    int pointer_num = 0;
    bool heap = false;
    bool refference = false;
    bool no_refference = false;
    bool channel = false;
    bool any_class = false;
    bool vtable = false;
    bool deffer_ = false;
    while(1) {
        if(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf();
            
            skip_pointer_attribute();
            
            pointer_num++;
        }
        else if(*info->p == '~') {
            info->p++;
            skip_spaces_and_lf();
            
            skip_pointer_attribute();
            
            deffer_ = true;
        }
        else if(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf();
            
            heap = true;
        }
        else if(gComePthread && *info->p == '@') {
            info->p++;
            skip_spaces_and_lf();
            
            channel = true;
        }
        else {
            break;
        }
    }
    
    skip_pointer_attribute();
    
    string tuple_name = null;
    if(*info->p == ':' && *(info->p+1) != ':' && tuple_) {
        info->p++;
        skip_spaces_and_lf();
        
        tuple_name = parse_word();
    }
    
    if(atomic_) {
        expected_next_character(')');
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
            
            sNode*% node = parse_struct(type_name, s"", info);
            
            node_compile(node).elif {
                err_msg(info, "parse_struct is failed");
                return ((sType*%)null, (string)null, false);
            }
            
            int pointer_num = 0;
            while(*info->p == '*') {
                info->p++
                skip_spaces_and_lf(info);
                
                skip_pointer_attribute();
                
                pointer_num++;
            }
            
            type = new sType(string(type_name));
            
            type->mPointerNum = pointer_num;
        }
        else if(enum_) {
            if(type_name === "") {
                type_name = xsprintf("anonymous_typeY%d", ++anonymous_num);
            }
            
            sNode*% node = parse_enum(type_name, info);
            
            if(!info.no_output_err) {
                node_compile(node).elif {
                    printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                    return ((sType*%)null, (string)null, false);
                }
            }
            
            type = new sType(string(type_name));
        }
        else if(union_) {
            if(type_name === "") {
                type_name = xsprintf("anonymous_typeZ%d", ++anonymous_num);
            }
            
            sNode*% node = parse_union(type_name, info);
            
//            if(!info.no_output_err) {
                node_compile(node).elif {
                    printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                    return ((sType*%)null, (string)null, false);
                }
//            }
            
            int pointer_num = 0;
            while(*info->p == '*') {
                info->p++
                skip_spaces_and_lf(info);
                
                skip_pointer_attribute();
                
                pointer_num++;
            }
            
            type = new sType(string(type_name));
            
            type->mPointerNum = pointer_num;
        }
        else {
            err_msg(info, "unexpected { character");
            return ((sType*%)null, (string)null, false);
        }
        
        string attribute = parse_struct_attribute();
        
        if(attribute !== "") {
            type->mAttribute = attribute;
        }
        
        if(parse_variable_name) {
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
        
            string attribute2 = parse_struct_attribute();
            
            if(attribute !== "" && attribute2 !== "") {
                type->mAttribute = attribute + " " + attribute2;
            }
            else if(attribute2 !== "") {
                type->mAttribute = attribute2;
            }
        }
    }
    else if(lambda_flag) {
        sType*% result_type;
        if(info.types[type_name]??) {
            result_type = clone info.types[type_name]??;
            result_type->mClass = info.classes[result_type->mClass->mName]??;
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
            result_type = new sType(string(type_name));
        }
        
        result_type->mAtomic = result_type->mAtomic || atomic_;
        result_type->mConstant = result_type->mConstant || constant;
        result_type->mImmutable = result_type->mImmutable || immutable_;
        result_type->mAlignas = alignas_;
        result_type->mRegister = register_;
        result_type->mUnsigned = result_type->mUnsigned || unsigned_;
        result_type->mVolatile = volatile_;
        result_type->mRecord = result_type->mRecord || record_;
        result_type->mUniq = result_type->mUniq || uniq_;
        result_type->mStatic = (result_type->mStatic || static_) && !result_type->mUniq;
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
        result_type->mDefferRightValue = result_type->mDefferRightValue || deffer_;
        
        var_name = parse_word();
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        type = new sType(s"lambda");
        
        type->mResultType = result_type;
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
            skip_pointer_attribute();
            function_pointer_num++;
        }
        
        skip_pointer_attribute();
        
        sType*% result_type;
        if(info.types[type_name]??) {
            result_type = clone info.types[type_name]??;
            result_type->mClass = info.classes[result_type->mClass->mName]??;
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
            result_type = new sType(string(type_name));
        }
        
        result_type->mConstant = result_type->mConstant || constant;
        result_type->mImmutable = result_type->mImmutable || immutable_;
        result_type->mAtomic = result_type->mAtomic || atomic_;
        result_type->mAlignas = alignas_;
        result_type->mRegister = register_;
        result_type->mUnsigned = result_type->mUnsigned || unsigned_;
        result_type->mVolatile = volatile_;
        result_type->mUniq = result_type->mUniq || uniq_;
        result_type->mStatic = (result_type->mStatic || static_) && !result_type->mUniq;
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
        result_type->mDefferRightValue = result_type->mDefferRightValue || deffer_;
        
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
        int function_pointer_array_num = 0;
        if(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            int n = 0 ;
            while(xisdigit(*info->p)) {
                n = n * 10 + *info->p - '0';
                info->p++;
            }
            skip_spaces_and_lf();
            function_pointer_array_num = n;
            
            if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf();
                function_pointer_array = true;
            }
        }
        expected_next_character(')');
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        type = new sType(s"lambda");
        
        type->mResultType = clone result_type;
        type->mParamTypes = param_types;
        type->mParamNames = param_names;
        type->mVarArgs = var_args;
        type->mExtern = extern_;
        if(function_pointer_array) {
            type->mLambdaArray = true;
            type->mLambdaArrayNum = function_pointer_array_num;
        }
        
        type->mFunctionPointerNum = function_pointer_num;
    }
    else if(type_name === "__typeof__" && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        sNode*% exp = expression();
        
        expected_next_character(')');
        
        node_compile(exp).elif {
            err_msg(info, "invalid __typeof__ expression");
            return ((sType*%)null,(string)null,false);
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        type = clone come_value.type;
        
        string attribute = parse_struct_attribute();
        
        if(attribute !== "") {
            type->mAttribute = attribute;
        }

        if(parse_variable_name) {
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
        
            string attribute2 = parse_struct_attribute();
            
            if(attribute !== "" && attribute2 !== "") {
                type->mAttribute = attribute + " " + attribute2;
            }
            else if(attribute2 !== "") {
                type->mAttribute = attribute2;
            }
        }
    }
    else {
        if(info.types[type_name]??) {
            type = clone info.types[type_name]??;
            type->mTypedefOriginalPointerNum = type->mPointerNum;
            type->mClass = info.classes[type->mClass->mName]??;
            type.mOriginalTypeName = string(type_name);
            type.mOriginalTypeNamePointerNum = pointer_num;
            type.mOriginalTypeNameHeap = heap;
            
            type->mConstant = type->mConstant || constant;
            type->mImmutable = type->mImmutable || immutable_;
            type->mAtomic = type->mAtomic || atomic_;
            type->mAlignas = alignas_;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mUniq = type->mUniq || uniq_;
            type->mStatic = (type->mStatic || static_) && !type->mUniq;
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
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    type = new sType(xsprintf("generics_type%d", i));
                }
            }
            
            type->mConstant = type->mConstant || constant;
            type->mImmutable = type->mImmutable || immutable_;
            type->mAtomic = type->mAtomic || atomic_;
            type->mAlignas = alignas_;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mUniq = type->mUniq || uniq_;
            type->mStatic = (type->mStatic || static_) && !type->mUniq;
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
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
        }
        else if(info.method_generics_type_names.contained(type_name)) {
            for(int i=0; i<info.method_generics_type_names.length(); i++) {
                if(info.method_generics_type_names[i] === type_name) {
                    type = new sType(xsprintf("mgenerics_type%d", i));
                }
            }
            
            type->mConstant = type->mConstant || constant;
            type->mImmutable = type->mImmutable || immutable_;
            type->mAtomic = type->mAtomic || atomic_;
            type->mAlignas = alignas_;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mUniq = type->mUniq || uniq_;
            type->mStatic = (type->mStatic || static_) && !type->mUniq;
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
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
        }
        else if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            if(info.generics_classes[string(type_name)]?? == null)
            {
                return ((sType*%)null, (string)null, false);
            }
            
            type = new sType(string(type_name));
            
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
                    err_msg(info, "invalid generics type(%c)(%c)(%c)", *info->p, *(info->p+1), *(info->p+2));
                    return ((sType*%)null, (string)null, false);
                }
            }
            
            if(exception_) {
            }
            else if(is_contained_generics_class(type, info)) {
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
            type->mImmutable = type->mImmutable || immutable_;
            type->mAtomic = type->mAtomic || atomic_;
            type->mAlignas = alignas_;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mUniq = type->mUniq || uniq_;
            type->mStatic = (type->mStatic || static_) && !type->mUniq;
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
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
            
            type_name = type->mClass->mName;
        }
        else {
            if(struct_) {
                sClass* klass = info.classes[type_name]??;
                
                if(klass == null && *info->p != '<') {
                    info.classes.insert(string(type_name), new sClass(name:string(type_name), struct_:true));
                }
            }
            if(union_) {
                sClass* klass = info.classes[type_name]??;
                
                if(klass == null && *info->p != '<') {
                    info.classes.insert(string(type_name), new sClass(name:string(type_name), union_:true));
                }
            }
            
            type = new sType(string(type_name));
            
            type->mConstant = type->mConstant || constant;
            type->mImmutable = type->mImmutable || immutable_;
            type->mAtomic = type->mAtomic || atomic_;
            type->mAlignas = alignas_;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mUniq = type->mUniq || uniq_;
            type->mStatic = (type->mStatic || static_) && !type->mUniq;
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
            type->mDefferRightValue = type->mDefferRightValue || deffer_;
            type->mTupleName = tuple_name;
        }
        
        skip_pointer_attribute();
        
        while(1) {
            if(*info->p == '*') {
                info->p++;
                skip_spaces_and_lf();
                
                skip_pointer_attribute();
                
                type->mPointerNum++;
                if(type->mNoSolvedGenericsType) {
                    type->mNoSolvedGenericsType.mPointerNum++;
                }
            }
            else if(*info->p == '%') {
                info->p++;
                skip_spaces_and_lf();
                
                type->mHeap = true;
                if(type->mNoSolvedGenericsType) {
                    type->mNoSolvedGenericsType.mHeap = true;
                }
            }
            else if(*info->p == '~') {
                info->p++;
                skip_spaces_and_lf();
                
                skip_pointer_attribute();
                
                type->mDefferRightValue = true;
                if(type->mNoSolvedGenericsType) {
                    type->mNoSolvedGenericsType.mDefferRightValue = true;
                }
            }
            else if(*info->p == '&') {
                info->p++;
                skip_spaces_and_lf();
                
                type->mNoHeap = true;
                
                if(type->mNoSolvedGenericsType) {
                    type->mNoSolvedGenericsType.mHeap = false;
                }
            }
            else if(*info->p == '?') {
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
            else if(*info->p == '`') {
                info->p++;
                skip_spaces_and_lf();
                
                type->mNoCallingDestructor = true;
            }
            else {
                break;
            }
        }
        
        skip_pointer_attribute();
        
        while(1) {
            if(*info->p == '*') {
                info->p++;
                skip_spaces_and_lf();
            
                skip_pointer_attribute();
                
                type->mPointerNum++;
                
                if(type->mNoSolvedGenericsType) {
                    type->mNoSolvedGenericsType.mPointerNum++;
                }
            }
            else if(*info->p == '%') {
                info->p++;
                skip_spaces_and_lf();
                
                type->mHeap = true;
                if(type->mNoSolvedGenericsType) {
                    type->mNoSolvedGenericsType.mHeap = true;
                }
            }
            else if(*info->p == '~') {
                info->p++;
                skip_spaces_and_lf();
                
                skip_pointer_attribute();
                
                type->mDefferRightValue = true;
                if(type->mNoSolvedGenericsType) {
                    type->mNoSolvedGenericsType.mDefferRightValue = true;
                }
            }
            else if(gComePthread && *info->p == '@') {
                info->p++;
                skip_spaces_and_lf();
                
                type->mChannel = true;
                if(type->mNoSolvedGenericsType) {
                    type->mNoSolvedGenericsType.mChannel = true;
                }
            }
            else {
                break;
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
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            int num_tuples = types.length();
            
            type = new sType(xsprintf("tuple%d", num_tuples));
            type->mPointerNum++;
            type->mHeap = true;
            
            foreach(it, types) {
                type->mGenericsTypes.push_back((clone it));
            }
            
            while(1) {
                if(*info->p == '*') {
                    info->p++;
                    skip_spaces_and_lf();
                
                    skip_pointer_attribute();
                    
                    type->mPointerNum++;
                    
                    if(type->mNoSolvedGenericsType) {
                        type->mNoSolvedGenericsType.mPointerNum++;
                    }
                }
                else if(*info->p == '%') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    type->mHeap = true;
                    if(type->mNoSolvedGenericsType) {
                        type->mNoSolvedGenericsType.mHeap = true;
                    }
                }
                else if(gComePthread && *info->p == '@') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    type->mChannel = true;
                    if(type->mNoSolvedGenericsType) {
                        type->mNoSolvedGenericsType.mChannel = true;
                    }
                }
                else {
                    break;
                }
            }
            
            if(exception_) {
            }
            else if(is_contained_generics_class(type, info)) {
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
            
            type_name = type->mClass->mName;
        }
        
        string attribute = parse_struct_attribute();
        
        if(attribute !== "") {
            type->mAttribute = attribute;
        }

        if(parse_variable_name) {
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
        
            string attribute2 = parse_struct_attribute();
            
            if(attribute !== "" && attribute2 !== "") {
                type->mAttribute = attribute + " " + attribute2;
            }
            else if(attribute2 !== "") {
                type->mAttribute = attribute2;
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
    var asm_name,attribute2 = parse_attribute();
    
    if(attribute2 !== "") {
        type->mAttribute = attribute2;
    }
    
    type->mAsmName = asm_name;
    
    parse_sharp();
    
    if(type->mChannel) {
        sType*% type_before = clone type;
        type = new sType(s"int");
        type->mArrayNum = [ create_int_node(2@value, info) ];
        type->mChannelType = type_before;
        type->mChannel = true;
    }
    else if(type->mException) {
        sType*% type2 = new sType(s"tuple2");
        type2->mGenericsTypes[0] = new sType(s"generics_type0");
        type2->mGenericsTypes[1] = new sType(s"generics_type1");
        type2->mPointerNum = 1;
        type2->mHeap = true;
        
        sType*% type3 = new sType(s"tuple2");
        type3->mGenericsTypes[0] = type;
        type3->mGenericsTypes[1] = new sType(s"bool");
        
        sType*% type4 = solve_generics(type2,  type3, info);
        
        type4->mException = true;
        type4->mUniq = type->mUniq;
        
        if(type->mClass->mGenerics || type->mClass->mMethodGenerics) {
            type4->mExceptionGenericsType = true;
        }
        
        return (type4, var_name, true);
    }
    
    if(attribute !== "") {
        type->mAttribute = attribute;
    }
    
    return (type, var_name, true);
}
