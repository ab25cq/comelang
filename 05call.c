#include "common.h"
#include <poll.h>

class sReturnNode extends sNodeBase
{
    new(sNode*% value, string value_source, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
        string self.value_source = clone value_source;
    }
    
    string kind()
    {
        return string("sReturnNode");
    }
    
    bool compile(sInfo* info)
    {
        if(self.value) {
            sFun* come_fun = info.come_fun;
            
            sType*% result_type = clone come_fun.mResultType;
            
            sType*% result_type2 = solve_generics(result_type, info.generics_type, info);
            
            sType* result_type3 = result_type2->mNoSolvedGenericsType.v1;
            if(result_type2->mNoSolvedGenericsType.v1) {
                result_type3 = result_type2->mNoSolvedGenericsType.v1;
            }
            else {
                result_type3 = result_type2;
            }
            
            if(result_type->mException) {
                if(self.value.kind() === "sNoneNode") {
                }
                else {
                    self.value = create_some(self.value, info);
                }
            }
            
            if(!node_compile(self.value)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
            
            sType*% come_value_type = solve_generics(come_value.type, info.generics_type, info);
            
            info->function_result_type = clone come_value.type;
            
            if(gComeC) {
                add_come_code(info, "return %s;\n", come_value.c_value);
            }
            else if(info.come_fun.mName !== "main" && info.come_fun.mNoResultType && !existance_free_objects_on_return(come_fun->mBlock, info, come_value.var, false@top_block) && !existance_free_right_value_objects(info)) {
                //add_last_code_to_source(info);
                
                add_come_code(info, "return %s;\n", come_value.c_value);
            }
            else {
                static int num_result = 0;
                
                string var_name = xsprintf("__result%d__", ++num_result);
                int num_result_stack = num_result;
/*
                if(come_value_type->mHeap && result_type2->mHeap && result_type2->mPointerNum > 0 && come_value_type->mPointerNum > 0)
                {
                    std_move(result_type2, come_value_type, come_value);
                
                    append_object_to_right_values2(come_value, come_value_type, info, true@decrement_ref_count);
                }
*/
                
                if(!info.come_fun.mNoResultType) {
                    if(!(strlen(result_type2->mClass->mName) > strlen("tuple") && memcmp(result_type2->mClass->mName, "tuple", strlen("tuple")) == 0)) {
                        check_assign_type("result type", result_type2, come_value_type, come_value);
                    }
                    
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(result_type2, var_name));
                    add_come_code(info, "%s = gComeFunResultObject = __result_obj__ = %s;\n", var_name, come_value.c_value);
                }
                else {
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(result_type2, var_name));
                    add_come_code(info, "%s = %s;\n", var_name, come_value.c_value);
                }
                add_last_code_to_source(info);
        
                free_objects_on_return(come_fun.mBlock, info, come_value.var, false@top_block);
                free_right_value_objects(info);
                //free_exception_right_value_objects(info);

                if(info->block_level == 1) {
                    info->inhibits_output_code = true;
                    
                    if(info->match_it_var) {
                        foreach(it, info->match_it_var) {
                            free_object(it->mType, it->mCValueName, false@no_decrement, false@no_free, info);
                        }
                        info->match_it_var = null
                    }
                }
                
                if(!gComeC && info.come_fun.mName === "main") {
                    free_objects(info->gv_table, null@ret_value, info);
                    add_come_code(info, xsprintf("come_heap_final();\n"));
                }
                
                if(!info.come_fun.mNoResultType) {
                    add_come_code(info, "gComeFunResultObject = (void*)0;\n");
                }
                
                add_come_code(info, "return __result%d__;\n", num_result_stack);
            }
        }
        else {
            sFun* come_fun = info.come_fun;
            
            add_last_code_to_source(info);
            free_objects_on_return(come_fun.mBlock, info, null, false@top_block);
            free_right_value_objects(info);
            //free_exception_right_value_objects(info);
            
            if(info->block_level == 1) {
                info->inhibits_output_code = true;
                
                if(info->match_it_var) {
                    foreach(it, info->match_it_var) {
                        free_object(it->mType, it->mCValueName, false@no_decrement, false@no_free, info);
                    }
                    info->match_it_var = null
                }
            }
            
            if(!gComeC && info.come_fun.mName === "main") {
                free_objects(info->gv_table, null@ret_value, info);
                add_come_code(info, xsprintf("come_heap_final();\n"));
            }
            
            add_come_code(info, "return;\n");
        }
        
        info->last_statment_is_return = true;
        
        return true;
    }
};

class sInlineAssembler extends sNodeBase
{
    new(string source, sInfo* info)
    {
        self.super();
        
        string self.source = source;
    }
    
    string kind()
    {
        return string("sInlineAssembler");
    }
    
    bool compile(sInfo* info)
    {
        string source = self.source;
        
        CVALUE*% come_value = new CVALUE();
        
        var buf = new buffer();
        char* p = source;
        bool dquort = false;
        while(*p) {
            if(*p == '"'){ 
                buf.append_char(*p);
                p++;
                
                dquort = !dquort;
            }
            else if(dquort) {
                buf.append_char(*p);
                p++;
            }
            else if(*p == '(') {
                buf.append_char(*p);
                p++;
                
                var var_name = new buffer();
                while(xisalnum(*p) || *p =='_') {
                    var_name.append_char(*p);
                    p++;
                }
                
                sVar* var_ = info.lv_table.mVars.at(var_name.to_string(), null);
                
                if(var_) {
                    buf.append_str(var_->mCValueName);
                }
                
                if(*p == ')') {
                    buf.append_char(*p);
                    p++;
                }
            }
            else {
                buf.append_char(*p);
                p++;
            }
        }
        
        come_value.c_value = "__asm " + buf.to_string();
        come_value.type = new sType("void");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sCurrentNode2 extends sNodeBase
{
    include sCurrentNodeModule;
};

class sLineNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sLineNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%d", info->sline);
        come_value.type = new sType("int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sSNameNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sSNameNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("\"%s\"", info->sname);
        come_value.type = new sType("char*");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sFuncNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sFuncNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("\"%s\"", info->come_fun->mName);
        come_value.type = new sType("char*");
        //come_value.type.mConstant = true;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sWildCard extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sWildCard");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% value_node = create_load_var(s"Value");
        
        if(!node_compile(value_node, info)) {
            return false;
        }
        return true;
    }
};

class sCallerFuncNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sCallerFuncNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        if(info->caller_fun) {
            come_value.c_value = xsprintf("\"%s\"", info->caller_fun->mName);
        }
        else {
            come_value.c_value = xsprintf("\"\"");
        }
        come_value.type = new sType("char*");
        //come_value.type.mConstant = true;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sCallerLineNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%d", info->caller_line);
        come_value.type = new sType("int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
    
    string kind()
    {
        return string("sCallerLineNode");
    }
};

class sCallerSNameNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("\"%s\"", info->caller_sname);
        come_value.type = new sType("char*");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
    
    string kind()
    {
        return string("sCallerSNameNode");
    }
};

string make_method_generics_function(string fun_name, list<sType*%>*% method_generics_types, sInfo* info)
{
    static int num_method_generics = 0;
    string fun_name3 = xsprintf("%s_method_generics%d", fun_name, num_method_generics++);
    
    list<sType*%>*% method_generics_types_before = info.method_generics_types;
    info->method_generics_types= method_generics_types;
    
    sGenericsFun* generics_fun = info.generics_funcs.at(fun_name, null);
    
    if(generics_fun) {
        if(!create_method_generics_fun(string(fun_name3), generics_fun, info)) {
            err_msg(info, "%s not found", fun_name3);
            return string("");
        }
    }
    
    info.method_generics_types = method_generics_types_before;
    
    return fun_name3;
}

class sFunCallNode extends sNodeBase
{
    new(char* fun_name, list<tup:string,sNode*%>* params, bool guard_break, list<sType*%>*% method_generics_types, buffer*% method_block, int method_block_sline, sInfo* info)
    {
        self.super();
        
        string self.fun_name = string(fun_name);
        list<tup: string,sNode*%>*% self.params = clone params;
        bool self.guard_break = guard_break;
        list<sType*%>*% self.method_generics_types = method_generics_types;
        buffer*% self.method_block = method_block;
        int self.method_block_sline = method_block_sline;
    }
    
