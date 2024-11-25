#include "common.h"

class sSemicolonNode extends sNodeBase
{
    new(sInfo* info=info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sSemicolonNode");
    }
    
    bool compile(sInfo* info)
    {
        add_come_code(info, ";\n");
        
        return true;
    }
};

class sLambdaNode extends sNodeBase
{
    new(sFun* fun, sInfo* info)
    {
        self.super();
        
        sFun* self.mFun = fun;
    }
    
    string kind()
    {
        return string("sLambdaNode");
    }
    
    bool compile(sInfo* info)
    {
        sFun* come_fun = info.come_fun;
        info.come_fun = self.mFun;
        
        sType*% result_type = new sType("void*");
        
        if(!gComeC && !self.mFun.mNoResultType) {
            add_come_code_at_function_head(info, "%s=(void*)0;\n", make_define_var(result_type, "__result_obj__"));
        }
        
        int block_level = info->block_level;
        info->block_level = 0;
        
        if(self.mFun.mBlock) {
            transpile_block(self.mFun.mBlock, self.mFun.mParamTypes, self.mFun.mParamNames, info);
        }
        
        info->block_level = block_level;
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.mFun.mName);
        come_value.type = clone self.mFun.mLambdaType;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        info.come_fun = come_fun;
        
        return true;
    }
};

class sFunNode extends sNodeBase
{
    new(sFun*% fun, sInfo* info)
    {
        self.super();
        
        sFun*% self.mFun = fun;
    }
    
    string kind()
    {
        return string("sFunNode");
    }
    
    bool compile(sInfo* info)
    {
        sFun* come_fun = info.come_fun;
        info.come_fun = self.mFun;
        
        string come_fun_name = info.come_fun_name;
        info.come_fun_name = string(info.come_fun.mName);
        
        if(self.mFun.mBlock) {
            if(!gComeC && info.come_fun.mName === "main") {
                add_come_code(info, "    come_heap_init(%d, %d, %d);\n", gComeMalloc, gComeDebug, gComeGC);
            }
            
            sType*% result_type = new sType("void*");
            
            if(!gComeC && !self.mFun.mNoResultType) {
                add_come_code_at_function_head(info, "%s=(void*)0;\n", make_define_var(result_type, "__result_obj__"));
            }
            
            int block_level = info->block_level;
            info->block_level = 0;
            
            transpile_block(self.mFun.mBlock, self.mFun.mParamTypes, self.mFun.mParamNames, info);
            
            info->block_level = block_level;
            
            if(!gComeC && info.come_fun.mName === "main" && !info.inhibits_output_code2) {
                free_objects(info->gv_table, null@ret_value, info);
                add_come_code(info, xsprintf("come_heap_final();\n"));
            }
    
        }
        
        info.come_fun = come_fun;
        info.come_fun_name = come_fun_name;
        
        return true;
    }
};

sBlock*% sBlock*::initialize(sBlock*% self, sInfo* info)
{
    self.mNodes = new list<sNode*%>();
    
    return self;
}

sGenericsFun*% sGenericsFun*::initialize(sGenericsFun*% self, sType*% impl_type, list<string>* generics_type_names, list<string>* method_generics_type_names, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, list<string>*% param_default_parametors, bool var_args, string block, sInfo* info, string generics_sname, int generics_sline)
{
    self.mImplType = clone impl_type;
    self.mGenericsTypeNames = clone generics_type_names;
    self.mMethodGenericsTypeNames = clone method_generics_type_names;
    
    self.mName = name;
    self.mResultType = result_type;
    self.mParamTypes = param_types;
    self.mParamNames = param_names;
    self.mParamDefaultParametors = param_default_parametors;
    self.mVarArgs = var_args;
    
    self.mBlock = block;
    self.mSLine = info.sline;
    
    self.mGenericsSName = string(generics_sname);
    self.mGenericsSLine = generics_sline;
    
    return self;
}


sBlock*% parse_block(sInfo* info=info, bool no_block_level=false, bool return_self_at_last=false, bool in_function=false)
{
    var result = new sBlock(info);
    
    int sline_top = info.sline_top;
    info.sline_top = info.sline;
    
    int block_level = info->block_level;
    if(!no_block_level) {
        info->block_level++;
    }
    
    if(*info->p == '{') {
        char* p_saved = null;
        int sline_saved = 0;
        string sname_saved = null;
        
        info->p++;
        skip_spaces_and_lf();
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
            
            char* p = info.p;
            int sline = info.sline;
            char* sname = info.sname;
            
            if(*info->p == '{') {
                info->sline_top = sline;
            }
            
            if(strncmp(info->p, "include ", strlen("include ")) == 0) {
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
                    i++;
                }
                
                info.p = module.mText;
                info.sline = module.mSLine;
                info.sname = string(module.mSName);
            }
            
            sNode*% node = statment();
            
            info->sname = node.sname();
            info->sline = node.sline();
            
            
            if(node == null) {
                err_msg(info, "Invalid expression");
                exit(1);
            }
            
            result.mNodes.push_back(node);
            
            parse_sharp();
            
            if(node.terminated()) {
                skip_spaces_and_lf();
            }
            
            
            bool omit_semicolon = true;
            if(node.terminated()) {
                omit_semicolon = false;
            }
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf();
                
                omit_semicolon = false;
            }
            parse_sharp();
            
            if(*info->p == '}') {
                result.mOmitSemicolon = omit_semicolon;
                if(omit_semicolon && in_function) {
                    result.mNodes.delete(-1, -1);
                    dec_stack_ptr(1, info);
                    
                    info.p = p;
                    info.sline = sline;
                    info.sname = string(sname);
                    
                    char* head = info.p;
                    sNode*% value = expression();
                    char* tail = info.p;
                    value = post_position_operator(value, info);
                    
                    char buf[tail-head+1];
                    memcpy(buf, head, tail-head);
                    buf[tail-head] = '\0';
                    
                    info->p++; // }
                    skip_spaces_and_lf();
                    
                    sNode*% node = create_return_node(value, string(buf));
                    
                    result.mNodes.push_back(node);
                    
                    break;
                }
                else {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
            }
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
    }
    else {
        parse_sharp();
        sNode*% node;
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            
            node = new sSemicolonNode() implements sNode;
            
            result.mNodes.push_back(node);
        }
        else {
            node = expression();
            parse_sharp();
            
            if(node == null) {
                err_msg(info, "Invalid expression");
                exit(1);
            }
            
            parse_sharp();
            
            if(node.terminated()) {
                skip_spaces_and_lf();
            }
            
            bool omit_semicolon = true;
            if(node.terminated()) {
                omit_semicolon = false;
            }
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf();
                
                omit_semicolon = false;
            }
            parse_sharp();
            result.mOmitSemicolon = omit_semicolon;
            
            result.mNodes.push_back(node);
        }
    }
    
    if(return_self_at_last) {
        char* p = info.p;
        char* head = info.head;
        
        string source = string("return self;");
        
        info.p = source;
        info.head = source;
        
        sNode*% node = expression();
        
        if(node == null) {
            err_msg(info, "Invalid expression");
            exit(1);
        }
        
        result.mNodes.push_back(node);
        
        info.p = p;
        info.head = head;
    }
    
    info->block_level = block_level;
    
    return result;
}

