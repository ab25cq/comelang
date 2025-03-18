#include "common.h"

class sStoreNode extends sNodeBase
{
    new(string name, list<string>*% multiple_assign, list<tup: sType*%, string, sNode*%>*% multiple_declare, sType*% type, bool alloc, sNode*% right_value, sInfo* info, string attribute=s"")
    {
        self.super();
        
        string self.name = string(name);
        bool self.alloc = alloc;
        sType*% self.type;
        self.type = dupe type;
        sNode*% self.right_value = right_value;
        list<string>*% self.multiple_assign;
        self.multiple_assign = dupe multiple_assign;
        list<tup: sType*%,string,sNode*%>*% self.multiple_declare;
        self.multiple_declare = dupe multiple_declare;
        string self.attribute = attribute;
    }
    
    string kind()
    {
        return string("sStoreNode");
    }
    
    bool compile(sInfo* info)
    {
        if(self.multiple_declare) {
            sVar* var_ = info.lv_table.mVars[string(self.name)]??;
            if(var_) {
                if(var_->mType->mHeap) {
                    free_object(clone var_->mType, var_->mCValueName, false@no_decrement, false@no_free, info);
                }
                
                info.lv_table.mVars.remove(string(self.name));
            }
            
            if(self.type == null) {
                err_msg(info, "Require concrete variable type(%s)", self.name).rescue {
                    return true;
                }
            }
            
            var type = solve_generics(self.type, info->generics_type, info);
            
            foreach(it, self.multiple_declare) {
                var type, var_name, right_value = it;
                var_ = info.lv_table.mVars[string(var_name)]??;
                if(var_) {
                    if(var_->mType->mHeap) {
                        free_object(clone var_->mType, var_->mCValueName, false@no_decrement, false@no_free, info);
                    }
                    
                    info.lv_table.mVars.remove(string(var_name));
                }
                add_variable_to_table(var_name, clone type, info, false@function_param);
                
                var_ = get_variable_from_table(info.lv_table, var_name);
                
                if(var_ == null) {
                    err_msg(info, "var not found(%s)(ZY) at definition of variable", it).rescue {
                        return true;
                    }
                }
                
                sType*% left_type = clone var_->mType;
                
                if(right_value) {
                    node_compile(right_value).elif {
                        return false;
                    }
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    
                    add_come_code(info, "%s=%s;\n", make_define_var(left_type, var_->mCValueName), come_value.c_value);
                }
                else {
                    add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(left_type, no_static:true));
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                }
            }
        }
        else if(self.multiple_assign) {
            node_compile(self.right_value).elif {
                return false;
            }
            
            CVALUE*% right_value = get_value_from_stack(-1, info);
            sType* right_type = right_value.type;
            
            
            if(right_type->mNoSolvedGenericsType) {
                right_type = right_type->mNoSolvedGenericsType;
            }
            
            int i = 0;
            foreach(it, self.multiple_assign) {
                if(i < right_type.mGenericsTypes.length()) {
                    sVar*% var_ = info.lv_table.mVars[string(it)]??;
                    if(var_) {
                        if(var_->mType->mHeap) {
                            free_object(clone var_->mType, var_->mCValueName, false@no_decrement, false@no_free, info);
                        }
                        
                        info.lv_table.mVars.remove(string(it));
                    }
            
                    sType*% right_type2 = right_type.mGenericsTypes[i];
                    add_variable_to_table(it, clone right_type2, info, false@function_param);
                }
                
                i++;
            }
            
            static int num_multiple_var = 0;
            string multiple_var_name = xsprintf("multiple_assign_var%d", ++num_multiple_var);
            add_come_code_at_function_head(info, "%s = (void*)0;\n", make_define_var(right_value.type, multiple_var_name));
            
            if(info->comma_instead_of_semicolon) {
                add_come_code(info, "%s=%s,\n", multiple_var_name, right_value.c_value);
            }
            else {
                add_come_code(info, "%s=%s;\n", multiple_var_name, right_value.c_value);
            }
            
            right_value.c_value = clone multiple_var_name;
            
            i = 0;
            foreach(it, self.multiple_assign) {
                if(i < right_type.mGenericsTypes.length()) {
                    sType*% right_type2 = clone right_type.mGenericsTypes[i];
                    
                    sVar* var_ = get_variable_from_table(info.lv_table, it);
                    
                    sType*% var_type = clone var_->mType;
                    var_type->mStatic = false;
                    
                    sType*% left_type = clone var_->mType;
                    
                    CVALUE*% right_value2 = new CVALUE();
                    
                    right_value2.c_value = xsprintf("%s->v%d", right_value.c_value, i+1);
                    right_value2.type = clone right_type2;
                    right_value2.var = null;
                    
                    CVALUE*% come_value = new CVALUE();
                    
                    check_assign_type(s"\{self.name} is assining to}", left_type, right_type2, come_value).rescue {
                        return true;
                    }
                    
                    if(right_type2->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type2->mPointerNum > 0)
                    {
                        std_move(left_type, right_type2, right_value2);
                        come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value2.c_value);
                    }
                    else {
                        come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value2.c_value);
                    }
                    come_value.type = clone left_type;
                    come_value.var = var_;
                    
                    add_come_code_at_function_head(info, "%s=0;\n", make_define_var(left_type, var_->mCValueName));
                    if(info->comma_instead_of_semicolon) {
                        add_come_code(info, "%s,\n", come_value.c_value);
                    }
                    else {
                        add_come_code(info, "%s;\n", come_value.c_value);
                    }
                }
                
