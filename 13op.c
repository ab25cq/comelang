#include "common.h"

bool operator_overload_fun(sType*% type, char* fun_name, sNode*% left_node, sNode*% right_node, CVALUE*% left_value, CVALUE*% right_value, bool break_guard, sInfo* info)
{
    sType*% generics_type = clone type;
    if(generics_type->mNoSolvedGenericsType) {
        generics_type = generics_type->mNoSolvedGenericsType;
    }
    
    if(type->mNoSolvedGenericsType) {
        type = type->mNoSolvedGenericsType;
    }
    sClass* klass = type->mClass;
    char* class_name = klass->mName;
    
    var fun_name2, operator_fun, generics_fun = get_method(fun_name, type, info);
    
    bool result = false;
    
    if(operator_fun && (type->mGenericsTypes.length() > 0 || (left_value.type.mClass.mName === right_value.type.mClass.mName && left_value.type.mPointerNum == right_value.type.mPointerNum) || fun_name === "operator_mult")) {
        sNode*% obj = left_node;
        list<tup: string, sNode*%>*% params =  new list<tup: string, sNode*%>();
        
        params.add((null, left_node));
        params.add((null, right_node));
        
        sNode*% node = create_method_call(fun_name, obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
        
        node_compile(node).if {
            result = true;
        }
    }
    
    return result;
}

class sNullNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sNullNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("((void*)0)");
        come_value.type = new sType(s"void*");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
    
        return true;
    }
};

sNode*% create_null_node(sInfo* info=info)
{
    return new sNullNode(info) implements sNode;
}

class sAddNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
        bool self.mQuote = quote;
    }
    
    string kind()
    {
        return string("sAddNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_add";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            sType*% result_type = clone left_value.type;
            if(right_value.type->mPointerNum > 0) {
                result_type = clone right_value.type;
            }
            
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s+%s", left_value.c_value, right_value.c_value);
            come_value.type = clone result_type;
            come_value.type->mHeap = false;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sSubNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
        bool self.mQuote = quote;
    }
    
    string kind()
    {
        return string("sSubNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_sub";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            sType*% result_type = clone left_value.type;
            if(left_value.type->mPointerNum > 0 && right_value.type->mPointerNum > 0) {
                result_type = new sType(s"long");
            }
            
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s-%s", left_value.c_value, right_value.c_value);
            come_value.type = clone result_type;
            come_value.type->mHeap = false;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sMultNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sMultNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_mult";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s*%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.type->mHeap = false;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sDivNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sDivNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_div";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s/%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.type->mHeap = false;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sModNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sModNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_mod";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s%%%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.type->mHeap = false;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sLShiftNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
        
        bool self.mQuote = quote;
    
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sLShiftNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_lshift";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s<<%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.type->mHeap = false;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
}

class sRShiftNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sRShiftNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_rshift";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s>>%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.type->mHeap = false;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sGtEqNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sGtEqNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_gteq";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s>=%s", left_value.c_value, right_value.c_value);
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sLtEqNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sLtEqNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_lteq";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s<=%s", left_value.c_value, right_value.c_value);
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sLtNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sLtNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_lt";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s<%s", left_value.c_value, right_value.c_value);
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sGtNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sGtNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_gt";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s>%s", left_value.c_value, right_value.c_value);
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sEqNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sEqNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode* left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode* right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s==%s", left_value.c_value, right_value.c_value);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
    
        return true;
    }
};

class sNotEqNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sNotEqNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode* left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode* right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s!=%s", left_value.c_value, right_value.c_value);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
    
        return true;
    }
};

class sEq2Node extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sEq2Node");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_equals";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {

            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s==%s", left_value.c_value, right_value.c_value);
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sNotEq2Node extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sNotEq2Node");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_not_equals";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s!=%s", left_value.c_value, right_value.c_value);
            come_value.type = new sType(s"int");
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sAndNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sAndNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_and";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s&%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.type->mHeap = false;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sXOrNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sXOrNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_xor";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s^%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.type->mHeap = false;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sOrNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sOrNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_or";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s|%s", left_value.c_value, right_value.c_value);
            come_value.type = clone left_value.type;
            come_value.type->mHeap = false;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sAndAndNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sAndAndNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_andand";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s&&%s", left_value.c_value, right_value.c_value);
            come_value.type = new sType(s"int");
            come_value.var = left_value.var;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sOrOrNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, bool quote, sInfo* info)
    {
        self.super();
    
        bool self.mQuote = quote;
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sOrOrNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode*% left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode*% right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_oror";
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun(type, fun_name, left_node, right_node, left_value, right_value, false@break_guard, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s||%s", left_value.c_value, right_value.c_value);
            come_value.type = new sType(s"int");
            come_value.var = left_value.var;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
    
        return true;
    }
};

