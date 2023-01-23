#include "common.h"


BOOL call_operator_function(char* fun_base_name, sNodeType* left_type, int num_params, LVALUE* params, BOOL* found, BOOL move_, sVar* var_, sCompileInfo* info)
{
    *found = FALSE;
    
    char class_name[VAR_NAME_MAX];
    if(strcmp(left_type->mOriginalTypeName, "") == 0) {
        xstrncpy(class_name, CLASS_NAME(left_type->mClass), VAR_NAME_MAX);
        
        int i;
        if(left_type->mNumGenericsTypes == 0) {
            for(i=0; i<left_type->mPointerNum; i++) {
                xstrncat(class_name, "p", VAR_NAME_MAX);
            }
            int k;
            for(k=0; k<left_type->mArrayDimentionNum; k++) {
                xstrncat(class_name, "p", VAR_NAME_MAX);
            }
        }
        else {
            if(left_type->mPointerNum == 1) {
            }
            else {
                xstrncat(class_name, "xxxxxxxx", VAR_NAME_MAX);
            }
        }
    }
    else {
        xstrncpy(class_name, left_type->mOriginalTypeName, VAR_NAME_MAX);
        
        if(left_type->mNumGenericsTypes == 0) {
            int k;
            for(k=0; k<left_type->mOriginalPointerNum; k++) {
                xstrncat(class_name, "p", VAR_NAME_MAX);
            }
            for(k=0; k<left_type->mArrayDimentionNum; k++) {
                xstrncat(class_name, "p", VAR_NAME_MAX);
            }
        }
    }

    char fun_name[VAR_NAME_MAX];
    snprintf(fun_name, VAR_NAME_MAX, "%s_%s", class_name, fun_base_name);
    
    sFunction* operator_fun = NULL;
    int i;
    for(i=FUN_VERSION_MAX-1; i>=1; i--) {
        char new_fun_name[VAR_NAME_MAX];
        snprintf(new_fun_name, VAR_NAME_MAX, "%s_v%d", fun_name, i);
        operator_fun = get_function_from_table(new_fun_name);
        
        if(operator_fun) {
            xstrncpy(fun_name, new_fun_name, VAR_NAME_MAX);
            break;
        }
    }
    
    operator_fun = get_function_from_table(fun_name);
    
    if(operator_fun != NULL) {
        if(!operator_fun->mImmutable && var_) {
            var_->mCalledMutable = TRUE;
            
            if(var_->mRefferencedVar) {
                compile_err_msg(info, "%s is refferenced var by %s, so can't call mutable method", var_->mName, var_->mRefferencedVar->mName);
                return TRUE;
            }
        }
        
        *found = TRUE;
        
        LLVMValueRef obj;
        
        if(operator_fun->mGenericsFunction) {
            LLVMValueRef llvm_fun = NULL;
            
            BOOL immutable_ = operator_fun->mImmutable;
            
            if(!create_generics_function(&llvm_fun, operator_fun, fun_name, left_type, 0, NULL, immutable_, info)) {
                fprintf(stderr, "can't craete generics function %s\n", fun_name);
                exit(1);
            }
            
            set_caller_sname(info->sname);
            set_caller_sline(info->sline);
            
            LLVMValueRef llvm_params[PARAMS_MAX];
            memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
            
            sNodeType* fun_param_types[PARAMS_MAX];
            memset(fun_param_types, 0, sizeof(sNodeType*)*PARAMS_MAX);
            
            if(num_params != operator_fun->mNumParams) {
                compile_err_msg(info, "invalid operator function params number\n");
                return FALSE;
            }
            
            LLVMTypeRef llvm_param_types[PARAMS_MAX];
            
            int i;
            for(i=0; i<num_params; i++) {
                LVALUE param = params[i];
                
                sNodeType* fun_param_type = clone_node_type(operator_fun->mParamTypes[i]);
                sNodeType* param_type = clone_node_type(param.type);
                
                sNodeType* generics_type = left_type;

                if(!solve_type(&fun_param_type, generics_type, 0, NULL, info)) {
                    return FALSE;
                }

                if(!substitution_posibility(fun_param_type, param_type, NULL, info)) {
                    *found = FALSE;
                    return TRUE;
                }
                
                if(auto_cast_posibility(fun_param_type, param_type, TRUE)) 
                {
                    if(!cast_right_type_to_left_type(fun_param_type, &param_type, &param, info))
                    {
                        compile_err_msg(info, "Cast failed");
                        return TRUE;
                    }
                }
                
                llvm_params[i] = param.value;
        
                if(fun_param_type->mHeap) {
                    remove_object_from_right_values(llvm_params[i], info);
                }
                
                fun_param_types[i] = fun_param_type;
    
                llvm_param_types[i] = create_llvm_type_from_node_type(fun_param_types[i]);
            }
            
            sNodeType* result_type = clone_node_type(operator_fun->mResultType);
            
            sNodeType* generics_type = left_type;
            
            if(!solve_type(&result_type, generics_type, 0, NULL, info)) {
                return FALSE;
            }
    
            LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

            if(!move_) {
                obj = NULL;
            }
            else if(type_identify_with_class_name(result_type, "void") && result_type->mPointerNum == 0) {
                BOOL var_arg = FALSE;
        
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                
                obj = NULL;
                LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "");
            }
            else {
                BOOL var_arg = FALSE;
        
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                
                obj = LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "funXXX");
            }
            
            if(!solve_type(&result_type, generics_type, 0, NULL, info)) {
                return FALSE;
            }
            
            LVALUE llvm_value;
            llvm_value.value = obj;
            llvm_value.type = result_type;
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(num_params, info);
            if(obj) {
                push_value_to_stack_ptr(&llvm_value, info);
            }
            
            if(obj && result_type->mHeap) {
                append_object_to_right_values(obj, result_type, info);
            }
            
            info->type = result_type;
        }
        else if(operator_fun->mBlockText) {
            sFunction* fun = operator_fun;
            sNodeType* generics_type = NULL;
            LLVMValueRef llvm_params[PARAMS_MAX];
            int num_method_generics_types = 0;
            sNodeType** method_generics_types = NULL;
            int i;
            for(i=0; i<num_params; i++) {
                llvm_params[i] = params[i].value;
            }
            
            set_caller_sname(info->sname);
            set_caller_sline(info->sline);
            
            if(!move_) {
                dec_stack_ptr(num_params, info);
            }
            else {
                if(!call_inline_function(fun, generics_type, num_method_generics_types, method_generics_types, llvm_params, info)) {
                    return FALSE;
                }
            }
        }
        else {
            LLVMValueRef llvm_params[PARAMS_MAX];
            memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
            
            sNodeType* fun_param_types[PARAMS_MAX];
            memset(fun_param_types, 0, sizeof(sNodeType*)*PARAMS_MAX);
    
            LLVMTypeRef llvm_param_types[PARAMS_MAX];
    

            int i;
            for(i=0; i<num_params; i++) {
                LVALUE param = params[i];
                
                sNodeType* fun_param_type = clone_node_type(operator_fun->mParamTypes[i]);
                sNodeType* param_type = clone_node_type(param.type);
                
                sNodeType* generics_type = left_type;

                if(!solve_type(&fun_param_type, generics_type, 0, NULL, info)) {
                    return FALSE;
                }

                if(!substitution_posibility(fun_param_type, param_type, NULL, info)) {
                    *found = FALSE;
                    return TRUE;
                }
                
                if(auto_cast_posibility(fun_param_type, param_type, TRUE)) 
                {
                    if(!cast_right_type_to_left_type(fun_param_type, &param_type, &param, info))
                    {
                        compile_err_msg(info, "Cast failed");
                        return TRUE;
                    }
                }
        
                llvm_params[i] = param.value;
                
                if(fun_param_type->mHeap) {
                    remove_object_from_right_values(llvm_params[i], info);
                }
                
                fun_param_types[i] = fun_param_type;
                
                llvm_param_types[i] = create_llvm_type_from_node_type(fun_param_types[i]);
            }

            LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name);
            if(llvm_fun == NULL) {
                compile_err_msg(info, "require not inilne function for operator functions");
                return TRUE;
            }
            
            sNodeType* result_type = clone_node_type(operator_fun->mResultType);
            
            LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
            
            if(!move_) {
                obj = NULL;
            }
            else if(type_identify_with_class_name(result_type, "void") && result_type->mPointerNum == 0) {
                BOOL var_arg = FALSE;
                
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                
                obj = NULL;
                LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "");
            }
            else {
                BOOL var_arg = FALSE;
                
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                
                obj = LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "funYYY");
            }
            
            sNodeType* generics_type = left_type;
            if(!solve_type(&result_type, generics_type, 0, NULL, info)) {
                return FALSE;
            }
            
            LVALUE llvm_value;
            llvm_value.value = obj;
            llvm_value.type = result_type;
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(num_params, info);
            if(obj) {
                push_value_to_stack_ptr(&llvm_value, info);
            }
            
            if(obj && result_type->mHeap) {
                append_object_to_right_values(obj, result_type, info);
            }
            
            info->type = result_type;
        }
    }
    else {
        *found = FALSE;
    }
    
    return TRUE;
}

