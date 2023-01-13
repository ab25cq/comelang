#include "common.h"

unsigned int sNodeTree_create_function(char* fun_name, char* asm_fname, sParserParam* params, int num_params, sNodeType* result_type, MANAGED struct sNodeBlockStruct* node_block, BOOL lambda_, sVarTable* block_var_table, char* struct_name, BOOL operator_fun, BOOL constructor_fun, BOOL simple_lambda_param, sParserInfo* info, BOOL generics_function, BOOL var_arg, int version, BOOL finalize, int generics_fun_num, char* simple_fun_name, int sline, BOOL immutable_)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeFunction;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    xstrncpy(gNodes[node].uValue.sFunction.mName, fun_name, VAR_NAME_MAX);
    xstrncpy(gNodes[node].uValue.sFunction.mAsmName, asm_fname, VAR_NAME_MAX);
    xstrncpy(gNodes[node].uValue.sFunction.mSimpleName, simple_fun_name, VAR_NAME_MAX);

    int i;
    for(i=0; i<num_params; i++) {
        gNodes[node].uValue.sFunction.mParams[i] = params[i]; // copy struct
        gNodes[node].uValue.sFunction.mParams[i].mType = clone_node_type(params[i].mType);
    }

    gNodes[node].uValue.sFunction.mNumParams = num_params;
    gNodes[node].uValue.sFunction.mResultType = clone_node_type(result_type);
    if(info->mInClass) {
        gNodes[node].uValue.sFunction.mResultType->mStatic = TRUE;
    }
    
    gNodes[node].uValue.sFunction.mNodeBlock = MANAGED node_block;
    gNodes[node].uValue.sFunction.mLambda = lambda_;
    gNodes[node].uValue.sFunction.mVarTable = block_var_table;
    gNodes[node].uValue.sFunction.mVarArg = var_arg;
    gNodes[node].uValue.sFunction.mVersion = version;
    gNodes[node].uValue.sFunction.mFinalize = finalize;
    gNodes[node].uValue.sFunction.mGenericsFunNum = generics_fun_num;
    gNodes[node].uValue.sFunction.mImmutable = immutable_;

    if(struct_name && strcmp(struct_name, "") != 0) {
        xstrncpy(gNodes[node].uValue.sFunction.mStructName, struct_name, VAR_NAME_MAX);
    }
    else {
        xstrncpy(gNodes[node].uValue.sFunction.mStructName, "", VAR_NAME_MAX);
    }

    gNodes[node].uValue.sFunction.mOperatorFun = operator_fun;
    gNodes[node].uValue.sFunction.mSimpleLambdaParam = simple_lambda_param;
    gNodes[node].uValue.sFunction.mGenericsFunction = generics_function; 
    gNodes[node].uValue.sFunction.mConstructorFun = constructor_fun;

    return node;
}

static BOOL is_method_generics_function(sFunction* fun)
{
    if(fun->mResultType == NULL) {
        return TRUE;
    }
    if(is_method_generics_type(fun->mResultType))
    {
        return TRUE;
    }
    int i;
    for(i=0; i<fun->mNumParams; i++) {
        sNodeType* fun_param_type = fun->mParamTypes[i];
        
        if(fun_param_type == NULL) {
            return TRUE;
        }
        
        if(is_method_generics_type(fun_param_type))
        {
            return TRUE;
        }
    }
    
    return FALSE;
}

void call_come_gc_final(sCompileInfo* info)
{
    if(!gNCGC && strcmp(gFunctionName, "main") == 0 && !gExternC) {
        if(gNCDebug) {
            setNullCurrentDebugLocation(info->sline, info);
        }
        LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, "come_gc_final");
        
        if(llvm_fun != NULL) {
            int num_params = 0;
            
            sNodeType* result_type = create_node_type_with_class_name("void");
    
            LLVMTypeRef llvm_param_types[PARAMS_MAX];
    
            LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
            
            BOOL var_arg = FALSE;
    
            LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
            
            LLVMBuildCall2(gBuilder, function_type, llvm_fun, NULL, num_params, "");
        }
        else {
            fprintf(stderr, "come_gc_init not found\n");
            exit(2);
        }
    }
}