class sCommaNode extends sNodeBase
{
    new(sNode*% left, sNode*% right, sInfo* info)
    {
        self.super();
    
        sNode*% self.mLeft = clone left;
        sNode*% self.mRight = clone right;
    }
    
    string kind()
    {
        return string("sCommaNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode* left_node = self.mLeft;
    
        node_compile(left_node).elif {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sNode* right_node = self.mRight;
    
        node_compile(right_node).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s,%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
    
        return true;
    }
};

class sConditionalNode extends sNodeBase
{
    new(sNode*% value1, sNode*% value2, sNode*% value3, sInfo* info)
    {
        self.super();
    
        sNode*% self.mValue1 = clone value1;
        sNode*% self.mValue2 = clone value2;
        sNode*% self.mValue3 = clone value3;
    }
    
    string kind()
    {
        return string("sConditionalNode");
    }
    
    bool compile(sInfo* info)
    {
        bool in_conditional_operator = info.in_conditional_operator;
        info.in_conditional_operator = true;
        
        /// compile expression ///
        sNode* value1 = self.mValue1;
    
        node_compile(value1).elif {
            return false;
        }
        
        CVALUE*% value1_value = get_value_from_stack(-1, info);
        
        sNode* value2 = self.mValue2;
    
        node_compile(value2).elif {
            return false;
        }
        
        CVALUE*% value2_value = get_value_from_stack(-1, info);
        
        sNode* value3 = self.mValue3;
    
        node_compile(value3).elif {
            return false;
        }
        
        CVALUE*% value3_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("((%s)?(%s):(%s))", value1_value.c_value, value2_value.c_value, value3_value.c_value);
        come_value.type = clone value2_value.type;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        info.in_conditional_operator = in_conditional_operator;
    
        return true;
    }
};

sNode*% conditional_node(sNode*% value1, sNode*% value2, sNode*% value3, sInfo* info)
{
    return new sConditionalNode(value1, value2, value3, info) implements sNode;
}

sNode*% mult_exp(sInfo* info)
{
    sNode*% node = expression_node(info);
    
    parse_sharp()

    while(*info->p) {
        if(!node.terminated() && *info->p == '*' && *(info->p+1) != '=') {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = expression_node(info);
            
            info.sline_real = sline_real;
            
            node = new sMultNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '/' && *(info->p+1) != '=' && *(info->p+1) != '*' && *(info->p-1) != '*') {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = expression_node(info);
            info.sline_real = sline_real;
            
            node = new sDivNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '%' && *(info->p+1) != '=') {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = expression_node(info);
            info.sline_real = sline_real;
            
            node = new sModNode(node, right, false@quote, info) implements sNode;
        }
        else if(!node.terminated() && *info->p == '\\' && *(info->p+1) == '*' && *(info->p+2) != '=') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = expression_node(info);
            info.sline_real = sline_real;
            
            node = new sMultNode(node, right, true@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '/' && *(info->p+2) != '=') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = expression_node(info);
            info.sline_real = sline_real;
            
            node = new sDivNode(node, right, true@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '%' && *(info->p+2) != '=') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = expression_node(info);
            info.sline_real = sline_real;
            
            node = new sModNode(node, right, true@quote, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();
    
    return node;
}

sNode*% add_exp(sInfo* info)
{
    sNode*% node = mult_exp(info);
    
    parse_sharp()

    while(*info->p) {
        if(*info->p == '+' && *(info->p+1) != '=' && *(info->p+1) != '+') 
        {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = mult_exp(info);
            info.sline_real = sline_real;
            
            node = new sAddNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '-' && *(info->p+1) != '=' && *(info->p+1) != '-' && *(info->p+1) != '>') 
        {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = mult_exp(info);
            info.sline_real = sline_real;
            
            node = new sSubNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '+' && *(info->p+2) != '=' && *(info->p+2) != '+') 
        {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = mult_exp(info);
            info.sline_real = sline_real;
            
            node = new sAddNode(node, right, true@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '-' && *(info->p+2) != '=' && *(info->p+2) != '-' && *(info->p+2) != '>') 
        {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = mult_exp(info);
            info.sline_real = sline_real;
            
            node = new sSubNode(node, right, true@quote, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();
    
    return node;
}

sNode*% shift_exp(sInfo* info)
{
    parse_sharp();
    
    sNode*% node = add_exp(info);
    
    parse_sharp()

    while(*info->p) {
        if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) != '=') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = add_exp(info);
            info.sline_real = sline_real;
            
            node = new sLShiftNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) != '=' && *(info->p+2) != '>') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = add_exp(info);
            info.sline_real = sline_real;
            
            node = new sRShiftNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '<' && *(info->p+2) == '<' && *(info->p+3) != '=') {
            info->p+=3;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = add_exp(info);
            info.sline_real = sline_real;
            
            node = new sLShiftNode(node, right, true@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '>' && *(info->p+2) == '>' && *(info->p+3) != '=' && *(info->p+3) != '>') {
            info->p+=3;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = add_exp(info);
            info.sline_real = sline_real;
            
            node = new sRShiftNode(node, right, true@quote, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();
    
    return node;
}

sNode*% comparison_exp(sInfo* info)
{
    parse_sharp();
    
    sNode*% node = shift_exp(info);
    
    parse_sharp()

    while(*info->p) {
        if(*info->p == '>' && *(info->p+1) == '=') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = shift_exp(info);
            info.sline_real = sline_real;
            
            node = new sGtEqNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '<' && *(info->p+1) == '=') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = shift_exp(info);
            info.sline_real = sline_real;
            
            node = new sLtEqNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '>' && *(info->p+1) != '>') {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = shift_exp(info);
            info.sline_real = sline_real;
            
            node = new sGtNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '<' && *(info->p+1) != '<' && *(info->p+1) != '-') {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = shift_exp(info);
            info.sline_real = sline_real;
            
            node = new sLtNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '>' && *(info->p+2) == '=') {
            info->p+=3;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = shift_exp(info);
            info.sline_real = sline_real;
            
            node = new sGtEqNode(node, right, true@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '<' && *(info->p+2) == '=') {
            info->p+=3;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = shift_exp(info);
            info.sline_real = sline_real;
            
            node = new sLtEqNode(node, right, true@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '>' && *(info->p+2) != '>') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = shift_exp(info);
            info.sline_real = sline_real;
            
            node = new sGtNode(node, right, true@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '<' && *(info->p+2) != '<' && *(info->p+2) != '-') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = shift_exp(info);
            info.sline_real = sline_real;
            
            node = new sLtNode(node, right, true@quote, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();
    
    return node;
}

sNode*% eq_exp(sInfo* info)
{
    parse_sharp();
    
    sNode*% node = comparison_exp(info);
    
    parse_sharp()

    while(*info->p) {
        if(*info->p == '=' && *(info->p+1) == '=' && *(info->p+2) == '=') {
            info->p+=3;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = comparison_exp(info);
            info.sline_real = sline_real;
            
            node = new sEq2Node(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '=' && *(info->p+1) == '=') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = comparison_exp(info);
            info.sline_real = sline_real;
            
            node = new sEqNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '!' && *(info->p+1) == '=' && *(info->p+2) == '=') {
            info->p+=3;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = comparison_exp(info);
            info.sline_real = sline_real;
            
            node = new sNotEq2Node(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = comparison_exp(info);
            info.sline_real = sline_real;
            
            node = new sNotEqNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '=' && *(info->p+2) == '=' && *(info->p+3) == '=') {
            info->p+=4;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = comparison_exp(info);
            info.sline_real = sline_real;
            
            node = new sEq2Node(node, right, true@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '=' && *(info->p+2) == '=') {
            info->p+=3;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = comparison_exp(info);
            info.sline_real = sline_real;
            
            node = new sEqNode(node, right, true@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '!' && *(info->p+2) == '=' && *(info->p+3) == '=') {
            info->p+=4;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = comparison_exp(info);
            info.sline_real = sline_real;
            
            node = new sNotEq2Node(node, right, true@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '!' && *(info->p+2) == '=') {
            info->p+=3;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = comparison_exp(info);
            info.sline_real = sline_real;
            
            node = new sNotEqNode(node, right, true@quote, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();
    
    return node;
}

sNode*% and_exp(sInfo* info)
{
    parse_sharp();
    
    sNode*% node = eq_exp(info);

    parse_sharp();

    while(*info->p) {
        if(!node->terminated() && *info->p == '&' && *(info->p+1) != '&' && *(info->p+1) != '=') {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = eq_exp(info);
            info.sline_real = sline_real;

            node = new sAndNode(node, right, false@quote, info) implements sNode;
        }
        else if(!node->terminated() && *info->p == '\\' && *(info->p+1) == '&' && *(info->p+2) != '&' && *(info->p+2) != '=') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = eq_exp(info);
            info.sline_real = sline_real;

            node = new sAndNode(node, right, true@quote, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();

    return node;
}

sNode*% xor_exp(sInfo* info)
{
    parse_sharp();
    
    sNode*% node = and_exp(info);

    parse_sharp();

    while(*info->p) {
        if(*info->p == '^' && *(info->p+1) != '=') {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = and_exp(info);
            info.sline_real = sline_real;

            node = new sXOrNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '^' && *(info->p+2) != '=') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = and_exp(info);
            info.sline_real = sline_real;

            node = new sXOrNode(node, right, true@quote, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();

    return node;
}

sNode*% or_exp(sInfo* info)
{
    parse_sharp();
    
    sNode*% node = xor_exp(info);

    parse_sharp();

    while(*info->p) {
        if(*info->p == '|' && *(info->p+1) != '=' && *(info->p+1) != '|') {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = xor_exp(info);
            info.sline_real = sline_real;

            node = new sOrNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '|' && *(info->p+2) != '=' && *(info->p+2) != '|') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = xor_exp(info);
            info.sline_real = sline_real;

            node = new sOrNode(node, right, true@quote, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();

    return node;
}

sNode*% andand_exp(sInfo* info)
{
    parse_sharp();
    
    sNode*% node = or_exp(info);

    parse_sharp();

    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = or_exp(info);
            info.sline_real = sline_real;

            node = new sAndAndNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '&' && *(info->p+2) == '&') {
            info->p+=3;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = or_exp(info);
            info.sline_real = sline_real;

            node = new sAndAndNode(node, right, true@quote, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();

    return node;
}

sNode*% oror_exp(sInfo* info)
{
    parse_sharp();
    
    sNode*% node = andand_exp(info);

    parse_sharp();

    while(*info->p) {
        if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = andand_exp(info);
            info.sline_real = sline_real;

            node = new sOrOrNode(node, right, false@quote, info) implements sNode;
        }
        else if(*info->p == '\\' && *(info->p+1) == '|' && *(info->p+2) == '|') {
            info->p+=3;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% right = andand_exp(info);
            info.sline_real = sline_real;

            node = new sOrOrNode(node, right, true@quote, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();

    return node;
}

sNode*% comma_exp(sInfo* info)
{
    parse_sharp();
    
    sNode*% node = oror_exp(info);
    
    parse_sharp();

    while(*info->p) {
        if(!info.no_comma && *info->p == ',') {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            sNode*% node2 = comma_exp(info);
            info.sline_real = sline_real;
            
            node = new sCommaNode(node, node2, info) implements sNode;
        }
        else {
            break;
        }
    }
    
    parse_sharp();

    return node;
}

sNode*% conditional_exp(sInfo* info)
{
    parse_sharp();
    
    sNode*% node = comma_exp(info);
    
    parse_sharp();

    while(*info->p) {
        if(*info->p == '?') {
            info->p++;
            int sline_real = info.sline_real;
            info.sline_real = info.sline;
            skip_spaces_and_lf();

            parse_sharp();

            sNode*% value1;
            if(*info->p == ':') {
                value1 = new sNullNode(info) implements sNode;
            }
            else {
                bool no_label = info->no_label;
                info->no_label = true;
                value1 = conditional_exp(info);
                info->no_label = no_label;
            }

            parse_sharp();

            expected_next_character(':');

            sNode*% value2 = conditional_exp(info);

            parse_sharp();
            info.sline_real = sline_real;

            node = new sConditionalNode(node, value1, value2, info) implements sNode;
        }
        else {
            break;
        }
    }

    parse_sharp();
    
    return node;
}

sNode*% expression(sInfo* info=info) version 13
{
    parse_sharp();

    sNode*% node = conditional_exp(info);
    
    return node;
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 13
{
    if(!gComeC && buf === "null") {
        return new sNullNode(info) implements sNode;
    }
    
    return inherit(buf, head,head_sline, info);
}

sNode*% create_less(sNode*% node, sNode*% right, sInfo* info)
{
    return new sLtNode(node, right, false@quote, info) implements sNode;
}