unsigned int sNodeTree_create_add(unsigned int left, unsigned int right, unsigned int middle, BOOL move_, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeAdd;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;
    
    gNodes[node].uValue.sOp.mMove = move_;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_add(unsigned int node, sCompileInfo* info)
{
    BOOL move_ = gNodes[node].uValue.sOp.mMove;
    
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_add";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    memset(params, 0, sizeof(LVALUE)*PARAMS_MAX);
    
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, move_, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(left_type->mArrayDimentionNum > 0) {
            sNodeType* pointer_type = clone_node_type(left_type);
            pointer_type->mArrayDimentionNum = 0;
            pointer_type->mPointerNum++;
            
            if(!cast_right_type_to_left_type(pointer_type, &left_type, &lvalue, info))
            {
                return FALSE;
            }
        }
        if(right_type->mArrayDimentionNum > 0) {
            sNodeType* pointer_type = clone_node_type(right_type);
            pointer_type->mArrayDimentionNum = 0;
            pointer_type->mPointerNum++;
            
            if(!cast_right_type_to_left_type(pointer_type, &right_type, &rvalue, info))
            {
                return FALSE;
            }
        }
        
        if(left_type->mPointerNum > 0 && is_number_type(right_type))
        {
            LLVMTypeRef long_type = create_llvm_type_with_class_name("long");
    
            LLVMValueRef left_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, lvalue.value, long_type, "ptrToIntC");
    
            LLVMValueRef right_value;
            if(type_identify_with_class_name(right_type, "long")) {
                right_value = rvalue.value;
            }
            else {
                if(right_type->mPointerNum > 0 || right_type->mArrayDimentionNum > 0) {
                    right_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue.value, long_type, "ptrToIntD");
                }
                else {
                    right_value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue.value, long_type, "sext");
                }
            }
    
            LLVMTypeRef llvm_var_type = create_llvm_type_from_node_type(left_type);
    
            sNodeType* left_type3 = clone_node_type(left_type);
            left_type3->mPointerNum--;
    
            int alignment = 0;
            uint64_t alloc_size = get_size_from_node_type(left_type3, &alignment);
    
            LLVMValueRef alloc_size_value = LLVMConstInt(long_type, alloc_size, FALSE);
    
            right_value = LLVMBuildMul(gBuilder, right_value, alloc_size_value, "mul");
    
            sNodeType* left_type2 = clone_node_type(left_type);
            left_type2->mHeap = FALSE;
    
            LVALUE llvm_value;
            if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
            {
                llvm_value.value = LLVMBuildFAdd(gBuilder, left_value, right_value, "fadd");
            }
            else {
                llvm_value.value = LLVMBuildAdd(gBuilder, left_value, right_value, "add");
            }
            llvm_value.value = LLVMBuildCast(gBuilder, LLVMIntToPtr, llvm_value.value, llvm_var_type, "intToPtrB");
            llvm_value.type = clone_node_type(left_type2);
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(2, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type = clone_node_type(left_type2);
        }
        else if(right_type->mPointerNum > 0 && is_number_type(left_type))
        {
            sNodeType* tmp_type = left_type;
            left_type = right_type;
            right_type = tmp_type;
            LVALUE tmp_value = lvalue;
            lvalue = rvalue;
            rvalue = tmp_value;
            
            LLVMTypeRef long_type = create_llvm_type_with_class_name("long");
    
            LLVMValueRef left_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, lvalue.value, long_type, "ptrToIntC");
    
            LLVMValueRef right_value;
            if(type_identify_with_class_name(right_type, "long")) {
                right_value = rvalue.value;
            }
            else {
                if(right_type->mPointerNum > 0 || right_type->mArrayDimentionNum > 0) {
                    right_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue.value, long_type, "ptrToIntD");
                }
                else {
                    right_value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue.value, long_type, "sext");
                }
            }
    
            LLVMTypeRef llvm_var_type = create_llvm_type_from_node_type(left_type);
    
            sNodeType* left_type3 = clone_node_type(left_type);
            left_type3->mPointerNum--;
    
            int alignment = 0;
            uint64_t alloc_size = get_size_from_node_type(left_type3, &alignment);
    
            LLVMValueRef alloc_size_value = LLVMConstInt(long_type, alloc_size, FALSE);
    
            right_value = LLVMBuildMul(gBuilder, right_value, alloc_size_value, "mul");
    
            sNodeType* left_type2 = clone_node_type(left_type);
            left_type2->mHeap = FALSE;
    
            LVALUE llvm_value;
            if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
            {
                llvm_value.value = LLVMBuildFAdd(gBuilder, left_value, right_value, "fadd");
            }
            else {
                llvm_value.value = LLVMBuildAdd(gBuilder, left_value, right_value, "add");
            }
            llvm_value.value = LLVMBuildCast(gBuilder, LLVMIntToPtr, llvm_value.value, llvm_var_type, "intToPtrB");
            llvm_value.type = clone_node_type(left_type2);
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(2, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type = clone_node_type(left_type2);
        }
        else {
            if(is_left_type_bigger_size(left_type, right_type)) {
                if(auto_cast_posibility(left_type, right_type, TRUE)) {
                    if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                    {
                        compile_err_msg(info, "Cast failed");
                        return TRUE;
                    }
                }
            }
            else {
                if(auto_cast_posibility(right_type, left_type, TRUE)) {
                    if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
                    {
                        compile_err_msg(info, "Cast failed");
                        return TRUE;
                    }
                }
            }
    
            LVALUE llvm_value;
            if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
            {
                llvm_value.value = LLVMBuildFAdd(gBuilder, lvalue.value, rvalue.value, "fadd");
            }
            else {
                llvm_value.value = LLVMBuildAdd(gBuilder, lvalue.value, rvalue.value, "add");
            }
            llvm_value.type = clone_node_type(left_type);
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(2, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type = clone_node_type(left_type);
        }
    }
    
    return TRUE;
}

