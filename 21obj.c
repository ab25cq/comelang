#include "common.h"

string, string, string, string create_vtable(sType*% any_type, sInfo* info=info)
{
    string finalizer_name = create_method_name(any_type, false@no_poiner_name, "finalize", info);
    string cloner_name = create_method_name(any_type, false@no_poiner_name, "clone", info);
    string get_hash_key_name = create_method_name(any_type, false@no_poiner_name, "get_hash_key", info);
    string equaler_name = create_method_name(any_type, false@no_poiner_name, "equals", info);
    
    if(info.funcs[finalizer_name] == null) {
        if(any_type->mClass->mNumber) {
            finalizer_name = s"(void*)0";
        }
        else {
            (void*)create_finalizer_automatically(any_type, "finalize", info);
        }
    }
    if(info.funcs[cloner_name] == null) {
        if(any_type->mClass->mNumber) {
            cloner_name = s"(void*)0";
        }
        else {
            var fun, name = create_cloner_automatically(any_type, "clone", info);
            cloner_name = name;
        }
    }
    if(info.funcs[get_hash_key_name] == null) {
        var fun, name = create_get_hash_key_automatically(any_type, "get_hash_key", info);
        get_hash_key_name = name;
    }
    if(info.funcs[equaler_name] == null) {
        var fun, name = create_equals_automatically(any_type, "equals", info);
        equaler_name = name;
    }
    
    return (finalizer_name, cloner_name, get_hash_key_name, equaler_name);
}

class sNewNode extends sNodeBase
{
    new(sType*% type, list<tup: string, sNode*%>*% initializer, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
        list<tup:string, sNode*%>*% self.initializer = initializer;
    }
    
    string kind()
    {
        return string("sNewNode");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = self.type;
        list<tup:string, sNode*%>*% initializer = self.initializer;
        
        CVALUE*% come_value = new CVALUE();
        
        buffer*% num_string = new buffer();
        
        num_string.append_str("1");
        
        foreach(it, type->mArrayNum) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% cvalue = get_value_from_stack(-1, info);
            
            num_string.append_format("*(%s)", cvalue.c_value);
        }
        
        sType*% type2 = solve_generics(type, info->generics_type, info);
        
    /*
        if(type->mArrayNum.length() > 0) {
            type2->mPointerNum--;
        }
    */
        type2->mArrayNum.reset();
        
        string type_name = make_type_name_string(type2, array_cast_pointer:true, no_static:true);
        
        string type_name2 = make_come_type_name_string(type2);
        
        if(initializer) {
            static int var_num = 1;
            var_num++;
            
            string var_name = xsprintf("__new_obj__%d", var_num);
            
            sType*% type3 = clone type2;
            type3->mPointerNum++;
            if(type3->mNoSolvedGenericsType) {
                type3->mNoSolvedGenericsType.mPointerNum++;
            }
            
            string type_name3 = make_type_name_string(type3);
            
            add_come_code_at_function_head(info, "%s;\n", make_define_var(type3, var_name));
            
            var buf = new buffer();
            
            buf.append_str("(");
            
            string obj;
            if(info.funcs["come_calloc_v2"]) {
                obj = xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", var_name, type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name3);
            }
            else {
                obj = xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", var_name, type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name3);
            }
            
            buf.append_str(obj);
            buf.append_str(",");
            
            sClass* klass = type3->mClass;
            
            int i = 0;
            foreach(it, initializer) {
                var name, exp = it;
                
                node_compile(exp).elif {
                    return false;
                }
                
                CVALUE*% come_value2 = get_value_from_stack(-1, info);
                
                sType*% left_type = null;
                foreach(it2, klass->mFields) {
                    var field_name, field_type = it2;
                    
                    if(name === field_name) {
                        left_type = clone field_type;
                        break;
                    }
                }
                
                if(left_type == null) {
                    err_msg(info, "field %s is not defined", name).rescue {
                        return true;
                    }
                }
                
                sType*% right_type = come_value2.type;
                
                check_assign_type(s"\{name} is assining to", left_type, right_type, come_value2).rescue {
                    return true;
                }
                
                right_type = come_value2.type;
                
                if(left_type->mHeap && right_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0) {
                    string c_value = increment_ref_count_object(left_type, come_value2.c_value, info);
                    buf.append_format("%s->%s = %s", var_name, name, c_value);
                }
                else {
                    buf.append_format("%s->%s = %s", var_name, name, come_value2.c_value);
                }
                
                buf.append_str(",");
                
                i++;
            }
            
            buf.append_str(var_name);
            buf.append_str(")");
            
            come_value.c_value = buf.to_string();
            
            type2->mHeap = true;
            type2->mPointerNum++;
            
            if(type2->mNoSolvedGenericsType) {
                type2->mNoSolvedGenericsType->mPointerNum++;
                type2->mNoSolvedGenericsType->mHeap = true;
            }
            
            come_value.type = clone type2;
            come_value.var = null;
            
            append_object_to_right_values2(come_value, type2, info);
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
        else {
            sType*% type3 = clone type2;
            type3->mPointerNum++;
            type3->mHeap = true;
            
            if(type3->mNoSolvedGenericsType) {
                type3->mNoSolvedGenericsType.mPointerNum++;
                type3->mNoSolvedGenericsType.mHeap = true;
            }
            
            string type_name3 = make_type_name_string(type3);
            
            if(info.funcs["come_calloc_v2"]) {
                come_value.c_value = xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name3);
            }
            else {
                come_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")", type_name, type_name, num_string.to_string(), info.sname, info.sline, type_name3);
            }
            