BOOL compile_function(unsigned int node, sCompileInfo* info)
{
    LLVMValueRef inline_result_variable = info->inline_result_variable;
    LLVMBasicBlockRef current_block_before = info->current_block; //LLVMGetLastBasicBlock(gFunction);

    int thread_num = gThreadNum;
    gThreadNum = 0;

    /// get result type ///
    sNodeType* result_type = clone_node_type(gNodes[node].uValue.sFunction.mResultType);

    char fun_name[VAR_NAME_MAX];
    xstrncpy(fun_name, gNodes[node].uValue.sFunction.mName, VAR_NAME_MAX);
    
    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);
    
    char asm_fun_name[VAR_NAME_MAX];
    xstrncpy(asm_fun_name, gNodes[node].uValue.sFunction.mAsmName, VAR_NAME_MAX);

    char simple_fun_name[VAR_NAME_MAX];
    xstrncpy(simple_fun_name, gNodes[node].uValue.sFunction.mSimpleName, VAR_NAME_MAX);

    BOOL var_arg = gNodes[node].uValue.sFunction.mVarArg;
    int version = gNodes[node].uValue.sFunction.mVersion;
    int generics_fun_num = gNodes[node].uValue.sFunction.mGenericsFunNum;

    /// rename variables ///
    int num_params = gNodes[node].uValue.sFunction.mNumParams;
    BOOL lambda_ = gNodes[node].uValue.sFunction.mLambda;
    sVarTable* block_var_table = gNodes[node].uValue.sFunction.mVarTable;

    BOOL finalize = gNodes[node].uValue.sFunction.mFinalize;

    sNodeBlock* node_block = gNodes[node].uValue.sFunction.mNodeBlock;
    char* struct_name = gNodes[node].uValue.sFunction.mStructName;
    BOOL immutable_ = gNodes[node].uValue.sFunction.mImmutable;

    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);

    int i;
    for(i=0; i<num_params; i++) {
        params[i] = gNodes[node].uValue.sFunction.mParams[i];
    }
    
    sFunction* fun = get_function_from_table(fun_name);
    
    if(fun && !fun->mGenericsFunction) 
    {
        BOOL method_generics_function = is_method_generics_function(fun);
        BOOL lambda_function = memcmp(fun_name, "lambda", strlen("lambda")) == 0;
        
        
        if(!method_generics_function && !lambda_function) {
/*
            if(!fun->mExtern) {
                compile_err_msg(info, "Multiple function definition %s", fun_name);
                return FALSE;
            }
*/
            if(fun->mResultType == NULL) {
                compile_err_msg(info, "invalid function result type");
                return FALSE;
            }
            if(result_type == NULL) {
                compile_err_msg(info, "invalid function result type");
                return FALSE;
            }
            if(!type_equalability(fun->mResultType, result_type)) {
                compile_err_msg(info, "Different extern function and definition of the function %s", fun_name);
                show_node_type_one_line(fun->mResultType);
                show_node_type_one_line(result_type);
                return FALSE;
            }
            if(num_params == fun->mNumParams) {
                for(i=0; i<num_params; i++) {
                    sNodeType* old_fun_param_type = fun->mParamTypes[i];
                    sNodeType* new_fun_param_type = params[i].mType;
                    
                    if(!type_equalability(old_fun_param_type, new_fun_param_type))
                    {
                        compile_err_msg(info, "Different extern function and definition of the function %s", fun_name);
                        show_node_type_one_line(old_fun_param_type);
                        show_node_type_one_line(new_fun_param_type);
                        return FALSE;
                    }
                }
            }
            else {
                compile_err_msg(info, "Different extern function param number and definition of the function param number %s", fun_name);
                return TRUE;
            }
        }
    }

    LLVMBasicBlockRef current_block = NULL;

    if(lambda_) {
        current_block = info->current_block; //LLVMGetLastBasicBlock(gFunction);
    }

    BOOL in_lambda_function = info->in_lambda_function;
    info->in_lambda_function = lambda_;
    info->lambda_sline = info->sline;
    
    sNodeBlock* function_node_block = info->function_node_block;
    info->function_node_block = node_block;

    sNodeType* param_types[PARAMS_MAX];
    LLVMTypeRef llvm_param_types[PARAMS_MAX];
    char param_names[PARAMS_MAX][VAR_NAME_MAX];
    for(i=0; i<num_params; i++) {
        param_types[i] = params[i].mType;

        if(is_typeof_type(param_types[i]))
        {
            if(!solve_typeof(&param_types[i], info))
            {
                compile_err_msg(info, "Can't solve typeof types");
                show_node_type(param_types[i]);
                info->function_node_block = function_node_block;
                return TRUE;
            }
        }
        
        if(!create_generics_struct_type(CLASS_NAME(param_types[i]->mClass), param_types[i])) {
            compile_err_msg(info, "invalid type %s(5)", param_names[i]);
            info->function_node_block = function_node_block;
            return TRUE;
        }

        llvm_param_types[i] = create_llvm_type_from_node_type(params[i].mType);

        if(type_identify_with_class_name(param_types[i], "__builtin_va_list") || type_identify_with_class_name(param_types[i], "va_list")) {
            llvm_param_types[i] = LLVMPointerType(llvm_param_types[i], 0);
        }

        xstrncpy(param_names[i], params[i].mName, VAR_NAME_MAX);
    }

    BOOL static_ = result_type->mStatic;
    
    if(version > 0) {
        char new_fun_name[VAR_NAME_MAX];
        snprintf(new_fun_name, VAR_NAME_MAX, "%s_v%d", fun_name, version);
        xstrncpy(fun_name, new_fun_name, VAR_NAME_MAX);
    }

    BOOL result_type_is_method_generics = FALSE;
    if(is_method_generics_type(result_type)) {
        result_type_is_method_generics = TRUE;
        result_type = create_node_type_with_class_name("void");
        result_type->mMethodGenericsResult = TRUE;
    }

    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
    LLVMTypeRef  llvm_fun_type;
    if(num_params == 0) {
        llvm_fun_type = LLVMFunctionType(llvm_result_type, NULL, 0, var_arg);
    }
    else {
        llvm_fun_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
    }

    LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name);
    
    if(llvm_fun == NULL) {
        if(strcmp(asm_fun_name, "") == 0) {
            llvm_fun = LLVMAddFunction(gModule, fun_name, llvm_fun_type);
        }
        else {
            llvm_fun = LLVMAddFunction(gModule, asm_fun_name, llvm_fun_type);
        }
    }

    if(static_) {
        LLVMSetLinkage(llvm_fun, LLVMInternalLinkage);
    }

    LLVMValueRef function = gFunction;
    gFunction = llvm_fun;

    char fun_name_before[VAR_NAME_MAX];
    xstrncpy(fun_name_before, gFunctionName, VAR_NAME_MAX);
    xstrncpy(gFunctionName, fun_name, VAR_NAME_MAX);

    LLVMBasicBlockRef entry = LLVMAppendBasicBlockInContext(gContext, llvm_fun, "entry");
    llvm_change_block(entry, info);

    LLVMBasicBlockRef defer_block = info->defer_block;

    BOOL empty_function = info->empty_function;
    info->empty_function = node_block->mNumNodes == 0;

    char* block_text = NULL;

    char* param_names2[PARAMS_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        param_names2[i] = param_names[i];
    }
    
    char param_default_values[PARAMS_MAX][METHOD_DEFAULT_PARAM_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        xstrncpy(param_default_values[i], params[i].mDefaultValue, METHOD_DEFAULT_PARAM_MAX);
    }
    
    char* param_default_values2[PARAMS_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        param_default_values2[i] = param_default_values[i];
    }

    BOOL param_labels[PARAMS_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        param_labels[i] = params[i].mLabel;
    }

    BOOL generics_function = FALSE;
    BOOL flag_asm_fun_name = FALSE;
    if(!add_function_to_table(fun_name, num_params, param_names2, param_types, param_default_values2, param_labels, result_type, llvm_fun, block_text, generics_function, var_arg, 0, NULL, 0, NULL, FALSE, asm_fun_name, TRUE, node_block->mSource.mBuf, info->sname, info->sline, immutable_, flag_asm_fun_name, llvm_fun_type)) {
        fprintf(stderr, "overflow function table\n");
        info->function_node_block = function_node_block;
        return FALSE;
    }

    fun = get_function_from_table(fun_name);

    sNodeType* come_function_result_type = gComeFunctionResultType;
    gComeFunctionResultType = clone_node_type(fun->mResultType);
    if(is_method_generics_type(result_type)) {
        gComeFunctionResultType->mMethodGenericsResult = TRUE;
    }
    
    if(gNCDebug && !info->in_generics_function && !info->in_inline_function && !info->in_lambda_function && !info->empty_function && !info->in_thread_function && !info->in_automatically_created_function) {
        int sline = gNodes[node].mLine;
        char fname[PATH_MAX];
        xstrncpy(fname, gNodes[node].mSName, PATH_MAX);
        
        createDebugFunctionInfo(fname, sline, fun_name, fun, gFName, info);
        
        LLVMSetSubprogram(llvm_fun, info->function_meta_data);
    }

    for(i=0; i<num_params; i++) {
        LLVMValueRef param = LLVMGetParam(llvm_fun, i);

        char* name = params[i].mName;
        sNodeType* type_ = clone_node_type(params[i].mType);
        
        sVar* var_ = get_variable_from_table(block_var_table, name);
        
        var_->mType->mFunctionParam = TRUE;
        
#ifdef __X86_64_CPU__
        if(type_identify_with_class_name(type_, "__builtin_va_list") || type_identify_with_class_name(type_, "va_list")) 
        {
            type_->mPointerNum++;
        }
#endif

        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(type_);

        if(gNCDebug && !info->in_generics_function && !info->in_inline_function && !info->in_lambda_function && !info->in_thread_function && !info->empty_function && !info->in_automatically_created_function) {
            setCurrentDebugLocation(info->sline, info);
        }
        
        sNodeType* node_type = clone_node_type(type_);
        node_type->mNoArrayPointerNum++;
        
        LLVMTypeRef llvm_type2 = create_llvm_type_from_node_type(node_type);
        
        LLVMValueRef value = LLVMBuildAlloca(gBuilder, llvm_type, name);
#if defined(__AARCH64_CPU__) && !defined(__ANDROID__)
        if(type_identify_with_class_name(type_, "__builtin_va_list") || type_identify_with_class_name(type_, "va_list")) 
        {
            LVALUE llvm_value;
            llvm_value.value = value;
            llvm_value.type = clone_node_type(type_);
            llvm_value.address = value;
            llvm_value.var = NULL;
            
            var_->mLLVMValue = llvm_value;
        }
        else {
            LLVMValueRef value2 = LLVMBuildAlloca(gBuilder, llvm_type2, name);
            
            setNullCurrentDebugLocation(info->sline, info);
            LLVMBuildStore(gBuilder, param, value);
            
            setNullCurrentDebugLocation(info->sline, info);
            LLVMBuildStore(gBuilder, value, value2);
    
            setNullCurrentDebugLocation(info->sline, info);
            
            LVALUE llvm_value;
            llvm_value.value = value;
            llvm_value.type = clone_node_type(type_);
            llvm_value.address = value2;
            llvm_value.var = NULL;
            
            var_->mLLVMValue = llvm_value;
        }
#else
        LLVMValueRef value2 = LLVMBuildAlloca(gBuilder, llvm_type2, name);
        
        setNullCurrentDebugLocation(info->sline, info);
        LLVMBuildStore(gBuilder, param, value);
        
        setNullCurrentDebugLocation(info->sline, info);
        LLVMBuildStore(gBuilder, value, value2);

        setNullCurrentDebugLocation(info->sline, info);
        
        LVALUE llvm_value;
        llvm_value.value = value;
        llvm_value.type = clone_node_type(type_);
        llvm_value.address = value2;
        llvm_value.var = NULL;
        
        var_->mLLVMValue = llvm_value;
#endif
    }

    sNodeType* return_result_type = info->return_result_type;
    info->return_result_type = create_node_type_with_class_name("void");
    
    if(strcmp(fun_name, "main") == 0 && !gExternC) {
        if(gNCGC) {
            if(gNCDebug) {
                setNullCurrentDebugLocation(info->sline, info);
            }
            LLVMValueRef llvm_fun2 = LLVMGetNamedFunction(gModule, "come_boehm_gc_init");
            
            if(llvm_fun2 != NULL) {
                int num_params = 0;
                
                sNodeType* result_type = create_node_type_with_class_name("void");
        
                LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
                LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
                
                BOOL var_arg = FALSE;
        
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                
                LLVMBuildCall2(gBuilder, function_type, llvm_fun2, NULL, num_params, "");
            }
            else {
                fprintf(stderr, "come_boehm_gc_init not found\n");
                exit(2);
            }
        }
        else {
            if(gNCDebug) {
                setNullCurrentDebugLocation(info->sline, info);
            }
            LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, "come_gc_init");
            
            if(llvm_fun != NULL) {
                int num_params = 0;
                
                sNodeType* result_type = create_node_type_with_class_name("void");
        
                LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
                LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
                
                BOOL var_arg = FALSE;
        
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                
                LLVMBuildCall2(gBuilder, function_type, llvm_fun, NULL, num_params, "");
            }
            else {
                fprintf(stderr, "come_gc_init not found\n");
                exit(2);
            }
        }
    }

    BOOL force_hash_result = FALSE;
    if(!compile_block(node_block, force_hash_result, info)) {
        info->function_node_block = function_node_block;
        return FALSE;
    }

    if(gNCType && node_block->mTerminated) {
        if(!gNCGlobal && !gNCFunction && !gNCClass && !gNCTypedef) {
            //show_node_type(info->type);
        }
        info->function_node_block = function_node_block;
        return TRUE;
    }

    if(type_identify_with_class_name(result_type, "void") && result_type->mPointerNum == 0) {
        call_come_gc_final(info);
        
        if(info->defer_block) {
            free_right_value_objects(info);
            LLVMBuildBr(gBuilder, info->defer_block);
            llvm_change_block(info->defer_block, info);
        }
        

        if(info->empty_function) {
            LLVMSetCurrentDebugLocation(gBuilder, NULL);
        }

        LLVMBuildRet(gBuilder, NULL);
    }
    else {
        if(!info->last_expression_is_return) {
            call_come_gc_final(info);
            if(info->defer_block) {
                free_right_value_objects(info);
                LLVMBuildBr(gBuilder, info->defer_block);
                llvm_change_block(info->defer_block, info);
            }

            if(gNCDebug && !info->in_generics_function && !info->in_inline_function && !info->in_lambda_function && !info->in_thread_function && !info->empty_function && !info->in_automatically_created_function) {
                setCurrentDebugLocation(info->sline, info);
            }
            if(info->empty_function) {
                LLVMSetCurrentDebugLocation(gBuilder, NULL);
            }
            
            if(((result_type->mClass->mFlags & CLASS_FLAGS_STRUCT) || (result_type->mClass->mFlags & CLASS_FLAGS_UNION)) && result_type->mPointerNum == 0) {
                sNodeType* node_type = clone_node_type(result_type);
                LLVMTypeRef llvm_type = create_llvm_type_from_node_type(node_type);
                
                LVALUE llvm_value;
                
                LLVMValueRef alloca_value = LLVMBuildAlloca(gBuilder, llvm_type, "result_object");
                
                llvm_value.value = LLVMBuildLoad(gBuilder, alloca_value, "result_object");
                llvm_value.type = clone_node_type(result_type);
                llvm_value.address = alloca_value;
                llvm_value.var = NULL;
                
                if(!cast_right_type_to_left_type(result_type, &node_type, &llvm_value, info)) {
                    compile_err_msg(info, "result type can't be casted");
                    info->function_node_block = function_node_block;
                    return FALSE;
                }
    
                LLVMBuildRet(gBuilder, llvm_value.value);
            }
            else {
                LVALUE llvm_value;
    
                sNodeType* node_type = create_node_type_with_class_name("int");
            
                llvm_value.value = create_null_value(node_type);
                llvm_value.type = clone_node_type(node_type);
                llvm_value.address = NULL;
                llvm_value.var = NULL;
                
                if(!cast_right_type_to_left_type(result_type, &node_type, &llvm_value, info)) {
                    compile_err_msg(info, "result type can't be casted");
                    info->function_node_block = function_node_block;
                    return FALSE;
                }
    
                LLVMBuildRet(gBuilder, llvm_value.value);
            }
        }
    }

    if(gNCDebug && !info->in_generics_function && !info->empty_function &&info->in_inline_function && info->in_lambda_function && !info->in_thread_function && !info->in_automatically_created_function) {
        finishDebugFunctionInfo();
    }

    if(lambda_) {
        sNodeType* lambda_type = create_node_type_with_class_name("lambda");
        lambda_type->mPointerNum++;

        for(i=0; i<num_params; i++) {
            sNodeType* param_type = param_types[i];

            lambda_type->mParamTypes[i] = param_type;
        }

        lambda_type->mResultType = clone_node_type(result_type);
        lambda_type->mNumParams = num_params;

        LVALUE llvm_value;
        llvm_value.value = llvm_fun;
        llvm_value.type = clone_node_type(lambda_type);
        llvm_value.address = NULL;
        llvm_value.var = NULL;

        push_value_to_stack_ptr(&llvm_value, info);

        info->type = clone_node_type(lambda_type);
    }
    else {
        info->type = create_node_type_with_class_name("void");
    }

    gFunction = function;
    xstrncpy(gFunctionName, fun_name_before, VAR_NAME_MAX);
    gComeFunctionResultType = come_function_result_type;
    info->in_lambda_function = in_lambda_function;

    if(lambda_) {
        llvm_change_block(current_block, info);
    }

    gThreadNum = thread_num;
    
    sNodeType* return_result_type2 = clone_node_type(info->return_result_type);

    info->return_result_type = return_result_type;
    info->defer_block = defer_block;
    info->empty_function = empty_function;
    
    if(result_type_is_method_generics) {
        LLVMDeleteFunction(llvm_fun);
        gNodes[node].uValue.sFunction.mResultType = clone_node_type(return_result_type2);
        
        return compile(node, info);
    }
    
    info->function_node_block = function_node_block;
    
    llvm_change_block(current_block_before, info);
    info->inline_result_variable = inline_result_variable;

    return TRUE;
}