unsigned int sNodeTree_create_sub(unsigned int left, unsigned int right, unsigned int middle, BOOL move_, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeSub;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;
    
    gNodes[node].uValue.sOp.mMove = move_;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_sub(unsigned int node, sCompileInfo* info)
{
    BOOL move_ = gNodes[node].uValue.sOp.mMove;
    
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);
    
    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_sub";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    memset(params, 0, sizeof(LVALUE)*PARAMS_MAX);
    
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, move_, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(left_type->mArrayDimentionNum > 0) {
            sNodeType* pointer_type = clone_node_type(left_type);
            pointer_type->mArrayDimentionNum = 0;
            pointer_type->mPointerNum++;
            
            if(!cast_right_type_to_left_type(pointer_type, &left_type, &lvalue, info))
            {
                return FALSE;
            }
        }
        if(right_type->mArrayDimentionNum > 0) {
            sNodeType* pointer_type = clone_node_type(right_type);
            pointer_type->mArrayDimentionNum = 0;
            pointer_type->mPointerNum++;
            
            if(!cast_right_type_to_left_type(pointer_type, &right_type, &rvalue, info))
            {
                return FALSE;
            }
        }
        if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0) {
            LLVMTypeRef long_type = create_llvm_type_with_class_name("long");
    
            LLVMValueRef left_value;
            if(left_type->mArrayDimentionNum > 0) {
                sNodeType* left_type2 = clone_node_type(left_type);
    
                left_type2->mPointerNum++;
                left_type2->mArrayDimentionNum = 0;
    
                LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type2);
    
                left_value = LLVMBuildCast(gBuilder, LLVMBitCast, lvalue.address, llvm_type, "ptrToIntG");
            }
            else {
                left_value = lvalue.value;
            }
    
            LLVMValueRef right_value;
            if(right_type->mArrayDimentionNum > 0) {
                sNodeType* right_type2 = clone_node_type(right_type);
    
                right_type2->mPointerNum++;
                right_type2->mArrayDimentionNum = 0;
    
                LLVMTypeRef llvm_type = create_llvm_type_from_node_type(right_type2);
    
                right_value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue.address, llvm_type, "ptrToIntG");
            }
            else {
                right_value = rvalue.value;
            }
    
            left_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, left_value, long_type, "ptrToIntG");
            right_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, right_value, long_type, "ptrToIntH");
    
            sNodeType* node_type = create_node_type_with_class_name("long");
    
            LLVMTypeRef llvm_var_type = create_llvm_type_from_node_type(node_type);
    
            sNodeType* element_type = clone_node_type(left_type);
            element_type->mPointerNum = 0;
            element_type->mArrayDimentionNum = 0;
    
            int alignment = 0;
            uint64_t element_size = get_size_from_node_type(element_type, &alignment);
    
            LLVMValueRef elemet_size_value = LLVMConstInt(long_type, element_size, FALSE);
    

            LVALUE llvm_value;
            llvm_value.value = LLVMBuildSub(gBuilder, left_value, right_value, "sub");
            llvm_value.value = LLVMBuildSDiv(gBuilder, llvm_value.value, elemet_size_value, "div");
            llvm_value.value = LLVMBuildCast(gBuilder, LLVMBitCast, llvm_value.value, llvm_var_type, "bitcast");
            llvm_value.type = clone_node_type(node_type);
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(2, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type = clone_node_type(node_type);
        }
        else if(left_type->mPointerNum > 0 && is_number_type(right_type))
        {
            LLVMTypeRef long_type = create_llvm_type_with_class_name("long");
    
            LLVMValueRef left_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, lvalue.value, long_type, "ptrToIntI");
    
            LLVMValueRef right_value;
            if(type_identify_with_class_name(right_type, "long")) {
                right_value = rvalue.value;
            }
            else {
                if(right_type->mPointerNum > 0 || right_type->mArrayDimentionNum > 0) {
                    right_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue.value, long_type, "ptrToIntJ");
                }
                else {
                    right_value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue.value, long_type, "sext");
                }
            }
    
            LLVMTypeRef llvm_var_type = create_llvm_type_from_node_type(left_type);
    
            sNodeType* left_type3 = clone_node_type(left_type);
            left_type3->mPointerNum--;
    
            int alignment = 0;
            uint64_t alloc_size = get_size_from_node_type(left_type3, &alignment);
    
            LLVMValueRef alloc_size_value = LLVMConstInt(long_type, alloc_size, FALSE);
    
            right_value = LLVMBuildMul(gBuilder, right_value, alloc_size_value, "mul");
    
            sNodeType* left_type2 = clone_node_type(left_type);
            left_type2->mHeap = FALSE;
    
            LVALUE llvm_value;
            llvm_value.value = LLVMBuildSub(gBuilder, left_value, right_value, "sub");
            llvm_value.value = LLVMBuildCast(gBuilder, LLVMIntToPtr, llvm_value.value, llvm_var_type, "iintToPtrD");
            llvm_value.type = clone_node_type(left_type2);
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(2, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type = clone_node_type(left_type2);
        }
        else {
            if(is_left_type_bigger_size(left_type, right_type)) {
                if(auto_cast_posibility(left_type, right_type, TRUE)) {
                    if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                    {
                        compile_err_msg(info, "Cast failed");
                        return TRUE;
                    }
                }
            }
            else {
                if(auto_cast_posibility(right_type, left_type, TRUE)) {
                    if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
                    {
                        compile_err_msg(info, "Cast failed");
                        return TRUE;
                    }
                }
            }
    
            LVALUE llvm_value;
            if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
            {
                llvm_value.value = LLVMBuildFSub(gBuilder, lvalue.value, rvalue.value, "fsub");
            }
            else {
                llvm_value.value = LLVMBuildSub(gBuilder, lvalue.value, rvalue.value, "sub");
            }
            llvm_value.type = clone_node_type(left_type);
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(2, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type = clone_node_type(left_type);
        }
    }
    
    return TRUE;
}

