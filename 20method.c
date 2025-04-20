#include "common.h"

string,sGenericsFun* make_generics_function(sType* type, string fun_name, sInfo* info, bool array_equal_pointer=true)
{
    string none_generics_name = get_none_generics_name(type.mClass.mName);
    string fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info, array_equal_pointer);
    string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
    
    sType*% no_solved_type = clone type;
    
    sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null);
    
    if(generics_fun) {
        sType*% type2 = no_solved_type;
        
        sType*% type_before = clone type;

        fun_name2 = create_method_name(type2, false@no_pointer_name, fun_name, info, array_equal_pointer);
        
        var name, err = create_generics_fun(string(fun_name2), generics_fun, type2, info);
        
        if(!err) {
            err_msg(info, "%s not found", fun_name3);
            return (string(""), null);
        }
        
        type = type_before;
    }
    
    return (clone fun_name2, generics_fun);
}

string,sGenericsFun* make_method_generics_function(string fun_name, list<sType*%>*% method_generics_types, sInfo* info)
{
    static int num_method_generics = 0;
    string fun_name3 = xsprintf("%s_method_generics%d", fun_name, num_method_generics++);
    
    list<sType*%>*% method_generics_types_before = info.method_generics_types;
    info->method_generics_types= method_generics_types;
    
    sGenericsFun* generics_fun = info.generics_funcs.at(fun_name, null);
    
    if(generics_fun) {
        if(!create_method_generics_fun(string(fun_name3), generics_fun, info)) {
            err_msg(info, "%s not found", fun_name3);
            return (string(""), null);
        }
    }
    
    info.method_generics_types = method_generics_types_before;
    
    return (clone fun_name3, generics_fun);
}