unsigned int sNodeTree_create_generics_function(char* fun_name, sParserParam* params, int num_params, sNodeType* result_type, MANAGED char* block_text, char* struct_name, char* sname, int sline, BOOL var_arg, int version, BOOL immutable_, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeGenericsFunction;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    xstrncpy(gNodes[node].uValue.sFunction.mName, fun_name, VAR_NAME_MAX);

    int i;
    for(i=0; i<num_params; i++) {
        gNodes[node].uValue.sFunction.mParams[i] = params[i]; // copy struct
        gNodes[node].uValue.sFunction.mParams[i].mType = clone_node_type(params[i].mType);
    }

    gNodes[node].uValue.sFunction.mNumParams = num_params;
    gNodes[node].uValue.sFunction.mResultType = clone_node_type(result_type);

    gNodes[node].uValue.sFunction.mBlockText = MANAGED block_text;

    if(struct_name) {
        xstrncpy(gNodes[node].uValue.sFunction.mStructName, struct_name, VAR_NAME_MAX);
    }
    else {
        xstrncpy(gNodes[node].uValue.sFunction.mStructName, "", VAR_NAME_MAX);
    }

    gNodes[node].uValue.sFunction.mNumGenerics = info->mNumGenerics;

    for(i=0; i<info->mNumGenerics; i++) {
        xstrncpy(gNodes[node].uValue.sFunction.mGenericsTypeNames[i], info->mGenericsTypeNames[i], VAR_NAME_MAX);
    }

    gNodes[node].uValue.sFunction.mNumMethodGenerics = info->mNumMethodGenerics;
    gNodes[node].uValue.sFunction.mSLine = sline;
    gNodes[node].uValue.sFunction.mVarArg = var_arg;
    gNodes[node].uValue.sFunction.mVersion = version;
    gNodes[node].uValue.sFunction.mImmutable = immutable_;

    for(i=0; i<info->mNumMethodGenerics; i++) {
        xstrncpy(gNodes[node].uValue.sFunction.mMethodGenericsTypeNames[i], info->mMethodGenericsTypeNames[i], VAR_NAME_MAX);
    }

    return node;
}