unsigned int sNodeTree_create_mult(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeMult;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_mult(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_mult";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(is_left_type_bigger_size(left_type, right_type)) {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
        else {
            if(auto_cast_posibility(right_type, left_type, TRUE)) {
                if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
    
        LVALUE llvm_value;
        if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
        {
            llvm_value.value = LLVMBuildFMul(gBuilder, lvalue.value, rvalue.value, "fmul");
        }
        else {
            llvm_value.value = LLVMBuildMul(gBuilder, lvalue.value, rvalue.value, "mul");
        }
        llvm_value.type = clone_node_type(left_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = clone_node_type(left_type);
    }

    return TRUE;
}


unsigned int sNodeTree_create_div(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeDiv;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_div(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_div";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(is_left_type_bigger_size(left_type, right_type)) {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
        else {
            if(auto_cast_posibility(right_type, left_type, TRUE)) {
                if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
    
        LVALUE llvm_value;
        if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
        {
            llvm_value.value = LLVMBuildFDiv(gBuilder, lvalue.value, rvalue.value, "fdiv");
        }
        else if(left_type->mUnsigned) {
            llvm_value.value = LLVMBuildUDiv(gBuilder, lvalue.value, rvalue.value, "div");
        }
        else {
            llvm_value.value = LLVMBuildSDiv(gBuilder, lvalue.value, rvalue.value, "div");
        }
        llvm_value.type = clone_node_type(left_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = clone_node_type(left_type);
    }

    return TRUE;
}

unsigned int sNodeTree_create_mod(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeMod;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_mod(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_mod";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }
    
        LVALUE llvm_value;
        if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
        {
            llvm_value.value = LLVMBuildFRem(gBuilder, lvalue.value, rvalue.value, "frem");
        }
        else if(left_type->mUnsigned) {
            llvm_value.value = LLVMBuildURem(gBuilder, lvalue.value, rvalue.value, "urem");
        }
        else {
            llvm_value.value = LLVMBuildSRem(gBuilder, lvalue.value, rvalue.value, "srem");
        }
        llvm_value.type = clone_node_type(left_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = clone_node_type(left_type);
    }

    return TRUE;
}

unsigned int sNodeTree_create_equals(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEquals;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_equals(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
/*
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }
*/

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
/*
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }
*/

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);

    if(!left_type->mUnsigned && (type_identify_with_class_name(left_type, "char") || type_identify_with_class_name(left_type, "short")) && left_type->mPointerNum == 0) 
    {
        sNodeType* node_type = clone_node_type(left_type);
        left_type = create_node_type_with_class_name("int");
        if(!cast_right_type_to_left_type(left_type, &node_type, &lvalue, info)) {
            compile_err_msg(info, "Cast failed");
            return TRUE;
        }
        left_type = node_type;
    }

//    if(auto_cast_posibility(left_type, right_type, TRUE)) {
        if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
        {
            compile_err_msg(info, "Cast failed");
            return TRUE;
        }
//    }

    LVALUE llvm_value;
    if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
    {
        llvm_value.value = LLVMBuildFCmp(gBuilder, LLVMRealOEQ, lvalue.value, rvalue.value, "eq");
    }
    else {
        llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntEQ, lvalue.value, rvalue.value, "eq");
    }
    llvm_value.type = create_node_type_with_class_name("bool");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    dec_stack_ptr(2, info);
    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("bool");

    return TRUE;
}

unsigned int sNodeTree_create_equals2(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEquals2;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_equals2(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_equals";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(!left_type->mUnsigned && (type_identify_with_class_name(left_type, "char") || type_identify_with_class_name(left_type, "short")) && left_type->mPointerNum == 0) 
        {
            sNodeType* node_type = clone_node_type(left_type);
            left_type = create_node_type_with_class_name("int");
            if(!cast_right_type_to_left_type(left_type, &node_type, &lvalue, info)) {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
            left_type = node_type;
        }
    
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }
    
        LVALUE llvm_value;
        if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
        {
            llvm_value.value = LLVMBuildFCmp(gBuilder, LLVMRealOEQ, lvalue.value, rvalue.value, "eq");
        }
        else {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntEQ, lvalue.value, rvalue.value, "eq");
        }
        
        llvm_value.type = create_node_type_with_class_name("bool");
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = create_node_type_with_class_name("bool");
    }

    return TRUE;
}


unsigned int sNodeTree_create_not_equals(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeNotEquals;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_not_equals(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
/*
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }
*/

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
/*
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }
*/

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    if(!left_type->mUnsigned && (type_identify_with_class_name(left_type, "char") || type_identify_with_class_name(left_type, "short")) && left_type->mPointerNum == 0) 
    {
        sNodeType* node_type = clone_node_type(left_type);
        left_type = create_node_type_with_class_name("int");
        if(!cast_right_type_to_left_type(left_type, &node_type, &lvalue, info)) {
            compile_err_msg(info, "Cast failed");
            return TRUE;
        }
        left_type = node_type;
    }

//    if(auto_cast_posibility(left_type, right_type, TRUE)) {
        if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
        {
            compile_err_msg(info, "Cast failed");
            return TRUE;
        }
//    }

    LVALUE llvm_value;
    if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
    {
        llvm_value.value = LLVMBuildFCmp(gBuilder, LLVMRealONE, lvalue.value, rvalue.value, "not_eq");
    }
    else {
        llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntNE, lvalue.value, rvalue.value, "not_eq");
    }
    llvm_value.type = create_node_type_with_class_name("bool");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    dec_stack_ptr(2, info);
    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("bool");

    return TRUE;
}

unsigned int sNodeTree_create_not_equals2(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeNotEquals2;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_not_equals2(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_not_equals";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(!left_type->mUnsigned && (type_identify_with_class_name(left_type, "char") || type_identify_with_class_name(left_type, "short")) && left_type->mPointerNum == 0) 
        {
            sNodeType* node_type = clone_node_type(left_type);
            left_type = create_node_type_with_class_name("int");
            if(!cast_right_type_to_left_type(left_type, &node_type, &lvalue, info)) {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
            left_type = node_type;
        }
    
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }
    
        LVALUE llvm_value;
        if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
        {
            llvm_value.value = LLVMBuildFCmp(gBuilder, LLVMRealONE, lvalue.value, rvalue.value, "not_eq");
        }
        else {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntNE, lvalue.value, rvalue.value, "not_eq");
        }
        llvm_value.type = create_node_type_with_class_name("bool");
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = create_node_type_with_class_name("bool");
    }

    return TRUE;
}


unsigned int sNodeTree_create_gteq(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeGteq;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_gteq(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_gteq";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(!left_type->mUnsigned && (type_identify_with_class_name(left_type, "char") || type_identify_with_class_name(left_type, "short")) && left_type->mPointerNum == 0 && left_type->mNoArrayPointerNum == 0) 
        {
            sNodeType* node_type = clone_node_type(left_type);
            left_type = create_node_type_with_class_name("int");
            if(!cast_right_type_to_left_type(left_type, &node_type, &lvalue, info)) {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
            left_type = node_type;
        }
    
//        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
//        }
    
        LVALUE llvm_value;
        if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
        {
            llvm_value.value = LLVMBuildFCmp(gBuilder, LLVMRealOGE, lvalue.value, rvalue.value, "gteq_double");
        }
        else if(left_type->mUnsigned) {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntUGE, lvalue.value, rvalue.value, "gteq_unsinged");
        }
        else {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntSGE, lvalue.value, rvalue.value, "gteq_signed");
        }
        llvm_value.type = create_node_type_with_class_name("bool");
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = create_node_type_with_class_name("bool");
    }

    return TRUE;
}


unsigned int sNodeTree_create_leeq(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeLeeq;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_leeq(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_leeq";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(!left_type->mUnsigned && (type_identify_with_class_name(left_type, "char") || type_identify_with_class_name(left_type, "short")) && left_type->mPointerNum == 0) 
        {
            sNodeType* node_type = clone_node_type(left_type);
            left_type = create_node_type_with_class_name("int");
            if(!cast_right_type_to_left_type(left_type, &node_type, &lvalue, info)) {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
            left_type = node_type;
        }
    
//        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
//        }
    
        LVALUE llvm_value;
        if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
        {
            llvm_value.value = LLVMBuildFCmp(gBuilder, LLVMRealOLE, lvalue.value, rvalue.value, "leeq");
        }
        else if(left_type->mUnsigned) {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntULE, lvalue.value, rvalue.value, "leeq");
        }
        else {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntSLE, lvalue.value, rvalue.value, "leeq");
        }
        llvm_value.type = create_node_type_with_class_name("bool");
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = create_node_type_with_class_name("bool");
    }

    return TRUE;
}


unsigned int sNodeTree_create_gt(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeGt;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_gt(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_gt";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(!left_type->mUnsigned && (type_identify_with_class_name(left_type, "char") || type_identify_with_class_name(left_type, "short")) && left_type->mPointerNum == 0) 
        {
            sNodeType* node_type = clone_node_type(left_type);
            left_type = create_node_type_with_class_name("int");
            if(!cast_right_type_to_left_type(left_type, &node_type, &lvalue, info)) {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
            left_type = node_type;
        }
    
//        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
//        }

        LVALUE llvm_value;
        if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
        {
            llvm_value.value = LLVMBuildFCmp(gBuilder, LLVMRealOGT, lvalue.value, rvalue.value, "gt");
        }
        else if(left_type->mUnsigned) {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntUGT, lvalue.value, rvalue.value, "gt");
        }
        else {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntSGT, lvalue.value, rvalue.value, "gt");
        }
        llvm_value.type = create_node_type_with_class_name("bool");
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = create_node_type_with_class_name("bool");
    }

    return TRUE;
}


unsigned int sNodeTree_create_le(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeLe;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_le(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = clone_node_type(info->type);

    LVALUE rvalue = *get_value_from_stack(-1);

    char* fun_name = "operator_le";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(!left_type->mUnsigned && (type_identify_with_class_name(left_type, "char") || type_identify_with_class_name(left_type, "short")) && left_type->mPointerNum == 0) 
        {
            sNodeType* node_type = clone_node_type(left_type);
            left_type = create_node_type_with_class_name("int");
            if(!cast_right_type_to_left_type(left_type, &node_type, &lvalue, info)) {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
            left_type = node_type;
        }
    
//        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
//        }
    
        LVALUE llvm_value;
        if((type_identify_with_class_name(left_type, "long_double") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "float")) && left_type->mPointerNum == 0) 
        {
            llvm_value.value = LLVMBuildFCmp(gBuilder, LLVMRealOLT, lvalue.value, rvalue.value, "le");
        }
        else if(left_type->mUnsigned) {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntULT, lvalue.value, rvalue.value, "le");
        }
        else {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntSLT, lvalue.value, rvalue.value, "le");
        }
        llvm_value.type = create_node_type_with_class_name("bool");
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = create_node_type_with_class_name("bool");
    }

    return TRUE;
}