int transpile_block(sBlock* block, list<sType*%>* param_types, list<string>* param_names, sInfo* info, bool no_var_table=false, bool loop_block=false, bool comma=false, bool if_result=false)
{
    if(info.output_header_file) {
        return 0;
    }
    
    bool inhibits_output_code = info->inhibits_output_code;
    info->inhibits_output_code = false;
    
    sVarTable* old_table = info->lv_table;
    if(!no_var_table) {
        block->mVarTable = new sVarTable(false@global, old_table);
        info->lv_table = block->mVarTable;
    }

    sVarTable* current_loop_vtable = info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable = block->mVarTable;
    }
    
    list<sType*%>* param_types_ = info.param_types;
    list<string>* param_names_ = info.param_names;
    
    info.param_types = param_types;
    info.param_names = param_names;
    
    if(param_types && param_names) {
        int i;
        foreach(name, param_names) {
            sType*% type = clone param_types[i];
            type->mFunctionParam = true;
            type->mAllocaValue = false;
            add_variable_to_table(name, clone type, info);
            i++;
        }
    }
    
    int block_level = info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    
    if(block->mNodes.length() == 0) {
    }
    else {
        int i;
        foreach(node, block->mNodes) {
            var right_value_objects = info.right_value_objects;
            info.right_value_objects = new list<sRightValueObject*%>();
            
            info.module.mLastCode = null;
            info.module.mLastCode2 = null;
            info.module.mLastCode3 = null;
            
            int stack_num_before = info->stack.length();
            
            int sline = info.sline;
            string sname = string(info.sname);
            
            info->last_statment_is_return = false;
            
            info.sline = node.sline->();
            info.sname = node.sname->();
            
            if(i == block->mNodes.length()-1 && if_result && block->mOmitSemicolon) {
                if(!node_compile(node)) {
                    printf("%s %d: compiling is failed(5)\n", info->sname, info->sline);
                    exit(2);
                }
                
                if(info.stack.length() == stack_num_before + 1) {
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    dec_stack_ptr(1, info);
                    
                    if(come_value.type.mClass.mName === "void" && come_value.type.mPointerNum == 0) {
                        CVALUE*% come_value2 = clone come_value;
                        
                        info.stack.push_back(come_value2);
                        info.module.mLastCode = xsprintf("%s;\n", come_value2.c_value);
                    }
                    else {
                        CVALUE*% come_value2 = clone come_value;
                        
                        sVar* var_ = get_variable_from_table(info.lv_table, info->if_result_var_name);
                        if(var_) {
                            CVALUE*% come_value3 = new CVALUE;
                            if(var_->mType->mClass === "void" && var_->mType->mPointerNum == 1) {
                                if(!check_assign_type("invalid if result value", var_->mType, clone come_value.type, come_value3, pointer_massive:true, info)) 
                                {
                                    err_msg(info, "invalid if result value");
                                    exit(2);
                                }
                            }
                            
                            var_->mType = clone come_value.type;
                            if(come_value.type.mHeap) {
                                string c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                                come_value2.c_value = xsprintf("%s=(void*)(%s)", var_->mCValueName, c_value);
                            }
                            else {
                                come_value2.c_value = xsprintf("%s=(void*)(%s)", var_->mCValueName, come_value.c_value);
                            }
                        }
                        
                        info.stack.push_back(come_value2);
                        info.module.mLastCode = xsprintf("%s;\n", come_value2.c_value);
                    }
                }
            }
            else {
                if(!node_compile(node)) {
                    printf("%s %d: compiling is failed(5)\n", info->sname, info->sline);
                    exit(2);
                }
            }
            
            info.sline = sline;
            info.sname = string(sname);
    
            if(comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            
            arrange_stack(info, stack_num_before);

            free_right_value_objects(info);
            
            if(info.right_value_objects) info.right_value_objects.reset();
            info.right_value_objects = right_value_objects;
            
            i++;
        }
    }

    if(!no_var_table && !info.inhibits_output_code) {
        free_objects(info->lv_table, null, info);
        
        if(info->match_it_var && block_level == 0) {
            foreach(it, info->match_it_var) {
                free_object(it->mType, it->mCValueName, false@no_decrement, false@no_free, info);
            }
            info->match_it_var = null
        }
    }
    
    info->lv_table = old_table;
    info->block_level = block_level;
    
    info.param_types = param_types_;
    info.param_names = param_names_;
    
    if(info.come_fun.mName === "main") {
        info->inhibits_output_code2 = info->inhibits_output_code;
    }

    info->current_loop_vtable = current_loop_vtable;
    info->inhibits_output_code = inhibits_output_code;
    
    return 0;
}

void arrange_stack(sInfo* info, int top)
{
    if(info->stack.length() > top) {
        dec_stack_ptr(info->stack.length()-top, info);
    }
    if(info->stack.length() < top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n", info->sname, info->sline, info->stack.length(), top);
        exit(2);
    }
}

int expected_next_character(char c, sInfo* info=info)
{
    parse_sharp();
    if(*info->p != c) {
        if(!info.no_output_err) {
            err_msg(info, "expected next charaster is %c, but %c\n", c, *info->p);
            exit(2);
        }
    }
    
    info->p++;
    skip_spaces_and_lf();
    
    return 0;
}