bool compile_method_block(buffer* method_block, list<CVALUE*%>*% come_params, sFun* fun, char* fun_name, int method_block_sline, sInfo* info, bool no_create_current_stack=false) 
{
    sNode*% current_stack_frame_node = new sCurrentNode(info) implements sNode;
    
    node_compile(current_stack_frame_node).elif {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    come_params.push_back(come_value);
    
    buffer*% method_block2 = new buffer();
    sType*% method_block_type = clone fun.mParamTypes[-1];
    
    string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
    
    method_block_type.mParamTypes[0].mClass = info.classes[class_name]??;
    sClass* current_stack_frame_struct = info.current_stack_frame_struct;
    info->current_stack_frame_struct = info.classes[class_name]??;
    
    info->num_method_block++;
    
    if(method_block_type.mClass.mName !== "lambda") {
        err_msg(info, "This function does not have method block(%s)", fun_name);
        return true;
    }
    
    sType*% result_type = clone method_block_type->mResultType;
    result_type->mStatic = false;
    sType*% result_type2 = solve_generics(result_type, info->generics_type, info);
    list<sType*%>* param_types = method_block_type->mParamTypes;
    list<string>* param_names = method_block_type->mParamNames;
    
    buffer*% all_alhabet_sname = new buffer();
    {
        char* p = info->sname;
        while(*p) {
            if(xisalnum(*p)) {
                all_alhabet_sname.append_char(*p++);
            }
            else {
                p++;
            }
        }
    }
    
    int num_method_block = info->num_method_block;
    
    method_block2.append_format("%s method_block%d_%s(", make_come_type_name_string(result_type2), num_method_block, all_alhabet_sname.to_string());
    
    int i = 0;
    foreach(it, param_types) {
        sType*% param_type = dummy_heap it;
        
        if(i == 0) {
            string param_name = xsprintf("parent");
            
            method_block2.append_format("%s", make_define_var(param_type, param_name, come_type:true));
        }
        else if(i == 1) {
            string param_name = xsprintf("it");
            
            sType*% param_type2 = solve_generics(param_type, info->generics_type, info);
            
            method_block2.append_format("%s", make_define_var(param_type2, param_name, original_type_name:true, come_type:true));
        }
        else {
            string param_name = xsprintf("it%d", i);
            
            sType*% param_type2 = solve_generics(param_type, info->generics_type, info);
            
            method_block2.append_format("%s", make_define_var(param_type2, param_name, original_type_name:true, come_type:true));
        }
        
        if(i != param_types.length() - 1) {
            method_block2.append_str(",");
        }
        
        i++;
    }
    method_block2.append_str(")\n");
    
    method_block2.append_str(method_block.to_string());
    
    buffer*% source3 = info.source;
    char* p = info.p;
    char* head = info.head;
    int sline = info.sline;
    
    info.source = method_block2;
    info.p = info.source.buf;
    info.head = info.source.buf;
    info.sline = method_block_sline;
   
    sNode*% node = parse_function(info);
    
    bool in_method_block = info.in_method_block;
    info.in_method_block = true;
    node_compile(node).elif {
        return false;
    }
    info.in_method_block = in_method_block;
    
    char*% method_block_name = xsprintf("method_block%d_%s", num_method_block, all_alhabet_sname.to_string());
    
    CVALUE*% come_value2 = new CVALUE();
    
    sFun* fun2 = info.funcs.at(string(method_block_name), null);
    
    if(fun2 == null) {
        err_msg(info, "method block function not found(%s)", method_block_name);
        return true;
    }
    
    sType* method_block_type2 = fun2.mLambdaType;
    
    come_value2.c_value = xsprintf("(void*)%s", method_block_name);
    come_value2.type = clone method_block_type2;
    come_value2.var = null;
    
    come_params.push_back(come_value2);
    
    info.source = source3;
    info.p = p;
    info.head = head;
    info.sline = sline;
    
    info->current_stack_frame_struct = current_stack_frame_struct;
    info->come_method_block_function_result_type = clone info->function_result_type;
    
    return true;
}

string, sFun*,sGenericsFun* get_method(char* fun_name, sType*% obj_type, sInfo* info) 
{
    string generics_fun_name = null;
    sFun* fun = null;
    sGenericsFun* generics_fun = null;
    
    if(fun_name === "super") {
        fun_name = create_non_method_name(obj_type, false@no_pointer_name, info.come_fun.mName, info);
        
        sClass* klass = obj_type->mClass;
        while(info.classes[klass->mParentClassName]??) {
            klass = info.classes[klass->mParentClassName]??;
            generics_fun_name = create_method_name_using_class(klass, false@no_pointer_name, fun_name, info);
            
            fun = info.funcs.at(string(generics_fun_name), null);
            
            if(fun) {
                break;
            }
        }
    }
    else {
        if(obj_type && obj_type.mNoSolvedGenericsType && obj_type.mNoSolvedGenericsType.mGenericsTypes.length() > 0) {
            var name, gfun = make_generics_function(obj_type, string(fun_name), info);
            generics_fun_name = name;
            generics_fun = gfun;
        }
        else if(info.method_generics_types.length() > 0) {
            string none_generics_name = get_none_generics_name(obj_type.mClass.mName);
            string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
            var name, gfun = make_method_generics_function(string(fun_name3), info.method_generics_types, info);
            generics_fun_name = name;
            generics_fun = gfun;
        }
        else {
            var name, gfun = make_generics_function(obj_type, string(fun_name), info);
            generics_fun_name = name;
            generics_fun = gfun;
        }
        
        for(int i=FUN_VERSION_MAX; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", generics_fun_name, i);
        
            fun = info.funcs[string(new_fun_name)]??;
            
            if(fun != null) {
                generics_fun_name = string(new_fun_name);
                break;
            }
        }
        
        if(fun == null) {
            sType* obj_array_type = obj_type->mOriginalLoadVarType;
            
            if(obj_array_type && obj_array_type.mArrayNum.length() > 0) {
                string array_method_name = create_method_name(obj_array_type, false@no_pointer_name, fun_name, info, false@array_equal_pointer);
                
                fun = info.funcs.at(string(array_method_name), null);
                
                if(fun) {
                    generics_fun_name = string(array_method_name);
                }
                else {
                    fun = info.funcs.at(string(generics_fun_name), null);
                    
                    if(fun == null) {
                        generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
                        fun = info.funcs.at(string(generics_fun_name), null);
                        if(fun == null) {
                            return ((string)null, (sFun*)null, (sGenericsFun*)null);
                        }
                    }
                }
            }
            else {
                fun = info.funcs.at(string(generics_fun_name), null);
            
                if(fun == null) {
                    generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
                    
                    fun = info.funcs.at(string(generics_fun_name), null);
                    
                    if(fun == null) {
                        sClass* klass = obj_type->mClass;
                        while(info.classes[klass->mParentClassName]??) {
                            klass = info.classes[klass->mParentClassName]??;
                            generics_fun_name = create_method_name_using_class(klass, false@no_pointer_name, fun_name, info);
                            
                            fun = info.funcs.at(string(generics_fun_name), null);
                            
                            if(fun) {
                                break;
                            }
                        }
                    }
                    
                    if(fun == null && fun_name === "to_string") {
                        var fun2, real_fun_name = create_to_string_automatically(obj_type, fun_name, info);
                        
                        fun = fun2;
                        generics_fun_name = real_fun_name;
                    }
                    if(fun == null && fun_name === "equals") {
                        var fun2, real_fun_name = create_equals_automatically(obj_type, fun_name, info);
                        
                        fun = info.funcs[real_fun_name];
                        generics_fun_name = real_fun_name;
                    }
                    if(fun == null) {
                        string original_obj_type_fun_name = create_method_name_original_obj_type(obj_type, false@no_pointer_name, string(fun_name), info);
                        fun = info.funcs.at(string(original_obj_type_fun_name), null);
                        
                        if(fun) {
                            generics_fun_name = original_obj_type_fun_name;
                        }
                    }
                    
                    if(fun == null) {
                        return (generics_fun_name, (sFun*)null, (sGenericsFun*)null);
                    }
                }
            }
        }
    }
    
    return (generics_fun_name, fun, generics_fun);
}


class sMethodCallNode extends sNodeBase
{
    new(char* fun_name,sNode*% obj, list<tup: string,sNode*%>*% params, buffer* method_block, int method_block_sline
        , list<sType*%>* method_generics_types, bool no_infference_method_generics, bool recursive, sInfo* info, bool no_err=false)
    {
        self.super();
        
        sNode*% self.obj = clone obj;
        string self.fun_name = string(fun_name);
        list<tup: string,sNode*%>*% self.params = clone params;
        buffer*% self.method_block = clone method_block;
        int self.method_block_sline = method_block_sline;
        list<sType*%>*% self.method_generics_types = clone method_generics_types;
        bool self.no_infference_method_generics = no_infference_method_generics;
        bool self.recursive = recursive;
        sFun* self.fun = null;
        bool self.no_err = no_err;
    }
    
    bool terminated()
    {
        if(self.method_block) {
            return true;
        }
        else {
            return false;
        }
    }
    
    string kind()
    {
        return string("sMethodCallNode");
    }
    
    bool compile(sInfo* info)
    {
        string fun_name = self.fun_name;
        list<tup: string,sNode*%>*% params = self.params;
        sNode*% obj = self.obj;
        buffer*% method_block = self.method_block;
        int method_block_sline = self.method_block_sline;
        list<sType*%>*% method_generics_types = self.method_generics_types;
        bool recursive = self.recursive;
        bool no_infference_method_generics = self.no_infference_method_generics;
        
        list<sType*%>*% method_generics_types = info->method_generics_types;
        info->method_generics_types = clone self.method_generics_types;
        
        node_compile(obj).elif {
            return false;
        }
        
        CVALUE*% obj_value = get_value_from_stack(-1, info);
        
        sType*% obj_type = clone obj_value.type;
        
        /// dirty works for list::map ///
        if(!no_infference_method_generics)
        {
            bool no_output_come_code = info->no_output_come_code;
            info->no_output_come_code = true;
            
            sType*% type = clone obj_type;
            
            string none_generics_name = get_none_generics_name(type.mClass.mName);
            string fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
            string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
            
            sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null);
            
            if(generics_fun) {
                bool method_generics = generics_fun.mMethodGenericsTypeNames.length() > 0;
                
                if(method_generics && info->method_generics_types.length() == 0) {
                    var name, gfun = make_generics_function(type, string(fun_name), info);
                    
                    string generics_fun_name = name;
                    
                    sFun* fun = info.funcs.at(generics_fun_name, null);
                    
                    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
                    if(method_block) {
                        bool no_output_come_code = info->no_output_come_code;
                        info->no_output_come_code = true;
                        if(!compile_method_block(method_block, come_params, fun, fun_name3, method_block_sline, info, true)) {
                            return false;
                        }
                        info->no_output_come_code = no_output_come_code;
                        CVALUE* method_block_node = come_params[-1];
                        
                        sType*% method_block_lambda_type = clone method_block_node.type;
                        sType*% method_block_result_type = clone info.come_method_block_function_result_type;
                        
                        sType* generics_fun_method_block_lambda_type = generics_fun.mParamTypes[-1];
                        sType* generics_fun_method_block_result_type = generics_fun_method_block_lambda_type.mResultType;
                        
                        if(generics_fun_method_block_result_type.mClass.mMethodGenerics) {
                            int method_generics_num = generics_fun_method_block_result_type.mClass.mMethodGenericsNum;
                            info.method_generics_types[method_generics_num] = clone method_block_result_type;
                        }
                        int n = 0;
                        foreach(it, generics_fun_method_block_lambda_type.mParamTypes) {
                            if(it.mClass.mMethodGenerics) {
                                int method_generics_num = it.mClass.mMethodGenericsNum;
                                info.method_generics_types[method_generics_num] = clone method_block_lambda_type.mParamTypes[n];
                            }
                            n++;
                        }
                        
                        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            
                        int i = 0;
                        foreach(it, params) {
                            var label, node = it;
                            
                            if(i == 0) {
                                come_params.push_back(obj_value);
                                i++;
                            }
                            else {
                                node_compile(node).elif {
                                    return false;
                                }
                                
                                CVALUE*% come_value = get_value_from_stack(-1, info);
                                come_value.type = solve_generics(come_value.type, info->generics_type, info);
                                come_params.push_back(come_value);
                            }
                        }
                        if(generics_fun.mResultType.mClass.mMethodGenerics) {
                            int method_generics_num = generics_fun.mResultType.mClass.mMethodGenericsNum;
                            
                            if(info->function_result_type) {
                                info.method_generics_types[method_generics_num] = clone info->function_result_type;
                            }
                        }
                        n = 0;
                        foreach(it, generics_fun.mParamTypes) {
                            if(it.mClass.mMethodGenerics) {
                                int method_generics_num = it.mClass.mMethodGenericsNum;
                                if(n < come_params.length()) {
                                    info.method_generics_types[method_generics_num] = clone come_params[n].type;
                                }
                            }
                            n++;
                        }
                    }
                    else {
                        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            
                        int i = 0;
                        foreach(it, params) {
                            var label, node = it;
                            
                            if(i == 0) {
                                come_params.push_back(obj_value);
                                i++;
                            }
                            else {
                                node_compile(node).elif {
                                    return false;
                                }
                                
                                CVALUE*% come_value = get_value_from_stack(-1, info);
                                come_value.type = solve_generics(come_value.type, info->generics_type, info);
                                come_params.push_back(come_value);
                            }
                        }
                        if(generics_fun.mResultType.mClass.mMethodGenerics) {
                            int method_generics_num = generics_fun.mResultType.mClass.mMethodGenericsNum;
                            
                            if(info->function_result_type) {
                                info.method_generics_types[method_generics_num] = clone info->function_result_type;
                            }
                        }
                        int n = 0;
                        foreach(it, generics_fun.mParamTypes) {
                            if(it.mClass.mMethodGenerics) {
                                int method_generics_num = it.mClass.mMethodGenericsNum;
                                if(n < come_params.length()) {
                                    info.method_generics_types[method_generics_num] = clone come_params[n].type;
                                }
                            }
                            n++;
                        }
                    }
                    
                    info.funcs.remove(generics_fun_name);
                }
            }
            info->no_output_come_code = no_output_come_code;
        }
        
        sClass* klass = obj_type.mClass;
        
        bool calling_dynamic_method = false;
        sType* lambda_type = null;
        foreach(it, klass.mFields) {
            var field_name, field_type = it;
            
            if(field_name === fun_name && field_type.mClass.mName === "lambda") {
                calling_dynamic_method = true;
                lambda_type = field_type;
                break;
            }
        }
        
        if(calling_dynamic_method) {
            sType*% result_type = clone lambda_type->mResultType;
            result_type->mStatic = false;
            
            if(obj_type->mImmutable) {
                if(!result_type->mImmutable) {
                    err_msg(info, "Immutable object can't call mutable method(%s)", fun_name);
                    return true;
                }
            }
            
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            
            int i = 0;
            foreach(it, params) {
                var label, node = it;
                
                if(i == 0) {
                    come_params.push_back(obj_value);
                    i++;
                }
                else {
                    node_compile(node).elif {
                        return false;
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    
                    come_value.type = solve_generics(come_value.type, info->generics_type, info);
                    
                    check_assign_type(s"\{fun_name} param num \{i} is assinged to", lambda_type.mParamTypes[i-1], come_value.type, come_value);
                    if(lambda_type.mParamTypes[i-1].mHeap && come_value.type.mHeap) 
                    {
                        std_move(lambda_type.mParamTypes[i-1], come_value.type, come_value, no_delete_from_right_value_objects:true);
                    }
                    
                    come_params.push_back(come_value);
                    
                    i++;
                }
            }
            
            buffer*% buf = new buffer();
            
            buf.append_format("%s->%s", obj_value.c_value, fun_name);
            buf.append_str("(");
            
            int j = 0;
            foreach(it, come_params) {
                if(j == 0) {
                    it.c_value = xsprintf("%s->_protocol_obj", it.c_value);
                }
                buf.append_str(it.c_value);
                
                if(j != come_params.length()-1) {
                    buf.append_str(",");
                }
                
                j++;
            }
            buf.append_str(")");
            
            CVALUE*% come_value2 = new CVALUE();
            
            come_value2.c_value = buf.to_string();
            
            sType*% result_type2 = solve_generics(result_type, info.generics_type, info);
            
            come_value2.type = clone result_type2;
            come_value2.type->mStatic = false;
            come_value2.type->mImmutable = false;
            come_value2.var = null;
            
            if(result_type2->mHeap) {
                append_object_to_right_values(come_value2, result_type2, info);
            }
            
            add_come_last_code(info, "%s", come_value2.c_value);
            
            info.stack.push_back(come_value2);
            
            delete info->method_generics_types;
            info->method_generics_types = method_generics_types;
            
            info.calling_fun = null;
        }
        else {
            var generics_fun_name, fun, generics_fun = get_method(fun_name, obj_type, info);
            
            if(fun == null) {
                err_msg(info, "function not found(%s) at method(%s)(ZY)", generics_fun_name, info.come_fun.mName);
                return true;
            }
            
            if(fun.mParamTypes.length() == 0) {
                err_msg(info, "Method require function parametor");
                return true;
            }
            
            sType*% result_type = clone fun->mResultType;
            
            result_type = solve_generics(result_type, info->generics_type, info);
            
            result_type->mStatic = false;
            
            if(obj_type->mImmutable) {
                if(!result_type->mImmutable) {
                    err_msg(info, "Immutable object can't call mutable method(%s)", fun_name);
                    return true;
                }
            }

            list<sType*%>*% param_types = new list<sType*%>();
            foreach(it, fun.mParamTypes) {
                if(it == null) {
                    param_types.push_back(clone it);
                }
                else {
                    sType*% it2 = solve_generics(dummy_heap it, info.generics_type, info);
                    
                    sType*% no_solved_obj_type = obj_type->mNoSolvedGenericsType;
                    sType*% it3 = solve_generics(dummy_heap it, no_solved_obj_type, info);
                    
                    param_types.push_back(it2);
                }
            }
            
            list<sType*%>*% type_checking_param_types = clone param_types; //new list<sType*%>();
            if(generics_fun) {
                int n = 0;
                foreach(it, generics_fun.mParamTypes) {
                    if(it == null) {
                    }
                    else {
                        sType*% no_solved_obj_type = obj_type->mNoSolvedGenericsType;
                        sType*% it3 = solve_generics(dummy_heap it, no_solved_obj_type, info);
                    }
                    
                    n++;
                }
            }
            
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            
            for(int i=0; i<fun.mParamTypes.length() - (method_block ? 2 :0); i++) {
                come_params.add(null);
            }
            
            bool first_param = true;
            foreach(it, params) {
                var label, node = it;
                
                if(first_param) {
                    first_param = false;
                }
                else if(label) {
                    int n = 0;
                    foreach(it, fun.mParamNames) {
                        if(label === it) {
                            break;
                        }
                        
                        n++;
                    }
                    
                    node_compile(node).elif {
                        return false;
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    
                    come_value.type = solve_generics(come_value.type, info->generics_type, info);
                    
                    if(param_types[n]) {
                        check_assign_type(s"\{fun_name} param num \{n} is assinged to", type_checking_param_types[n], come_value.type, come_value);
                    }
                    if(param_types[n] && param_types[n].mHeap && come_value.type.mHeap) {
                        std_move(param_types[n], come_value.type, come_value, no_delete_from_right_value_objects:true);
                    }
                    
                    come_params.replace(n, come_value);
                }
            }
            
            int i = 0;
            foreach(it, params) {
                var label, node = it;
                
                if(i == 0) {
                    check_assign_type(s"\{fun_name} param num \{i} is assinged to", type_checking_param_types[i], obj_value.type, obj_value);
                    if(param_types[i].mHeap && obj_value.type.mHeap) {
                        std_move(param_types[i], obj_value.type, obj_value, no_delete_from_right_value_objects:true);
                    }
                    else if(param_types[i].mHeap && !obj_value.type.mHeap && !gComeGC) {
                        err_msg(info, "require heap parametor(%s)", fun.mParamNames[i]);
                        return true;
                    }
                    come_params.replace(i, obj_value);
                    
                    i++;
                }
                else if(label) {
                }
                else {
                    while(true) {
                        if(come_params[i] == null) {
                            break;
                        }
                        else {
                            i++;
                        }
                    }

                    node_compile(node).elif {
                        return false;
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    
                    come_value.type = solve_generics(come_value.type, info->generics_type, info);
                    
                    if(param_types[i]) {
                        check_assign_type(s"\{fun_name} param num \{i} is assinged to", type_checking_param_types[i], come_value.type, come_value);
                    }
                    if(param_types[i] && param_types[i].mHeap && come_value.type.mHeap) {
                        std_move(param_types[i], come_value.type, come_value, no_delete_from_right_value_objects:true);
                    }
                    
                    come_params.replace(i, come_value);
                    i++;
                }
            }
            
            while(true) {
                if(come_params[i] == null) {
                    break;
                }
                else {
                    i++;
                }
            }
            
            if(params.length() < fun.mParamTypes.length()+(method_block?-2:0))
            {
                for(; i<fun.mParamTypes.length()+(method_block?-2:0); i++) {
                    string default_param = clone fun.mParamDefaultParametors[i];
                    char* param_name = fun.mParamNames[i];
                    
                    if(default_param && default_param !== "" && come_params[i] == null) {
                        buffer*% source = info.source;
                        char* p = info.p;
                        char* head = info.head;
                        int sline = info.sline;
                        
                        info.source = default_param.to_buffer();
                        info.p = info.source.buf;
                        info.head = info.source.buf;
                        
                        sNode*% node = expression();
                        
                        node_compile(node).elif {
                            return false;
                        }
                        
                        info.source = source;
                        info.p = p;
                        info.head = head;
                        info.sline = sline;
                
                        CVALUE*% come_value = get_value_from_stack(-1, info);
                        come_value.type = solve_generics(come_value.type, info->generics_type, info);
                        if(param_types[i]) {
                            check_assign_type(s"\{fun_name} param num \{i} is assinged to", type_checking_param_types[i], come_value.type, come_value);
                        }
                        if(param_types[i] && param_types[i].mHeap && come_value.type.mHeap) {
                            std_move(param_types[i], come_value.type, come_value, no_delete_from_right_value_objects:true);
                        }
                        come_params.replace(i, come_value);
                    }
                    else {
                        if(come_params[i] == null) {
                            err_msg(info, "require parametor(%s) %d", fun.mName,i);
                            return true;
                        }
                    }
                }
            }
            
            if(method_block) {
                if(!compile_method_block(method_block, come_params, fun, fun_name, method_block_sline, info)) {
                    return false;
                }
            }
            
            buffer*% buf = new buffer();
            
            buf.append_str(generics_fun_name);
            buf.append_str("(");
            
            string saved_obj_value = null
            sVar* saved_var = null;
            if(result_type->mDefferRightValue) {
                static int n = 0;
                n++;
                string var_name = s"deffer_right_value\{n}";
                sType*% type = clone obj_type;
                type->mDefferRightValue = true;
                
                add_variable_to_table(var_name, type, info, false@function_param, info.comma_instead_of_semicolon@comma);
                
                sVar* var_ = get_variable_from_table(info->lv_table, var_name);
                
                add_come_code_at_function_head(info, "%s;\n", make_define_var(type, var_->mCValueName));
                if(info.comma_instead_of_semicolon) {
                    add_come_code(info, "%s=%s,", var_->mCValueName, obj_value.c_value);
                }
                else {
                    add_come_code(info, "%s=%s;\n", var_->mCValueName, obj_value.c_value);
                }
                saved_obj_value = var_->mCValueName;
                saved_var = var_;
                
                int j = 0;
                foreach(it, come_params) {
                    if(j == 0) {
                        buf.append_str(saved_obj_value);
                    }
                    else {
                        buf.append_str(it.c_value);
                    }
                    
                    if(j != come_params.length()-1) {
                        buf.append_str(",");
                    }
                    
                    j++;
                }
            }
            else {
                int j = 0;
                foreach(it, come_params) {
                    buf.append_str(it.c_value);
                    
                    if(j != come_params.length()-1) {
                        buf.append_str(",");
                    }
                    
                    j++;
                }
            }
            buf.append_str(")");
            
            
            CVALUE*% come_value2 = new CVALUE();
            come_value2.var = null;
            
            come_value2.c_value = buf.to_string();
            
            come_value2.type = clone result_type;
            come_value2.type->mStatic = false;
            come_value2.type->mImmutable = false;
            
            if(result_type->mHeap) {
                append_object_to_right_values(come_value2, result_type, info, obj_type:obj_type, obj_value:saved_obj_value, obj_var:saved_var);
            }
            else if(saved_obj_value) {
                append_object_to_right_values(come_value2, result_type, info, obj_type:obj_type, obj_value:saved_obj_value, obj_var:saved_var);
            }
        
            come_value2.c_value = append_stackframe(come_value2.c_value, come_value2.type, info);
            
            add_come_last_code(info, "%s", come_value2.c_value);
            
            info.stack.push_back(come_value2);
            
            delete info->method_generics_types;
            info->method_generics_types = method_generics_types;
            
            info.calling_fun = fun;
        }
        
        return true;
    }
};

sNode*% create_method_call(char* fun_name,sNode*% obj, list<tup: string,sNode*%>*% params, buffer* method_block, int method_block_sline, list<sType*%>* method_generics_types, sInfo* info, bool no_err=false)
{
    sNode*% node = new sMethodCallNode(fun_name, obj, params, method_block, method_block_sline, method_generics_types, no_infference_method_generics:true, false@recursive, info, no_err) implements sNode;
        
    if(!no_err) {
        node = post_position_operator(node, info);
    }
    
    return node;
}

sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 20
{
    list<tup: string,sNode*%>*% params = new list<tup: string,sNode*%>();
    params.push_back(((string)null,clone obj));
    
    if(*info->p == '-' && *(info->p+1) == '>') {
        info->p +=2;
        skip_spaces_and_lf();
    }
    
    /// backtrace ///
    bool parse_method_generics_type = false;
    {
        char* p = info->p;
        int sline = info->sline;
        
        if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(is_type_name(word)) {
                    parse_method_generics_type = true;
                }
            }
        }
        
        info->p = p;
        info->sline = sline;
    }
    
    list<sType*%>*% method_generics_types = new list<sType*%>();
    if(parse_method_generics_type && *info->p == '<') {
        info->p++;
        skip_spaces_and_lf();
        
        while(true) {
            if(*info->p == '\0') {
                err_msg(info, "unexpected source end");
                exit(2);
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            else if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                var type, name, err = parse_type(parse_variable_name:false, parse_multiple_type:false);
                
                if(!err) {
                    err_msg(info, "invalid method generics paramtor type");
                    exit(2);
                }
                
                method_generics_types.push_back(clone type);
            }
        }
    }
    
    if(*info->p != '{') {
        expected_next_character('(');
        
        while(true) {
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            
            char* p = info.p;
            int sline = info.sline;
            
            bool err_flag = false;
            string label = string("");
            if(xisalpha(*info->p) || *info->p == '_') {
                label = parse_word();
                err_flag = true;
            };
            
            if(err_flag == true && *info->p == ':') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                label = null;
                
                info->p = p;
                info->sline = sline;
            }
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            
            bool in_fun_param = info.in_fun_param;
            info.in_fun_param = true;
            
            sNode*% node = expression();
            
            node = post_position_operator(node, info);
            
            info.in_fun_param = in_fun_param;
            info.no_comma = no_comma;
            
            params.push_back((label, node));
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
            }
            else if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
        }
    }
    
    buffer*% method_block = null;
    int method_block_sline = 0;
    if(*info->p == '{') {
        char* head = info.p;
        method_block_sline = info.sline;
        
        skip_block(info);
        
        char* tail = info.p;
        
        method_block = new buffer();
        
        int len = tail - head;
        char*% mem = new char[len+1];
        memcpy(mem, head, len);
        mem[len] = '\0';
        
        method_block.append_str(mem);
        method_block.append_str("\n");
    }
    
    parse_sharp();
    
    sNode*% node = new sMethodCallNode(fun_name, clone obj, params, method_block, method_block_sline, method_generics_types, no_infference_method_generics:false, recursive:true, info) implements sNode;
    
    node = post_position_operator(node, info);
    
    return node;
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 20
{
    if(buf === "__current__") {
        return new sCurrentNode(info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info);
}

