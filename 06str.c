#include "common.h"

class sStrNode extends sNodeBase
{
    new(string value, int sline, sInfo* info)
    {
        self.super();
        
        string self.value = string(value);
    }
    
    string kind()
    {
        return string("sStrNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("\"%s\"", self.value);
        come_value.type = new sType(s"char*");
        //come_value.type.mConstant = true;
        come_value.var = null;
        
        info.stack.push_back(come_value);
    
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
}

class sBufferNode extends sNodeBase
{
    new(buffer*% value, size_t size, sInfo* info)
    {
        self.super();
        
        buffer*% self.value = value;
        size_t self.size = size;
    }
    
    string kind()
    {
        return string("sBufferNode");
    }
    
    bool compile(sInfo* info)
    {
        buffer*% value = self.value;
        size_t size = self.size;
        
        CVALUE*% come_value = new CVALUE();
        
        buffer*% buf = new buffer();
        
        sType*% type2 = new sType(s"buffer");
        type2->mPointerNum++;
        
        sType*% any_type = new sType(s"buffer");
        any_type->mPointerNum = 1;
        any_type->mHeap = true;
        
        if(info.funcs["come_calloc_v2"]??) {
            buf.append_format("buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s\", %ld)", info->sname, info->sline, value.to_string(), size);
        }
        else {
            buf.append_format("buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s\", %ld)", info->sname, info->sline, value.to_string(), size);
        }
        
        sType*% type2 = new sType(s"buffer*");
        type2->mHeap = true;
        
        come_value.c_value = buf.to_string();
        come_value.type = clone type2;
        come_value.var = null;
        
        append_object_to_right_values(come_value, type2,info);
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
}

class sSStringNode extends sNodeBase
{
    new(string value, list<sNode*%>*% exps, int sline, sInfo* info)
    {
        self.super();
        
        string self.value = string(value);
        list<sNode*%>*% self.exps = clone exps;
    }
    