unsigned int sNodeTree_create_logical_denial(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeLogicalDenial;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_logical_denial(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;
    
    char* fun_name = "operator_logical_denial";
    
    int num_params = 1;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        dec_stack_ptr(1, info);
    
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);
    
        LVALUE rvalue;
    
        if(left_type->mPointerNum > 0) {
            rvalue.value = LLVMConstNull(llvm_type);
        }
        else if(type_identify_with_class_name(left_type, "float") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "long_doubl"))
        {
            rvalue.value = LLVMConstReal(llvm_type, 0.0);
        }
        else {
            rvalue.value = LLVMConstInt(llvm_type, 0, FALSE);
        }
    
        rvalue.type = clone_node_type(left_type);
        rvalue.address = NULL;
        rvalue.var = NULL;
    
        LVALUE llvm_value;
        
        if(type_identify_with_class_name(left_type, "float") || type_identify_with_class_name(left_type, "double") || type_identify_with_class_name(left_type, "long_doubl"))
        {
            llvm_value.value = LLVMBuildFCmp(gBuilder, LLVMRealOEQ, lvalue.value, rvalue.value, "logical_denial");
        }
        else {
            llvm_value.value = LLVMBuildICmp(gBuilder, LLVMIntEQ, lvalue.value, rvalue.value, "logical_denial");
        }
        
        LLVMTypeRef int_type = create_llvm_type_with_class_name("int");
        
        llvm_value.value = LLVMBuildCast(gBuilder, LLVMZExt, llvm_value.value, int_type, "castOOOO");
        llvm_value.type = create_node_type_with_class_name("int");
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = create_node_type_with_class_name("int");
    }

    return TRUE;
}