    string kind()
    {
        return string("sFunCallNode");
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
    
    bool compile(sInfo* info)
    {
        string fun_name = self.fun_name;
        list<tup: string,sNode*%>* params = self.params;
        buffer* method_block = self.method_block;
        int method_block_sline = self.method_block_sline;
        
        sVar* var_ = get_variable_from_table(info.lv_table, fun_name);
        
        if(var_ == null) {
            var_ = get_variable_from_table(info.gv_table, fun_name);
        }
        
        if(var_) {
            sType* lambda_type = var_->mType;
            
            if(lambda_type->mClass->mName !== "lambda") {
                err_msg(info, "%s is not lambda, can't call", fun_name);
                return false;
            }
            
            sType*% result_type = clone lambda_type->mResultType.v1;
            result_type->mStatic = false;
            
            list<CVALUE*%>*% come_params = new list<CVALUE*%>();
            
            if(lambda_type.mParamTypes.length() != params.length() && !lambda_type.mVarArgs) {
                err_msg(info, "invalid param number(%s). function param number is %d. caller param number is %d", fun_name, lambda_type.mParamTypes.length(), params.length());
                return false;
            }
            
            int i = 0;
            foreach(it, params) {
                var label, node = it;
                
                if(!node_compile(node)) {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                if(lambda_type.mVarArgs && lambda_type.mParamTypes[i] == null) {
                }
                else {
                    check_assign_type(s"\{fun_name} calling param #\{i}", lambda_type.mParamTypes[i], come_value.type, come_value);
                    if(lambda_type.mParamTypes[i].mHeap && come_value.type.mHeap) {
                        std_move(lambda_type.mParamTypes[i], come_value.type, come_value, no_delete_from_right_value_objects:true);
                    }
                }
                
                come_params.push_back(come_value);
                dec_stack_ptr(1, info);
                
                i++;
            }
            
            
            buffer*% buf = new buffer();
            
            buf.append_str(var_->mCValueName);
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
            
            CVALUE*% come_value = new CVALUE();
            come_value.c_value = buf.to_string();
            come_value.type = clone result_type;
            come_value.type->mStatic = false;
            come_value.var = null;
            
            if(lambda_type->mResultType.v1.mHeap) {
                append_object_to_right_values2(come_value, lambda_type->mResultType.v1, info);
            }
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
            
            info.calling_fun = null;
        }
        else {
            sGenericsFun* generics_fun = info.generics_funcs.at(fun_name, null);
            bool method_generics = false;
            if(generics_fun) {
                method_generics = generics_fun.mMethodGenericsTypeNames.length() > 0;
            }
            if(self.method_generics_types.length() > 0 || method_generics) {
                if(self.method_generics_types.length() == 0) {
                    list<sType*%>*% method_generics_types = new list<sType*%>();
                    string generics_fun_name = make_method_generics_function(fun_name, method_generics_types, info);
                    
                    sFun* fun = info.funcs.at(generics_fun_name, null);
                    
                    if(method_block) {
                        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
                        
                        sFun* fun = info.funcs.at(generics_fun_name, null);
                        
                        bool no_output_come_code = info->no_output_come_code;
                        info->no_output_come_code = true;
                        if(!compile_method_block(method_block, come_params, fun, fun_name, method_block_sline, info, true)) {
                            return false;
                        }
                        info->no_output_come_code = no_output_come_code;
                        CVALUE* method_block_node = come_params[-1]??;
                        
                        sType*% method_block_lambda_type = clone method_block_node.type;
                        sType*% method_block_result_type = clone info.come_method_block_function_result_type;
                        
                        sType* generics_fun_method_block_lambda_type = generics_fun.mParamTypes[-1]??;
                        sType* generics_fun_method_block_result_type = generics_fun_method_block_lambda_type.mResultType.v1;
                        
                        if(generics_fun_method_block_result_type.mClass.mMethodGenerics) {
                            int method_generics_num = generics_fun_method_block_result_type.mClass.mMethodGenericsNum;
                            method_generics_types[method_generics_num] = clone method_block_result_type;
                        }
                        int n = 0;
                        foreach(it, generics_fun_method_block_lambda_type.mParamTypes) {
                            if(it.mClass.mMethodGenerics) {
                                int method_generics_num = it.mMethodGenericsNum;
                                method_generics_types[method_generics_num] = clone method_block_lambda_type.mParamTypes[n];
                            }
                            n++;
                        }
                    }
                    
                    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
                    
                    int i = 0;
                    sType*% result_type = null;
                    foreach(it, params) {
                        var label, node = it;
                        
                        if(!node_compile(node)) {
                            return false;
                        }
                        
                        CVALUE*% come_value = get_value_from_stack(-1, info);
                        dec_stack_ptr(1, info);
                        
                        come_params.add(come_value);
                    }
                    
                    if(generics_fun.mResultType.mClass.mMethodGenerics) {
                        int method_generics_num = generics_fun.mResultType.mMethodGenericsNum;
            
                        if(info->function_result_type) {
                            method_generics_types[method_generics_num] = clone info->function_result_type;
                        }
                    }
                    int n = 0;
                    foreach(it, generics_fun.mParamTypes) {
                        if(it.mClass.mMethodGenerics) {
                            int method_generics_num = it.mMethodGenericsNum;
                            if(n < come_params.length()) {
                                method_generics_types[method_generics_num] = clone come_params[n]??.type;
                            }
                        }
                        n++;
                    }
                    
                    info.funcs.remove(generics_fun_name);
                    
                    fun_name = make_method_generics_function(fun_name, method_generics_types, info);
                }
                else {
                    fun_name = make_method_generics_function(fun_name, self.method_generics_types, info);
                }
            }
            
            if(fun_name === "__builtin_memmove" || fun_name === "__builtin_memset" || fun_name === "__builtin_ffs" || fun_name === "__builtin_ffsl" || fun_name === "__builtin_ffsll" || fun_name === "__builtin_bswap16" || fun_name === "__builtin_bswap32" || fun_name === "__builtin_bswap64" || fun_name === "__builtin_constant_p" || fun_name === "__builtin_expect" || fun_name === "__builtin___memset_chk" || fun_name === "__builtin_object_size" || fun_name === "__builtin___memcpy_chk" || fun_name === "__builtin___strncpy_chk" || fun_name === "__builtin___strncat_chk" || fun_name === "__builtin___vsnprintf_chk") 
            {
                list<CVALUE*%>*% come_params = new list<CVALUE*%>();
                foreach(it, params) {
                    var label, node = it;
                    
                    if(!node_compile(node)) {
                        return false;
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    dec_stack_ptr(1, info);
                    
                    come_params.push_back(come_value);
                }
                
                buffer*% buf = new buffer();
                
                buf.append_str(fun_name);
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
                
                CVALUE*% come_value = new CVALUE();
                come_value.c_value = buf.to_string();
                
                if(fun_name === "__builtin_memmove" || fun_name === "__builtin_memset") {
                    come_value.type = new sType("void");
                }
                else if(fun_name === "__builtin_ffs") {
                    come_value.type = new sType("int");
                }
                else if(fun_name === "__builtin_ffsl") {
                    come_value.type = new sType("int");
                }
                else if(fun_name === "__builtin_ffsll") {
                    come_value.type = new sType("int");
                }
                else if(fun_name === "__builtin_bswap16") {
                    come_value.type = new sType("short");
                }
                else if(fun_name === "__builtin_bswap32") {
                    come_value.type = new sType("int");
                }
                else if(fun_name === "__builtin_bswap64") {
                    come_value.type = new sType("long");
                }
                else if(fun_name === "__builtin_constant_p") {
                    come_value.type = new sType("int");
                }
                else if(fun_name === "__builtin_expect") {
                    come_value.type = new sType("int");
                }
                else if(fun_name === "__builtin___memset_chk") {
                    come_value.type = new sType("void");
                    come_value.type.mPointerNum = 1;
                }
                else if(fun_name === "__builtin_object_size") {
                    come_value.type = new sType("long");
                }
                else if(fun_name === "__builtin___memcpy_chk") {
                    come_value.type = new sType("void");
                    come_value.type.mPointerNum = 1;
                }
                else if(fun_name === "__builtin___strncpy_chk") {
                    come_value.type = new sType("char");
                    come_value.type.mPointerNum = 1;
                }
                else if(fun_name === "__builtin___strncat_chk") {
                    come_value.type = new sType("char");
                    come_value.type.mPointerNum = 1;
                }
                else if(fun_name === "__builtin___vsnprintf_chk") {
                    come_value.type = new sType("int");
                }
                
                come_value.var = null;
                
                add_come_last_code(info, "%s", come_value.c_value);
                
                info.stack.push_back(come_value);
                
                return true;
            }
            else if(fun_name === "string") {
                fun_name = string("__builtin_string");
            }
            else if(fun_name === "wstring") {
                fun_name = string("__builtin_wstring");
            }
            else if(fun_name === "inherit") {
                char* p = info.come_fun.mName;
        
                int version = 0;
                while(*p) {
                    if(*p == '_' && *(p+1) == 'v' && xisdigit(*(p+2))) {
                        char* p2 = p + 2;
                        version = 0;
                        while(xisdigit(*p2)) {
                            version = version * 10 + (*p2 - '0');
                            p2++;
                        }
                        break;
                    }
                    else {
                        p++;
                    }
                }
        
                char real_fun_name[2048];
                memcpy(real_fun_name, info.come_fun.mName, p - info.come_fun.mName);
                real_fun_name[p-info.come_fun.mName] = '\0';
                
                int i;
                for(i=version-1; i>=1; i--) {
                    string new_fun_name = xsprintf("%s_v%d", real_fun_name, i);
                    
                    if(info.funcs[new_fun_name]??) {
                        fun_name = string(new_fun_name);
                        break;
                    }
                }
                
                if(i==0) {
                    string new_fun_name = xsprintf("%s", real_fun_name);
                    
                    if(info.funcs[new_fun_name]??) {
                        fun_name = string(new_fun_name);
                    }
                    
                    if(fun_name === info.come_fun.mName) {
                        err_msg(info, "invalid inherit");
                        return false;
                    }
                }
            }
            else {
                for(int i=FUN_VERSION_MAX; i>=1; i--) {
                    string new_fun_name = xsprintf("%s_v%d", fun_name, i);
                
                    if(info.funcs[new_fun_name]??) {
                        fun_name = string(new_fun_name);
                        break;
                    }
                }
            }
            
            sFun* fun = info.funcs.at(fun_name, null);
            
            
            if(fun_name === "__builtin_va_arg") {
                list<CVALUE*%>*% come_params = new list<CVALUE*%>();
                
                int i = 0;
                sType*% result_type = null;
                foreach(it, params) {
                    var label, node = it;
                    
                    if(!node_compile(node)) {
                        return false;
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    dec_stack_ptr(1, info);
                    
                    come_params.add(come_value);
                    
                    result_type = come_value.type;
                }
                
                buffer*% buf = new buffer();
                
                buf.append_str(fun_name);
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
                
                CVALUE*% come_value = new CVALUE();
                come_value.c_value = buf.to_string();
                come_value.type = result_type;
                come_value.var = null;
                
                add_come_last_code(info, "%s", come_value.c_value);
                
                info.stack.push_back(come_value);
            }
            else if(fun == null) {
                err_msg(info, "function not found(%s) at normal function call(1)\n", fun_name);
                return true;
            }
            else {
                sType*% result_type = clone fun.mResultType;
                result_type->mStatic = false;
                
                list<sType*%>*% param_types = new list<sType*%>();
                foreach(it, fun.mParamTypes) {
                    sType*% it2 = solve_generics(clone it, info.generics_type, info);
                    param_types.push_back(clone it2);
                }
                
                result_type = solve_generics(result_type, info.generics_type, info);
                
                
                list<CVALUE*%>*% come_params = new list<CVALUE*%>();
                
                for(int i=0; i<fun.mParamTypes.length()-(method_block?2:0); i++) {
                    come_params.add(null);
                }
                
                foreach(it, params) {
                    var label, node = it;
                    
                    if(fun.mVarArgs || fun_name === "__builtin_va_start") {
                    }
                    else if(label) {
                        if(!node_compile(node)) {
                            return false;
                        }
                        
                        CVALUE*% come_value = get_value_from_stack(-1, info);
                        dec_stack_ptr(1, info);
                        
                        int n = 0;
                        foreach(it, fun.mParamNames) {
                            if(label === it) {
                                break;
                            }
                            
                            n++;
                        }
                        
                        if(param_types[n]??) {
                            check_assign_type(s"\{fun_name} param num \{n} is assinged to", param_types[n], come_value.type, come_value);
                        }
                        if(param_types[n]?? && param_types[n].mHeap && come_value.type.mHeap) {
                            std_move(param_types[n], come_value.type, come_value, no_delete_from_right_value_objects:true);
                        }
                        
                        come_params.replace(n, come_value);
                    }
                }
                
                int i = 0;
                foreach(it, params) {
                    var label, node = it;
                    
                    if(fun.mVarArgs || fun_name === "__builtin_va_start") {
                        if(!node_compile(node)) {
                            return false;
                        }
                        
                        CVALUE*% come_value = get_value_from_stack(-1, info);
                        dec_stack_ptr(1, info);
                        
                        while(true) {
                            if(come_params[i]?? == null) {
                                break;
                            }
                            else {
                                i++;
                            }
                        }
                        
                        come_params.replace(i, come_value);
                        i++;
                    }
                    else if(label) {
                    }
                    else {
                        if(!node_compile(node)) {
                            return false;
                        }
                        
                        CVALUE*% come_value = get_value_from_stack(-1, info);
                        dec_stack_ptr(1, info);
                        
                        while(true) {
                            if(come_params[i]?? == null) {
                                break;
                            }
                            else {
                                i++;
                            }
                        }
                        
                        if(param_types[i]??) {
                            check_assign_type(s"\{fun_name} param num \{i} is assinged to", param_types[i], come_value.type, come_value);
                        }
                        if(param_types[i]?? && param_types[i].mHeap && come_value.type.mHeap) {
                            std_move(param_types[i], come_value.type, come_value, no_delete_from_right_value_objects:true);
                        }
                        
                        come_params.replace(i, come_value);
                        i++;
                    }
                }
                
                while(true) {
                    if(come_params[i]?? == null) {
                        break;
                    }
                    else {
                        i++;
                    }
                }
                
                if(params.length() < fun.mParamTypes.length())
                {
                    for(; i<fun.mParamTypes.length()-(method_block?2:0); i++) {
                        string default_param = clone fun.mParamDefaultParametors[i]??;
                        char* param_name = fun.mParamNames[i];
                        
                        if(default_param && default_param !== "" && come_params[i]?? == null) {
                            buffer*% source = info.source;
                            char* p = info.p;
                            char* head = info.head;
                            int sline = info.sline;
                            
                            info.source = default_param.to_buffer();
                            info.p = info.source.buf;
                            info.head = info.source.buf;
                            
                            sNode*% node = expression();
                            
                            if(!node_compile(node)) {
                                return false;
                            }
                            
                            info.source = source;
                            info.p = p;
                            info.head = head;
                            info.sline = sline;
                    
                            CVALUE*% come_value = get_value_from_stack(-1, info);
                            if(param_types[i]) {
                                check_assign_type(s"\{fun_name} param num \{i} is assinged to", param_types[i], come_value.type, come_value);
                            }
                            if(param_types[i] && param_types[i].mHeap && come_value.type.mHeap) {
                                std_move(param_types[i], come_value.type, come_value, no_delete_from_right_value_objects:true);
                            }
                            come_params.replace(i, come_value);
                            dec_stack_ptr(1, info);
                        }
                        else {
                            if(come_params[i]?? == null) {
                                err_msg(info, "require parametor(%s)(1) %d", fun.mName,i);
                                return false;
                            }
                        }
                    }
                }
                
                if(fun.mParamTypes.length() - (method_block?2:0)!= come_params.length() && !fun.mVarArgs && fun_name !== "__builtin_va_start" && fun_name !== "__builtin_va_end") 
                {
                    err_msg(info, "invalid param number(%s). function param number is %d. caller param number is %d", fun_name, fun.mParamTypes.length(), params.length());
                    return false;
                }
                
                if(method_block) {
                    sNode*% current_stack_frame_node = new sCurrentNode2(info) implements sNode;
                    
                    if(!node_compile(current_stack_frame_node)) {
                        return false;
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    come_params.push_back(come_value);
                    dec_stack_ptr(1, info);
                    
                    buffer*% method_block2 = new buffer();
                    sType*% method_block_type = clone fun.mParamTypes[-1];
                    
                    string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
                    
                    method_block_type.mParamTypes[0].mClass = info.classes[class_name]??;
                    sClass* current_stack_frame_struct = info.current_stack_frame_struct;
                    info->current_stack_frame_struct = info.classes[class_name]??;
                    
                    info->num_method_block++;
                    
                    if(method_block_type.mClass.mName !== "lambda") {
                        err_msg(info, "This function does not have method block(%s)", fun_name);
                        return false;
                    }
                    
                    sType*% result_type = clone method_block_type->mResultType.v1;
                    result_type->mStatic = false;
                    list<sType*%>*% param_types = clone method_block_type->mParamTypes;
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
                    
                    method_block2.append_format("%s fun_block%d_%s(", make_type_name_string(result_type), info->num_method_block, all_alhabet_sname.to_string());
                    
                    i = 0;
                    foreach(it, param_types) {
                        sType* param_type = it;
                        
                        if(i == 0) {
                            string param_name = xsprintf("parent");
                            
                            method_block2.append_format("%s", make_define_var(param_type, param_name));
                        }
                        else if(i == 1) {
                            string param_name = xsprintf("it");
                            
                            method_block2.append_format("%s", make_define_var_no_solved(param_type, param_name, original_type_name:true));
                        }
                        else {
                            string param_name = xsprintf("it%d", i);
                            
                            method_block2.append_format("%s", make_define_var_no_solved(param_type, param_name, original_type_name:true));
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
                    //sVarTable* lv_table = info.lv_table;
                    
                    info.source = method_block2;
                    info.p = info.source.buf;
                    info.head = info.source.buf;
                    info.sline = method_block_sline;
                    //sVarTable*% lv_table_method_block = new sVarTable(global:false, parent:null);
                   
                    sNode*% node = parse_function(info);
                    
                    if(!node_compile(node)) {
                        return false;
                    }
                    
                    char*% method_block_name = xsprintf("fun_block%d_%s", info->num_method_block, all_alhabet_sname.to_string());
                    
                    CVALUE*% come_value2 = new CVALUE();
                    
                    sFun* fun2 = info.funcs.at(method_block_name, null);
                    
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
                }
                
                buffer*% buf = new buffer();
                
                buf.append_str(fun_name);
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
                
                CVALUE*% come_value = new CVALUE();
                come_value.c_value = buf.to_string();
                come_value.type = clone result_type;
                come_value.type->mStatic = false;
                come_value.var = null;
                
                if(fun.mResultType->mHeap) {
                    append_object_to_right_values2(come_value, result_type, info);
                }
                
                if(info.come_fun_name !== "come_alloc_mem_from_heap_pool" && info.come_fun_name !== "come_calloc" && info.come_fun_name !== "come_free_mem_of_heap_pool" && info.come_fun_name !== "come_free") 
                {
                    if(fun_name !== "come_alloc_mem_from_heap_pool" && fun_name !== "null_check" && fun_name !== "come_push_stackframe" && fun_name !== "come_pop_stackframe") {
                        come_value.c_value = append_stackframe(come_value.c_value, come_value.type, info);
                    }
                }
                
                if(!self.guard_break && result_type.mGuardValue && result_type->mPointerNum > 0) {
                    come_value.c_value = xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))", make_type_name_string(result_type)!, come_value.c_value, info->sname, info->sline, gComeDebugStackFrameID++);
                }
                
                add_come_last_code(info, "%s", come_value.c_value);
                
                info.stack.push_back(come_value);
                
            }
            
            info.calling_fun = fun;
        }
        
        return true;
    }
};

class sComeCallNode extends sNodeBase
{
    new(buffer*% come_block, int come_block_sline, sInfo* info) {
        self.super();
        
        buffer*% self.come_block = come_block;
        int self.come_block_sline = come_block_sline;
    }
    
    string kind()
    {
        return string("sComeCallNode");
    }
    
    bool terminated()
    {
        return true;
    }
    
    bool compile(sInfo* info)
    {
        int come_block_sline = self.come_block_sline;
        buffer*% come_block = self.come_block;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        static int thread_num = 0;
        thread_num++;
        
        string var_name = xsprintf("__thread_info%d", thread_num);
        
        sType*% type_ = clone info.types.at("pthread_t", null);
        
        if(type_ == null) {
            err_msg(info, "pthread_t is not defined");
            return false;
        }
        
        sNode*% var_node = store_var(var_name, null@multiple_assign, null@multiple_declare, type_@type, true@alloc, null@right_value, info);
        
        if(!node_compile(var_node)) {
            return false;
        }
        
        CVALUE*% thread_var_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        CVALUE*% come_value = new CVALUE();
        come_value.c_value = xsprintf("&%s", thread_var_value.c_value);
        come_value.type = thread_var_value.type;
        come_value.var = null;
        
        come_params.push_back(come_value);
        
        sNode*% null_node = create_null_node();
        
        if(!node_compile(null_node)) {
            return false;
        }
        
        come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        come_params.push_back(come_value);
        
        sNode*% current_stack_frame_node = new sCurrentNode2(info) implements sNode;
        
        if(!node_compile(current_stack_frame_node)) {
            return false;
        }
        
        CVALUE*% current_stack_frame_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        string fun_name = xsprintf("__thread_fun%d", thread_num);
        
        buffer*% come_block2 = new buffer();
        
        string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
        
        come_block2.append_format("void* %s(%s* parent)\n", fun_name, class_name);
        
        come_block2.append_str(come_block.to_string());
                        
        sClass* current_stack_frame_struct = info.current_stack_frame_struct;
        info->current_stack_frame_struct = info.classes[class_name]??;
        
        buffer*% source3 = info.source;
        char* p = info.p;
        char* head = info.head;
        int sline = info.sline;
        
        info.source = come_block2;
        info.p = info.source.buf;
        info.head = info.source.buf;
        info.sline = come_block_sline;
       
        sNode*% node = parse_function(info);
        
        if(!node_compile(node)) {
            return false;
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
        
        info->current_stack_frame_struct = current_stack_frame_struct;
        
        CVALUE*% fun_value = new CVALUE();
        
        fun_value.c_value = xsprintf("(((void* (*)(void*))(%s)))", fun_name);
        come_value.type = null;
        come_value.var = null;
        
        come_params.add(fun_value);
        
        come_params.add(current_stack_frame_value);
        
        buffer*% buf = new buffer();
        
        string fun_name = s"pthread_create";
        
        buf.append_str("(");
        buf.append_str(fun_name);
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
        buf.append_str(", ");
        buf.append_str(thread_var_value.c_value);
        buf.append_str(")");
        
        CVALUE*% come_value = new CVALUE();
        come_value.c_value = buf.to_string();
        
        sType*% type = clone info.types.at("pthread_t", null);
        if(type == null) {
            err_msg(info, "pthread_t is not defined");
            return false;
        }
        come_value.type = type;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sComeJoinNode extends sNodeBase
{
    new(sNode*% node, sInfo* info) {
        self.super();
        
        sNode*% self.node = node;
    }
    
    string kind()
    {
        return string("sComeJoinNode");
    }
    
    bool terminated()
    {
        return false;
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        
        if(!node_compile(node)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        var buf = new buffer();
        buf.append_str("pthread_join(");
        buf.append_str(come_value.c_value);
        buf.append_str(", 0)");
        
        CVALUE*% come_value = new CVALUE();
        come_value.c_value = buf.to_string();
        come_value.type = new sType("void", info);
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sComePollNode extends sNodeBase
{
    new(list<sNode*%>*% vars, list<sBlock*%>*% blocks, int time_out, sInfo* info) {
        self.super();
        
        list<sNode*%>*% self.vars = vars;
        list<sBlock*%>*% self.blocks = blocks;
        int self.time_out = time_out;
    }
    
    string kind()
    {
        return string("sComePollNode");
    }
    
    bool terminated()
    {
        return true;
    }
    
    bool compile(sInfo* info)
    {
        list<sNode*%>*% vars = self.vars;
        list<sBlock*%>*% blocks = self.blocks;
        int time_out = self.time_out;
        
        static int var_num = 0;
        var_num++;
        
        add_come_code(info, "struct pollfd fds%d[%d];\n", var_num, vars.length());
        
        int n = 0;
        foreach(it, self.vars) {
            if(!node_compile(it)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
            
            add_come_code(info, "fds%d[%d].fd = %s[0];\n", var_num, n, come_value.c_value);
            add_come_code(info, "fds%d[%d].events = %d;\n",var_num, n, POLLIN);
            n++;
        }
        
        add_come_code(info, "int poll_ret%d = poll(fds%d, %d, %d);\n", var_num, var_num, vars.length(), time_out);
        
        add_come_code(info, "if(poll_ret%d > 0) {\n", var_num);
        int n = 0;
        foreach(it, self.vars) {
            add_come_code(info, "if(fds%d[%d].revents & %d) {\n", var_num, n, POLLIN);
            transpile_block(blocks[n], null@param_types, null@param_names, info);
            add_come_code(info, "}\n");
            
            n++;
        }
        
        add_come_code(info, "}\n");
        
        return true;
    }
};

sNode*% craete_fun_call(char* fun_name, list<tup: string,sNode*%>* params, bool guard_break, list<sType*%>*% method_generics_types, buffer*% method_block, int method_block_sline, sInfo* info)
{
    sNode*% node = new sFunCallNode(fun_name, params, guard_break, method_generics_types, method_block, method_block_sline, info) implements sNode;
    
    node = post_position_operator(node, info);
    
    return node;
}

class sLambdaCall extends sNodeBase
{
    new(sNode*% node, list<tup: string,sNode*%>* params, sInfo* info)
    {
        self.super();
        
        sNode*% self.node = node;
        list<tup: string,sNode*%>*% self.params = clone params;
    }
    
    string kind()
    {
        return string("sLambdaCall");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = self.node;
        list<tup: string,sNode*%>* params = self.params;
        
        if(!node_compile(node, info)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        sType* lambda_type = come_value.type;
        
        if(lambda_type->mResultType == null) {
            err_msg(info, "invalid lambda type");
            return false;
        }
        
        sType*% result_type = clone lambda_type->mResultType.v1;
        result_type->mStatic = false;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(lambda_type.mParamTypes.length() != params.length() && !lambda_type.mVarArgs) {
            err_msg(info, "invalid param number. function param number is %d. caller param number is %d", lambda_type.mParamTypes.length(), params.length());
            return false;
        }
        
        int i = 0;
        foreach(it, params) {
            var label, node = it;
            
            if(!node_compile(node)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            if(lambda_type.mVarArgs && lambda_type.mParamTypes[i] == null) {
            }
            else {
                check_assign_type(s"calling param #\{i}", lambda_type.mParamTypes[i], come_value.type, come_value);
                if(lambda_type.mParamTypes[i].mHeap && come_value.type.mHeap) {
                    std_move(lambda_type.mParamTypes[i], come_value.type, come_value, no_delete_from_right_value_objects:true);
                }
            }
            
            come_params.push_back(come_value);
            dec_stack_ptr(1, info);
            
            i++;
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str("(");
        buf.append_str(come_value.c_value);
        buf.append_str(")");
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
        
        if(lambda_type->mResultType.v1.mHeap) {
            append_object_to_right_values2(come_value2, lambda_type->mResultType.v1, info);
        }
        
        come_value2.type = clone result_type;
        come_value2.type->mStatic = false;
        come_value2.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

class sVarArgTypeName extends sNodeBase
{
    new(sType*% type, sInfo* info=info)
    {
        self.super();
        
        sType*% self.type = type;
    }
    
    string kind()
    {
        return string("sVarArgTypeName");
    }
    
    bool compile(sInfo* info)
    {
        sType*% type = self.type;
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = make_type_name_string(type);
        come_value.type = type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

sNode*% parse_function_call(char* fun_name, sInfo* info, bool come_=false)
{
    list<sType*%>*% method_generics_types = new list<sType*%>();
    
    if(*info->p == '<') {
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
    
    parse_sharp();
    expected_next_character('(');
    
    parse_sharp();
    
    list<tup: string,sNode*%>*% params = new list<tup: string,sNode*%>();
    
    bool _va_arg = info->va_arg;
    if(fun_name === "__builtin_va_arg") {
        info->va_arg = true;
    }
    
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
        }
        
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
        
        info.no_comma = no_comma;
        info.in_fun_param = in_fun_param;
        
        params.push_back((label, node));
        
        parse_sharp();
        
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
    
    info->va_arg = _va_arg;
    
    bool guard_break = false;
    if(*info->p == '?' && *(info->p+1) == '?') {
        info->p += 2;
        skip_spaces_and_lf();
        guard_break = true;
    }
    
    parse_sharp();
    
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
    
    sNode*% node = new sFunCallNode(fun_name, params, guard_break, method_generics_types, method_block, method_block_sline, info) implements sNode;
    
    node = post_position_operator(node, info);
    
    return node;
}

sNode*% expression_node(sInfo* info=info) version 1
{
    skip_spaces_and_lf();
    parse_sharp();
    
    info->no_output_err = false;
    err_msg(info, "invalid character(1)(%d)(%c)\n", *info->p, *info->p);
    stackframe();
    exit(3);
    return (sNode*%)null;
}

sNode*% create_return_node(sNode*% value, string value_source, sInfo* info=info)
{
    return new sReturnNode(value, value_source, info) implements sNode;
}

sNode*% expression_node(sInfo* info=info) version 97
{
    skip_spaces_and_lf();
    parse_sharp();
    
    if(parsecmp("return", info)) {
        info->p += strlen("return");
        skip_spaces_and_lf();
        
        if(*info->p == ';') {
            return new sReturnNode(null, string("0"), info) implements sNode;
        }
        else {
            char* head = info.p;
            sNode*% value = expression();
            char* tail = info.p;
            value = post_position_operator(value, info);
            
            char buf[tail-head+1];
            memcpy(buf, head, tail-head);
            buf[tail-head] = '\0';
            
            return new sReturnNode(value, string(buf), info) implements sNode;
        }
    }
    else if((xisalpha(*info->p) || *info->p == '_' ) && !(*info->p == 'L' && *(info->p+1) == '"' || (*info->p == 's' || *info->p == 'S') && *(info->p+1) == '"' || (*info->p == 'L' && *(info->p+1) == '\''))) {
        char* head = info.p;
        int head_sline = info.sline;
        
        string buf = backtrace_parse_word();
        
        bool is_type_name_ = is_type_name(buf);
        
        static char* is_special_word_array[18] = { "if", "while", "for", "switch", "return", "sizeof", "isheap", "ispointer", "__typeof__"
                                    , "dynamic_typeof", "typeof", "gc_inc", "gc_dec", "gc_dec_nofree", "case", "_Alignof"
                                    , "_Alignas", "__alignof__"}
                                    
        bool is_special_word = is_special_word_array.contained(18, buf);
        
        /// backtrace ///
        bool define_function_pointer_flag = false;
        if(!is_special_word && *info->p == '(' && *(info->p+1) != '*')
        {
            backtrace_parse_type();
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
                
                if(*info->p == '*') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    define_function_pointer_flag = true;
                }
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        /// backtrace ///
        bool lambda_flag = false;
        if(!is_special_word && is_type_name_)
        {
            info.p = head;
            info.sline = head_sline;
            
            backtrace_parse_type();
            
            var word2 = backtrace_parse_word();
            
            if(word2 === "lambda") {
                lambda_flag = true;
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        /// backtrace ///
        bool fun_name_with_type_name = false;
        if(!is_special_word)
        {
            info.p = head;
            info.sline = head_sline;
            
            info.no_output_err = true;
            
            if(xisalpha(*info.p) || *info.p == '_') {
                var word2 = parse_word();
            }
            while(*info->p == '*') {
                info->p++;
                skip_spaces_and_lf();
            }
            if(*info->p == ':' && *(info->p+1) == ':') {
                info->p += 2;
                skip_spaces_and_lf();
                if(xisalpha(*info->p) || *info.p == '_') {
                    fun_name_with_type_name = true;
                }
            }
            
            info.no_output_err = false;
            
            info.p = head;
            info.sline = head_sline;
        }
        
        /// backtrace ///
        bool call_method_generics_fun_call = false;
        {
            info.p = head;
            info.sline = head_sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                buf = parse_word();
            }
            
            if(!is_type_name(buf) && info.lv_table.mVars[buf]?? == null && info.gv_table.mVars[buf]?? == null && *info->p == '<') {
                int nest = 0;
                while(*info->p) {
                    if(*info->p == '<') {
                        info->p++;
                        nest++;
                    }
                    else if(*info->p == '>') {
                        info->p++;
                        
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info->p == '\n' || *info->p == ';') {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                
                if(*info->p == '(') {
                    call_method_generics_fun_call = true;
                }
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        /// backtrace ///
        bool new_ = false;
        if(!is_special_word)
        {
            info.p = head;
            info.sline = head_sline;
            
            buf = parse_word();
            
            sClass* klass = info.classes[buf]??;
            
            if(klass && *info->p == '{') {
                new_ = true;
            }
            
            sClass* generics_class = info.generics_classes[buf]??;
            
            if(generics_class && *info->p == '<') {
                int nest = 0;
                while(true) {
                    if(*info->p == '<') {
                        info->p++;
                        nest++;
                    }
                    else if(*info->p == '>') {
                        info->p++;
                        nest--;
                        if(nest == 0) {
                            skip_spaces_and_lf();
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
                
                if(*info->p == '{') {
                    new_ = true;
                }
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        bool inline_asm = false;
        {
            info.p = head;
            info.sline = head_sline;
            
            buf = parse_word();
            
            if(buf === "asm" || buf === "__asm" || buf === "__asm__") {
                if(*info->p == '(') {
                    inline_asm = true;
                }
                else {
                    if(xisalpha(*info->p) || *info->p == '_') {
                        buf = parse_word();
                        
                        if(*info->p == '(') {
                            inline_asm = true;
                        }
                    }
                }
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        parse_sharp();
        
        buf = parse_word();
        
        parse_sharp();
        
        if(lambda_flag) {
            info.p = head;
            info.sline = head_sline;
            
            sNode*% node =  parse_function(info);
            return node;
        }
        else if((buf === "string" || buf === "wstring") && *info->p == '(') {
            sNode*% node = parse_function_call(buf, info);
            
            return node;
        }
        else if(gComePthread && buf === "come") {
            buffer*% come_block = null;
            int come_block_sline = 0;
            
            if(*info->p == '{') {
                char* head = info.p;
                come_block_sline = info.sline;
                
                skip_block(info);
                
                char* tail = info.p;
                
                come_block = new buffer();
                
                int len = tail - head;
                char*% mem = new char[len+1];
                memcpy(mem, head, len);
                mem[len] = '\0';
                
                come_block.append_str(mem);
                come_block.append_str("\n");
            }
            else {
                char* head = info.p;
                come_block_sline = info.sline;
                
                bool no_output_come_code = info.no_output_come_code;
                info.no_output_come_code = true;
                expression(info);
                info.no_output_come_code = no_output_come_code;
                
                char* tail = info.p;
                
                come_block = new buffer();
                
                int len = tail - head;
                char*% mem = new char[len+1];
                memcpy(mem, head, len);
                mem[len] = '\0';
                
                come_block.append_str("{");
                come_block.append_str(mem);
                come_block.append_str("; }");
                come_block.append_str("}");
                come_block.append_str("\n");
            }
            
            sNode*% node = new sComeCallNode(come_block, come_block_sline, info) implements sNode;
            
            return node;
        }
        else if(gComePthread && buf === "come_join" && *info->p == '(') {
            buffer*% come_block = null;
            int come_block_sline = 0;
            
            expected_next_character('(', info);
            sNode*% node = expression();
            expected_next_character(')', info);
            
            return new sComeJoinNode(node, info) implements sNode;
        }
        else if(gComePthread && buf === "come_poll" && (*info->p == '(' || *info->p == '{')) {
            int time_out = 1;
            if(*info->p == '(') {
                info->p++;
                
                while(xisdigit(*info->p)) {
                    time_out = time_out * 10 + (*info->p - '0');
                    info->p++;
                    skip_spaces_and_lf();
                }
                
                expected_next_character(')');
            }
            expected_next_character('{');
            
            list<sNode*%>*% vars = new list<sNode*%>();
            list<sBlock*%>*% blocks = new list<sBlock*%>();
            while(1) {
                sNode*% var_name = expression();
                
                sBlock*% block = parse_block();
                
                vars.add(var_name);
                
                blocks.add(block);
                
                if(*info->p == '}') {
                    break;
                }
            }
            
            expected_next_character('}');
            
            return new sComePollNode(vars, blocks, time_out, info) implements sNode;
        }
        else if(buf === "none" && *info->p == '(') {
            sNode*% node = parse_none(info);
            
            return node;
        }
        else if(buf === "some" && *info->p == '(') {
            sNode*% node = parse_some(info);
            
            return node;
        }
        else if(buf === "__func__" || buf === "__FUNCTION__") {
            return new sFuncNode(info) implements sNode;
        }
        else if(buf === "wildcard") {
            return new sWildCard(info) implements sNode;
        }
        else if(buf === "__line__" || buf === "__LINE__") {
            return new sLineNode(info) implements sNode;
        }
        else if(buf === "__sname__") {
            return new sSNameNode(info) implements sNode;
        }
        else if(buf === "__caller_func__") {
            return new sCallerFuncNode(info) implements sNode;
        }
        else if(buf === "__caller_line__") {
            return new sCallerLineNode(info) implements sNode;
        }
        else if(buf === "__caller_sname__") {
            return new sCallerSNameNode(info) implements sNode;
        }
        else if(info->va_arg && is_type_name(buf)) {
            info.p = head;
            info.sline = head_sline;
            
            var type, name, err = parse_type(parse_variable_name:false, parse_multiple_type:false);
            
            return new sVarArgTypeName(type) implements sNode;
        }
        else if(new_ || (buf === "sizeof" || buf === "_Alignof" || buf === "_Alignas" || buf === "__alignof__") && *info->p == '(') {
            info->new_ = new_;
            sNode*% node = string_node(buf, head, head_sline, info)
            info->new_ = false;
            
            return node;
        }
        else if(inline_asm) {
            var buf2 = new buffer();
            
            if(*info->p != '(') {
                string word = parse_word(); // volatile
                
                buf2.append_str(word);
            }
            
            int nest = 0;
            while(true) {
                if(*info->p == '(') {
                    buf2.append_char('(');
                    info->p++;
                    nest++;
                }
                else if(*info->p == ')') {
                    buf2.append_char(')');
                    info->p++;
                    nest--;
                    
                    if(nest == 0) {
                        break;
                    }
                }
                else if(*info->p == '\n') {
                    info->sline++;
                    buf2.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '\0') {
                    err_msg(info, "invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buf2.append_char(*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf();
            parse_sharp();
            
            return new sInlineAssembler(buf2.to_string(), info) implements sNode;
        }
        else if(fun_name_with_type_name) {
            buffer*% fun_name = new buffer();
            
            fun_name.append_str(buf);
            
            sType*% type = clone info.types[fun_name.to_string()]??;
            
            if(type == null) {
                sClass* klass = info.classes[fun_name.to_string()]??;
                
                if(klass) {
                    type = new sType(buf);
                }
                else {
                    err_msg(info, "null type(%s)", buf);
                    exit(2);
                }
            }
            
            while(*info->p == '*') {
                info->p++;
                skip_spaces_and_lf();
                
                if(type->mClass->mStruct == false) {
                    fun_name.append_str("p");
                }
            }
            
            expected_next_character(':');
            expected_next_character(':');
            
            fun_name.append_str("_");
            
            string buf2 = parse_word();
            
            fun_name.append_str(buf2);
            
            sNode*% node = parse_function_call(fun_name.to_string(), info);
            
            return node;
        }
        else if(*info->p == ':' && *(info->p+1) == ':') {
            info->p+=2;
            skip_spaces_and_lf();
            
            buffer*% fun_name = new buffer();
            
            fun_name.append_str(buf);
            
            fun_name.append_str("_");
            
            string buf2 = parse_word();
            
            fun_name.append_str(buf2);
            
            sNode*% node = parse_function_call(fun_name.to_string(), info);
            
            return node;
        }
        else if(call_method_generics_fun_call) {
            sNode*% node = parse_function_call(buf, info);
            
            return node;
        }
        else if(!is_special_word && *info->p == '(' && !(*(info->p+1) == '*' && is_type_name_))
        {
            sNode*% node = parse_function_call(buf, info);
            
            return node;
        }
        else {
            info->new_ = new_;
            sNode*% node = string_node(buf, head, head_sline, info);
            info->new_ = false;
            
            return node;
        }
    }
    else {
        sNode*% node = inherit(info);
        
        return node;
    }
    
    err_msg(info, "unexpected operator(%c)\n", *info->p);
    exit(2);
    
    return (sNode*%)null;
}

sNode*% expression(sInfo* info=info) version 5
{
    return expression_node(info);
}

static sNode*% post_position_operator_of_statment(sNode*% node, sInfo* info)
{
    if(parsecmp("or")) {
        info->p += strlen("or");
        skip_spaces_and_lf();
        
        node = parse_or_statment(clone node, info);
        
        return node;
    }
    else if(parsecmp("and")) {
        info->p += strlen("and");
        skip_spaces_and_lf();
        
        node = parse_and_statment(clone node, info);
        
        return node;
    }
    
    return node;
}

sNode*% statment(sInfo* info=info)
{
    sNode*% node = expression(info);
    
    node = post_position_operator_of_statment(node, info);
    
    return node;
}

string create_method_name(sType* obj_type, bool no_pointer_name, char* fun_name, sInfo* info, bool array_equal_pointer=true)
{
    string struct_name;
    buffer*% buf = new buffer();
    if(obj_type->mOriginalTypeName !== "") {
        struct_name = string(obj_type->mOriginalTypeName);
        if(!obj_type->mClass->mStruct) {
            for(int i=0; i<obj_type->mOriginalTypeNamePointerNum; i++)
            {
                buf.append_str("p");
            }
        }
    }
    else if(obj_type->mClass->mStruct) {
        struct_name = string(obj_type->mClass->mName);
    }
    else {
        struct_name = create_generics_name(obj_type, info);
        for(int i=0; i<obj_type->mPointerNum; i++)
        {
            buf.append_str("p");
        }
    }
    
    if(obj_type->mArrayPointerType) {
        buf.append_str("a");
    }
    
    if(!array_equal_pointer && obj_type->mArrayNum.length() > 0) {
        buf.append_str("pa");
    }
    
    return xsprintf("%s%s_%s", struct_name, buf.to_string(), fun_name);
}

string create_non_method_name(sType* obj_type, bool no_pointer_name, char* fun_name, sInfo* info, bool array_equal_pointer=true)
{
    string struct_name;
    buffer*% buf = new buffer();
    if(obj_type->mOriginalTypeName !== "") {
        struct_name = string(obj_type->mOriginalTypeName);
        if(!obj_type->mClass->mStruct) {
            for(int i=0; i<obj_type->mOriginalTypeNamePointerNum; i++)
            {
                buf.append_str("p");
            }
        }
    }
    else if(obj_type->mClass->mStruct) {
        struct_name = string(obj_type->mClass->mName);
    }
    else {
        struct_name = create_generics_name(obj_type, info);
        for(int i=0; i<obj_type->mPointerNum; i++)
        {
            buf.append_str("p");
        }
    }
    
    if(obj_type->mArrayPointerType) {
        buf.append_str("a");
    }
    
    if(!array_equal_pointer && obj_type->mArrayNum.length() > 0) {
        buf.append_str("pa");
    }
    
    char none_method_name[fun_name.length()+1];
    
    int len = struct_name.length() + buf.to_string().length();
    memcpy(none_method_name, fun_name + len + 1, fun_name.length() - len -1);
    none_method_name[fun_name.length() - len-1] = '\0';
    
    return string(none_method_name);
}

string create_method_name_using_class(sClass* obj_class, bool no_pointer_name, char* fun_name, sInfo* info, bool array_equal_pointer=true)
{
    string struct_name = string(obj_class->mName);
    
    return xsprintf("%s_%s", struct_name, fun_name);
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 1
{
    err_msg(info, "unexpected word(%s)(2)\n", buf);
    exit(2);
    
    return (sNode*%)null;
}


sNode*% post_position_operator(sNode*% node, sInfo* info)
{
    parse_sharp();
    
    if(!node->terminated() && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
        
        parse_sharp();
        
        list<tup: string,sNode*%>*% params = new list<tup: string,sNode*%>();
        
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
            }
            
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
            
            info.no_comma = no_comma;
            info.in_fun_param = in_fun_param;
            
            params.push_back((label, node));
            
            parse_sharp();
            
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
        
        parse_sharp();
        
        return new sLambdaCall(node, params, info) implements sNode;
    }
    else {
        return (sNode*%)null;
    }
}