BOOL compile_generics_function(unsigned int node, sCompileInfo* info)
{
    LLVMValueRef inline_result_variable = info->inline_result_variable;
    int version = gNodes[node].uValue.sFunction.mVersion;

    /// rename variables ///
    char fun_name[VAR_NAME_MAX];
    xstrncpy(fun_name, gNodes[node].uValue.sFunction.mName, VAR_NAME_MAX);
    int num_params = gNodes[node].uValue.sFunction.mNumParams;
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
    BOOL var_arg = gNodes[node].uValue.sFunction.mVarArg;
    BOOL immutable_ = gNodes[node].uValue.sFunction.mImmutable;
    
    //int sline = info->sline;

    int i;
    for(i=0; i<num_params; i++) {
        params[i] = gNodes[node].uValue.sFunction.mParams[i];
    }

    sNodeType* result_type = gNodes[node].uValue.sFunction.mResultType;

    char* block_text = gNodes[node].uValue.sFunction.mBlockText;
    char struct_name[VAR_NAME_MAX];
    xstrncpy(struct_name, gNodes[node].uValue.sFunction.mStructName, VAR_NAME_MAX);
    char sname[PATH_MAX];
    xstrncpy(sname, gNodes[node].mSName, PATH_MAX);
    int sline = gNodes[node].uValue.sFunction.mSLine;
    
    int num_generics = gNodes[node].uValue.sFunction.mNumGenerics;

    char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];
    for(i=0; i<num_generics; i++) {
        xstrncpy(generics_type_names[i], gNodes[node].uValue.sFunction.mGenericsTypeNames[i], VAR_NAME_MAX);
    }
    
    int num_method_generics = gNodes[node].uValue.sFunction.mNumMethodGenerics;
    char mgenerics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];
    for(i=0; i<num_generics; i++) {
        xstrncpy(mgenerics_type_names[i], gNodes[node].uValue.sFunction.mMethodGenericsTypeNames[i], VAR_NAME_MAX);
    }

    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);

    /// go ///
    sNodeType* param_types[PARAMS_MAX];
    char param_names[PARAMS_MAX][VAR_NAME_MAX];

    for(i=0; i<num_params; i++) {
        sNodeType* param_type = params[i].mType;

        xstrncpy(param_names[i], params[i].mName, VAR_NAME_MAX);

        param_types[i] = param_type;
    }

    char real_fun_name[REAL_FUN_NAME_MAX];
    create_real_fun_name(real_fun_name, REAL_FUN_NAME_MAX, fun_name, struct_name);

    /// go ///
    char* param_names2[PARAMS_MAX];
    for(i=0; i<num_params; i++) {
        param_names2[i] = param_names[i];
    }

    char* generics_type_names2[PARAMS_MAX];
    for(i=0; i<num_generics; i++) {
        generics_type_names2[i] = generics_type_names[i];
    }

    char* mgenerics_type_names2[PARAMS_MAX];
    for(i=0; i<num_method_generics; i++) {
        mgenerics_type_names2[i] = mgenerics_type_names[i];
    }
    
    char param_default_values[PARAMS_MAX][METHOD_DEFAULT_PARAM_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        xstrncpy(param_default_values[i], params[i].mDefaultValue, METHOD_DEFAULT_PARAM_MAX);
    }
    
    char* param_default_values2[PARAMS_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        param_default_values2[i] = param_default_values[i];
    }

    BOOL param_labels[PARAMS_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        param_labels[i] = params[i].mLabel;
    }
    
    LLVMValueRef llvm_fun = NULL;
    BOOL generics_function = TRUE;
    BOOL flag_asm_fun_name = FALSE;
    if(!add_function_to_table(real_fun_name, num_params, param_names2, param_types, param_default_values2, param_labels, result_type, llvm_fun, block_text, generics_function, var_arg, num_generics, generics_type_names2, num_method_generics, mgenerics_type_names2, FALSE, NULL, TRUE, block_text, sname, sline, immutable_, flag_asm_fun_name, NULL)) {
        return TRUE;
    }
    
    info->inline_result_variable = inline_result_variable;

    return TRUE;
}