string skip_block(sInfo* info=info)
{
    char* head = info.p;
    if(*info->p == '{') {
        info->p++;

        bool dquort = false;
        bool squort = false;
        int sline = 0;
        int nest = 0;
        while(1) {
            if(dquort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    if(*info->p == '\n') {
                        info->p++;
                    }
                    info->p++;
                }
                else if(*info->p == '"') {
                    info->p++;
                    dquort = !dquort;
                }
                else if(*info->p == '\n') {
                    info->p++;
                    info->sline++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(squort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    if(*info->p == '\n') {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(*info->p == '\'') {
                    info->p++;
                    squort = !squort;
                }
                else if(*info->p == '\n') {
                    info->p++;
                    info->sline++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(*info->p == '\'') {
                sline = info->sline;
                info->p++;
                squort = !squort;
            }
            else if(*info->p == '"') {
                sline = info->sline;
                info->p++;
                dquort = !dquort;
            }
            else if(*info->p == '#') {
                parse_sharp();
            }
            else if(*info->p == '{') {
                info->p++;

                nest++;
            }
            else if(*info->p == '}') {
                info->p++;

                if(nest == 0) {
                    skip_spaces_and_lf();
                    break;
                }

                nest--;
            }
            else if(*info->p == '\0') {
                err_msg(info, "The block requires } character for closing block");
                exit(2);
            }
            else if(*info->p == '\n') {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info, "Require block. This is %c", *info->p);
    }
    
    char* tail = info.p;
    
    char*% buf = new char[tail-head+1];
    memcpy(buf, head, tail-head);
    buf[tail-head] = '\0';
    
    return string(buf);
}

bool strmemcmp(char* p, char* p2)
{
    bool terminated = false;
    char* p3  = p;
    for(int i=0; i<strlen(p2); i++) {
        if(*p3 == '\0') {
            terminated = true;
            break;
        }
        p3++;
    }
    return !terminated && memcmp(p, p2, strlen(p2)) == 0;
}

string parse_attribute(sInfo* info=info)
{
    buffer*% asm_fun_name = new buffer();
    
    while(true) {
        if(strmemcmp(info->p, "__attribute_pure__")) {
            info->p += strlen("__attribute_pure__");
            skip_spaces_and_lf();
        }
        else if(strmemcmp(info->p, "__attribute_malloc__")) {
            info->p += strlen("__attribute_malloc__");
            skip_spaces_and_lf();
        }
        else if(strmemcmp(info->p, "__attr_dealloc_fclose")) {
            info->p += strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf();
        }
        else if(strmemcmp(info->p, "__wur")) {
            info->p += strlen("__wur");
            skip_spaces_and_lf();
        }
        else if(strmemcmp(info->p, "__noreturn")) {
            info->p += strlen("__noreturn");
            skip_spaces_and_lf();
        }
        else if(strmemcmp(info->p, "__attribute__")) {
            info->p += strlen("__attribute__");
            skip_spaces_and_lf();

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

            skip_spaces_and_lf();
        }
        else if(strmemcmp(info->p, "__asm__")) {
            info->p += strlen("__asm__");
            skip_spaces_and_lf();

            int len = 0;

            bool in_dquort = false;
            int brace_num = 0;
            while(*info->p) {
                if(*info->p == '"') {
                    info->p++;

                    in_dquort = !in_dquort;
                }
                else if(in_dquort) {
                    asm_fun_name.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '(') {
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

            skip_spaces_and_lf();
        }
        else if(strmemcmp(info->p, "__asm")) {
            info->p += strlen("__asm");
            skip_spaces_and_lf();

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

            skip_spaces_and_lf();
        }
        else {
            break;
        }
    }

    return asm_fun_name.to_string();
}

void transpile_toplevel(bool block=false, sInfo* info=info)
{
    while(*info->p) {
        parse_sharp();
        
        char* head = info.p;
        int head_sline = info.sline;
        string buf = parse_word();
        
        parse_sharp();
        
        if(block && *info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        
        sNode*% node = top_level(buf, head, head_sline, info);
        parse_sharp();
        
        while(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }
        parse_sharp();
        
        if(node != null) {
            if(!node_compile(node)) {
                printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
                exit(2);
            }
        }
        parse_sharp();
        
        skip_spaces_and_lf();
        
        if(block && *info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
}

int transpile(sInfo* info) version 5
{
    skip_spaces_and_lf();
    parse_sharp();
    
    {
        var name = string("come_calloc");
        var result_type = new sType("void*");
        var param_types = [new sType("int"), new sType("int"), new sType("char*"), new sType("int"), new sType("char*")];
        var param_names = [string("count"), string("size"), string("sname"), string("sline"), string("class_name")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        param_default_parametors.push_back(null);
        param_default_parametors.push_back(string("null"));
        param_default_parametors.push_back(string("0"));
        param_default_parametors.push_back(string("null"));
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_increment_ref_count");
        var result_type = new sType("void*");
        var param_types = [new sType("void*")];
        var param_names = [string("mem")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("void* come_increment_ref_count(void* mem)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_call_finalizer");
        var result_type = new sType("void");
        var param_types = [new sType("void*"), new sType("void*"), new sType("void*"), new sType("void*"), new sType("int"), new sType("int"), new sType("int")];
        var param_names = [string("fun"), string("mem"), string("protocol_fun"), string("protocol_obj"), string("call_finalizer_only"), string("no_decrement"), string("no_free")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_decrement_ref_count");
        var result_type = new sType("void*");
        var param_types = [new sType("void*"), new sType("void*"), new sType("void*"), new sType("bool"), new sType("bool")];
        var param_names = [string("mem"), string("protocol_fun"), string("protocol_obj"), string("no_decrement"), string("no_free")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_free_object");
        var result_type = new sType("void");
        var param_types = [new sType("void*")];
        var param_names = [string("mem")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("void come_free_object(void* mem)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_memdup");
        var result_type = new sType("void*");
        var param_types = [new sType("void*"), new sType("char*"), new sType("int"), new sType("char*")];
        var param_names = [string("block"), string("sname"), string("sline"), string("class_name")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        param_default_parametors.push_back(string("null"));
        param_default_parametors.push_back(string("0"));
        param_default_parametors.push_back(string("null"));
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("memset");
        var result_type = new sType("void*");
        var param_types = [new sType("void*"), new sType("int"), new sType("long")];
        var param_names = [string("b"), string("c"), string("len")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("void* memset(void* b, int c, size_t len)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("__builtin_string");
        var result_type = new sType("char*");
        var param_types = [new sType("char*")];
        var param_names = [string("str")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("char* __builtin_string(char* str)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
/*
    {
        var name = string("__builtin_bswap16");
        var result_type = new sType("short");
        var param_types = [new sType("short")];
        var param_names = [string("x")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("short __builtin_bswap16(short x)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("__builtin_bswap32");
        var result_type = new sType("int");
        var param_types = [new sType("int")];
        var param_names = [string("x")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("int __builtin_bswap32(int x)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("__builtin_bswap64");
        var result_type = new sType("long");
        var param_types = [new sType("long")];
        var param_names = [string("x")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("long __builtin_bswap64(long x)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
*/
    {
        var name = string("come_heap_init");
        var result_type = new sType("void");
        var param_types = [new sType("int"), new sType("int"), new sType("int")];
        var param_names = [s"come_malloc", s"come_debug", s"come_gc"];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("come_heap_init(int come_malloc, int come_debug, int come_gc)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_heap_final");
        var result_type = new sType("void");
        var param_types = new list<sType*%>();
        var param_names = new list<string>();
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("void come_heap_final()")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_null_check");
        var result_type = new sType("void*");
        var param_types = [new sType("void*"), new sType("char*"), new sType("int"), new sType("int")];
        var param_names = [string("mem"), string("sname"), string("sline"), string("id")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("void* come_null_check(void* mem, char* sname, int sline, int id)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("__builtin_va_start");
        var result_type = new sType("void");
        var param_types = new list<sType*%>();
        var param_names = new list<string>();
        var param_default_parametors = new list<string>();
        var fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, true@var_args
            , null@block, false@static_
            , string("void __builtin_va_start()")
            , string("")
            , info);
        
        info.funcs.insert(string(name), fun);
    }
/*
    {
        var name = string("__builtin_va_arg");
        var result_type = new sType("void");
        var param_types = [new sType("char*")];
        var param_names = [s"ap"];
        var param_default_parametors = [null, null];
        var fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null@block, false@static_
            , string("void __builtin_va_va_arg(char* ap)")
            , string("")
            , info);
        
        info.funcs.insert(string(name), fun);
    }
*/
    {
        var name = string("__builtin_va_end");
        var result_type = new sType("void");
        var param_types = new list<sType*%>();
        var param_names = new list<string>();
        var param_default_parametors = new list<string>();
        var fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, true@var_args
            , null@block, false@static_
            , string("void __builtin_va_end()")
            , string("")
            , info);
        
        info.funcs.insert(string(name), fun);
    }
    
    transpile_toplevel();
    
    return 0;
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 99
{
    char* source_head = info->p;
    
    bool is_type_name_flag = is_type_name(buf);
    int sline = info.sline;
    
    /// backtrace ///
    bool define_struct_nobody = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(buf === "struct") {
            if(xisalpha(*info->p) || *info->p == '_') {
                string word = parse_word();
                
                if(*info->p == ';') {
                    define_struct_nobody = true;
                }
            }
        }
        
        info.p = head;
        info.sline = sline;
    }
    
    /// backtrace ///
    bool define_function_pointer_result_function = false;
    bool define_variable_between_brace = false;
    if(is_type_name_flag)
    {
        char* p = info.p;
        info.p = head;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            var result_type, fun_name, err = backtrace_parse_type();

            
            if(*info->p == '(') {
                info->p ++;
                skip_spaces_and_lf();
                
                if(*info->p != '*') {
                    define_function_pointer_result_function = true;
                    
                    if(xisalpha(*info->p) || *info->p == '_') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        string word = parse_word();
                        
                        if(!is_type_name(word) && *info->p == ')') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            if(*info->p == '(') {
                            }
                            else {
                                define_variable_between_brace = true;
                            }
                        }
                    }
                }
            }
        }
        
        info.p = head;
        info.sline = sline;
    }
    
    /// backtrace ///
    bool define_function_flag = false;
    if(is_type_name_flag && !define_function_pointer_result_function && buf !== "__typeof__")
    {
        char* p = info.p;
        info.p = head;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            var result_type, fun_name, err = backtrace_parse_type();
        }
        
        if(!info.define_struct) {
            info.define_struct = false;
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
                    if(is_type_name_flag) {
                        define_function_flag = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    /// backtrace ///
    bool define_variable = true;
    if(is_type_name_flag && !define_function_pointer_result_function)
    {
        char* p = info.p;
        info.p = head;
        
        if(!is_type_name_flag) {
            define_variable = false;
        }
        
        if(xisalpha(*info->p) || *info->p == '_') {
            var result_type, fun_name, err = backtrace_parse_type();
            
            if(*info->p == '(') {
                info->p ++;
                skip_spaces_and_lf();
                
                if(*info->p == '*') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(xisalpha(*info->p) || *info->p == '_') {
                        string word = parse_word();
                        
                        if(*info->p == ')') {
                            info->p++;
                            skip_spaces_and_lf();
                            
                            if(*info->p == '(') {
                                define_variable = true;
                            }
                        }
                    }
                }
                else if(xisalpha(*info->p) || *info->p == '_') {
                    string word = parse_word();
                    
                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf();
                        
                        if(!is_type_name(word) && *info->p != '(') {
                            define_variable = true;
                        }
                    }
                }
            }
        }
        
        if(info.define_struct) {
            info.define_struct = false;
            define_variable = false;
        }
        else if(define_variable) {
        }
        else {
            if(!(xisalpha(*info->p) || *info->p == '_')) {
                define_variable = false;
            }
            
            while(xisalpha(*info->p) || *info->p == '_') {
                info->p++;
            }
            skip_spaces_and_lf();
            
            if(*info->p == '(' || *info->p == ':') {
                define_variable = false;
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    else {
        define_variable = false;
    }
    
    /// backtrace ///
    {
        char* p = info.p;
        info.p = head;
        
        if(buf === "struct") {
            if(xisalpha(*info->p) || *info->p == '_') {
                parse_word();
                if(xisalpha(*info->p) || *info->p == '_') {
                    string word = parse_word();
                    if(xisalpha(*info->p) || *info->p == '_') {
                        word = parse_word();
                        
                        if(word === "extends") {
                            define_variable = false;
                        }
                    }
                }
            }
        }
        
        if(info.define_struct) {
            info.define_struct = false;
            define_variable = false;
        }
        else if(define_variable) {
        }
        else {
            if(!(xisalpha(*info->p) || *info->p == '_')) {
                define_variable = false;
            }
            
            while(xisalpha(*info->p) || *info->p == '_') {
                info->p++;
            }
            skip_spaces_and_lf();
            
            if(*info->p == '(' || *info->p == ':') {
                define_variable = false;
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(buf === "template") {
        string word = parse_word();
        
        if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            info->method_generics_type_names.reset();
            
            while(true) {
                if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == '\0') {
                    err_msg(info, "unexpected source end");
                    exit(2);
                }
                else {
                    string word = parse_word();       // definition limit
                    info->method_generics_type_names.push_back(clone word);
                }
            }
            
            sNode*% node = parse_function(info);
            
            info->method_generics_type_names.reset();
            
            return node;
        }
    }
    else if(buf === "enum" && *info->p == '{') {
    }
    else if(define_struct_nobody) {
    }
    else if(define_variable_between_brace) {
        info.p = head;
        info.sline = sline;
        
        return parse_global_variable(info);
    }
    else if(define_function_pointer_result_function) {
        char* header_head = info.p;
        var result_type, fun_name, err = parse_type();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            var param_types = new list<sType*%>();
            var param_names = new list<string>();
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf();
            }
            else {
                while(true) {
                    var param_type, param_name, err = parse_type(parse_multiple_type:false);
                    
                    if(!err) {
                        err_msg(info, "parse_type is failed");
                        exit(2);
                    }
                    
                    param_types.push_back(param_type);
                    
                    static int num_function_pointer_result_var_name_a = 0;
                    param_names.push_back(xsprintf("_function_pointer_result_var_name_a%d", ++num_function_pointer_result_var_name_a));
                    
                    if(xisalpha(*info->p) || *info->p == '_') {
                        (void)parse_word();
                    }
                    
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
                        err_msg(info, "require , or ) (1) it is %c", *info->p);
                        exit(2);
                    }
                }
            }
            
            expected_next_character(')');
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf();
                
                var param_types2 = new list<sType*%>();
                var param_names2 = new list<string>();
                
                if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else {
                    while(true) {
                        var param_type, param_name, err = parse_type(parse_multiple_type:false);
                        
                        if(!err) {
                            err_msg(info, "parse_type is failed");
                            exit(2);
                        }
                        
                        param_types2.push_back(param_type);
                        
                        static int num_function_pointer_result_var_name_b = 0;
                        param_names2.push_back(xsprintf("_function_pointer_result_var_name_b%d", ++num_function_pointer_result_var_name_b));
                    
                        if(xisalpha(*info->p) || *info->p == '_') {
                            (void)parse_word();
                        }
                        
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
                            err_msg(info, "require , or ) (2)");
                            exit(2);
                        }
                    }
                }
                
                char* header_tail = info.p;
                
                sType*% result_type2 = new sType("lambda");
                
                result_type2->mResultType = new tuple1<sType*%>(result_type);
                result_type2->mParamTypes = clone param_types2;
                result_type2->mParamNames = clone param_names2;
                result_type2->mVarArgs = false;
                result_type2->mStatic = false;
                
                bool var_args = false;
                
                buffer*% header_buf = new buffer();
                header_buf.append(header_head, header_tail - header_head);
                header_buf.append_char('\0');
                
                var param_default_parametors = new list<string>();
                
                var fun = new sFun(string(fun_name), result_type2
                                    , param_types, param_names
                                    , param_default_parametors
                                    , true@external, var_args, null@block
                                    , false@static_, header_buf.to_string(), string(info->sname), info);
                
                var fun2 = info.funcs[string(fun_name)]??;
                if(fun2 == null || fun2.mExternal) {
        
                    info.funcs.insert(clone fun_name, fun);
                }
                
                return new sFunNode(fun, info) implements sNode;
            }
            else {
                err_msg(info, "require (");
                exit(2);
            }
        }
    }
    else if(define_function_flag) {
        info.p = head;
        info.sline = sline;
        
        sNode*% node = parse_function(info);
        
        return node;
    }
    else if(define_variable) {
        info.p = head;
        info.sline = sline;
        
        sNode*% node = parse_global_variable(info);
        
        char* source_tail = info.p;
        
        buffer*% header = new buffer();
        header.append(source_head, source_tail - source_head);
        
        //add_come_code_at_come_header(info, "%s %s;\n", buf, header.to_string());
        
        return node;
    }
    
    info.p = head;
    info.sline = sline;
    
    string buf2 = parse_word();
 
    return inherit(buf2, head, head_sline, info);
}


bool create_generics_fun(string fun_name, sGenericsFun* generics_fun, sType* generics_type, sInfo* info)
{
    sFun* caller_fun = info->caller_fun;
    info->caller_fun = info->come_fun;
    int caller_line = info->caller_line;
    info->caller_line = info->sline;
    char* caller_sname = info->caller_sname;
    info->caller_sname = info->sname;
    bool comma_instead_of_semicolon = info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon = false;
    
    string last_code = info.module.mLastCode;
    info.module.mLastCode = null;
    string last_code2 = info.module.mLastCode2;
    info.module.mLastCode2 = null;
    string last_code3 = info.module.mLastCode3;
    info.module.mLastCode3 = null;
    
    string sname_top = string(info->sname);
    int sline_top = info->sline;
    
    if(generics_type->mNoSolvedGenericsType.v1) {
        generics_type = generics_type->mNoSolvedGenericsType.v1;
    }
    sFun* funX = info.funcs[fun_name]??;
    if(funX) {
        return true;
    }

    sType*% result_type = solve_generics(generics_fun->mResultType, generics_type, info);
    
    list<sType*%>*% param_types = new list<sType*%>();
    foreach(it, generics_fun->mParamTypes) {
        sType*% param_type = solve_generics(clone it, generics_type, info);
        
        param_type->mFunctionParam = true;

        param_types.add(clone param_type);
    }
    list<string>*% param_names = clone generics_fun->mParamNames;
    
    var param_default_parametors = clone generics_fun->mParamDefaultParametors;
    
    char* p = info.p;
    int sline = info.sline;
    string sname = info.sname;
    char* head = info.head;
    buffer*% source = info.source;
    
    info.source = generics_fun->mBlock.to_buffer();
    info.p = info.source.buf;
    info.head = info.source.buf;
    
    sType*% generics_type_saved = info->generics_type;
    info->generics_type = clone generics_type;
    
    list<string>*% method_generics_type_names = info->method_generics_type_names;
    
    info->method_generics_type_names = new list<string>();
    foreach(it, generics_fun->mMethodGenericsTypeNames) {
        info->method_generics_type_names.push_back(clone it);
    }
    
    info.generics_type_names.reset();
    info.generics_type_names = clone generics_fun.mGenericsTypeNames;
    
    info.sline = generics_fun->mGenericsSLine;
    info.sname = generics_fun->mGenericsSName;
    
    sBlock*% block = parse_block(in_function:true);
    
    info.head = head;
    info.source = source;
    info.p = p;
    info.sline = sline;
    info.sname = sname;
    
    result_type->mInline = false;
    
    bool var_args = generics_fun.mVarArgs;
    var fun = new sFun(fun_name, result_type
                    , clone param_types
                    , param_names, param_default_parametors, false@external
                    , var_args, block, true@static_, string(""), string(""), info);
    
    info.funcs.insert(clone fun_name, fun);
    
    sNode*% node = new sFunNode(fun, info) implements sNode;
    
    bool in_generics_fun = info.in_generics_fun;
    info.in_generics_fun = true;
    if(!node_compile(node)) {
        return false
    }
    info.in_generics_fun = in_generics_fun;
    
    info->generics_type = generics_type_saved;
    info.method_generics_type_names = method_generics_type_names;
    
    info.generics_type_names.reset();
    
    info->sname = string(sname_top);
    info->sline = sline_top;
    
    info.module.mLastCode = last_code;
    info.module.mLastCode2 = last_code2;
    info.module.mLastCode3 = last_code3;
    
    info->caller_fun = caller_fun;
    info->caller_line = caller_line;
    info->caller_sname = caller_sname;
    info->comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return true;
}

bool create_method_generics_fun(string fun_name, sGenericsFun* generics_fun, sInfo* info)
{
    sFun* caller_fun = info->caller_fun;
    info->caller_fun = info->come_fun;
    int caller_line = info->caller_line;
    info->caller_line = info->sline;
    char* caller_sname = info->caller_sname;
    info->caller_sname = info->sname;
    bool comma_instead_of_semicolon = info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon = false;
    
    string last_code = info.module.mLastCode;
    info.module.mLastCode = null;
    string last_code2 = info.module.mLastCode2;
    info.module.mLastCode2 = null;
    string last_code3 = info.module.mLastCode3;
    info.module.mLastCode3 = null;
    
    string sname_top = string(info->sname);
    int sline_top = info->sline;
    
    sFun* funX = info.funcs[fun_name]??;
    if(funX) {
        return true;
    }

    sType*% result_type = solve_method_generics(generics_fun->mResultType, info);
    
    list<sType*%>*% param_types = new list<sType*%>();
    foreach(it, generics_fun->mParamTypes) {
        sType*% param_type = solve_method_generics(clone it, info);
        
        param_type->mFunctionParam = true;

        param_types.add(clone param_type);
    }
    list<string>*% param_names = clone generics_fun->mParamNames;
    
    var param_default_parametors = clone generics_fun->mParamDefaultParametors;
    
    char* p = info.p;
    int sline = info.sline;
    string sname = info.sname;
    char* head = info.head;
    buffer*% source = info.source;
    
    info.source = generics_fun->mBlock.to_buffer();
    info.p = info.source.buf;
    info.head = info.source.buf;
    
    list<string>*% method_generics_type_names = info->method_generics_type_names;
    
    info->method_generics_type_names = new list<string>();
    foreach(it, generics_fun->mMethodGenericsTypeNames) {
        info->method_generics_type_names.push_back(clone it);
    }
    
    info.generics_type_names.reset();
    info.generics_type_names = clone generics_fun.mGenericsTypeNames;
    
    info.sline = generics_fun->mGenericsSLine;
    info.sname = generics_fun->mGenericsSName;
    
    sBlock*% block = parse_block(in_function:true);
    
    info.head = head;
    info.source = source;
    info.p = p;
    info.sline = sline;
    info.sname = sname;
    
    result_type->mInline = false;
    
    bool var_args = generics_fun.mVarArgs;
    var fun = new sFun(fun_name, result_type
                    , clone param_types
                    , param_names, param_default_parametors, false@external
                    , var_args, block, true@static_, string(""), string(""), info);
    
    info.funcs.insert(clone fun_name, fun);
    
    sNode*% node = new sFunNode(fun, info) implements sNode;
    
    if(!node_compile(node)) {
        return false
    }
    
    info.method_generics_type_names = method_generics_type_names;
    
    info.generics_type_names.reset();
    
    info->sname = string(sname_top);
    info->sline = sline_top;
    
    info.module.mLastCode = last_code;
    info.module.mLastCode2 = last_code2;
    info.module.mLastCode3 = last_code3;
    
    info->caller_fun = caller_fun;
    info->caller_line = caller_line;
    info->caller_sname = caller_sname;
    info->comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return true;
}

sNode*% parse_function(sInfo* info)
{
    char* header_head = info.p;
    char* source_head = info.p;
    
    sType*% result_type = null;
    string var_name = null;
    bool constructor_ = false;
    
    if(info.in_class && memcmp(info.p, "new(", 4) == 0) {
        parse_word();
        result_type = clone info.impl_type;
        result_type.mHeap = true;
//        result_type.mExtern = true;
        constructor_ = true;
        
        info.constructor_ = true;
    }
    else {
        var result_type2, var_name2, err = parse_type();
        
        result_type = result_type2;
        var_name = var_name2;
        
        if(info.in_class) {
//            result_type.mExtern = true;
        }
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
    }
    
    /// backtrace ///
    bool method_definition = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        buffer*% buf2 = new buffer();
        while(xisalnum(*info->p) || *info->p == '_') {
            buf2.append_char(*info->p);
            info->p++;
        }
        skip_spaces_and_lf();
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf();
        }
        while(*info->p == '[' && *(info->p+1) == ']') {
            info->p+=2;
            skip_spaces_and_lf();
        }
        while(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        if(buf2.length() > 0 && *info->p == ':' && *(info->p+1) == ':') {
            method_definition = true;
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    string fun_name;
    char*% base_fun_name = null;
    if(constructor_) {
        base_fun_name = string("initialize");
        fun_name = create_method_name(info->impl_type, false@no_pointer_name, base_fun_name, info);
    }
    else if(method_definition) {
        var obj_type, name, err = parse_type();
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        expected_next_character(':');
        expected_next_character(':');
        
        base_fun_name = parse_word();
        fun_name = create_method_name(obj_type, false@no_pointer_name, base_fun_name, info);
    }
    else if(info->impl_type) {
        base_fun_name = parse_word();
    
        fun_name = create_method_name(info->impl_type, false@no_pointer_name, base_fun_name, info);
    }
    else {
        fun_name = parse_word();
        base_fun_name = string(fun_name);
    }
    
    if(info.in_class && base_fun_name === "initialize") {
        info.in_class = false;
    }
    var param_types, param_names, param_default_parametors, var_args = parse_params(info, constructor_);
    char* header_tail = info.p;
    if(info.in_class && base_fun_name === "initialize") {
        info.in_class = true;
    }
    
    buffer*% header_buf = new buffer();
    
    header_buf.append(header_head, header_tail - header_head);
    header_buf.append_char('\0');
    
    int version = 0;
    if(parsecmp("version")) {
        info->p += strlen("version");
        skip_spaces_and_lf();
        
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
        }
        skip_spaces_and_lf();
        
        version = n;
    }
    
    if(base_fun_name === "lambda") {
        sBlock*% block = parse_block(in_function:true);
        
        static int lambda_num = 0;
        lambda_num++;
        
        string fun_name = xsprintf("lambda%d", lambda_num);
        
        result_type->mStatic = false;
        
        var fun = new sFun(string(fun_name), result_type, param_types, param_names
                            , param_default_parametors
                            , false@external, var_args, block
                            , true@static_, header_buf.to_string(), string(""), info);
        
        var fun2 = info.funcs[string(fun_name)]??;
        if(fun2 == null || fun2.mExternal) {
            info.funcs.insert(clone fun_name, fun);
        }
        
        return new sLambdaNode(fun, info) implements sNode;
    }
    else if(info.impl_type && info.generics_type_names.length() > 0) {
        string none_generics_name = get_none_generics_name(info.impl_type.mClass.mName);
        
        string generics_sname = string(info.sname);
        int generics_sline = info.sline;
        
        string block = skip_block(info);
        
        var fun = new sGenericsFun(info.impl_type, clone info.generics_type_names, clone info.method_generics_type_names, string(fun_name), result_type, param_types, param_names, param_default_parametors, var_args, block, info, string(generics_sname), generics_sline);
        
        string fun_name3 = xsprintf("%s_%s", none_generics_name, base_fun_name);
        
        info.generics_funcs.insert(string(fun_name3), fun);
        
        return (sNode*%)null;
    }
    else if(info.method_generics_type_names.length() > 0) {
        string generics_sname = string(info.sname);
        int generics_sline = info.sline;
        
        string block = skip_block(info);
        
        var fun = new sGenericsFun(info.impl_type, clone info.generics_type_names, clone info.method_generics_type_names, string(fun_name), result_type, param_types, param_names, param_default_parametors, var_args, block, info, string(generics_sname), generics_sline);
        
        string fun_name3 = clone base_fun_name;
        
        if(method_definition) {
            info.generics_funcs.insert(string(fun_name), fun);
        }
        else {
            info.generics_funcs.insert(string(fun_name3), fun);
        }
        
        return (sNode*%)null;
    }
    else if(*info->p == '{') {
        char* source_tail = info.p -1;
        
        buffer*% header = new buffer();
        
        if(constructor_) {
            if(param_types.length() == 1) {
                string name = clone info.impl_type->mClass->mName;
                header.append_format("extern %s*%% %s*::initialize(%s*%% self);\n", name, name, name);
            }
            else {
                string name = clone info.impl_type->mClass->mName;
                header.append_format("extern %s*%% %s*::initialize(%s*%% self, ", name, name, name);
                
                for(int i=1; i<param_types.length(); i++) {
                    var param_type = param_types[i];
                    var param_name = param_names[i];
                    var default_parametor = param_default_parametors[i]??;
                    
                    if(default_parametor) {
                        header.append_format("extern %s %s=%s", make_come_type_name_string_no_solved(param_type), param_name, default_parametor);
                    }
                    else {
                        header.append_format("extern %s %s", make_come_type_name_string_no_solved(param_type), param_name);
                    }
                    
                    if(i != param_types.length()-1) {
                        header.append_str(",");
                    }
                }
                
                header.append_str(");\n");
            }
        }
        else if(info.in_class && info.impl_type) {
            if(param_types.length() == 1) {
                string impl_name = clone info.impl_type->mClass->mName;
                string result_type_name = make_come_type_name_string_no_solved(result_type);
                header.append_format("extern %s %s*::%s(%s* self);\n", result_type_name, impl_name, base_fun_name, impl_name);
            }
            else {
                string impl_name = clone info.impl_type->mClass->mName;
                string result_type_name = make_come_type_name_string_no_solved(result_type);
                header.append_format("extern %s %s*::%s(%s* self, ", result_type_name, impl_name, base_fun_name, impl_name);
                
                for(int i=1; i<param_types.length(); i++) {
                    var param_type = param_types[i];
                    var param_name = param_names[i];
                    var default_parametor = param_default_parametors[i]??;
                    
                    if(default_parametor) {
                        header.append_format("extern %s %s=%s", make_come_type_name_string_no_solved(param_type), param_name, default_parametor);
                    }
                    else {
                        header.append_format("extern %s %s", make_come_type_name_string_no_solved(param_type), param_name);
                    }
                    
                    if(i != param_types.length()-1) {
                        header.append_str(",");
                    }
                }
                
                header.append_str(");\n");
            }
        }
        else {
            header.append(source_head, source_tail - source_head);
            header.append_str(";\n");
        }
        
        if(!result_type->mStatic) {
            if(!info->no_output_come_code) {
                add_come_code_at_come_header(info, "%s", header.to_string());
            }
        }
        
        sBlock*% block = parse_block(in_function:true, info, false, constructor_);
        
        bool static_ = false;
        if(result_type->mStatic) {
            result_type->mStatic = false;
            static_ = true;
        }
        
        if(version > 0) {
            string new_fun_name = xsprintf("%s_v%d", string(fun_name), version);
            fun_name = string(new_fun_name);
        }
        
        var fun = new sFun(string(fun_name), result_type, param_types
                                , param_names
                                , param_default_parametors
                                , false@external, var_args, clone block
                                , static_
                                , header_buf.to_string()
                                , string(info->sname)
                                , info);
    
        if(info.in_class) {
            info.funcs.insert(clone fun_name, fun);
        }
        else {
            var fun2 = info.funcs[string(fun_name)]??;
            if(fun2 == null || fun2.mExternal) {
        
                info.funcs.insert(clone fun_name, fun);
            }
        }
    
        return new sFunNode(fun, info) implements sNode;
    }
    else if(xisalpha(*info->p) || *info->p == '_' || *info->p == ';') {
        if(version > 0) {
            string new_fun_name = xsprintf("%s_v%d", fun_name, version);
            fun_name = string(new_fun_name);
        }
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
            
            bool result_type_static = result_type->mStatic;
            result_type->mStatic = false;
            
            var fun = new sFun(string(fun_name), result_type
                                , param_types, param_names
                                , param_default_parametors
                                , true@external, var_args, null@block
                                , false@static_, header_buf.to_string(), string(info->sname), info);
            
            var fun2 = info.funcs[string(fun_name)]??;
            if(fun2 == null || fun2.mExternal) {
    
                info.funcs.insert(clone fun_name, fun);
            }
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append(source_head, source_tail - source_head);
            
            if(!result_type_static) {
                if(!info->no_output_come_code) {
                    add_come_code_at_come_header(info, "%s", header.to_string());
                }
            }
            
            return new sFunNode(fun, info) implements sNode;
        }
        else {
            string asm_fun = parse_attribute();
            
            if(asm_fun !== "") {
                fun_name = string(asm_fun);
            }
            
            expected_next_character(';');
            
            bool result_type_static = result_type->mStatic;
            result_type->mStatic = false;
            
            var fun = new sFun(string(fun_name), result_type, param_types
                                , param_names
                                , param_default_parametors
                                , true@external, var_args, null@block
                                , false@static_, header_buf.to_string(), string(info->sname), info);
            
            var fun2 = info.funcs[string(fun_name)]??;
            if(fun2 == null || fun2.mExternal) {
    
                info.funcs.insert(clone fun_name, fun);
            }
            
            char* source_tail = info.p;
            
            buffer*% header = new buffer();
            header.append(source_head, source_tail - source_head);
            
            if(!result_type_static) {
                if(!info->no_output_come_code) {
                    add_come_code_at_come_header(info, "%s", header.to_string());
                }
            }
            
            return new sFunNode(fun, info) implements sNode;
        }
    }
    else {
        err_msg(info, "invalid character(2)(%c)\n", *info->p);
        exit(2);
    }
    
    info.constructor_ = false;
    
    return (sNode*%)null;
}

sFun*,string create_finalizer_automatically(sType* type, char* fun_name, sInfo* info)
{
    string last_code = info.module.mLastCode;
    info.module.mLastCode = null;
    string last_code2 = info.module.mLastCode2;
    info.module.mLastCode2 = null;
    string last_code3 = info.module.mLastCode3;
    bool comma_instead_of_semicolon = info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon = false;
    
    info.module.mLastCode3 = null;
    
    sClass* current_stack_frame_struct = info->current_stack_frame_struct;
    info->current_stack_frame_struct = null;
    
    sFun* finalizer = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    string user_real_fun_name = create_method_name(type, false@no_pointer_name, "user_finalize", info);
    sFun* user_finalizer = info->funcs[user_real_fun_name]??
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && klass->mStruct || type->mAllocaValue) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(user_finalizer) {
            char source2[1024];
            snprintf(source2, 1024, "if(self != ((void*)0)) { %s(self); }\n", user_real_fun_name);
            
            source.append_str(source2);
        }
        
        klass = info.classes[klass->mName]??;
        foreach(it, klass->mFields) {
            var name, field_type = it;
            
            if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
            {
                err_msg(info, "Define recusively the finalizer. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                exit(2);
            }
            
            if(field_type->mHeap) {
                char source2[1024];
                snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n", name, name, name,name);
                
                source.append_str(source2);
            }
            else if(field_type->mChannel) {
                char source2[1024];
                snprintf(source2, 1024, "if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }", name, name);
                source.append_str(source2);
                
                snprintf(source2, 1024, "if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }", name, name);
                
                source.append_str(source2);
            }
        }
        
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        info.p = source.buf;
        info.head = source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 0;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType("void");
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        if(self_type->mPointerNum == 0) {
            self_type->mPointerNum = 1;
        }
        if(self_type->mPointerNum > 1) {
            self_type->mPointerNum = 1;
        }
        var param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , string("")
                        , info);
        
        var fun2 = info.funcs[string(fun_name)]??;
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone name, fun);
        }
        
        finalizer = fun;
        
        sNode*% node = new sFunNode(fun, info) implements sNode;
        
        if(!node_compile(node)) {
            printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
        info.sname = sname;
    }
    
    info->current_stack_frame_struct = current_stack_frame_struct;
    
    info.module.mLastCode = last_code;
    info.module.mLastCode2 = last_code2;
    info.module.mLastCode3 = last_code3;
    info->comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return (finalizer, real_fun_name);
}

sFun*,string create_force_finalizer_automatically(sType* type, char* fun_name, sInfo* info)
{
    string last_code = info.module.mLastCode;
    info.module.mLastCode = null;
    string last_code2 = info.module.mLastCode2;
    info.module.mLastCode2 = null;
    string last_code3 = info.module.mLastCode3;
    bool comma_instead_of_semicolon = info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon = false;
    
    info.module.mLastCode3 = null;
    
    sClass* current_stack_frame_struct = info->current_stack_frame_struct;
    info->current_stack_frame_struct = null;
    
    sFun* finalizer = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && klass->mStruct) {
        var source = new buffer();
        
        source.append_char('{');
        
        klass = info.classes[klass->mName]??;
        foreach(it, klass->mFields) {
            var name, field_type = it;
            
            if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
            {
                err_msg(info, "Define recusively the finalizer. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                exit(2);
            }
            
            if(field_type->mHeap) {
                char source2[1024];
                snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n", name, name, name,name);
                
                source.append_str(source2);
            }
        }
        
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        info.p = source.buf;
        info.head = source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 0;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType("void");
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        if(self_type->mPointerNum > 1) {
            self_type->mPointerNum = 1;
        }
        var param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , string("")
                        , info);
        
        var fun2 = info.funcs[string(fun_name)]??;
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone name, fun);
        }
        
        finalizer = fun;
        
        sNode*% node = new sFunNode(fun, info) implements sNode;
        
        if(!node_compile(node)) {
            printf("%s %d: compiling is failed(X)\n", info->sname, info->sline);
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
        info.sname = sname;
    }
    
    info->current_stack_frame_struct = current_stack_frame_struct;
    
    info.module.mLastCode = last_code;
    info.module.mLastCode2 = last_code2;
    info.module.mLastCode3 = last_code3;
    info->comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return (finalizer, real_fun_name);
}

sFun*,string create_equals_automatically(sType* type, char* fun_name, sInfo* info)
{
    string last_code = info.module.mLastCode;
    info.module.mLastCode = null;
    string last_code2 = info.module.mLastCode2;
    info.module.mLastCode2 = null;
    string last_code3 = info.module.mLastCode3;
    info.module.mLastCode3 = null;
    bool comma_instead_of_semicolon = info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon = false;
    
    sClass* current_stack_frame_struct = info->current_stack_frame_struct;
    info->current_stack_frame_struct = null;
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return left.%s.equals(right.%s);\n", name, name);
            source.append_str(source2);
        }
        else {
            klass = info.classes[klass->mName]??;
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the equals. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                char source2[1024];
                snprintf(source2, 1024, "if(!left.%s.equals(right.%s)) { return false; }\n", name, name, name);
                
                source.append_str(source2);
            }
        }
        
        source.append_str("return true;");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        info.p = source.buf;
        info.head = source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 0;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType("bool");
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        var param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        param_default_parametors.push_back(null);
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , string("")
                        , info);
        
        var fun2 = info.funcs[string(fun_name)]??;
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone name, fun);
        }
        
        equaler = fun;
        
        sNode*% node = new sFunNode(fun, info) implements sNode;
        
        if(!node_compile(node)) {
            err_msg(info, "compiling error");
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
        info.sname = sname;
    }
    
    info->current_stack_frame_struct = current_stack_frame_struct;
    
    info.module.mLastCode = last_code;
    info.module.mLastCode2 = last_code2;
    info.module.mLastCode3 = last_code3;
    info->comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return (equaler, real_fun_name);
}

sFun*,string create_operator_not_equals_automatically(sType* type, char* fun_name, sInfo* info)
{
    string last_code = info.module.mLastCode;
    info.module.mLastCode = null;
    string last_code2 = info.module.mLastCode2;
    info.module.mLastCode2 = null;
    string last_code3 = info.module.mLastCode3;
    info.module.mLastCode3 = null;
    bool comma_instead_of_semicolon = info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon = false;
    
    sClass* current_stack_frame_struct = info->current_stack_frame_struct;
    info->current_stack_frame_struct = null;
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return left.%s !== right.%s;\n", name, name);
            source.append_str(source2);
        }
        else {
            char source2[1024];
            snprintf(source2, 1024, "return !(");
            
            source.append_str(source2);
            
            snprintf(source2, 1024, "( ");
            source.append_str(source2);
            
            int i = 0;
            klass = info.classes[klass->mName]??;
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the equals. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                char source2[1024];
                snprintf(source2, 1024, "(left.%s === right.%s)", name, name, name);
                source.append_str(source2);
                
                if(i == klass->mFields.length()-1) {
                    char source2[1024];
                    snprintf(source2, 1024, "));");
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, " && ");
                    source.append_str(source2);
                }
                
                i++;
            }
        }
        
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        info.p = source.buf;
        info.head = source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 0;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType("bool");
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        var param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        param_default_parametors.push_back(null);
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , string("")
                        , info);
        
        var fun2 = info.funcs[string(fun_name)]??;
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone name, fun);
        }
        
        equaler = fun;
        
        sNode*% node = new sFunNode(fun, info) implements sNode;
        
        if(!node_compile(node)) {
            err_msg(info, "compiling error");
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
        info.sname = sname;
    }
    
    info->current_stack_frame_struct = current_stack_frame_struct;
    
    info.module.mLastCode = last_code;
    info.module.mLastCode2 = last_code2;
    info.module.mLastCode3 = last_code3;
    info->comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return (equaler, real_fun_name);
}