unsigned int sNodeTree_create_left_shift(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeLeftShift;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_left_shift(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }
    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_left_shift";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(is_left_type_bigger_size(left_type, right_type)) {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
        else {
            if(auto_cast_posibility(right_type, left_type, TRUE)) {
                if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
    
        LVALUE llvm_value;
        llvm_value.value = LLVMBuildShl(gBuilder, lvalue.value, rvalue.value, "lshifttmp");
        llvm_value.type = clone_node_type(right_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = llvm_value.type;
    }
    
    return TRUE;
}

unsigned int sNodeTree_create_right_shift(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeRightShift;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_right_shift(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }
    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_right_shift";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(is_left_type_bigger_size(left_type, right_type)) {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
        else {
            if(auto_cast_posibility(right_type, left_type, TRUE)) {
                if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
        
        LVALUE llvm_value;
        llvm_value.value = LLVMBuildLShr(gBuilder, lvalue.value, rvalue.value, "rshifttmp");
        llvm_value.type = clone_node_type(right_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = llvm_value.type;
    }

    return TRUE;
}

unsigned int sNodeTree_create_and(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeAnd;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_and(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }
    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_and";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(is_left_type_bigger_size(left_type, right_type)) {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
        else {
            if(auto_cast_posibility(right_type, left_type, TRUE)) {
                if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
    
        LVALUE llvm_value;
        llvm_value.value = LLVMBuildAnd(gBuilder, lvalue.value, rvalue.value, "andtmp");
        llvm_value.type = clone_node_type(right_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = llvm_value.type;
    }

    return TRUE;
}

unsigned int sNodeTree_create_xor(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeXor;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_xor(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }
    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_xor";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(is_left_type_bigger_size(left_type, right_type)) {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
        else {
            if(auto_cast_posibility(right_type, left_type, TRUE)) {
                if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
    
        LVALUE llvm_value;
        llvm_value.value = LLVMBuildXor(gBuilder, lvalue.value, rvalue.value, "xortmp");
        llvm_value.type = clone_node_type(right_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = llvm_value.type;
    }

    return TRUE;
}

unsigned int sNodeTree_create_or(unsigned int left, unsigned int right, unsigned int middle, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeOr;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left;
    gNodes[node].mRight = right;
    gNodes[node].mMiddle = middle;

    return node;
}

BOOL compile_or(unsigned int node, sCompileInfo* info)
{
    int left_node = gNodes[node].mLeft;
    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }
    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;

    int right_node = gNodes[node].mRight;
    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    
    char* fun_name = "operator_or";
    
    int num_params = 2;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    params[1] = rvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(is_left_type_bigger_size(left_type, right_type)) {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
        else {
            if(auto_cast_posibility(right_type, left_type, TRUE)) {
                if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
    
        LVALUE llvm_value;
        llvm_value.value = LLVMBuildOr(gBuilder, lvalue.value, rvalue.value, "ortmp");
        llvm_value.type = clone_node_type(left_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;
    
        dec_stack_ptr(2, info);
        push_value_to_stack_ptr(&llvm_value, info);
    
        info->type = llvm_value.type;
    }

    return TRUE;
}

unsigned int sNodeTree_create_complement(unsigned int left_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeComplement;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_complement(unsigned int node, sCompileInfo* info)
{
    int expression_node = gNodes[node].mLeft;

    if(!compile(expression_node, info))
    {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_node_type = clone_node_type(info->type);

    LVALUE lvalue = *get_value_from_stack(-1);
    
    sVar* var_ = lvalue.var;
    
    char* fun_name = "operator_complement";
    
    int num_params = 1;
    
    LVALUE params[PARAMS_MAX];
    params[0] = lvalue;
    
    BOOL found = FALSE;
    
    if(!call_operator_function(fun_name, left_node_type, num_params, params, &found, TRUE, var_, info)) {
        return FALSE;
    }
    
    if(!found) {
        if(type_identify_with_class_name(left_node_type, "bool"))
        {
            LVALUE rvalue;
    
            LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");
            rvalue.value = LLVMConstInt(llvm_type, (uint32_t)0xFFFFFFFF, FALSE);
            rvalue.type = create_node_type_with_class_name("int");
            rvalue.address = NULL;
            rvalue.var = NULL;
    
            LVALUE llvm_value;
            lvalue.value = LLVMBuildCast(gBuilder, LLVMSExt, lvalue.value, llvm_type, "CastComplement");
            llvm_value.value = LLVMBuildXor(gBuilder, lvalue.value, rvalue.value, "xortmp");
            llvm_value.type = create_node_type_with_class_name("int");
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(1, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type = create_node_type_with_class_name("int");
        }
        else if(type_identify_with_class_name(left_node_type, "char"))
        {
            LVALUE rvalue;
    
            LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char");
            rvalue.value = LLVMConstInt(llvm_type, (uint8_t)0xFF, FALSE);
            rvalue.type = create_node_type_with_class_name("char");
            rvalue.address = NULL;
            rvalue.var = NULL;
    
            LVALUE llvm_value;
            llvm_value.value = LLVMBuildXor(gBuilder, lvalue.value, rvalue.value, "xortmp");
            llvm_value.type = clone_node_type(left_node_type);
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(1, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type= left_node_type;
        }
        else if(type_identify_with_class_name(left_node_type, "short"))
        {
            LVALUE rvalue;
    
            LLVMTypeRef llvm_type = create_llvm_type_with_class_name("short");
            rvalue.value = LLVMConstInt(llvm_type, (uint16_t)0xFFFF, FALSE);
            rvalue.value = LLVMConstInt(llvm_type, (uint8_t)0xFF, FALSE);
            rvalue.type = create_node_type_with_class_name("short");
            rvalue.address = NULL;
            rvalue.var = NULL;
    
            LVALUE llvm_value;
            llvm_value.value = LLVMBuildXor(gBuilder, lvalue.value, rvalue.value, "xortmp");
            llvm_value.type = clone_node_type(left_node_type);
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(1, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type= left_node_type;
        }
        else if(type_identify_with_class_name(left_node_type, "int"))
        {
            LVALUE rvalue;
    
            LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");
            rvalue.value = LLVMConstInt(llvm_type, (uint32_t)0xFFFFFFFF, FALSE);
            rvalue.type = create_node_type_with_class_name("int");
            rvalue.address = NULL;
            rvalue.var = NULL;
    
            LVALUE llvm_value;
            llvm_value.value = LLVMBuildXor(gBuilder, lvalue.value, rvalue.value, "xortmp");
            llvm_value.type = clone_node_type(left_node_type);
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(1, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type= left_node_type;
        }
        else if(type_identify_with_class_name(left_node_type, "long"))
        {
            LVALUE rvalue;
    
            LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");
            rvalue.value = LLVMConstInt(llvm_type, (uint64_t)0xFFFFFFFFFFFFFFFF, FALSE);
            rvalue.type = create_node_type_with_class_name("long");
            rvalue.address = NULL;
            rvalue.var = NULL;
    
            LVALUE llvm_value;
            llvm_value.value = LLVMBuildXor(gBuilder, lvalue.value, rvalue.value, "xortmp");
            llvm_value.type = clone_node_type(left_node_type);
            llvm_value.address = NULL;
            llvm_value.var = NULL;
    
            dec_stack_ptr(1, info);
            push_value_to_stack_ptr(&llvm_value, info);
    
            info->type= left_node_type;
        }
        else {
            compile_err_msg(info, "Invalid type for complement operator");
        }
    }

    return TRUE;
}

unsigned int sNodeTree_create_plus_plus(unsigned int left_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypePlusPlus;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_plus_plus(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    BOOL derefference = gNodes[left_node].mNodeType == kNodeTypeDerefference;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = sNodeTree_create_int_value(1, info->pinfo);

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(derefference && left_type->mPointerNum == 0) {
            LLVMValueRef address = lvalue.value;
            LLVMTypeRef llvm_left_type = create_llvm_type_from_node_type(left_type);

            LLVMValueRef left_value = address;
            LLVMTypeRef long_type = create_llvm_type_with_class_name("long");
            LLVMValueRef left_value2 = LLVMBuildCast(gBuilder, LLVMPtrToInt, left_value, long_type, "castAI");

            LLVMValueRef right_value;
            if(type_identify_with_class_name(right_type, "long")) {
                right_value = rvalue.value;
            }
            else {
                if(right_type->mPointerNum > 0 || right_type->mArrayDimentionNum > 0) {
                    right_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue.value, long_type, "sext");
                }
                else {
                    right_value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue.value, long_type, "sext");
                }
            }

            int alignment = 0;
            uint64_t alloc_size = get_size_from_node_type(left_type, &alignment);

            LLVMValueRef alloc_size_value = LLVMConstInt(long_type, alloc_size, FALSE);

            right_value = LLVMBuildMul(gBuilder, right_value, alloc_size_value, "mul");

            LLVMValueRef value = LLVMBuildAdd(gBuilder, left_value2, right_value, "add");
            value = LLVMBuildCast(gBuilder, LLVMIntToPtr, value, LLVMPointerType(llvm_left_type, 0), "IntToPtrE");
            LLVMBuildStore(gBuilder, value, lvalue.address);

            sNodeType* left_type2 = clone_node_type(left_type);
            left_type2->mPointerNum++;

            LVALUE llvm_value;
            llvm_value.value = left_value2;
            llvm_value.type = clone_node_type(left_type2);
            llvm_value.address = NULL;
            llvm_value.var = NULL;

            push_value_to_stack_ptr(&llvm_value, info);

            info->type = clone_node_type(left_type2);
        }
        else {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }

            LLVMValueRef address = lvalue.value;
            
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadA");
            LLVMValueRef add_rvalue = rvalue.value;

            LLVMValueRef value = LLVMBuildAdd(gBuilder, add_lvalue, add_rvalue, "add");

            LLVMBuildStore(gBuilder, value, address);

            LVALUE llvm_value;
            llvm_value.value = add_lvalue;
            llvm_value.type = clone_node_type(left_type);
            llvm_value.address = NULL;
            llvm_value.var = NULL;

            push_value_to_stack_ptr(&llvm_value, info);

            info->type = clone_node_type(left_type);
        }
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;
        
        LLVMTypeRef llvm_type2 = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type2, address, "loadB");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value = LLVMBuildAdd(gBuilder, add_lvalue, add_rvalue, "add");

        LLVMBuildStore(gBuilder, value, address);
        
        LVALUE llvm_value;
        llvm_value.value = add_lvalue;
        llvm_value.type = clone_node_type(left_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;

        push_value_to_stack_ptr(&llvm_value, info);

        info->type = clone_node_type(left_type);
    }

    return TRUE;
}

unsigned int sNodeTree_create_minus_minus(unsigned int left_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeMinusMinus;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_minus_minus(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    BOOL derefference = gNodes[left_node].mNodeType == kNodeTypeDerefference;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = sNodeTree_create_int_value(1, info->pinfo);

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    sNodeType* result_type = clone_node_type(left_type);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(derefference && left_type->mPointerNum == 0) {
            LLVMValueRef address = lvalue.value;

            LLVMTypeRef llvm_left_type = create_llvm_type_from_node_type(left_type);

            LLVMTypeRef long_type = create_llvm_type_with_class_name("long");

            LLVMValueRef left_value = address;
            LLVMValueRef left_value2 = LLVMBuildCast(gBuilder, LLVMPtrToInt, left_value, long_type, "ptrToInt");

            LLVMValueRef right_value;
            if(type_identify_with_class_name(right_type, "long")) {
                right_value = rvalue.value;
            }
            else {
                if(right_type->mPointerNum > 0 || right_type->mArrayDimentionNum > 0) {
                    right_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue.value, long_type, "sext");
                }
                else {
                    right_value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue.value, long_type, "sext");
                }
            }

            int alignment = 0;
            uint64_t alloc_size = get_size_from_node_type(left_type, &alignment);

            LLVMValueRef alloc_size_value = LLVMConstInt(long_type, alloc_size, FALSE);

            right_value = LLVMBuildMul(gBuilder, right_value, alloc_size_value, "mul");

            LLVMValueRef value = LLVMBuildSub(gBuilder, left_value2, right_value, "subtmp");
            value = LLVMBuildCast(gBuilder, LLVMIntToPtr, value, LLVMPointerType(llvm_left_type,0), "IntToPtrF");
            LLVMBuildStore(gBuilder, value, lvalue.address);

            sNodeType* left_type2 = clone_node_type(left_type);
            left_type2->mPointerNum++;

            LVALUE llvm_value;
            llvm_value.value = left_value2;
            llvm_value.type = clone_node_type(left_type2);
            llvm_value.address = NULL;
            llvm_value.var = NULL;

            push_value_to_stack_ptr(&llvm_value, info);

            info->type = clone_node_type(left_type2);
        }
        else {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }

            LLVMValueRef address = lvalue.value;
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadC");
            LLVMValueRef add_rvalue = rvalue.value;

            LLVMValueRef value = LLVMBuildSub(gBuilder, add_lvalue, add_rvalue, "sub");

            LLVMBuildStore(gBuilder, value, address);

            LVALUE llvm_value;
            llvm_value.value = add_lvalue;
            llvm_value.type = clone_node_type(left_type);
            llvm_value.address = NULL;
            llvm_value.var = NULL;

            push_value_to_stack_ptr(&llvm_value, info);

            info->type = clone_node_type(left_type);
        }
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;

        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);
        
        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadD");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value = LLVMBuildSub(gBuilder, add_lvalue, add_rvalue, "add");

        LLVMBuildStore(gBuilder, value, address);

        LVALUE llvm_value;
        llvm_value.value = add_lvalue;
        llvm_value.type = clone_node_type(left_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;

        push_value_to_stack_ptr(&llvm_value, info);

        info->type = clone_node_type(left_type);
    }

    info->type = result_type;

    return TRUE;
}

unsigned int sNodeTree_create_equal_plus(unsigned int left_node, unsigned int right_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEqualPlus;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = right_node;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_equal_plus(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    BOOL derefference = gNodes[left_node].mNodeType == kNodeTypeDerefference;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = gNodes[node].mRight;

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    sNodeType* result_type = clone_node_type(right_type);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(derefference && left_type->mPointerNum == 0) {
            LLVMValueRef address = lvalue.value;

            LLVMTypeRef llvm_left_type = create_llvm_type_from_node_type(left_type);

            LLVMTypeRef long_type = create_llvm_type_with_class_name("long");

            LLVMValueRef left_value = address;
            LLVMValueRef left_value2 = LLVMBuildCast(gBuilder, LLVMPtrToInt, left_value, long_type, "ptrToIntZZ");

            LLVMValueRef right_value;
            if(type_identify_with_class_name(right_type, "long")) {
                right_value = rvalue.value;
            }
            else {
                if(right_type->mPointerNum > 0 || right_type->mArrayDimentionNum > 0) {
                    right_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue.value, long_type, "ptToIntJJ");
                }
                else {
                    right_value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue.value, long_type, "sext");
                }
            }

            int alignment = 0;
            uint64_t alloc_size = get_size_from_node_type(left_type, &alignment);

            LLVMValueRef alloc_size_value = LLVMConstInt(long_type, alloc_size, FALSE);

            right_value = LLVMBuildMul(gBuilder, right_value, alloc_size_value, "mult");

            LLVMValueRef value = LLVMBuildAdd(gBuilder, left_value2, right_value, "add");
            rvalue.value = value;
            value = LLVMBuildCast(gBuilder, LLVMIntToPtr, value, LLVMPointerType(llvm_left_type,0), "IntToPtrG");
            LLVMBuildStore(gBuilder, value, lvalue.address);
        }
        else {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }

            LLVMValueRef address = lvalue.value;
            
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadD");
            LLVMValueRef add_rvalue = rvalue.value;

            LLVMValueRef value = LLVMBuildAdd(gBuilder, add_lvalue, add_rvalue, "add");
            
            rvalue.value = value;

            LLVMBuildStore(gBuilder, value, address);
        }
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;
        
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadE");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value = LLVMBuildAdd(gBuilder, add_lvalue, add_rvalue, "add");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }
    
    push_value_to_stack_ptr(&rvalue, info);

    info->type = clone_node_type(right_type);

    return TRUE;
}

unsigned int sNodeTree_create_equal_minus(unsigned int left_node, unsigned int right_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEqualMinus;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = right_node;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_equal_minus(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;
    BOOL derefference = gNodes[left_node].mNodeType == kNodeTypeDerefference;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = gNodes[node].mRight;

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(derefference && left_type->mPointerNum == 0) {
            LLVMValueRef address = lvalue.value;

            LLVMTypeRef llvm_left_type = create_llvm_type_from_node_type(left_type);

            LLVMTypeRef long_type = create_llvm_type_with_class_name("long");

            LLVMValueRef left_value = address;
            LLVMValueRef left_value2 = LLVMBuildCast(gBuilder, LLVMPtrToInt, left_value, long_type, "castAJ");

            LLVMValueRef right_value;
            if(type_identify_with_class_name(right_type, "long")) {
                right_value = rvalue.value;
            }
            else {
                if(right_type->mPointerNum > 0 || right_type->mArrayDimentionNum > 0) {
                    right_value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue.value, long_type, "ptrToIntL");
                }
                else {
                    right_value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue.value, long_type, "sext");
                }
            }

            int alignment = 0;
            uint64_t alloc_size = get_size_from_node_type(left_type, &alignment);

            LLVMValueRef alloc_size_value = LLVMConstInt(long_type, alloc_size, FALSE);

            right_value = LLVMBuildMul(gBuilder, right_value, alloc_size_value, "mul");

            LLVMValueRef value = LLVMBuildSub(gBuilder, left_value2, right_value, "sub");
            value = LLVMBuildCast(gBuilder, LLVMIntToPtr, value, LLVMPointerType(llvm_left_type,0), "IntToPtrH");
            rvalue.value = value;
            LLVMBuildStore(gBuilder, value, lvalue.address);
        }
        else {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }

            LLVMValueRef address = lvalue.value;

            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);
            LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadF");
            LLVMValueRef add_rvalue = rvalue.value;

            LLVMValueRef value = LLVMBuildSub(gBuilder, add_lvalue, add_rvalue, "sub");
            
            rvalue.value = value;

            LLVMBuildStore(gBuilder, value, address);
        }
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadG");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value = LLVMBuildSub(gBuilder, add_lvalue, add_rvalue, "subtmp");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }

    push_value_to_stack_ptr(&rvalue, info);

    info->type = clone_node_type(right_type);

    return TRUE;
}


unsigned int sNodeTree_create_equal_mult(unsigned int left_node, unsigned int right_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEqualMult;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = right_node;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_equal_mult(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = gNodes[node].mRight;

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.value;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadH");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value = LLVMBuildMul(gBuilder, add_lvalue, add_rvalue, "mult");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadI");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value = LLVMBuildMul(gBuilder, add_lvalue, add_rvalue, "multmp");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }

    push_value_to_stack_ptr(&rvalue, info);

    info->type = clone_node_type(right_type);

    return TRUE;
}


unsigned int sNodeTree_create_equal_div(unsigned int left_node, unsigned int right_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEqualDiv;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = right_node;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_equal_div(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = gNodes[node].mRight;

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.value;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadJ");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;

        if(left_type->mUnsigned) {
            value = LLVMBuildUDiv(gBuilder, add_lvalue, add_rvalue, "div");
        }
        else {
            value = LLVMBuildSDiv(gBuilder, add_lvalue, add_rvalue, "div");
        }
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadK");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;

        if(left_type->mUnsigned) {
            value = LLVMBuildUDiv(gBuilder, add_lvalue, add_rvalue, "div");
        }
        else {
            value = LLVMBuildSDiv(gBuilder, add_lvalue, add_rvalue, "div");
        }
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }

    push_value_to_stack_ptr(&rvalue, info);

    info->type = clone_node_type(right_type);

    return TRUE;
}

unsigned int sNodeTree_create_equal_mod(unsigned int left_node, unsigned int right_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEqualMod;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = right_node;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_equal_mod(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = gNodes[node].mRight;

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.value;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadL");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        if(left_type->mUnsigned) {
            value = LLVMBuildURem(gBuilder, add_lvalue, add_rvalue, "rem");
        }
        else {
            value = LLVMBuildSRem(gBuilder, add_lvalue, add_rvalue, "rem");
        }
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }
    else {
/*
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }
*/
        if(is_left_type_bigger_size(left_type, right_type)) {
            if(auto_cast_posibility(left_type, right_type, TRUE)) {
                if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }
        else {
            if(auto_cast_posibility(right_type, left_type, TRUE)) {
                if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
                {
                    compile_err_msg(info, "Cast failed");
                    return TRUE;
                }
            }
        }

        LLVMValueRef address = lvalue.address;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadM");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        if(left_type->mUnsigned) {
            value = LLVMBuildURem(gBuilder, add_lvalue, add_rvalue, "rem");
        }
        else {
            value = LLVMBuildSRem(gBuilder, add_lvalue, add_rvalue, "rem");
        }
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }

    push_value_to_stack_ptr(&rvalue, info);

    info->type = clone_node_type(right_type);

    return TRUE;
}

unsigned int sNodeTree_create_equal_lshift(unsigned int left_node, unsigned int right_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEqualLShift;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = right_node;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_equal_lshift(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = gNodes[node].mRight;

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.value;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadN");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        value = LLVMBuildShl(gBuilder, add_lvalue, add_rvalue, "lshift");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;

        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);
        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadO");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        value = LLVMBuildShl(gBuilder, add_lvalue, add_rvalue, "lshift");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }

    push_value_to_stack_ptr(&rvalue, info);

    info->type = clone_node_type(right_type);

    return TRUE;
}

unsigned int sNodeTree_create_equal_rshift(unsigned int left_node, unsigned int right_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEqualRShift;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = right_node;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_equal_rshift(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = gNodes[node].mRight;

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.value;

        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);
        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadP");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        value = LLVMBuildAShr(gBuilder, add_lvalue, add_rvalue, "rshift");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;

        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);
        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadQ");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        value = LLVMBuildAShr(gBuilder, add_lvalue, add_rvalue, "rshift");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }

    push_value_to_stack_ptr(&rvalue, info);

    info->type = clone_node_type(right_type);

    return TRUE;
}


unsigned int sNodeTree_create_equal_and(unsigned int left_node, unsigned int right_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEqualAnd;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = right_node;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_equal_and(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = gNodes[node].mRight;

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.value;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadR");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        value = LLVMBuildAnd(gBuilder, add_lvalue, add_rvalue, "andtmp");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadS");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        value = LLVMBuildAnd(gBuilder, add_lvalue, add_rvalue, "and");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }

    push_value_to_stack_ptr(&rvalue, info);

    info->type = clone_node_type(right_type);

    return TRUE;
}

unsigned int sNodeTree_create_equal_xor(unsigned int left_node, unsigned int right_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEqualXor;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = right_node;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_equal_xor(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    if(!compile(left_node, info)) {
        return FALSE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = gNodes[node].mRight;

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(auto_cast_posibility(right_type, left_type, TRUE)) {
            if(!cast_right_type_to_left_type(right_type, &left_type, &lvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.value;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadT");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        value = LLVMBuildXor(gBuilder, add_lvalue, add_rvalue, "xortmp");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadU");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        value = LLVMBuildXor(gBuilder, add_lvalue, add_rvalue, "xortmp");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }

    push_value_to_stack_ptr(&rvalue, info);

    info->type = clone_node_type(right_type);

    return TRUE;
}

unsigned int sNodeTree_create_equal_or(unsigned int left_node, unsigned int right_node, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeEqualOr;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = left_node;
    gNodes[node].mRight = right_node;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_equal_or(unsigned int node, sCompileInfo* info)
{
    unsigned int left_node = gNodes[node].mLeft;

    if(!compile(left_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* left_type = info->type;

    LVALUE lvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    unsigned int right_node = gNodes[node].mRight;

    if(!compile(right_node, info)) {
        return FALSE;
    }
    
    if(!check_nullable_type(NULL, info->type, info)) {
        return TRUE;
    }

    sNodeType* right_type = info->type;

    LVALUE rvalue = *get_value_from_stack(-1);
    dec_stack_ptr(1, info);

    if(left_type->mPointerNum > 0) {
        left_type->mPointerNum--;

        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.value;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadV");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        value = LLVMBuildOr(gBuilder, add_lvalue, add_rvalue, "ortmp");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }
    else {
        if(auto_cast_posibility(left_type, right_type, TRUE)) {
            if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
            {
                compile_err_msg(info, "Cast failed");
                return TRUE;
            }
        }

        LLVMValueRef address = lvalue.address;
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        LLVMValueRef add_lvalue = LLVMBuildLoad2(gBuilder, llvm_type, address, "loadW");
        LLVMValueRef add_rvalue = rvalue.value;

        LLVMValueRef value;
        value = LLVMBuildOr(gBuilder, add_lvalue, add_rvalue, "ortmp");
        
        rvalue.value = value;

        LLVMBuildStore(gBuilder, value, address);
    }
    
    push_value_to_stack_ptr(&rvalue, info);

    info->type = clone_node_type(right_type);

    return TRUE;
}