unsigned int sNodeTree_create_inline_function(char* fun_name, sParserParam* params, int num_params, sNodeType* result_type, MANAGED char* block_text, char* struct_name, char* sname, int sline, BOOL var_arg, BOOL immutable_, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeInlineFunction;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    xstrncpy(gNodes[node].uValue.sFunction.mName, fun_name, VAR_NAME_MAX);

    int i;
    for(i=0; i<num_params; i++) {
        gNodes[node].uValue.sFunction.mParams[i] = params[i]; // copy struct
        gNodes[node].uValue.sFunction.mParams[i].mType = clone_node_type(params[i].mType);
    }

    gNodes[node].uValue.sFunction.mNumParams = num_params;
    gNodes[node].uValue.sFunction.mResultType = clone_node_type(result_type);
    gNodes[node].uValue.sFunction.mBlockText = MANAGED block_text;
    gNodes[node].uValue.sFunction.mSLine = sline;
    gNodes[node].uValue.sFunction.mVarArg = var_arg;
    gNodes[node].uValue.sFunction.mImmutable = immutable_;

    if(struct_name) {
        xstrncpy(gNodes[node].uValue.sFunction.mStructName, struct_name, VAR_NAME_MAX);
    }
    else {
        xstrncpy(gNodes[node].uValue.sFunction.mStructName, "", VAR_NAME_MAX);
    }

    gNodes[node].uValue.sFunction.mNumGenerics = info->mNumGenerics;

    for(i=0; i<info->mNumGenerics; i++) {
        xstrncpy(gNodes[node].uValue.sFunction.mGenericsTypeNames[i], info->mGenericsTypeNames[i], VAR_NAME_MAX);
    }

    gNodes[node].uValue.sFunction.mNumMethodGenerics = info->mNumMethodGenerics;
    gNodes[node].uValue.sFunction.mSLine = sline;

    for(i=0; i<info->mNumMethodGenerics; i++) {
        xstrncpy(gNodes[node].uValue.sFunction.mMethodGenericsTypeNames[i], info->mMethodGenericsTypeNames[i], VAR_NAME_MAX);
    }

    return node;
}

BOOL compile_inline_function(unsigned int node, sCompileInfo* info)
{
    LLVMValueRef inline_result_variable = info->inline_result_variable;
    
    /// rename variables ///
    char fun_name[VAR_NAME_MAX];
    xstrncpy(fun_name, gNodes[node].uValue.sFunction.mName, VAR_NAME_MAX);
    int num_params = gNodes[node].uValue.sFunction.mNumParams;
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
    BOOL var_arg = gNodes[node].uValue.sFunction.mVarArg;

    int i;
    for(i=0; i<num_params; i++) {
        params[i] = gNodes[node].uValue.sFunction.mParams[i];
    }

    sNodeType* result_type = gNodes[node].uValue.sFunction.mResultType;

    char* block_text = gNodes[node].uValue.sFunction.mBlockText;
    char struct_name[VAR_NAME_MAX];
    xstrncpy(struct_name, gNodes[node].uValue.sFunction.mStructName, VAR_NAME_MAX);
    char sname[PATH_MAX];
    xstrncpy(sname, gNodes[node].mSName, PATH_MAX);
    int sline = gNodes[node].uValue.sFunction.mSLine;
    BOOL immutable_ = gNodes[node].uValue.sFunction.mImmutable;

    int num_generics = gNodes[node].uValue.sFunction.mNumGenerics;

    char generics_type_names[PARAMS_MAX][VAR_NAME_MAX];
    for(i=0; i<num_generics; i++) {
        xstrncpy(generics_type_names[i], gNodes[node].uValue.sFunction.mGenericsTypeNames[i], VAR_NAME_MAX);
    }

    /// go ///
    sNodeType* param_types[PARAMS_MAX];
    char param_names[PARAMS_MAX][VAR_NAME_MAX];

    for(i=0; i<num_params; i++) {
        sNodeType* param_type = params[i].mType;

        xstrncpy(param_names[i], params[i].mName, VAR_NAME_MAX);

        param_types[i] = param_type;
    }

    /// go ///
    LLVMValueRef llvm_fun = NULL;

    char* param_names2[PARAMS_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        param_names2[i] = param_names[i];
    }
    
    char param_default_values[PARAMS_MAX][METHOD_DEFAULT_PARAM_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        xstrncpy(param_default_values[i], params[i].mDefaultValue, METHOD_DEFAULT_PARAM_MAX);
    }
    
    char* param_default_values2[PARAMS_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        param_default_values2[i] = param_default_values[i];
    }

    BOOL param_labels[PARAMS_MAX];
    for(i=0; i<PARAMS_MAX; i++) {
        param_labels[i] = params[i].mLabel;
    }

    BOOL generics_function = FALSE;
    BOOL flag_asm_fun_name = FALSE;
    if(!add_function_to_table(fun_name, num_params, param_names2, param_types, param_default_values2, param_labels, result_type, llvm_fun, block_text, generics_function, var_arg
    , 0, NULL, 0, NULL, FALSE, NULL, TRUE, block_text, info->sname, info->sline, immutable_, flag_asm_fun_name, NULL)) {
        fprintf(stderr, "overflow function table\n");
        return FALSE;
    }
    info->inline_result_variable = inline_result_variable;

    return TRUE;
}