    string kind()
    {
        return string("sSStringNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        buffer*% buf = new buffer();
        
        buf.append_str("xsprintf(\"");
        buf.append_str(self.value);
        buf.append_str("\"");
        
        if(self.exps.length() > 0) {
            foreach(it, self.exps) {
                sNode*% obj = clone it;
                
                list<tup: string, sNode*%>*% params = new list<tup: string, sNode*%>();
                params.add((s"self", clone it));
                
                sNode*% node = create_method_call("to_string", obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
                
                node_compile(node).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                buf.append_str(",");
                buf.append_str(come_value.c_value);
            }
        }
        
        buf.append_str(")");
        
        sType*% type2 = new sType(s"char*");
        type2->mHeap = true;
        
        come_value.c_value = buf.to_string();
        come_value.type = clone type2;
        come_value.var = null;
        
        append_object_to_right_values(come_value, type2,info);
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
}

class sCharNode extends sNodeBase
{
    new(int value, sInfo* info)
    {
        self.super();
        
        int self.value = value;
    }
    
    string kind()
    {
        return string("sCharNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%d", self.value);
        come_value.type = new sType(s"char");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
}

class sWCharNode extends sNodeBase
{
    new(wchar_t value, bool quote, sInfo* info)
    {
        self.super();
        
        wchar_t self.value = value;
        bool self.quote = quote;
    }
    
    string kind()
    {
        return string("sWCharNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        if(self.quote) {
            come_value.c_value = xsprintf("L'\\%o'", self.value);
        }
        else {
            come_value.c_value = xsprintf("L'%lc'", self.value);
        }
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sWStringNode extends sNodeBase
{
    new(wchar_t*% value, int sline, sInfo* info)
    {
        self.super();
        
        wchar_t*% self.value = value;
    }
    
    string kind()
    {
        return string("sWStringNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("L\"%ls\"", self.value);
        come_value.type = new sType(s"int*");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sRegexNode extends sNodeBase
{
    new(string str, bool global, bool ignore_case, int sline, sInfo* info)
    {
        self.super();
        
        string self.str = string(str);
        bool self.global = global;
        bool self.ignore_case = ignore_case;
    }
    
    string kind()
    {
        return string("sRegexNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% obj_node = new sStrNode(self.str, info.sline, info) implements sNode;
        
        list<tup: string,sNode*%>*% params = new list<tup: string,sNode*%>();
        
        params.add((s"self", obj_node));
        params.add((s"ignore_case", create_false_object(info)));
        params.add((s"multiline", create_false_object(info)));
        params.add((s"global", create_false_object(info)));
        params.add((s"extended", create_false_object(info)));
        params.add((s"dotall", create_false_object(info)));
        params.add((s"anchored", create_false_object(info)));
        params.add((s"dollar_endonly", create_false_object(info)));
        params.add((s"ungreedy", create_false_object(info)));
        
        sNode*% node = create_method_call("to_regex"@fun_name, obj_node, params, null@method_block, info->sline@method_block_sline, null@method_generics_types, info);
        
        node_compile(node, info).elif {
            return false;
        }
        
        //add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sListNode extends sNodeBase
{
    new(list<sNode*%>*% list_elements, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.list_elements = list_elements;
    }
    
    string kind()
    {
        return string("sListNode");
    }
    
    bool compile(sInfo* info)
    {
        list<sNode*%>* list_elements = self.list_elements;
        
        list<CVALUE*%>*% params = new list<CVALUE*%>();
        sType*% list_element_type = null;
        
        int n = 0;
        foreach(it, list_elements) {
            if(it->kind() === "sWildCard") {
                sNode*% value_node = create_load_var(s"Value");
                
                list<tup:string,sNode*%>*% params = new list<tup: string, sNode*%>();
                params.add((s"self", value_node));
                params.add((s"position", create_int_node(n, info)));
                sNode*% exp = create_method_call(s"operator_load_element", value_node@obj, params@params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
                
                node_compile(exp).elif {
                    return false;
                }
            }
            else {
                node_compile(it).elif {
                    return false;
                }
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            
            if(list_element_type) {
                check_assign_type(s"invalid list element type", list_element_type, come_value.type, come_value);
            }
            
            params.push_back(come_value);
            
            if(list_element_type) {
                if(list_element_type->mHeap != come_value.type->mHeap) {
                    err_msg(info, "List element type");
                    exit(2);
                }
                else {
                    check_assign_type(s"List element type", list_element_type, come_value.type, come_value);
                }
            }
            list_element_type = clone come_value.type;
            
            n++;
        }
        
        sType*% type_values = clone list_element_type;
        type_values.mArrayNum.push_back(create_int_node(params.length(), info));
        type_values->mHeap = false;
        
        static int list_value_num = 0;
        string var_name = xsprintf("__list_values%d__", ++list_value_num);
        
        add_variable_to_table(var_name, clone type_values, info, false@function_param);
        
        sVar* var_ = get_variable_from_table(info.lv_table, var_name);
        
        add_come_code_at_function_head(info, "%s;\n", make_define_var(type_values, var_->mCValueName));
        
        buffer*% source = new buffer();
        
        source.append_str("(");
        
        int i = 0;
        foreach(it, params) {
            if(list_element_type->mHeap) {
                //string c_value = increment_ref_count_object(params[i].type, params[i].c_value, info);
                source.append_format("%s[%d]=%s,\n", var_->mCValueName, i, params[i].c_value);
            }
            else {
                source.append_format("%s[%d]=%s,\n", var_->mCValueName, i, params[i].c_value);
            }
            i++;
        }
        
        //source.append_str(")");
        
        //add_come_code(info, "%s", source.to_string());
        
        sType*% list_type = new sType(s"list");
        list_type->mGenericsTypes.push_back((clone list_element_type));
        
        sType*% obj_type = clone list_type;
        char* fun_name = "initialize_with_values";
        
        var name, generics_fun = make_generics_function(obj_type, string(fun_name), info);
        string generics_fun_name = name;
        
        sFun* fun = info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
            
            fun = info.funcs.at(generics_fun_name, null);
            
            if(fun == null) {
                err_msg(info, "function not found(%s) at method(%s)(1)", generics_fun_name, info.come_fun.mName);
                return true;
            }
        }
            
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
        
        sType*% type = list_type;
        
        CVALUE*% obj_value = new CVALUE();
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        sType*% type2 = solve_generics(type, type, info);
        
        string type_name = make_type_name_string(type2, array_cast_pointer:true);
        
        sType*% any_type = type2;
        any_type->mPointerNum = 1;
        any_type->mHeap = true;
        
        if(info.funcs["come_calloc_v2"]??) {
            obj_value.c_value = xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name);
        }
        else {
            obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name);
        }
        
        sType*% type3 = clone type2;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        obj_value.type = clone type2;
        obj_value.type->mPointerNum ++;
        obj_value.var = null;
        
        append_object_to_right_values(obj_value, type3 ,info);
            
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
            std_move(fun.mParamTypes[0], obj_value.type, obj_value, no_delete_from_right_value_objects:true);
        }
        come_params.push_back(obj_value);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("%d", params.length());
        come_value2.type = null; // no required
        come_value2.var = null;
        
        come_params.push_back(come_value2);
        
        CVALUE*% come_value3 = new CVALUE();
        
        come_value3.c_value = xsprintf("%s", var_->mCValueName);
        come_value3.type = null; // no required
        come_value3.var = null;
        
        come_params.push_back(come_value3);
        
        //buffer*% buf = new buffer();
        
        source.append_str(generics_fun_name);
        source.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            source.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                source.append_str(",");
            }
            
            j++;
        }
        source.append_str(")");
        source.append_str(")");
        
        CVALUE*% come_value4 = new CVALUE();
        
        come_value4.c_value = source.to_string();
        
        come_value4.type = clone result_type;
        come_value4.type->mStatic = false;
        come_value4.var = null;
        
        if(result_type->mHeap) {
            append_object_to_right_values(come_value4, result_type, info);
        }
        
        info.stack.push_back(come_value4);
        
        add_come_last_code(info, "%s", come_value4.c_value);
        
        return true;
    }
};

class sTupleNode extends sNodeBase
{
    new(list<tup: string, sNode*%>*% tuple_elements, sInfo* info)
    {
        self.super();
        
        list<tup: string, sNode*%>*% self.tuple_elements = tuple_elements;
    }
    
    string kind()
    {
        return string("sTupleNode");
    }
    
    bool compile(sInfo* info)
    {
        list<tup: string, sNode*%>* tuple_elements = self.tuple_elements;
        list<sType*%>*% tuple_types = new list<sType*%>();
        list<CVALUE*%>*% tuple_values = new list<CVALUE*%>();
        
        int n = 0;
        foreach(it, tuple_elements) {
            var name, node = it;
            
            if(node->kind() === "sWildCard") {
                sNode*% value_node = create_load_var(s"Value");
                sNode*% exp = load_field(value_node, xsprintf("v%d", n+1));
                node_compile(exp).elif {
                    return false;
                }
            }
            else {
                node_compile(node).elif {
                    return false;
                }
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            
            tuple_values.push_back(clone come_value);
            sType*% type = clone come_value.type;
            type->mTupleName = name;
            tuple_types.push_back(type);
            
            n++;
        }
        
        sType*% type = new sType(xsprintf("tuple%d", tuple_types.length()));
        
        foreach(it, tuple_types) {
            type->mGenericsTypes.push_back((clone it));
        }
        
        CVALUE*% obj_value = new CVALUE();
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        sType*% type2 = solve_generics(type, type, info);
        
        string type_name = make_type_name_string(type2, array_cast_pointer:true);
        
        sType*% any_type = type2;
        any_type->mPointerNum = 1;
        any_type->mHeap = true;
        
        if(info.funcs["come_calloc_v2"]??) {
            obj_value.c_value = xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name);
        }
        else {
            obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name);
        }
        
        sType*% type3 = clone type2;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        obj_value.type = clone type2;
//        obj_value.type->mPointerNum ++;
        obj_value.var = null;
        
        append_object_to_right_values(obj_value, type3 ,info);
        
        sType*% obj_type = clone type2;
        char* fun_name = "initialize";
        
        var name, generics_fun = make_generics_function(obj_type, string(fun_name), info);
        string generics_fun_name = name;
        
        sFun* fun = info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
            
            fun = info.funcs.at(generics_fun_name, null);
            
            if(fun == null) {
                err_msg(info, "function not found(%s) at method(%s)(2)", generics_fun_name, info.come_fun.mName);
                return true;
            }
        }
            
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
            
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
            std_move(fun.mParamTypes[0], obj_value.type, obj_value, no_delete_from_right_value_objects:true);
        }
        come_params.push_back(obj_value);
    
        int i = 1;
        foreach(it, tuple_values) {
            CVALUE*% come_value = clone it;
            
            if(fun.mParamTypes[i] && fun.mParamTypes[i].mHeap && come_value.type.mHeap) {
                std_move(fun.mParamTypes[i], come_value.type, come_value, no_delete_from_right_value_objects:true);
            }
            come_params.push_back(come_value);
            
            i++;
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(generics_fun_name);
        buf.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            buf.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                buf.append_str(",");
            }
            
            j++;
        }
        buf.append_str(")");
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = buf.to_string();
        
        come_value2.type = clone result_type;
        come_value2.type->mStatic = false;
        come_value2.var = null;
        
        if(result_type->mHeap) {
            append_object_to_right_values(come_value2, result_type, info);
        }
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sMapNode extends sNodeBase
{
    new(list<sNode*%>*% map_key_elements, list<sNode*%>*% map_elements, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.map_key_elements = map_key_elements;
        list<sNode*%>*% self.map_elements = map_elements;
    }
    
    string kind()
    {
        return string("sMapNode");
    }
    
    bool compile(sInfo* info)
    {
        list<sNode*%>* map_key_elements = self.map_key_elements;
        list<sNode*%>* map_elements = self.map_elements;
    
        list<CVALUE*%>*% key_params = new list<CVALUE*%>();
        list<CVALUE*%>*% element_params = new list<CVALUE*%>();
        sType*% map_key_type = null;
        sType*% map_element_type = null;
        
        for(int i=0; i<map_key_elements.length(); i++) {
            sNode* key_elements = map_key_elements[i];
            sNode* elements = map_elements[i];
            
            if(key_elements->kind() === "sWildCard") {
                sNode*% value_node = create_load_var(s"Value");
                
                sNode*% exp;
                {
                    list<tup: string,sNode*%>*% params = new list<tup: string, sNode*%>();
                    params.add((s"self", value_node));
                    exp = create_method_call(s"keys", value_node@obj, params@params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
                }
                
                {
                    list<tup: string,sNode*%>*% params = new list<tup: string, sNode*%>();
                    params.add((s"self", exp));
                    params.add((s"position", create_int_node(i, info)));
                    exp = create_method_call(s"operator_load_element", exp@obj, params@params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
                }
                
                node_compile(exp).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                if(map_key_type) {
                    if(map_key_type->mHeap != come_value.type->mHeap) {
                        err_msg(info, "Map Key type");
                        exit(2);
                    }
                    else {
                        check_assign_type(s"Map key type", map_key_type, come_value.type, come_value);
                    }
                }
                
                key_params.push_back(come_value);
                map_key_type = clone come_value.type;
            }
            else {
                node_compile(key_elements).elif {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                if(map_key_type) {
                    if(map_key_type->mHeap != come_value.type->mHeap) {
                        err_msg(info, "Map key type");
                        exit(2);
                    }
                    else {
                        check_assign_type(s"Map key type", map_key_type, come_value.type, come_value);
                    }
                }
                
                key_params.push_back(come_value);
                map_key_type = clone come_value.type;
            }
            
            if(elements->kind() === "sWildCard") {
                sNode*% value_node = create_load_var(s"Value");
                
                sNode*% exp2;
                {
                    list<tup: string,sNode*%>*% params = new list<tup: string, sNode*%>();
                    params.add((s"self", value_node));
                    exp2 = create_method_call(s"values", value_node@obj, params@params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
                }
                
                {
                    list<tup: string,sNode*%>*% params = new list<tup: string, sNode*%>();
                    params.add((s"self", exp2));
                    params.add((s"position", create_int_node(i, info)));
                    exp2 = create_method_call(s"operator_load_element", exp2@obj, params@params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
                }
                node_compile(exp2).elif {
                    return false;
                }
                
                CVALUE*% come_value2 = get_value_from_stack(-1, info);
                
                if(map_element_type) {
                    if(map_element_type->mHeap != come_value2.type->mHeap) {
                        err_msg(info, "Map element type");
                        exit(2);
                    }
                    else {
                        check_assign_type(s"Map element type", map_element_type, come_value2.type, come_value2);
                    }
                }
                
                element_params.push_back(come_value2);
                map_element_type = clone come_value2.type;
            }
            else {
                node_compile(elements).elif {
                    return false;
                }
                
                CVALUE*% come_value2 = get_value_from_stack(-1, info);
                
                if(map_element_type) {
                    if(map_element_type->mHeap != come_value2.type->mHeap) {
                        err_msg(info, "Map element type");
                        exit(2);
                    }
                    else {
                        check_assign_type(s"Map element type", map_element_type, come_value2.type, come_value2);
                    }
                }
                
                element_params.push_back(come_value2);
                map_element_type = clone come_value2.type;
            }
        }
        
        static int map_value_num = 0;
        
        sType*% key_type_values = clone map_key_type;
        key_type_values.mArrayNum.push_back(create_int_node(key_params.length(), info));
        key_type_values->mHeap = false;
        
        string var_name = xsprintf("__map_keys%d__", ++map_value_num);
        
        add_variable_to_table(var_name, clone key_type_values, info, false@function_param);
        
        sVar* var_ = get_variable_from_table(info.lv_table, var_name);
        
        add_come_code_at_function_head(info, "%s;\n", make_define_var(key_type_values, var_->mCValueName));
        
        sType*% element_type_values = clone map_element_type;
        element_type_values.mArrayNum.push_back(create_int_node(element_params.length(), info));
        element_type_values->mHeap = false;
        
        string var_name2 = xsprintf("__map_element%d__", map_value_num);
        
        add_variable_to_table(var_name2, clone element_type_values, info, false@function_param);
        
        sVar* var2_ = get_variable_from_table(info.lv_table, var_name2);
        
        add_come_code_at_function_head(info, "%s;\n", make_define_var(element_type_values, var2_->mCValueName));
        
        buffer*% source = new buffer();
        
        source.append_str("(");
        
        for(int i = 0; i<key_params.length(); i++) {
            CVALUE* key_param = key_params[i];
            CVALUE* element_param = element_params[i];
            
            if(map_key_type->mHeap) {
                //string c_value = increment_ref_count_object(key_param.type, key_param.c_value, info);
                source.append_format("%s[%d]=%s,\n", var_->mCValueName, i, key_param.c_value);
            }
            else {
                source.append_format("%s[%d]=%s,\n", var_->mCValueName, i, key_param.c_value);
            }
            
            if(map_element_type->mHeap) {
                //string c_value = increment_ref_count_object(element_param.type, element_param.c_value, info);
                source.append_format("%s[%d]=%s,\n", var2_->mCValueName, i, element_param.c_value);
            }
            else {
                source.append_format("%s[%d]=%s,\n", var2_->mCValueName, i, element_param.c_value);
            }
        }
        
        sType*% map_type = new sType(s"map");
        map_type->mGenericsTypes.push_back((clone map_key_type));
        map_type->mGenericsTypes.push_back((clone map_element_type));
        
        sType*% obj_type = clone map_type;
        char* fun_name = "initialize_with_values";
        
        var name, generics_fun = make_generics_function(obj_type, string(fun_name), info);
        string generics_fun_name = name;
        
        sFun* fun = info.funcs.at(generics_fun_name, null);
        
        if(fun == null) {
            generics_fun_name = create_method_name(obj_type, false@no_pointer_name, string(fun_name), info);
            
            fun = info.funcs.at(generics_fun_name, null);
            
            if(fun == null) {
                err_msg(info, "function not found(%s) at method(%s)(3)", generics_fun_name, info.come_fun.mName);
                return true;
            }
        }
            
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
        
        sType*% type = map_type;
        
        CVALUE*% obj_value = new CVALUE();
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        sType*% type2 = solve_generics(type, type, info);
        
        string type_name = make_type_name_string(type2, array_cast_pointer:true);
        
        sType*% any_type = type2;
        any_type->mPointerNum = 1;
        any_type->mHeap = true;
        
        if(info.funcs["come_calloc_v2"]??) {
            obj_value.c_value = xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name);
        }
        else {
            obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name);
        }
        
        sType*% type3 = clone type2;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        obj_value.type = clone type2;
        obj_value.type->mPointerNum ++;
        obj_value.var = null;
        
        append_object_to_right_values(obj_value, type3 ,info);
            
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
            std_move(fun.mParamTypes[0], obj_value.type, obj_value, no_delete_from_right_value_objects:true);
        }
        come_params.push_back(obj_value);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("%d", key_params.length());
        come_value2.type = null; // no required
        come_value2.var = null;
        
        come_params.push_back(come_value2);
        
        CVALUE*% come_value3 = new CVALUE();
        
        come_value3.c_value = xsprintf("%s", var_->mCValueName);
        come_value3.type = null; // no required
        come_value3.var = null;
        
        come_params.push_back(come_value3);
        
        CVALUE*% come_value4 = new CVALUE();
        
        come_value4.c_value = xsprintf("%s", var2_->mCValueName);
        come_value4.type = null; // no required
        come_value4.var = null;
        
        come_params.push_back(come_value4);
        
        //buffer*% buf = new buffer();
        
        source.append_str(generics_fun_name);
        source.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            source.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                source.append_str(",");
            }
            
            j++;
        }
        source.append_str(")");
        source.append_str(")");
        
        CVALUE*% come_value5 = new CVALUE();
        
        come_value5.c_value = source.to_string();
        come_value5.type = clone result_type;
        come_value5.type->mStatic = false;
        come_value5.var = null;
        
        if(result_type->mHeap) {
            append_object_to_right_values(come_value5, result_type, info);
        }
        
        add_come_last_code(info, "%s", come_value5.c_value);
        
        info.stack.push_back(come_value5);
        
        return true;
    }
};

sNode*% expression_node(sInfo* info) version 96
{
    /// here document ///
    if(*info->p == '"' && *(info->p+1) == '"' && *(info->p+2) == '"' && *(info->p+3) == '\n') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p +=4;
        info->sline++;

        int sline = info->sline;

        list<sNode*%>*% exps = new list<sNode*%>();
        buffer*% value = new buffer();
        
        char* head_of_last_line = NULL;
        

        while(1) {
            if(*info->p == '"' && *(info->p+1) == '"' && *(info->p+2) == '"') {
                if(head_of_last_line) {
                    value.trim(info->p-head_of_last_line);
                }
                
                info->p+=3;
                
                skip_spaces_and_lf();
                break;
            }
            else if(*info->p == '%') {
                value.append_char('%');
                value.append_char('%');
                info->p++;
            }
            else if(*info->p == '"') {
                value.append_char('\\');
                value.append_char('"');
                info->p++;
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        value.append_char(*info->p);
                        info->p++;
                        len++;
                    }
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    value.append_char(*info->p);
                    info->p++;
                    
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        value.append_char(*info->p);
                        info->p++;
                    }
                }
                else if(*info->p == '{') {
                    info->p++;
                    
                    sNode*% exp = expression();
                    
                    exps.add(exp);
                    
                    if(*info->p == '}') {
                        info->p++;
                    }
                    
                    value.append_str("%s");
                }
                else {
                    switch(*info->p) {
                        case '0':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info->p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p == '\n') {
                    value.append_char('\\');
                    value.append_char('n');
                    info->p++;
                    info->sline++;
                    
                    head_of_last_line = info->p;
                }
                else {
                    value.append_char(*info->p);
                    info->p++;
                }
            }
        }

        skip_spaces_and_lf();
        
        info.sline_real = sline_real;
        return new sSStringNode(value.to_string(), exps, sline, info) implements sNode;
    }
    else if(*info->p == '"') 
    {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p++;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                parse_sharp()
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info->p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info->p);
                    info->p++;
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                info->sline = sline2;
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        info.sline_real = sline_real;
        return new sStrNode(value.to_string(), sline, info) implements sNode;
    }
    else if((*info->p == 'b' || *info->p == 'B') && *(info->p+1) == '"') 
    {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;

        int sline = info->sline;

        buffer*% value = new buffer();

        size_t size = 0;
        while(1) {
            if(*info->p == '"') {
//                value.append_char(*info->p);
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        value.append_char(*info->p);
                        info->p++;
                        len++;
                    }
                    size++;
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    value.append_char(*info->p);
                    info->p++;
                    
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        value.append_char(*info->p);
                        info->p++;
                    }
                    size++;
                }
                else {
                    switch(*info->p) {
                        case '0':
                            value.append_char(*info->p);
                            info->p++;
                            size++;
                            break;
    
                        case 'n':
                            value.append_char(*info->p);
                            info->p++;
                            size++;
                            break;
    
                        case 't':
                            value.append_char(*info->p);
                            info->p++;
                            size++;
                            break;
    
                        case 'r':
                            value.append_char(*info->p);
                            info->p++;
                            size++;
                            break;
    
                        case 'v':
                            value.append_char(*info->p);
                            info->p++;
                            size++;
                            break;
    
                        case 'f':
                            value.append_char(*info->p);
                            info->p++;
                            size++;
                            break;
    
                        case 'a':
                            value.append_char(*info->p);
                            info->p++;
                            size++;
                            break;
    
                        case 'b':
                            value.append_char(*info->p);
                            info->p++;
                            size++;
                            break;
    
                        case '\\':
                            value.append_char(*info->p);
                            info->p++;
                            size++;
                            break;
    
                        default:
                            value.append_char(*info->p);
                            info->p++;
                            size++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
                size++;
            }
        }

        skip_spaces_and_lf();
        
        info.sline_real = sline_real;
        return new sBufferNode(value, size, info) implements sNode;
    }
    else if(*info->p == '/' && *(info->p-1) != '*' && *(info->p+1) != '*') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p++;
        