sFun*,string create_not_equals_automatically(sType* type, char* fun_name, sInfo* info)
{
    string last_code = info.module.mLastCode;
    info.module.mLastCode = null;
    string last_code2 = info.module.mLastCode2;
    info.module.mLastCode2 = null;
    string last_code3 = info.module.mLastCode3;
    info.module.mLastCode3 = null;
    bool comma_instead_of_semicolon = info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon = false;
    
    sClass* current_stack_frame_struct = info->current_stack_frame_struct;
    info->current_stack_frame_struct = null;
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return !left.%s.equals(right.%s);\n", name, name);
            source.append_str(source2);
        }
        else {
            char source2[1024];
            snprintf(source2, 1024, "return !(");
            
            source.append_str(source2);
            
            int i = 0;
            klass = info.classes[klass->mName]??;
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the equals. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                char source2[1024];
                snprintf(source2, 1024, "left.%s.equals(right.%s)", name, name);
                source.append_str(source2);
                
                if(i == klass->mFields.length()-1) {
                    char source2[1024];
                    snprintf(source2, 1024, ");");
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, " && ");
                    source.append_str(source2);
                }
                
                i++;
            }
        }
        
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        info.p = source.buf;
        info.head = source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 0;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType("bool");
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        var param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        param_default_parametors.push_back(null);
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , string("")
                        , info);
        
        var fun2 = info.funcs[string(fun_name)]??;
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone name, fun);
        }
        
        equaler = fun;
        
        sNode*% node = new sFunNode(fun, info) implements sNode;
        
        if(!node_compile(node)) {
            err_msg(info, "compiling error");
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
        info.sname = sname;
    }
    
    info->current_stack_frame_struct = current_stack_frame_struct;
    
    info.module.mLastCode = last_code;
    info.module.mLastCode2 = last_code2;
    info.module.mLastCode3 = last_code3;
    info->comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return (equaler, real_fun_name);
}