unsigned int sNodeTree_create_method_block(MANAGED char* block, char* block_text_sname, int block_text_sline, sNodeType* result_type, char* current_stack_frame_type_name, sParserInfo* info)
{
    unsigned int node = alloc_node();
    
    gNodes[node].mNodeType = kNodeTypeMethodBlock;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.sMethodBlock.mBlockText = MANAGED block;
    gNodes[node].uValue.sMethodBlock.mBlockTextSName = GC_strdup(block_text_sname);
    gNodes[node].uValue.sMethodBlock.mBlockTextSLine = block_text_sline;
    gNodes[node].uValue.sMethodBlock.mVarTable = info->lv_table;
    //gNodes[node].uValue.sMethodBlock.mVarTable = clone_var_table(info->lv_table);
    gNodes[node].uValue.sMethodBlock.mResultType = result_type;
    gNodes[node].uValue.sMethodBlock.mCurrentStackFrameTypeName = GC_strdup(current_stack_frame_type_name);

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_method_block(unsigned int node, sCompileInfo* info)
{
    LLVMValueRef inline_result_variable = info->inline_result_variable;
    
    char* block_text = gNodes[node].uValue.sMethodBlock.mBlockText;
    sVarTable* lv_table = gNodes[node].uValue.sMethodBlock.mVarTable;
    sNodeType* result_type = gNodes[node].uValue.sMethodBlock.mResultType;

    sFunction* fun = get_function_from_table(info->calling_fun_name);
    
    char block_text_sname[PATH_MAX];
    xstrncpy(block_text_sname, gNodes[node].uValue.sMethodBlock.mBlockTextSName, PATH_MAX);
    int block_text_sline = gNodes[node].uValue.sMethodBlock.mBlockTextSLine;

    int sline = info->sline;

    /// params ///
    if(fun->mNumParams < 2) {
        compile_err_msg(info, "unexpected method block");
        return FALSE;
    }

    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
    sNodeType* lambda_type = fun->mParamTypes[fun->mNumParams-1];

    int num_params = lambda_type->mNumParams;
    
    sNodeType* result_type2 = NULL;
    if(result_type) {
        result_type2 = clone_node_type(result_type);
    }
    else {
        if(lambda_type->mResultType == NULL) {
            result_type2 = NULL;
        }
        else {
            result_type2 = clone_node_type(lambda_type->mResultType);
        }
    }

    if(info->method_block_generics_type && result_type2) {
        if(!solve_generics(&result_type2, info->method_block_generics_type)) 
        {
            compile_err_msg(info, "Can't solve generics types(3)");
            show_node_type(result_type2);
            show_node_type(info->generics_type);
            return FALSE;
        }
    }
    
    if(num_params == 0) {
        compile_err_msg(info, "require parent stack parametor");
        return FALSE;
    }

    char type_name[VAR_NAME_MAX];
    xstrncpy(type_name, gNodes[node].uValue.sMethodBlock.mCurrentStackFrameTypeName, VAR_NAME_MAX);
//    create_current_stack_frame_struct(type_name, lv_table);

    sNodeType* current_stack_frame_type = create_node_type_with_class_name(type_name);
    current_stack_frame_type->mPointerNum++;

    xstrncpy(params[0].mName, "parent", VAR_NAME_MAX);
    params[0].mType = current_stack_frame_type;

    int i;
    for(i=1; i<num_params; i++) {
        char param_name[VAR_NAME_MAX];
        snprintf(param_name, VAR_NAME_MAX, "it%d", i);

        if(strcmp(param_name, "it1") == 0) {
            xstrncpy(param_name, "it", VAR_NAME_MAX);
        }

        xstrncpy(params[i].mName, param_name, VAR_NAME_MAX);
        params[i].mType = clone_node_type(lambda_type->mParamTypes[i]);

        if(info->method_block_generics_type) {
            if(!solve_generics(&params[i].mType, info->method_block_generics_type)) 
            {
                compile_err_msg(info, "Can't solve generics types(3)");
                show_node_type(params[i].mType);
                show_node_type(info->generics_type);
                return FALSE;
            }
        }
    }

    sNodeBlock* node_block = ALLOC sNodeBlock_alloc();

    sParserInfo pinfo;
    pinfo = *info->pinfo;
    pinfo.p = block_text;

    xstrncpy(pinfo.sname, block_text_sname, PATH_MAX);
    pinfo.sline = block_text_sline;
    
    sVarTable* block_var_table = init_block_vtable(NULL, FALSE);
    pinfo.lv_table = block_var_table;

    for(i=0; i<num_params; i++) {
        sParserParam* param = params + i;

        BOOL readonly = TRUE;
        if(!add_variable_to_table(pinfo.lv_table, param->mName, param->mType, readonly, gNullLVALUE, -1, FALSE, FALSE, TRUE))
        {
            return FALSE;
        }
    }
    pinfo.lv_table_method_block_parent = info->pinfo->lv_table;

    expect_next_character_with_one_forward("{", &pinfo);

    BOOL single_expression = FALSE;
    BOOL result_type_is_void = FALSE;
    if(result_type && type_identify_with_class_name(result_type, "void") && result_type->mPointerNum == 0) {
        result_type_is_void = TRUE;
    }
    if(!parse_block(node_block, FALSE, single_expression, result_type_is_void, FALSE, FALSE, &pinfo)) {
        sNodeBlock_free(node_block);
        return FALSE;
    }
    
    if(result_type2 == NULL) {
        result_type2 = clone_node_type(info->return_result_type);
    }

    expect_next_character_with_one_forward("}", &pinfo);

    char fun_name[VAR_NAME_MAX];
    create_lambda_name(fun_name, VAR_NAME_MAX, pinfo.module_name);

    BOOL lambda_ = TRUE;
    BOOL simple_lambda_param = TRUE;
    BOOL construct_fun = FALSE;
    BOOL operator_fun = FALSE;

    result_type2->mStatic = TRUE;
    BOOL immutable_ = TRUE;

    unsigned int node2 = sNodeTree_create_function(fun_name, "", params, num_params, result_type2, MANAGED node_block, lambda_, block_var_table, NULL, operator_fun, construct_fun, simple_lambda_param, &pinfo, FALSE, FALSE, 0, FALSE, -1, fun_name, sline, immutable_);
    info->inline_result_variable = inline_result_variable;

    return compile(node2, info);
}

unsigned int sNodeTree_create_external_function(char* fun_name, char* asm_fname, sParserParam* params, int num_params, BOOL var_arg, sNodeType* result_type, char* struct_name, BOOL operator_fun, int version, BOOL immutable_, BOOL flag_asm_fun_name, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeExternalFunction;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    xstrncpy(gNodes[node].uValue.sFunction.mName, fun_name, VAR_NAME_MAX);
    xstrncpy(gNodes[node].uValue.sFunction.mAsmName, asm_fname, VAR_NAME_MAX);

    int i;
    for(i=0; i<num_params; i++) {
        gNodes[node].uValue.sFunction.mParams[i] = params[i]; // copy struct
        gNodes[node].uValue.sFunction.mParams[i].mType = clone_node_type(params[i].mType);

    }

    gNodes[node].uValue.sFunction.mNumParams = num_params;
    gNodes[node].uValue.sFunction.mResultType = clone_node_type(result_type);
    gNodes[node].uValue.sFunction.mVarArg = var_arg;
    gNodes[node].uValue.sFunction.mOperatorFun = operator_fun;
    gNodes[node].uValue.sFunction.mVersion = version;
    gNodes[node].uValue.sFunction.mImmutable = immutable_;
    gNodes[node].uValue.sFunction.mFlagAsmFunName = flag_asm_fun_name;

    if(struct_name && strcmp(struct_name, "") != 0) {
        xstrncpy(gNodes[node].uValue.sFunction.mStructName, struct_name, VAR_NAME_MAX);
    }
    else {
        xstrncpy(gNodes[node].uValue.sFunction.mStructName, "", VAR_NAME_MAX);
    }

    return node;
}

BOOL compile_external_function(unsigned int node, sCompileInfo* info)
{
    char* struct_name = gNodes[node].uValue.sFunction.mStructName;
    
    BOOL flag_asm_fun_name = gNodes[node].uValue.sFunction.mFlagAsmFunName;
    
    /// rename variables ///
    char fun_name[VAR_NAME_MAX];
    if(strcmp(struct_name, "") == 0) {
        xstrncpy(fun_name, gNodes[node].uValue.sFunction.mName, VAR_NAME_MAX);
    }
    else {
        snprintf(fun_name, VAR_NAME_MAX, "%s_%s", struct_name, gNodes[node].uValue.sFunction.mName);
    }

    char asm_fun_name[VAR_NAME_MAX];
    xstrncpy(asm_fun_name, gNodes[node].uValue.sFunction.mAsmName, VAR_NAME_MAX);

    int num_params = gNodes[node].uValue.sFunction.mNumParams;

    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);

    int i;
    for(i=0; i<num_params; i++) {
        params[i] = gNodes[node].uValue.sFunction.mParams[i];
    }

    sNodeType* result_type = gNodes[node].uValue.sFunction.mResultType;
    BOOL var_arg = gNodes[node].uValue.sFunction.mVarArg;
    BOOL operator_fun = gNodes[node].uValue.sFunction.mOperatorFun;
    int version = gNodes[node].uValue.sFunction.mVersion;
    BOOL immutable_ = gNodes[node].uValue.sFunction.mImmutable;

    /// go ///
    sNodeType* param_types[PARAMS_MAX];
    char param_names[PARAMS_MAX][VAR_NAME_MAX];

    for(i=0; i<num_params; i++) {
        sNodeType* param_type = params[i].mType;

        if(!create_generics_struct_type(CLASS_NAME(param_type->mClass), param_type)) {
            compile_err_msg(info, "invalid type %s(4)", param_names[i]);
            return TRUE;
        }

        xstrncpy(param_names[i], params[i].mName, VAR_NAME_MAX);
        param_types[i] = param_type;
    }

    LLVMTypeRef llvm_param_types[PARAMS_MAX];

    for(i=0; i<num_params; i++) {
#ifdef __RASPBERRY_PI__
        if(type_identify_with_class_name(param_types[i], "__builtin_va_list") || type_identify_with_class_name(param_types[i], "va_list")) {
            llvm_param_types[i] = create_llvm_type_with_class_name("int");
            llvm_param_types[i] = LLVMArrayType(llvm_param_types[i], 1);
        }
        else {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }
#else
        if(type_identify_with_class_name(param_types[i], "__builtin_va_list") || type_identify_with_class_name(param_types[i], "va_list")) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
            llvm_param_types[i] = LLVMPointerType(llvm_param_types[i], 0);
        }
        else {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }
#endif
    }

    LLVMTypeRef llvm_result_type;

    llvm_result_type = create_llvm_type_from_node_type(result_type);

    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
    LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name);

    if(llvm_fun) {
        if(version > 0) {
            char new_fun_name[VAR_NAME_MAX];

            snprintf(new_fun_name, VAR_NAME_MAX, "%s_v%d", fun_name, version);

            char* block_text = NULL;

            char* param_names2[PARAMS_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                param_names2[i] = param_names[i];
            }
            
            char param_default_values[PARAMS_MAX][METHOD_DEFAULT_PARAM_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                xstrncpy(param_default_values[i], params[i].mDefaultValue, METHOD_DEFAULT_PARAM_MAX);
            }
            
            char* param_default_values2[PARAMS_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                param_default_values2[i] = param_default_values[i];
            }
        
            BOOL param_labels[PARAMS_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                param_labels[i] = params[i].mLabel;
            }

            BOOL generics_function = FALSE;
            if(!add_function_to_table(new_fun_name, num_params, param_names2, param_types, param_default_values2, param_labels, result_type, llvm_fun, block_text, generics_function, var_arg, 0, NULL, 0, NULL, TRUE, asm_fun_name, TRUE, NULL, info->sname, info->sline, immutable_, flag_asm_fun_name, function_type)) {
                fprintf(stderr, "overflow function table\n");
                return FALSE;
            }

            if(strcmp(asm_fun_name, "") == 0) {
                llvm_fun = LLVMAddFunction(gModule, new_fun_name, function_type);
            }
            else {
                llvm_fun = LLVMAddFunction(gModule, asm_fun_name, function_type);
            }
        }
    }
    else {
        if(version > 0) {
            char new_fun_name[VAR_NAME_MAX];

            snprintf(new_fun_name, VAR_NAME_MAX, "%s_v%d", fun_name, version);

            char* block_text = NULL;

            char* param_names2[PARAMS_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                param_names2[i] = param_names[i];
            }
            
            char param_default_values[PARAMS_MAX][METHOD_DEFAULT_PARAM_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                xstrncpy(param_default_values[i], params[i].mDefaultValue, METHOD_DEFAULT_PARAM_MAX);
            }
            
            char* param_default_values2[PARAMS_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                param_default_values2[i] = param_default_values[i];
            }
        
            BOOL param_labels[PARAMS_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                param_labels[i] = params[i].mLabel;
            }

            BOOL generics_function = FALSE;
            if(!add_function_to_table(new_fun_name, num_params, param_names2, param_types, param_default_values2, param_labels, result_type, llvm_fun, block_text, generics_function, var_arg, 0, NULL, 0, NULL, TRUE, asm_fun_name, TRUE, NULL, info->sname, info->sline, immutable_, flag_asm_fun_name, function_type)) {
                fprintf(stderr, "overflow function table\n");
                return FALSE;
            }

            if(strcmp(asm_fun_name, "") == 0) {
                llvm_fun = LLVMAddFunction(gModule, new_fun_name, function_type);
            }
            else {
                llvm_fun = LLVMAddFunction(gModule, asm_fun_name, function_type);
            }
        }
        else {
            if(strcmp(asm_fun_name, "") == 0) {
                llvm_fun = LLVMAddFunction(gModule, fun_name, function_type);
            }
            else {
#ifdef __DARWIN__
                if(flag_asm_fun_name) {
                    llvm_fun = LLVMAddFunction(gModule, asm_fun_name, function_type);
                }
                else {
                    llvm_fun = LLVMAddFunction(gModule, fun_name, function_type);
                }
#else
                llvm_fun = LLVMAddFunction(gModule, asm_fun_name, function_type);
#endif
            }
    
            char* block_text = NULL;
    
            char* param_names2[PARAMS_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                param_names2[i] = param_names[i];
            }
            
            char param_default_values[PARAMS_MAX][METHOD_DEFAULT_PARAM_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                xstrncpy(param_default_values[i], params[i].mDefaultValue, METHOD_DEFAULT_PARAM_MAX);
            }
            
            char* param_default_values2[PARAMS_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                param_default_values2[i] = param_default_values[i];
            }
        
            BOOL param_labels[PARAMS_MAX];
            for(i=0; i<PARAMS_MAX; i++) {
                param_labels[i] = params[i].mLabel;
            }
    
            BOOL generics_function = FALSE;
            if(!add_function_to_table(fun_name, num_params, param_names2, param_types, param_default_values2, param_labels, result_type, llvm_fun, block_text, generics_function, var_arg, 0, NULL, 0, NULL, TRUE, asm_fun_name, TRUE, NULL, info->sname, info->sline, immutable_, flag_asm_fun_name, function_type)) {
                fprintf(stderr, "overflow function table\n");
                return FALSE;
            }
        }
    }

    info->type = create_node_type_with_class_name("void");

    return TRUE;
}