        int sline = info->sline;
        
        buffer*% buf = new buffer();
        while(true) {
            if(*info->p == '\\' && *(info->p+1) == '/') {
                info->p++;
                buf.append_char(*info->p);
                info->p++;
            }
            else if(*info->p == '/') {
                info->p++;
                break;
            }
            else if(*info->p == '\0') {
                err_msg(info, "require closing / for regex");
                exit(5);
            }
            else {
                buf.append_char(*info->p);
                info->p++;
            }
        }
        
        bool global = false;
        bool ignore_case = false;
        while(*info->p == 'g' || *info->p == 'i') {
            if(*info->p == 'g') {
                info->p++;
                global = true;
            }
            else if(*info->p == 'i') {
                info->p++;
                ignore_case = true;
            }
            else {
                break;
            }
        }
        
        skip_spaces_and_lf();
        
        sNode*% obj = new sStrNode(buf.to_string(), sline, info) implements sNode;
        
        list<tup: string, sNode*%>*% params = new list<tup: string, sNode*%>();
        
        params.add((s"self", obj));
        params.add((s"ignore_case", ignore_case ? create_int_node(1, info) : create_int_node(0, info)));
        params.add((s"multiline", create_int_node(0, info)));
        params.add((s"global", global ? create_int_node(1, info) : create_int_node(0, info)));
        params.add((s"extended", create_int_node(0, info)));
        params.add((s"dotall", create_int_node(0, info)));
        params.add((s"anchored", create_int_node(0, info)));
        params.add((s"dollar_endonly", create_int_node(0, info)));
        params.add((s"ungreedy", create_int_node(0, info)));
        