sFun*,string create_operator_equals_automatically(sType* type, char* fun_name, sInfo* info)
{
    string last_code = info.module.mLastCode;
    info.module.mLastCode = null;
    string last_code2 = info.module.mLastCode2;
    info.module.mLastCode2 = null;
    string last_code3 = info.module.mLastCode3;
    info.module.mLastCode3 = null;
    bool comma_instead_of_semicolon = info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon = false;
    
    sClass* current_stack_frame_struct = info->current_stack_frame_struct;
    info->current_stack_frame_struct = null;
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return left.%s === right.%s;\n", name, name);
            source.append_str(source2);
        }
        else {
            char source2[1024];
            
            klass = info.classes[klass->mName]??;
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the equals. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                char source2[1024];
                snprintf(source2, 1024, "if(left.%s !== right.%s) { return false; }\n", name, name, name);
                
                source.append_str(source2);
            }
        }
        
        source.append_str("return true;\n");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        info.p = source.buf;
        info.head = source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 0;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType("bool");
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        var param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        param_default_parametors.push_back(null);
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , string("")
                        , info);
        
        var fun2 = info.funcs[string(fun_name)]??;
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone name, fun);
        }
        
        equaler = fun;
        
        sNode*% node = new sFunNode(fun, info) implements sNode;
        
        if(!node_compile(node)) {
            err_msg(info, "compiling error(X)");
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
        info.sname = sname;
    }
    
    info->current_stack_frame_struct = current_stack_frame_struct;
    
    info.module.mLastCode = last_code;
    info.module.mLastCode2 = last_code2;
    info.module.mLastCode3 = last_code3;
    info->comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return (equaler, real_fun_name);
}