BOOL create_generics_function(LLVMValueRef* llvm_fun, sFunction* fun, char* fun_name, sNodeType* generics_type, int num_method_generics_types, sNodeType** method_generics_types, BOOL immutable_, sCompileInfo* info)
{
    sNodeType* generics_type_before = info->generics_type;
    if(generics_type) {
        info->generics_type = clone_node_type(generics_type);
    }
    else {
        info->generics_type = NULL;
    }

    if(info->generics_type) {
        if(!solve_generics(&generics_type, generics_type_before))
        {
            compile_err_msg(info, "Can't solve generics types(3)");
            show_node_type(generics_type);
            show_node_type(info->generics_type);

            return FALSE;
        }
    }

    char real_fun_name[REAL_FUN_NAME_MAX];
    create_generics_fun_name(real_fun_name, REAL_FUN_NAME_MAX, fun_name,  generics_type, num_method_generics_types, method_generics_types);

    *llvm_fun = LLVMGetNamedFunction(gModule, real_fun_name);

    if(*llvm_fun == NULL) {
        LLVMBasicBlockRef current_block = info->current_block; //LLVMGetLastBasicBlock(gFunction);

        char* buf = fun->mBlockText;
        BOOL var_args = fun->mVarArgs;

        /// params ///
        sParserParam params[PARAMS_MAX];
        memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);

        int num_params = fun->mNumParams;
        int i;
        for(i=0; i<num_params; i++) {
            sParserParam* param = params + i;

            xstrncpy(param->mName, fun->mParamNames[i], VAR_NAME_MAX);

            param->mType = clone_node_type(fun->mParamTypes[i]);

            if(!solve_type(&param->mType, generics_type, num_method_generics_types, method_generics_types, info)) {
                return FALSE;
            }
        }

        sParserInfo info2;

        memset(&info2, 0, sizeof(sParserInfo));

        sBuf_init(&info2.mConst);

        info2.p = buf;
        xstrncpy(info2.sname, fun->mSName, PATH_MAX);
        info2.source = &buf;
        info2.module_name = info->pinfo->module_name;
        info2.lv_table = init_block_vtable(NULL, FALSE);

        if(generics_type) {
            info2.mGenericsType = clone_node_type(generics_type);
        }
        else {
            info2.mGenericsType = NULL;
        }

        info2.mNumGenerics = fun->mNumGenerics;
        for(i=0; i<fun->mNumGenerics; i++) {
            info2.mGenericsTypeNames[i] = strdup(fun->mGenericsTypeNames[i]);
        }
        info2.mNumMethodGenerics = fun->mNumMethodGenerics;
        for(i=0; i<fun->mNumMethodGenerics; i++) {
            info2.mMethodGenericsTypeNames[i] = strdup(fun->mMethodGenericsTypeNames[i]);
        }

        sNodeType* result_type = clone_node_type(fun->mResultType);

        if(!solve_type(&result_type,  generics_type, num_method_generics_types, method_generics_types, info)) {
            return FALSE;
        }

        xstrncpy(info2.fun_name, fun->mName, VAR_NAME_MAX);

        sNodeBlock* node_block = ALLOC sNodeBlock_alloc();
        expect_next_character_with_one_forward("{", &info2);
        sVarTable* old_table = info2.lv_table;

        info2.lv_table = init_block_vtable(old_table, FALSE);
        sVarTable* block_var_table = info2.lv_table;
        for(i=0; i<num_params; i++) {
            sParserParam param = params[i];

            BOOL readonly = FALSE;
            if(!add_variable_to_table(info2.lv_table, param.mName, param.mType, readonly, gNullLVALUE, -1, FALSE, FALSE, TRUE))
            {
                compile_err_msg(info, "overflow variable table");
                return FALSE;
            }
        }

        info2.sline = fun->mSLine + 1; //info->pinfo->sline;
        
        BOOL result_type_is_void = FALSE;
        if(result_type && type_identify_with_class_name(result_type, "void") && result_type->mPointerNum == 0) {
            result_type_is_void = TRUE;
        }
        
        if(!parse_block(node_block, FALSE, FALSE, result_type_is_void, FALSE, TRUE, &info2)) {
            sNodeBlock_free(node_block);
            return FALSE;
        }

        if(info2.err_num > 0 && !gNCHeader) {
            fprintf(stderr, "Parser error number is %d. ", info2.err_num);
            return FALSE;
        }

        expect_next_character_with_one_forward("}", &info2);
        info2.lv_table = old_table;

        BOOL lambda_ = FALSE;
        BOOL simple_lambda_param = FALSE;
        BOOL constructor_fun = FALSE;
        BOOL operator_fun = FALSE;
        BOOL generics_function = FALSE;
        int version = 0;
        BOOL finalize = FALSE;
        int generics_fun_num = 0;
        char* struct_name = NULL;

        result_type->mStatic = TRUE;

        unsigned int node = sNodeTree_create_function(real_fun_name, real_fun_name, params, num_params, result_type, MANAGED node_block, lambda_, block_var_table, struct_name, operator_fun, constructor_fun, simple_lambda_param, &info2, generics_function, var_args, version, finalize, generics_fun_num, fun->mName, 0, immutable_);

        sCompileInfo cinfo;

        memset(&cinfo, 0, sizeof(sCompileInfo));

        cinfo.pinfo = info->pinfo;
        cinfo.sline = fun->mSLine + 1; //info->sline;
        xstrncpy(cinfo.sname, fun->mSName, PATH_MAX);
        if(info->generics_type) {
            cinfo.generics_type = clone_node_type(info->generics_type);
        }
        else {
            cinfo.generics_type = NULL;
        }
        xstrncpy(cinfo.generics_sname, info->sname, PATH_MAX);
        cinfo.generics_sline = info->sline;

        cinfo.in_generics_function = TRUE;
        
        if(info->num_method_generics_types > 0) {
            cinfo.num_method_generics_types = info->num_method_generics_types;
            int i;
            for(i=0; i<cinfo.num_method_generics_types; i++) {
                cinfo.method_generics_types[i] = clone_node_type(info->method_generics_types[i]);
            }
        }

        if(!compile(node, &cinfo)) {
            return FALSE;
        }
        if(cinfo.err_num > 0 && !gNCHeader) {
            fprintf(stderr, "Compile error number is %d. ", cinfo.err_num);
            return FALSE;
        }

        llvm_change_block(current_block, info);

        *llvm_fun = LLVMGetNamedFunction(gModule, real_fun_name);
    }

    info->generics_type = generics_type_before;

    return TRUE;
}

unsigned int sNodeTree_create_dupe_function(char* old_fun_name, char* new_fun_name, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeDupeFunction;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    xstrncpy(gNodes[node].uValue.sFunction.mName, old_fun_name, VAR_NAME_MAX);
    xstrncpy(gNodes[node].uValue.sFunction.mAsmName, new_fun_name, VAR_NAME_MAX);

    return node;
}

BOOL compile_dupe_function(unsigned int node, sCompileInfo* info)
{
    char old_fun_name[VAR_NAME_MAX];
    char new_fun_name[VAR_NAME_MAX];

    xstrncpy(old_fun_name, gNodes[node].uValue.sFunction.mName, VAR_NAME_MAX);
    xstrncpy(new_fun_name, gNodes[node].uValue.sFunction.mAsmName, VAR_NAME_MAX);

    if(!dupe_function(old_fun_name, new_fun_name)) {
        return FALSE;
    }
    
    return TRUE;
}

