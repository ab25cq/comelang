#include "common.h"

bool operator_overload_fun2(sType*% type, char* fun_name, sNode*% left_node, sNode*% middle_node, sNode*% right_node, CVALUE* left_value, CVALUE* middle_value, CVALUE* right_value, sInfo* info)
{
    sType*% generics_type = clone type;
    
    if(generics_type->mNoSolvedGenericsType) {
        generics_type = generics_type->mNoSolvedGenericsType;
    }
    
    sClass* klass = type->mClass;
    char* class_name = klass->mName;
    
    var fun_name2, operator_fun, generics_fun = get_method(fun_name, type, info);
    
    bool result = false;
    
    if(operator_fun) {
        sNode*% obj = left_node;
        list<tup: string, sNode*%>*% params =  new list<tup: string, sNode*%>();
        
        params.add((null, left_node));
        params.add((null, middle_node));
        params.add((null, right_node));
        
        sNode*% node = create_method_call(fun_name, obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
        
        node_compile(node).if {
            result = true;
        }
    }
    
    return result;
}

class sStoreFieldNode extends sNodeBase
{
    new(sNode* left, sNode*% right, string name, sInfo* info)
    {
        self.super();
    
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
        string self.mName = string(name);
    }
    
    string kind()
    {
        return string("sStoreFieldNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        sNode* right = self.mRight;
        string name = string(self.mName);
        
        node_compile(left).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type2 = left_value.type;
        
        if(left_type2.mNoSolvedGenericsType) {
            left_type2 = left_type2.mNoSolvedGenericsType;
        }
        if(left_type2.mClass.mName === "tuple1" || left_type2.mClass.mName === "tuple2" || left_type2.mClass.mName === "tuple3" || left_type2.mClass.mName === "tuple3" || left_type2.mClass.mName === "tuple4" || left_type2.mClass.mName === "tuple5")
        {
            for(int i=0; i<left_type2.mGenericsTypes.length(); i++) {
                if(name === left_type2.mGenericsTypes[i].mTupleName) {
                    name = xsprintf("v%d", i+1);
                }
            }
        }
        
        if(left_type2->mImmutable) {
            err_msg(info, "Immutable object can't change the fields");
            return true;
        }
        
        node_compile(right).elif {
            return false;
        }
        
        bool new_channel = right.kind() === "sNewChannel";
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        sType* right_type = right_value.type;
        
        sType*% left_type = left_value.type;
        
        sType*% left_type3 = left_type;
        
//        sType*% left_type2 = solve_generics(left_type, info.generics_type, info);
        
        sClass*% klass = info.classes[left_type3->mClass->mName]??;
        
        sType*% field_type = null;
        int index = 0;
        string child_field_name = null;
        bool child_field_is_pointer = false;
        
        if(klass->mFields == null) {
            err_msg(info, "%s fields are null", klass->mName);
            return true;
        }
        
        foreach(field, klass->mFields) {
            var field_name, field_type2 = field;
            
            if(field_name === name) {
                field_type = clone field_type2;
                break;
            };
            
            index++;
        }
        
        if(index == klass->mFields.length()) {
            index = 0;
            foreach(field, klass->mFields) {
                var field_name, field_type2 = field;
                
                sClass* klass2 = field_type2->mClass;
                
                if(klass2->mUnion) {
                    foreach(field2, klass2->mFields) {
                        var field_name2, field_type3 = field2;
                        
                        if(field_name2 === name) {
                            child_field_name = string(field_name);
                            if(field_type2->mPointerNum > 0) {
                                child_field_is_pointer = true;
                            }
                            field_type = clone field_type3;
                            break;
                        }
                    }
                    
                    if(child_field_name) {
                        break;
                    }
                }
                
                if(field_name === name) {
                    field_type = clone field_type2;
                    break;
                };
                
                index++;
            }
            
            if(index == klass->mFields.length() || field_type == null) {
                err_msg(info, "field not found(%s) in %s(1)", name, klass->mName);
                return true;
            }
        }
        
        if(field_type == null) {
            return true;
        }
        
        CVALUE*% come_value = new CVALUE();
        
        right_type = clone right_value.type;
        
        check_assign_type(s"\{name} is assigned to(1)", field_type, right_type, right_value);
        
        right_type = clone right_value.type;
        
        if(field_type->mHeap && !right_value.type->mHeap) {
            if(right_value.type->mClass->mName === "void" && right_value.type->mPointerNum == 1)
            {
            }
            else {
                if(!gComeGC) {
                    err_msg(info, "require right value as heap object(%s)(1)", name);
                    return true;
                }
            }
        }
        if(field_type->mHeap && right_type->mHeap && field_type->mPointerNum > 0 && right_type->mPointerNum > 0) 
        {
            if(left_value.type->mPointerNum == 1) {
                if(child_field_name) {
                    string c_value;
                    if(child_field_is_pointer) {
                        c_value = xsprintf("%s->%s->%s", left_value.c_value, child_field_name, name);
                    }
                    else {
                        c_value = xsprintf("%s->%s.%s", left_value.c_value, child_field_name, name);
                    }
                    decrement_ref_count_object(field_type, c_value, info);
                    std_move(field_type, right_type, right_value);
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s->%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s->%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    string c_value = xsprintf("%s->%s", left_value.c_value, name);
                    decrement_ref_count_object(field_type, c_value, info);
                    std_move(field_type, right_type, right_value);
                    come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else if(left_value.type->mPointerNum == 0) {
                if(child_field_name) {
                    string c_value;
                    if(child_field_is_pointer) {
                        c_value = xsprintf("%s.%s->%s", left_value.c_value, child_field_name, name);
                    }
                    else {
                        c_value = xsprintf("%s.%s.%s", left_value.c_value, child_field_name, name);
                    }
                    decrement_ref_count_object(field_type, c_value, info);
                    std_move(field_type, right_type, right_value);
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s.%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s.%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    string c_value = xsprintf("%s.%s", left_value.c_value, name);
                    decrement_ref_count_object(field_type, c_value, info);
                    std_move(field_type, right_value.type, right_value);
                    come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else {
                err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.", name, left_value.type->mPointerNum);
                return true;
            }
        }
        else if(field_type->mHeap && field_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mClass->mName === "void") 
        {
            if(left_value.type->mPointerNum == 1) {
                if(child_field_name) {
                    string c_value;
                    if(child_field_is_pointer) {
                        c_value = xsprintf("%s->%s->%s", left_value.c_value, child_field_name, name);
                    }
                    else {
                        c_value = xsprintf("%s->%s.%s", left_value.c_value, child_field_name, name);
                    }
                    decrement_ref_count_object(field_type, c_value, info);
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s->%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s->%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    string c_value = xsprintf("%s->%s", left_value.c_value, name);
                    decrement_ref_count_object(field_type, c_value, info);
                    come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else if(left_value.type->mPointerNum == 0) {
                if(child_field_name) {
                    string c_value;
                    if(child_field_is_pointer) {
                        c_value = xsprintf("%s.%s->%s", left_value.c_value, child_field_name, name);
                    }
                    else {
                        c_value = xsprintf("%s.%s.%s", left_value.c_value, child_field_name, name);
                    }
                    decrement_ref_count_object(field_type, c_value, info);
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s.%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s.%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    string c_value = xsprintf("%s.%s", left_value.c_value, name);
                    decrement_ref_count_object(field_type, c_value, info);
                    come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else {
                err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.", name, left_value.type->mPointerNum);
                return true;
            }
        }
        else if(field_type->mChannel && new_channel) {
            if(child_field_is_pointer) {
                come_value.c_value = xsprintf("(pipe(%s->%s), %s);\n", left_value.c_value, name, right_value.c_value);
            }
            else {
                come_value.c_value = xsprintf("(pipe(%s.%s), %s);\n", left_value.c_value, name, right_value.c_value);
            }
            
            come_value.type = clone right_value.type;
            come_value.var = null;
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        
            return true;
        }
        else {
            if(left_value.type->mPointerNum == 1) {
                if(child_field_name) {
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s->%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s->%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else if(left_value.type->mPointerNum == 0) {
                if(child_field_name) {
                    if(child_field_is_pointer) {
                        come_value.c_value = xsprintf("%s.%s->%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s.%s.%s=%s", left_value.c_value, child_field_name, name, right_value.c_value);
                    }
                }
                else {
                    come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
                }
            }
            else {
                err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.", name, left_value.type->mPointerNum);
                return true;
            }
        }
        
        come_value.type = clone field_type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
    
        return true;
    }
};

class sLoadFieldNode extends sNodeBase
{
    new(sNode* left, string name, sInfo* info)
    {
        self.super();
    
        sNode*% self.mLeft = clone left;
        string self.mName = string(name);
    }
    
    string kind()
    {
        return string("sLoadFieldNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        string name = string(self.mName);
        
        node_compile(left).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type2 = left_value.type;
        
        sType*% left_type3;
        if(left_type2.mNoSolvedGenericsType) {
            left_type3 = left_type2.mNoSolvedGenericsType;
        }
        else {
            left_type3 = left_type2;
        }
        if(left_type3.mClass.mName === "tuple1" || left_type3.mClass.mName === "tuple2" || left_type3.mClass.mName === "tuple3" || left_type3.mClass.mName === "tuple3" || left_type3.mClass.mName === "tuple4" || left_type3.mClass.mName === "tuple5")
        {
            for(int i=0; i<left_type3.mGenericsTypes.length(); i++) {
                if(name === left_type3.mGenericsTypes[i].mTupleName) {
                    name = xsprintf("v%d", i+1);
                }
            }
        }
        
        sType*% left_type = left_value.type;
        
        sType*% left_type3 = solve_generics(left_type, left_type, info);
        
        sClass* klass = left_type3->mClass;
        klass = info.classes[string(klass->mName)]??;
        
        sType*% field_type = null;
        int index = 0;
        bool child_field_is_pointer = false;
        string child_field_name = null;
        klass = info.classes[string(klass->mName)]??;
        if(klass == null || klass->mFields == null) {
            err_msg(info, "invalid class %s", klass->mName);
            return true;
        }
        foreach(field, klass->mFields) {
            var field_name, field_type2 = field;
            
            if(field_name === name) {
                field_type = clone field_type2;
                break;
            }
            
            index++;
        }
        
        if(index == klass->mFields.length()) {
            index = 0;
            foreach(field, klass->mFields) {
                var field_name, field_type2 = field;
                
                sClass* klass2 = field_type2->mClass;
                
                if(klass2->mUnion) {
                    foreach(field2, klass2->mFields) {
                        var field_name2, field_type3 = field2;
                        
                        if(field_name2 === name) {
                            child_field_name = string(field_name);
                            if(field_type2->mPointerNum > 0) {
                                child_field_is_pointer = true;
                            }
                            field_type = clone field_type3;
                            break;
                        }
                    }
                    
                    if(child_field_name) {
                        break;
                    }
                }
                
                if(field_name === name) {
                    field_type = clone field_type2;
                    break;
                }
                
                index++;
            }
            
            if(index == klass->mFields.length()) {
                err_msg(info, "field not found(%s) in %s(2)", name, klass->mName);
                return true;
            }
        }
        
        CVALUE*% come_value = new CVALUE();
        
        if(left_value.type->mPointerNum > 0) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    come_value.c_value = xsprintf("%s->%s->%s", left_value.c_value, child_field_name, name);
                }
                else {
                    come_value.c_value = xsprintf("%s->%s.%s", left_value.c_value, child_field_name, name);
                }
            }
            else {
                come_value.c_value = xsprintf("%s->%s", left_value.c_value, name);
            }
        }
        else {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    come_value.c_value = xsprintf("%s.%s->%s", left_value.c_value, child_field_name, name);
                }
                else {
                    come_value.c_value = xsprintf("%s.%s.%s", left_value.c_value, child_field_name, name);
                }
            }
            else {
                come_value.c_value = xsprintf("%s.%s", left_value.c_value, name);
            }
        }
        come_value.type = clone field_type;
        
        come_value.type = solve_generics(come_value.type, info->generics_type, info);
        
/*
        if(come_value.type->mNoSolvedGenericsType) {
            come_value.type = come_value.type->mNoSolvedGenericsType;
        }
*/
        come_value.var = null;
        
        if(field_type == null) {
            err_msg(info, "no field(%s)", name);
            return true;
        }
        
        if(come_value.type->mArrayNum.length() == 1) {
            come_value.type->mOriginalLoadVarType = clone come_value.type;
            
            come_value.type->mArrayNum.reset();
            come_value.type->mPointerNum++;
            come_value.type->mOriginalTypeNamePointerNum = come_value.type->mPointerNum;
        }
        
        info.stack.push_back(come_value);
    
        return true;
    }
};

sNode*% load_field(sNode*% left, string name, sInfo* info=info)
{
    return new sLoadFieldNode(left, name, info) implements sNode;
}

class sStoreArrayNode extends sNodeBase
{
    new(sNode* left, sNode*% right, list<sNode*%>*% array_num, bool quote, sInfo* info)
    {
        self.super();
    
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
        list<sNode*%>*% self.mArrayNum = clone array_num;
        bool self.mQuote = quote;
    }
    
    string kind()
    {
        return string("sStoreArrayNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% left = self.mLeft;
        sNode*% right = self.mRight;
        list<sNode*%>* array_num_nodes = self.mArrayNum;
        
        node_compile(left).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type = left_value.type;
        
        if(left_type->mImmutable) {
            err_msg(info, "Immutable object can't change the elements");
            return true;
        }
        
        list<CVALUE*%>*% array_num = new list<CVALUE*%>();
        
        foreach(it, array_num_nodes) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% c_value = get_value_from_stack(-1, info);
            
            array_num.push_back(c_value);
        }
        
        char* fun_name = "operator_store_element";
        var fun_name2, operator_fun, generics_fun = get_method(fun_name, left_type, info);
        
        node_compile(right).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType* right_type = right_value.type;
        
        sClass* klass = left_value.type->mClass;
        
        sType*% type = clone left_value.type;
        
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            sNode*% middle = array_num_nodes[0];
            calling_fun = operator_overload_fun2(type, fun_name, left, middle, right, left_value, array_num[0], right_value, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            if(left_type.mArrayNum.length() > 0) {
                for(int i=0; i<array_num.length(); i++) {
                    left_type.mArrayNum.delete(-1, -1);
                }
            }
            else if(left_type->mPointerNum > 0) {
                left_type->mPointerNum -= array_num.length();
                
                if(left_type->mPointerNum < 0) {
                    left_type->mPointerNum = 0;
                }
            }
            
            buffer*% buf = new buffer();
            
            buf.append_str(left_value.c_value);
            
            foreach(it, array_num) {
                buf.append_format("[%s]", it.c_value);
            }
            
            string left_value_code = buf.to_string();
            
            check_assign_type(s"array is assinged to(2)", left_type, right_type, right_value);
            if(left_type->mHeap && right_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0) 
            {
                if(left_value.type->mPointerNum >= 1) {
                    decrement_ref_count_object(left_type,left_value_code, info);
                    std_move(left_type, right_type, right_value);
                    come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
                }
                else if(left_value.type->mPointerNum == 0) {
                    decrement_ref_count_object(left_type,left_value_code, info);
                    std_move(left_type, right_type, right_value);
                    come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
                }
                else {
                    err_msg(info, "Invalid left_type. The name is %s. The pointer num is %d.(1)", left_value_code, left_value.type->mPointerNum);
                    return true;
                }
            }
            else {
                if(left_value.type->mPointerNum >= 1) {
                    come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
                }
                else if(left_value.type->mPointerNum == 0) {
                    come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
                }
                else {
                    err_msg(info, "Invalid left_type. The name is %s. The pointer num is %d.(2)", left_value_code, left_value.type->mPointerNum);
                    return true;
                }
            }
            sType*% result_type = clone left_type;
            result_type.mArrayNum = new list<sNode*%>();
            come_value.type = result_type;
            come_value.var = null;
            
            come_value.type = solve_generics(come_value.type, info->generics_type, info);
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
    
        return true;
    }
};

class sLoadArrayNode extends sNodeBase
{
    new(sNode* left, list<sNode*%>*% array_num, bool quote, bool break_guard, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.mArrayNum = clone array_num;
        bool self.mBreakGuard = break_guard;
    
        sNode*% self.mLeft = clone left;
        bool self.mQuote = quote;
    }
    
    string kind()
    {
        return string("sLoadArrayNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% left = self.mLeft;
        list<sNode*%>* array_num_nodes = self.mArrayNum;
        
        node_compile(left).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type = clone left_value.type;
        
        list<CVALUE*%>*% array_num = new list<CVALUE*%>();
        
        foreach(it, array_num_nodes) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% c_value = get_value_from_stack(-1, info);
            
            array_num.push_back(c_value);
        }
        
        sType*% type = clone left_value.type;
        
        char* fun_name = "operator_load_element";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left, array_num_nodes[0], left_value, array_num[0], self.mBreakGuard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            buffer*% buf = new buffer();
            
            buf.append_str(left_value.c_value);
            
            foreach(it, array_num) {
                buf.append_format("[%s]", it.c_value);
            }
            
            string left_value_code = buf.to_string();
            
            come_value.c_value = xsprintf("%s", left_value_code);
            
            sType*% result_type = clone left_type;
            
            if(result_type->mOriginalLoadVarType) {
                result_type = result_type->mOriginalLoadVarType;
            }
            
            if(result_type.mArrayNum.length() > 0) {
                int n = result_type.mArrayNum.length() - array_num.length();
                
                if(n == 0) {
                    result_type = clone left_type;
                    if(left_type->mOriginalLoadVarType) {
                        result_type = clone left_type->mOriginalLoadVarType;
                    }
                    result_type->mArrayNum.reset();
                }
                else if(n > 0) {
                    for(int i=0; i<n; i++) {
                        result_type.mArrayNum.delete(-1, -1);
                    }
                    result_type.mPointerNum++;
                }
                else if(n < 0) {
                    result_type.mArrayNum.reset();
                    result_type.mPointerNum += n;
                    
                    if(result_type.mPointerNum < 0) {
                        result_type.mPointerNum = 0;
                    }
                }
            }
            else {
                if(result_type->mPointerNum > 0) {
                    result_type->mPointerNum -= array_num.length();
                    
                    if(result_type->mPointerNum < 0) {
                        result_type->mPointerNum = 0;
                    }
                }
            }
            
            come_value.type = clone result_type;
            come_value.var = null;
            
            come_value.type = solve_generics(clone come_value.type, info->generics_type, info);
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
    
        return true;
    }
};

class sLoadRangeArrayNode extends sNodeBase
{
    new(sNode* left, list<sNode*%>*% array_num, bool quote, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.mArrayNum = clone array_num;
    
        sNode*% self.mLeft = clone left;
        bool self.mQuote = quote;
    }
    
    string kind()
    {
        return string("sLoadRangeArrayNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% left = self.mLeft;
        list<sNode*%>* array_num_nodes = self.mArrayNum;
        
        node_compile(left).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% left_type = clone left_value.type;
        
        list<CVALUE*%>*% array_num = new list<CVALUE*%>();
        
        foreach(it, array_num_nodes) {
            node_compile(it).elif {
                return false;
            }
            
            CVALUE*% c_value = get_value_from_stack(-1, info);
            
            array_num.push_back(c_value);
        }
        
        sType*% type = clone left_value.type;
        
        char* fun_name = "operator_load_range_element";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            sNode*% middle = array_num_nodes[0];
            sNode*% right = array_num_nodes[1];
            calling_fun = operator_overload_fun2(type, fun_name, left, middle, right, left_value, array_num[0], array_num[1], info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            buffer*% buf = new buffer();
            
            buf.append_str(left_value.c_value);
            
            foreach(it, array_num) {
                buf.append_format("[%s]", it.c_value);
            }
            
            string left_value_code = buf.to_string();
            
            come_value.c_value = xsprintf("%s", left_value_code);
            
            sType*% result_type = clone left_type;
            
            if(result_type->mOriginalLoadVarType) {
                result_type = result_type->mOriginalLoadVarType;
            }
            
            if(result_type.mArrayNum.length() > 0) {
                int n = result_type.mArrayNum.length() - array_num.length();
                
                if(n == 0) {
                    result_type = clone left_type;
                    if(left_type->mOriginalLoadVarType) {
                        result_type = clone left_type->mOriginalLoadVarType;
                    }
                    result_type->mArrayNum.reset();
                }
                else if(n > 0) {
                    for(int i=0; i<n; i++) {
                        result_type.mArrayNum.delete(-1, -1);
                    }
                }
                else if(n < 0) {
                    result_type.mArrayNum.reset();
                    result_type.mPointerNum += n;
                    
                    if(result_type.mPointerNum < 0) {
                        result_type.mPointerNum = 0;
                    }
                }
            }
            else {
                if(result_type->mPointerNum > 0) {
                    result_type->mPointerNum -= array_num.length();
                    
                    if(result_type->mPointerNum < 0) {
                        result_type->mPointerNum = 0;
                    }
                }
            }
            
            come_value.type = clone result_type;
            come_value.var = null;
            
            come_value.type = solve_generics(come_value.type, info->generics_type, info);
            
            info.stack.push_back(come_value);
            
            add_come_last_code(info, "%s", come_value.c_value);
        }
    
        return true;
    }
};

sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 18
{
    err_msg(info, "parse_method_call is failed");
    exit(2);
    
    return (sNode*%)null;
}

sNode*% store_field(sNode* left, sNode*% right, string name, sInfo* info)
{
    return new sStoreFieldNode(left, right, name, info) implements sNode;
}

sNode*% post_position_operator(sNode*% node, sInfo* info) version 99
{
    while(true){
        /// backtrace ///
        bool range_array = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(*info->p == '[') {
                info->p++;
                skip_spaces_and_lf();
                
                bool no_comma = info.no_comma;
                bool no_output_err = info.no_output_err;
                bool no_output_come_code = info.no_output_come_code;
                info->no_output_err = true;
                info->no_comma = true;
                info->no_output_come_code = true;
                sNode*% exp = expression();
                info->no_comma = no_comma;
                info->no_output_err = no_output_err;
                info->no_output_come_code = no_output_come_code;
                
                if(*info->p == '.' && *(info->p+1) == '.') {
                    range_array = true;
                }
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(!node.terminated() && range_array && (*info->p == '\\' && *(info->p+1) == '[' || *info->p == '[')) {
            bool quote = *info->p == '\\';
            if(quote) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf();
            
            list<sNode*%>*% array_num = new list<sNode*%>();
            
            skip_pointer_attribute();
            
            sNode*% node2 = expression();
            
            array_num.push_back(node2);
            
            if(*info->p == '.' && *(info->p+1) == '.') {
                info->p += 2;
                skip_spaces_and_lf(info);
                
                skip_pointer_attribute();
                
                sNode*% node3 = expression();
                
                array_num.push_back(node3);
                
                expected_next_character(']');
            }
            
            node = new sLoadRangeArrayNode(node, array_num, quote, info) implements sNode;
        }
        else if(!node->terminated() && !range_array && (*info->p == '\\' && *(info->p+1) == '[' || *info->p == '[')) {
            bool quote = *info->p == '\\';
            if(quote) {
                info->p++;
            }
            
            bool range = false;
            list<sNode*%>*% array_num = new list<sNode*%>();
            while(1) {
                bool range_array2 = false;
                {
                    char* p = info.p;
                    int sline = info.sline;
                    
                    if(*info->p == '[') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        bool no_comma = info.no_comma;
                        bool no_output_err = info.no_output_err;
                        bool no_output_come_code = info.no_output_come_code;
                        info->no_output_err = true;
                        info->no_comma = true;
                        info->no_output_come_code = true;
                        sNode*% exp = expression();
                        info->no_comma = no_comma;
                        info->no_output_err = no_output_err;
                        info->no_output_come_code = no_output_come_code;
                        
                        if(*info->p == '.' && *(info->p+1) == '.') {
                            range_array2 = true;
                        }
                    }
                    
                    info.p = p;
                    info.sline = sline;
                }
                
                if(range_array2) {
                    break;
                }
                else if(*info->p == '[') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    skip_pointer_attribute();
                    
                    sNode*% node2 = expression();
                    
                    array_num.push_back(node2);
                    
                    if(*info->p == ']') {
                        info->p++;
                        skip_spaces_and_lf();
                    }
                    else {
                        err_msg(info, "require ] character");
                        exit(2);
                    }
                }
                else {
                    break;
                }
            }
            
            if(*info->p == '?' && *(info->p+1) == '?') {
                info->p+=2;
                skip_spaces_and_lf();
            }
            
            if(!info.no_assign && *info->p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>') {
                info->p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                
                sNode*% right_node = expression();
                
                parse_sharp();
                
                node = new sStoreArrayNode(node, right_node, array_num, quote, info) implements sNode;
            }
            else {
                node = new sLoadArrayNode(node, array_num, quote, false@break_guard, info) implements sNode;
            }
        }
        else if(!node->terminated() && *info->p == '?' && *(info->p+1) == '?') {
            info->p+=2;
            skip_spaces_and_lf();
            
            parse_sharp();
        }
        else if(!node->terminated() && (*info->p == '.' && *(info->p+1) != '.') || (*info->p == '-' && *(info->p+1) == '>')) {
            if(*info->p == '.') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                info->p+=2;
                skip_spaces_and_lf();
            }
            
            parse_sharp();
            
            string field_name = parse_word();
            
            parse_sharp();
            
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
            
            if(!info.no_assign && *info->p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>') {
                info->p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                
                sNode*% right_node = expression();
                
                node = new sStoreFieldNode(node, right_node, field_name, info) implements sNode;
            }
            else if(field_name === "expect") {
                node = parse_expect_method_call(clone node, info);
            }
            else if(!gComeC && (*info->p == '(' || *info->p == '{' || parse_method_generics_type)) {
                if(field_name === "if") 
                {
                    node = parse_if_method_call(clone node, info);
                }
                else if(field_name === "elif") {
                    node = parse_elif_method_call(clone node, info);
                }
                else if(field_name === "case") {
                    node = parse_match(clone node, info);
                }
                else if(field_name === "less") {
                    node = parse_less_method_call(clone node, info);
                }
                else if(field_name === "rescue") {
                    node = parse_rescue_method_call(clone node, info);
                }
                else {
                    node = parse_method_call(clone node, field_name, info);
                }
            }
            else {
                node = new sLoadFieldNode(node, field_name, info) implements sNode;
            }
        }
        else {
            sNode*% node2 = inherit(node, info);
            
            if(node2 == null) {
                break;
            }
            
            node = node2;
        }
    }
    
    return node;
}