                i++;
            }
        }
        else if(self.right_value == null) { // assert(self.alloc == true)
            sVar* var_ = info.lv_table.mVars[string(self.name)]??;
            if(var_) {
                if(var_->mType->mHeap) {
                    free_object(clone var_->mType, var_->mCValueName, false@no_decrement, false@no_free, info);
                }
                
                info.lv_table.mVars.remove(string(self.name));
            }
            
            if(self.type == null) {
                err_msg(info, "Require concrete variable type(%s)", self.name).rescue {
                    return true;
                }
            }
            
            var type = solve_generics(self.type, info->generics_type, info);
            
            add_variable_to_table(self.name, clone type, info, false@function_param);
        
            var_ = get_variable_from_table(info.lv_table, self.name);
            
            if(var_ == null) {
                var_ = get_variable_from_table(info.gv_table, self.name);
                
                if(var_ == null) {
                    err_msg(info, "var not found(%s)(Y) at definition of variable", self.name).rescue {
                        return true;
                    }
                }
            }
            
            sType*% left_type = clone var_->mType;
            
            if(left_type->mChannel) {
                add_come_code_at_function_head2(info, "memset(%s, 0, sizeof(int)*2);\n", var_->mCValueName);
            }
            else if(left_type->mArrayNum.length() > 0) {
                /*
                if(left_type->mAttribute) {
                    add_come_code(info, "%s %s;\n", make_define_var(left_type, var_->mCValueName), left_type->mAttribute);
                }
                else {
                */
                    add_come_code(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                //}
                
                add_come_code(info, "memset(&%s, 0, sizeof(%s)", var_->mCValueName, make_type_name_string(left_type, no_static:true));
                
                foreach(it, left_type->mArrayNum) {
                    node_compile(it).elif {
                        err_msg(info, "invalid array num");
                        exit(1);
                    }
                    
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    add_come_code(info, "*(%s)", come_value.c_value);
                }
                add_come_code(info, ");\n");
            }
            else {
                /*
                if(left_type->mAttribute) {
                    add_come_code_at_function_head(info, "%s %s;\n", make_define_var(left_type, var_->mCValueName), left_type->mAttribute);
                }
                else {
                */
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                //}
                
                if(left_type->mPointerNum > 0) {
                    add_come_code_at_function_head2(info, "%s = (void*)0;\n", var_->mCValueName);
                }
                else {
                    add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(left_type, no_static:true));
                }
            }
            
            if(!info.m5stack_cpp) {
                CVALUE*% come_value = new CVALUE();
                
                come_value.c_value = xsprintf("%s", var_->mCValueName);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
            }
            
            if(!left_type->mClass->mNumber && left_type->mPointerNum == 0) {
                var_->mType->mAllocaValue = true;
                if(var_->mType->mNoSolvedGenericsType) {
                    var_->mType->mNoSolvedGenericsType->mAllocaValue = true;
                }
            }
        }
        else if(self.alloc) { // right_value != null
            sVar* var_ = info.lv_table.mVars[string(self.name)]??;
            if(var_) {
                if(var_->mType->mHeap) {
                    free_object(clone var_->mType, var_->mCValueName, false@no_decrement, false@no_free, info);
                }
                
                info.lv_table.mVars.remove(string(self.name));
            }
            
            if(self.type == null) {
            }
            else {
                var type = solve_generics(self.type, info->generics_type, info);
                
                add_variable_to_table(self.name, clone type, info, false@function_param);
            }
            
            node_compile(self.right_value).elif {
                return false;
            }
            
            bool array_initializer = self.right_value.kind() === "sArrayInitializer";
            bool struct_initializer = self.right_value.kind() === "sStructInitializer";
            bool new_channel = self.right_value.kind() === "sNewChannel";
            
            CVALUE*% right_value = get_value_from_stack(-1, info);
            sType* right_type = right_value.type;
            
            if(self.type == null) {
                add_variable_to_table(self.name, clone right_type, info, false@function_param);
            }
            else {
            }
            
            var_ = get_variable_from_table(info.lv_table, self.name);
            
            sType*% var_type = clone var_->mType;
            var_type->mStatic = false;
            
            if(!array_initializer && !struct_initializer && !var_->mType->mStatic && !var_type->mConstant && var_type->mArrayNum.length() == 0) {
                if(var_type->mClass->mNumber) {
                }
                else if((var_type->mClass->mStruct || var_type->mClass->mUnion || var_type->mClass->mEnum) || var_type->mPointerNum > 0) {
                }
                else {
                    add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(var_type, no_static:true));
                }
            }
            
            sType*% left_type = clone var_->mType;
            
            if(array_initializer) {
                sVar* var_ = info.lv_table.mVars[string(self.name)]??;
                /*
                if(var_->mType->mAttribute) {
                    add_come_code(info, "%s %s=%s;\n", make_define_var(var_->mType, var_->mCValueName), var_->mType->mAttribute, right_value.c_value);
                }
                else {
                */
                    add_come_code(info, "%s=%s;\n", make_define_var(var_->mType, var_->mCValueName), right_value.c_value);
                //}
                
                CVALUE*% come_value = new CVALUE();
                come_value.c_value = string("");
                info.stack.push_back(come_value);
                
                transpiler_clear_last_code(info);
            }
            else if(struct_initializer) {
                sVar* var_ = info.lv_table.mVars[string(self.name)]??;
                /*
                if(var_->mType->mAttribute) {
                    add_come_code(info, "%s %s=%s;\n", make_define_var(var_->mType, var_->mCValueName), var_->mType->mAttribute, right_value.c_value);
                }
                else {
                */
                    add_come_code(info, "%s=%s;\n", make_define_var(var_->mType, var_->mCValueName), right_value.c_value);
                //}
                
                CVALUE*% come_value = new CVALUE();
                come_value.c_value = string("");
                info.stack.push_back(come_value);
                
                transpiler_clear_last_code(info);
            }
            else if(var_->mType->mStatic || var_->mType->mConstant) {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value).rescue {
                    return true;
                }
                
                /*
                if(left_type->mAttribute) {
                    add_come_code(info, "%s %s=%s;\n", make_define_var(left_type, var_->mCValueName), left_type->mAttribute, right_value.c_value);
                }
                else {
                */
                    add_come_code(info, "%s=%s;\n", make_define_var(left_type, var_->mCValueName), right_value.c_value);
                //}
                
                CVALUE*% come_value = new CVALUE();
                come_value.c_value = string("");
                info.stack.push_back(come_value);
                
                transpiler_clear_last_code(info);
            }
            else if(right_type->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
            {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value).rescue {
                    return true;
                }
                
                std_move(left_type, right_type, right_value);
                
                /*
                if(left_type->mAttribute) {
                    add_come_code_at_function_head(info, "%s %s;\n", make_define_var(left_type, var_->mCValueName), left_type->mAttribute);
                }
                else {
                */
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                //}
                
                CVALUE*% come_value = new CVALUE();
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s", come_value.c_value);
            }
            else if(left_type->mChannel && new_channel) {
                add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                
                add_come_code_at_function_head2(info, "memset(%s, 0, sizeof(int)*2);\n", var_->mCValueName);
                
                CVALUE*% come_value = new CVALUE();
                come_value.c_value = xsprintf("(pipe(%s), (void*)0)", var_->mCValueName);
                come_value.type = new sType(s"void");
                come_value.type.mPointerNum = 1;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s", come_value.c_value);
            }
            else if(left_type->mPointerNum > 0 && left_type->mHeap && right_type->mClass->mName === "void" && right_type->mPointerNum > 0)
            {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value).rescue {
                    return true;
                }
                
                add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                
                CVALUE*% come_value = new CVALUE();
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s", come_value.c_value);
            }
            else {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value).rescue {
                    return true;
                }
                
                if(right_type->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
                {
                    std_move(left_type, right_type, right_value);
                }
                
                if(left_type->mHeap && !right_value.type->mHeap) {
                    err_msg(info, "require right value as heap object(%s)", self.name).rescue {
                        return true;
                    }
                }
                
                /*
                if(left_type->mAttribute) {
                    add_come_code_at_function_head(info, "%s %s;\n", make_define_var(left_type, var_->mCValueName), left_type->mAttribute);
                }
                else {
                */
                    add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName));
                //}
                
                CVALUE*% come_value = new CVALUE();
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s", come_value.c_value);
            }
        }
        else {
            node_compile(self.right_value).elif {
                return false;
            }
            
            bool new_channel = self.right_value.kind() === "sNewChannel";
            
            CVALUE*% right_value = get_value_from_stack(-1, info);
            sType* right_type = right_value.type;
            
            sClass* current_stack_frame_struct = info->current_stack_frame_struct;
            
            if(current_stack_frame_struct && info.lv_table.mVars[string(self.name)]?? == null) {
                sVar* parent_var = get_variable_from_table(info.lv_table->mParent, self.name);
                
                if(parent_var != null) {
                    if(parent_var->mFunName !== info.come_fun.mName) {
                        sType* left_type = parent_var->mType;
                        
                        if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mHeap && left_type->mHeap) {
                            check_assign_type(s"\{self.name} is assigning to", left_type, right_type, right_value).rescue {
                                return true;
                            }
                            
                            string c_value = xsprintf("*(parent->%s)", parent_var->mCValueName);
                            
                            decrement_ref_count_object(parent_var->mType, c_value, info);
                            std_move(left_type, right_type, right_value);
                            
                            CVALUE*% come_value = new CVALUE();
                        
                            if(parent_var->mType->mOriginIsArray) {
                                come_value.c_value = xsprintf("(parent->%s)=%s", parent_var->mCValueName, right_value.c_value);
                            }
                            else {
                                come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                            }
                            come_value.type = clone left_type;
                            come_value.var = null;
                            
                            add_come_last_code(info, "%s", come_value.c_value);
                            
                            info.stack.push_back(come_value);
                            
                            return true;
                        }
                        else if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mClass->mName === "void" && left_type->mHeap) 
                        {
                            check_assign_type(s"\{self.name} is assigning to", left_type, right_type, right_value).rescue {
                                return true;
                            }
                            
                            string c_value = xsprintf("*(parent->%s)", parent_var->mCValueName);
                            decrement_ref_count_object(parent_var->mType, c_value, info);
                            
                            CVALUE*% come_value = new CVALUE();
                            
                            if(parent_var->mType->mOriginIsArray) {
                                come_value.c_value = xsprintf("(parent->%s)=%s", parent_var->mCValueName, right_value.c_value);
                            }
                            else {
                                come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                            }
                            come_value.type = clone left_type;
                            come_value.var = null;
                            
                            add_come_last_code(info, "%s", come_value.c_value);
                            
                            info.stack.push_back(come_value);
                            
                            return true;
                        }
                        else {
                            check_assign_type(s"\{self.name} is assigning to", left_type, right_type, right_value).rescue {
                                return true;
                            }
                            
                            if(left_type->mHeap && !right_value.type->mHeap) {
                                err_msg(info, "require right value as heap object(%s)", self.name).rescue {
                                    return true;
                                }
                            }
                            
                            CVALUE*% come_value = new CVALUE();
                            
                            if(parent_var->mType->mOriginIsArray) {
                                come_value.c_value = xsprintf("(parent->%s)=%s", parent_var->mCValueName, right_value.c_value);
                            }
                            else {
                                come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                            }
                            come_value.type = clone left_type;
                            come_value.var = null;
                            
                            add_come_last_code(info, "%s", come_value.c_value);
                            
                            info.stack.push_back(come_value);
                            
                            return true;
                        }
                    }
                }
            }
            
            sVar* var_ = get_variable_from_table(info.lv_table, self.name);
            
            if(var_ == null) {
                var_ = get_variable_from_table(info.gv_table, self.name);
                
                if(var_ == null) {
                    err_msg(info, "var not found(%s)(X) at storing variable", self.name).rescue {
                        return true;
                    }
                }
            }
            
            if(var_->mType == null) {
                var_->mType = clone right_type;
            }
            
            sType*% left_type = clone var_->mType;
            
            if((var_->mType->mStatic || var_->mType->mConstant) && !var_->mGlobal) {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value).rescue {
                    return true;
                }
                
                CVALUE*% come_value = new CVALUE();
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s", come_value.c_value);
            }
            else if(right_type->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
            {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value).rescue {
                    return true;
                }
                
                decrement_ref_count_object(left_type, var_->mCValueName, info);
                std_move(left_type, right_type, right_value);
                
                CVALUE*% come_value = new CVALUE();
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s", come_value.c_value);
            }
            else if(left_type->mPointerNum > 0 && left_type->mHeap && right_type->mClass->mName === "void" && right_type->mPointerNum > 0)
            {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value).rescue {
                    return true;
                }
                
                decrement_ref_count_object(left_type, var_->mCValueName, info);
                
                CVALUE*% come_value = new CVALUE();
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s", come_value.c_value);
            }
            else if(left_type->mChannel && new_channel) {
                CVALUE*% come_value = new CVALUE();
                come_value.c_value = xsprintf("(pipe(%s), (void*)0)", var_->mCValueName);
                come_value.type = new sType(s"void");
                come_value.type.mPointerNum = 1;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s", come_value.c_value);
            }
            else {
                check_assign_type(s"\{self.name} is assining to", left_type, right_type, right_value).rescue {
                    return true;
                }
                
                if(left_type->mHeap && !right_value.type->mHeap) {
                    err_msg(info, "require right value as heap object(%s)", self.name).rescue {
                        return true;
                    }
                }
                
                CVALUE*% come_value = new CVALUE();
                
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s", come_value.c_value);
            }
        }
        
        return true;
    }
};