sFun*,string create_cloner_automatically(sType* type, char* fun_name, sInfo* info)
{
    string last_code = info.module.mLastCode;
    info.module.mLastCode = null;
    string last_code2 = info.module.mLastCode2;
    info.module.mLastCode2 = null;
    string last_code3 = info.module.mLastCode3;
    info.module.mLastCode3 = null;
    bool comma_instead_of_semicolon = info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon = false;
    
    sClass* current_stack_frame_struct = info->current_stack_frame_struct;
    info->current_stack_frame_struct = null;
    sFun* cloner = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_str("{\n");
        source.append_str("if(self == (void*)0) { return (void*)0; }\n");
        source.append_format("var result = new %s;\n", make_type_name_string(type, no_pointer:true));
        
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            
            source.append_str(source2);
            
            klass = info.classes[klass->mName]??;
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the cloner. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                if(name === "_protocol_obj") {
                }
                else if(field_type->mArrayNum.length() > 0) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n", name, name, name);
                    
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { result.%s = self.%s; }\n", name, name);
                    
                    source.append_str(source2);
                }
            }
        }
        else {
            klass = info.classes[klass->mName]??;
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the cloner. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                if(field_type->mHeap) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n", name, name, name);
                    
                    source.append_str(source2);
                }
                else if(field_type->mArrayNum.length() > 0) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n", name, name, name);
                    
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { result.%s = self.%s; }\n", name, name);
                    
                    source.append_str(source2);
                }
            }
        }
        
        source.append_format("return result;");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        buffer*% source3 = info.source;
        char* head = info.head;
        
        info.source = source;
        info.p = info.source.buf;
        info.head = info.source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 1;
        
        sBlock*% block = parse_block();
        
        var result_type = clone type;
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        var param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , string("")
                        , info);
                        
        fun->mCloner = true;
        
        var fun2 = info.funcs[string(fun_name)]??;
        if(fun2 == null || fun2.mExternal) {
            info.funcs.insert(clone name, fun);
        }
        
        cloner = fun;
        
        sNode*% node = new sFunNode(fun, info) implements sNode;
        
        if(!node_compile(node)) {
            err_msg(info, "compiling error(Y)");
            exit(2);
        }
        
        info.sname = sname;
        info.sline = sline;
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    info->current_stack_frame_struct = current_stack_frame_struct;
    
    info.module.mLastCode = last_code;
    info.module.mLastCode2 = last_code2;
    info.module.mLastCode3 = last_code3;
    info->comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return (cloner, real_fun_name);
}