            type2->mHeap = true;
            type2->mPointerNum++;
                
            if(type2->mNoSolvedGenericsType) {
                type2->mNoSolvedGenericsType->mPointerNum++;
                type2->mNoSolvedGenericsType->mHeap = true;
            }
            
            come_value.type = clone type2;
            come_value.var = null;
            
            append_object_to_right_values2(come_value, type2 ,info);
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};

class sImplementsNode extends sNodeBase
{
    new(sNode*% obj_exp, sType*% inf_type, sInfo* info)
    {
        self.super();
        
        sNode*% self.obj_exp = clone obj_exp;
        sType*% self.inf_type = clone inf_type;
    }
    
    string kind()
    {
        return string("sImplementsNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% obj_exp = clone self.obj_exp;
        sType*% inf_type = clone self.inf_type;
        
        node_compile(obj_exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType*% type = clone come_value.type;
        type->mPointerNum--;
        type->mHeap = false;
        
        sClass* klass = inf_type->mClass;
        
        CVALUE*% come_value2 = new CVALUE();
        
        sType*% type2 = clone inf_type;
        
        string type_name = make_type_name_string(inf_type, array_cast_pointer:true);
        string type_name2 = make_type_name_string(type, array_cast_pointer:true);
        
        static int inf_num = 0;
        ++inf_num;
        int inf_num_stack = inf_num;
        
        string buf = xsprintf("%s* _inf_value%d;\n", type_name, inf_num_stack);
        add_come_code_at_function_head(info, buf);
        string buf2 = xsprintf("%s* _inf_obj_value%d;\n", type_name2, inf_num_stack);
        add_come_code_at_function_head(info, buf2);
        
        if(info.funcs["come_calloc_v2"]) {
            add_come_code(info, "_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), \"%s\", %d, \"%s\");\n", inf_num_stack, type_name, type_name, info.sname, info.sline, type_name);
        }
        else {
            add_come_code(info, "_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n", inf_num_stack, type_name, type_name, info.sname, info.sline, type_name);
        }
        
        string c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
        add_come_code(info, "_inf_obj_value%d=%s;\n", inf_num_stack, c_value);
        add_come_code(info, "_inf_value%d->_protocol_obj=_inf_obj_value%d;\n", inf_num_stack, inf_num_stack);
        
        sType*% typeX = clone type;
        typeX->mPointerNum++;
        
        create_finalizer_automatically(typeX, "finalize", info);
        create_cloner_automatically(typeX, "clone", info);
        
        for(int i=1; i<klass->mFields.length(); i++) {
            var name, field_type = klass->mFields[i];
            
            string method_name = create_method_name(type, false@no_pointer_name, name, info);
            
            sFun* fun = info.funcs.at(method_name, null);
            
            if(fun == null && name === "to_string") {
                sType*% type2 = clone type;
                type2->mPointerNum++;
                
                var fun2, real_fun_name = create_to_string_automatically(type2, name, info);
                
                fun = fun2;
                method_name = real_fun_name;
            }
            if(fun == null && name === "equals") {
                sType*% type2 = clone type;
                type2->mPointerNum++;
                
                var fun2, real_fun_name = create_equals_automatically(type2, name, info);
                
                fun = fun2;
                method_name = real_fun_name;
            }
            
            if(fun == null) {
                sClass* klass2 = info->classes[type->mClass->mName];
                while(info->classes[klass2->mParentClassName]) {
                    klass2 = info->classes[klass2->mParentClassName];
                    
                    method_name = create_method_name_using_class(klass2, false@no_pointer_name, name, info);
                    
                    fun = info.funcs.at(string(method_name), null);
                    
                    if(fun) {
                        break;
                    }
                }
                
                add_come_code(info, "_inf_value%d->%s=(void*)%s;\n", inf_num_stack, name, method_name);
            }
            else {
                add_come_code(info, "_inf_value%d->%s=(void*)%s;\n", inf_num_stack, name, method_name);
            }
        }
        
        come_value2.c_value = xsprintf("_inf_value%d", inf_num_stack);
        
        sType*% type3 = clone inf_type;
        type3->mPointerNum++;
        type3->mHeap = true;
        type2->mHeap = true;
        
        come_value2.type = clone type2;
        come_value2.type->mPointerNum ++;
        come_value2.var = null;
        
        append_object_to_right_values2(come_value2, type3 ,info);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sTrueNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sTrueNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("(_Bool)1");
        come_value.type = new sType(s"bool");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

sNode*% create_true_object(sInfo* info)
{
    return new sTrueNode(info) implements sNode;
}

class sFalseNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sFalseNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("(_Bool)0");
        come_value.type = new sType(s"bool");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

sNode*% create_false_object(sInfo* info)
{
    return new sFalseNode(info) implements sNode;
}

class sSizeOfNode extends sNodeBase
{
    new(sType*% type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sSizeOfNode");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        var type2 = solve_generics(type, info->generics_type, info);
        
        string type_name = make_type_name_string(type2, no_static:true);
        
        come_value.c_value = xsprintf("sizeof(%s)", type_name);
        come_value.type = new sType(s"long");
        come_value.type->mUnsigned = true;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sSizeOfExpNode extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
        
        return self;
    }
    
    string kind()
    {
        return string("sSizeOfExpNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("sizeof(%s)", come_value.c_value);
        come_value2.type = new sType(s"long");
        come_value2.type->mUnsigned = true;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sTypeOfNode extends sNodeBase
{
    new(sType*% type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sTypeOfNode");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = self.type;
        
        CVALUE*% come_value = new CVALUE();
    
        var type2 = solve_generics(type, info->generics_type, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("\"%s\"", type_name);
        come_value.type = new sType(s"char*");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sTypeOfExpNode extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
    }
    
    string kind()
    {
        return string("sTypeOfExpNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType*% type = clone come_value.type;
        
        var type2 = solve_generics(type, info->generics_type, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("\"%s\"", type_name);
        come_value.type = new sType(s"char*");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sDynamicTypeOf extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
    }
    
    string kind()
    {
        return string("sDynamicTypeOf");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        if(come_value.type.mPointerNum > 0 && come_value.type.mHeap) {
            CVALUE*% come_value2 = new CVALUE();
            
            come_value2.c_value = xsprintf("come_dynamic_typeof(%s)", come_value.c_value);
            come_value2.type = new sType(s"char*");
            come_value2.var = null;
            
            add_come_last_code(info, "%s", come_value2.c_value);
            
            info.stack.push_back(come_value2);
        }
        else {
            CVALUE*% come_value2 = new CVALUE();
            
            come_value2.c_value = xsprintf("__builtin_string(\"NOT HEAP OBJECT\")");
            come_value2.type = new sType(s"char*");
            come_value2.var = null;
            
            add_come_last_code(info, "%s", come_value2.c_value);
            
            append_object_to_right_values2(come_value2, come_value2.type ,info);
            
            info.stack.push_back(come_value2);
        }
        
        return true;
    }
};

class sAlignOfNode extends sNodeBase
{
    new(sType*% type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
        
        return self;
    }
    
    string kind()
    {
        return string("sAlignOfNode");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        var type2 = solve_generics(type, info->generics_type, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("_Alignof(%s)", type_name);
        come_value.type = new sType(s"long");
        come_value.type->mUnsigned = true;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sAlignOfExpNode extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
    }
    
    string kind()
    {
        return string("sAlignOfExpNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("_AlignOf(%s)", come_value.c_value);
        come_value2.type = new sType(s"long");
        come_value2.type->mUnsigned = true;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sAlignOfNode2 extends sNodeBase
{
    new(sType*% type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sAlignOfNode2");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        var type2 = solve_generics(type, info->generics_type, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("__alignof__(%s)", type_name);
        come_value.type = new sType(s"long");
        come_value.type->mUnsigned = true;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sAlignOfExpNode2 extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
    }
    
    string kind()
    {
        return string("sAlignOfExpNode2");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("__alignof__(%s)", come_value.c_value);
        come_value2.type = new sType(s"long");
        come_value2.type->mUnsigned = true;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sAlignAsNode extends sNodeBase
{
    new(sType*% type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sAlignAsNode");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        var type2 = solve_generics(type, info->generics_type, info);
        
        string type_name = make_type_name_string(type2);
        
        come_value.c_value = xsprintf("_Alignas(%s)", type_name);
        come_value.type = new sType(s"long");
        come_value.type->mUnsigned = true;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sAlignAsExpNode extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = clone exp;
    }
    
    string kind()
    {
        return string("sAlignAsExpNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("_Alignas(%s)", come_value.c_value);
        come_value2.type = new sType(s"long");
        come_value2.type->mUnsigned = true;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sDeleteNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sDeleteNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        if(come_value.type.mPointerNum > 0) {
            free_object(clone come_value.type, come_value.c_value, false@no_decrement, false@no_free, info);
        }
        
        return true;
    }
};

class sBorrowNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
        
        return self;
    }
    
    string kind()
    {
        return string("sBorrowNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        if(come_value.type.mPointerNum > 0) {
            come_value.type.mHeap = false;
            
            struct sRightValueObject* right_value_objects = come_value.right_value_objects;
            if(right_value_objects) {
                 int right_value_id = right_value_objects.mID;
                
                if(right_value_id != -1) {
                    remove_object_from_right_values(right_value_id, info);
                }
            }
        }
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sCloneNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sCloneNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type = clone left_value.type;
        
        if(left_type->mPointerNum == 1 && left_type->mClass->mName === "void" && left_type->mHeap == false) { // null
            info.stack.push_back(left_value);
        }
        else if(left_type->mPointerNum == 0) {
            info.stack.push_back(left_value);
        }
        else if(left_type->mPointerNum > 0) {
            CVALUE*% come_value = new CVALUE();
            
            var result_type, c_value = clone_object(left_type, left_value.c_value, info);
            come_value.c_value = c_value;
            come_value.type = clone left_type;
            come_value.type->mHeap = true;
            come_value.var = null;
            
            append_object_to_right_values2(come_value, left_type,info);
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};

class sDupeNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sDupeNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type = clone left_value.type;
        
        if(left_type->mPointerNum == 0) {
            info.stack.push_back(left_value);
        }
        else if(left_type->mPointerNum > 0 && left_type->mHeap == false) {
            info.stack.push_back(left_value);
        }
        else if(left_type->mPointerNum > 0) {
            CVALUE*% come_value = new CVALUE();
            
            var result_type, c_value = clone_object(left_type, left_value.c_value, info);
            come_value.c_value = c_value;
            come_value.type = clone left_type;
            come_value.type->mHeap = true;
            come_value.var = null;
            
            append_object_to_right_values2(come_value, left_type,info);
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};

class sDummyHeapNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sDummyHeapNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        if(come_value.type.mPointerNum > 0) {
            come_value.type.mHeap = true;
        }
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sGCIncNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sGCIncNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType* type = come_value.type;
        
        if(come_value.type.mHeap && come_value.type.mPointerNum > 0) {
            string type_name = make_type_name_string(type);
            come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
        }
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sGCDecNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sGCDecNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType* type = come_value.type;
        
        if(come_value.type.mHeap && come_value.type.mPointerNum > 0) {
            decrement_ref_count_object(type, come_value.c_value, info);
        }
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sIsHeap extends sNodeBase
{
    new(sType*% type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sIsHeap");
    }
    
    bool compile(sInfo* info)
    {
        sType* node = self.type;
        
        if(self.type.mHeap) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("1");
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
        else {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("0");
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
        
        return true;
    }
};


class sIsPointer extends sNodeBase
{
    new(sType*% type, sInfo* info)
    {
        self.super();
        
        sType*% self.type = clone type;
    }
    
    string kind()
    {
        return string("sIsPointer");
    }
    
    bool compile(sInfo* info)
    {
        sType* node = self.type;
        
        if(self.type.mPointerNum > 0) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("1");
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
        else {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("0");
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
        
        return true;
    }
};

class sGCDecNoFreeNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = clone node;
    }
    
    string kind()
    {
        return string("sGCDecNoFreeNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* node = self.node;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType* type = come_value.type;
        
        if(type->mHeap && type->mPointerNum > 0) {
            decrement_ref_count_object(type, come_value.c_value, info, no_free:true);
        }
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 21
{
    if(!gComeC && buf === "new") {
        var type, name, err = parse_type();
        if(!err) {
            err_msg(info, "parse_type failed");
            exit(2);
        }
        
        if(*info->p == '(') {
            sNode*% obj = new sNewNode(type, null, info) implements sNode;
            string fun_name = string("initialize");
            
            return parse_method_call(clone obj, fun_name, info);
        }
        else if(*info->p == '{') {
            info->p++;
            skip_spaces_and_lf();
            
            list<tup: string, sNode*%>*% initializer = new list<tup: string, sNode*%>();
            
            while(true) {
                string word = parse_word();
                
                if(*info->p == ':') {
                    info->p++
                    skip_spaces_and_lf();
                    
                    bool no_comma = info->no_comma;
                    info->no_comma = true;
                    sNode*% exp = expression();
                    info->no_comma = no_comma;
                    
                    if(exp->kind() === "sWildCard") {
                        sNode*% value_node = create_load_var(s"Value");
                        exp = load_field(value_node, word);
                    }
                    
                    initializer.add((word, exp));
                }
                else if(*info->p == ',') {
                    sNode*% exp = create_load_var(word);
                    
                    initializer.add((word, exp));
                }
                else {
                    err_msg(info, "invalid character(21) %c", *info->p);
                    return null;
                }
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    err_msg(info, "invalid character(30) %c", *info->p);
                    return null;
                }
            }
            return new sNewNode(type, initializer, info) implements sNode;
        }
        else {
            return new sNewNode(type, null, info) implements sNode;
        }
    }
    else if(!gComeC && buf === "true") {
        return new sTrueNode(info) implements sNode;
    }
    else if(!gComeC && buf === "false") {
        return new sFalseNode(info) implements sNode;
    }
    else if(!gComeC && buf === "delete") {
         sNode*% node = expression();
         
         return new sDeleteNode(node, info) implements sNode;
    }
    else if(!gComeC && buf === "borrow") {
         sNode*% node = expression();
         
         return new sBorrowNode(node, info) implements sNode;
    }
    else if(!gComeC && buf === "clone") {
         sNode*% node = expression();
         
         return new sCloneNode(node, info) implements sNode;
    }
    else if(!gComeC && buf === "dupe") {
         sNode*% node = expression();
         
         return new sDupeNode(node, info) implements sNode;
    }
    else if(!gComeC && buf === "dummy_heap") {
         sNode*% node = expression();
         
         return new sDummyHeapNode(node, info) implements sNode;
    }
    else if(!gComeC && buf === "gc_inc" && *info->p == '(') {
         info->p++;
         skip_spaces_and_lf();
         
         sNode*% node = expression();
         
         expected_next_character(')');
         
         return new sGCIncNode(node, info) implements sNode;
    }
    else if(!gComeC && buf === "gc_dec" && *info->p == '(') {
         info->p++;
         skip_spaces_and_lf();
         
         sNode*% node = expression();
         
         expected_next_character(')');
         
         return new sGCDecNode(node, info) implements sNode;
    }
    else if(!gComeC && buf === "gc_dec_nofree" && *info->p == '(') {
         info->p++;
         skip_spaces_and_lf();
         
         sNode*% node = expression();
         
         expected_next_character(')');
         
         return new sGCDecNoFreeNode(node, info) implements sNode;
    }
    else if(!gComeC && buf === "lock" && *info->p == '(') {
         info->p++;
         skip_spaces_and_lf();
         
         sNode*% node = expression();
         
         expected_next_character(')');
         
         return new sGCDecNoFreeNode(node, info) implements sNode;
    }
    else if(!gComeC && buf === "isheap" && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        var param_type, param_name,err = parse_type();
        if(!err) {
            err_msg(info, "parse_type failed");
            exit(2);
        }
        
        var type2 = solve_generics(param_type, info->generics_type, info);
        
        expected_next_character(')');
        
        return new sIsHeap(type2, info) implements sNode;
    }
    else if(buf === "ispointer" && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        var param_type, param_name,err = parse_type();
        if(!err) {
            err_msg(info, "parse_type failed");
            exit(2);
        }
        
        var type2 = solve_generics(param_type, info->generics_type, info);
        
        expected_next_character(')');
        
        return new sIsPointer(type2, info) implements sNode;
    }
    else if(buf === "using") {
        if(parsecmp("comelang")) {
            info->p += strlen("comelang");
            skip_spaces_and_lf();
            
            gComeC = false;
        
            return create_nothing_node();
        }
        else if(parsecmp("comelang-str")) {
            info->p += strlen("comelang-str");
            skip_spaces_and_lf();
            
            gComeStr = true;
        
            return create_nothing_node();
        }
        else if(parsecmp("comelang-pthread")) {
            info->p += strlen("comelang-pthread");
            skip_spaces_and_lf();
            
            gComePthread = true;
        
            return create_nothing_node();
        }
        else if(parsecmp("comelang-net")) {
            info->p += strlen("comelang-net");
            skip_spaces_and_lf();
            
            gComeNet = true;
        
            return create_nothing_node();
        }
        else if(parsecmp("c") || parsecmp("C")) {
            info->p += strlen("c");
            skip_spaces_and_lf();
            
            bool come_c = gComeC;
            gComeC = true;
            
            if(*info->p == '{') {
                sNode*% node = parse_normal_block(clang:true);
                
                gComeC = come_c;
                
                return node;
            }
            else {
                return create_nothing_node();
            }
        }
        else if(parsecmp("gc")) {
            info->p += strlen("gc");
            skip_spaces_and_lf();
        
            return create_nothing_node();
        }
        else if(parsecmp("no-gc")) {
            info->p += strlen("no-gc");
            skip_spaces_and_lf();
            
        
            return create_nothing_node();
        }
        else if(parsecmp("unsafe")) {
            info->p += strlen("unsafe");
            skip_spaces_and_lf();
        
            return create_nothing_node();
        }
        else if(parsecmp("no-null-check")) {
            info->p += strlen("no-null-check");
            skip_spaces_and_lf();
        
            return create_nothing_node();
        }
        else {
            err_msg(info, "invalid using");
            exit(2);
        }
    }
    else if(buf === "sizeof") {
        bool paren = false;
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            paren = true;
        }
        //expected_next_character('(');
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            if(paren && *info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            //expected_next_character(')');
            
            return new sSizeOfNode(type, info) implements sNode;
        }
        else {
            sNode*% exp;
            if(!paren) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                exp = expression_node();
                info.no_comma = no_comma;
            }
            else {
                exp = expression();
            }
            
            if(paren && *info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            //expected_next_character(')');
            
            return new sSizeOfExpNode(exp, info) implements sNode;
        }
    }
    else if(buf === "typeof") {
        //expected_next_character('(');
        
        bool paren = false;
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            paren = true;
        }
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            //expected_next_character(')');
            
            if(paren && *info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            return new sTypeOfNode(type, info) implements sNode;
        }
        else {
            sNode*% exp;
            if(!paren) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                exp = expression_node();
                info.no_comma = no_comma;
            }
            else {
                exp = expression();
            }
            
            //expected_next_character(')');
            
            if(paren && *info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            return new sTypeOfExpNode(exp, info) implements sNode;
        }
    }
    else if(buf === "dynamic_typeof") {
        //expected_next_character('(');
        
        bool paren = false;
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            paren = true;
        }
        
        sNode*% exp;
        if(!paren) {
            bool no_comma = info.no_comma;
            info.no_comma = true;
            exp = expression_node();
            info.no_comma = no_comma;
        }
        else {
            exp = expression();
        }
        
        //expected_next_character(')');
        
        if(paren && *info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        return new sDynamicTypeOf(exp, info) implements sNode;
    }
    else if(buf === "_Alignof") {
        bool paren = false;
        if(*info->p == '(') {
            paren = true;
            info->p++;
            skip_spaces_and_lf();
        }
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            expected_next_character(')');
            if(paren && *info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            return new sAlignOfNode(type, info) implements sNode;
        }
        else {
            sNode*% exp;
            if(!paren) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                exp = expression_node();
                info.no_comma = no_comma;
            }
            else {
                exp = expression();
            }
            
            return new sAlignOfExpNode(exp, info) implements sNode;
        }
    }
    else if(buf === "__alignof__") {
        bool paren = false;
        if(*info->p == '(') {
            paren = true;
            info->p++;
            skip_spaces_and_lf();
        }
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            if(paren && *info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            
            return new sAlignOfNode2(type, info) implements sNode;
        }
        else {
            sNode*% exp;
            if(!paren) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                exp = expression_node();
                info.no_comma = no_comma;
            }
            else {
                exp = expression();
            }
            
            return new sAlignOfExpNode2(exp, info) implements sNode;
        }
    }
    else if(buf === "_Alignas") {
        expected_next_character('(');
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                var word = parse_word();
                
                if(is_type_name(word)) {
                    is_type_name_flag = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name, err = parse_type();
            if(!err) {
                err_msg(info, "parse type");
                exit(2);
            }
            
            expected_next_character(')');
            
            return new sAlignAsNode(type, info) implements sNode;
        }
        else {
            var exp = expression();
            
            expected_next_character(')');
            
            return new sAlignAsExpNode(exp, info) implements sNode;
        }
    }
    
    return inherit(buf, head, head_sline, info);
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 94
{
   if(buf === "using") {
        if(parsecmp("comelang")) {
            info->p += strlen("comelang");
            skip_spaces_and_lf();
            
            gComeC = false;
        }
        else if(parsecmp("comelang-str")) {
            info->p += strlen("comelang-str");
            skip_spaces_and_lf();
            
            gComeStr = true;
        
            return create_nothing_node();
        }
        else if(parsecmp("comelang-pthread")) {
            info->p += strlen("comelang-pthread");
            skip_spaces_and_lf();
            
            gComePthread = true;
        
            return create_nothing_node();
        }
        else if(parsecmp("comelang-net")) {
            info->p += strlen("comelang-net");
            skip_spaces_and_lf();
            
            gComeNet = true;
        
            return create_nothing_node();
        }
        else if(parsecmp("c") || parsecmp("C")) {
            info->p += strlen("c");
            skip_spaces_and_lf();
            
            if(*info->p == '{') {
                info->p++;
                skip_spaces_and_lf(info);
                
                bool come_c = gComeC;
                gComeC = true;
                
                transpile_toplevel(true);
                
                gComeC = come_c;
            }
            else {
                gComeC = true;
            }
        }
        else if(parsecmp("gc")) {
            info->p += strlen("gc");
            skip_spaces_and_lf();
        }
        else if(parsecmp("no-gc")) {
            info->p += strlen("no-gc");
            skip_spaces_and_lf();
        }
        else if(parsecmp("unsafe")) {
            info->p += strlen("unsafe");
            skip_spaces_and_lf();
        }
        else {
            err_msg(info, "invalid using");
            exit(2);
        }
        
        return create_nothing_node();
    }
    
    return inherit(buf, head, head_sline, info);
}

sNode*% create_implements(sNode*% node, sType*% inf_type, sInfo* info=info)
{
    return new sImplementsNode(node, inf_type, info) implements sNode;
}

sNode*% post_position_operator(sNode*% node, sInfo* info) version 21
{
    if(!gComeC && parsecmp("implements")) {
        info->p += strlen("implements");
        skip_spaces_and_lf();
        
        var type3, name2,err = parse_type(parse_multiple_type:false);
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        sType*% inf_type = clone type3;
        
        return new sImplementsNode(node, inf_type, info) implements sNode;
    }
/*
    else if(*info->p == '~') {
        info->p ++;
        skip_spaces_and_lf();
        
        return new sAppendAnyFlagNode(node, info) implements sNode;
    }
*/
    else if(*info->p == '@') {
        info->p++;
        while(xisalnum(*info->p) || *info->p == '_') {
            info->p++;
        }
        skip_spaces_and_lf();
    }
    
    return inherit(node, info);
}