        buffer* method_block = null;
        
        int method_block_sline = info.sline;
        
        list<sType*%>*% method_generics_types = new list<sType*%>();
        
        sNode*% node = create_method_call("to_regex", obj, params, method_block, method_block_sline, method_generics_types, info);
        
        info.sline_real = sline_real;
        return node;
    }
    else if((*info->p == 'R' || *info->p == 'r') && *(info->p+1) == '"') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;
        
        int sline = info->sline;
        
        buffer*% value = new buffer();
        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        value.append_char(*info->p);
                        info->p++;
                        len++;
                    }
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    value.append_char(*info->p);
                    info->p++;
                    
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        value.append_char(*info->p);
                        info->p++;
                    }
                }
                else {
                    switch(*info->p) {
                        case '0':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info->p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }
        
        bool global = false;
        bool ignore_case = false;
        while(*info->p == 'g' || *info->p == 'i') {
            if(*info->p == 'g') {
                info->p++;
                global = true;
            }
            else if(*info->p == 'i') {
                info->p++;
                ignore_case = true;
            }
            else {
                break;
            }
        }
        
        skip_spaces_and_lf();
        
        sNode*% obj = new sStrNode(value.to_string(), sline, info) implements sNode;
        
        list<tup: string, sNode*%>*% params = new list<tup: string, sNode*%>();
        
        params.add((s"self", obj));
        params.add((s"ignore_case", ignore_case ? create_int_node(1, info) : create_int_node(0, info)));
        params.add((s"multiline", create_int_node(0, info)));
        params.add((s"global", global ? create_int_node(1, info) : create_int_node(0, info)));
        params.add((s"extended", create_int_node(0, info)));
        params.add((s"dotall", create_int_node(0, info)));
        params.add((s"anchored", create_int_node(0, info)));
        params.add((s"dollar_endonly", create_int_node(0, info)));
        params.add((s"ungreedy", create_int_node(0, info)));
        
        buffer* method_block = null;
        
        int method_block_sline = info.sline;
        
        list<sType*%>*% method_generics_types = new list<sType*%>();
        
        sNode*% node = create_method_call("to_regex", obj, params, method_block, method_block_sline, method_generics_types, info);
        
        info.sline_real = sline_real;
        return node;
    }
    else if(*info->p == '\'') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p++;

        int c;

        if(*info->p == '\\') {
            info->p++;

            if(xisdigit(*info->p)) {
                int n = 0;
                while(xisdigit(*info->p)) {
                    n = n * 8 + *info->p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info->p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case 'f':
                        c = '\f';
                        info->p++;
                        break;
    
                    case 'v':
                        c = '\v';
                        info->p++;
                        break;
    
                    case 'b':
                        c = '\b';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        info->p++;
                        
                        if(xisdigit(*info->p)) {
                            int n = 0;
                            while(xisdigit(*info->p)) {
                                n = n * 8 + *info->p - '0';
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info->p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info->p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            c = *info->p;
            info->p++;
        }

        if(*info->p != '\'') {
            err_msg(info, "close \' to make character value");
            exit(1);
        }
        else {
            info->p++;

            skip_spaces_and_lf();

            info.sline_real = sline_real;
            return new sCharNode(c, info) implements sNode;
        }
    }
    /// wchararacter ///
    else if(*info->p == 'L' && *(info->p+1) == '\'') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;

        wchar_t c;
        bool quote;

        if(*info->p == '\\') {
            quote = true;
            info->p++;
            
            if(xisdigit(*info->p)) {
                int n = 0;
                while(xisdigit(*info->p)) {
                    n = n * 8 + *info->p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info->p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        
                        info->p++;
                        
                        if(xisdigit(*info->p)) {
                            int n = 0;
                            while(xisdigit(*info->p)) {
                                n = n * 8 + *info->p - '0';
                                info->p++;
                                skip_spaces_and_lf();
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info->p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info->p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            quote = false;
            unsigned char p2 = *(unsigned char*)info->p;

            /// utf-8 character ///
            if(p2 > 127) {
                int size;
                char str[MB_LEN_MAX+1];

                size = ((p2 & 0x80) >> 7) + ((p2 & 0x40) >> 6) + ((p2 & 0x20) >> 5) + ((p2 & 0x10) >> 4);

                if(size > MB_LEN_MAX) {
                    err_msg(info, "invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                    exit(2);
                }
                else {
                    memcpy(str, info->p, size);
                    str[size] = 0;

                    if(mbtowc(&c, str, size) < 0) {
                        perror("mbtowc");
                        err_msg(info, "invalid utf-8 character. mbtowc");
                        info->err_num++;
                        exit(2);
                    }
                    else {
                        info->p += size;
                    }
                }
            }
            /// ASCII character ///
            else {
                c = *info->p;
                info->p++;
            }
        }
        
        if(*info->p != '\'') {
            err_msg(info, "close \' to make character value");
            info->err_num++;
            exit(2);
        }
        else {
            info->p++;

            skip_spaces_and_lf();

            info.sline_real = sline_real;
            return new sWCharNode(c, quote, info) implements sNode;
        }
    }
    /// wstring ///
    else if(*info->p == 'L' && *(info->p+1) == '"') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info->p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info->p);
                    info->p++;
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        int len = value.len;
        
        wchar_t*% wstr = new wchar_t[len+1];
        
        char* str = value.buf;
        
        if(mbstowcs(wstr, str, len+1) < 0) {
            perror("mbstowcs");
            exit(1);
        }
        
        wstr[len] = 0;
        
        info.sline_real = sline_real;
        return new sWStringNode(wstr, sline, info) implements sNode;
    }
    /// heap string ///
    else if((*info->p == 's' || *info->p == 'S')  && *(info->p+1) == '"') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p+=2;

        int sline = info->sline;

        list<sNode*%>*% exps = new list<sNode*%>();
        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '%') {
                value.append_char('%');
                value.append_char('%');
                info->p++;
            }
/*
            else if(*info->p == '$') {
                info->p++;
                
                sNode*% exp = expression();
                
                exps.add(exp);
                
                value.append_str("%s");
                
                char* p = info->p -1;
                while(*p == ' ' || *p == '\t') {
                    p--;
                }
                
                info->p = p + 1;
            }
*/
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        value.append_char(*info->p);
                        info->p++;
                        len++;
                    }
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    value.append_char(*info->p);
                    info->p++;
                    
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        value.append_char(*info->p);
                        info->p++;
                    }
                }
                else if(*info->p == '{') {
                    info->p++;
                    
                    sNode*% exp = expression();
                    
                    exps.add(exp);
                    
                    if(*info->p == '}') {
                        info->p++;
                    }
                    
                    value.append_str("%s");
                }
                else {
                    switch(*info->p) {
                        case '0':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char(*info->p);
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info->p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        info.sline_real = sline_real;
        return new sSStringNode(value.to_string(), exps, sline, info) implements sNode;
    }
    else if(*info->p == '[') {
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        info->p++;
        skip_spaces_and_lf();
        
        char* p = info.p;
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        sNode*% node = expression();
        
        info.no_comma = no_comma;
        
        char* p2 = info.p;
        
        buffer*% first_element_source = new buffer();
        
        first_element_source.append(p, p2 - p);
        first_element_source.append_char('\0');
        
        list<sNode*%>*% list_elements = new list<sNode*%>();
        
        list<sNode*%>*% map_keys = new list<sNode*%>();
        list<sNode*%>*% map_elements = new list<sNode*%>();
        
        //// map ///
        if(*info->p == ':') {
            info->p++;
            skip_spaces_and_lf();
            
            map_keys.push_back(node);
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            
        
            sNode*% node2 = expression();
            
            info.no_comma = no_comma;
            
            map_elements.push_back(node2);
            
            if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf();
                
                return new sMapNode(map_keys, map_elements, info) implements sNode;
            }
            else {
                expected_next_character(',');
                
                while(true) {
                    bool no_comma = info.no_comma;
                    info.no_comma = true;
                    
                    sNode*% node2 = expression();
                    
                    info.no_comma = no_comma;
                    
                    map_keys.push_back(node2);
                    
                    expected_next_character(':');
                    
                    no_comma = info.no_comma;
                    info.no_comma = true;
                    
                    sNode*% node3 = expression();
                    
                    info.no_comma = no_comma;
                    
                    map_elements.push_back(node3);
                    
                    if(*info->p == '\0') {
                        err_msg(info, "invalid source end");
                        exit(2);
                    }
                    else if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    else if(*info->p == ']') {
                        info->p++;
                        skip_spaces_and_lf();
                        break;
                    }
                    else {
                        err_msg(info, "invalid character(3)(%c)", *info->p);
                        exit(2);
                    }
                }
                
                return new sMapNode(map_keys, map_elements, info) implements sNode;
            }
        }
        /// list ///
        else if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf();
            
            list_elements.push_back(node);
        }
        else if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            list_elements.push_back(node);
            
            while(true) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                
                sNode*% node2 = expression();
                
                info.no_comma = no_comma;
                
                list_elements.push_back(node2);
                
                if(*info->p == '\0') {
                    err_msg(info, "invalid source end");
                    exit(2);
                }
                else if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == ']') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    err_msg(info, "invalid character(4)(%c)", *info->p);
                    exit(2);
                }
            }
        }
        else {
            err_msg(info, "invalid character(5)(%c)", *info->p);
            exit(2);
        }
        
        if(list_elements.length() > 0) {
            info.sline_real = sline_real;
            return new sListNode(list_elements, info) implements sNode;
        }
        else {
        }
    }
    else {
        sNode*% node = inherit(info);
        return node;
    }
    
    return (sNode*%)null;
}

sNode*% parse_tuple(sInfo* info, bool named_tuple=false)
{
    list<tup: string, sNode*%>*% tuple_elements = new list<tup: string, sNode*%>();
    while(true) {
        char* p = info.p;
        
        string name;
        if(named_tuple) {
            name = parse_word();
            
            expected_next_character(':', info);
        }
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        sNode*% node = expression();
        node = post_position_operator(node, info);
        
        info.no_comma = no_comma;
        
        tuple_elements.push_back((clone name, node));
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        else {
            err_msg(info, "invalid character in tuple expression (%c)", *info->p);
            exit(2);
        }
    }
    
    return new sTupleNode(tuple_elements, info) implements sNode;
}