class sNewChannel extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sNewChannel");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% node = create_null_node(info);
        
        node_compile(node).elif {
            return false;
        }
        
        return true;
    }
    
};

class sWriteChannelNode extends sNodeBase
{
    new(sNode*% exp, sNode*% right_value, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = exp;
        sNode*% self.right_value = right_value;
    }
    
    string kind()
    {
        return string("sWriteChannelNode");
    }
    
    bool compile(sInfo* info)
    {
        node_compile(self.exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        node_compile(self.right_value).elif {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        sType* right_type = right_value.type;
        
        sType*% left_type = clone come_value.type;
        
        sType*% channel_type = left_type->mChannelType;
        
        static int var_num = 0;
        var_num++;
        
        if(right_value.type->mHeap) {
            err_msg(info, "channel can't get heap type").rescue {
                return true;
            }
        }
    
        buffer*% buf = new buffer();
        
        buf.append_format("char __channel_buf%d[sizeof(%s)+1];\n", var_num, make_type_name_string(channel_type));
        buf.append_format("%s* __channel_p%d = __channel_buf%d;\n", make_type_name_string(channel_type), var_num, var_num);
        buf.append_format("*__channel_p%d = %s;\n", var_num, right_value.c_value);
        
        add_come_code(info, buf.to_string());
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }", come_value.c_value, var_num, make_type_name_string(channel_type));
        
        come_value2.type = new sType(s"void");
        come_value2.type->mPointerNum = 1;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
    
};

class sReadChannelNode extends sNodeBase
{
    new(sNode*% exp, sInfo* info)
    {
        self.super();
        
        sNode*% self.exp = exp;
    }
    
    string kind()
    {
        return string("sReadChannelNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sType*% var_type = clone come_value.type;
        
        if(!var_type->mChannel) {
            err_msg(info, "require right type is channel").rescue {
                return true;
            }
        }
        
        sType*% channel_type = var_type->mChannelType;
            
        static int var_num = 0;
        var_num++;
            
        add_come_code_at_function_head(info, "char __channel_bufl%d[sizeof(%s)+1];\n", var_num, make_type_name_string(channel_type));
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)", come_value.c_value, var_num, make_type_name_string(channel_type), make_type_name_string(channel_type), var_num);
        come_value2.type = clone channel_type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
    
};

sNode*% store_var(string name, list<string>*% multiple_assign, list<tup: sType*%, string, sNode*%>*% multiple_declare, sType*% type, bool alloc, sNode*% right_value, sInfo* info)
{
    return new sStoreNode(name, multiple_assign, multiple_declare, type, alloc, right_value, info) implements sNode;
}

class sLoadNode extends sNodeBase
{
    new(string name, sInfo* info)
    {
        self.super();
        
        string self.name = string(name);
    }
    
    string kind()
    {
        return string("sLoadNode");
    }
    
    bool terminated() {
        return false;
    }
    
    bool compile(sInfo* info)
    {
        sClass* current_stack_frame_struct = info->current_stack_frame_struct;
        
        if(current_stack_frame_struct && info.lv_table.mVars[string(self.name)]?? == null) {
            sVar* parent_var = get_variable_from_table(info.lv_table->mParent, self.name);
            
            if(parent_var != null) {
                if(parent_var->mFunName !== info.come_fun.mName) {
                    CVALUE*% come_value = new CVALUE();
                    
                    sType* type = parent_var->mType;
                    
                    if(parent_var->mType->mOriginIsArray) {
                        come_value.c_value = xsprintf("(parent->%s)", parent_var->mCValueName);
                    }
                    else {
                        come_value.c_value = xsprintf("(*(parent->%s))", parent_var->mCValueName);
                    }
                    
                    come_value.type = clone type;
                    come_value.var = null;
                    
                    add_come_last_code(info, "%s", come_value.c_value);
                    
                    info.stack.push_back(come_value);
                    
                    return true;
                }
            }
        }
        
        sVar* var_ = get_variable_from_table(info.lv_table, self.name);
        
        if(var_ == null) {
            var_ = get_variable_from_table(info.gv_table, self.name);
            
            if(var_ == null) {
                sFun* fun = info.funcs[string(self.name)]??;
                
                if(fun) {
                    CVALUE*% come_value = new CVALUE();
                    
                    come_value.c_value = xsprintf("%s", fun->mName);
                    come_value.type = fun->mLambdaType;
                    come_value.var = null;
                    
                    info.stack.push_back(come_value);
                    
                    return true;
                }
                else {
                    err_msg(info, "var not found(%s)(Z) at loading variable", self.name).rescue {
                        return true;
                    }
                }
            }
        }
        
        CVALUE*% come_value = new CVALUE();
        come_value.c_value = xsprintf("%s", var_->mCValueName);
        come_value.type = clone var_->mType;
        come_value.var = var_;
        
        info.stack.push_back(come_value);
        
        if(come_value.type->mArrayNum.length() == 1) {
            come_value.type->mOriginalLoadVarType = clone come_value.type;
            
            come_value.type->mArrayNum.reset();
            come_value.type->mPointerNum++;
            come_value.type->mOriginalTypeNamePointerNum = come_value.type->mPointerNum;
        }
        
        return true;
    }
};
        
bool is_inner_calling(sNode* node, sInfo* info)
{
    if(node.kind() === "sLoadNode") {
        sLoadNode* load_node = (sLoadNode*)(node->_protocol_obj);
        if(load_node.name === "self") {
            return true;
        }
    }
    
    return false;
}

sNode*% create_load_var(char* var_name, sInfo* info=info)
{
    return new sLoadNode(string(var_name), info) implements sNode;
}

class sFunLoadNode extends sNodeBase
{
    new(string name, sInfo* info)
    {
        self.super();
        
        string self.name = string(name);
    }
    
    string kind()
    {
        return string("sFunLoadNode");
    }
    
    bool compile(sInfo* info)
    {
        sFun* fun = info.funcs[string(self.name)]??;
        
        if(fun == null) {
            err_msg(info, "fun not found(%s) at loading variable", self.name).rescue {
                return true;
            }
        }
        else {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("%s", fun->mName);
            come_value.type = fun->mLambdaType;
            come_value.var = null;
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};

class sArrayInitializer extends sNodeBase
{
    new(list<tup: sNode*%, sNode*%>*% initializer, sInfo* info)
    {
        self.super();
       
        list<tup: sNode*%, sNode*%>*% self.initializer = clone initializer;
    }
    
    string kind()
    {
        return string("sArrayInitializer");
    }
    
    bool compile(sInfo* info)
    {
        var initializer = self.initializer;
        
        var buf = new buffer();
        buf.append_str("{");
        int i = 0;
        sType*% element_type = null;
        foreach(it, initializer) {
            var index, value = it;
            
            CVALUE*% come_value = null;
            if(index) {
                node_compile(index).elif {
                    return false;
                }
                come_value = get_value_from_stack(-1, info);
            }
            
            node_compile(value).elif {
                return false;
            }
            CVALUE*% come_value2 = get_value_from_stack(-1, info);
            
            element_type = clone come_value2.type;
            
            if(come_value) {
                buf.append_format("[%s] = %s", come_value.c_value, come_value2.c_value);
            }
            else {
                buf.append_str(come_value2.c_value);
            }
            
            i++;
            
            if(i != initializer.length()) {
                buf.append_str(",");
            }
        }
        buf.append_str("}");
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = buf.to_string();
        come_value.type = clone element_type;
        come_value.type->mPointerNum++;
        //come_value.type->mArrayNum.add(create_int_node(i, info));
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

sNode*% parse_array_initializer(sInfo* info=info)
{
    expected_next_character('{');
    
    list<tup: sNode*%,sNode*%>*% initializer = new list<tup: sNode*%,sNode*%>();
    
    if(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf();
        
        sNode*% index = expression();
        
        expected_next_character(']');
        expected_next_character('=');
        
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% exp = expression();
        info->no_comma = no_comma;
        
        initializer.add((index, exp));
    }
    else {
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% exp = expression();
        info->no_comma = no_comma;
        
        initializer.add((null, exp));
    }
    
    while(*info->p == ',') {
        info->p++;
        skip_spaces_and_lf();
        
        parse_sharp();
        
        if(*info->p == '}') {
            break;
        }
        
        if(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% index = expression();
            
            expected_next_character(']');
            expected_next_character('=');
            
            bool no_comma = info->no_comma;
            info->no_comma = true;
            sNode*% exp = expression();
            info->no_comma = no_comma;
            
            initializer.add((index, exp));
        }
        else {
            bool no_comma = info->no_comma;
            info->no_comma = true;
            sNode*% exp = expression();
            info->no_comma = no_comma;
            
            initializer.add((null,exp));
        }
    }
    
    expected_next_character('}');
    
    return new sArrayInitializer(initializer, info) implements sNode;
}

class sStructInitializer extends sNodeBase
{
    new(list<tup: string, sNode*%>*% initializer, sInfo* info)
    {
        self.super();
       
        list<tup: string, sNode*%>*% self.initializer = clone initializer;
    }
    
    string kind()
    {
        return string("sStructInitializer");
    }
    
    bool compile(sInfo* info)
    {
        var initializer = self.initializer;
        
        var buf = new buffer();
        buf.append_str("{");
        int i = 0;
        foreach(it, initializer) {
            var name, value = it;
            
            node_compile(value).elif {
                return false;
            }
            CVALUE*% come_value2 = get_value_from_stack(-1, info);
            
            if(name) {
                buf.append_format(".%s = %s", name, come_value2.c_value);
            }
            else {
                buf.append_format("%s", come_value2.c_value);
            }
            
            i++;
            
            if(i != initializer.length()) {
                buf.append_str(",");
            }
        }
        buf.append_str("}");
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = buf.to_string();
        come_value.type = new sType(s"void*");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

sNode*% parse_struct_initializer(sInfo* info=info)
{
    expected_next_character('{');
    
    list<tup: string,sNode*%>*% initializer = new list<tup:string,sNode*%>();
    
    if(*info->p == '.') {
        info->p++;
        skip_spaces_and_lf();
        
        string name = parse_word();
        
        expected_next_character('=');
        
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% exp = expression();
        info->no_comma = no_comma;
        
        initializer.add((name, exp));
    }
    else {
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% exp = expression();
        info->no_comma = no_comma;
        
        initializer.add((null, exp));
    }
    
    while(*info->p == ',') {
        info->p++;
        skip_spaces_and_lf();
        
        parse_sharp();
        
        if(*info->p == '}') {
            break;
        }
        
        if(*info->p == '.') {
            info->p++;
            skip_spaces_and_lf();
            
            string name = parse_word();
            
            expected_next_character('=');
            
            bool no_comma = info->no_comma;
            info->no_comma = true;
            sNode*% exp = expression();
            info->no_comma = no_comma;
            
            initializer.add((name, exp));
        }
        else {
            bool no_comma = info->no_comma;
            info->no_comma = true;
            sNode*% exp = expression();
            info->no_comma = no_comma;
            
            initializer.add((null,exp));
        }
    }
    
    expected_next_character('}');
    
    return new sStructInitializer(initializer, info) implements sNode;
}

void add_variable_to_table(char* name, sType*% type, sInfo* info, bool function_param)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    if(function_param) {
        self->mCValueName = string(name);
    }
    else {
        static int n = 0;
        self->mCValueName = xsprintf("%s_%d", name, n++);
    }
    
    self->mAllocaValue = false;
    self->mNoFree = false;
    if(info.come_fun) {
        self->mFunName = clone info.come_fun.mName;
    }
    else {
        self->mFunName = null;
    }
    
    info.lv_table.mVars.insert(string(name), self);
}

void add_variable_to_global_table(char* name, sType*% type, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    self->mGlobal = true;
    
    self->mCValueName = string(name);
    
    self->mAllocaValue = false;
    self->mNoFree = false;
    
    info.gv_table.mVars.insert(string(name), self);
}

void add_variable_to_global_table_with_int_value(char* name, sType*% type, char* c_value, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    self->mGlobal = true;
    
    self->mCValueName = string(c_value);
    
    self->mAllocaValue = false;
    self->mNoFree = false;
    
    info.gv_table.mVars.insert(string(name), self);
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 7
{
    int sline_real = info.sline_real;
    info.sline_real = head_sline;
    bool is_type_name_flag = is_type_name(buf);
    
    /// backtrace ///
    bool multiple_declare = false;
    if(is_type_name_flag)
    {
        char* p = info.p;
        int sline = info.sline;
        
        info.p = head;
        info.sline = head_sline;
        
        if(xisalpha(*info->p) || *info->p == '_') {
            
            parse_sharp();
            var type, name, err = parse_type(parse_variable_name:false);
            parse_sharp();
            
            if(err) {
                parse_sharp();
                var type,name = parse_variable_name(type@base_type_name, true@first, info);
                
                if(*info->p == '=' && *(info->p+1) != '>' && !info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    if(*info->p == '{') {
                        skip_block();
                    }
                    else {
                        bool no_output_err = info->no_output_err;
                        bool no_comma = info->no_comma;
                        bool no_output_come_code = info->no_output_come_code;
                        
                        info->no_output_err = true;
                        info->no_comma = true;
                        info->no_output_come_code = true;
                        
                        sNode*% exp = expression();
                        
                        info->no_comma = no_comma;
                        info->no_output_err = no_output_err;
                        info->no_output_come_code = no_output_come_code;
                    }
                }
                
                if(!is_type_name(name) && *info->p == ',') {
                    multiple_declare = true;
                }
            }
        }
        
//        info.no_output_come_code = false;
//        info.no_output_come_code = no_output_come_code;
        
        info.p = p;
        info.sline = sline;
    }
    
    bool attr_define = false;
    if(is_type_name_flag && info->defining_class) {
        char* p = info.p;
        int sline = info.sline;
        
        info.p = head;
        info.sline = head_sline;
        
        parse_sharp();
        var type, name, err = parse_type(parse_variable_name:false);
        parse_sharp();
        
        if(err && strmemcmp(info->p, "self")) {
            attr_define = true;
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    parse_sharp();
    sFun* fun = info.funcs[string(buf)]??;
    
    if((!gComeC && buf === "var") || buf === "auto") {
        parse_sharp();
        var buf2 = parse_word();
        parse_sharp();
        
        list<string>*% multiple_assign = null;
        
        if(*info->p == ',' ) {
            multiple_assign = new list<string>();
            multiple_assign.push_back(clone buf2);
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                var buf3 = parse_word();
                parse_sharp();
                
                multiple_assign.push_back(clone buf3);
            }
        }
        parse_sharp();
        
        if(*info->p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>' && !info->no_assign) {
            info.p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            bool no_comma = info->no_comma
            info.no_comma = true;
            sNode*% right_value = expression();
            info.no_comma = no_comma;
            parse_sharp();
            
            right_value = post_position_operator(right_value, info);
            parse_sharp();
            
            sNode*% node = new sStoreNode(string(buf2)@name, multiple_assign, null@multiple_declare, null@type, true@alloc, right_value, info) implements sNode;
            info.sline_real = sline_real;
            return node;
        }
        else {
            err_msg(info, "var requires a right value(%c)", *info->p);
            exit(1);
        }
    }
    else if(gComePthread && buf === "__channel__") {
        sNode*% node = new sNewChannel(info) implements sNode;
        info.sline_real = sline_real;
        return node;
    }
    else if(multiple_declare) {
        info.p = head;
        info.sline = head_sline;

        list<tup: sType*%, string,sNode*%>*% multiple_declare = new list<tup: sType*%, string, sNode*%>();
        
        parse_sharp();
        var base_type, name, err = parse_type(parse_variable_name:false);
        parse_sharp();
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        parse_sharp();
        var type2,var_name = parse_variable_name(base_type, true@first, info);
        parse_sharp();
        
        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            if(type2->mClass->mStruct && type2->mArrayNum.length() == 0) {
                info->struct_initializer = true;
                bool no_comma = info->no_comma;
                info->no_comma = true;
                sNode*% exp = expression();
                info->no_comma = no_comma;
                info->struct_initializer = false;
                
                multiple_declare.push_back((type2, var_name, exp));
            }
            else {
                info->array_initializer = true;
                bool no_comma = info->no_comma;
                info->no_comma = true;
                sNode*% exp = expression();
                info->no_comma = no_comma;
                info->array_initializer = false;
                
                multiple_declare.push_back((type2, var_name, exp));
            }
        }
        else {
            multiple_declare.push_back((type2, var_name, null));
        }
        
        while(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            var type2, var_name = parse_variable_name(base_type, false@first, info);
            
            if(*info->p == '=')  {
                info->p++;
                skip_spaces_and_lf();
                
                if(type2->mClass->mStruct && type2->mArrayNum.length() == 0) {
                    info->struct_initializer = true;
                    bool no_comma = info->no_comma;
                    info->no_comma = true;
                    sNode*% exp = expression();
                    info->no_comma = no_comma;
                    info->struct_initializer = false;
                    
                    multiple_declare.push_back((type2, var_name, exp));
                }
                else {
                    bool no_comma = info->no_comma;
                    info->no_comma = true;
                    info->array_initializer = true;
                    
                    sNode*% exp = expression();
                    
                    info->no_comma = no_comma;
                    info->array_initializer = false;
                    
                    multiple_declare.push_back((type2, var_name, exp));
                }
            }
            else {
                multiple_declare.push_back((type2, var_name, null));
            }
        }
        
        sNode*% right_node = null;
        string var_name2 = string("");
        
        sNode*% node = new sStoreNode(string(buf)@name, null@multiple_assign, multiple_declare, base_type@type, true@alloc, null@right_value, info) implements sNode;
        info.sline_real = sline_real;
        return node;
    }
    else if(attr_define) {
        /// backtrace ///
        info.p = head;
        info.sline = head_sline;
        
        parse_sharp();
        var type, name, err = parse_type(parse_variable_name:false);
        parse_sharp();
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        
        info->p += strlen("self.");
        
        name = parse_word();
        
        parse_sharp();
        info.defining_class->mFields.add((name, type));
        
        if(*info->p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>') {
            info->p++;
            skip_spaces_and_lf();
            
            parse_sharp();
            
            sNode*% self_node = new sLoadNode(string("self"), info) implements sNode;
            
            sNode*% right_node = expression();
            
            sNode*% node = store_field(self_node, right_node, name, info);
            info.sline_real = sline_real;
            return node;
        }
        else {
            info.sline_real = sline_real;
            return create_null_node();
        }
    }
    else if(!is_type_name_flag && *info->p == '=' && *(info->p+1) != '=' && *(info->p+1) != '>' && !info->no_assign) {
        info.p++;
        skip_spaces_and_lf();
        
        parse_sharp();
        sNode*% right_value = expression();
        parse_sharp();
        
        right_value = post_position_operator(right_value, info);
        
        parse_sharp();
        
        sNode*% node = new sStoreNode(string(buf)@name, null@multiple_assign, null@multiple_declare, null@type, false@alloc, right_value, info) implements sNode;
        info.sline_real = sline_real;
        return node;
    }
    else if(!is_type_name_flag || info.funcs[string(buf)]??) {
        sNode*% node = new sLoadNode(string(buf)@name, info) implements sNode;
        
        node = post_position_operator(node, info);
        
        info.sline_real = sline_real;
        return node;
    }
    else if(!is_type_name_flag) {
        sNode*% node = new sLoadNode(string(buf)@name, info) implements sNode;
        
        node = post_position_operator(node, info);
        
        info.sline_real = sline_real;
        return node;
    }
    else {
        /// backtrace ///
        info.p = head;
        info.sline = head_sline;
        
        string word;
        if(xisalpha(*info->p) || *info->p == '_') {
            word = parse_word();
        }
        else {
            word = string("");
        }
        
        bool is_type_name_flag = is_type_name(word);
        
        info.p = head;
        info.sline = head_sline;
        
        if(is_type_name_flag) {
            parse_sharp();
            var type, name, err = parse_type(parse_variable_name:true);
            parse_sharp();
            
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            parse_sharp();
            
            if(*info->p == '=' && *(info->p+1) != '>' && info->no_assign) {
                sNode*% node = new sLoadNode(name@name, info) implements sNode;
                info.sline_real = sline_real;
                return node;
            }
            else if(*info->p == '=' && *(info->p+1) != '>' && !info->no_assign) {
                info.p++;
                skip_spaces_and_lf();
                
                parse_sharp();
                
                sNode*% right_value = null;
                if(type->mClass->mStruct && type->mArrayNum.length() == 0) {
                    info->struct_initializer = true;
                    bool no_comma = info->no_comma;
                    info->no_comma = true;
                    right_value = expression();
                    info->no_comma = no_comma;
                    info->struct_initializer = false;
                }
                else {
                    info.array_initializer = true;
                    parse_sharp();
                    right_value = expression();
                    parse_sharp();
                    info.array_initializer = false;
                }
                
                right_value = post_position_operator(right_value, info);
                
                sNode*% node = new sStoreNode(name, null@multiple_assign, null@multiple_declare, type, true@alloc, right_value, info) implements sNode;
                info.sline_real = sline_real;
                return node;
            }
            else {
                sNode*% node = new sStoreNode(name, null@multiple_assign, null@multiple_declare, type, true@alloc, null@right_value, info) implements sNode;
                info.sline_real = sline_real;
                return node;
            }
        }
    }
    
    err_msg(info, "unexpected word(%s)(1)", buf);
    exit(2);
}

sNode*% expression_node(sInfo* info=info) version 95
{
    skip_spaces_and_lf();
    parse_sharp();
    
    sNode*% node;
    
    if(strncmp(info->p, "<-", strlen("<-")) == 0) {
        info->p += strlen("<-");
        skip_spaces_and_lf();
        
        parse_sharp();
        sNode*% exp = expression();
        parse_sharp();
        
        return new sReadChannelNode(exp, info) implements sNode;
    }
    else {
        node = inherit(info);
    }
    
    return node;
}

sNode*% post_position_operator(sNode*% node, sInfo* info) version 07
{
    if(!node->terminated() && strncmp(info->p, "<-", strlen("<-")) == 0) {
        info.p+=2;
        skip_spaces_and_lf();
        
        parse_sharp();
        sNode*% right_value = expression();
        parse_sharp();
        
        right_value = post_position_operator(right_value, info);
        
        parse_sharp();
        
        return new sWriteChannelNode(node, right_value, info) implements sNode;
    }
    
    return inherit(node, info);
}