sFun*,string create_to_string_automatically(sType* type, char* fun_name, sInfo* info)
{
    string last_code = info.module.mLastCode;
    info.module.mLastCode = null;
    string last_code2 = info.module.mLastCode2;
    info.module.mLastCode2 = null;
    string last_code3 = info.module.mLastCode3;
    info.module.mLastCode3 = null;
    bool comma_instead_of_semicolon = info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon = false;
    
    sClass* current_stack_frame_struct = info->current_stack_frame_struct;
    info->current_stack_frame_struct = null;
    sFun* cloner = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_str("{\n");
        source.append_str("var result = new buffer();\n");
        
        source.append_format("result.append_str(\"%s {\");\n", klass->mName);
        
        int i = 0;
        klass = info.classes[klass->mName]??;
        foreach(it, klass->mFields) {
            var name, field_type = it;
            
            if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
            {
                err_msg(info, "Define recusively the cloner. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                exit(2);
            }
            
            if(i == klass->mFields.length() -1) {
                char source2[1024];
                
                snprintf(source2, 1024, "result.append_str(\"%s:\");\n", name);
                
                source.append_str(source2);
                
                snprintf(source2, 1024, "result.append_str(self.%s.to_string());\n", name);
                
                source.append_str(source2);
            }
            else {
                char source2[1024];
                
                snprintf(source2, 1024, "result.append_str(\"%s:\");\n", name);
                
                source.append_str(source2);
                
                snprintf(source2, 1024, "result.append_str(self.%s.to_string());\n", name);
                
                source.append_str(source2);
                
                snprintf(source2, 1024, "result.append_str(\",\");\n");
                
                source.append_str(source2);
            }
            
            i++;
        }
        source.append_str("result.append_str(\"}\");\n");
        
        source.append_format("return result.to_string();\n");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        string sname = info.sname;
        buffer*% source3 = info.source;
        char* head = info.head;
        
        info.source = source;
        info.p = info.source.buf;
        info.head = info.source.buf;
        
        info.sname = string(real_fun_name);
        info.sline = 1;
        
        sBlock*% block = parse_block();
        
        var result_type = new sType("char*");
        result_type->mHeap = true;
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        var param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();
        param_default_parametors.push_back(null);
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , string("")
                        , info);
                        
        fun->mCloner = true;
        
        var fun2 = info.funcs[string(fun_name)]??;
        if(fun2 == null || fun2.mExternal) {
            info.funcs.insert(clone name, fun);
        }
        
        cloner = fun;
        
        sNode*% node = new sFunNode(fun, info) implements sNode;
        
        if(!node_compile(node)) {
            err_msg(info, "compiling error(Y)");
            exit(2);
        }
        
        info.sname = sname;
        info.sline = sline;
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    info->current_stack_frame_struct = current_stack_frame_struct;
    
    info.module.mLastCode = last_code;
    info.module.mLastCode2 = last_code2;
    info.module.mLastCode3 = last_code3;
    info->comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return (cloner, real_fun_name);
}

